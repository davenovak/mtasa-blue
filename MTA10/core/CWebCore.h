/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*               (Shared logic for modifications)
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        core/CWebCore.h
*  PURPOSE:     Webbrowser class
*
*****************************************************************************/

#ifndef __CWEBCORE_H
#define __CWEBCORE_H

#include <core/CWebCoreInterface.h>
#include <Awesomium/WebCore.h>
#define MTA_BROWSERDATA_PATH "mta/browserdata.xml"
#define BROWSER_LIST_UPDATE_INTERVAL (24*60*60)
#define BROWSER_UPDATE_URL "http://jusonex.net/aw/getlist.php"

class CWebBrowserItem;
class CWebsiteRequests;
class CWebView;
struct IAudioSessionManager2;

class CWebCore : public CWebCoreInterface, public Awesomium::ResourceInterceptor
{
public:
    CWebCore();
    ~CWebCore();
    bool                Initialise          ();

    CWebViewInterface*  CreateWebView       ( unsigned int uiWidth, unsigned int uiHeight, bool bIsLocal );
    void                DestroyWebView      ( CWebViewInterface* pWebViewInterface );
    void                DoPulse             ();
    
    eURLState           GetURLState         ( const SString& strURL );
    void                ResetFilter         ( bool bResetRequestsOnly = true );
    void                InitialiseWhiteAndBlacklist ( bool bAddHardcoded = true, bool bAddDynamic = true );
    void                AddAllowedPage      ( const SString& strURL, eWebFilterType filterType );
    void                AddBlockedPage      ( const SString& strURL, eWebFilterType filterType );
    void                RequestPages        ( const std::vector<SString>& pages );
    void                AllowPendingPages   ();
    void                DenyPendingPages    ();

    inline bool         IsTestModeEnabled   () { return m_bTestmodeEnabled; };
    inline void         SetTestModeEnabled  ( bool bEnabled ) { m_bTestmodeEnabled = bEnabled; };

    bool                CanLoadRemotePages  ();

    bool                InitialiseCoreAudio ();
    bool                SetGlobalAudioVolume( float fVolume );

    bool                UpdateListsFromMaster();
    bool                MakeSureXMLNodesExist();
    void                LoadListsFromXML     ( bool bWhitelist, bool bBlacklist, bool bCustomBlacklist );
    void                WriteCustomBlacklist ( const std::vector<SString>& customBlacklist );
    void                GetFilterEntriesByType( std::vector<std::pair<SString, bool>>& outEntries, eWebFilterType filterType );
    static bool         StaticFetchRevisionProgress  ( double dDownloadNow, double dDownloadTotal, char* pCompletedData, size_t completedLength, void *pObj, bool bComplete, int iError );
    static bool         StaticFetchWhitelistProgress ( double dDownloadNow, double dDownloadTotal, char* pCompletedData, size_t completedLength, void *pObj, bool bComplete, int iError );
    static bool         StaticFetchBlacklistProgress ( double dDownloadNow, double dDownloadTotal, char* pCompletedData, size_t completedLength, void *pObj, bool bComplete, int iError );



    // Awesomium::ResourceInterceptor implementations
    virtual bool                          OnFilterNavigation ( int origin_process_id, int origin_routing_id, const Awesomium::WebString& method, const Awesomium::WebURL& url, bool is_main_frame );
    virtual Awesomium::ResourceResponse*  OnRequest ( Awesomium::ResourceRequest* pRequest);

    // Utilities
    static Awesomium::WebString           ToWebString ( const SString& strString );
    static SString                        ToSString   ( const Awesomium::WebString& webString );

private:
    typedef std::pair<bool, eWebFilterType> WebFilterPair;

    Awesomium::WebCore*                     m_pWebCore;
    CWebsiteRequests*                       m_pRequestsGUI;
    std::map<int, CWebView*>                m_WebViewMap;
    bool                                    m_bTestmodeEnabled;

    CFastHashMap<SString, WebFilterPair>    m_Whitelist;
    std::vector<SString>                    m_PendingRequests;

    IAudioSessionManager2*                  m_pAudioSessionManager;

    CXMLFile*                               m_pXmlConfig;
    int                                     m_iWhitelistRevision;
    int                                     m_iBlacklistRevision;
};

#endif
