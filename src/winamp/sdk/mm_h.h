

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Tue Dec 20 10:40:05 2011
 */
/* Compiler settings for mm.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __MediaMonkey_h_h__
#define __MediaMonkey_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISDBApplication_FWD_DEFINED__
#define __ISDBApplication_FWD_DEFINED__
typedef interface ISDBApplication ISDBApplication;
#endif 	/* __ISDBApplication_FWD_DEFINED__ */


#ifndef __ISDBApplicationEvents_FWD_DEFINED__
#define __ISDBApplicationEvents_FWD_DEFINED__
typedef interface ISDBApplicationEvents ISDBApplicationEvents;
#endif 	/* __ISDBApplicationEvents_FWD_DEFINED__ */


#ifndef __ISDBAlbum_FWD_DEFINED__
#define __ISDBAlbum_FWD_DEFINED__
typedef interface ISDBAlbum ISDBAlbum;
#endif 	/* __ISDBAlbum_FWD_DEFINED__ */


#ifndef __ISDBAlbums_FWD_DEFINED__
#define __ISDBAlbums_FWD_DEFINED__
typedef interface ISDBAlbums ISDBAlbums;
#endif 	/* __ISDBAlbums_FWD_DEFINED__ */


#ifndef __ISDBArtist_FWD_DEFINED__
#define __ISDBArtist_FWD_DEFINED__
typedef interface ISDBArtist ISDBArtist;
#endif 	/* __ISDBArtist_FWD_DEFINED__ */


#ifndef __ISDBArtists_FWD_DEFINED__
#define __ISDBArtists_FWD_DEFINED__
typedef interface ISDBArtists ISDBArtists;
#endif 	/* __ISDBArtists_FWD_DEFINED__ */


#ifndef __ISDBCommonDialog_FWD_DEFINED__
#define __ISDBCommonDialog_FWD_DEFINED__
typedef interface ISDBCommonDialog ISDBCommonDialog;
#endif 	/* __ISDBCommonDialog_FWD_DEFINED__ */


#ifndef __ISDBDatabase_FWD_DEFINED__
#define __ISDBDatabase_FWD_DEFINED__
typedef interface ISDBDatabase ISDBDatabase;
#endif 	/* __ISDBDatabase_FWD_DEFINED__ */


#ifndef __ISDBIniFile_FWD_DEFINED__
#define __ISDBIniFile_FWD_DEFINED__
typedef interface ISDBIniFile ISDBIniFile;
#endif 	/* __ISDBIniFile_FWD_DEFINED__ */


#ifndef __ISDBMedia_FWD_DEFINED__
#define __ISDBMedia_FWD_DEFINED__
typedef interface ISDBMedia ISDBMedia;
#endif 	/* __ISDBMedia_FWD_DEFINED__ */


#ifndef __ISDBPlayer_FWD_DEFINED__
#define __ISDBPlayer_FWD_DEFINED__
typedef interface ISDBPlayer ISDBPlayer;
#endif 	/* __ISDBPlayer_FWD_DEFINED__ */


#ifndef __ISDBProgress_FWD_DEFINED__
#define __ISDBProgress_FWD_DEFINED__
typedef interface ISDBProgress ISDBProgress;
#endif 	/* __ISDBProgress_FWD_DEFINED__ */


#ifndef __ISDBSongData_FWD_DEFINED__
#define __ISDBSongData_FWD_DEFINED__
typedef interface ISDBSongData ISDBSongData;
#endif 	/* __ISDBSongData_FWD_DEFINED__ */


#ifndef __ISDBSongIterator_FWD_DEFINED__
#define __ISDBSongIterator_FWD_DEFINED__
typedef interface ISDBSongIterator ISDBSongIterator;
#endif 	/* __ISDBSongIterator_FWD_DEFINED__ */


#ifndef __ISDBSongList_FWD_DEFINED__
#define __ISDBSongList_FWD_DEFINED__
typedef interface ISDBSongList ISDBSongList;
#endif 	/* __ISDBSongList_FWD_DEFINED__ */


#ifndef __ISDBScriptControl_FWD_DEFINED__
#define __ISDBScriptControl_FWD_DEFINED__
typedef interface ISDBScriptControl ISDBScriptControl;
#endif 	/* __ISDBScriptControl_FWD_DEFINED__ */


#ifndef __ISDBDropTarget_FWD_DEFINED__
#define __ISDBDropTarget_FWD_DEFINED__
typedef interface ISDBDropTarget ISDBDropTarget;
#endif 	/* __ISDBDropTarget_FWD_DEFINED__ */


#ifndef __ISDBPlaylist_FWD_DEFINED__
#define __ISDBPlaylist_FWD_DEFINED__
typedef interface ISDBPlaylist ISDBPlaylist;
#endif 	/* __ISDBPlaylist_FWD_DEFINED__ */


#ifndef __ISDBPlaylists_FWD_DEFINED__
#define __ISDBPlaylists_FWD_DEFINED__
typedef interface ISDBPlaylists ISDBPlaylists;
#endif 	/* __ISDBPlaylists_FWD_DEFINED__ */


#ifndef __ISDBTreeNode_FWD_DEFINED__
#define __ISDBTreeNode_FWD_DEFINED__
typedef interface ISDBTreeNode ISDBTreeNode;
#endif 	/* __ISDBTreeNode_FWD_DEFINED__ */


#ifndef __ISDBTreeNodeEvents_FWD_DEFINED__
#define __ISDBTreeNodeEvents_FWD_DEFINED__
typedef interface ISDBTreeNodeEvents ISDBTreeNodeEvents;
#endif 	/* __ISDBTreeNodeEvents_FWD_DEFINED__ */


#ifndef __ISDBTree_FWD_DEFINED__
#define __ISDBTree_FWD_DEFINED__
typedef interface ISDBTree ISDBTree;
#endif 	/* __ISDBTree_FWD_DEFINED__ */


#ifndef __ISDBTracksWindow_FWD_DEFINED__
#define __ISDBTracksWindow_FWD_DEFINED__
typedef interface ISDBTracksWindow ISDBTracksWindow;
#endif 	/* __ISDBTracksWindow_FWD_DEFINED__ */


#ifndef __ISDBDBIterator_FWD_DEFINED__
#define __ISDBDBIterator_FWD_DEFINED__
typedef interface ISDBDBIterator ISDBDBIterator;
#endif 	/* __ISDBDBIterator_FWD_DEFINED__ */


#ifndef __ISDBUIForm_FWD_DEFINED__
#define __ISDBUIForm_FWD_DEFINED__
typedef interface ISDBUIForm ISDBUIForm;
#endif 	/* __ISDBUIForm_FWD_DEFINED__ */


#ifndef __ISDBUIFormEvents_FWD_DEFINED__
#define __ISDBUIFormEvents_FWD_DEFINED__
typedef interface ISDBUIFormEvents ISDBUIFormEvents;
#endif 	/* __ISDBUIFormEvents_FWD_DEFINED__ */


#ifndef __ISDBUI_FWD_DEFINED__
#define __ISDBUI_FWD_DEFINED__
typedef interface ISDBUI ISDBUI;
#endif 	/* __ISDBUI_FWD_DEFINED__ */


#ifndef __ISDBUIButton_FWD_DEFINED__
#define __ISDBUIButton_FWD_DEFINED__
typedef interface ISDBUIButton ISDBUIButton;
#endif 	/* __ISDBUIButton_FWD_DEFINED__ */


#ifndef __ISDBUIButtonEvents_FWD_DEFINED__
#define __ISDBUIButtonEvents_FWD_DEFINED__
typedef interface ISDBUIButtonEvents ISDBUIButtonEvents;
#endif 	/* __ISDBUIButtonEvents_FWD_DEFINED__ */


#ifndef __ISDBUIEdit_FWD_DEFINED__
#define __ISDBUIEdit_FWD_DEFINED__
typedef interface ISDBUIEdit ISDBUIEdit;
#endif 	/* __ISDBUIEdit_FWD_DEFINED__ */


#ifndef __ISDBUIEditEvents_FWD_DEFINED__
#define __ISDBUIEditEvents_FWD_DEFINED__
typedef interface ISDBUIEditEvents ISDBUIEditEvents;
#endif 	/* __ISDBUIEditEvents_FWD_DEFINED__ */


#ifndef __ISDBUICommon_FWD_DEFINED__
#define __ISDBUICommon_FWD_DEFINED__
typedef interface ISDBUICommon ISDBUICommon;
#endif 	/* __ISDBUICommon_FWD_DEFINED__ */


#ifndef __ISDBUICommonEvents_FWD_DEFINED__
#define __ISDBUICommonEvents_FWD_DEFINED__
typedef interface ISDBUICommonEvents ISDBUICommonEvents;
#endif 	/* __ISDBUICommonEvents_FWD_DEFINED__ */


#ifndef __ISDBUIPanel_FWD_DEFINED__
#define __ISDBUIPanel_FWD_DEFINED__
typedef interface ISDBUIPanel ISDBUIPanel;
#endif 	/* __ISDBUIPanel_FWD_DEFINED__ */


#ifndef __ISDBUIPanelEvents_FWD_DEFINED__
#define __ISDBUIPanelEvents_FWD_DEFINED__
typedef interface ISDBUIPanelEvents ISDBUIPanelEvents;
#endif 	/* __ISDBUIPanelEvents_FWD_DEFINED__ */


#ifndef __ISDBUICheckBox_FWD_DEFINED__
#define __ISDBUICheckBox_FWD_DEFINED__
typedef interface ISDBUICheckBox ISDBUICheckBox;
#endif 	/* __ISDBUICheckBox_FWD_DEFINED__ */


#ifndef __ISDBUICheckBoxEvents_FWD_DEFINED__
#define __ISDBUICheckBoxEvents_FWD_DEFINED__
typedef interface ISDBUICheckBoxEvents ISDBUICheckBoxEvents;
#endif 	/* __ISDBUICheckBoxEvents_FWD_DEFINED__ */


#ifndef __ISDBUITranspPanel_FWD_DEFINED__
#define __ISDBUITranspPanel_FWD_DEFINED__
typedef interface ISDBUITranspPanel ISDBUITranspPanel;
#endif 	/* __ISDBUITranspPanel_FWD_DEFINED__ */


#ifndef __ISDBUITranspPanelEvents_FWD_DEFINED__
#define __ISDBUITranspPanelEvents_FWD_DEFINED__
typedef interface ISDBUITranspPanelEvents ISDBUITranspPanelEvents;
#endif 	/* __ISDBUITranspPanelEvents_FWD_DEFINED__ */


#ifndef __ISDBUILabel_FWD_DEFINED__
#define __ISDBUILabel_FWD_DEFINED__
typedef interface ISDBUILabel ISDBUILabel;
#endif 	/* __ISDBUILabel_FWD_DEFINED__ */


#ifndef __ISDBUILabelEvents_FWD_DEFINED__
#define __ISDBUILabelEvents_FWD_DEFINED__
typedef interface ISDBUILabelEvents ISDBUILabelEvents;
#endif 	/* __ISDBUILabelEvents_FWD_DEFINED__ */


#ifndef __ISDBUIActiveX_FWD_DEFINED__
#define __ISDBUIActiveX_FWD_DEFINED__
typedef interface ISDBUIActiveX ISDBUIActiveX;
#endif 	/* __ISDBUIActiveX_FWD_DEFINED__ */


#ifndef __ISDBUIActiveXEvents_FWD_DEFINED__
#define __ISDBUIActiveXEvents_FWD_DEFINED__
typedef interface ISDBUIActiveXEvents ISDBUIActiveXEvents;
#endif 	/* __ISDBUIActiveXEvents_FWD_DEFINED__ */


#ifndef __ISDBRegistry_FWD_DEFINED__
#define __ISDBRegistry_FWD_DEFINED__
typedef interface ISDBRegistry ISDBRegistry;
#endif 	/* __ISDBRegistry_FWD_DEFINED__ */


#ifndef __ISDBUIDropDown_FWD_DEFINED__
#define __ISDBUIDropDown_FWD_DEFINED__
typedef interface ISDBUIDropDown ISDBUIDropDown;
#endif 	/* __ISDBUIDropDown_FWD_DEFINED__ */


#ifndef __ISDBUIDropDownEvents_FWD_DEFINED__
#define __ISDBUIDropDownEvents_FWD_DEFINED__
typedef interface ISDBUIDropDownEvents ISDBUIDropDownEvents;
#endif 	/* __ISDBUIDropDownEvents_FWD_DEFINED__ */


#ifndef __ISDBMenuItem_FWD_DEFINED__
#define __ISDBMenuItem_FWD_DEFINED__
typedef interface ISDBMenuItem ISDBMenuItem;
#endif 	/* __ISDBMenuItem_FWD_DEFINED__ */


#ifndef __ISDBMenuItemEvents_FWD_DEFINED__
#define __ISDBMenuItemEvents_FWD_DEFINED__
typedef interface ISDBMenuItemEvents ISDBMenuItemEvents;
#endif 	/* __ISDBMenuItemEvents_FWD_DEFINED__ */


#ifndef __ISDBDevice_FWD_DEFINED__
#define __ISDBDevice_FWD_DEFINED__
typedef interface ISDBDevice ISDBDevice;
#endif 	/* __ISDBDevice_FWD_DEFINED__ */


#ifndef __ISDBUIRadioButton_FWD_DEFINED__
#define __ISDBUIRadioButton_FWD_DEFINED__
typedef interface ISDBUIRadioButton ISDBUIRadioButton;
#endif 	/* __ISDBUIRadioButton_FWD_DEFINED__ */


#ifndef __ISDBUIRadioButtonEvents_FWD_DEFINED__
#define __ISDBUIRadioButtonEvents_FWD_DEFINED__
typedef interface ISDBUIRadioButtonEvents ISDBUIRadioButtonEvents;
#endif 	/* __ISDBUIRadioButtonEvents_FWD_DEFINED__ */


#ifndef __ISDBDeviceList_FWD_DEFINED__
#define __ISDBDeviceList_FWD_DEFINED__
typedef interface ISDBDeviceList ISDBDeviceList;
#endif 	/* __ISDBDeviceList_FWD_DEFINED__ */


#ifndef __ISDBTools_FWD_DEFINED__
#define __ISDBTools_FWD_DEFINED__
typedef interface ISDBTools ISDBTools;
#endif 	/* __ISDBTools_FWD_DEFINED__ */


#ifndef __ISDBUISpinEdit_FWD_DEFINED__
#define __ISDBUISpinEdit_FWD_DEFINED__
typedef interface ISDBUISpinEdit ISDBUISpinEdit;
#endif 	/* __ISDBUISpinEdit_FWD_DEFINED__ */


#ifndef __ISDBUISpinEditEvents_FWD_DEFINED__
#define __ISDBUISpinEditEvents_FWD_DEFINED__
typedef interface ISDBUISpinEditEvents ISDBUISpinEditEvents;
#endif 	/* __ISDBUISpinEditEvents_FWD_DEFINED__ */


#ifndef __ISDBFileSystem_FWD_DEFINED__
#define __ISDBFileSystem_FWD_DEFINED__
typedef interface ISDBFileSystem ISDBFileSystem;
#endif 	/* __ISDBFileSystem_FWD_DEFINED__ */


#ifndef __ISDBTextFile_FWD_DEFINED__
#define __ISDBTextFile_FWD_DEFINED__
typedef interface ISDBTextFile ISDBTextFile;
#endif 	/* __ISDBTextFile_FWD_DEFINED__ */


#ifndef __ISDBTrackSynchStatus_FWD_DEFINED__
#define __ISDBTrackSynchStatus_FWD_DEFINED__
typedef interface ISDBTrackSynchStatus ISDBTrackSynchStatus;
#endif 	/* __ISDBTrackSynchStatus_FWD_DEFINED__ */


#ifndef __ISDBAlbumArtList_FWD_DEFINED__
#define __ISDBAlbumArtList_FWD_DEFINED__
typedef interface ISDBAlbumArtList ISDBAlbumArtList;
#endif 	/* __ISDBAlbumArtList_FWD_DEFINED__ */


#ifndef __ISDBAlbumArtItem_FWD_DEFINED__
#define __ISDBAlbumArtItem_FWD_DEFINED__
typedef interface ISDBAlbumArtItem ISDBAlbumArtItem;
#endif 	/* __ISDBAlbumArtItem_FWD_DEFINED__ */


#ifndef __ISDBImage_FWD_DEFINED__
#define __ISDBImage_FWD_DEFINED__
typedef interface ISDBImage ISDBImage;
#endif 	/* __ISDBImage_FWD_DEFINED__ */


#ifndef __ISDBHWEvents_FWD_DEFINED__
#define __ISDBHWEvents_FWD_DEFINED__
typedef interface ISDBHWEvents ISDBHWEvents;
#endif 	/* __ISDBHWEvents_FWD_DEFINED__ */


#ifndef __ISDBUITrackBar_FWD_DEFINED__
#define __ISDBUITrackBar_FWD_DEFINED__
typedef interface ISDBUITrackBar ISDBUITrackBar;
#endif 	/* __ISDBUITrackBar_FWD_DEFINED__ */


#ifndef __ISDBUITrackBarEvents_FWD_DEFINED__
#define __ISDBUITrackBarEvents_FWD_DEFINED__
typedef interface ISDBUITrackBarEvents ISDBUITrackBarEvents;
#endif 	/* __ISDBUITrackBarEvents_FWD_DEFINED__ */


#ifndef __ISDBUIDockablePanel_FWD_DEFINED__
#define __ISDBUIDockablePanel_FWD_DEFINED__
typedef interface ISDBUIDockablePanel ISDBUIDockablePanel;
#endif 	/* __ISDBUIDockablePanel_FWD_DEFINED__ */


#ifndef __ISDBUIDockablePanelEvents_FWD_DEFINED__
#define __ISDBUIDockablePanelEvents_FWD_DEFINED__
typedef interface ISDBUIDockablePanelEvents ISDBUIDockablePanelEvents;
#endif 	/* __ISDBUIDockablePanelEvents_FWD_DEFINED__ */


#ifndef __ISDBTimer_FWD_DEFINED__
#define __ISDBTimer_FWD_DEFINED__
typedef interface ISDBTimer ISDBTimer;
#endif 	/* __ISDBTimer_FWD_DEFINED__ */


#ifndef __ISDBTimerEvents_FWD_DEFINED__
#define __ISDBTimerEvents_FWD_DEFINED__
typedef interface ISDBTimerEvents ISDBTimerEvents;
#endif 	/* __ISDBTimerEvents_FWD_DEFINED__ */


#ifndef __ISDBStringList_FWD_DEFINED__
#define __ISDBStringList_FWD_DEFINED__
typedef interface ISDBStringList ISDBStringList;
#endif 	/* __ISDBStringList_FWD_DEFINED__ */


#ifndef __ISDBWebSearch_FWD_DEFINED__
#define __ISDBWebSearch_FWD_DEFINED__
typedef interface ISDBWebSearch ISDBWebSearch;
#endif 	/* __ISDBWebSearch_FWD_DEFINED__ */


#ifndef __ISDBUIGroupBox_FWD_DEFINED__
#define __ISDBUIGroupBox_FWD_DEFINED__
typedef interface ISDBUIGroupBox ISDBUIGroupBox;
#endif 	/* __ISDBUIGroupBox_FWD_DEFINED__ */


#ifndef __ISDBUIGroupBoxEvents_FWD_DEFINED__
#define __ISDBUIGroupBoxEvents_FWD_DEFINED__
typedef interface ISDBUIGroupBoxEvents ISDBUIGroupBoxEvents;
#endif 	/* __ISDBUIGroupBoxEvents_FWD_DEFINED__ */


#ifndef __ISDBUIMultiLineEdit_FWD_DEFINED__
#define __ISDBUIMultiLineEdit_FWD_DEFINED__
typedef interface ISDBUIMultiLineEdit ISDBUIMultiLineEdit;
#endif 	/* __ISDBUIMultiLineEdit_FWD_DEFINED__ */


#ifndef __ISDBUIMultiLineEditEvents_FWD_DEFINED__
#define __ISDBUIMultiLineEditEvents_FWD_DEFINED__
typedef interface ISDBUIMultiLineEditEvents ISDBUIMultiLineEditEvents;
#endif 	/* __ISDBUIMultiLineEditEvents_FWD_DEFINED__ */


#ifndef __ISDBUIMaskEdit_FWD_DEFINED__
#define __ISDBUIMaskEdit_FWD_DEFINED__
typedef interface ISDBUIMaskEdit ISDBUIMaskEdit;
#endif 	/* __ISDBUIMaskEdit_FWD_DEFINED__ */


#ifndef __ISDBUIMaskEditEvents_FWD_DEFINED__
#define __ISDBUIMaskEditEvents_FWD_DEFINED__
typedef interface ISDBUIMaskEditEvents ISDBUIMaskEditEvents;
#endif 	/* __ISDBUIMaskEditEvents_FWD_DEFINED__ */


#ifndef __ISDBUIListBox_FWD_DEFINED__
#define __ISDBUIListBox_FWD_DEFINED__
typedef interface ISDBUIListBox ISDBUIListBox;
#endif 	/* __ISDBUIListBox_FWD_DEFINED__ */


#ifndef __ISDBUIListBoxEvents_FWD_DEFINED__
#define __ISDBUIListBoxEvents_FWD_DEFINED__
typedef interface ISDBUIListBoxEvents ISDBUIListBoxEvents;
#endif 	/* __ISDBUIListBoxEvents_FWD_DEFINED__ */


#ifndef __ISDBUITreeList_FWD_DEFINED__
#define __ISDBUITreeList_FWD_DEFINED__
typedef interface ISDBUITreeList ISDBUITreeList;
#endif 	/* __ISDBUITreeList_FWD_DEFINED__ */


#ifndef __ISDBUITreeListEvents_FWD_DEFINED__
#define __ISDBUITreeListEvents_FWD_DEFINED__
typedef interface ISDBUITreeListEvents ISDBUITreeListEvents;
#endif 	/* __ISDBUITreeListEvents_FWD_DEFINED__ */


#ifndef __ISDBUITreeListItem_FWD_DEFINED__
#define __ISDBUITreeListItem_FWD_DEFINED__
typedef interface ISDBUITreeListItem ISDBUITreeListItem;
#endif 	/* __ISDBUITreeListItem_FWD_DEFINED__ */


#ifndef __ISDBUITreeListItemEvents_FWD_DEFINED__
#define __ISDBUITreeListItemEvents_FWD_DEFINED__
typedef interface ISDBUITreeListItemEvents ISDBUITreeListItemEvents;
#endif 	/* __ISDBUITreeListItemEvents_FWD_DEFINED__ */


#ifndef __ISDBDownloader_FWD_DEFINED__
#define __ISDBDownloader_FWD_DEFINED__
typedef interface ISDBDownloader ISDBDownloader;
#endif 	/* __ISDBDownloader_FWD_DEFINED__ */


#ifndef __ISDBCollection_FWD_DEFINED__
#define __ISDBCollection_FWD_DEFINED__
typedef interface ISDBCollection ISDBCollection;
#endif 	/* __ISDBCollection_FWD_DEFINED__ */


#ifndef __ISDBCollections_FWD_DEFINED__
#define __ISDBCollections_FWD_DEFINED__
typedef interface ISDBCollections ISDBCollections;
#endif 	/* __ISDBCollections_FWD_DEFINED__ */


#ifndef __SDBAlbum_FWD_DEFINED__
#define __SDBAlbum_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBAlbum SDBAlbum;
#else
typedef struct SDBAlbum SDBAlbum;
#endif /* __cplusplus */

#endif 	/* __SDBAlbum_FWD_DEFINED__ */


#ifndef __SDBAlbums_FWD_DEFINED__
#define __SDBAlbums_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBAlbums SDBAlbums;
#else
typedef struct SDBAlbums SDBAlbums;
#endif /* __cplusplus */

#endif 	/* __SDBAlbums_FWD_DEFINED__ */


#ifndef __SDBArtist_FWD_DEFINED__
#define __SDBArtist_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBArtist SDBArtist;
#else
typedef struct SDBArtist SDBArtist;
#endif /* __cplusplus */

#endif 	/* __SDBArtist_FWD_DEFINED__ */


#ifndef __SDBArtists_FWD_DEFINED__
#define __SDBArtists_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBArtists SDBArtists;
#else
typedef struct SDBArtists SDBArtists;
#endif /* __cplusplus */

#endif 	/* __SDBArtists_FWD_DEFINED__ */


#ifndef __SDBCommonDialog_FWD_DEFINED__
#define __SDBCommonDialog_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBCommonDialog SDBCommonDialog;
#else
typedef struct SDBCommonDialog SDBCommonDialog;
#endif /* __cplusplus */

#endif 	/* __SDBCommonDialog_FWD_DEFINED__ */


#ifndef __SDBDatabase_FWD_DEFINED__
#define __SDBDatabase_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDatabase SDBDatabase;
#else
typedef struct SDBDatabase SDBDatabase;
#endif /* __cplusplus */

#endif 	/* __SDBDatabase_FWD_DEFINED__ */


#ifndef __SDBIniFile_FWD_DEFINED__
#define __SDBIniFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBIniFile SDBIniFile;
#else
typedef struct SDBIniFile SDBIniFile;
#endif /* __cplusplus */

#endif 	/* __SDBIniFile_FWD_DEFINED__ */


#ifndef __SDBMedia_FWD_DEFINED__
#define __SDBMedia_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBMedia SDBMedia;
#else
typedef struct SDBMedia SDBMedia;
#endif /* __cplusplus */

#endif 	/* __SDBMedia_FWD_DEFINED__ */


#ifndef __SDBPlayer_FWD_DEFINED__
#define __SDBPlayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBPlayer SDBPlayer;
#else
typedef struct SDBPlayer SDBPlayer;
#endif /* __cplusplus */

#endif 	/* __SDBPlayer_FWD_DEFINED__ */


#ifndef __SDBProgress_FWD_DEFINED__
#define __SDBProgress_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBProgress SDBProgress;
#else
typedef struct SDBProgress SDBProgress;
#endif /* __cplusplus */

#endif 	/* __SDBProgress_FWD_DEFINED__ */


#ifndef __SDBSongData_FWD_DEFINED__
#define __SDBSongData_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBSongData SDBSongData;
#else
typedef struct SDBSongData SDBSongData;
#endif /* __cplusplus */

#endif 	/* __SDBSongData_FWD_DEFINED__ */


#ifndef __SDBSongIterator_FWD_DEFINED__
#define __SDBSongIterator_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBSongIterator SDBSongIterator;
#else
typedef struct SDBSongIterator SDBSongIterator;
#endif /* __cplusplus */

#endif 	/* __SDBSongIterator_FWD_DEFINED__ */


#ifndef __SDBSongList_FWD_DEFINED__
#define __SDBSongList_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBSongList SDBSongList;
#else
typedef struct SDBSongList SDBSongList;
#endif /* __cplusplus */

#endif 	/* __SDBSongList_FWD_DEFINED__ */


#ifndef __SDBScriptControl_FWD_DEFINED__
#define __SDBScriptControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBScriptControl SDBScriptControl;
#else
typedef struct SDBScriptControl SDBScriptControl;
#endif /* __cplusplus */

#endif 	/* __SDBScriptControl_FWD_DEFINED__ */


#ifndef __SDBDropTarget_FWD_DEFINED__
#define __SDBDropTarget_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDropTarget SDBDropTarget;
#else
typedef struct SDBDropTarget SDBDropTarget;
#endif /* __cplusplus */

#endif 	/* __SDBDropTarget_FWD_DEFINED__ */


#ifndef __SDBDropTargetNext_FWD_DEFINED__
#define __SDBDropTargetNext_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDropTargetNext SDBDropTargetNext;
#else
typedef struct SDBDropTargetNext SDBDropTargetNext;
#endif /* __cplusplus */

#endif 	/* __SDBDropTargetNext_FWD_DEFINED__ */


#ifndef __SDBDropTargetLast_FWD_DEFINED__
#define __SDBDropTargetLast_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDropTargetLast SDBDropTargetLast;
#else
typedef struct SDBDropTargetLast SDBDropTargetLast;
#endif /* __cplusplus */

#endif 	/* __SDBDropTargetLast_FWD_DEFINED__ */


#ifndef __SDBPlaylist_FWD_DEFINED__
#define __SDBPlaylist_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBPlaylist SDBPlaylist;
#else
typedef struct SDBPlaylist SDBPlaylist;
#endif /* __cplusplus */

#endif 	/* __SDBPlaylist_FWD_DEFINED__ */


#ifndef __SDBPlaylists_FWD_DEFINED__
#define __SDBPlaylists_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBPlaylists SDBPlaylists;
#else
typedef struct SDBPlaylists SDBPlaylists;
#endif /* __cplusplus */

#endif 	/* __SDBPlaylists_FWD_DEFINED__ */


#ifndef __SDBTree_FWD_DEFINED__
#define __SDBTree_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBTree SDBTree;
#else
typedef struct SDBTree SDBTree;
#endif /* __cplusplus */

#endif 	/* __SDBTree_FWD_DEFINED__ */


#ifndef __SDBTracksWindow_FWD_DEFINED__
#define __SDBTracksWindow_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBTracksWindow SDBTracksWindow;
#else
typedef struct SDBTracksWindow SDBTracksWindow;
#endif /* __cplusplus */

#endif 	/* __SDBTracksWindow_FWD_DEFINED__ */


#ifndef __SDBDBIterator_FWD_DEFINED__
#define __SDBDBIterator_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDBIterator SDBDBIterator;
#else
typedef struct SDBDBIterator SDBDBIterator;
#endif /* __cplusplus */

#endif 	/* __SDBDBIterator_FWD_DEFINED__ */


#ifndef __SDBUIForm_FWD_DEFINED__
#define __SDBUIForm_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIForm SDBUIForm;
#else
typedef struct SDBUIForm SDBUIForm;
#endif /* __cplusplus */

#endif 	/* __SDBUIForm_FWD_DEFINED__ */


#ifndef __SDBUI_FWD_DEFINED__
#define __SDBUI_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUI SDBUI;
#else
typedef struct SDBUI SDBUI;
#endif /* __cplusplus */

#endif 	/* __SDBUI_FWD_DEFINED__ */


#ifndef __SDBUIButton_FWD_DEFINED__
#define __SDBUIButton_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIButton SDBUIButton;
#else
typedef struct SDBUIButton SDBUIButton;
#endif /* __cplusplus */

#endif 	/* __SDBUIButton_FWD_DEFINED__ */


#ifndef __SDBUIEdit_FWD_DEFINED__
#define __SDBUIEdit_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIEdit SDBUIEdit;
#else
typedef struct SDBUIEdit SDBUIEdit;
#endif /* __cplusplus */

#endif 	/* __SDBUIEdit_FWD_DEFINED__ */


#ifndef __SDBUIPanel_FWD_DEFINED__
#define __SDBUIPanel_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIPanel SDBUIPanel;
#else
typedef struct SDBUIPanel SDBUIPanel;
#endif /* __cplusplus */

#endif 	/* __SDBUIPanel_FWD_DEFINED__ */


#ifndef __SDBUICheckBox_FWD_DEFINED__
#define __SDBUICheckBox_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUICheckBox SDBUICheckBox;
#else
typedef struct SDBUICheckBox SDBUICheckBox;
#endif /* __cplusplus */

#endif 	/* __SDBUICheckBox_FWD_DEFINED__ */


#ifndef __SDBUITranspPanel_FWD_DEFINED__
#define __SDBUITranspPanel_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUITranspPanel SDBUITranspPanel;
#else
typedef struct SDBUITranspPanel SDBUITranspPanel;
#endif /* __cplusplus */

#endif 	/* __SDBUITranspPanel_FWD_DEFINED__ */


#ifndef __SDBUILabel_FWD_DEFINED__
#define __SDBUILabel_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUILabel SDBUILabel;
#else
typedef struct SDBUILabel SDBUILabel;
#endif /* __cplusplus */

#endif 	/* __SDBUILabel_FWD_DEFINED__ */


#ifndef __SDBUIActiveX_FWD_DEFINED__
#define __SDBUIActiveX_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIActiveX SDBUIActiveX;
#else
typedef struct SDBUIActiveX SDBUIActiveX;
#endif /* __cplusplus */

#endif 	/* __SDBUIActiveX_FWD_DEFINED__ */


#ifndef __SDBRegistry_FWD_DEFINED__
#define __SDBRegistry_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBRegistry SDBRegistry;
#else
typedef struct SDBRegistry SDBRegistry;
#endif /* __cplusplus */

#endif 	/* __SDBRegistry_FWD_DEFINED__ */


#ifndef __SDBUIDropDown_FWD_DEFINED__
#define __SDBUIDropDown_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIDropDown SDBUIDropDown;
#else
typedef struct SDBUIDropDown SDBUIDropDown;
#endif /* __cplusplus */

#endif 	/* __SDBUIDropDown_FWD_DEFINED__ */


#ifndef __SDBMenuItem_FWD_DEFINED__
#define __SDBMenuItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBMenuItem SDBMenuItem;
#else
typedef struct SDBMenuItem SDBMenuItem;
#endif /* __cplusplus */

#endif 	/* __SDBMenuItem_FWD_DEFINED__ */


#ifndef __SDBDevice_FWD_DEFINED__
#define __SDBDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDevice SDBDevice;
#else
typedef struct SDBDevice SDBDevice;
#endif /* __cplusplus */

#endif 	/* __SDBDevice_FWD_DEFINED__ */


#ifndef __SDBTreeNode_FWD_DEFINED__
#define __SDBTreeNode_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBTreeNode SDBTreeNode;
#else
typedef struct SDBTreeNode SDBTreeNode;
#endif /* __cplusplus */

#endif 	/* __SDBTreeNode_FWD_DEFINED__ */


#ifndef __SDBUIRadioButton_FWD_DEFINED__
#define __SDBUIRadioButton_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIRadioButton SDBUIRadioButton;
#else
typedef struct SDBUIRadioButton SDBUIRadioButton;
#endif /* __cplusplus */

#endif 	/* __SDBUIRadioButton_FWD_DEFINED__ */


#ifndef __SDBDeviceList_FWD_DEFINED__
#define __SDBDeviceList_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDeviceList SDBDeviceList;
#else
typedef struct SDBDeviceList SDBDeviceList;
#endif /* __cplusplus */

#endif 	/* __SDBDeviceList_FWD_DEFINED__ */


#ifndef __SDBTools_FWD_DEFINED__
#define __SDBTools_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBTools SDBTools;
#else
typedef struct SDBTools SDBTools;
#endif /* __cplusplus */

#endif 	/* __SDBTools_FWD_DEFINED__ */


#ifndef __SDBUISpinEdit_FWD_DEFINED__
#define __SDBUISpinEdit_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUISpinEdit SDBUISpinEdit;
#else
typedef struct SDBUISpinEdit SDBUISpinEdit;
#endif /* __cplusplus */

#endif 	/* __SDBUISpinEdit_FWD_DEFINED__ */


#ifndef __SDBApplication_FWD_DEFINED__
#define __SDBApplication_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBApplication SDBApplication;
#else
typedef struct SDBApplication SDBApplication;
#endif /* __cplusplus */

#endif 	/* __SDBApplication_FWD_DEFINED__ */


#ifndef __SDBFileSystem_FWD_DEFINED__
#define __SDBFileSystem_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBFileSystem SDBFileSystem;
#else
typedef struct SDBFileSystem SDBFileSystem;
#endif /* __cplusplus */

#endif 	/* __SDBFileSystem_FWD_DEFINED__ */


#ifndef __SDBTextFile_FWD_DEFINED__
#define __SDBTextFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBTextFile SDBTextFile;
#else
typedef struct SDBTextFile SDBTextFile;
#endif /* __cplusplus */

#endif 	/* __SDBTextFile_FWD_DEFINED__ */


#ifndef __SDBTrackSynchStatus_FWD_DEFINED__
#define __SDBTrackSynchStatus_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBTrackSynchStatus SDBTrackSynchStatus;
#else
typedef struct SDBTrackSynchStatus SDBTrackSynchStatus;
#endif /* __cplusplus */

#endif 	/* __SDBTrackSynchStatus_FWD_DEFINED__ */


#ifndef __SDBAlbumArtList_FWD_DEFINED__
#define __SDBAlbumArtList_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBAlbumArtList SDBAlbumArtList;
#else
typedef struct SDBAlbumArtList SDBAlbumArtList;
#endif /* __cplusplus */

#endif 	/* __SDBAlbumArtList_FWD_DEFINED__ */


#ifndef __SDBAlbumArtItem_FWD_DEFINED__
#define __SDBAlbumArtItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBAlbumArtItem SDBAlbumArtItem;
#else
typedef struct SDBAlbumArtItem SDBAlbumArtItem;
#endif /* __cplusplus */

#endif 	/* __SDBAlbumArtItem_FWD_DEFINED__ */


#ifndef __SDBImage_FWD_DEFINED__
#define __SDBImage_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBImage SDBImage;
#else
typedef struct SDBImage SDBImage;
#endif /* __cplusplus */

#endif 	/* __SDBImage_FWD_DEFINED__ */


#ifndef __SDBHWEvents_FWD_DEFINED__
#define __SDBHWEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBHWEvents SDBHWEvents;
#else
typedef struct SDBHWEvents SDBHWEvents;
#endif /* __cplusplus */

#endif 	/* __SDBHWEvents_FWD_DEFINED__ */


#ifndef __SDBDropTargetRip_FWD_DEFINED__
#define __SDBDropTargetRip_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDropTargetRip SDBDropTargetRip;
#else
typedef struct SDBDropTargetRip SDBDropTargetRip;
#endif /* __cplusplus */

#endif 	/* __SDBDropTargetRip_FWD_DEFINED__ */


#ifndef __SDBUITrackBar_FWD_DEFINED__
#define __SDBUITrackBar_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUITrackBar SDBUITrackBar;
#else
typedef struct SDBUITrackBar SDBUITrackBar;
#endif /* __cplusplus */

#endif 	/* __SDBUITrackBar_FWD_DEFINED__ */


#ifndef __SDBUIDockablePanel_FWD_DEFINED__
#define __SDBUIDockablePanel_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIDockablePanel SDBUIDockablePanel;
#else
typedef struct SDBUIDockablePanel SDBUIDockablePanel;
#endif /* __cplusplus */

#endif 	/* __SDBUIDockablePanel_FWD_DEFINED__ */


#ifndef __SDBTimer_FWD_DEFINED__
#define __SDBTimer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBTimer SDBTimer;
#else
typedef struct SDBTimer SDBTimer;
#endif /* __cplusplus */

#endif 	/* __SDBTimer_FWD_DEFINED__ */


#ifndef __SDBUICommon_FWD_DEFINED__
#define __SDBUICommon_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUICommon SDBUICommon;
#else
typedef struct SDBUICommon SDBUICommon;
#endif /* __cplusplus */

#endif 	/* __SDBUICommon_FWD_DEFINED__ */


#ifndef __SDBStringList_FWD_DEFINED__
#define __SDBStringList_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBStringList SDBStringList;
#else
typedef struct SDBStringList SDBStringList;
#endif /* __cplusplus */

#endif 	/* __SDBStringList_FWD_DEFINED__ */


#ifndef __SDBWebSearch_FWD_DEFINED__
#define __SDBWebSearch_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBWebSearch SDBWebSearch;
#else
typedef struct SDBWebSearch SDBWebSearch;
#endif /* __cplusplus */

#endif 	/* __SDBWebSearch_FWD_DEFINED__ */


#ifndef __SDBUIGroupBox_FWD_DEFINED__
#define __SDBUIGroupBox_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIGroupBox SDBUIGroupBox;
#else
typedef struct SDBUIGroupBox SDBUIGroupBox;
#endif /* __cplusplus */

#endif 	/* __SDBUIGroupBox_FWD_DEFINED__ */


#ifndef __SDBUIMultiLineEdit_FWD_DEFINED__
#define __SDBUIMultiLineEdit_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIMultiLineEdit SDBUIMultiLineEdit;
#else
typedef struct SDBUIMultiLineEdit SDBUIMultiLineEdit;
#endif /* __cplusplus */

#endif 	/* __SDBUIMultiLineEdit_FWD_DEFINED__ */


#ifndef __SDBUIMaskEdit_FWD_DEFINED__
#define __SDBUIMaskEdit_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIMaskEdit SDBUIMaskEdit;
#else
typedef struct SDBUIMaskEdit SDBUIMaskEdit;
#endif /* __cplusplus */

#endif 	/* __SDBUIMaskEdit_FWD_DEFINED__ */


#ifndef __SDBUIListBox_FWD_DEFINED__
#define __SDBUIListBox_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUIListBox SDBUIListBox;
#else
typedef struct SDBUIListBox SDBUIListBox;
#endif /* __cplusplus */

#endif 	/* __SDBUIListBox_FWD_DEFINED__ */


#ifndef __SDBUITreeList_FWD_DEFINED__
#define __SDBUITreeList_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUITreeList SDBUITreeList;
#else
typedef struct SDBUITreeList SDBUITreeList;
#endif /* __cplusplus */

#endif 	/* __SDBUITreeList_FWD_DEFINED__ */


#ifndef __SDBUITreeListItem_FWD_DEFINED__
#define __SDBUITreeListItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBUITreeListItem SDBUITreeListItem;
#else
typedef struct SDBUITreeListItem SDBUITreeListItem;
#endif /* __cplusplus */

#endif 	/* __SDBUITreeListItem_FWD_DEFINED__ */


#ifndef __SDBDownloader_FWD_DEFINED__
#define __SDBDownloader_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBDownloader SDBDownloader;
#else
typedef struct SDBDownloader SDBDownloader;
#endif /* __cplusplus */

#endif 	/* __SDBDownloader_FWD_DEFINED__ */


#ifndef __SDBCollections_FWD_DEFINED__
#define __SDBCollections_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBCollections SDBCollections;
#else
typedef struct SDBCollections SDBCollections;
#endif /* __cplusplus */

#endif 	/* __SDBCollections_FWD_DEFINED__ */


#ifndef __SDBCollection_FWD_DEFINED__
#define __SDBCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDBCollection SDBCollection;
#else
typedef struct SDBCollection SDBCollection;
#endif /* __cplusplus */

#endif 	/* __SDBCollection_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __SongsDB_LIBRARY_DEFINED__
#define __SongsDB_LIBRARY_DEFINED__

/* library SongsDB */
/* [helpstring][version][uuid] */ 






















































































































































typedef /* [public][public][version][uuid] */  DECLSPEC_UUID("ECDC03EF-3585-4DC8-B107-99930D66B8F9") 
enum __MIDL___MIDL_itf_MediaMonkey_0000_0000_0001
    {	MsgBox_Warning	= 0,
	MsgBox_Error	= 1,
	MsgBox_Information	= 2,
	MsgBox_Confirmation	= 3
    } 	EnumMsgBox;

typedef /* [public][public][public][version][uuid] */  DECLSPEC_UUID("B065CD80-7598-4B61-80DC-CADFD5A4AD5F") 
enum __MIDL___MIDL_itf_MediaMonkey_0000_0000_0002
    {	VCD_None	= 0,
	VCD_Cached	= 1
    } 	EnumVCDStatus;

typedef /* [public][public][public][version][uuid] */  DECLSPEC_UUID("F67EE311-E705-472A-83C3-D21A3835F8DB") 
enum __MIDL___MIDL_itf_MediaMonkey_0000_0000_0003
    {	ChannelsMono	= 0,
	ChannelsStereo	= 1
    } 	EnumChannels;

typedef /* [public][public][version][uuid] */  DECLSPEC_UUID("7A35E785-6A45-45FC-B3F4-59BF7D9C4313") 
enum __MIDL___MIDL_itf_MediaMonkey_0000_0000_0004
    {	Preview_None	= 0,
	Preview_Exists	= 1
    } 	EnumPreview;

typedef /* [public][public][version][uuid] */  DECLSPEC_UUID("9831FB1D-B64C-4E09-A51C-589A2F7F140C") 
enum __MIDL___MIDL_itf_MediaMonkey_0000_0000_0005
    {	NodePos_InsertBefore	= 0,
	NodePos_InsertAfter	= 1,
	NodePos_AddChildFirst	= 2,
	NodePos_AddChildLast	= 3
    } 	EnumTreeNodePos;

typedef /* [public][public][public][version][uuid] */  DECLSPEC_UUID("78F1CD4A-6722-4B1A-8C76-4FE4CC57E8A2") 
enum __MIDL___MIDL_itf_MediaMonkey_0000_0000_0006
    {	YesNo_Default	= -1,
	YesNo_Yes	= 1,
	YesNo_No	= 0
    } 	EnumYesNo;


EXTERN_C const IID LIBID_SongsDB;

#ifndef __ISDBApplication_INTERFACE_DEFINED__
#define __ISDBApplication_INTERFACE_DEFINED__

/* interface ISDBApplication */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FAF02F8-A7D3-41F1-9210-A3B12046F136")
    ISDBApplication : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_VersionString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentSongList( 
            /* [retval][out] */ ISDBSongList **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelectedSongList( 
            /* [retval][out] */ ISDBSongList **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Player( 
            /* [retval][out] */ ISDBPlayer **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IniFile( 
            /* [retval][out] */ ISDBIniFile **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VersionHi( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VersionLo( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Database( 
            /* [retval][out] */ ISDBDatabase **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall MessageBox( 
            /* [in] */ BSTR MessageText,
            /* [in] */ EnumMsgBox MsgType,
            /* [in] */ VARIANT Buttons,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VersionRelease( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Progress( 
            /* [retval][out] */ ISDBProgress **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CommonDialog( 
            /* [retval][out] */ ISDBCommonDialog **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AllVisibleSongList( 
            /* [retval][out] */ ISDBSongList **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Localize( 
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *translated) = 0;
        
        virtual /* [id] */ HRESULT __stdcall toASCII( 
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *ASCII) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaylistByTitle( 
            /* [in] */ BSTR Title,
            /* [retval][out] */ ISDBPlaylist **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MainTree( 
            /* [retval][out] */ ISDBTree **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MainTracksWindow( 
            /* [retval][out] */ ISDBTracksWindow **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ShutdownAfterDisconnect( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ShutdownAfterDisconnect( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IsRunning( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UI( 
            /* [retval][out] */ ISDBUI **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Registry( 
            /* [retval][out] */ ISDBRegistry **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Objects( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Objects( 
            /* [in] */ BSTR Name,
            /* [in] */ IDispatch *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RegisterIcon( 
            /* [in] */ BSTR Filename,
            /* [in] */ long IconType,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewSongData( 
            /* [retval][out] */ ISDBSongData **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Device( 
            /* [retval][out] */ SDBDevice	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ApplicationPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MyMusicPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Tools( 
            /* [retval][out] */ ISDBTools **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewSongList( 
            /* [retval][out] */ ISDBSongList **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Format( 
            /* [in] */ BSTR Text,
            /* [in] */ VARIANT Param1,
            /* [in] */ VARIANT Param2,
            /* [in] */ VARIANT Param3,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall LocalizedFormat( 
            /* [in] */ BSTR Text,
            /* [in] */ VARIANT Param1,
            /* [in] */ VARIANT Param2,
            /* [in] */ VARIANT Param3,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SelectFolder( 
            /* [in] */ BSTR Folder,
            /* [in] */ BSTR ShowText,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TemporaryFolder( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ProcessMessages( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RegisterIconHandle( 
            /* [in] */ long IconHandle,
            /* [in] */ long IconType,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CreateTimer( 
            /* [in] */ long Interval,
            /* [retval][out] */ ISDBTimer **Timer) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_WebControl( 
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall LocalizeGen( 
            /* [in] */ BSTR LangFile,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *translated) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CursorType( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CursorType( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewStringList( 
            /* [retval][out] */ ISDBStringList **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RefreshScriptItems( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall IsKnownFileType( 
            /* [in] */ BSTR Filename,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IconsPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_EqualizerPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SkinsPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PluginsPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ScriptsPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VersionBuild( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_LocalScriptsPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentScriptPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ScriptsIniFile( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_GlobalScriptsPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ComServerUIActive( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ComServerUIActive( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Downloader( 
            /* [retval][out] */ ISDBDownloader **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UseAlbumGain( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_LocalPluginsPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentAddonInstallRoot( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VisibleCollectionsCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VisibleCollectionID( 
            /* [in] */ long Index,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaylistByID( 
            /* [in] */ long ID,
            /* [retval][out] */ ISDBPlaylist **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Collections( 
            /* [retval][out] */ ISDBCollections **Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBApplication * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBApplication * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VersionString )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentSongList )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBSongList **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelectedSongList )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBSongList **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Player )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBPlayer **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IniFile )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBIniFile **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VersionHi )( 
            ISDBApplication * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VersionLo )( 
            ISDBApplication * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Database )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBDatabase **Value);
        
        /* [id] */ HRESULT ( __stdcall *MessageBox )( 
            ISDBApplication * This,
            /* [in] */ BSTR MessageText,
            /* [in] */ EnumMsgBox MsgType,
            /* [in] */ VARIANT Buttons,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VersionRelease )( 
            ISDBApplication * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Progress )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBProgress **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CommonDialog )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBCommonDialog **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AllVisibleSongList )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBSongList **Value);
        
        /* [id] */ HRESULT ( __stdcall *Localize )( 
            ISDBApplication * This,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *translated);
        
        /* [id] */ HRESULT ( __stdcall *toASCII )( 
            ISDBApplication * This,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *ASCII);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaylistByTitle )( 
            ISDBApplication * This,
            /* [in] */ BSTR Title,
            /* [retval][out] */ ISDBPlaylist **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MainTree )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBTree **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MainTracksWindow )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBTracksWindow **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ShutdownAfterDisconnect )( 
            ISDBApplication * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ShutdownAfterDisconnect )( 
            ISDBApplication * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IsRunning )( 
            ISDBApplication * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UI )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBUI **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Registry )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBRegistry **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Objects )( 
            ISDBApplication * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Objects )( 
            ISDBApplication * This,
            /* [in] */ BSTR Name,
            /* [in] */ IDispatch *Value);
        
        /* [id] */ HRESULT ( __stdcall *RegisterIcon )( 
            ISDBApplication * This,
            /* [in] */ BSTR Filename,
            /* [in] */ long IconType,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewSongData )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBSongData **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Device )( 
            ISDBApplication * This,
            /* [retval][out] */ SDBDevice	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ApplicationPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MyMusicPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Tools )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBTools **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewSongList )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBSongList **Value);
        
        /* [id] */ HRESULT ( __stdcall *Format )( 
            ISDBApplication * This,
            /* [in] */ BSTR Text,
            /* [in] */ VARIANT Param1,
            /* [in] */ VARIANT Param2,
            /* [in] */ VARIANT Param3,
            /* [retval][out] */ BSTR *Result);
        
        /* [id] */ HRESULT ( __stdcall *LocalizedFormat )( 
            ISDBApplication * This,
            /* [in] */ BSTR Text,
            /* [in] */ VARIANT Param1,
            /* [in] */ VARIANT Param2,
            /* [in] */ VARIANT Param3,
            /* [retval][out] */ BSTR *Result);
        
        /* [id] */ HRESULT ( __stdcall *SelectFolder )( 
            ISDBApplication * This,
            /* [in] */ BSTR Folder,
            /* [in] */ BSTR ShowText,
            /* [retval][out] */ BSTR *Result);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TemporaryFolder )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( __stdcall *ProcessMessages )( 
            ISDBApplication * This);
        
        /* [id] */ HRESULT ( __stdcall *RegisterIconHandle )( 
            ISDBApplication * This,
            /* [in] */ long IconHandle,
            /* [in] */ long IconType,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *CreateTimer )( 
            ISDBApplication * This,
            /* [in] */ long Interval,
            /* [retval][out] */ ISDBTimer **Timer);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_WebControl )( 
            ISDBApplication * This,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id] */ HRESULT ( __stdcall *LocalizeGen )( 
            ISDBApplication * This,
            /* [in] */ BSTR LangFile,
            /* [in] */ BSTR Value,
            /* [retval][out] */ BSTR *translated);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CursorType )( 
            ISDBApplication * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CursorType )( 
            ISDBApplication * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewStringList )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBStringList **Value);
        
        /* [id] */ HRESULT ( __stdcall *RefreshScriptItems )( 
            ISDBApplication * This);
        
        /* [id] */ HRESULT ( __stdcall *IsKnownFileType )( 
            ISDBApplication * This,
            /* [in] */ BSTR Filename,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IconsPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_EqualizerPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SkinsPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PluginsPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ScriptsPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VersionBuild )( 
            ISDBApplication * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_LocalScriptsPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentScriptPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ScriptsIniFile )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_GlobalScriptsPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ComServerUIActive )( 
            ISDBApplication * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ComServerUIActive )( 
            ISDBApplication * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Downloader )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBDownloader **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UseAlbumGain )( 
            ISDBApplication * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_LocalPluginsPath )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentAddonInstallRoot )( 
            ISDBApplication * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VisibleCollectionsCount )( 
            ISDBApplication * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VisibleCollectionID )( 
            ISDBApplication * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaylistByID )( 
            ISDBApplication * This,
            /* [in] */ long ID,
            /* [retval][out] */ ISDBPlaylist **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Collections )( 
            ISDBApplication * This,
            /* [retval][out] */ ISDBCollections **Value);
        
        END_INTERFACE
    } ISDBApplicationVtbl;

    interface ISDBApplication
    {
        CONST_VTBL struct ISDBApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBApplication_get_VersionString(This,Value)	\
    ( (This)->lpVtbl -> get_VersionString(This,Value) ) 

#define ISDBApplication_get_CurrentSongList(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentSongList(This,Value) ) 

#define ISDBApplication_get_SelectedSongList(This,Value)	\
    ( (This)->lpVtbl -> get_SelectedSongList(This,Value) ) 

#define ISDBApplication_get_Player(This,Value)	\
    ( (This)->lpVtbl -> get_Player(This,Value) ) 

#define ISDBApplication_get_IniFile(This,Value)	\
    ( (This)->lpVtbl -> get_IniFile(This,Value) ) 

#define ISDBApplication_get_VersionHi(This,Value)	\
    ( (This)->lpVtbl -> get_VersionHi(This,Value) ) 

#define ISDBApplication_get_VersionLo(This,Value)	\
    ( (This)->lpVtbl -> get_VersionLo(This,Value) ) 

#define ISDBApplication_get_Database(This,Value)	\
    ( (This)->lpVtbl -> get_Database(This,Value) ) 

#define ISDBApplication_MessageBox(This,MessageText,MsgType,Buttons,Value)	\
    ( (This)->lpVtbl -> MessageBox(This,MessageText,MsgType,Buttons,Value) ) 

#define ISDBApplication_get_VersionRelease(This,Value)	\
    ( (This)->lpVtbl -> get_VersionRelease(This,Value) ) 

#define ISDBApplication_get_Progress(This,Value)	\
    ( (This)->lpVtbl -> get_Progress(This,Value) ) 

#define ISDBApplication_get_CommonDialog(This,Value)	\
    ( (This)->lpVtbl -> get_CommonDialog(This,Value) ) 

#define ISDBApplication_get_AllVisibleSongList(This,Value)	\
    ( (This)->lpVtbl -> get_AllVisibleSongList(This,Value) ) 

#define ISDBApplication_Localize(This,Value,translated)	\
    ( (This)->lpVtbl -> Localize(This,Value,translated) ) 

#define ISDBApplication_toASCII(This,Value,ASCII)	\
    ( (This)->lpVtbl -> toASCII(This,Value,ASCII) ) 

#define ISDBApplication_get_PlaylistByTitle(This,Title,Value)	\
    ( (This)->lpVtbl -> get_PlaylistByTitle(This,Title,Value) ) 

#define ISDBApplication_get_MainTree(This,Value)	\
    ( (This)->lpVtbl -> get_MainTree(This,Value) ) 

#define ISDBApplication_get_MainTracksWindow(This,Value)	\
    ( (This)->lpVtbl -> get_MainTracksWindow(This,Value) ) 

#define ISDBApplication_get_ShutdownAfterDisconnect(This,Value)	\
    ( (This)->lpVtbl -> get_ShutdownAfterDisconnect(This,Value) ) 

#define ISDBApplication_put_ShutdownAfterDisconnect(This,Value)	\
    ( (This)->lpVtbl -> put_ShutdownAfterDisconnect(This,Value) ) 

#define ISDBApplication_get_IsRunning(This,Value)	\
    ( (This)->lpVtbl -> get_IsRunning(This,Value) ) 

#define ISDBApplication_get_UI(This,Value)	\
    ( (This)->lpVtbl -> get_UI(This,Value) ) 

#define ISDBApplication_get_Registry(This,Value)	\
    ( (This)->lpVtbl -> get_Registry(This,Value) ) 

#define ISDBApplication_get_Objects(This,Name,Value)	\
    ( (This)->lpVtbl -> get_Objects(This,Name,Value) ) 

#define ISDBApplication_put_Objects(This,Name,Value)	\
    ( (This)->lpVtbl -> put_Objects(This,Name,Value) ) 

#define ISDBApplication_RegisterIcon(This,Filename,IconType,Value)	\
    ( (This)->lpVtbl -> RegisterIcon(This,Filename,IconType,Value) ) 

#define ISDBApplication_get_NewSongData(This,Value)	\
    ( (This)->lpVtbl -> get_NewSongData(This,Value) ) 

#define ISDBApplication_get_Device(This,Value)	\
    ( (This)->lpVtbl -> get_Device(This,Value) ) 

#define ISDBApplication_get_ApplicationPath(This,Value)	\
    ( (This)->lpVtbl -> get_ApplicationPath(This,Value) ) 

#define ISDBApplication_get_MyMusicPath(This,Value)	\
    ( (This)->lpVtbl -> get_MyMusicPath(This,Value) ) 

#define ISDBApplication_get_Tools(This,Value)	\
    ( (This)->lpVtbl -> get_Tools(This,Value) ) 

#define ISDBApplication_get_NewSongList(This,Value)	\
    ( (This)->lpVtbl -> get_NewSongList(This,Value) ) 

#define ISDBApplication_Format(This,Text,Param1,Param2,Param3,Result)	\
    ( (This)->lpVtbl -> Format(This,Text,Param1,Param2,Param3,Result) ) 

#define ISDBApplication_LocalizedFormat(This,Text,Param1,Param2,Param3,Result)	\
    ( (This)->lpVtbl -> LocalizedFormat(This,Text,Param1,Param2,Param3,Result) ) 

#define ISDBApplication_SelectFolder(This,Folder,ShowText,Result)	\
    ( (This)->lpVtbl -> SelectFolder(This,Folder,ShowText,Result) ) 

#define ISDBApplication_get_TemporaryFolder(This,Value)	\
    ( (This)->lpVtbl -> get_TemporaryFolder(This,Value) ) 

#define ISDBApplication_ProcessMessages(This)	\
    ( (This)->lpVtbl -> ProcessMessages(This) ) 

#define ISDBApplication_RegisterIconHandle(This,IconHandle,IconType,Value)	\
    ( (This)->lpVtbl -> RegisterIconHandle(This,IconHandle,IconType,Value) ) 

#define ISDBApplication_CreateTimer(This,Interval,Timer)	\
    ( (This)->lpVtbl -> CreateTimer(This,Interval,Timer) ) 

#define ISDBApplication_get_WebControl(This,Value)	\
    ( (This)->lpVtbl -> get_WebControl(This,Value) ) 

#define ISDBApplication_LocalizeGen(This,LangFile,Value,translated)	\
    ( (This)->lpVtbl -> LocalizeGen(This,LangFile,Value,translated) ) 

#define ISDBApplication_get_CursorType(This,Value)	\
    ( (This)->lpVtbl -> get_CursorType(This,Value) ) 

#define ISDBApplication_put_CursorType(This,Value)	\
    ( (This)->lpVtbl -> put_CursorType(This,Value) ) 

#define ISDBApplication_get_NewStringList(This,Value)	\
    ( (This)->lpVtbl -> get_NewStringList(This,Value) ) 

#define ISDBApplication_RefreshScriptItems(This)	\
    ( (This)->lpVtbl -> RefreshScriptItems(This) ) 

#define ISDBApplication_IsKnownFileType(This,Filename,Result)	\
    ( (This)->lpVtbl -> IsKnownFileType(This,Filename,Result) ) 

#define ISDBApplication_get_IconsPath(This,Value)	\
    ( (This)->lpVtbl -> get_IconsPath(This,Value) ) 

#define ISDBApplication_get_EqualizerPath(This,Value)	\
    ( (This)->lpVtbl -> get_EqualizerPath(This,Value) ) 

#define ISDBApplication_get_SkinsPath(This,Value)	\
    ( (This)->lpVtbl -> get_SkinsPath(This,Value) ) 

#define ISDBApplication_get_PluginsPath(This,Value)	\
    ( (This)->lpVtbl -> get_PluginsPath(This,Value) ) 

#define ISDBApplication_get_ScriptsPath(This,Value)	\
    ( (This)->lpVtbl -> get_ScriptsPath(This,Value) ) 

#define ISDBApplication_get_VersionBuild(This,Value)	\
    ( (This)->lpVtbl -> get_VersionBuild(This,Value) ) 

#define ISDBApplication_get_LocalScriptsPath(This,Value)	\
    ( (This)->lpVtbl -> get_LocalScriptsPath(This,Value) ) 

#define ISDBApplication_get_CurrentScriptPath(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentScriptPath(This,Value) ) 

#define ISDBApplication_get_ScriptsIniFile(This,Value)	\
    ( (This)->lpVtbl -> get_ScriptsIniFile(This,Value) ) 

#define ISDBApplication_get_GlobalScriptsPath(This,Value)	\
    ( (This)->lpVtbl -> get_GlobalScriptsPath(This,Value) ) 

#define ISDBApplication_get_ComServerUIActive(This,Value)	\
    ( (This)->lpVtbl -> get_ComServerUIActive(This,Value) ) 

#define ISDBApplication_put_ComServerUIActive(This,Value)	\
    ( (This)->lpVtbl -> put_ComServerUIActive(This,Value) ) 

#define ISDBApplication_get_Downloader(This,Value)	\
    ( (This)->lpVtbl -> get_Downloader(This,Value) ) 

#define ISDBApplication_get_UseAlbumGain(This,Value)	\
    ( (This)->lpVtbl -> get_UseAlbumGain(This,Value) ) 

#define ISDBApplication_get_LocalPluginsPath(This,Value)	\
    ( (This)->lpVtbl -> get_LocalPluginsPath(This,Value) ) 

#define ISDBApplication_get_CurrentAddonInstallRoot(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentAddonInstallRoot(This,Value) ) 

#define ISDBApplication_get_VisibleCollectionsCount(This,Value)	\
    ( (This)->lpVtbl -> get_VisibleCollectionsCount(This,Value) ) 

#define ISDBApplication_get_VisibleCollectionID(This,Index,Value)	\
    ( (This)->lpVtbl -> get_VisibleCollectionID(This,Index,Value) ) 

#define ISDBApplication_get_PlaylistByID(This,ID,Value)	\
    ( (This)->lpVtbl -> get_PlaylistByID(This,ID,Value) ) 

#define ISDBApplication_get_Collections(This,Value)	\
    ( (This)->lpVtbl -> get_Collections(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBApplication_INTERFACE_DEFINED__ */


#ifndef __ISDBApplicationEvents_DISPINTERFACE_DEFINED__
#define __ISDBApplicationEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBApplicationEvents */
/* [version][uuid] */ 


EXTERN_C const IID DIID_ISDBApplicationEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ABF1895B-1032-45E1-A119-8926831F7167")
    ISDBApplicationEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBApplicationEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBApplicationEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBApplicationEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBApplicationEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBApplicationEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBApplicationEventsVtbl;

    interface ISDBApplicationEvents
    {
        CONST_VTBL struct ISDBApplicationEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBApplicationEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBApplicationEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBApplicationEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBApplicationEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBApplicationEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBApplicationEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBApplicationEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBApplicationEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBAlbum_INTERFACE_DEFINED__
#define __ISDBAlbum_INTERFACE_DEFINED__

/* interface ISDBAlbum */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBAlbum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5592C36F-B292-440A-9547-70653F1386B5")
    ISDBAlbum : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Artist( 
            /* [retval][out] */ ISDBArtist **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Name( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UpdateDB( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumArt( 
            /* [retval][out] */ SDBAlbumArtList	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Tracks( 
            /* [retval][out] */ SDBSongList	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumLength( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumLengthString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBAlbumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBAlbum * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBAlbum * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBAlbum * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBAlbum * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBAlbum * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBAlbum * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBAlbum * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Artist )( 
            ISDBAlbum * This,
            /* [retval][out] */ ISDBArtist **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ID )( 
            ISDBAlbum * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Name )( 
            ISDBAlbum * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Name )( 
            ISDBAlbum * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *UpdateDB )( 
            ISDBAlbum * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumArt )( 
            ISDBAlbum * This,
            /* [retval][out] */ SDBAlbumArtList	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Tracks )( 
            ISDBAlbum * This,
            /* [retval][out] */ SDBSongList	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumLength )( 
            ISDBAlbum * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumLengthString )( 
            ISDBAlbum * This,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } ISDBAlbumVtbl;

    interface ISDBAlbum
    {
        CONST_VTBL struct ISDBAlbumVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBAlbum_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBAlbum_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBAlbum_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBAlbum_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBAlbum_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBAlbum_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBAlbum_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBAlbum_get_Artist(This,Value)	\
    ( (This)->lpVtbl -> get_Artist(This,Value) ) 

#define ISDBAlbum_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ISDBAlbum_get_Name(This,Value)	\
    ( (This)->lpVtbl -> get_Name(This,Value) ) 

#define ISDBAlbum_put_Name(This,Value)	\
    ( (This)->lpVtbl -> put_Name(This,Value) ) 

#define ISDBAlbum_UpdateDB(This)	\
    ( (This)->lpVtbl -> UpdateDB(This) ) 

#define ISDBAlbum_get_AlbumArt(This,Value)	\
    ( (This)->lpVtbl -> get_AlbumArt(This,Value) ) 

#define ISDBAlbum_get_Tracks(This,Value)	\
    ( (This)->lpVtbl -> get_Tracks(This,Value) ) 

#define ISDBAlbum_get_AlbumLength(This,Value)	\
    ( (This)->lpVtbl -> get_AlbumLength(This,Value) ) 

#define ISDBAlbum_get_AlbumLengthString(This,Value)	\
    ( (This)->lpVtbl -> get_AlbumLengthString(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBAlbum_INTERFACE_DEFINED__ */


#ifndef __ISDBAlbums_INTERFACE_DEFINED__
#define __ISDBAlbums_INTERFACE_DEFINED__

/* interface ISDBAlbums */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBAlbums;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("831CFDF3-C029-4971-A427-3F2AB6822AC4")
    ISDBAlbums : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISDBAlbum **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Sort( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SortByArtist( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBAlbumsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBAlbums * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBAlbums * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBAlbums * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBAlbums * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBAlbums * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBAlbums * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBAlbums * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBAlbums * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBAlbums * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISDBAlbum **Value);
        
        /* [id] */ HRESULT ( __stdcall *Sort )( 
            ISDBAlbums * This);
        
        /* [id] */ HRESULT ( __stdcall *SortByArtist )( 
            ISDBAlbums * This);
        
        END_INTERFACE
    } ISDBAlbumsVtbl;

    interface ISDBAlbums
    {
        CONST_VTBL struct ISDBAlbumsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBAlbums_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBAlbums_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBAlbums_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBAlbums_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBAlbums_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBAlbums_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBAlbums_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBAlbums_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBAlbums_get_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Index,Value) ) 

#define ISDBAlbums_Sort(This)	\
    ( (This)->lpVtbl -> Sort(This) ) 

#define ISDBAlbums_SortByArtist(This)	\
    ( (This)->lpVtbl -> SortByArtist(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBAlbums_INTERFACE_DEFINED__ */


#ifndef __ISDBArtist_INTERFACE_DEFINED__
#define __ISDBArtist_INTERFACE_DEFINED__

/* interface ISDBArtist */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBArtist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28DD96C6-E8D5-4286-B2D4-46CE858A30D8")
    ISDBArtist : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Comment( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Comment( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Name( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UpdateDB( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBArtistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBArtist * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBArtist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBArtist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBArtist * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBArtist * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBArtist * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBArtist * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Comment )( 
            ISDBArtist * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Comment )( 
            ISDBArtist * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Name )( 
            ISDBArtist * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Name )( 
            ISDBArtist * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ID )( 
            ISDBArtist * This,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *UpdateDB )( 
            ISDBArtist * This);
        
        END_INTERFACE
    } ISDBArtistVtbl;

    interface ISDBArtist
    {
        CONST_VTBL struct ISDBArtistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBArtist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBArtist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBArtist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBArtist_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBArtist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBArtist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBArtist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBArtist_get_Comment(This,Value)	\
    ( (This)->lpVtbl -> get_Comment(This,Value) ) 

#define ISDBArtist_put_Comment(This,Value)	\
    ( (This)->lpVtbl -> put_Comment(This,Value) ) 

#define ISDBArtist_get_Name(This,Value)	\
    ( (This)->lpVtbl -> get_Name(This,Value) ) 

#define ISDBArtist_put_Name(This,Value)	\
    ( (This)->lpVtbl -> put_Name(This,Value) ) 

#define ISDBArtist_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ISDBArtist_UpdateDB(This)	\
    ( (This)->lpVtbl -> UpdateDB(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBArtist_INTERFACE_DEFINED__ */


#ifndef __ISDBArtists_INTERFACE_DEFINED__
#define __ISDBArtists_INTERFACE_DEFINED__

/* interface ISDBArtists */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBArtists;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C8E4F34-9D8A-4461-BE8D-C6A877586999")
    ISDBArtists : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISDBArtist **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Sort( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBArtistsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBArtists * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBArtists * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBArtists * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBArtists * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBArtists * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBArtists * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBArtists * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBArtists * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBArtists * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISDBArtist **Value);
        
        /* [id] */ HRESULT ( __stdcall *Sort )( 
            ISDBArtists * This);
        
        END_INTERFACE
    } ISDBArtistsVtbl;

    interface ISDBArtists
    {
        CONST_VTBL struct ISDBArtistsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBArtists_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBArtists_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBArtists_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBArtists_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBArtists_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBArtists_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBArtists_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBArtists_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBArtists_get_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Index,Value) ) 

#define ISDBArtists_Sort(This)	\
    ( (This)->lpVtbl -> Sort(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBArtists_INTERFACE_DEFINED__ */


#ifndef __ISDBCommonDialog_INTERFACE_DEFINED__
#define __ISDBCommonDialog_INTERFACE_DEFINED__

/* interface ISDBCommonDialog */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBCommonDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("492548A0-735F-4638-ABF8-6B98581D3718")
    ISDBCommonDialog : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_DefaultExt( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DefaultExt( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Filter( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Filter( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ShowOpen( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ShowSave( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Ok( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_InitDir( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_InitDir( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Filename( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Flags( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Flags( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FilterIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FilterIndex( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Title( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Title( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBCommonDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBCommonDialog * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBCommonDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBCommonDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBCommonDialog * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBCommonDialog * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBCommonDialog * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBCommonDialog * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DefaultExt )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DefaultExt )( 
            ISDBCommonDialog * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Filter )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Filter )( 
            ISDBCommonDialog * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *ShowOpen )( 
            ISDBCommonDialog * This);
        
        /* [id] */ HRESULT ( __stdcall *ShowSave )( 
            ISDBCommonDialog * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Ok )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_InitDir )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_InitDir )( 
            ISDBCommonDialog * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Filename )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Flags )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Flags )( 
            ISDBCommonDialog * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FilterIndex )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FilterIndex )( 
            ISDBCommonDialog * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Title )( 
            ISDBCommonDialog * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Title )( 
            ISDBCommonDialog * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBCommonDialogVtbl;

    interface ISDBCommonDialog
    {
        CONST_VTBL struct ISDBCommonDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBCommonDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBCommonDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBCommonDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBCommonDialog_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBCommonDialog_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBCommonDialog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBCommonDialog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBCommonDialog_get_DefaultExt(This,Value)	\
    ( (This)->lpVtbl -> get_DefaultExt(This,Value) ) 

#define ISDBCommonDialog_put_DefaultExt(This,Value)	\
    ( (This)->lpVtbl -> put_DefaultExt(This,Value) ) 

#define ISDBCommonDialog_get_Filter(This,Value)	\
    ( (This)->lpVtbl -> get_Filter(This,Value) ) 

#define ISDBCommonDialog_put_Filter(This,Value)	\
    ( (This)->lpVtbl -> put_Filter(This,Value) ) 

#define ISDBCommonDialog_ShowOpen(This)	\
    ( (This)->lpVtbl -> ShowOpen(This) ) 

#define ISDBCommonDialog_ShowSave(This)	\
    ( (This)->lpVtbl -> ShowSave(This) ) 

#define ISDBCommonDialog_get_Ok(This,Value)	\
    ( (This)->lpVtbl -> get_Ok(This,Value) ) 

#define ISDBCommonDialog_get_InitDir(This,Value)	\
    ( (This)->lpVtbl -> get_InitDir(This,Value) ) 

#define ISDBCommonDialog_put_InitDir(This,Value)	\
    ( (This)->lpVtbl -> put_InitDir(This,Value) ) 

#define ISDBCommonDialog_get_Filename(This,Value)	\
    ( (This)->lpVtbl -> get_Filename(This,Value) ) 

#define ISDBCommonDialog_get_Flags(This,Value)	\
    ( (This)->lpVtbl -> get_Flags(This,Value) ) 

#define ISDBCommonDialog_put_Flags(This,Value)	\
    ( (This)->lpVtbl -> put_Flags(This,Value) ) 

#define ISDBCommonDialog_get_FilterIndex(This,Value)	\
    ( (This)->lpVtbl -> get_FilterIndex(This,Value) ) 

#define ISDBCommonDialog_put_FilterIndex(This,Value)	\
    ( (This)->lpVtbl -> put_FilterIndex(This,Value) ) 

#define ISDBCommonDialog_get_Title(This,Value)	\
    ( (This)->lpVtbl -> get_Title(This,Value) ) 

#define ISDBCommonDialog_put_Title(This,Value)	\
    ( (This)->lpVtbl -> put_Title(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBCommonDialog_INTERFACE_DEFINED__ */


#ifndef __ISDBDatabase_INTERFACE_DEFINED__
#define __ISDBDatabase_INTERFACE_DEFINED__

/* interface ISDBDatabase */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBDatabase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E33B34D-4E10-458F-9462-9168295B3906")
    ISDBDatabase : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall ExecSQL( 
            /* [in] */ BSTR SQL) = 0;
        
        virtual /* [id] */ HRESULT __stdcall QuerySongs( 
            /* [in] */ BSTR AddSQL,
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall OpenSQL( 
            /* [in] */ BSTR SQL,
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DatabaseID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Path( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ActiveFilterQuery( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall BeginTransaction( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Commit( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_GetFilterQuery( 
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ActiveFilterID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ActiveFilterID( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ForceCommit( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_GetAutoPlaylistQuery( 
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBDatabaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBDatabase * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBDatabase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBDatabase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBDatabase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBDatabase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBDatabase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBDatabase * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *ExecSQL )( 
            ISDBDatabase * This,
            /* [in] */ BSTR SQL);
        
        /* [id] */ HRESULT ( __stdcall *QuerySongs )( 
            ISDBDatabase * This,
            /* [in] */ BSTR AddSQL,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id] */ HRESULT ( __stdcall *OpenSQL )( 
            ISDBDatabase * This,
            /* [in] */ BSTR SQL,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DatabaseID )( 
            ISDBDatabase * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Path )( 
            ISDBDatabase * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ActiveFilterQuery )( 
            ISDBDatabase * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( __stdcall *BeginTransaction )( 
            ISDBDatabase * This);
        
        /* [id] */ HRESULT ( __stdcall *Commit )( 
            ISDBDatabase * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_GetFilterQuery )( 
            ISDBDatabase * This,
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ActiveFilterID )( 
            ISDBDatabase * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ActiveFilterID )( 
            ISDBDatabase * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *ForceCommit )( 
            ISDBDatabase * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_GetAutoPlaylistQuery )( 
            ISDBDatabase * This,
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } ISDBDatabaseVtbl;

    interface ISDBDatabase
    {
        CONST_VTBL struct ISDBDatabaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBDatabase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBDatabase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBDatabase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBDatabase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBDatabase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBDatabase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBDatabase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBDatabase_ExecSQL(This,SQL)	\
    ( (This)->lpVtbl -> ExecSQL(This,SQL) ) 

#define ISDBDatabase_QuerySongs(This,AddSQL,Value)	\
    ( (This)->lpVtbl -> QuerySongs(This,AddSQL,Value) ) 

#define ISDBDatabase_OpenSQL(This,SQL,Value)	\
    ( (This)->lpVtbl -> OpenSQL(This,SQL,Value) ) 

#define ISDBDatabase_get_DatabaseID(This,Value)	\
    ( (This)->lpVtbl -> get_DatabaseID(This,Value) ) 

#define ISDBDatabase_get_Path(This,Value)	\
    ( (This)->lpVtbl -> get_Path(This,Value) ) 

#define ISDBDatabase_get_ActiveFilterQuery(This,Value)	\
    ( (This)->lpVtbl -> get_ActiveFilterQuery(This,Value) ) 

#define ISDBDatabase_BeginTransaction(This)	\
    ( (This)->lpVtbl -> BeginTransaction(This) ) 

#define ISDBDatabase_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define ISDBDatabase_get_GetFilterQuery(This,ID,Value)	\
    ( (This)->lpVtbl -> get_GetFilterQuery(This,ID,Value) ) 

#define ISDBDatabase_get_ActiveFilterID(This,Value)	\
    ( (This)->lpVtbl -> get_ActiveFilterID(This,Value) ) 

#define ISDBDatabase_put_ActiveFilterID(This,Value)	\
    ( (This)->lpVtbl -> put_ActiveFilterID(This,Value) ) 

#define ISDBDatabase_ForceCommit(This)	\
    ( (This)->lpVtbl -> ForceCommit(This) ) 

#define ISDBDatabase_get_GetAutoPlaylistQuery(This,ID,Value)	\
    ( (This)->lpVtbl -> get_GetAutoPlaylistQuery(This,ID,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBDatabase_INTERFACE_DEFINED__ */


#ifndef __ISDBIniFile_INTERFACE_DEFINED__
#define __ISDBIniFile_INTERFACE_DEFINED__

/* interface ISDBIniFile */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBIniFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3EF2F592-68E1-4E74-BCB4-5ED877E221D1")
    ISDBIniFile : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_StringValue( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_StringValue( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteKey( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Key) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteSection( 
            /* [in] */ BSTR Section) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Sections( 
            /* [retval][out] */ SDBStringList	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Keys( 
            /* [in] */ BSTR Section,
            /* [retval][out] */ SDBStringList	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IntValue( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_IntValue( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_BoolValue( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_BoolValue( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ValueExists( 
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Flush( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Apply( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBIniFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBIniFile * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBIniFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBIniFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBIniFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBIniFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBIniFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBIniFile * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StringValue )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_StringValue )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *DeleteKey )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Key);
        
        /* [id] */ HRESULT ( __stdcall *DeleteSection )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Sections )( 
            ISDBIniFile * This,
            /* [retval][out] */ SDBStringList	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Keys )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [retval][out] */ SDBStringList	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IntValue )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_IntValue )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_BoolValue )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_BoolValue )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ValueExists )( 
            ISDBIniFile * This,
            /* [in] */ BSTR Section,
            /* [in] */ BSTR Ident,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id] */ HRESULT ( __stdcall *Flush )( 
            ISDBIniFile * This);
        
        /* [id] */ HRESULT ( __stdcall *Apply )( 
            ISDBIniFile * This);
        
        END_INTERFACE
    } ISDBIniFileVtbl;

    interface ISDBIniFile
    {
        CONST_VTBL struct ISDBIniFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBIniFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBIniFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBIniFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBIniFile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBIniFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBIniFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBIniFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBIniFile_get_StringValue(This,Section,Ident,Value)	\
    ( (This)->lpVtbl -> get_StringValue(This,Section,Ident,Value) ) 

#define ISDBIniFile_put_StringValue(This,Section,Ident,Value)	\
    ( (This)->lpVtbl -> put_StringValue(This,Section,Ident,Value) ) 

#define ISDBIniFile_DeleteKey(This,Section,Key)	\
    ( (This)->lpVtbl -> DeleteKey(This,Section,Key) ) 

#define ISDBIniFile_DeleteSection(This,Section)	\
    ( (This)->lpVtbl -> DeleteSection(This,Section) ) 

#define ISDBIniFile_get_Sections(This,Value)	\
    ( (This)->lpVtbl -> get_Sections(This,Value) ) 

#define ISDBIniFile_get_Keys(This,Section,Value)	\
    ( (This)->lpVtbl -> get_Keys(This,Section,Value) ) 

#define ISDBIniFile_get_IntValue(This,Section,Ident,Value)	\
    ( (This)->lpVtbl -> get_IntValue(This,Section,Ident,Value) ) 

#define ISDBIniFile_put_IntValue(This,Section,Ident,Value)	\
    ( (This)->lpVtbl -> put_IntValue(This,Section,Ident,Value) ) 

#define ISDBIniFile_get_BoolValue(This,Section,Ident,Value)	\
    ( (This)->lpVtbl -> get_BoolValue(This,Section,Ident,Value) ) 

#define ISDBIniFile_put_BoolValue(This,Section,Ident,Value)	\
    ( (This)->lpVtbl -> put_BoolValue(This,Section,Ident,Value) ) 

#define ISDBIniFile_get_ValueExists(This,Section,Ident,Value)	\
    ( (This)->lpVtbl -> get_ValueExists(This,Section,Ident,Value) ) 

#define ISDBIniFile_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define ISDBIniFile_Apply(This)	\
    ( (This)->lpVtbl -> Apply(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBIniFile_INTERFACE_DEFINED__ */


#ifndef __ISDBMedia_INTERFACE_DEFINED__
#define __ISDBMedia_INTERFACE_DEFINED__

/* interface ISDBMedia */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBMedia;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F6E541E9-B168-4C16-9408-D73ABC5CD445")
    ISDBMedia : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_ID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MediaLabel( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MediaLabel( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SerialNumber( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SerialNumber( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DriveType( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DriveType( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DriveLetter( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBMediaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBMedia * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBMedia * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBMedia * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBMedia * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBMedia * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBMedia * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBMedia * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ID )( 
            ISDBMedia * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MediaLabel )( 
            ISDBMedia * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MediaLabel )( 
            ISDBMedia * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SerialNumber )( 
            ISDBMedia * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SerialNumber )( 
            ISDBMedia * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DriveType )( 
            ISDBMedia * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DriveType )( 
            ISDBMedia * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DriveLetter )( 
            ISDBMedia * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } ISDBMediaVtbl;

    interface ISDBMedia
    {
        CONST_VTBL struct ISDBMediaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBMedia_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBMedia_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBMedia_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBMedia_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBMedia_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBMedia_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBMedia_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBMedia_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ISDBMedia_get_MediaLabel(This,Value)	\
    ( (This)->lpVtbl -> get_MediaLabel(This,Value) ) 

#define ISDBMedia_put_MediaLabel(This,Value)	\
    ( (This)->lpVtbl -> put_MediaLabel(This,Value) ) 

#define ISDBMedia_get_SerialNumber(This,Value)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,Value) ) 

#define ISDBMedia_put_SerialNumber(This,Value)	\
    ( (This)->lpVtbl -> put_SerialNumber(This,Value) ) 

#define ISDBMedia_get_DriveType(This,Value)	\
    ( (This)->lpVtbl -> get_DriveType(This,Value) ) 

#define ISDBMedia_put_DriveType(This,Value)	\
    ( (This)->lpVtbl -> put_DriveType(This,Value) ) 

#define ISDBMedia_get_DriveLetter(This,Value)	\
    ( (This)->lpVtbl -> get_DriveLetter(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBMedia_INTERFACE_DEFINED__ */


#ifndef __ISDBPlayer_INTERFACE_DEFINED__
#define __ISDBPlayer_INTERFACE_DEFINED__

/* interface ISDBPlayer */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3B39023-04D8-4B19-A769-27E66D1A47BB")
    ISDBPlayer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentPlaylist( 
            /* [retval][out] */ ISDBSongList **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentSongList( 
            /* [retval][out] */ ISDBSongList **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentSongIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CurrentSongIndex( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Panning( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Panning( 
            /* [in] */ double Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Volume( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Volume( 
            /* [in] */ double Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaylistCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaylistItems( 
            /* [in] */ long Index,
            /* [retval][out] */ ISDBSongData **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PlaylistClear( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PlaylistDelete( 
            /* [in] */ long Index) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PlaylistAddTrack( 
            /* [in] */ ISDBSongData *Song) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PlaylistAddTracks( 
            /* [in] */ ISDBSongList *Songs) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PlaylistMoveTrack( 
            /* [in] */ long Index,
            /* [in] */ long NewIndex) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Next( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Pause( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Play( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Previous( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Stop( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isPlaying( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isPaused( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentSong( 
            /* [retval][out] */ ISDBSongData **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentSongLength( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaybackTime( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PlaybackTime( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isShuffle( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isShuffle( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isRepeat( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isRepeat( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isAutoDJ( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isAutoDJ( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isCrossfade( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isCrossfade( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isStartingPlayback( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaylistSelected( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PlaylistSelected( 
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaylistFocused( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PlaylistFocused( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isEqualizer( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isEqualizer( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall LoadEqualizerPreset( 
            /* [in] */ BSTR Filename) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_StopAfterCurrent( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_StopAfterCurrent( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PlaylistInsertTrack( 
            /* [in] */ long Index,
            /* [in] */ ISDBSongData *Song) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PlaylistInsertTracks( 
            /* [in] */ long Index,
            /* [in] */ ISDBSongList *Songs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBPlayer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBPlayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBPlayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBPlayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBPlayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBPlayer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentPlaylist )( 
            ISDBPlayer * This,
            /* [retval][out] */ ISDBSongList **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentSongList )( 
            ISDBPlayer * This,
            /* [retval][out] */ ISDBSongList **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentSongIndex )( 
            ISDBPlayer * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CurrentSongIndex )( 
            ISDBPlayer * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Panning )( 
            ISDBPlayer * This,
            /* [retval][out] */ double *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Panning )( 
            ISDBPlayer * This,
            /* [in] */ double Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Volume )( 
            ISDBPlayer * This,
            /* [retval][out] */ double *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Volume )( 
            ISDBPlayer * This,
            /* [in] */ double Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaylistCount )( 
            ISDBPlayer * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaylistItems )( 
            ISDBPlayer * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISDBSongData **Value);
        
        /* [id] */ HRESULT ( __stdcall *PlaylistClear )( 
            ISDBPlayer * This);
        
        /* [id] */ HRESULT ( __stdcall *PlaylistDelete )( 
            ISDBPlayer * This,
            /* [in] */ long Index);
        
        /* [id] */ HRESULT ( __stdcall *PlaylistAddTrack )( 
            ISDBPlayer * This,
            /* [in] */ ISDBSongData *Song);
        
        /* [id] */ HRESULT ( __stdcall *PlaylistAddTracks )( 
            ISDBPlayer * This,
            /* [in] */ ISDBSongList *Songs);
        
        /* [id] */ HRESULT ( __stdcall *PlaylistMoveTrack )( 
            ISDBPlayer * This,
            /* [in] */ long Index,
            /* [in] */ long NewIndex);
        
        /* [id] */ HRESULT ( __stdcall *Next )( 
            ISDBPlayer * This);
        
        /* [id] */ HRESULT ( __stdcall *Pause )( 
            ISDBPlayer * This);
        
        /* [id] */ HRESULT ( __stdcall *Play )( 
            ISDBPlayer * This);
        
        /* [id] */ HRESULT ( __stdcall *Previous )( 
            ISDBPlayer * This);
        
        /* [id] */ HRESULT ( __stdcall *Stop )( 
            ISDBPlayer * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isPlaying )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isPaused )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentSong )( 
            ISDBPlayer * This,
            /* [retval][out] */ ISDBSongData **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentSongLength )( 
            ISDBPlayer * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaybackTime )( 
            ISDBPlayer * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PlaybackTime )( 
            ISDBPlayer * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isShuffle )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isShuffle )( 
            ISDBPlayer * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isRepeat )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isRepeat )( 
            ISDBPlayer * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isAutoDJ )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isAutoDJ )( 
            ISDBPlayer * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isCrossfade )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isCrossfade )( 
            ISDBPlayer * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isStartingPlayback )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaylistSelected )( 
            ISDBPlayer * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PlaylistSelected )( 
            ISDBPlayer * This,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaylistFocused )( 
            ISDBPlayer * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PlaylistFocused )( 
            ISDBPlayer * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isEqualizer )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isEqualizer )( 
            ISDBPlayer * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( __stdcall *LoadEqualizerPreset )( 
            ISDBPlayer * This,
            /* [in] */ BSTR Filename);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StopAfterCurrent )( 
            ISDBPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_StopAfterCurrent )( 
            ISDBPlayer * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( __stdcall *PlaylistInsertTrack )( 
            ISDBPlayer * This,
            /* [in] */ long Index,
            /* [in] */ ISDBSongData *Song);
        
        /* [id] */ HRESULT ( __stdcall *PlaylistInsertTracks )( 
            ISDBPlayer * This,
            /* [in] */ long Index,
            /* [in] */ ISDBSongList *Songs);
        
        END_INTERFACE
    } ISDBPlayerVtbl;

    interface ISDBPlayer
    {
        CONST_VTBL struct ISDBPlayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBPlayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBPlayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBPlayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBPlayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBPlayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBPlayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBPlayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBPlayer_get_CurrentPlaylist(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentPlaylist(This,Value) ) 

#define ISDBPlayer_get_CurrentSongList(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentSongList(This,Value) ) 

#define ISDBPlayer_get_CurrentSongIndex(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentSongIndex(This,Value) ) 

#define ISDBPlayer_put_CurrentSongIndex(This,Value)	\
    ( (This)->lpVtbl -> put_CurrentSongIndex(This,Value) ) 

#define ISDBPlayer_get_Panning(This,Value)	\
    ( (This)->lpVtbl -> get_Panning(This,Value) ) 

#define ISDBPlayer_put_Panning(This,Value)	\
    ( (This)->lpVtbl -> put_Panning(This,Value) ) 

#define ISDBPlayer_get_Volume(This,Value)	\
    ( (This)->lpVtbl -> get_Volume(This,Value) ) 

#define ISDBPlayer_put_Volume(This,Value)	\
    ( (This)->lpVtbl -> put_Volume(This,Value) ) 

#define ISDBPlayer_get_PlaylistCount(This,Value)	\
    ( (This)->lpVtbl -> get_PlaylistCount(This,Value) ) 

#define ISDBPlayer_get_PlaylistItems(This,Index,Value)	\
    ( (This)->lpVtbl -> get_PlaylistItems(This,Index,Value) ) 

#define ISDBPlayer_PlaylistClear(This)	\
    ( (This)->lpVtbl -> PlaylistClear(This) ) 

#define ISDBPlayer_PlaylistDelete(This,Index)	\
    ( (This)->lpVtbl -> PlaylistDelete(This,Index) ) 

#define ISDBPlayer_PlaylistAddTrack(This,Song)	\
    ( (This)->lpVtbl -> PlaylistAddTrack(This,Song) ) 

#define ISDBPlayer_PlaylistAddTracks(This,Songs)	\
    ( (This)->lpVtbl -> PlaylistAddTracks(This,Songs) ) 

#define ISDBPlayer_PlaylistMoveTrack(This,Index,NewIndex)	\
    ( (This)->lpVtbl -> PlaylistMoveTrack(This,Index,NewIndex) ) 

#define ISDBPlayer_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define ISDBPlayer_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) ) 

#define ISDBPlayer_Play(This)	\
    ( (This)->lpVtbl -> Play(This) ) 

#define ISDBPlayer_Previous(This)	\
    ( (This)->lpVtbl -> Previous(This) ) 

#define ISDBPlayer_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ISDBPlayer_get_isPlaying(This,Value)	\
    ( (This)->lpVtbl -> get_isPlaying(This,Value) ) 

#define ISDBPlayer_get_isPaused(This,Value)	\
    ( (This)->lpVtbl -> get_isPaused(This,Value) ) 

#define ISDBPlayer_get_CurrentSong(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentSong(This,Value) ) 

#define ISDBPlayer_get_CurrentSongLength(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentSongLength(This,Value) ) 

#define ISDBPlayer_get_PlaybackTime(This,Value)	\
    ( (This)->lpVtbl -> get_PlaybackTime(This,Value) ) 

#define ISDBPlayer_put_PlaybackTime(This,Value)	\
    ( (This)->lpVtbl -> put_PlaybackTime(This,Value) ) 

#define ISDBPlayer_get_isShuffle(This,Value)	\
    ( (This)->lpVtbl -> get_isShuffle(This,Value) ) 

#define ISDBPlayer_put_isShuffle(This,Value)	\
    ( (This)->lpVtbl -> put_isShuffle(This,Value) ) 

#define ISDBPlayer_get_isRepeat(This,Value)	\
    ( (This)->lpVtbl -> get_isRepeat(This,Value) ) 

#define ISDBPlayer_put_isRepeat(This,Value)	\
    ( (This)->lpVtbl -> put_isRepeat(This,Value) ) 

#define ISDBPlayer_get_isAutoDJ(This,Value)	\
    ( (This)->lpVtbl -> get_isAutoDJ(This,Value) ) 

#define ISDBPlayer_put_isAutoDJ(This,Value)	\
    ( (This)->lpVtbl -> put_isAutoDJ(This,Value) ) 

#define ISDBPlayer_get_isCrossfade(This,Value)	\
    ( (This)->lpVtbl -> get_isCrossfade(This,Value) ) 

#define ISDBPlayer_put_isCrossfade(This,Value)	\
    ( (This)->lpVtbl -> put_isCrossfade(This,Value) ) 

#define ISDBPlayer_get_isStartingPlayback(This,Value)	\
    ( (This)->lpVtbl -> get_isStartingPlayback(This,Value) ) 

#define ISDBPlayer_get_PlaylistSelected(This,Index,Value)	\
    ( (This)->lpVtbl -> get_PlaylistSelected(This,Index,Value) ) 

#define ISDBPlayer_put_PlaylistSelected(This,Index,Value)	\
    ( (This)->lpVtbl -> put_PlaylistSelected(This,Index,Value) ) 

#define ISDBPlayer_get_PlaylistFocused(This,Value)	\
    ( (This)->lpVtbl -> get_PlaylistFocused(This,Value) ) 

#define ISDBPlayer_put_PlaylistFocused(This,Value)	\
    ( (This)->lpVtbl -> put_PlaylistFocused(This,Value) ) 

#define ISDBPlayer_get_isEqualizer(This,Value)	\
    ( (This)->lpVtbl -> get_isEqualizer(This,Value) ) 

#define ISDBPlayer_put_isEqualizer(This,Value)	\
    ( (This)->lpVtbl -> put_isEqualizer(This,Value) ) 

#define ISDBPlayer_LoadEqualizerPreset(This,Filename)	\
    ( (This)->lpVtbl -> LoadEqualizerPreset(This,Filename) ) 

#define ISDBPlayer_get_StopAfterCurrent(This,Value)	\
    ( (This)->lpVtbl -> get_StopAfterCurrent(This,Value) ) 

#define ISDBPlayer_put_StopAfterCurrent(This,Value)	\
    ( (This)->lpVtbl -> put_StopAfterCurrent(This,Value) ) 

#define ISDBPlayer_PlaylistInsertTrack(This,Index,Song)	\
    ( (This)->lpVtbl -> PlaylistInsertTrack(This,Index,Song) ) 

#define ISDBPlayer_PlaylistInsertTracks(This,Index,Songs)	\
    ( (This)->lpVtbl -> PlaylistInsertTracks(This,Index,Songs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBPlayer_INTERFACE_DEFINED__ */


#ifndef __ISDBProgress_INTERFACE_DEFINED__
#define __ISDBProgress_INTERFACE_DEFINED__

/* interface ISDBProgress */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D6C996E-7C5E-4426-AB6C-9BBD17B63D05")
    ISDBProgress : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_MaxValue( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MaxValue( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Text( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Text( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Value( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Value( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Terminate( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Increase( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBProgress * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBProgress * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBProgress * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBProgress * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBProgress * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MaxValue )( 
            ISDBProgress * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MaxValue )( 
            ISDBProgress * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Text )( 
            ISDBProgress * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Text )( 
            ISDBProgress * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Value )( 
            ISDBProgress * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Value )( 
            ISDBProgress * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Terminate )( 
            ISDBProgress * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id] */ HRESULT ( __stdcall *Increase )( 
            ISDBProgress * This);
        
        END_INTERFACE
    } ISDBProgressVtbl;

    interface ISDBProgress
    {
        CONST_VTBL struct ISDBProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBProgress_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBProgress_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBProgress_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBProgress_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBProgress_get_MaxValue(This,Value)	\
    ( (This)->lpVtbl -> get_MaxValue(This,Value) ) 

#define ISDBProgress_put_MaxValue(This,Value)	\
    ( (This)->lpVtbl -> put_MaxValue(This,Value) ) 

#define ISDBProgress_get_Text(This,Value)	\
    ( (This)->lpVtbl -> get_Text(This,Value) ) 

#define ISDBProgress_put_Text(This,Value)	\
    ( (This)->lpVtbl -> put_Text(This,Value) ) 

#define ISDBProgress_get_Value(This,Value)	\
    ( (This)->lpVtbl -> get_Value(This,Value) ) 

#define ISDBProgress_put_Value(This,Value)	\
    ( (This)->lpVtbl -> put_Value(This,Value) ) 

#define ISDBProgress_get_Terminate(This,Value)	\
    ( (This)->lpVtbl -> get_Terminate(This,Value) ) 

#define ISDBProgress_Increase(This)	\
    ( (This)->lpVtbl -> Increase(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBProgress_INTERFACE_DEFINED__ */


#ifndef __ISDBSongData_INTERFACE_DEFINED__
#define __ISDBSongData_INTERFACE_DEFINED__

/* interface ISDBSongData */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBSongData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B0E7CB89-90B9-45AB-B8A0-A45F44350F57")
    ISDBSongData : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_ArtistName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ArtistName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_AlbumName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Title( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Title( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Path( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Path( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Bitrate( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Bitrate( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FileLength( 
            /* [retval][out] */ CURRENCY *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FileLength( 
            /* [in] */ CURRENCY Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SongLength( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SongLength( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Cached( 
            /* [retval][out] */ EnumVCDStatus *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Cached( 
            /* [in] */ EnumVCDStatus Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SampleRate( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SampleRate( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Channels( 
            /* [retval][out] */ EnumChannels *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Channels( 
            /* [in] */ EnumChannels Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TrackOrder( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_TrackOrder( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Year( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Year( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SongID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UpdateDB( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SongLengthString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Genre( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Genre( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MediaLabel( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_BPM( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_BPM( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VBR( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_VBR( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Author( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Author( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlayCounter( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PlayCounter( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Rating( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Rating( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FileModified( 
            /* [retval][out] */ DATE *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FileModified( 
            /* [in] */ DATE Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Lyricist( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Lyricist( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Band( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Band( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Conductor( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Conductor( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_InvolvedPeople( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_InvolvedPeople( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OriginalArtist( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OriginalArtist( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OriginalLyricist( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OriginalLyricist( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OriginalTitle( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OriginalTitle( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OriginalYear( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OriginalYear( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ISRC( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ISRC( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Lyrics( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Lyrics( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Comment( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Comment( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_RatingString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_RatingString( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Album( 
            /* [retval][out] */ ISDBAlbum **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Artist( 
            /* [retval][out] */ ISDBArtist **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Media( 
            /* [retval][out] */ ISDBMedia **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Custom1( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Custom1( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Custom2( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Custom2( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Custom3( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Custom3( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall _Data( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall GetCopy( 
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CachedPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Preview( 
            /* [retval][out] */ EnumPreview *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PreviewPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RenameByMask( 
            /* [in] */ BSTR Mask,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Leveling( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Leveling( 
            /* [in] */ double Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PeakValue( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PeakValue( 
            /* [in] */ double Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumArtistName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_AlbumArtistName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall MetadataFromFilename( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ReadTags( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall WriteTags( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UpdateArtist( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UpdateAlbum( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_LastPlayed( 
            /* [retval][out] */ DATE *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_LastPlayed( 
            /* [in] */ DATE Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Tempo( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Tempo( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Mood( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Mood( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Occasion( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Occasion( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Quality( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Quality( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Publisher( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Publisher( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Encoder( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Encoder( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Copyright( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Copyright( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DateAdded( 
            /* [retval][out] */ DATE *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DateAdded( 
            /* [in] */ DATE Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ID( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IsntInDB( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_IsntInDB( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumArt( 
            /* [retval][out] */ ISDBAlbumArtList	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlaylistOrder( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PlaylistOrder( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ParseText( 
            /* [in] */ BSTR TextData,
            /* [in] */ BSTR Mask,
            /* [retval][out] */ long *Badness) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MusicComposer( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MusicComposer( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_LevelingAlbum( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_LevelingAlbum( 
            /* [in] */ double Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PreGap( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PreGap( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PostGap( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PostGap( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TotalSamples( 
            /* [retval][out] */ CURRENCY *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_TotalSamples( 
            /* [in] */ CURRENCY Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CalculateGapData( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_GaplessBytes( 
            /* [retval][out] */ CURRENCY *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_GaplessBytes( 
            /* [in] */ CURRENCY Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Bookmark( 
            /* [retval][out] */ CURRENCY *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Bookmark( 
            /* [in] */ CURRENCY Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isBookmarkable( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isBookmarkable( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Custom4( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Custom4( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Custom5( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Custom5( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_USBDeviceID( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_USBDeviceID( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Grouping( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Grouping( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TrackOrderStr( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_TrackOrderStr( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DiscNumber( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DiscNumber( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DiscNumberStr( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DiscNumberStr( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isShuffleIgnored( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isShuffleIgnored( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_canCrossfade( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_canCrossfade( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Date( 
            /* [retval][out] */ DATE *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Date( 
            /* [in] */ DATE Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DateDBModified( 
            /* [retval][out] */ DATE *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ReadTagsAsExt( 
            /* [in] */ BSTR Extension,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TempString( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_TempString( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Month( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Month( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Day( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Day( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OriginalMonth( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OriginalMonth( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OriginalDay( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OriginalDay( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CalculateGapDataExt( 
            /* [in] */ BSTR Extension) = 0;
        
        virtual /* [id] */ HRESULT __stdcall MarkPlayed( 
            /* [in] */ DATE Date) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_StartTime( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_StartTime( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_StopTime( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_StopTime( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SkipCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SkipCount( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TrackType( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_TrackType( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Producer( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Producer( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Series( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Series( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Director( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Director( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Actors( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Actors( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ParentalRating( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ParentalRating( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SeasonNumber( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SeasonNumber( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_EpisodeNumber( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_EpisodeNumber( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBSongDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBSongData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBSongData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBSongData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBSongData * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBSongData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBSongData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBSongData * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ArtistName )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ArtistName )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumName )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_AlbumName )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Title )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Title )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Path )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Path )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Bitrate )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Bitrate )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FileLength )( 
            ISDBSongData * This,
            /* [retval][out] */ CURRENCY *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FileLength )( 
            ISDBSongData * This,
            /* [in] */ CURRENCY Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SongLength )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SongLength )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Cached )( 
            ISDBSongData * This,
            /* [retval][out] */ EnumVCDStatus *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Cached )( 
            ISDBSongData * This,
            /* [in] */ EnumVCDStatus Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SampleRate )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SampleRate )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Channels )( 
            ISDBSongData * This,
            /* [retval][out] */ EnumChannels *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Channels )( 
            ISDBSongData * This,
            /* [in] */ EnumChannels Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TrackOrder )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_TrackOrder )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Year )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Year )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SongID )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *UpdateDB )( 
            ISDBSongData * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SongLengthString )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Genre )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Genre )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MediaLabel )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_BPM )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_BPM )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VBR )( 
            ISDBSongData * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_VBR )( 
            ISDBSongData * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Author )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Author )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlayCounter )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PlayCounter )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Rating )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Rating )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FileModified )( 
            ISDBSongData * This,
            /* [retval][out] */ DATE *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FileModified )( 
            ISDBSongData * This,
            /* [in] */ DATE Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Lyricist )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Lyricist )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Band )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Band )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Conductor )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Conductor )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_InvolvedPeople )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_InvolvedPeople )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OriginalArtist )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OriginalArtist )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OriginalLyricist )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OriginalLyricist )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OriginalTitle )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OriginalTitle )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OriginalYear )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OriginalYear )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ISRC )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ISRC )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Lyrics )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Lyrics )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Comment )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Comment )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_RatingString )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_RatingString )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Album )( 
            ISDBSongData * This,
            /* [retval][out] */ ISDBAlbum **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Artist )( 
            ISDBSongData * This,
            /* [retval][out] */ ISDBArtist **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Media )( 
            ISDBSongData * This,
            /* [retval][out] */ ISDBMedia **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Custom1 )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Custom1 )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Custom2 )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Custom2 )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Custom3 )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Custom3 )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *_Data )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *GetCopy )( 
            ISDBSongData * This,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CachedPath )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Preview )( 
            ISDBSongData * This,
            /* [retval][out] */ EnumPreview *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PreviewPath )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( __stdcall *RenameByMask )( 
            ISDBSongData * This,
            /* [in] */ BSTR Mask,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Leveling )( 
            ISDBSongData * This,
            /* [retval][out] */ double *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Leveling )( 
            ISDBSongData * This,
            /* [in] */ double Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PeakValue )( 
            ISDBSongData * This,
            /* [retval][out] */ double *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PeakValue )( 
            ISDBSongData * This,
            /* [in] */ double Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumArtistName )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_AlbumArtistName )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *MetadataFromFilename )( 
            ISDBSongData * This);
        
        /* [id] */ HRESULT ( __stdcall *ReadTags )( 
            ISDBSongData * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id] */ HRESULT ( __stdcall *WriteTags )( 
            ISDBSongData * This);
        
        /* [id] */ HRESULT ( __stdcall *UpdateArtist )( 
            ISDBSongData * This);
        
        /* [id] */ HRESULT ( __stdcall *UpdateAlbum )( 
            ISDBSongData * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_LastPlayed )( 
            ISDBSongData * This,
            /* [retval][out] */ DATE *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_LastPlayed )( 
            ISDBSongData * This,
            /* [in] */ DATE Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Tempo )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Tempo )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Mood )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Mood )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Occasion )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Occasion )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Quality )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Quality )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Publisher )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Publisher )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Encoder )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Encoder )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Copyright )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Copyright )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DateAdded )( 
            ISDBSongData * This,
            /* [retval][out] */ DATE *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DateAdded )( 
            ISDBSongData * This,
            /* [in] */ DATE Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ID )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ID )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IsntInDB )( 
            ISDBSongData * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_IsntInDB )( 
            ISDBSongData * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumArt )( 
            ISDBSongData * This,
            /* [retval][out] */ SDBAlbumArtList	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlaylistOrder )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PlaylistOrder )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *ParseText )( 
            ISDBSongData * This,
            /* [in] */ BSTR TextData,
            /* [in] */ BSTR Mask,
            /* [retval][out] */ long *Badness);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MusicComposer )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MusicComposer )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_LevelingAlbum )( 
            ISDBSongData * This,
            /* [retval][out] */ double *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_LevelingAlbum )( 
            ISDBSongData * This,
            /* [in] */ double Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PreGap )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PreGap )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PostGap )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PostGap )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TotalSamples )( 
            ISDBSongData * This,
            /* [retval][out] */ CURRENCY *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_TotalSamples )( 
            ISDBSongData * This,
            /* [in] */ CURRENCY Value);
        
        /* [id] */ HRESULT ( __stdcall *CalculateGapData )( 
            ISDBSongData * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_GaplessBytes )( 
            ISDBSongData * This,
            /* [retval][out] */ CURRENCY *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_GaplessBytes )( 
            ISDBSongData * This,
            /* [in] */ CURRENCY Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Bookmark )( 
            ISDBSongData * This,
            /* [retval][out] */ CURRENCY *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Bookmark )( 
            ISDBSongData * This,
            /* [in] */ CURRENCY Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isBookmarkable )( 
            ISDBSongData * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isBookmarkable )( 
            ISDBSongData * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Custom4 )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Custom4 )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Custom5 )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Custom5 )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_USBDeviceID )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_USBDeviceID )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Grouping )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Grouping )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TrackOrderStr )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_TrackOrderStr )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DiscNumber )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DiscNumber )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DiscNumberStr )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DiscNumberStr )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isShuffleIgnored )( 
            ISDBSongData * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isShuffleIgnored )( 
            ISDBSongData * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_canCrossfade )( 
            ISDBSongData * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_canCrossfade )( 
            ISDBSongData * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Date )( 
            ISDBSongData * This,
            /* [retval][out] */ DATE *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Date )( 
            ISDBSongData * This,
            /* [in] */ DATE Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DateDBModified )( 
            ISDBSongData * This,
            /* [retval][out] */ DATE *Value);
        
        /* [id] */ HRESULT ( __stdcall *ReadTagsAsExt )( 
            ISDBSongData * This,
            /* [in] */ BSTR Extension,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TempString )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_TempString )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Month )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Month )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Day )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Day )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OriginalMonth )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OriginalMonth )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OriginalDay )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OriginalDay )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *CalculateGapDataExt )( 
            ISDBSongData * This,
            /* [in] */ BSTR Extension);
        
        /* [id] */ HRESULT ( __stdcall *MarkPlayed )( 
            ISDBSongData * This,
            /* [in] */ DATE Date);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StartTime )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_StartTime )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StopTime )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_StopTime )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SkipCount )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SkipCount )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TrackType )( 
            ISDBSongData * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_TrackType )( 
            ISDBSongData * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Producer )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Producer )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Series )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Series )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Director )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Director )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Actors )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Actors )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ParentalRating )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ParentalRating )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SeasonNumber )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SeasonNumber )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_EpisodeNumber )( 
            ISDBSongData * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_EpisodeNumber )( 
            ISDBSongData * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBSongDataVtbl;

    interface ISDBSongData
    {
        CONST_VTBL struct ISDBSongDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBSongData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBSongData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBSongData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBSongData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBSongData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBSongData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBSongData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBSongData_get_ArtistName(This,Value)	\
    ( (This)->lpVtbl -> get_ArtistName(This,Value) ) 

#define ISDBSongData_put_ArtistName(This,Value)	\
    ( (This)->lpVtbl -> put_ArtistName(This,Value) ) 

#define ISDBSongData_get_AlbumName(This,Value)	\
    ( (This)->lpVtbl -> get_AlbumName(This,Value) ) 

#define ISDBSongData_put_AlbumName(This,Value)	\
    ( (This)->lpVtbl -> put_AlbumName(This,Value) ) 

#define ISDBSongData_get_Title(This,Value)	\
    ( (This)->lpVtbl -> get_Title(This,Value) ) 

#define ISDBSongData_put_Title(This,Value)	\
    ( (This)->lpVtbl -> put_Title(This,Value) ) 

#define ISDBSongData_get_Path(This,Value)	\
    ( (This)->lpVtbl -> get_Path(This,Value) ) 

#define ISDBSongData_put_Path(This,Value)	\
    ( (This)->lpVtbl -> put_Path(This,Value) ) 

#define ISDBSongData_get_Bitrate(This,Value)	\
    ( (This)->lpVtbl -> get_Bitrate(This,Value) ) 

#define ISDBSongData_put_Bitrate(This,Value)	\
    ( (This)->lpVtbl -> put_Bitrate(This,Value) ) 

#define ISDBSongData_get_FileLength(This,Value)	\
    ( (This)->lpVtbl -> get_FileLength(This,Value) ) 

#define ISDBSongData_put_FileLength(This,Value)	\
    ( (This)->lpVtbl -> put_FileLength(This,Value) ) 

#define ISDBSongData_get_SongLength(This,Value)	\
    ( (This)->lpVtbl -> get_SongLength(This,Value) ) 

#define ISDBSongData_put_SongLength(This,Value)	\
    ( (This)->lpVtbl -> put_SongLength(This,Value) ) 

#define ISDBSongData_get_Cached(This,Value)	\
    ( (This)->lpVtbl -> get_Cached(This,Value) ) 

#define ISDBSongData_put_Cached(This,Value)	\
    ( (This)->lpVtbl -> put_Cached(This,Value) ) 

#define ISDBSongData_get_SampleRate(This,Value)	\
    ( (This)->lpVtbl -> get_SampleRate(This,Value) ) 

#define ISDBSongData_put_SampleRate(This,Value)	\
    ( (This)->lpVtbl -> put_SampleRate(This,Value) ) 

#define ISDBSongData_get_Channels(This,Value)	\
    ( (This)->lpVtbl -> get_Channels(This,Value) ) 

#define ISDBSongData_put_Channels(This,Value)	\
    ( (This)->lpVtbl -> put_Channels(This,Value) ) 

#define ISDBSongData_get_TrackOrder(This,Value)	\
    ( (This)->lpVtbl -> get_TrackOrder(This,Value) ) 

#define ISDBSongData_put_TrackOrder(This,Value)	\
    ( (This)->lpVtbl -> put_TrackOrder(This,Value) ) 

#define ISDBSongData_get_Year(This,Value)	\
    ( (This)->lpVtbl -> get_Year(This,Value) ) 

#define ISDBSongData_put_Year(This,Value)	\
    ( (This)->lpVtbl -> put_Year(This,Value) ) 

#define ISDBSongData_get_SongID(This,Value)	\
    ( (This)->lpVtbl -> get_SongID(This,Value) ) 

#define ISDBSongData_UpdateDB(This)	\
    ( (This)->lpVtbl -> UpdateDB(This) ) 

#define ISDBSongData_get_SongLengthString(This,Value)	\
    ( (This)->lpVtbl -> get_SongLengthString(This,Value) ) 

#define ISDBSongData_get_Genre(This,Value)	\
    ( (This)->lpVtbl -> get_Genre(This,Value) ) 

#define ISDBSongData_put_Genre(This,Value)	\
    ( (This)->lpVtbl -> put_Genre(This,Value) ) 

#define ISDBSongData_get_MediaLabel(This,Value)	\
    ( (This)->lpVtbl -> get_MediaLabel(This,Value) ) 

#define ISDBSongData_get_BPM(This,Value)	\
    ( (This)->lpVtbl -> get_BPM(This,Value) ) 

#define ISDBSongData_put_BPM(This,Value)	\
    ( (This)->lpVtbl -> put_BPM(This,Value) ) 

#define ISDBSongData_get_VBR(This,Value)	\
    ( (This)->lpVtbl -> get_VBR(This,Value) ) 

#define ISDBSongData_put_VBR(This,Value)	\
    ( (This)->lpVtbl -> put_VBR(This,Value) ) 

#define ISDBSongData_get_Author(This,Value)	\
    ( (This)->lpVtbl -> get_Author(This,Value) ) 

#define ISDBSongData_put_Author(This,Value)	\
    ( (This)->lpVtbl -> put_Author(This,Value) ) 

#define ISDBSongData_get_PlayCounter(This,Value)	\
    ( (This)->lpVtbl -> get_PlayCounter(This,Value) ) 

#define ISDBSongData_put_PlayCounter(This,Value)	\
    ( (This)->lpVtbl -> put_PlayCounter(This,Value) ) 

#define ISDBSongData_get_Rating(This,Value)	\
    ( (This)->lpVtbl -> get_Rating(This,Value) ) 

#define ISDBSongData_put_Rating(This,Value)	\
    ( (This)->lpVtbl -> put_Rating(This,Value) ) 

#define ISDBSongData_get_FileModified(This,Value)	\
    ( (This)->lpVtbl -> get_FileModified(This,Value) ) 

#define ISDBSongData_put_FileModified(This,Value)	\
    ( (This)->lpVtbl -> put_FileModified(This,Value) ) 

#define ISDBSongData_get_Lyricist(This,Value)	\
    ( (This)->lpVtbl -> get_Lyricist(This,Value) ) 

#define ISDBSongData_put_Lyricist(This,Value)	\
    ( (This)->lpVtbl -> put_Lyricist(This,Value) ) 

#define ISDBSongData_get_Band(This,Value)	\
    ( (This)->lpVtbl -> get_Band(This,Value) ) 

#define ISDBSongData_put_Band(This,Value)	\
    ( (This)->lpVtbl -> put_Band(This,Value) ) 

#define ISDBSongData_get_Conductor(This,Value)	\
    ( (This)->lpVtbl -> get_Conductor(This,Value) ) 

#define ISDBSongData_put_Conductor(This,Value)	\
    ( (This)->lpVtbl -> put_Conductor(This,Value) ) 

#define ISDBSongData_get_InvolvedPeople(This,Value)	\
    ( (This)->lpVtbl -> get_InvolvedPeople(This,Value) ) 

#define ISDBSongData_put_InvolvedPeople(This,Value)	\
    ( (This)->lpVtbl -> put_InvolvedPeople(This,Value) ) 

#define ISDBSongData_get_OriginalArtist(This,Value)	\
    ( (This)->lpVtbl -> get_OriginalArtist(This,Value) ) 

#define ISDBSongData_put_OriginalArtist(This,Value)	\
    ( (This)->lpVtbl -> put_OriginalArtist(This,Value) ) 

#define ISDBSongData_get_OriginalLyricist(This,Value)	\
    ( (This)->lpVtbl -> get_OriginalLyricist(This,Value) ) 

#define ISDBSongData_put_OriginalLyricist(This,Value)	\
    ( (This)->lpVtbl -> put_OriginalLyricist(This,Value) ) 

#define ISDBSongData_get_OriginalTitle(This,Value)	\
    ( (This)->lpVtbl -> get_OriginalTitle(This,Value) ) 

#define ISDBSongData_put_OriginalTitle(This,Value)	\
    ( (This)->lpVtbl -> put_OriginalTitle(This,Value) ) 

#define ISDBSongData_get_OriginalYear(This,Value)	\
    ( (This)->lpVtbl -> get_OriginalYear(This,Value) ) 

#define ISDBSongData_put_OriginalYear(This,Value)	\
    ( (This)->lpVtbl -> put_OriginalYear(This,Value) ) 

#define ISDBSongData_get_ISRC(This,Value)	\
    ( (This)->lpVtbl -> get_ISRC(This,Value) ) 

#define ISDBSongData_put_ISRC(This,Value)	\
    ( (This)->lpVtbl -> put_ISRC(This,Value) ) 

#define ISDBSongData_get_Lyrics(This,Value)	\
    ( (This)->lpVtbl -> get_Lyrics(This,Value) ) 

#define ISDBSongData_put_Lyrics(This,Value)	\
    ( (This)->lpVtbl -> put_Lyrics(This,Value) ) 

#define ISDBSongData_get_Comment(This,Value)	\
    ( (This)->lpVtbl -> get_Comment(This,Value) ) 

#define ISDBSongData_put_Comment(This,Value)	\
    ( (This)->lpVtbl -> put_Comment(This,Value) ) 

#define ISDBSongData_get_RatingString(This,Value)	\
    ( (This)->lpVtbl -> get_RatingString(This,Value) ) 

#define ISDBSongData_put_RatingString(This,Value)	\
    ( (This)->lpVtbl -> put_RatingString(This,Value) ) 

#define ISDBSongData_get_Album(This,Value)	\
    ( (This)->lpVtbl -> get_Album(This,Value) ) 

#define ISDBSongData_get_Artist(This,Value)	\
    ( (This)->lpVtbl -> get_Artist(This,Value) ) 

#define ISDBSongData_get_Media(This,Value)	\
    ( (This)->lpVtbl -> get_Media(This,Value) ) 

#define ISDBSongData_get_Custom1(This,Value)	\
    ( (This)->lpVtbl -> get_Custom1(This,Value) ) 

#define ISDBSongData_put_Custom1(This,Value)	\
    ( (This)->lpVtbl -> put_Custom1(This,Value) ) 

#define ISDBSongData_get_Custom2(This,Value)	\
    ( (This)->lpVtbl -> get_Custom2(This,Value) ) 

#define ISDBSongData_put_Custom2(This,Value)	\
    ( (This)->lpVtbl -> put_Custom2(This,Value) ) 

#define ISDBSongData_get_Custom3(This,Value)	\
    ( (This)->lpVtbl -> get_Custom3(This,Value) ) 

#define ISDBSongData_put_Custom3(This,Value)	\
    ( (This)->lpVtbl -> put_Custom3(This,Value) ) 

#define ISDBSongData__Data(This,Value)	\
    ( (This)->lpVtbl -> _Data(This,Value) ) 

#define ISDBSongData_GetCopy(This,Value)	\
    ( (This)->lpVtbl -> GetCopy(This,Value) ) 

#define ISDBSongData_get_CachedPath(This,Value)	\
    ( (This)->lpVtbl -> get_CachedPath(This,Value) ) 

#define ISDBSongData_get_Preview(This,Value)	\
    ( (This)->lpVtbl -> get_Preview(This,Value) ) 

#define ISDBSongData_get_PreviewPath(This,Value)	\
    ( (This)->lpVtbl -> get_PreviewPath(This,Value) ) 

#define ISDBSongData_RenameByMask(This,Mask,Result)	\
    ( (This)->lpVtbl -> RenameByMask(This,Mask,Result) ) 

#define ISDBSongData_get_Leveling(This,Value)	\
    ( (This)->lpVtbl -> get_Leveling(This,Value) ) 

#define ISDBSongData_put_Leveling(This,Value)	\
    ( (This)->lpVtbl -> put_Leveling(This,Value) ) 

#define ISDBSongData_get_PeakValue(This,Value)	\
    ( (This)->lpVtbl -> get_PeakValue(This,Value) ) 

#define ISDBSongData_put_PeakValue(This,Value)	\
    ( (This)->lpVtbl -> put_PeakValue(This,Value) ) 

#define ISDBSongData_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#define ISDBSongData_get_AlbumArtistName(This,Value)	\
    ( (This)->lpVtbl -> get_AlbumArtistName(This,Value) ) 

#define ISDBSongData_put_AlbumArtistName(This,Value)	\
    ( (This)->lpVtbl -> put_AlbumArtistName(This,Value) ) 

#define ISDBSongData_MetadataFromFilename(This)	\
    ( (This)->lpVtbl -> MetadataFromFilename(This) ) 

#define ISDBSongData_ReadTags(This,Value)	\
    ( (This)->lpVtbl -> ReadTags(This,Value) ) 

#define ISDBSongData_WriteTags(This)	\
    ( (This)->lpVtbl -> WriteTags(This) ) 

#define ISDBSongData_UpdateArtist(This)	\
    ( (This)->lpVtbl -> UpdateArtist(This) ) 

#define ISDBSongData_UpdateAlbum(This)	\
    ( (This)->lpVtbl -> UpdateAlbum(This) ) 

#define ISDBSongData_get_LastPlayed(This,Value)	\
    ( (This)->lpVtbl -> get_LastPlayed(This,Value) ) 

#define ISDBSongData_put_LastPlayed(This,Value)	\
    ( (This)->lpVtbl -> put_LastPlayed(This,Value) ) 

#define ISDBSongData_get_Tempo(This,Value)	\
    ( (This)->lpVtbl -> get_Tempo(This,Value) ) 

#define ISDBSongData_put_Tempo(This,Value)	\
    ( (This)->lpVtbl -> put_Tempo(This,Value) ) 

#define ISDBSongData_get_Mood(This,Value)	\
    ( (This)->lpVtbl -> get_Mood(This,Value) ) 

#define ISDBSongData_put_Mood(This,Value)	\
    ( (This)->lpVtbl -> put_Mood(This,Value) ) 

#define ISDBSongData_get_Occasion(This,Value)	\
    ( (This)->lpVtbl -> get_Occasion(This,Value) ) 

#define ISDBSongData_put_Occasion(This,Value)	\
    ( (This)->lpVtbl -> put_Occasion(This,Value) ) 

#define ISDBSongData_get_Quality(This,Value)	\
    ( (This)->lpVtbl -> get_Quality(This,Value) ) 

#define ISDBSongData_put_Quality(This,Value)	\
    ( (This)->lpVtbl -> put_Quality(This,Value) ) 

#define ISDBSongData_get_Publisher(This,Value)	\
    ( (This)->lpVtbl -> get_Publisher(This,Value) ) 

#define ISDBSongData_put_Publisher(This,Value)	\
    ( (This)->lpVtbl -> put_Publisher(This,Value) ) 

#define ISDBSongData_get_Encoder(This,Value)	\
    ( (This)->lpVtbl -> get_Encoder(This,Value) ) 

#define ISDBSongData_put_Encoder(This,Value)	\
    ( (This)->lpVtbl -> put_Encoder(This,Value) ) 

#define ISDBSongData_get_Copyright(This,Value)	\
    ( (This)->lpVtbl -> get_Copyright(This,Value) ) 

#define ISDBSongData_put_Copyright(This,Value)	\
    ( (This)->lpVtbl -> put_Copyright(This,Value) ) 

#define ISDBSongData_get_DateAdded(This,Value)	\
    ( (This)->lpVtbl -> get_DateAdded(This,Value) ) 

#define ISDBSongData_put_DateAdded(This,Value)	\
    ( (This)->lpVtbl -> put_DateAdded(This,Value) ) 

#define ISDBSongData_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ISDBSongData_put_ID(This,Value)	\
    ( (This)->lpVtbl -> put_ID(This,Value) ) 

#define ISDBSongData_get_IsntInDB(This,Value)	\
    ( (This)->lpVtbl -> get_IsntInDB(This,Value) ) 

#define ISDBSongData_put_IsntInDB(This,Value)	\
    ( (This)->lpVtbl -> put_IsntInDB(This,Value) ) 

#define ISDBSongData_get_AlbumArt(This,Value)	\
    ( (This)->lpVtbl -> get_AlbumArt(This,Value) ) 

#define ISDBSongData_get_PlaylistOrder(This,Value)	\
    ( (This)->lpVtbl -> get_PlaylistOrder(This,Value) ) 

#define ISDBSongData_put_PlaylistOrder(This,Value)	\
    ( (This)->lpVtbl -> put_PlaylistOrder(This,Value) ) 

#define ISDBSongData_ParseText(This,TextData,Mask,Badness)	\
    ( (This)->lpVtbl -> ParseText(This,TextData,Mask,Badness) ) 

#define ISDBSongData_get_MusicComposer(This,Value)	\
    ( (This)->lpVtbl -> get_MusicComposer(This,Value) ) 

#define ISDBSongData_put_MusicComposer(This,Value)	\
    ( (This)->lpVtbl -> put_MusicComposer(This,Value) ) 

#define ISDBSongData_get_LevelingAlbum(This,Value)	\
    ( (This)->lpVtbl -> get_LevelingAlbum(This,Value) ) 

#define ISDBSongData_put_LevelingAlbum(This,Value)	\
    ( (This)->lpVtbl -> put_LevelingAlbum(This,Value) ) 

#define ISDBSongData_get_PreGap(This,Value)	\
    ( (This)->lpVtbl -> get_PreGap(This,Value) ) 

#define ISDBSongData_put_PreGap(This,Value)	\
    ( (This)->lpVtbl -> put_PreGap(This,Value) ) 

#define ISDBSongData_get_PostGap(This,Value)	\
    ( (This)->lpVtbl -> get_PostGap(This,Value) ) 

#define ISDBSongData_put_PostGap(This,Value)	\
    ( (This)->lpVtbl -> put_PostGap(This,Value) ) 

#define ISDBSongData_get_TotalSamples(This,Value)	\
    ( (This)->lpVtbl -> get_TotalSamples(This,Value) ) 

#define ISDBSongData_put_TotalSamples(This,Value)	\
    ( (This)->lpVtbl -> put_TotalSamples(This,Value) ) 

#define ISDBSongData_CalculateGapData(This)	\
    ( (This)->lpVtbl -> CalculateGapData(This) ) 

#define ISDBSongData_get_GaplessBytes(This,Value)	\
    ( (This)->lpVtbl -> get_GaplessBytes(This,Value) ) 

#define ISDBSongData_put_GaplessBytes(This,Value)	\
    ( (This)->lpVtbl -> put_GaplessBytes(This,Value) ) 

#define ISDBSongData_get_Bookmark(This,Value)	\
    ( (This)->lpVtbl -> get_Bookmark(This,Value) ) 

#define ISDBSongData_put_Bookmark(This,Value)	\
    ( (This)->lpVtbl -> put_Bookmark(This,Value) ) 

#define ISDBSongData_get_isBookmarkable(This,Value)	\
    ( (This)->lpVtbl -> get_isBookmarkable(This,Value) ) 

#define ISDBSongData_put_isBookmarkable(This,Value)	\
    ( (This)->lpVtbl -> put_isBookmarkable(This,Value) ) 

#define ISDBSongData_get_Custom4(This,Value)	\
    ( (This)->lpVtbl -> get_Custom4(This,Value) ) 

#define ISDBSongData_put_Custom4(This,Value)	\
    ( (This)->lpVtbl -> put_Custom4(This,Value) ) 

#define ISDBSongData_get_Custom5(This,Value)	\
    ( (This)->lpVtbl -> get_Custom5(This,Value) ) 

#define ISDBSongData_put_Custom5(This,Value)	\
    ( (This)->lpVtbl -> put_Custom5(This,Value) ) 

#define ISDBSongData_get_USBDeviceID(This,Value)	\
    ( (This)->lpVtbl -> get_USBDeviceID(This,Value) ) 

#define ISDBSongData_put_USBDeviceID(This,Value)	\
    ( (This)->lpVtbl -> put_USBDeviceID(This,Value) ) 

#define ISDBSongData_get_Grouping(This,Value)	\
    ( (This)->lpVtbl -> get_Grouping(This,Value) ) 

#define ISDBSongData_put_Grouping(This,Value)	\
    ( (This)->lpVtbl -> put_Grouping(This,Value) ) 

#define ISDBSongData_get_TrackOrderStr(This,Value)	\
    ( (This)->lpVtbl -> get_TrackOrderStr(This,Value) ) 

#define ISDBSongData_put_TrackOrderStr(This,Value)	\
    ( (This)->lpVtbl -> put_TrackOrderStr(This,Value) ) 

#define ISDBSongData_get_DiscNumber(This,Value)	\
    ( (This)->lpVtbl -> get_DiscNumber(This,Value) ) 

#define ISDBSongData_put_DiscNumber(This,Value)	\
    ( (This)->lpVtbl -> put_DiscNumber(This,Value) ) 

#define ISDBSongData_get_DiscNumberStr(This,Value)	\
    ( (This)->lpVtbl -> get_DiscNumberStr(This,Value) ) 

#define ISDBSongData_put_DiscNumberStr(This,Value)	\
    ( (This)->lpVtbl -> put_DiscNumberStr(This,Value) ) 

#define ISDBSongData_get_isShuffleIgnored(This,Value)	\
    ( (This)->lpVtbl -> get_isShuffleIgnored(This,Value) ) 

#define ISDBSongData_put_isShuffleIgnored(This,Value)	\
    ( (This)->lpVtbl -> put_isShuffleIgnored(This,Value) ) 

#define ISDBSongData_get_canCrossfade(This,Value)	\
    ( (This)->lpVtbl -> get_canCrossfade(This,Value) ) 

#define ISDBSongData_put_canCrossfade(This,Value)	\
    ( (This)->lpVtbl -> put_canCrossfade(This,Value) ) 

#define ISDBSongData_get_Date(This,Value)	\
    ( (This)->lpVtbl -> get_Date(This,Value) ) 

#define ISDBSongData_put_Date(This,Value)	\
    ( (This)->lpVtbl -> put_Date(This,Value) ) 

#define ISDBSongData_get_DateDBModified(This,Value)	\
    ( (This)->lpVtbl -> get_DateDBModified(This,Value) ) 

#define ISDBSongData_ReadTagsAsExt(This,Extension,Value)	\
    ( (This)->lpVtbl -> ReadTagsAsExt(This,Extension,Value) ) 

#define ISDBSongData_get_TempString(This,Value)	\
    ( (This)->lpVtbl -> get_TempString(This,Value) ) 

#define ISDBSongData_put_TempString(This,Value)	\
    ( (This)->lpVtbl -> put_TempString(This,Value) ) 

#define ISDBSongData_get_Month(This,Value)	\
    ( (This)->lpVtbl -> get_Month(This,Value) ) 

#define ISDBSongData_put_Month(This,Value)	\
    ( (This)->lpVtbl -> put_Month(This,Value) ) 

#define ISDBSongData_get_Day(This,Value)	\
    ( (This)->lpVtbl -> get_Day(This,Value) ) 

#define ISDBSongData_put_Day(This,Value)	\
    ( (This)->lpVtbl -> put_Day(This,Value) ) 

#define ISDBSongData_get_OriginalMonth(This,Value)	\
    ( (This)->lpVtbl -> get_OriginalMonth(This,Value) ) 

#define ISDBSongData_put_OriginalMonth(This,Value)	\
    ( (This)->lpVtbl -> put_OriginalMonth(This,Value) ) 

#define ISDBSongData_get_OriginalDay(This,Value)	\
    ( (This)->lpVtbl -> get_OriginalDay(This,Value) ) 

#define ISDBSongData_put_OriginalDay(This,Value)	\
    ( (This)->lpVtbl -> put_OriginalDay(This,Value) ) 

#define ISDBSongData_CalculateGapDataExt(This,Extension)	\
    ( (This)->lpVtbl -> CalculateGapDataExt(This,Extension) ) 

#define ISDBSongData_MarkPlayed(This,Date)	\
    ( (This)->lpVtbl -> MarkPlayed(This,Date) ) 

#define ISDBSongData_get_StartTime(This,Value)	\
    ( (This)->lpVtbl -> get_StartTime(This,Value) ) 

#define ISDBSongData_put_StartTime(This,Value)	\
    ( (This)->lpVtbl -> put_StartTime(This,Value) ) 

#define ISDBSongData_get_StopTime(This,Value)	\
    ( (This)->lpVtbl -> get_StopTime(This,Value) ) 

#define ISDBSongData_put_StopTime(This,Value)	\
    ( (This)->lpVtbl -> put_StopTime(This,Value) ) 

#define ISDBSongData_get_SkipCount(This,Value)	\
    ( (This)->lpVtbl -> get_SkipCount(This,Value) ) 

#define ISDBSongData_put_SkipCount(This,Value)	\
    ( (This)->lpVtbl -> put_SkipCount(This,Value) ) 

#define ISDBSongData_get_TrackType(This,Value)	\
    ( (This)->lpVtbl -> get_TrackType(This,Value) ) 

#define ISDBSongData_put_TrackType(This,Value)	\
    ( (This)->lpVtbl -> put_TrackType(This,Value) ) 

#define ISDBSongData_get_Producer(This,Value)	\
    ( (This)->lpVtbl -> get_Producer(This,Value) ) 

#define ISDBSongData_put_Producer(This,Value)	\
    ( (This)->lpVtbl -> put_Producer(This,Value) ) 

#define ISDBSongData_get_Series(This,Value)	\
    ( (This)->lpVtbl -> get_Series(This,Value) ) 

#define ISDBSongData_put_Series(This,Value)	\
    ( (This)->lpVtbl -> put_Series(This,Value) ) 

#define ISDBSongData_get_Director(This,Value)	\
    ( (This)->lpVtbl -> get_Director(This,Value) ) 

#define ISDBSongData_put_Director(This,Value)	\
    ( (This)->lpVtbl -> put_Director(This,Value) ) 

#define ISDBSongData_get_Actors(This,Value)	\
    ( (This)->lpVtbl -> get_Actors(This,Value) ) 

#define ISDBSongData_put_Actors(This,Value)	\
    ( (This)->lpVtbl -> put_Actors(This,Value) ) 

#define ISDBSongData_get_ParentalRating(This,Value)	\
    ( (This)->lpVtbl -> get_ParentalRating(This,Value) ) 

#define ISDBSongData_put_ParentalRating(This,Value)	\
    ( (This)->lpVtbl -> put_ParentalRating(This,Value) ) 

#define ISDBSongData_get_SeasonNumber(This,Value)	\
    ( (This)->lpVtbl -> get_SeasonNumber(This,Value) ) 

#define ISDBSongData_put_SeasonNumber(This,Value)	\
    ( (This)->lpVtbl -> put_SeasonNumber(This,Value) ) 

#define ISDBSongData_get_EpisodeNumber(This,Value)	\
    ( (This)->lpVtbl -> get_EpisodeNumber(This,Value) ) 

#define ISDBSongData_put_EpisodeNumber(This,Value)	\
    ( (This)->lpVtbl -> put_EpisodeNumber(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_LevelingAlbum_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ double *Value);


void __RPC_STUB ISDBSongData_get_LevelingAlbum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_LevelingAlbum_Proxy( 
    ISDBSongData * This,
    /* [in] */ double Value);


void __RPC_STUB ISDBSongData_put_LevelingAlbum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_PreGap_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_PreGap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_PreGap_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_PreGap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_PostGap_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_PostGap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_PostGap_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_PostGap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_TotalSamples_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ CURRENCY *Value);


void __RPC_STUB ISDBSongData_get_TotalSamples_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_TotalSamples_Proxy( 
    ISDBSongData * This,
    /* [in] */ CURRENCY Value);


void __RPC_STUB ISDBSongData_put_TotalSamples_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT __stdcall ISDBSongData_CalculateGapData_Proxy( 
    ISDBSongData * This);


void __RPC_STUB ISDBSongData_CalculateGapData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_GaplessBytes_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ CURRENCY *Value);


void __RPC_STUB ISDBSongData_get_GaplessBytes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_GaplessBytes_Proxy( 
    ISDBSongData * This,
    /* [in] */ CURRENCY Value);


void __RPC_STUB ISDBSongData_put_GaplessBytes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Bookmark_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ CURRENCY *Value);


void __RPC_STUB ISDBSongData_get_Bookmark_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Bookmark_Proxy( 
    ISDBSongData * This,
    /* [in] */ CURRENCY Value);


void __RPC_STUB ISDBSongData_put_Bookmark_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_isBookmarkable_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ VARIANT_BOOL *Value);


void __RPC_STUB ISDBSongData_get_isBookmarkable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_isBookmarkable_Proxy( 
    ISDBSongData * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB ISDBSongData_put_isBookmarkable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Custom4_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_Custom4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Custom4_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_Custom4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Custom5_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_Custom5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Custom5_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_Custom5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_USBDeviceID_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_USBDeviceID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_USBDeviceID_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_USBDeviceID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Grouping_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_Grouping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Grouping_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_Grouping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_TrackOrderStr_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_TrackOrderStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_TrackOrderStr_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_TrackOrderStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_DiscNumber_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_DiscNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_DiscNumber_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_DiscNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_DiscNumberStr_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_DiscNumberStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_DiscNumberStr_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_DiscNumberStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_isShuffleIgnored_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ VARIANT_BOOL *Value);


void __RPC_STUB ISDBSongData_get_isShuffleIgnored_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_isShuffleIgnored_Proxy( 
    ISDBSongData * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB ISDBSongData_put_isShuffleIgnored_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_canCrossfade_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ VARIANT_BOOL *Value);


void __RPC_STUB ISDBSongData_get_canCrossfade_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_canCrossfade_Proxy( 
    ISDBSongData * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB ISDBSongData_put_canCrossfade_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Date_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ DATE *Value);


void __RPC_STUB ISDBSongData_get_Date_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Date_Proxy( 
    ISDBSongData * This,
    /* [in] */ DATE Value);


void __RPC_STUB ISDBSongData_put_Date_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_DateDBModified_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ DATE *Value);


void __RPC_STUB ISDBSongData_get_DateDBModified_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT __stdcall ISDBSongData_ReadTagsAsExt_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Extension,
    /* [retval][out] */ VARIANT_BOOL *Value);


void __RPC_STUB ISDBSongData_ReadTagsAsExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_TempString_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_TempString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_TempString_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_TempString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Month_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_Month_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Month_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_Month_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Day_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_Day_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Day_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_Day_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_OriginalMonth_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_OriginalMonth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_OriginalMonth_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_OriginalMonth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_OriginalDay_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_OriginalDay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_OriginalDay_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_OriginalDay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT __stdcall ISDBSongData_CalculateGapDataExt_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Extension);


void __RPC_STUB ISDBSongData_CalculateGapDataExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT __stdcall ISDBSongData_MarkPlayed_Proxy( 
    ISDBSongData * This,
    /* [in] */ DATE Date);


void __RPC_STUB ISDBSongData_MarkPlayed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_StartTime_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_StartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_StartTime_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_StartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_StopTime_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_StopTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_StopTime_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_StopTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_SkipCount_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_SkipCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_SkipCount_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_SkipCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_TrackType_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ long *Value);


void __RPC_STUB ISDBSongData_get_TrackType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_TrackType_Proxy( 
    ISDBSongData * This,
    /* [in] */ long Value);


void __RPC_STUB ISDBSongData_put_TrackType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Producer_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_Producer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Producer_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_Producer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Series_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_Series_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Series_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_Series_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Director_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_Director_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Director_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_Director_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_Actors_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_Actors_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_Actors_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_Actors_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_ParentalRating_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_ParentalRating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_ParentalRating_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_ParentalRating_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_SeasonNumber_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_SeasonNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_SeasonNumber_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_SeasonNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT __stdcall ISDBSongData_get_EpisodeNumber_Proxy( 
    ISDBSongData * This,
    /* [retval][out] */ BSTR *Value);


void __RPC_STUB ISDBSongData_get_EpisodeNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT __stdcall ISDBSongData_put_EpisodeNumber_Proxy( 
    ISDBSongData * This,
    /* [in] */ BSTR Value);


void __RPC_STUB ISDBSongData_put_EpisodeNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDBSongData_INTERFACE_DEFINED__ */


#ifndef __ISDBSongIterator_INTERFACE_DEFINED__
#define __ISDBSongIterator_INTERFACE_DEFINED__

/* interface ISDBSongIterator */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBSongIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("434A75C7-3C1A-45FB-A16F-4C9D2FB736FD")
    ISDBSongIterator : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_EOF( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [retval][out] */ ISDBSongData **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Next( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBSongIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBSongIterator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBSongIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBSongIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBSongIterator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBSongIterator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBSongIterator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBSongIterator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_EOF )( 
            ISDBSongIterator * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBSongIterator * This,
            /* [retval][out] */ ISDBSongData **Value);
        
        /* [id] */ HRESULT ( __stdcall *Next )( 
            ISDBSongIterator * This);
        
        END_INTERFACE
    } ISDBSongIteratorVtbl;

    interface ISDBSongIterator
    {
        CONST_VTBL struct ISDBSongIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBSongIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBSongIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBSongIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBSongIterator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBSongIterator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBSongIterator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBSongIterator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBSongIterator_get_EOF(This,Value)	\
    ( (This)->lpVtbl -> get_EOF(This,Value) ) 

#define ISDBSongIterator_get_Item(This,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Value) ) 

#define ISDBSongIterator_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBSongIterator_INTERFACE_DEFINED__ */


#ifndef __ISDBSongList_INTERFACE_DEFINED__
#define __ISDBSongList_INTERFACE_DEFINED__

/* interface ISDBSongList */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBSongList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B60187D3-0F24-48B4-B6A7-B0E744C0F882")
    ISDBSongList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Add( 
            /* [in] */ IDispatch *Song) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Data( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Artists( 
            /* [retval][out] */ ISDBArtists **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Albums( 
            /* [retval][out] */ ISDBAlbums **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UpdateAll( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISDBSongData **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Item( 
            /* [in] */ long Index,
            /* [in] */ ISDBSongData *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Delete( 
            /* [in] */ long Index) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Insert( 
            /* [in] */ long Index,
            /* [in] */ IDispatch *Song) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBSongListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBSongList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBSongList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBSongList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBSongList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBSongList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBSongList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBSongList * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBSongList * This,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *Add )( 
            ISDBSongList * This,
            /* [in] */ IDispatch *Song);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Data )( 
            ISDBSongList * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Artists )( 
            ISDBSongList * This,
            /* [retval][out] */ ISDBArtists **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Albums )( 
            ISDBSongList * This,
            /* [retval][out] */ ISDBAlbums **Value);
        
        /* [id] */ HRESULT ( __stdcall *UpdateAll )( 
            ISDBSongList * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBSongList * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISDBSongData **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Item )( 
            ISDBSongList * This,
            /* [in] */ long Index,
            /* [in] */ ISDBSongData *Value);
        
        /* [id] */ HRESULT ( __stdcall *Delete )( 
            ISDBSongList * This,
            /* [in] */ long Index);
        
        /* [id] */ HRESULT ( __stdcall *Insert )( 
            ISDBSongList * This,
            /* [in] */ long Index,
            /* [in] */ IDispatch *Song);
        
        END_INTERFACE
    } ISDBSongListVtbl;

    interface ISDBSongList
    {
        CONST_VTBL struct ISDBSongListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBSongList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBSongList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBSongList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBSongList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBSongList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBSongList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBSongList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBSongList_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBSongList_Add(This,Song)	\
    ( (This)->lpVtbl -> Add(This,Song) ) 

#define ISDBSongList_get__Data(This,Value)	\
    ( (This)->lpVtbl -> get__Data(This,Value) ) 

#define ISDBSongList_get_Artists(This,Value)	\
    ( (This)->lpVtbl -> get_Artists(This,Value) ) 

#define ISDBSongList_get_Albums(This,Value)	\
    ( (This)->lpVtbl -> get_Albums(This,Value) ) 

#define ISDBSongList_UpdateAll(This)	\
    ( (This)->lpVtbl -> UpdateAll(This) ) 

#define ISDBSongList_get_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Index,Value) ) 

#define ISDBSongList_put_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> put_Item(This,Index,Value) ) 

#define ISDBSongList_Delete(This,Index)	\
    ( (This)->lpVtbl -> Delete(This,Index) ) 

#define ISDBSongList_Insert(This,Index,Song)	\
    ( (This)->lpVtbl -> Insert(This,Index,Song) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBSongList_INTERFACE_DEFINED__ */


#ifndef __ISDBScriptControl_INTERFACE_DEFINED__
#define __ISDBScriptControl_INTERFACE_DEFINED__

/* interface ISDBScriptControl */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBScriptControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45F7BD3F-88F7-449B-92B7-768A3F66C08B")
    ISDBScriptControl : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Terminate( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ScriptPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UnRegisterAllEvents( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UnRegisterEvents( 
            /* [in] */ IDispatch *ObjectVar) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RegisterEvent( 
            /* [in] */ IDispatch *ObjectVar,
            /* [in] */ BSTR EventName,
            /* [in] */ BSTR HandlerName) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Include( 
            /* [in] */ BSTR ScriptPath) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ShowHangingEvents( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UnRegisterHandler( 
            /* [in] */ BSTR HandlerName) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Reload( 
            /* [in] */ BSTR ScriptPath) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBScriptControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBScriptControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBScriptControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBScriptControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBScriptControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBScriptControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBScriptControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBScriptControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Terminate )( 
            ISDBScriptControl * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ScriptPath )( 
            ISDBScriptControl * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( __stdcall *UnRegisterAllEvents )( 
            ISDBScriptControl * This);
        
        /* [id] */ HRESULT ( __stdcall *UnRegisterEvents )( 
            ISDBScriptControl * This,
            /* [in] */ IDispatch *ObjectVar);
        
        /* [id] */ HRESULT ( __stdcall *RegisterEvent )( 
            ISDBScriptControl * This,
            /* [in] */ IDispatch *ObjectVar,
            /* [in] */ BSTR EventName,
            /* [in] */ BSTR HandlerName);
        
        /* [id] */ HRESULT ( __stdcall *Include )( 
            ISDBScriptControl * This,
            /* [in] */ BSTR ScriptPath);
        
        /* [id] */ HRESULT ( __stdcall *ShowHangingEvents )( 
            ISDBScriptControl * This);
        
        /* [id] */ HRESULT ( __stdcall *UnRegisterHandler )( 
            ISDBScriptControl * This,
            /* [in] */ BSTR HandlerName);
        
        /* [id] */ HRESULT ( __stdcall *Reload )( 
            ISDBScriptControl * This,
            /* [in] */ BSTR ScriptPath);
        
        END_INTERFACE
    } ISDBScriptControlVtbl;

    interface ISDBScriptControl
    {
        CONST_VTBL struct ISDBScriptControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBScriptControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBScriptControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBScriptControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBScriptControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBScriptControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBScriptControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBScriptControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBScriptControl_get_Terminate(This,Value)	\
    ( (This)->lpVtbl -> get_Terminate(This,Value) ) 

#define ISDBScriptControl_get_ScriptPath(This,Value)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,Value) ) 

#define ISDBScriptControl_UnRegisterAllEvents(This)	\
    ( (This)->lpVtbl -> UnRegisterAllEvents(This) ) 

#define ISDBScriptControl_UnRegisterEvents(This,ObjectVar)	\
    ( (This)->lpVtbl -> UnRegisterEvents(This,ObjectVar) ) 

#define ISDBScriptControl_RegisterEvent(This,ObjectVar,EventName,HandlerName)	\
    ( (This)->lpVtbl -> RegisterEvent(This,ObjectVar,EventName,HandlerName) ) 

#define ISDBScriptControl_Include(This,ScriptPath)	\
    ( (This)->lpVtbl -> Include(This,ScriptPath) ) 

#define ISDBScriptControl_ShowHangingEvents(This)	\
    ( (This)->lpVtbl -> ShowHangingEvents(This) ) 

#define ISDBScriptControl_UnRegisterHandler(This,HandlerName)	\
    ( (This)->lpVtbl -> UnRegisterHandler(This,HandlerName) ) 

#define ISDBScriptControl_Reload(This,ScriptPath)	\
    ( (This)->lpVtbl -> Reload(This,ScriptPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBScriptControl_INTERFACE_DEFINED__ */


#ifndef __ISDBDropTarget_INTERFACE_DEFINED__
#define __ISDBDropTarget_INTERFACE_DEFINED__

/* interface ISDBDropTarget */
/* [object][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBDropTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F5AE7210-0621-4B4A-8D76-C264E9375FFF")
    ISDBDropTarget : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISDBDropTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBDropTarget * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBDropTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBDropTarget * This);
        
        END_INTERFACE
    } ISDBDropTargetVtbl;

    interface ISDBDropTarget
    {
        CONST_VTBL struct ISDBDropTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBDropTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBDropTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBDropTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBDropTarget_INTERFACE_DEFINED__ */


#ifndef __ISDBPlaylist_INTERFACE_DEFINED__
#define __ISDBPlaylist_INTERFACE_DEFINED__

/* interface ISDBPlaylist */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBPlaylist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7CC72801-2FA7-4147-AF06-0D3293BE3FE1")
    ISDBPlaylist : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Title( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Title( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isAutoplaylist( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ChildPlaylists( 
            /* [retval][out] */ ISDBPlaylists **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Tracks( 
            /* [retval][out] */ ISDBSongList **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddTrack( 
            /* [in] */ ISDBSongData *Track) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddTracks( 
            /* [in] */ ISDBSongList *Tracks) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Delete( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Clear( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RemoveTrack( 
            /* [in] */ ISDBSongData *Track) = 0;
        
        virtual /* [id] */ HRESULT __stdcall MoveTrack( 
            /* [in] */ ISDBSongData *Track,
            /* [in] */ ISDBSongData *BeforeTrack) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CreateChildPlaylist( 
            /* [in] */ BSTR Title,
            /* [retval][out] */ IDispatch **Playlist) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddTrackById( 
            /* [in] */ long Track) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall InsertTrack( 
            /* [in] */ long Index,
            /* [in] */ ISDBSongData *Track) = 0;
        
        virtual /* [id] */ HRESULT __stdcall InsertTracks( 
            /* [in] */ long Index,
            /* [in] */ ISDBSongList *Tracks) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RemoveTrackNoConfirmation( 
            /* [in] */ ISDBSongData *Track) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBPlaylistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBPlaylist * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBPlaylist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBPlaylist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBPlaylist * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBPlaylist * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBPlaylist * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBPlaylist * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Title )( 
            ISDBPlaylist * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Title )( 
            ISDBPlaylist * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isAutoplaylist )( 
            ISDBPlaylist * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ChildPlaylists )( 
            ISDBPlaylist * This,
            /* [retval][out] */ ISDBPlaylists **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Tracks )( 
            ISDBPlaylist * This,
            /* [retval][out] */ ISDBSongList **Value);
        
        /* [id] */ HRESULT ( __stdcall *AddTrack )( 
            ISDBPlaylist * This,
            /* [in] */ ISDBSongData *Track);
        
        /* [id] */ HRESULT ( __stdcall *AddTracks )( 
            ISDBPlaylist * This,
            /* [in] */ ISDBSongList *Tracks);
        
        /* [id] */ HRESULT ( __stdcall *Delete )( 
            ISDBPlaylist * This);
        
        /* [id] */ HRESULT ( __stdcall *Clear )( 
            ISDBPlaylist * This);
        
        /* [id] */ HRESULT ( __stdcall *RemoveTrack )( 
            ISDBPlaylist * This,
            /* [in] */ ISDBSongData *Track);
        
        /* [id] */ HRESULT ( __stdcall *MoveTrack )( 
            ISDBPlaylist * This,
            /* [in] */ ISDBSongData *Track,
            /* [in] */ ISDBSongData *BeforeTrack);
        
        /* [id] */ HRESULT ( __stdcall *CreateChildPlaylist )( 
            ISDBPlaylist * This,
            /* [in] */ BSTR Title,
            /* [retval][out] */ IDispatch **Playlist);
        
        /* [id] */ HRESULT ( __stdcall *AddTrackById )( 
            ISDBPlaylist * This,
            /* [in] */ long Track);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ID )( 
            ISDBPlaylist * This,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *InsertTrack )( 
            ISDBPlaylist * This,
            /* [in] */ long Index,
            /* [in] */ ISDBSongData *Track);
        
        /* [id] */ HRESULT ( __stdcall *InsertTracks )( 
            ISDBPlaylist * This,
            /* [in] */ long Index,
            /* [in] */ ISDBSongList *Tracks);
        
        /* [id] */ HRESULT ( __stdcall *RemoveTrackNoConfirmation )( 
            ISDBPlaylist * This,
            /* [in] */ ISDBSongData *Track);
        
        END_INTERFACE
    } ISDBPlaylistVtbl;

    interface ISDBPlaylist
    {
        CONST_VTBL struct ISDBPlaylistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBPlaylist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBPlaylist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBPlaylist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBPlaylist_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBPlaylist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBPlaylist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBPlaylist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBPlaylist_get_Title(This,Value)	\
    ( (This)->lpVtbl -> get_Title(This,Value) ) 

#define ISDBPlaylist_put_Title(This,Value)	\
    ( (This)->lpVtbl -> put_Title(This,Value) ) 

#define ISDBPlaylist_get_isAutoplaylist(This,Value)	\
    ( (This)->lpVtbl -> get_isAutoplaylist(This,Value) ) 

#define ISDBPlaylist_get_ChildPlaylists(This,Value)	\
    ( (This)->lpVtbl -> get_ChildPlaylists(This,Value) ) 

#define ISDBPlaylist_get_Tracks(This,Value)	\
    ( (This)->lpVtbl -> get_Tracks(This,Value) ) 

#define ISDBPlaylist_AddTrack(This,Track)	\
    ( (This)->lpVtbl -> AddTrack(This,Track) ) 

#define ISDBPlaylist_AddTracks(This,Tracks)	\
    ( (This)->lpVtbl -> AddTracks(This,Tracks) ) 

#define ISDBPlaylist_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define ISDBPlaylist_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISDBPlaylist_RemoveTrack(This,Track)	\
    ( (This)->lpVtbl -> RemoveTrack(This,Track) ) 

#define ISDBPlaylist_MoveTrack(This,Track,BeforeTrack)	\
    ( (This)->lpVtbl -> MoveTrack(This,Track,BeforeTrack) ) 

#define ISDBPlaylist_CreateChildPlaylist(This,Title,Playlist)	\
    ( (This)->lpVtbl -> CreateChildPlaylist(This,Title,Playlist) ) 

#define ISDBPlaylist_AddTrackById(This,Track)	\
    ( (This)->lpVtbl -> AddTrackById(This,Track) ) 

#define ISDBPlaylist_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ISDBPlaylist_InsertTrack(This,Index,Track)	\
    ( (This)->lpVtbl -> InsertTrack(This,Index,Track) ) 

#define ISDBPlaylist_InsertTracks(This,Index,Tracks)	\
    ( (This)->lpVtbl -> InsertTracks(This,Index,Tracks) ) 

#define ISDBPlaylist_RemoveTrackNoConfirmation(This,Track)	\
    ( (This)->lpVtbl -> RemoveTrackNoConfirmation(This,Track) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBPlaylist_INTERFACE_DEFINED__ */


#ifndef __ISDBPlaylists_INTERFACE_DEFINED__
#define __ISDBPlaylists_INTERFACE_DEFINED__

/* interface ISDBPlaylists */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBPlaylists;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5130E62B-276F-4822-851E-D4B3023AB7AB")
    ISDBPlaylists : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISDBPlaylist **Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBPlaylistsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBPlaylists * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBPlaylists * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBPlaylists * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBPlaylists * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBPlaylists * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBPlaylists * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBPlaylists * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBPlaylists * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBPlaylists * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISDBPlaylist **Value);
        
        END_INTERFACE
    } ISDBPlaylistsVtbl;

    interface ISDBPlaylists
    {
        CONST_VTBL struct ISDBPlaylistsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBPlaylists_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBPlaylists_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBPlaylists_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBPlaylists_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBPlaylists_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBPlaylists_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBPlaylists_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBPlaylists_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBPlaylists_get_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Index,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBPlaylists_INTERFACE_DEFINED__ */


#ifndef __ISDBTreeNode_INTERFACE_DEFINED__
#define __ISDBTreeNode_INTERFACE_DEFINED__

/* interface ISDBTreeNode */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBTreeNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F54727BF-04C0-4ECA-8A8D-A44C11797D3E")
    ISDBTreeNode : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IconIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_IconIndex( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CustomNodeId( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CustomNodeId( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CustomDataId( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CustomDataId( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CustomData( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CustomData( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Expanded( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Expanded( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UseScript( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_UseScript( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OnFillTracksFunct( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OnFillTracksFunct( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OnFillChildren( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OnFillChildren( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_HasChildren( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_HasChildren( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OnEdited( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OnEdited( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OnDragDrop( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OnDragDrop( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SortGroup( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SortGroup( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Visible( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SortCriteria( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SortCriteria( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CustomObject( 
            /* [retval][out] */ IUnknown **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CustomObject( 
            /* [in] */ IUnknown *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NodeType( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_NodeType( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Path( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Path( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_RelatedObjectID( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBTreeNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTreeNode * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTreeNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTreeNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTreeNode * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTreeNode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTreeNode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTreeNode * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IconIndex )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_IconIndex )( 
            ISDBTreeNode * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CustomNodeId )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CustomNodeId )( 
            ISDBTreeNode * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CustomDataId )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CustomDataId )( 
            ISDBTreeNode * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CustomData )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CustomData )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Expanded )( 
            ISDBTreeNode * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Expanded )( 
            ISDBTreeNode * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UseScript )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_UseScript )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OnFillTracksFunct )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OnFillTracksFunct )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OnFillChildren )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OnFillChildren )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_HasChildren )( 
            ISDBTreeNode * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_HasChildren )( 
            ISDBTreeNode * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OnEdited )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OnEdited )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OnDragDrop )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OnDragDrop )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SortGroup )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SortGroup )( 
            ISDBTreeNode * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Visible )( 
            ISDBTreeNode * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Visible )( 
            ISDBTreeNode * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SortCriteria )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SortCriteria )( 
            ISDBTreeNode * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CustomObject )( 
            ISDBTreeNode * This,
            /* [retval][out] */ IUnknown **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CustomObject )( 
            ISDBTreeNode * This,
            /* [in] */ IUnknown *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NodeType )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_NodeType )( 
            ISDBTreeNode * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Path )( 
            ISDBTreeNode * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Path )( 
            ISDBTreeNode * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_RelatedObjectID )( 
            ISDBTreeNode * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } ISDBTreeNodeVtbl;

    interface ISDBTreeNode
    {
        CONST_VTBL struct ISDBTreeNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTreeNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTreeNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTreeNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTreeNode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTreeNode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTreeNode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTreeNode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBTreeNode_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBTreeNode_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#define ISDBTreeNode_get_IconIndex(This,Value)	\
    ( (This)->lpVtbl -> get_IconIndex(This,Value) ) 

#define ISDBTreeNode_put_IconIndex(This,Value)	\
    ( (This)->lpVtbl -> put_IconIndex(This,Value) ) 

#define ISDBTreeNode_get_CustomNodeId(This,Value)	\
    ( (This)->lpVtbl -> get_CustomNodeId(This,Value) ) 

#define ISDBTreeNode_put_CustomNodeId(This,Value)	\
    ( (This)->lpVtbl -> put_CustomNodeId(This,Value) ) 

#define ISDBTreeNode_get_CustomDataId(This,Value)	\
    ( (This)->lpVtbl -> get_CustomDataId(This,Value) ) 

#define ISDBTreeNode_put_CustomDataId(This,Value)	\
    ( (This)->lpVtbl -> put_CustomDataId(This,Value) ) 

#define ISDBTreeNode_get_CustomData(This,Value)	\
    ( (This)->lpVtbl -> get_CustomData(This,Value) ) 

#define ISDBTreeNode_put_CustomData(This,Value)	\
    ( (This)->lpVtbl -> put_CustomData(This,Value) ) 

#define ISDBTreeNode_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#define ISDBTreeNode_get_Expanded(This,Value)	\
    ( (This)->lpVtbl -> get_Expanded(This,Value) ) 

#define ISDBTreeNode_put_Expanded(This,Value)	\
    ( (This)->lpVtbl -> put_Expanded(This,Value) ) 

#define ISDBTreeNode_get_UseScript(This,Value)	\
    ( (This)->lpVtbl -> get_UseScript(This,Value) ) 

#define ISDBTreeNode_put_UseScript(This,Value)	\
    ( (This)->lpVtbl -> put_UseScript(This,Value) ) 

#define ISDBTreeNode_get_OnFillTracksFunct(This,Value)	\
    ( (This)->lpVtbl -> get_OnFillTracksFunct(This,Value) ) 

#define ISDBTreeNode_put_OnFillTracksFunct(This,Value)	\
    ( (This)->lpVtbl -> put_OnFillTracksFunct(This,Value) ) 

#define ISDBTreeNode_get_OnFillChildren(This,Value)	\
    ( (This)->lpVtbl -> get_OnFillChildren(This,Value) ) 

#define ISDBTreeNode_put_OnFillChildren(This,Value)	\
    ( (This)->lpVtbl -> put_OnFillChildren(This,Value) ) 

#define ISDBTreeNode_get_HasChildren(This,Value)	\
    ( (This)->lpVtbl -> get_HasChildren(This,Value) ) 

#define ISDBTreeNode_put_HasChildren(This,Value)	\
    ( (This)->lpVtbl -> put_HasChildren(This,Value) ) 

#define ISDBTreeNode_get_OnEdited(This,Value)	\
    ( (This)->lpVtbl -> get_OnEdited(This,Value) ) 

#define ISDBTreeNode_put_OnEdited(This,Value)	\
    ( (This)->lpVtbl -> put_OnEdited(This,Value) ) 

#define ISDBTreeNode_get_OnDragDrop(This,Value)	\
    ( (This)->lpVtbl -> get_OnDragDrop(This,Value) ) 

#define ISDBTreeNode_put_OnDragDrop(This,Value)	\
    ( (This)->lpVtbl -> put_OnDragDrop(This,Value) ) 

#define ISDBTreeNode_get_SortGroup(This,Value)	\
    ( (This)->lpVtbl -> get_SortGroup(This,Value) ) 

#define ISDBTreeNode_put_SortGroup(This,Value)	\
    ( (This)->lpVtbl -> put_SortGroup(This,Value) ) 

#define ISDBTreeNode_get_Visible(This,Value)	\
    ( (This)->lpVtbl -> get_Visible(This,Value) ) 

#define ISDBTreeNode_put_Visible(This,Value)	\
    ( (This)->lpVtbl -> put_Visible(This,Value) ) 

#define ISDBTreeNode_get_SortCriteria(This,Value)	\
    ( (This)->lpVtbl -> get_SortCriteria(This,Value) ) 

#define ISDBTreeNode_put_SortCriteria(This,Value)	\
    ( (This)->lpVtbl -> put_SortCriteria(This,Value) ) 

#define ISDBTreeNode_get_CustomObject(This,Value)	\
    ( (This)->lpVtbl -> get_CustomObject(This,Value) ) 

#define ISDBTreeNode_put_CustomObject(This,Value)	\
    ( (This)->lpVtbl -> put_CustomObject(This,Value) ) 

#define ISDBTreeNode_get_NodeType(This,Value)	\
    ( (This)->lpVtbl -> get_NodeType(This,Value) ) 

#define ISDBTreeNode_put_NodeType(This,Value)	\
    ( (This)->lpVtbl -> put_NodeType(This,Value) ) 

#define ISDBTreeNode_get_Path(This,Value)	\
    ( (This)->lpVtbl -> get_Path(This,Value) ) 

#define ISDBTreeNode_put_Path(This,Value)	\
    ( (This)->lpVtbl -> put_Path(This,Value) ) 

#define ISDBTreeNode_get_RelatedObjectID(This,Value)	\
    ( (This)->lpVtbl -> get_RelatedObjectID(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBTreeNode_INTERFACE_DEFINED__ */


#ifndef __ISDBTreeNodeEvents_DISPINTERFACE_DEFINED__
#define __ISDBTreeNodeEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBTreeNodeEvents */
/* [version][uuid] */ 


EXTERN_C const IID DIID_ISDBTreeNodeEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4114837B-1B8C-43E9-9185-A3BC7BA40742")
    ISDBTreeNodeEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBTreeNodeEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTreeNodeEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTreeNodeEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTreeNodeEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTreeNodeEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTreeNodeEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTreeNodeEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTreeNodeEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBTreeNodeEventsVtbl;

    interface ISDBTreeNodeEvents
    {
        CONST_VTBL struct ISDBTreeNodeEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTreeNodeEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTreeNodeEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTreeNodeEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTreeNodeEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTreeNodeEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTreeNodeEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTreeNodeEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBTreeNodeEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBTree_INTERFACE_DEFINED__
#define __ISDBTree_INTERFACE_DEFINED__

/* interface ISDBTree */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBTree;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3661304B-4D89-4F19-8287-EF7D84233643")
    ISDBTree : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall AddNode( 
            /* [in] */ ISDBTreeNode *ParentNode,
            /* [in] */ ISDBTreeNode *AddNode,
            /* [in] */ EnumTreeNodePos NodePosition) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CreateNode( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_NowPlaying( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Library( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Artist( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Playlists( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_MyComputer( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Web( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentNode( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CurrentNode( 
            /* [in] */ ISDBTreeNode *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RemoveNode( 
            /* [in] */ ISDBTreeNode *Node) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Album( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Location( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Genre( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Year( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Rating( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Classification( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_FilesToEdit( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_VirtualCD( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Previews( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NextNode( 
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PreviousNode( 
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NextSiblingNode( 
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PreviousSiblingNode( 
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FirstChildNode( 
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_LastChildNode( 
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SortChildren( 
            /* [in] */ ISDBTreeNode *Node) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ParentNode( 
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Radio( 
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Refresh( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Library_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Artist_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Album_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Location_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Genre_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Year_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Rating_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Classification_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_FilesToEdit_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_VirtualCD_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Node_Previews_InCollection( 
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBTreeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTree * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTree * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTree * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTree * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTree * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTree * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTree * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *AddNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *ParentNode,
            /* [in] */ ISDBTreeNode *AddNode,
            /* [in] */ EnumTreeNodePos NodePosition);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CreateNode )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_NowPlaying )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Library )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Artist )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Playlists )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_MyComputer )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Web )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentNode )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CurrentNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Value);
        
        /* [id] */ HRESULT ( __stdcall *RemoveNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Album )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Location )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Genre )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Year )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Rating )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Classification )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_FilesToEdit )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_VirtualCD )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Previews )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NextNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PreviousNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NextSiblingNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PreviousSiblingNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FirstChildNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_LastChildNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id] */ HRESULT ( __stdcall *SortChildren )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ParentNode )( 
            ISDBTree * This,
            /* [in] */ ISDBTreeNode *Node,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Radio )( 
            ISDBTree * This,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id] */ HRESULT ( __stdcall *Refresh )( 
            ISDBTree * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Library_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Artist_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Album_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Location_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Genre_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Year_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Rating_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Classification_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_FilesToEdit_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_VirtualCD_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Node_Previews_InCollection )( 
            ISDBTree * This,
            /* [in] */ long CollectionID,
            /* [retval][out] */ ISDBTreeNode **Value);
        
        END_INTERFACE
    } ISDBTreeVtbl;

    interface ISDBTree
    {
        CONST_VTBL struct ISDBTreeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTree_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTree_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTree_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTree_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTree_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTree_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTree_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBTree_AddNode(This,ParentNode,AddNode,NodePosition)	\
    ( (This)->lpVtbl -> AddNode(This,ParentNode,AddNode,NodePosition) ) 

#define ISDBTree_get_CreateNode(This,Value)	\
    ( (This)->lpVtbl -> get_CreateNode(This,Value) ) 

#define ISDBTree_get_Node_NowPlaying(This,Value)	\
    ( (This)->lpVtbl -> get_Node_NowPlaying(This,Value) ) 

#define ISDBTree_get_Node_Library(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Library(This,Value) ) 

#define ISDBTree_get_Node_Artist(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Artist(This,Value) ) 

#define ISDBTree_get_Node_Playlists(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Playlists(This,Value) ) 

#define ISDBTree_get_Node_MyComputer(This,Value)	\
    ( (This)->lpVtbl -> get_Node_MyComputer(This,Value) ) 

#define ISDBTree_get_Node_Web(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Web(This,Value) ) 

#define ISDBTree_get_CurrentNode(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentNode(This,Value) ) 

#define ISDBTree_put_CurrentNode(This,Value)	\
    ( (This)->lpVtbl -> put_CurrentNode(This,Value) ) 

#define ISDBTree_RemoveNode(This,Node)	\
    ( (This)->lpVtbl -> RemoveNode(This,Node) ) 

#define ISDBTree_get_Node_Album(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Album(This,Value) ) 

#define ISDBTree_get_Node_Location(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Location(This,Value) ) 

#define ISDBTree_get_Node_Genre(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Genre(This,Value) ) 

#define ISDBTree_get_Node_Year(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Year(This,Value) ) 

#define ISDBTree_get_Node_Rating(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Rating(This,Value) ) 

#define ISDBTree_get_Node_Classification(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Classification(This,Value) ) 

#define ISDBTree_get_Node_FilesToEdit(This,Value)	\
    ( (This)->lpVtbl -> get_Node_FilesToEdit(This,Value) ) 

#define ISDBTree_get_Node_VirtualCD(This,Value)	\
    ( (This)->lpVtbl -> get_Node_VirtualCD(This,Value) ) 

#define ISDBTree_get_Node_Previews(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Previews(This,Value) ) 

#define ISDBTree_get_NextNode(This,Node,Value)	\
    ( (This)->lpVtbl -> get_NextNode(This,Node,Value) ) 

#define ISDBTree_get_PreviousNode(This,Node,Value)	\
    ( (This)->lpVtbl -> get_PreviousNode(This,Node,Value) ) 

#define ISDBTree_get_NextSiblingNode(This,Node,Value)	\
    ( (This)->lpVtbl -> get_NextSiblingNode(This,Node,Value) ) 

#define ISDBTree_get_PreviousSiblingNode(This,Node,Value)	\
    ( (This)->lpVtbl -> get_PreviousSiblingNode(This,Node,Value) ) 

#define ISDBTree_get_FirstChildNode(This,Node,Value)	\
    ( (This)->lpVtbl -> get_FirstChildNode(This,Node,Value) ) 

#define ISDBTree_get_LastChildNode(This,Node,Value)	\
    ( (This)->lpVtbl -> get_LastChildNode(This,Node,Value) ) 

#define ISDBTree_SortChildren(This,Node)	\
    ( (This)->lpVtbl -> SortChildren(This,Node) ) 

#define ISDBTree_get_ParentNode(This,Node,Value)	\
    ( (This)->lpVtbl -> get_ParentNode(This,Node,Value) ) 

#define ISDBTree_get_Node_Radio(This,Value)	\
    ( (This)->lpVtbl -> get_Node_Radio(This,Value) ) 

#define ISDBTree_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define ISDBTree_get_Node_Library_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Library_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Artist_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Artist_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Album_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Album_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Location_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Location_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Genre_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Genre_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Year_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Year_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Rating_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Rating_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Classification_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Classification_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_FilesToEdit_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_FilesToEdit_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_VirtualCD_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_VirtualCD_InCollection(This,CollectionID,Value) ) 

#define ISDBTree_get_Node_Previews_InCollection(This,CollectionID,Value)	\
    ( (This)->lpVtbl -> get_Node_Previews_InCollection(This,CollectionID,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBTree_INTERFACE_DEFINED__ */


#ifndef __ISDBTracksWindow_INTERFACE_DEFINED__
#define __ISDBTracksWindow_INTERFACE_DEFINED__

/* interface ISDBTracksWindow */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBTracksWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("523C0A28-CDBD-4882-A581-3D3C2CD5F480")
    ISDBTracksWindow : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall AddTrack( 
            /* [in] */ ISDBSongData *AddedTrack) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddTracksFromQuery( 
            /* [in] */ BSTR AddSQL) = 0;
        
        virtual /* [id] */ HRESULT __stdcall FinishAdding( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Refresh( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CurrentAddingID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddTrackEx( 
            /* [in] */ ISDBSongData *AddedTrack,
            /* [in] */ long AddingID,
            /* [retval][out] */ VARIANT_BOOL *Added) = 0;
        
        virtual /* [id] */ HRESULT __stdcall FinishAddingEx( 
            /* [in] */ long AddingID) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RemoveSelectedTracks( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddTracksFromCustomQuery( 
            /* [in] */ BSTR SQL) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ViewMode( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ViewMode( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TrackBrowserVisibled( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_TrackBrowserVisibled( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Selected( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Selected( 
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Focused( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Focused( 
            /* [in] */ long Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBTracksWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTracksWindow * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTracksWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTracksWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTracksWindow * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTracksWindow * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTracksWindow * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTracksWindow * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *AddTrack )( 
            ISDBTracksWindow * This,
            /* [in] */ ISDBSongData *AddedTrack);
        
        /* [id] */ HRESULT ( __stdcall *AddTracksFromQuery )( 
            ISDBTracksWindow * This,
            /* [in] */ BSTR AddSQL);
        
        /* [id] */ HRESULT ( __stdcall *FinishAdding )( 
            ISDBTracksWindow * This);
        
        /* [id] */ HRESULT ( __stdcall *Refresh )( 
            ISDBTracksWindow * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CurrentAddingID )( 
            ISDBTracksWindow * This,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *AddTrackEx )( 
            ISDBTracksWindow * This,
            /* [in] */ ISDBSongData *AddedTrack,
            /* [in] */ long AddingID,
            /* [retval][out] */ VARIANT_BOOL *Added);
        
        /* [id] */ HRESULT ( __stdcall *FinishAddingEx )( 
            ISDBTracksWindow * This,
            /* [in] */ long AddingID);
        
        /* [id] */ HRESULT ( __stdcall *RemoveSelectedTracks )( 
            ISDBTracksWindow * This);
        
        /* [id] */ HRESULT ( __stdcall *AddTracksFromCustomQuery )( 
            ISDBTracksWindow * This,
            /* [in] */ BSTR SQL);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ViewMode )( 
            ISDBTracksWindow * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ViewMode )( 
            ISDBTracksWindow * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TrackBrowserVisibled )( 
            ISDBTracksWindow * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_TrackBrowserVisibled )( 
            ISDBTracksWindow * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Selected )( 
            ISDBTracksWindow * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Selected )( 
            ISDBTracksWindow * This,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Focused )( 
            ISDBTracksWindow * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Focused )( 
            ISDBTracksWindow * This,
            /* [in] */ long Value);
        
        END_INTERFACE
    } ISDBTracksWindowVtbl;

    interface ISDBTracksWindow
    {
        CONST_VTBL struct ISDBTracksWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTracksWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTracksWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTracksWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTracksWindow_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTracksWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTracksWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTracksWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBTracksWindow_AddTrack(This,AddedTrack)	\
    ( (This)->lpVtbl -> AddTrack(This,AddedTrack) ) 

#define ISDBTracksWindow_AddTracksFromQuery(This,AddSQL)	\
    ( (This)->lpVtbl -> AddTracksFromQuery(This,AddSQL) ) 

#define ISDBTracksWindow_FinishAdding(This)	\
    ( (This)->lpVtbl -> FinishAdding(This) ) 

#define ISDBTracksWindow_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define ISDBTracksWindow_get_CurrentAddingID(This,Value)	\
    ( (This)->lpVtbl -> get_CurrentAddingID(This,Value) ) 

#define ISDBTracksWindow_AddTrackEx(This,AddedTrack,AddingID,Added)	\
    ( (This)->lpVtbl -> AddTrackEx(This,AddedTrack,AddingID,Added) ) 

#define ISDBTracksWindow_FinishAddingEx(This,AddingID)	\
    ( (This)->lpVtbl -> FinishAddingEx(This,AddingID) ) 

#define ISDBTracksWindow_RemoveSelectedTracks(This)	\
    ( (This)->lpVtbl -> RemoveSelectedTracks(This) ) 

#define ISDBTracksWindow_AddTracksFromCustomQuery(This,SQL)	\
    ( (This)->lpVtbl -> AddTracksFromCustomQuery(This,SQL) ) 

#define ISDBTracksWindow_get_ViewMode(This,Value)	\
    ( (This)->lpVtbl -> get_ViewMode(This,Value) ) 

#define ISDBTracksWindow_put_ViewMode(This,Value)	\
    ( (This)->lpVtbl -> put_ViewMode(This,Value) ) 

#define ISDBTracksWindow_get_TrackBrowserVisibled(This,Value)	\
    ( (This)->lpVtbl -> get_TrackBrowserVisibled(This,Value) ) 

#define ISDBTracksWindow_put_TrackBrowserVisibled(This,Value)	\
    ( (This)->lpVtbl -> put_TrackBrowserVisibled(This,Value) ) 

#define ISDBTracksWindow_get_Selected(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Selected(This,Index,Value) ) 

#define ISDBTracksWindow_put_Selected(This,Index,Value)	\
    ( (This)->lpVtbl -> put_Selected(This,Index,Value) ) 

#define ISDBTracksWindow_get_Focused(This,Value)	\
    ( (This)->lpVtbl -> get_Focused(This,Value) ) 

#define ISDBTracksWindow_put_Focused(This,Value)	\
    ( (This)->lpVtbl -> put_Focused(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBTracksWindow_INTERFACE_DEFINED__ */


#ifndef __ISDBDBIterator_INTERFACE_DEFINED__
#define __ISDBDBIterator_INTERFACE_DEFINED__

/* interface ISDBDBIterator */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBDBIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78A80973-8781-4BDC-A1F4-06131F07AA1E")
    ISDBDBIterator : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_EOF( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Next( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_StringByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_StringByName( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ValueByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ValueByName( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FieldNames( 
            /* [retval][out] */ ISDBStringList **Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBDBIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBDBIterator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBDBIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBDBIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBDBIterator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBDBIterator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBDBIterator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBDBIterator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_EOF )( 
            ISDBDBIterator * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id] */ HRESULT ( __stdcall *Next )( 
            ISDBDBIterator * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StringByIndex )( 
            ISDBDBIterator * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StringByName )( 
            ISDBDBIterator * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ValueByIndex )( 
            ISDBDBIterator * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ValueByName )( 
            ISDBDBIterator * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FieldNames )( 
            ISDBDBIterator * This,
            /* [retval][out] */ ISDBStringList **Value);
        
        END_INTERFACE
    } ISDBDBIteratorVtbl;

    interface ISDBDBIterator
    {
        CONST_VTBL struct ISDBDBIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBDBIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBDBIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBDBIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBDBIterator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBDBIterator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBDBIterator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBDBIterator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBDBIterator_get_EOF(This,Value)	\
    ( (This)->lpVtbl -> get_EOF(This,Value) ) 

#define ISDBDBIterator_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define ISDBDBIterator_get_StringByIndex(This,Index,Value)	\
    ( (This)->lpVtbl -> get_StringByIndex(This,Index,Value) ) 

#define ISDBDBIterator_get_StringByName(This,Name,Value)	\
    ( (This)->lpVtbl -> get_StringByName(This,Name,Value) ) 

#define ISDBDBIterator_get_ValueByIndex(This,Index,Value)	\
    ( (This)->lpVtbl -> get_ValueByIndex(This,Index,Value) ) 

#define ISDBDBIterator_get_ValueByName(This,Name,Value)	\
    ( (This)->lpVtbl -> get_ValueByName(This,Name,Value) ) 

#define ISDBDBIterator_get_FieldNames(This,Value)	\
    ( (This)->lpVtbl -> get_FieldNames(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBDBIterator_INTERFACE_DEFINED__ */


#ifndef __ISDBUIForm_INTERFACE_DEFINED__
#define __ISDBUIForm_INTERFACE_DEFINED__

/* interface ISDBUIForm */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIForm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D91CA9B4-9849-43AA-BF9C-1C164F5DCC29")
    ISDBUIForm : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall ShowModal( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FormPosition( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FormPosition( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SavePositionName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SavePositionName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_BorderStyle( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_BorderStyle( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_StayOnTop( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_StayOnTop( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ActiveControl( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ActiveControl( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIFormVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIForm * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIForm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIForm * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIForm * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIForm * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIForm * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIForm * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *ShowModal )( 
            ISDBUIForm * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBUIForm * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBUIForm * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBUIForm * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIForm * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FormPosition )( 
            ISDBUIForm * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FormPosition )( 
            ISDBUIForm * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SavePositionName )( 
            ISDBUIForm * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SavePositionName )( 
            ISDBUIForm * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_BorderStyle )( 
            ISDBUIForm * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_BorderStyle )( 
            ISDBUIForm * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StayOnTop )( 
            ISDBUIForm * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_StayOnTop )( 
            ISDBUIForm * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ActiveControl )( 
            ISDBUIForm * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ActiveControl )( 
            ISDBUIForm * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBUIFormVtbl;

    interface ISDBUIForm
    {
        CONST_VTBL struct ISDBUIFormVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIForm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIForm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIForm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIForm_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIForm_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIForm_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIForm_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIForm_ShowModal(This,Value)	\
    ( (This)->lpVtbl -> ShowModal(This,Value) ) 

#define ISDBUIForm_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#define ISDBUIForm_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBUIForm_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#define ISDBUIForm_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIForm_get_FormPosition(This,Value)	\
    ( (This)->lpVtbl -> get_FormPosition(This,Value) ) 

#define ISDBUIForm_put_FormPosition(This,Value)	\
    ( (This)->lpVtbl -> put_FormPosition(This,Value) ) 

#define ISDBUIForm_get_SavePositionName(This,Value)	\
    ( (This)->lpVtbl -> get_SavePositionName(This,Value) ) 

#define ISDBUIForm_put_SavePositionName(This,Value)	\
    ( (This)->lpVtbl -> put_SavePositionName(This,Value) ) 

#define ISDBUIForm_get_BorderStyle(This,Value)	\
    ( (This)->lpVtbl -> get_BorderStyle(This,Value) ) 

#define ISDBUIForm_put_BorderStyle(This,Value)	\
    ( (This)->lpVtbl -> put_BorderStyle(This,Value) ) 

#define ISDBUIForm_get_StayOnTop(This,Value)	\
    ( (This)->lpVtbl -> get_StayOnTop(This,Value) ) 

#define ISDBUIForm_put_StayOnTop(This,Value)	\
    ( (This)->lpVtbl -> put_StayOnTop(This,Value) ) 

#define ISDBUIForm_get_ActiveControl(This,Value)	\
    ( (This)->lpVtbl -> get_ActiveControl(This,Value) ) 

#define ISDBUIForm_put_ActiveControl(This,Value)	\
    ( (This)->lpVtbl -> put_ActiveControl(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIForm_INTERFACE_DEFINED__ */


#ifndef __ISDBUIFormEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIFormEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIFormEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIFormEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A3697E42-803E-43AD-A195-6DA916427674")
    ISDBUIFormEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIFormEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIFormEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIFormEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIFormEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIFormEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIFormEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIFormEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIFormEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIFormEventsVtbl;

    interface ISDBUIFormEvents
    {
        CONST_VTBL struct ISDBUIFormEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIFormEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIFormEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIFormEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIFormEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIFormEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIFormEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIFormEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIFormEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUI_INTERFACE_DEFINED__
#define __ISDBUI_INTERFACE_DEFINED__

/* interface ISDBUI */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A91F4C6-42D4-41A5-9190-EEAC3686D760")
    ISDBUI : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_NewForm( 
            /* [retval][out] */ ISDBUIForm **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewButton( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIButton **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewEdit( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIEdit **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewPanel( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIPanel **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewCheckBox( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUICheckBox **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddOptionSheet( 
            /* [in] */ BSTR SheetLabel,
            /* [in] */ BSTR ScriptFile,
            /* [in] */ BSTR InitProcedure,
            /* [in] */ BSTR SaveProcedure,
            /* [defaultvalue][in] */ long ParentId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewTranspPanel( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUITranspPanel **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewLabel( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUILabel **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewActiveX( 
            /* [in] */ IDispatch *Owner,
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ ISDBUIActiveX **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewDropDown( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIDropDown **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddMenuItem( 
            /* [in] */ ISDBMenuItem *ParentItem,
            /* [in] */ long InSection,
            /* [in] */ long ItemOrder,
            /* [retval][out] */ ISDBMenuItem **NewItem) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_File( 
            /* [retval][out] */ ISDBMenuItem **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Export( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Edit( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_View( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Play( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Tools( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Scripts( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Help( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbStandard( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbAdvanced( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbEdit( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbSearch( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbCategorize( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TrayIcon( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_Tree( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_TrackList( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_NP( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbNavigation( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbNPMain( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbNPList( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_TbNPEdit( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddMenuItemSub( 
            /* [in] */ ISDBMenuItem *ParentItem,
            /* [in] */ long InSection,
            /* [in] */ long ItemOrder,
            /* [retval][out] */ ISDBMenuItem **NewItem) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddMenuItemSep( 
            /* [in] */ ISDBMenuItem *ParentItem,
            /* [in] */ long InSection,
            /* [in] */ long ItemOrder,
            /* [retval][out] */ ISDBMenuItem **NewItem) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_Tree_SendTo( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_TrackList_SendTo( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_TrackList_MoreFrom( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_NP_SendTo( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_NP_MoreFrom( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewRadioButton( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIRadioButton **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewSpinEdit( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUISpinEdit	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewTrackBar( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUITrackBar	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewDockablePanel( 
            /* [retval][out] */ SDBUIDockablePanel	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewDockablePersistentPanel( 
            /* [in] */ BSTR PanelName,
            /* [retval][out] */ SDBUIDockablePanel	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_NP_MainWindow( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewGroupBox( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIGroupBox	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewMultiLineEdit( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIMultiLineEdit	**Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteOptionSheet( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewMaskEdit( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIMaskEdit	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_NP_MainWindow_SendTo( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Menu_Pop_NP_MainWindow_MoreFrom( 
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddOptionSheetEx( 
            /* [in] */ BSTR SheetLabel,
            /* [in] */ BSTR ScriptFile,
            /* [in] */ BSTR InitProcedure,
            /* [in] */ BSTR SaveProcedure,
            /* [in] */ BSTR CancelProcedure,
            /* [defaultvalue][in] */ long ParentId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewListBox( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIListBox	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewTreeList( 
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUITreeList **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ShowOptions( 
            /* [in] */ long SheetId) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MainWindowFocus( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MainWindowFocus( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddPropertiesSheet( 
            /* [in] */ BSTR SheetLabel,
            /* [in] */ BSTR ScriptFile,
            /* [in] */ BSTR InitProcedure,
            /* [in] */ BSTR TrackChangeProcedure,
            /* [in] */ BSTR SaveProcedure,
            /* [in] */ long Order,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeletePropertiesSheet( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ShowPropertiesSheet( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall HidePropertiesSheet( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddToolbar( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_GetToolbar( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ SDBMenuItem	**Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUI * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUI * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUI * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUI * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUI * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUI * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewForm )( 
            ISDBUI * This,
            /* [retval][out] */ ISDBUIForm **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewButton )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIButton **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewEdit )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIEdit **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewPanel )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIPanel **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewCheckBox )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUICheckBox **Value);
        
        /* [id] */ HRESULT ( __stdcall *AddOptionSheet )( 
            ISDBUI * This,
            /* [in] */ BSTR SheetLabel,
            /* [in] */ BSTR ScriptFile,
            /* [in] */ BSTR InitProcedure,
            /* [in] */ BSTR SaveProcedure,
            /* [defaultvalue][in] */ long ParentId,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewTranspPanel )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUITranspPanel **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewLabel )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUILabel **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewActiveX )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ ISDBUIActiveX **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewDropDown )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIDropDown **Value);
        
        /* [id] */ HRESULT ( __stdcall *AddMenuItem )( 
            ISDBUI * This,
            /* [in] */ ISDBMenuItem *ParentItem,
            /* [in] */ long InSection,
            /* [in] */ long ItemOrder,
            /* [retval][out] */ ISDBMenuItem **NewItem);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_File )( 
            ISDBUI * This,
            /* [retval][out] */ ISDBMenuItem **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Export )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Edit )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_View )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Play )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Tools )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Scripts )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Help )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbStandard )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbAdvanced )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbEdit )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbSearch )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbCategorize )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TrayIcon )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_Tree )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_TrackList )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_NP )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbNavigation )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbNPMain )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbNPList )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_TbNPEdit )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id] */ HRESULT ( __stdcall *AddMenuItemSub )( 
            ISDBUI * This,
            /* [in] */ ISDBMenuItem *ParentItem,
            /* [in] */ long InSection,
            /* [in] */ long ItemOrder,
            /* [retval][out] */ ISDBMenuItem **NewItem);
        
        /* [id] */ HRESULT ( __stdcall *AddMenuItemSep )( 
            ISDBUI * This,
            /* [in] */ ISDBMenuItem *ParentItem,
            /* [in] */ long InSection,
            /* [in] */ long ItemOrder,
            /* [retval][out] */ ISDBMenuItem **NewItem);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_Tree_SendTo )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_TrackList_SendTo )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_TrackList_MoreFrom )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_NP_SendTo )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_NP_MoreFrom )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewRadioButton )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUIRadioButton **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewSpinEdit )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUISpinEdit	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewTrackBar )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUITrackBar	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewDockablePanel )( 
            ISDBUI * This,
            /* [retval][out] */ SDBUIDockablePanel	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewDockablePersistentPanel )( 
            ISDBUI * This,
            /* [in] */ BSTR PanelName,
            /* [retval][out] */ SDBUIDockablePanel	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_NP_MainWindow )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewGroupBox )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIGroupBox	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewMultiLineEdit )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIMultiLineEdit	**Value);
        
        /* [id] */ HRESULT ( __stdcall *DeleteOptionSheet )( 
            ISDBUI * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewMaskEdit )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIMaskEdit	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_NP_MainWindow_SendTo )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Menu_Pop_NP_MainWindow_MoreFrom )( 
            ISDBUI * This,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id] */ HRESULT ( __stdcall *AddOptionSheetEx )( 
            ISDBUI * This,
            /* [in] */ BSTR SheetLabel,
            /* [in] */ BSTR ScriptFile,
            /* [in] */ BSTR InitProcedure,
            /* [in] */ BSTR SaveProcedure,
            /* [in] */ BSTR CancelProcedure,
            /* [defaultvalue][in] */ long ParentId,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewListBox )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ SDBUIListBox	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewTreeList )( 
            ISDBUI * This,
            /* [in] */ IDispatch *Owner,
            /* [retval][out] */ ISDBUITreeList **Value);
        
        /* [id] */ HRESULT ( __stdcall *ShowOptions )( 
            ISDBUI * This,
            /* [in] */ long SheetId);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MainWindowFocus )( 
            ISDBUI * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MainWindowFocus )( 
            ISDBUI * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *AddPropertiesSheet )( 
            ISDBUI * This,
            /* [in] */ BSTR SheetLabel,
            /* [in] */ BSTR ScriptFile,
            /* [in] */ BSTR InitProcedure,
            /* [in] */ BSTR TrackChangeProcedure,
            /* [in] */ BSTR SaveProcedure,
            /* [in] */ long Order,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *DeletePropertiesSheet )( 
            ISDBUI * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *ShowPropertiesSheet )( 
            ISDBUI * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *HidePropertiesSheet )( 
            ISDBUI * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *AddToolbar )( 
            ISDBUI * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_GetToolbar )( 
            ISDBUI * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SDBMenuItem	**Value);
        
        END_INTERFACE
    } ISDBUIVtbl;

    interface ISDBUI
    {
        CONST_VTBL struct ISDBUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUI_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUI_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUI_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUI_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUI_get_NewForm(This,Value)	\
    ( (This)->lpVtbl -> get_NewForm(This,Value) ) 

#define ISDBUI_get_NewButton(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewButton(This,Owner,Value) ) 

#define ISDBUI_get_NewEdit(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewEdit(This,Owner,Value) ) 

#define ISDBUI_get_NewPanel(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewPanel(This,Owner,Value) ) 

#define ISDBUI_get_NewCheckBox(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewCheckBox(This,Owner,Value) ) 

#define ISDBUI_AddOptionSheet(This,SheetLabel,ScriptFile,InitProcedure,SaveProcedure,ParentId,Value)	\
    ( (This)->lpVtbl -> AddOptionSheet(This,SheetLabel,ScriptFile,InitProcedure,SaveProcedure,ParentId,Value) ) 

#define ISDBUI_get_NewTranspPanel(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewTranspPanel(This,Owner,Value) ) 

#define ISDBUI_get_NewLabel(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewLabel(This,Owner,Value) ) 

#define ISDBUI_get_NewActiveX(This,Owner,ProgID,Value)	\
    ( (This)->lpVtbl -> get_NewActiveX(This,Owner,ProgID,Value) ) 

#define ISDBUI_get_NewDropDown(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewDropDown(This,Owner,Value) ) 

#define ISDBUI_AddMenuItem(This,ParentItem,InSection,ItemOrder,NewItem)	\
    ( (This)->lpVtbl -> AddMenuItem(This,ParentItem,InSection,ItemOrder,NewItem) ) 

#define ISDBUI_get_Menu_File(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_File(This,Value) ) 

#define ISDBUI_get_Menu_Export(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Export(This,Value) ) 

#define ISDBUI_get_Menu_Edit(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Edit(This,Value) ) 

#define ISDBUI_get_Menu_View(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_View(This,Value) ) 

#define ISDBUI_get_Menu_Play(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Play(This,Value) ) 

#define ISDBUI_get_Menu_Tools(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Tools(This,Value) ) 

#define ISDBUI_get_Menu_Scripts(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Scripts(This,Value) ) 

#define ISDBUI_get_Menu_Help(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Help(This,Value) ) 

#define ISDBUI_get_Menu_TbStandard(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbStandard(This,Value) ) 

#define ISDBUI_get_Menu_TbAdvanced(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbAdvanced(This,Value) ) 

#define ISDBUI_get_Menu_TbEdit(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbEdit(This,Value) ) 

#define ISDBUI_get_Menu_TbSearch(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbSearch(This,Value) ) 

#define ISDBUI_get_Menu_TbCategorize(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbCategorize(This,Value) ) 

#define ISDBUI_get_Menu_TrayIcon(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TrayIcon(This,Value) ) 

#define ISDBUI_get_Menu_Pop_Tree(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_Tree(This,Value) ) 

#define ISDBUI_get_Menu_Pop_TrackList(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_TrackList(This,Value) ) 

#define ISDBUI_get_Menu_Pop_NP(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_NP(This,Value) ) 

#define ISDBUI_get_Menu_TbNavigation(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbNavigation(This,Value) ) 

#define ISDBUI_get_Menu_TbNPMain(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbNPMain(This,Value) ) 

#define ISDBUI_get_Menu_TbNPList(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbNPList(This,Value) ) 

#define ISDBUI_get_Menu_TbNPEdit(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_TbNPEdit(This,Value) ) 

#define ISDBUI_AddMenuItemSub(This,ParentItem,InSection,ItemOrder,NewItem)	\
    ( (This)->lpVtbl -> AddMenuItemSub(This,ParentItem,InSection,ItemOrder,NewItem) ) 

#define ISDBUI_AddMenuItemSep(This,ParentItem,InSection,ItemOrder,NewItem)	\
    ( (This)->lpVtbl -> AddMenuItemSep(This,ParentItem,InSection,ItemOrder,NewItem) ) 

#define ISDBUI_get_Menu_Pop_Tree_SendTo(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_Tree_SendTo(This,Value) ) 

#define ISDBUI_get_Menu_Pop_TrackList_SendTo(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_TrackList_SendTo(This,Value) ) 

#define ISDBUI_get_Menu_Pop_TrackList_MoreFrom(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_TrackList_MoreFrom(This,Value) ) 

#define ISDBUI_get_Menu_Pop_NP_SendTo(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_NP_SendTo(This,Value) ) 

#define ISDBUI_get_Menu_Pop_NP_MoreFrom(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_NP_MoreFrom(This,Value) ) 

#define ISDBUI_get_NewRadioButton(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewRadioButton(This,Owner,Value) ) 

#define ISDBUI_get_NewSpinEdit(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewSpinEdit(This,Owner,Value) ) 

#define ISDBUI_get_NewTrackBar(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewTrackBar(This,Owner,Value) ) 

#define ISDBUI_get_NewDockablePanel(This,Value)	\
    ( (This)->lpVtbl -> get_NewDockablePanel(This,Value) ) 

#define ISDBUI_get_NewDockablePersistentPanel(This,PanelName,Value)	\
    ( (This)->lpVtbl -> get_NewDockablePersistentPanel(This,PanelName,Value) ) 

#define ISDBUI_get_Menu_Pop_NP_MainWindow(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_NP_MainWindow(This,Value) ) 

#define ISDBUI_get_NewGroupBox(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewGroupBox(This,Owner,Value) ) 

#define ISDBUI_get_NewMultiLineEdit(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewMultiLineEdit(This,Owner,Value) ) 

#define ISDBUI_DeleteOptionSheet(This,Value)	\
    ( (This)->lpVtbl -> DeleteOptionSheet(This,Value) ) 

#define ISDBUI_get_NewMaskEdit(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewMaskEdit(This,Owner,Value) ) 

#define ISDBUI_get_Menu_Pop_NP_MainWindow_SendTo(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_NP_MainWindow_SendTo(This,Value) ) 

#define ISDBUI_get_Menu_Pop_NP_MainWindow_MoreFrom(This,Value)	\
    ( (This)->lpVtbl -> get_Menu_Pop_NP_MainWindow_MoreFrom(This,Value) ) 

#define ISDBUI_AddOptionSheetEx(This,SheetLabel,ScriptFile,InitProcedure,SaveProcedure,CancelProcedure,ParentId,Value)	\
    ( (This)->lpVtbl -> AddOptionSheetEx(This,SheetLabel,ScriptFile,InitProcedure,SaveProcedure,CancelProcedure,ParentId,Value) ) 

#define ISDBUI_get_NewListBox(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewListBox(This,Owner,Value) ) 

#define ISDBUI_get_NewTreeList(This,Owner,Value)	\
    ( (This)->lpVtbl -> get_NewTreeList(This,Owner,Value) ) 

#define ISDBUI_ShowOptions(This,SheetId)	\
    ( (This)->lpVtbl -> ShowOptions(This,SheetId) ) 

#define ISDBUI_get_MainWindowFocus(This,Value)	\
    ( (This)->lpVtbl -> get_MainWindowFocus(This,Value) ) 

#define ISDBUI_put_MainWindowFocus(This,Value)	\
    ( (This)->lpVtbl -> put_MainWindowFocus(This,Value) ) 

#define ISDBUI_AddPropertiesSheet(This,SheetLabel,ScriptFile,InitProcedure,TrackChangeProcedure,SaveProcedure,Order,Value)	\
    ( (This)->lpVtbl -> AddPropertiesSheet(This,SheetLabel,ScriptFile,InitProcedure,TrackChangeProcedure,SaveProcedure,Order,Value) ) 

#define ISDBUI_DeletePropertiesSheet(This,Value)	\
    ( (This)->lpVtbl -> DeletePropertiesSheet(This,Value) ) 

#define ISDBUI_ShowPropertiesSheet(This,Value)	\
    ( (This)->lpVtbl -> ShowPropertiesSheet(This,Value) ) 

#define ISDBUI_HidePropertiesSheet(This,Value)	\
    ( (This)->lpVtbl -> HidePropertiesSheet(This,Value) ) 

#define ISDBUI_AddToolbar(This,Name,Value)	\
    ( (This)->lpVtbl -> AddToolbar(This,Name,Value) ) 

#define ISDBUI_get_GetToolbar(This,Name,Value)	\
    ( (This)->lpVtbl -> get_GetToolbar(This,Name,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUI_INTERFACE_DEFINED__ */


#ifndef __ISDBUIButton_INTERFACE_DEFINED__
#define __ISDBUIButton_INTERFACE_DEFINED__

/* interface ISDBUIButton */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4045E057-ABE5-4A03-8C68-61F51DC21E7C")
    ISDBUIButton : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UseScript( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_UseScript( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OnClickFunc( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OnClickFunc( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ModalResult( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ModalResult( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Default( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Default( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Cancel( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Cancel( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIButton * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIButton * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIButton * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIButton * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBUIButton * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBUIButton * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIButton * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UseScript )( 
            ISDBUIButton * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_UseScript )( 
            ISDBUIButton * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OnClickFunc )( 
            ISDBUIButton * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OnClickFunc )( 
            ISDBUIButton * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ModalResult )( 
            ISDBUIButton * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ModalResult )( 
            ISDBUIButton * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Default )( 
            ISDBUIButton * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Default )( 
            ISDBUIButton * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Cancel )( 
            ISDBUIButton * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Cancel )( 
            ISDBUIButton * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } ISDBUIButtonVtbl;

    interface ISDBUIButton
    {
        CONST_VTBL struct ISDBUIButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIButton_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIButton_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIButton_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIButton_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIButton_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIButton_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIButton_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIButton_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBUIButton_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#define ISDBUIButton_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIButton_get_UseScript(This,Value)	\
    ( (This)->lpVtbl -> get_UseScript(This,Value) ) 

#define ISDBUIButton_put_UseScript(This,Value)	\
    ( (This)->lpVtbl -> put_UseScript(This,Value) ) 

#define ISDBUIButton_get_OnClickFunc(This,Value)	\
    ( (This)->lpVtbl -> get_OnClickFunc(This,Value) ) 

#define ISDBUIButton_put_OnClickFunc(This,Value)	\
    ( (This)->lpVtbl -> put_OnClickFunc(This,Value) ) 

#define ISDBUIButton_get_ModalResult(This,Value)	\
    ( (This)->lpVtbl -> get_ModalResult(This,Value) ) 

#define ISDBUIButton_put_ModalResult(This,Value)	\
    ( (This)->lpVtbl -> put_ModalResult(This,Value) ) 

#define ISDBUIButton_get_Default(This,Value)	\
    ( (This)->lpVtbl -> get_Default(This,Value) ) 

#define ISDBUIButton_put_Default(This,Value)	\
    ( (This)->lpVtbl -> put_Default(This,Value) ) 

#define ISDBUIButton_get_Cancel(This,Value)	\
    ( (This)->lpVtbl -> get_Cancel(This,Value) ) 

#define ISDBUIButton_put_Cancel(This,Value)	\
    ( (This)->lpVtbl -> put_Cancel(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIButton_INTERFACE_DEFINED__ */


#ifndef __ISDBUIButtonEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIButtonEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIButtonEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIButtonEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CB4BFF25-1F10-495B-812A-AE78FDC0A163")
    ISDBUIButtonEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIButtonEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIButtonEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIButtonEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIButtonEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIButtonEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIButtonEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIButtonEventsVtbl;

    interface ISDBUIButtonEvents
    {
        CONST_VTBL struct ISDBUIButtonEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIButtonEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIButtonEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIButtonEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIButtonEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIButtonEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIButtonEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIButtonEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIButtonEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUIEdit_INTERFACE_DEFINED__
#define __ISDBUIEdit_INTERFACE_DEFINED__

/* interface ISDBUIEdit */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A385CA1-B412-4A12-927A-D77C18374F15")
    ISDBUIEdit : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Text( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Text( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MaxLength( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MaxLength( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PasswordChar( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PasswordChar( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelStart( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelStart( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelLength( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelLength( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelText( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelText( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIEdit * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIEdit * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIEdit * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIEdit * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIEdit * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Text )( 
            ISDBUIEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Text )( 
            ISDBUIEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIEdit * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MaxLength )( 
            ISDBUIEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MaxLength )( 
            ISDBUIEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PasswordChar )( 
            ISDBUIEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PasswordChar )( 
            ISDBUIEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelStart )( 
            ISDBUIEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelStart )( 
            ISDBUIEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelLength )( 
            ISDBUIEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelLength )( 
            ISDBUIEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelText )( 
            ISDBUIEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelText )( 
            ISDBUIEdit * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBUIEditVtbl;

    interface ISDBUIEdit
    {
        CONST_VTBL struct ISDBUIEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIEdit_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIEdit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIEdit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIEdit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIEdit_get_Text(This,Value)	\
    ( (This)->lpVtbl -> get_Text(This,Value) ) 

#define ISDBUIEdit_put_Text(This,Value)	\
    ( (This)->lpVtbl -> put_Text(This,Value) ) 

#define ISDBUIEdit_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIEdit_get_MaxLength(This,Value)	\
    ( (This)->lpVtbl -> get_MaxLength(This,Value) ) 

#define ISDBUIEdit_put_MaxLength(This,Value)	\
    ( (This)->lpVtbl -> put_MaxLength(This,Value) ) 

#define ISDBUIEdit_get_PasswordChar(This,Value)	\
    ( (This)->lpVtbl -> get_PasswordChar(This,Value) ) 

#define ISDBUIEdit_put_PasswordChar(This,Value)	\
    ( (This)->lpVtbl -> put_PasswordChar(This,Value) ) 

#define ISDBUIEdit_get_SelStart(This,Value)	\
    ( (This)->lpVtbl -> get_SelStart(This,Value) ) 

#define ISDBUIEdit_put_SelStart(This,Value)	\
    ( (This)->lpVtbl -> put_SelStart(This,Value) ) 

#define ISDBUIEdit_get_SelLength(This,Value)	\
    ( (This)->lpVtbl -> get_SelLength(This,Value) ) 

#define ISDBUIEdit_put_SelLength(This,Value)	\
    ( (This)->lpVtbl -> put_SelLength(This,Value) ) 

#define ISDBUIEdit_get_SelText(This,Value)	\
    ( (This)->lpVtbl -> get_SelText(This,Value) ) 

#define ISDBUIEdit_put_SelText(This,Value)	\
    ( (This)->lpVtbl -> put_SelText(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIEdit_INTERFACE_DEFINED__ */


#ifndef __ISDBUIEditEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIEditEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIEditEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIEditEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2AD694A2-A098-4CF6-A42B-0BA22BDC1742")
    ISDBUIEditEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIEditEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIEditEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIEditEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIEditEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIEditEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIEditEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIEditEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIEditEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIEditEventsVtbl;

    interface ISDBUIEditEvents
    {
        CONST_VTBL struct ISDBUIEditEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIEditEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIEditEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIEditEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIEditEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIEditEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIEditEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIEditEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIEditEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUICommon_INTERFACE_DEFINED__
#define __ISDBUICommon_INTERFACE_DEFINED__

/* interface ISDBUICommon */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUICommon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93F8F352-964B-4B97-8A2B-50AD8FE1AB71")
    ISDBUICommon : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Left( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Left( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Top( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Top( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Width( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Width( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Height( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Height( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Hint( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Hint( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Anchors( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Anchors( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MinWidth( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MinWidth( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MaxWidth( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MaxWidth( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MinHeight( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MinHeight( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MaxHeight( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MaxHeight( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ClientWidth( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ClientWidth( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ClientHeight( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ClientHeight( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Visible( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Align( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Align( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ControlName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ControlName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SetRect( 
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Parent( 
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TopParent( 
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ChildControl( 
            /* [in] */ BSTR ControlName,
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CursorType( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CursorType( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall BringToFront( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SendToBack( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DestroyControl( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FontName( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FontName( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FontColor( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FontColor( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FontSize( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FontSize( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FontBold( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FontBold( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FontItalic( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FontItalic( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FontUnderline( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FontUnderline( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FontStrikeOut( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FontStrikeOut( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SetClientRect( 
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUICommonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUICommon * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUICommon * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUICommon * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUICommon * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUICommon * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUICommon * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUICommon * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Left )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Left )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Top )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Top )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Width )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Width )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Height )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Height )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Hint )( 
            ISDBUICommon * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Hint )( 
            ISDBUICommon * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Anchors )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Anchors )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MinWidth )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MinWidth )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MaxWidth )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MaxWidth )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MinHeight )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MinHeight )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MaxHeight )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MaxHeight )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ClientWidth )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ClientWidth )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ClientHeight )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ClientHeight )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Visible )( 
            ISDBUICommon * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Visible )( 
            ISDBUICommon * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Align )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Align )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Enabled )( 
            ISDBUICommon * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Enabled )( 
            ISDBUICommon * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ControlName )( 
            ISDBUICommon * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ControlName )( 
            ISDBUICommon * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *SetRect )( 
            ISDBUICommon * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Parent )( 
            ISDBUICommon * This,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TopParent )( 
            ISDBUICommon * This,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ChildControl )( 
            ISDBUICommon * This,
            /* [in] */ BSTR ControlName,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CursorType )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CursorType )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *BringToFront )( 
            ISDBUICommon * This);
        
        /* [id] */ HRESULT ( __stdcall *SendToBack )( 
            ISDBUICommon * This);
        
        /* [id] */ HRESULT ( __stdcall *DestroyControl )( 
            ISDBUICommon * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FontName )( 
            ISDBUICommon * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FontName )( 
            ISDBUICommon * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FontColor )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FontColor )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FontSize )( 
            ISDBUICommon * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FontSize )( 
            ISDBUICommon * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FontBold )( 
            ISDBUICommon * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FontBold )( 
            ISDBUICommon * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FontItalic )( 
            ISDBUICommon * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FontItalic )( 
            ISDBUICommon * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FontUnderline )( 
            ISDBUICommon * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FontUnderline )( 
            ISDBUICommon * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FontStrikeOut )( 
            ISDBUICommon * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FontStrikeOut )( 
            ISDBUICommon * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( __stdcall *SetClientRect )( 
            ISDBUICommon * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height);
        
        END_INTERFACE
    } ISDBUICommonVtbl;

    interface ISDBUICommon
    {
        CONST_VTBL struct ISDBUICommonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUICommon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUICommon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUICommon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUICommon_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUICommon_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUICommon_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUICommon_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUICommon_get_Left(This,Value)	\
    ( (This)->lpVtbl -> get_Left(This,Value) ) 

#define ISDBUICommon_put_Left(This,Value)	\
    ( (This)->lpVtbl -> put_Left(This,Value) ) 

#define ISDBUICommon_get_Top(This,Value)	\
    ( (This)->lpVtbl -> get_Top(This,Value) ) 

#define ISDBUICommon_put_Top(This,Value)	\
    ( (This)->lpVtbl -> put_Top(This,Value) ) 

#define ISDBUICommon_get_Width(This,Value)	\
    ( (This)->lpVtbl -> get_Width(This,Value) ) 

#define ISDBUICommon_put_Width(This,Value)	\
    ( (This)->lpVtbl -> put_Width(This,Value) ) 

#define ISDBUICommon_get_Height(This,Value)	\
    ( (This)->lpVtbl -> get_Height(This,Value) ) 

#define ISDBUICommon_put_Height(This,Value)	\
    ( (This)->lpVtbl -> put_Height(This,Value) ) 

#define ISDBUICommon_get_Hint(This,Value)	\
    ( (This)->lpVtbl -> get_Hint(This,Value) ) 

#define ISDBUICommon_put_Hint(This,Value)	\
    ( (This)->lpVtbl -> put_Hint(This,Value) ) 

#define ISDBUICommon_get_Anchors(This,Value)	\
    ( (This)->lpVtbl -> get_Anchors(This,Value) ) 

#define ISDBUICommon_put_Anchors(This,Value)	\
    ( (This)->lpVtbl -> put_Anchors(This,Value) ) 

#define ISDBUICommon_get_MinWidth(This,Value)	\
    ( (This)->lpVtbl -> get_MinWidth(This,Value) ) 

#define ISDBUICommon_put_MinWidth(This,Value)	\
    ( (This)->lpVtbl -> put_MinWidth(This,Value) ) 

#define ISDBUICommon_get_MaxWidth(This,Value)	\
    ( (This)->lpVtbl -> get_MaxWidth(This,Value) ) 

#define ISDBUICommon_put_MaxWidth(This,Value)	\
    ( (This)->lpVtbl -> put_MaxWidth(This,Value) ) 

#define ISDBUICommon_get_MinHeight(This,Value)	\
    ( (This)->lpVtbl -> get_MinHeight(This,Value) ) 

#define ISDBUICommon_put_MinHeight(This,Value)	\
    ( (This)->lpVtbl -> put_MinHeight(This,Value) ) 

#define ISDBUICommon_get_MaxHeight(This,Value)	\
    ( (This)->lpVtbl -> get_MaxHeight(This,Value) ) 

#define ISDBUICommon_put_MaxHeight(This,Value)	\
    ( (This)->lpVtbl -> put_MaxHeight(This,Value) ) 

#define ISDBUICommon_get_ClientWidth(This,Value)	\
    ( (This)->lpVtbl -> get_ClientWidth(This,Value) ) 

#define ISDBUICommon_put_ClientWidth(This,Value)	\
    ( (This)->lpVtbl -> put_ClientWidth(This,Value) ) 

#define ISDBUICommon_get_ClientHeight(This,Value)	\
    ( (This)->lpVtbl -> get_ClientHeight(This,Value) ) 

#define ISDBUICommon_put_ClientHeight(This,Value)	\
    ( (This)->lpVtbl -> put_ClientHeight(This,Value) ) 

#define ISDBUICommon_get_Visible(This,Value)	\
    ( (This)->lpVtbl -> get_Visible(This,Value) ) 

#define ISDBUICommon_put_Visible(This,Value)	\
    ( (This)->lpVtbl -> put_Visible(This,Value) ) 

#define ISDBUICommon_get_Align(This,Value)	\
    ( (This)->lpVtbl -> get_Align(This,Value) ) 

#define ISDBUICommon_put_Align(This,Value)	\
    ( (This)->lpVtbl -> put_Align(This,Value) ) 

#define ISDBUICommon_get_Enabled(This,Value)	\
    ( (This)->lpVtbl -> get_Enabled(This,Value) ) 

#define ISDBUICommon_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define ISDBUICommon_get_ControlName(This,Value)	\
    ( (This)->lpVtbl -> get_ControlName(This,Value) ) 

#define ISDBUICommon_put_ControlName(This,Value)	\
    ( (This)->lpVtbl -> put_ControlName(This,Value) ) 

#define ISDBUICommon_SetRect(This,Left,Top,Width,Height)	\
    ( (This)->lpVtbl -> SetRect(This,Left,Top,Width,Height) ) 

#define ISDBUICommon_get_Parent(This,Value)	\
    ( (This)->lpVtbl -> get_Parent(This,Value) ) 

#define ISDBUICommon_get_TopParent(This,Value)	\
    ( (This)->lpVtbl -> get_TopParent(This,Value) ) 

#define ISDBUICommon_get_ChildControl(This,ControlName,Value)	\
    ( (This)->lpVtbl -> get_ChildControl(This,ControlName,Value) ) 

#define ISDBUICommon_get_CursorType(This,Value)	\
    ( (This)->lpVtbl -> get_CursorType(This,Value) ) 

#define ISDBUICommon_put_CursorType(This,Value)	\
    ( (This)->lpVtbl -> put_CursorType(This,Value) ) 

#define ISDBUICommon_BringToFront(This)	\
    ( (This)->lpVtbl -> BringToFront(This) ) 

#define ISDBUICommon_SendToBack(This)	\
    ( (This)->lpVtbl -> SendToBack(This) ) 

#define ISDBUICommon_DestroyControl(This)	\
    ( (This)->lpVtbl -> DestroyControl(This) ) 

#define ISDBUICommon_get_FontName(This,Value)	\
    ( (This)->lpVtbl -> get_FontName(This,Value) ) 

#define ISDBUICommon_put_FontName(This,Value)	\
    ( (This)->lpVtbl -> put_FontName(This,Value) ) 

#define ISDBUICommon_get_FontColor(This,Value)	\
    ( (This)->lpVtbl -> get_FontColor(This,Value) ) 

#define ISDBUICommon_put_FontColor(This,Value)	\
    ( (This)->lpVtbl -> put_FontColor(This,Value) ) 

#define ISDBUICommon_get_FontSize(This,Value)	\
    ( (This)->lpVtbl -> get_FontSize(This,Value) ) 

#define ISDBUICommon_put_FontSize(This,Value)	\
    ( (This)->lpVtbl -> put_FontSize(This,Value) ) 

#define ISDBUICommon_get_FontBold(This,Value)	\
    ( (This)->lpVtbl -> get_FontBold(This,Value) ) 

#define ISDBUICommon_put_FontBold(This,Value)	\
    ( (This)->lpVtbl -> put_FontBold(This,Value) ) 

#define ISDBUICommon_get_FontItalic(This,Value)	\
    ( (This)->lpVtbl -> get_FontItalic(This,Value) ) 

#define ISDBUICommon_put_FontItalic(This,Value)	\
    ( (This)->lpVtbl -> put_FontItalic(This,Value) ) 

#define ISDBUICommon_get_FontUnderline(This,Value)	\
    ( (This)->lpVtbl -> get_FontUnderline(This,Value) ) 

#define ISDBUICommon_put_FontUnderline(This,Value)	\
    ( (This)->lpVtbl -> put_FontUnderline(This,Value) ) 

#define ISDBUICommon_get_FontStrikeOut(This,Value)	\
    ( (This)->lpVtbl -> get_FontStrikeOut(This,Value) ) 

#define ISDBUICommon_put_FontStrikeOut(This,Value)	\
    ( (This)->lpVtbl -> put_FontStrikeOut(This,Value) ) 

#define ISDBUICommon_SetClientRect(This,Left,Top,Width,Height)	\
    ( (This)->lpVtbl -> SetClientRect(This,Left,Top,Width,Height) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUICommon_INTERFACE_DEFINED__ */


#ifndef __ISDBUICommonEvents_DISPINTERFACE_DEFINED__
#define __ISDBUICommonEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUICommonEvents */
/* [version][uuid] */ 


EXTERN_C const IID DIID_ISDBUICommonEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7AD7058D-2641-4DDC-8436-BEAA81A293FE")
    ISDBUICommonEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUICommonEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUICommonEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUICommonEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUICommonEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUICommonEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUICommonEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUICommonEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUICommonEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUICommonEventsVtbl;

    interface ISDBUICommonEvents
    {
        CONST_VTBL struct ISDBUICommonEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUICommonEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUICommonEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUICommonEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUICommonEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUICommonEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUICommonEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUICommonEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUICommonEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUIPanel_INTERFACE_DEFINED__
#define __ISDBUIPanel_INTERFACE_DEFINED__

/* interface ISDBUIPanel */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIPanel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF282E9B-2FF7-4931-9B6E-DB6C79170298")
    ISDBUIPanel : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIPanelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIPanel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIPanel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIPanel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIPanel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIPanel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIPanel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIPanel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIPanel * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBUIPanel * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } ISDBUIPanelVtbl;

    interface ISDBUIPanel
    {
        CONST_VTBL struct ISDBUIPanelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIPanel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIPanel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIPanel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIPanel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIPanel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIPanel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIPanel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIPanel_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIPanel_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIPanel_INTERFACE_DEFINED__ */


#ifndef __ISDBUIPanelEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIPanelEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIPanelEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIPanelEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7B77283E-8D67-4345-8DD4-52A85FBCA77D")
    ISDBUIPanelEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIPanelEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIPanelEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIPanelEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIPanelEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIPanelEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIPanelEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIPanelEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIPanelEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIPanelEventsVtbl;

    interface ISDBUIPanelEvents
    {
        CONST_VTBL struct ISDBUIPanelEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIPanelEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIPanelEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIPanelEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIPanelEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIPanelEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIPanelEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIPanelEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIPanelEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUICheckBox_INTERFACE_DEFINED__
#define __ISDBUICheckBox_INTERFACE_DEFINED__

/* interface ISDBUICheckBox */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUICheckBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F3E510B-8863-4B35-B0B2-73BBE0F8A6BB")
    ISDBUICheckBox : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Checked( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUICheckBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUICheckBox * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUICheckBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUICheckBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUICheckBox * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUICheckBox * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUICheckBox * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUICheckBox * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUICheckBox * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Checked )( 
            ISDBUICheckBox * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Checked )( 
            ISDBUICheckBox * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBUICheckBox * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBUICheckBox * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBUICheckBoxVtbl;

    interface ISDBUICheckBox
    {
        CONST_VTBL struct ISDBUICheckBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUICheckBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUICheckBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUICheckBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUICheckBox_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUICheckBox_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUICheckBox_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUICheckBox_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUICheckBox_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUICheckBox_get_Checked(This,Value)	\
    ( (This)->lpVtbl -> get_Checked(This,Value) ) 

#define ISDBUICheckBox_put_Checked(This,Value)	\
    ( (This)->lpVtbl -> put_Checked(This,Value) ) 

#define ISDBUICheckBox_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBUICheckBox_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUICheckBox_INTERFACE_DEFINED__ */


#ifndef __ISDBUICheckBoxEvents_DISPINTERFACE_DEFINED__
#define __ISDBUICheckBoxEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUICheckBoxEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUICheckBoxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("77542E92-A4C7-4E9D-BAC6-27BFEDFF5066")
    ISDBUICheckBoxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUICheckBoxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUICheckBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUICheckBoxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUICheckBoxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUICheckBoxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUICheckBoxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUICheckBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUICheckBoxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUICheckBoxEventsVtbl;

    interface ISDBUICheckBoxEvents
    {
        CONST_VTBL struct ISDBUICheckBoxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUICheckBoxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUICheckBoxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUICheckBoxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUICheckBoxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUICheckBoxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUICheckBoxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUICheckBoxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUICheckBoxEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUITranspPanel_INTERFACE_DEFINED__
#define __ISDBUITranspPanel_INTERFACE_DEFINED__

/* interface ISDBUITranspPanel */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUITranspPanel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3285614-4F7C-45AF-B32E-72403FBFF09A")
    ISDBUITranspPanel : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITranspPanelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITranspPanel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITranspPanel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITranspPanel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITranspPanel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITranspPanel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITranspPanel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITranspPanel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUITranspPanel * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBUITranspPanel * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } ISDBUITranspPanelVtbl;

    interface ISDBUITranspPanel
    {
        CONST_VTBL struct ISDBUITranspPanelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITranspPanel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITranspPanel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITranspPanel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITranspPanel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITranspPanel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITranspPanel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITranspPanel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUITranspPanel_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUITranspPanel_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUITranspPanel_INTERFACE_DEFINED__ */


#ifndef __ISDBUITranspPanelEvents_DISPINTERFACE_DEFINED__
#define __ISDBUITranspPanelEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUITranspPanelEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUITranspPanelEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1B9F539-6A04-418F-97F2-BECEBAAC9B82")
    ISDBUITranspPanelEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITranspPanelEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITranspPanelEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITranspPanelEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITranspPanelEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITranspPanelEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITranspPanelEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITranspPanelEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITranspPanelEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUITranspPanelEventsVtbl;

    interface ISDBUITranspPanelEvents
    {
        CONST_VTBL struct ISDBUITranspPanelEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITranspPanelEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITranspPanelEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITranspPanelEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITranspPanelEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITranspPanelEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITranspPanelEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITranspPanelEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUITranspPanelEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUILabel_INTERFACE_DEFINED__
#define __ISDBUILabel_INTERFACE_DEFINED__

/* interface ISDBUILabel */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUILabel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0951DCAB-4D42-4BBF-96E7-10B115CDE5F5")
    ISDBUILabel : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Alignment( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Alignment( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Autosize( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Autosize( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Multiline( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Multiline( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUILabelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUILabel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUILabel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUILabel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUILabel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUILabel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUILabel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUILabel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBUILabel * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBUILabel * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUILabel * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Alignment )( 
            ISDBUILabel * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Alignment )( 
            ISDBUILabel * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Autosize )( 
            ISDBUILabel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Autosize )( 
            ISDBUILabel * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Multiline )( 
            ISDBUILabel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Multiline )( 
            ISDBUILabel * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } ISDBUILabelVtbl;

    interface ISDBUILabel
    {
        CONST_VTBL struct ISDBUILabelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUILabel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUILabel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUILabel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUILabel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUILabel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUILabel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUILabel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUILabel_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBUILabel_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#define ISDBUILabel_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUILabel_get_Alignment(This,Value)	\
    ( (This)->lpVtbl -> get_Alignment(This,Value) ) 

#define ISDBUILabel_put_Alignment(This,Value)	\
    ( (This)->lpVtbl -> put_Alignment(This,Value) ) 

#define ISDBUILabel_get_Autosize(This,Value)	\
    ( (This)->lpVtbl -> get_Autosize(This,Value) ) 

#define ISDBUILabel_put_Autosize(This,Value)	\
    ( (This)->lpVtbl -> put_Autosize(This,Value) ) 

#define ISDBUILabel_get_Multiline(This,Value)	\
    ( (This)->lpVtbl -> get_Multiline(This,Value) ) 

#define ISDBUILabel_put_Multiline(This,Value)	\
    ( (This)->lpVtbl -> put_Multiline(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUILabel_INTERFACE_DEFINED__ */


#ifndef __ISDBUILabelEvents_DISPINTERFACE_DEFINED__
#define __ISDBUILabelEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUILabelEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUILabelEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2021D0EE-743F-48C2-9A71-2274D919A4B0")
    ISDBUILabelEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUILabelEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUILabelEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUILabelEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUILabelEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUILabelEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUILabelEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUILabelEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUILabelEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUILabelEventsVtbl;

    interface ISDBUILabelEvents
    {
        CONST_VTBL struct ISDBUILabelEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUILabelEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUILabelEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUILabelEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUILabelEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUILabelEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUILabelEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUILabelEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUILabelEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUIActiveX_INTERFACE_DEFINED__
#define __ISDBUIActiveX_INTERFACE_DEFINED__

/* interface ISDBUIActiveX */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIActiveX;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F91491DF-BEDD-45F7-B7A0-FD8EC422FC3B")
    ISDBUIActiveX : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Interf( 
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SetHTMLDocument( 
            /* [in] */ BSTR HTML) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIActiveXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIActiveX * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIActiveX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIActiveX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIActiveX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIActiveX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIActiveX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIActiveX * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIActiveX * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Interf )( 
            ISDBUIActiveX * This,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id] */ HRESULT ( __stdcall *SetHTMLDocument )( 
            ISDBUIActiveX * This,
            /* [in] */ BSTR HTML);
        
        END_INTERFACE
    } ISDBUIActiveXVtbl;

    interface ISDBUIActiveX
    {
        CONST_VTBL struct ISDBUIActiveXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIActiveX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIActiveX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIActiveX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIActiveX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIActiveX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIActiveX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIActiveX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIActiveX_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIActiveX_get_Interf(This,Value)	\
    ( (This)->lpVtbl -> get_Interf(This,Value) ) 

#define ISDBUIActiveX_SetHTMLDocument(This,HTML)	\
    ( (This)->lpVtbl -> SetHTMLDocument(This,HTML) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIActiveX_INTERFACE_DEFINED__ */


#ifndef __ISDBUIActiveXEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIActiveXEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIActiveXEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIActiveXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F0FAD6A4-58E1-4A77-B9D7-38BEBB7E94DB")
    ISDBUIActiveXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIActiveXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIActiveXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIActiveXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIActiveXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIActiveXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIActiveXEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIActiveXEventsVtbl;

    interface ISDBUIActiveXEvents
    {
        CONST_VTBL struct ISDBUIActiveXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIActiveXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIActiveXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIActiveXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIActiveXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIActiveXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIActiveXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIActiveXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIActiveXEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBRegistry_INTERFACE_DEFINED__
#define __ISDBRegistry_INTERFACE_DEFINED__

/* interface ISDBRegistry */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBRegistry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28EBD078-0B56-4365-B472-965FC7A5F743")
    ISDBRegistry : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall OpenKey( 
            /* [in] */ BSTR Key,
            /* [in] */ VARIANT_BOOL CanCreate,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CloseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_StringValue( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_StringValue( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_KeyExists( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ValueExists( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IntValue( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_IntValue( 
            /* [in] */ BSTR Name,
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_BoolValue( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_BoolValue( 
            /* [in] */ BSTR Name,
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteValue( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteKey( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBRegistryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBRegistry * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBRegistry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBRegistry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBRegistry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBRegistry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBRegistry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBRegistry * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *OpenKey )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Key,
            /* [in] */ VARIANT_BOOL CanCreate,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id] */ HRESULT ( __stdcall *CloseKey )( 
            ISDBRegistry * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_StringValue )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_StringValue )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_KeyExists )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ValueExists )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IntValue )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_IntValue )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_BoolValue )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_BoolValue )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( __stdcall *DeleteValue )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id] */ HRESULT ( __stdcall *DeleteKey )( 
            ISDBRegistry * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        END_INTERFACE
    } ISDBRegistryVtbl;

    interface ISDBRegistry
    {
        CONST_VTBL struct ISDBRegistryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBRegistry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBRegistry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBRegistry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBRegistry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBRegistry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBRegistry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBRegistry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBRegistry_OpenKey(This,Key,CanCreate,Value)	\
    ( (This)->lpVtbl -> OpenKey(This,Key,CanCreate,Value) ) 

#define ISDBRegistry_CloseKey(This)	\
    ( (This)->lpVtbl -> CloseKey(This) ) 

#define ISDBRegistry_get_StringValue(This,Name,Value)	\
    ( (This)->lpVtbl -> get_StringValue(This,Name,Value) ) 

#define ISDBRegistry_put_StringValue(This,Name,Value)	\
    ( (This)->lpVtbl -> put_StringValue(This,Name,Value) ) 

#define ISDBRegistry_get_KeyExists(This,Name,Value)	\
    ( (This)->lpVtbl -> get_KeyExists(This,Name,Value) ) 

#define ISDBRegistry_get_ValueExists(This,Name,Value)	\
    ( (This)->lpVtbl -> get_ValueExists(This,Name,Value) ) 

#define ISDBRegistry_get_IntValue(This,Name,Value)	\
    ( (This)->lpVtbl -> get_IntValue(This,Name,Value) ) 

#define ISDBRegistry_put_IntValue(This,Name,Value)	\
    ( (This)->lpVtbl -> put_IntValue(This,Name,Value) ) 

#define ISDBRegistry_get_BoolValue(This,Name,Value)	\
    ( (This)->lpVtbl -> get_BoolValue(This,Name,Value) ) 

#define ISDBRegistry_put_BoolValue(This,Name,Value)	\
    ( (This)->lpVtbl -> put_BoolValue(This,Name,Value) ) 

#define ISDBRegistry_DeleteValue(This,Name,Value)	\
    ( (This)->lpVtbl -> DeleteValue(This,Name,Value) ) 

#define ISDBRegistry_DeleteKey(This,Name,Value)	\
    ( (This)->lpVtbl -> DeleteKey(This,Name,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBRegistry_INTERFACE_DEFINED__ */


#ifndef __ISDBUIDropDown_INTERFACE_DEFINED__
#define __ISDBUIDropDown_INTERFACE_DEFINED__

/* interface ISDBUIDropDown */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIDropDown;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B29C73BF-24A3-4861-852B-7DE9CAC3FB66")
    ISDBUIDropDown : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Style( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Style( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddItem( 
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ItemIndex( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemText( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ItemText( 
            /* [in] */ long Index,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteItem( 
            /* [in] */ long Index) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Text( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Text( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UseScript( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_UseScript( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OnSelectFunc( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OnSelectFunc( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelStart( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelStart( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelLength( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelLength( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelText( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelText( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIDropDownVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIDropDown * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIDropDown * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIDropDown * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIDropDown * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIDropDown * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIDropDown * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIDropDown * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Style )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Style )( 
            ISDBUIDropDown * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *AddItem )( 
            ISDBUIDropDown * This,
            /* [in] */ BSTR Text);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemIndex )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ItemIndex )( 
            ISDBUIDropDown * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemCount )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemText )( 
            ISDBUIDropDown * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ItemText )( 
            ISDBUIDropDown * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *DeleteItem )( 
            ISDBUIDropDown * This,
            /* [in] */ long Index);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Text )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Text )( 
            ISDBUIDropDown * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UseScript )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_UseScript )( 
            ISDBUIDropDown * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OnSelectFunc )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OnSelectFunc )( 
            ISDBUIDropDown * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelStart )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelStart )( 
            ISDBUIDropDown * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelLength )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelLength )( 
            ISDBUIDropDown * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelText )( 
            ISDBUIDropDown * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelText )( 
            ISDBUIDropDown * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBUIDropDownVtbl;

    interface ISDBUIDropDown
    {
        CONST_VTBL struct ISDBUIDropDownVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIDropDown_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIDropDown_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIDropDown_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIDropDown_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIDropDown_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIDropDown_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIDropDown_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIDropDown_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIDropDown_get_Style(This,Value)	\
    ( (This)->lpVtbl -> get_Style(This,Value) ) 

#define ISDBUIDropDown_put_Style(This,Value)	\
    ( (This)->lpVtbl -> put_Style(This,Value) ) 

#define ISDBUIDropDown_AddItem(This,Text)	\
    ( (This)->lpVtbl -> AddItem(This,Text) ) 

#define ISDBUIDropDown_get_ItemIndex(This,Value)	\
    ( (This)->lpVtbl -> get_ItemIndex(This,Value) ) 

#define ISDBUIDropDown_put_ItemIndex(This,Value)	\
    ( (This)->lpVtbl -> put_ItemIndex(This,Value) ) 

#define ISDBUIDropDown_get_ItemCount(This,Value)	\
    ( (This)->lpVtbl -> get_ItemCount(This,Value) ) 

#define ISDBUIDropDown_get_ItemText(This,Index,Value)	\
    ( (This)->lpVtbl -> get_ItemText(This,Index,Value) ) 

#define ISDBUIDropDown_put_ItemText(This,Index,Value)	\
    ( (This)->lpVtbl -> put_ItemText(This,Index,Value) ) 

#define ISDBUIDropDown_DeleteItem(This,Index)	\
    ( (This)->lpVtbl -> DeleteItem(This,Index) ) 

#define ISDBUIDropDown_get_Text(This,Value)	\
    ( (This)->lpVtbl -> get_Text(This,Value) ) 

#define ISDBUIDropDown_put_Text(This,Value)	\
    ( (This)->lpVtbl -> put_Text(This,Value) ) 

#define ISDBUIDropDown_get_UseScript(This,Value)	\
    ( (This)->lpVtbl -> get_UseScript(This,Value) ) 

#define ISDBUIDropDown_put_UseScript(This,Value)	\
    ( (This)->lpVtbl -> put_UseScript(This,Value) ) 

#define ISDBUIDropDown_get_OnSelectFunc(This,Value)	\
    ( (This)->lpVtbl -> get_OnSelectFunc(This,Value) ) 

#define ISDBUIDropDown_put_OnSelectFunc(This,Value)	\
    ( (This)->lpVtbl -> put_OnSelectFunc(This,Value) ) 

#define ISDBUIDropDown_get_SelStart(This,Value)	\
    ( (This)->lpVtbl -> get_SelStart(This,Value) ) 

#define ISDBUIDropDown_put_SelStart(This,Value)	\
    ( (This)->lpVtbl -> put_SelStart(This,Value) ) 

#define ISDBUIDropDown_get_SelLength(This,Value)	\
    ( (This)->lpVtbl -> get_SelLength(This,Value) ) 

#define ISDBUIDropDown_put_SelLength(This,Value)	\
    ( (This)->lpVtbl -> put_SelLength(This,Value) ) 

#define ISDBUIDropDown_get_SelText(This,Value)	\
    ( (This)->lpVtbl -> get_SelText(This,Value) ) 

#define ISDBUIDropDown_put_SelText(This,Value)	\
    ( (This)->lpVtbl -> put_SelText(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIDropDown_INTERFACE_DEFINED__ */


#ifndef __ISDBUIDropDownEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIDropDownEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIDropDownEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIDropDownEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5D05EB93-3C97-4D3E-9567-449F08603E9F")
    ISDBUIDropDownEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIDropDownEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIDropDownEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIDropDownEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIDropDownEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIDropDownEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIDropDownEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIDropDownEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIDropDownEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIDropDownEventsVtbl;

    interface ISDBUIDropDownEvents
    {
        CONST_VTBL struct ISDBUIDropDownEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIDropDownEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIDropDownEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIDropDownEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIDropDownEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIDropDownEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIDropDownEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIDropDownEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIDropDownEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBMenuItem_INTERFACE_DEFINED__
#define __ISDBMenuItem_INTERFACE_DEFINED__

/* interface ISDBMenuItem */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBMenuItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A398C8D2-EE57-4BAF-917B-429E031AC64D")
    ISDBMenuItem : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UseScript( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_UseScript( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_OnClickFunc( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_OnClickFunc( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ShortCut( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ShortCut( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IconIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_IconIndex( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Hint( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Hint( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Visible( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Checked( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBMenuItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBMenuItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBMenuItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBMenuItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBMenuItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBMenuItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBMenuItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBMenuItem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBMenuItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBMenuItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBMenuItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UseScript )( 
            ISDBMenuItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_UseScript )( 
            ISDBMenuItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_OnClickFunc )( 
            ISDBMenuItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_OnClickFunc )( 
            ISDBMenuItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ShortCut )( 
            ISDBMenuItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ShortCut )( 
            ISDBMenuItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IconIndex )( 
            ISDBMenuItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_IconIndex )( 
            ISDBMenuItem * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Hint )( 
            ISDBMenuItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Hint )( 
            ISDBMenuItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Visible )( 
            ISDBMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Visible )( 
            ISDBMenuItem * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Enabled )( 
            ISDBMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Enabled )( 
            ISDBMenuItem * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Checked )( 
            ISDBMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Checked )( 
            ISDBMenuItem * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } ISDBMenuItemVtbl;

    interface ISDBMenuItem
    {
        CONST_VTBL struct ISDBMenuItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBMenuItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBMenuItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBMenuItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBMenuItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBMenuItem_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#define ISDBMenuItem_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBMenuItem_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#define ISDBMenuItem_get_UseScript(This,Value)	\
    ( (This)->lpVtbl -> get_UseScript(This,Value) ) 

#define ISDBMenuItem_put_UseScript(This,Value)	\
    ( (This)->lpVtbl -> put_UseScript(This,Value) ) 

#define ISDBMenuItem_get_OnClickFunc(This,Value)	\
    ( (This)->lpVtbl -> get_OnClickFunc(This,Value) ) 

#define ISDBMenuItem_put_OnClickFunc(This,Value)	\
    ( (This)->lpVtbl -> put_OnClickFunc(This,Value) ) 

#define ISDBMenuItem_get_ShortCut(This,Value)	\
    ( (This)->lpVtbl -> get_ShortCut(This,Value) ) 

#define ISDBMenuItem_put_ShortCut(This,Value)	\
    ( (This)->lpVtbl -> put_ShortCut(This,Value) ) 

#define ISDBMenuItem_get_IconIndex(This,Value)	\
    ( (This)->lpVtbl -> get_IconIndex(This,Value) ) 

#define ISDBMenuItem_put_IconIndex(This,Value)	\
    ( (This)->lpVtbl -> put_IconIndex(This,Value) ) 

#define ISDBMenuItem_get_Hint(This,Value)	\
    ( (This)->lpVtbl -> get_Hint(This,Value) ) 

#define ISDBMenuItem_put_Hint(This,Value)	\
    ( (This)->lpVtbl -> put_Hint(This,Value) ) 

#define ISDBMenuItem_get_Visible(This,Value)	\
    ( (This)->lpVtbl -> get_Visible(This,Value) ) 

#define ISDBMenuItem_put_Visible(This,Value)	\
    ( (This)->lpVtbl -> put_Visible(This,Value) ) 

#define ISDBMenuItem_get_Enabled(This,Value)	\
    ( (This)->lpVtbl -> get_Enabled(This,Value) ) 

#define ISDBMenuItem_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define ISDBMenuItem_get_Checked(This,Value)	\
    ( (This)->lpVtbl -> get_Checked(This,Value) ) 

#define ISDBMenuItem_put_Checked(This,Value)	\
    ( (This)->lpVtbl -> put_Checked(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBMenuItem_INTERFACE_DEFINED__ */


#ifndef __ISDBMenuItemEvents_DISPINTERFACE_DEFINED__
#define __ISDBMenuItemEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBMenuItemEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBMenuItemEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DDFEBCDA-7991-47F0-B3FF-6EAADACD05E2")
    ISDBMenuItemEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBMenuItemEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBMenuItemEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBMenuItemEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBMenuItemEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBMenuItemEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBMenuItemEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBMenuItemEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBMenuItemEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBMenuItemEventsVtbl;

    interface ISDBMenuItemEvents
    {
        CONST_VTBL struct ISDBMenuItemEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBMenuItemEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBMenuItemEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBMenuItemEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBMenuItemEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBMenuItemEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBMenuItemEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBMenuItemEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBMenuItemEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBDevice_INTERFACE_DEFINED__
#define __ISDBDevice_INTERFACE_DEFINED__

/* interface ISDBDevice */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28BD64DA-3A23-440F-8265-D5D2808A867F")
    ISDBDevice : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall DeviceStart( 
            /* [in] */ long LibraryHandle,
            /* [in] */ BSTR DeviceCaption,
            /* [in] */ long DeviceDriveLetter,
            /* [retval][out] */ long *DeviceHandle) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeviceStop( 
            /* [in] */ long DeviceHandle) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeviceStartEx( 
            /* [in] */ long LibraryHandle,
            /* [in] */ BSTR DeviceID,
            /* [in] */ BSTR DeviceCaption,
            /* [in] */ long DeviceDriveLetter,
            /* [retval][out] */ long *DeviceHandle) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeviceEject( 
            /* [in] */ long DevInstHandle,
            /* [in] */ BSTR DeviceName,
            /* [retval][out] */ VARIANT_BOOL *Success) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_canEjectDevice( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ActiveDeviceList( 
            /* [in] */ BSTR containID,
            /* [retval][out] */ ISDBDeviceList **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isPlaylistForSynch( 
            /* [in] */ long DeviceHandle,
            /* [in] */ long IdPlaylist,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_isPlaylistForSynch( 
            /* [in] */ long DeviceHandle,
            /* [in] */ long IdPlaylist,
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CreateDeviceNode( 
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ ISDBTreeNode **DeviceNode) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ShowDeviceConfig( 
            /* [in] */ long DeviceHandle) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeviceThreadedEject( 
            /* [in] */ long DeviceHandle) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DeviceIcon( 
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DeviceIcon( 
            /* [in] */ long DeviceHandle,
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DeviceMenuIcon( 
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DeviceMenuIcon( 
            /* [in] */ long DeviceHandle,
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall LockPlugin( 
            /* [in] */ long HLibrary) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UnlockPlugin( 
            /* [in] */ long HLibrary) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TotalSpace( 
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ CURRENCY *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FreeSpace( 
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ CURRENCY *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall GetTrackSynchStatus( 
            /* [in] */ long DeviceHandle,
            /* [in] */ BSTR TrackPath,
            /* [retval][out] */ ISDBTrackSynchStatus **SynchStatus) = 0;
        
        virtual /* [id] */ HRESULT __stdcall GetTrackIDSynchStatus( 
            /* [in] */ long DeviceHandle,
            /* [in] */ long TrackID,
            /* [retval][out] */ ISDBTrackSynchStatus **SynchStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DriveLetterFree( 
            /* [in] */ long LetterIndex,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IsVisible( 
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ChangeDeviceID( 
            /* [in] */ BSTR PluginName,
            /* [in] */ BSTR OldID,
            /* [in] */ BSTR NewID,
            /* [retval][out] */ VARIANT_BOOL *Success) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RegisterTreeNode( 
            /* [in] */ long DeviceHandle,
            /* [in] */ ISDBTreeNode *TreeNode) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ChangeDeviceCaption( 
            /* [in] */ long DeviceHandle,
            /* [in] */ BSTR NewCaption) = 0;
        
        virtual /* [id] */ HRESULT __stdcall StartSynch( 
            /* [in] */ long DeviceHandle,
            /* [in] */ SDBSongList	*TrackList) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddDeviceNode( 
            /* [in] */ ISDBTreeNode *DeviceNode) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SynchTerminating( 
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_isDeviceConnected( 
            /* [in] */ BSTR USBID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall isSynchTracksFolder( 
            /* [in] */ long DeviceHandle,
            /* [in] */ BSTR Folder,
            /* [retval][out] */ VARIANT_BOOL *Success) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ActiveDeviceListEx( 
            /* [in] */ BSTR containID,
            /* [in] */ long subdriveindex,
            /* [retval][out] */ ISDBDeviceList **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall TerminateThreads( 
            /* [in] */ long DeviceHandle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBDevice * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBDevice * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBDevice * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBDevice * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *DeviceStart )( 
            ISDBDevice * This,
            /* [in] */ long LibraryHandle,
            /* [in] */ BSTR DeviceCaption,
            /* [in] */ long DeviceDriveLetter,
            /* [retval][out] */ long *DeviceHandle);
        
        /* [id] */ HRESULT ( __stdcall *DeviceStop )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle);
        
        /* [id] */ HRESULT ( __stdcall *DeviceStartEx )( 
            ISDBDevice * This,
            /* [in] */ long LibraryHandle,
            /* [in] */ BSTR DeviceID,
            /* [in] */ BSTR DeviceCaption,
            /* [in] */ long DeviceDriveLetter,
            /* [retval][out] */ long *DeviceHandle);
        
        /* [id] */ HRESULT ( __stdcall *DeviceEject )( 
            ISDBDevice * This,
            /* [in] */ long DevInstHandle,
            /* [in] */ BSTR DeviceName,
            /* [retval][out] */ VARIANT_BOOL *Success);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_canEjectDevice )( 
            ISDBDevice * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ActiveDeviceList )( 
            ISDBDevice * This,
            /* [in] */ BSTR containID,
            /* [retval][out] */ ISDBDeviceList **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isPlaylistForSynch )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ long IdPlaylist,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_isPlaylistForSynch )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ long IdPlaylist,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( __stdcall *CreateDeviceNode )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ ISDBTreeNode **DeviceNode);
        
        /* [id] */ HRESULT ( __stdcall *ShowDeviceConfig )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle);
        
        /* [id] */ HRESULT ( __stdcall *DeviceThreadedEject )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DeviceIcon )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DeviceIcon )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DeviceMenuIcon )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DeviceMenuIcon )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *LockPlugin )( 
            ISDBDevice * This,
            /* [in] */ long HLibrary);
        
        /* [id] */ HRESULT ( __stdcall *UnlockPlugin )( 
            ISDBDevice * This,
            /* [in] */ long HLibrary);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TotalSpace )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ CURRENCY *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FreeSpace )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ CURRENCY *Value);
        
        /* [id] */ HRESULT ( __stdcall *GetTrackSynchStatus )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ BSTR TrackPath,
            /* [retval][out] */ ISDBTrackSynchStatus **SynchStatus);
        
        /* [id] */ HRESULT ( __stdcall *GetTrackIDSynchStatus )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ long TrackID,
            /* [retval][out] */ ISDBTrackSynchStatus **SynchStatus);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DriveLetterFree )( 
            ISDBDevice * This,
            /* [in] */ long LetterIndex,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IsVisible )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id] */ HRESULT ( __stdcall *ChangeDeviceID )( 
            ISDBDevice * This,
            /* [in] */ BSTR PluginName,
            /* [in] */ BSTR OldID,
            /* [in] */ BSTR NewID,
            /* [retval][out] */ VARIANT_BOOL *Success);
        
        /* [id] */ HRESULT ( __stdcall *RegisterTreeNode )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ ISDBTreeNode *TreeNode);
        
        /* [id] */ HRESULT ( __stdcall *ChangeDeviceCaption )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ BSTR NewCaption);
        
        /* [id] */ HRESULT ( __stdcall *StartSynch )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ SDBSongList	*TrackList);
        
        /* [id] */ HRESULT ( __stdcall *AddDeviceNode )( 
            ISDBDevice * This,
            /* [in] */ ISDBTreeNode *DeviceNode);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SynchTerminating )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_isDeviceConnected )( 
            ISDBDevice * This,
            /* [in] */ BSTR USBID,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *isSynchTracksFolder )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle,
            /* [in] */ BSTR Folder,
            /* [retval][out] */ VARIANT_BOOL *Success);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ActiveDeviceListEx )( 
            ISDBDevice * This,
            /* [in] */ BSTR containID,
            /* [in] */ long subdriveindex,
            /* [retval][out] */ ISDBDeviceList **Value);
        
        /* [id] */ HRESULT ( __stdcall *TerminateThreads )( 
            ISDBDevice * This,
            /* [in] */ long DeviceHandle);
        
        END_INTERFACE
    } ISDBDeviceVtbl;

    interface ISDBDevice
    {
        CONST_VTBL struct ISDBDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBDevice_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBDevice_DeviceStart(This,LibraryHandle,DeviceCaption,DeviceDriveLetter,DeviceHandle)	\
    ( (This)->lpVtbl -> DeviceStart(This,LibraryHandle,DeviceCaption,DeviceDriveLetter,DeviceHandle) ) 

#define ISDBDevice_DeviceStop(This,DeviceHandle)	\
    ( (This)->lpVtbl -> DeviceStop(This,DeviceHandle) ) 

#define ISDBDevice_DeviceStartEx(This,LibraryHandle,DeviceID,DeviceCaption,DeviceDriveLetter,DeviceHandle)	\
    ( (This)->lpVtbl -> DeviceStartEx(This,LibraryHandle,DeviceID,DeviceCaption,DeviceDriveLetter,DeviceHandle) ) 

#define ISDBDevice_DeviceEject(This,DevInstHandle,DeviceName,Success)	\
    ( (This)->lpVtbl -> DeviceEject(This,DevInstHandle,DeviceName,Success) ) 

#define ISDBDevice_get_canEjectDevice(This,Value)	\
    ( (This)->lpVtbl -> get_canEjectDevice(This,Value) ) 

#define ISDBDevice_get_ActiveDeviceList(This,containID,Value)	\
    ( (This)->lpVtbl -> get_ActiveDeviceList(This,containID,Value) ) 

#define ISDBDevice_get_isPlaylistForSynch(This,DeviceHandle,IdPlaylist,Value)	\
    ( (This)->lpVtbl -> get_isPlaylistForSynch(This,DeviceHandle,IdPlaylist,Value) ) 

#define ISDBDevice_put_isPlaylistForSynch(This,DeviceHandle,IdPlaylist,Value)	\
    ( (This)->lpVtbl -> put_isPlaylistForSynch(This,DeviceHandle,IdPlaylist,Value) ) 

#define ISDBDevice_CreateDeviceNode(This,DeviceHandle,DeviceNode)	\
    ( (This)->lpVtbl -> CreateDeviceNode(This,DeviceHandle,DeviceNode) ) 

#define ISDBDevice_ShowDeviceConfig(This,DeviceHandle)	\
    ( (This)->lpVtbl -> ShowDeviceConfig(This,DeviceHandle) ) 

#define ISDBDevice_DeviceThreadedEject(This,DeviceHandle)	\
    ( (This)->lpVtbl -> DeviceThreadedEject(This,DeviceHandle) ) 

#define ISDBDevice_get_DeviceIcon(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> get_DeviceIcon(This,DeviceHandle,Value) ) 

#define ISDBDevice_put_DeviceIcon(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> put_DeviceIcon(This,DeviceHandle,Value) ) 

#define ISDBDevice_get_DeviceMenuIcon(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> get_DeviceMenuIcon(This,DeviceHandle,Value) ) 

#define ISDBDevice_put_DeviceMenuIcon(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> put_DeviceMenuIcon(This,DeviceHandle,Value) ) 

#define ISDBDevice_LockPlugin(This,HLibrary)	\
    ( (This)->lpVtbl -> LockPlugin(This,HLibrary) ) 

#define ISDBDevice_UnlockPlugin(This,HLibrary)	\
    ( (This)->lpVtbl -> UnlockPlugin(This,HLibrary) ) 

#define ISDBDevice_get_TotalSpace(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> get_TotalSpace(This,DeviceHandle,Value) ) 

#define ISDBDevice_get_FreeSpace(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> get_FreeSpace(This,DeviceHandle,Value) ) 

#define ISDBDevice_GetTrackSynchStatus(This,DeviceHandle,TrackPath,SynchStatus)	\
    ( (This)->lpVtbl -> GetTrackSynchStatus(This,DeviceHandle,TrackPath,SynchStatus) ) 

#define ISDBDevice_GetTrackIDSynchStatus(This,DeviceHandle,TrackID,SynchStatus)	\
    ( (This)->lpVtbl -> GetTrackIDSynchStatus(This,DeviceHandle,TrackID,SynchStatus) ) 

#define ISDBDevice_get_DriveLetterFree(This,LetterIndex,Value)	\
    ( (This)->lpVtbl -> get_DriveLetterFree(This,LetterIndex,Value) ) 

#define ISDBDevice_get_IsVisible(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> get_IsVisible(This,DeviceHandle,Value) ) 

#define ISDBDevice_ChangeDeviceID(This,PluginName,OldID,NewID,Success)	\
    ( (This)->lpVtbl -> ChangeDeviceID(This,PluginName,OldID,NewID,Success) ) 

#define ISDBDevice_RegisterTreeNode(This,DeviceHandle,TreeNode)	\
    ( (This)->lpVtbl -> RegisterTreeNode(This,DeviceHandle,TreeNode) ) 

#define ISDBDevice_ChangeDeviceCaption(This,DeviceHandle,NewCaption)	\
    ( (This)->lpVtbl -> ChangeDeviceCaption(This,DeviceHandle,NewCaption) ) 

#define ISDBDevice_StartSynch(This,DeviceHandle,TrackList)	\
    ( (This)->lpVtbl -> StartSynch(This,DeviceHandle,TrackList) ) 

#define ISDBDevice_AddDeviceNode(This,DeviceNode)	\
    ( (This)->lpVtbl -> AddDeviceNode(This,DeviceNode) ) 

#define ISDBDevice_get_SynchTerminating(This,DeviceHandle,Value)	\
    ( (This)->lpVtbl -> get_SynchTerminating(This,DeviceHandle,Value) ) 

#define ISDBDevice_get_isDeviceConnected(This,USBID,Value)	\
    ( (This)->lpVtbl -> get_isDeviceConnected(This,USBID,Value) ) 

#define ISDBDevice_isSynchTracksFolder(This,DeviceHandle,Folder,Success)	\
    ( (This)->lpVtbl -> isSynchTracksFolder(This,DeviceHandle,Folder,Success) ) 

#define ISDBDevice_get_ActiveDeviceListEx(This,containID,subdriveindex,Value)	\
    ( (This)->lpVtbl -> get_ActiveDeviceListEx(This,containID,subdriveindex,Value) ) 

#define ISDBDevice_TerminateThreads(This,DeviceHandle)	\
    ( (This)->lpVtbl -> TerminateThreads(This,DeviceHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBDevice_INTERFACE_DEFINED__ */


#ifndef __ISDBUIRadioButton_INTERFACE_DEFINED__
#define __ISDBUIRadioButton_INTERFACE_DEFINED__

/* interface ISDBUIRadioButton */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIRadioButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("760CCEB3-0D45-478C-A51F-9548EA54BBF5")
    ISDBUIRadioButton : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Checked( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIRadioButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIRadioButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIRadioButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIRadioButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIRadioButton * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIRadioButton * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIRadioButton * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIRadioButton * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIRadioButton * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Checked )( 
            ISDBUIRadioButton * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Checked )( 
            ISDBUIRadioButton * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBUIRadioButton * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBUIRadioButton * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBUIRadioButtonVtbl;

    interface ISDBUIRadioButton
    {
        CONST_VTBL struct ISDBUIRadioButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIRadioButton_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIRadioButton_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIRadioButton_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIRadioButton_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIRadioButton_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIRadioButton_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIRadioButton_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIRadioButton_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIRadioButton_get_Checked(This,Value)	\
    ( (This)->lpVtbl -> get_Checked(This,Value) ) 

#define ISDBUIRadioButton_put_Checked(This,Value)	\
    ( (This)->lpVtbl -> put_Checked(This,Value) ) 

#define ISDBUIRadioButton_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBUIRadioButton_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIRadioButton_INTERFACE_DEFINED__ */


#ifndef __ISDBUIRadioButtonEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIRadioButtonEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIRadioButtonEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIRadioButtonEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DFD15D10-15CB-4F67-A53B-2F566354A93B")
    ISDBUIRadioButtonEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIRadioButtonEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIRadioButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIRadioButtonEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIRadioButtonEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIRadioButtonEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIRadioButtonEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIRadioButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIRadioButtonEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIRadioButtonEventsVtbl;

    interface ISDBUIRadioButtonEvents
    {
        CONST_VTBL struct ISDBUIRadioButtonEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIRadioButtonEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIRadioButtonEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIRadioButtonEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIRadioButtonEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIRadioButtonEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIRadioButtonEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIRadioButtonEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIRadioButtonEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBDeviceList_INTERFACE_DEFINED__
#define __ISDBDeviceList_INTERFACE_DEFINED__

/* interface ISDBDeviceList */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBDeviceList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C13DD8DA-DDFB-48AA-B2A2-8699548496F9")
    ISDBDeviceList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DriveLetterIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DeviceID( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FriendlyName( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DeviceInst( 
            /* [in] */ long Index,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AllDeviceIDs( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBDeviceListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBDeviceList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBDeviceList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBDeviceList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBDeviceList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBDeviceList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBDeviceList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBDeviceList * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBDeviceList * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DriveLetterIndex )( 
            ISDBDeviceList * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DeviceID )( 
            ISDBDeviceList * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FriendlyName )( 
            ISDBDeviceList * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DeviceInst )( 
            ISDBDeviceList * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AllDeviceIDs )( 
            ISDBDeviceList * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } ISDBDeviceListVtbl;

    interface ISDBDeviceList
    {
        CONST_VTBL struct ISDBDeviceListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBDeviceList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBDeviceList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBDeviceList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBDeviceList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBDeviceList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBDeviceList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBDeviceList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBDeviceList_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBDeviceList_get_DriveLetterIndex(This,Index,Value)	\
    ( (This)->lpVtbl -> get_DriveLetterIndex(This,Index,Value) ) 

#define ISDBDeviceList_get_DeviceID(This,Index,Value)	\
    ( (This)->lpVtbl -> get_DeviceID(This,Index,Value) ) 

#define ISDBDeviceList_get_FriendlyName(This,Index,Value)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,Index,Value) ) 

#define ISDBDeviceList_get_DeviceInst(This,Index,Value)	\
    ( (This)->lpVtbl -> get_DeviceInst(This,Index,Value) ) 

#define ISDBDeviceList_get_AllDeviceIDs(This,Index,Value)	\
    ( (This)->lpVtbl -> get_AllDeviceIDs(This,Index,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBDeviceList_INTERFACE_DEFINED__ */


#ifndef __ISDBTools_INTERFACE_DEFINED__
#define __ISDBTools_INTERFACE_DEFINED__

/* interface ISDBTools */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBTools;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C53F4C0C-C663-4AF3-9DAA-C844208BB254")
    ISDBTools : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall DeleteTracks( 
            /* [in] */ ISDBSongList *TrackList,
            /* [in] */ VARIANT_BOOL Confirmation,
            /* [in] */ EnumYesNo ToRecycleBin,
            /* [retval][out] */ EnumYesNo *Deleted) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FileSystem( 
            /* [retval][out] */ ISDBFileSystem **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MainThreadCallFunc( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ArtistByName( 
            /* [in] */ BSTR ArtistName,
            /* [retval][out] */ SDBArtist	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumByName( 
            /* [in] */ BSTR ArtistName,
            /* [in] */ BSTR AlbumName,
            /* [retval][out] */ SDBAlbum	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ArtistCompFunc( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IniFileByPath( 
            /* [in] */ BSTR Path,
            /* [retval][out] */ SDBIniFile	**Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Mask2UFText( 
            /* [in] */ BSTR Mask,
            /* [retval][out] */ BSTR *OutText) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UFText2Mask( 
            /* [in] */ BSTR InText,
            /* [retval][out] */ BSTR *OutMask) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_WebSearch( 
            /* [retval][out] */ ISDBWebSearch **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Sleep( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall OutputDebugString( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall OutputDebugStringMM( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall StringForSorting( 
            /* [in] */ BSTR Str,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall MultiString2UFText( 
            /* [in] */ BSTR MultiString,
            /* [retval][out] */ BSTR *UFText) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UFText2MultiString( 
            /* [in] */ BSTR UFText,
            /* [retval][out] */ BSTR *MultiString) = 0;
        
        virtual /* [id] */ HRESULT __stdcall LoadImage( 
            /* [in] */ BSTR Filename,
            /* [retval][out] */ SDBImage	**Image) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RemapASCII( 
            /* [in] */ BSTR Str,
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBToolsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTools * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTools * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTools * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTools * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTools * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTools * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTools * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *DeleteTracks )( 
            ISDBTools * This,
            /* [in] */ ISDBSongList *TrackList,
            /* [in] */ VARIANT_BOOL Confirmation,
            /* [in] */ EnumYesNo ToRecycleBin,
            /* [retval][out] */ EnumYesNo *Deleted);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FileSystem )( 
            ISDBTools * This,
            /* [retval][out] */ ISDBFileSystem **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MainThreadCallFunc )( 
            ISDBTools * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ArtistByName )( 
            ISDBTools * This,
            /* [in] */ BSTR ArtistName,
            /* [retval][out] */ SDBArtist	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumByName )( 
            ISDBTools * This,
            /* [in] */ BSTR ArtistName,
            /* [in] */ BSTR AlbumName,
            /* [retval][out] */ SDBAlbum	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ArtistCompFunc )( 
            ISDBTools * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IniFileByPath )( 
            ISDBTools * This,
            /* [in] */ BSTR Path,
            /* [retval][out] */ SDBIniFile	**Value);
        
        /* [id] */ HRESULT ( __stdcall *Mask2UFText )( 
            ISDBTools * This,
            /* [in] */ BSTR Mask,
            /* [retval][out] */ BSTR *OutText);
        
        /* [id] */ HRESULT ( __stdcall *UFText2Mask )( 
            ISDBTools * This,
            /* [in] */ BSTR InText,
            /* [retval][out] */ BSTR *OutMask);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_WebSearch )( 
            ISDBTools * This,
            /* [retval][out] */ ISDBWebSearch **Value);
        
        /* [id] */ HRESULT ( __stdcall *Sleep )( 
            ISDBTools * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *OutputDebugString )( 
            ISDBTools * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *OutputDebugStringMM )( 
            ISDBTools * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *StringForSorting )( 
            ISDBTools * This,
            /* [in] */ BSTR Str,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( __stdcall *MultiString2UFText )( 
            ISDBTools * This,
            /* [in] */ BSTR MultiString,
            /* [retval][out] */ BSTR *UFText);
        
        /* [id] */ HRESULT ( __stdcall *UFText2MultiString )( 
            ISDBTools * This,
            /* [in] */ BSTR UFText,
            /* [retval][out] */ BSTR *MultiString);
        
        /* [id] */ HRESULT ( __stdcall *LoadImage )( 
            ISDBTools * This,
            /* [in] */ BSTR Filename,
            /* [retval][out] */ SDBImage	**Image);
        
        /* [id] */ HRESULT ( __stdcall *RemapASCII )( 
            ISDBTools * This,
            /* [in] */ BSTR Str,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } ISDBToolsVtbl;

    interface ISDBTools
    {
        CONST_VTBL struct ISDBToolsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTools_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTools_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTools_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTools_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTools_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTools_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTools_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBTools_DeleteTracks(This,TrackList,Confirmation,ToRecycleBin,Deleted)	\
    ( (This)->lpVtbl -> DeleteTracks(This,TrackList,Confirmation,ToRecycleBin,Deleted) ) 

#define ISDBTools_get_FileSystem(This,Value)	\
    ( (This)->lpVtbl -> get_FileSystem(This,Value) ) 

#define ISDBTools_get_MainThreadCallFunc(This,Value)	\
    ( (This)->lpVtbl -> get_MainThreadCallFunc(This,Value) ) 

#define ISDBTools_get_ArtistByName(This,ArtistName,Value)	\
    ( (This)->lpVtbl -> get_ArtistByName(This,ArtistName,Value) ) 

#define ISDBTools_get_AlbumByName(This,ArtistName,AlbumName,Value)	\
    ( (This)->lpVtbl -> get_AlbumByName(This,ArtistName,AlbumName,Value) ) 

#define ISDBTools_get_ArtistCompFunc(This,Value)	\
    ( (This)->lpVtbl -> get_ArtistCompFunc(This,Value) ) 

#define ISDBTools_get_IniFileByPath(This,Path,Value)	\
    ( (This)->lpVtbl -> get_IniFileByPath(This,Path,Value) ) 

#define ISDBTools_Mask2UFText(This,Mask,OutText)	\
    ( (This)->lpVtbl -> Mask2UFText(This,Mask,OutText) ) 

#define ISDBTools_UFText2Mask(This,InText,OutMask)	\
    ( (This)->lpVtbl -> UFText2Mask(This,InText,OutMask) ) 

#define ISDBTools_get_WebSearch(This,Value)	\
    ( (This)->lpVtbl -> get_WebSearch(This,Value) ) 

#define ISDBTools_Sleep(This,Value)	\
    ( (This)->lpVtbl -> Sleep(This,Value) ) 

#define ISDBTools_OutputDebugString(This,Value)	\
    ( (This)->lpVtbl -> OutputDebugString(This,Value) ) 

#define ISDBTools_OutputDebugStringMM(This,Value)	\
    ( (This)->lpVtbl -> OutputDebugStringMM(This,Value) ) 

#define ISDBTools_StringForSorting(This,Str,Value)	\
    ( (This)->lpVtbl -> StringForSorting(This,Str,Value) ) 

#define ISDBTools_MultiString2UFText(This,MultiString,UFText)	\
    ( (This)->lpVtbl -> MultiString2UFText(This,MultiString,UFText) ) 

#define ISDBTools_UFText2MultiString(This,UFText,MultiString)	\
    ( (This)->lpVtbl -> UFText2MultiString(This,UFText,MultiString) ) 

#define ISDBTools_LoadImage(This,Filename,Image)	\
    ( (This)->lpVtbl -> LoadImage(This,Filename,Image) ) 

#define ISDBTools_RemapASCII(This,Str,Value)	\
    ( (This)->lpVtbl -> RemapASCII(This,Str,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBTools_INTERFACE_DEFINED__ */


#ifndef __ISDBUISpinEdit_INTERFACE_DEFINED__
#define __ISDBUISpinEdit_INTERFACE_DEFINED__

/* interface ISDBUISpinEdit */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUISpinEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CE2A0CA1-9007-4E37-8242-BFBCBD9D57C8")
    ISDBUISpinEdit : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Value( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Value( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MinValue( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MinValue( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MaxValue( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MaxValue( 
            /* [in] */ long Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUISpinEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUISpinEdit * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUISpinEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUISpinEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUISpinEdit * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUISpinEdit * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUISpinEdit * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUISpinEdit * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUISpinEdit * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Value )( 
            ISDBUISpinEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Value )( 
            ISDBUISpinEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MinValue )( 
            ISDBUISpinEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MinValue )( 
            ISDBUISpinEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MaxValue )( 
            ISDBUISpinEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MaxValue )( 
            ISDBUISpinEdit * This,
            /* [in] */ long Value);
        
        END_INTERFACE
    } ISDBUISpinEditVtbl;

    interface ISDBUISpinEdit
    {
        CONST_VTBL struct ISDBUISpinEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUISpinEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUISpinEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUISpinEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUISpinEdit_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUISpinEdit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUISpinEdit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUISpinEdit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUISpinEdit_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUISpinEdit_get_Value(This,Value)	\
    ( (This)->lpVtbl -> get_Value(This,Value) ) 

#define ISDBUISpinEdit_put_Value(This,Value)	\
    ( (This)->lpVtbl -> put_Value(This,Value) ) 

#define ISDBUISpinEdit_get_MinValue(This,Value)	\
    ( (This)->lpVtbl -> get_MinValue(This,Value) ) 

#define ISDBUISpinEdit_put_MinValue(This,Value)	\
    ( (This)->lpVtbl -> put_MinValue(This,Value) ) 

#define ISDBUISpinEdit_get_MaxValue(This,Value)	\
    ( (This)->lpVtbl -> get_MaxValue(This,Value) ) 

#define ISDBUISpinEdit_put_MaxValue(This,Value)	\
    ( (This)->lpVtbl -> put_MaxValue(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUISpinEdit_INTERFACE_DEFINED__ */


#ifndef __ISDBUISpinEditEvents_DISPINTERFACE_DEFINED__
#define __ISDBUISpinEditEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUISpinEditEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUISpinEditEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("FAE608F3-9CC5-4A5A-9C9F-5E4C8B63A64E")
    ISDBUISpinEditEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUISpinEditEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUISpinEditEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUISpinEditEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUISpinEditEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUISpinEditEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUISpinEditEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUISpinEditEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUISpinEditEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUISpinEditEventsVtbl;

    interface ISDBUISpinEditEvents
    {
        CONST_VTBL struct ISDBUISpinEditEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUISpinEditEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUISpinEditEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUISpinEditEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUISpinEditEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUISpinEditEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUISpinEditEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUISpinEditEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUISpinEditEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBFileSystem_INTERFACE_DEFINED__
#define __ISDBFileSystem_INTERFACE_DEFINED__

/* interface ISDBFileSystem */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBFileSystem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E4B8882-734B-4997-87E9-A10C34C18C98")
    ISDBFileSystem : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall DeleteFile( 
            /* [in] */ BSTR Filename) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CreateTextFile( 
            /* [in] */ BSTR Filename,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL Overwrite,
            /* [retval][out] */ ISDBTextFile **Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall FileExists( 
            /* [in] */ BSTR Filename,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CorrectFilename( 
            /* [in] */ BSTR Filename,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CreateFolder( 
            /* [in] */ BSTR Folder,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall MoveFile( 
            /* [in] */ BSTR Source,
            /* [in] */ BSTR Destination,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CopyFile( 
            /* [in] */ BSTR Source,
            /* [in] */ BSTR Destination,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [id] */ HRESULT __stdcall GetShortPath( 
            /* [in] */ BSTR FileName,
            /* [retval][out] */ BSTR *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBFileSystemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBFileSystem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBFileSystem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBFileSystem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBFileSystem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBFileSystem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBFileSystem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBFileSystem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *DeleteFile )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR Filename);
        
        /* [id] */ HRESULT ( __stdcall *CreateTextFile )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR Filename,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL Overwrite,
            /* [retval][out] */ ISDBTextFile **Result);
        
        /* [id] */ HRESULT ( __stdcall *FileExists )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR Filename,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [id] */ HRESULT ( __stdcall *CorrectFilename )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR Filename,
            /* [retval][out] */ BSTR *Result);
        
        /* [id] */ HRESULT ( __stdcall *CreateFolder )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR Folder,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [id] */ HRESULT ( __stdcall *MoveFile )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR Source,
            /* [in] */ BSTR Destination,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [id] */ HRESULT ( __stdcall *CopyFile )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR Source,
            /* [in] */ BSTR Destination,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [id] */ HRESULT ( __stdcall *GetShortPath )( 
            ISDBFileSystem * This,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ BSTR *Result);
        
        END_INTERFACE
    } ISDBFileSystemVtbl;

    interface ISDBFileSystem
    {
        CONST_VTBL struct ISDBFileSystemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBFileSystem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBFileSystem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBFileSystem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBFileSystem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBFileSystem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBFileSystem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBFileSystem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBFileSystem_DeleteFile(This,Filename)	\
    ( (This)->lpVtbl -> DeleteFile(This,Filename) ) 

#define ISDBFileSystem_CreateTextFile(This,Filename,Overwrite,Result)	\
    ( (This)->lpVtbl -> CreateTextFile(This,Filename,Overwrite,Result) ) 

#define ISDBFileSystem_FileExists(This,Filename,Result)	\
    ( (This)->lpVtbl -> FileExists(This,Filename,Result) ) 

#define ISDBFileSystem_CorrectFilename(This,Filename,Result)	\
    ( (This)->lpVtbl -> CorrectFilename(This,Filename,Result) ) 

#define ISDBFileSystem_CreateFolder(This,Folder,Result)	\
    ( (This)->lpVtbl -> CreateFolder(This,Folder,Result) ) 

#define ISDBFileSystem_MoveFile(This,Source,Destination,Result)	\
    ( (This)->lpVtbl -> MoveFile(This,Source,Destination,Result) ) 

#define ISDBFileSystem_CopyFile(This,Source,Destination,Result)	\
    ( (This)->lpVtbl -> CopyFile(This,Source,Destination,Result) ) 

#define ISDBFileSystem_GetShortPath(This,FileName,Result)	\
    ( (This)->lpVtbl -> GetShortPath(This,FileName,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBFileSystem_INTERFACE_DEFINED__ */


#ifndef __ISDBTextFile_INTERFACE_DEFINED__
#define __ISDBTextFile_INTERFACE_DEFINED__

/* interface ISDBTextFile */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBTextFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AB5A8A3-9D65-44F8-8055-D1D7E89B35DC")
    ISDBTextFile : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall WriteLine( 
            /* [defaultvalue][optional][in] */ BSTR aText = L"") = 0;
        
        virtual /* [id] */ HRESULT __stdcall Close( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Write( 
            /* [in] */ BSTR aText) = 0;
        
        virtual /* [id] */ HRESULT __stdcall WriteData( 
            /* [in] */ long DataPointer,
            /* [in] */ long DataLength) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBTextFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTextFile * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTextFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTextFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTextFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTextFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTextFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTextFile * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *WriteLine )( 
            ISDBTextFile * This,
            /* [defaultvalue][optional][in] */ BSTR aText);
        
        /* [id] */ HRESULT ( __stdcall *Close )( 
            ISDBTextFile * This);
        
        /* [id] */ HRESULT ( __stdcall *Write )( 
            ISDBTextFile * This,
            /* [in] */ BSTR aText);
        
        /* [id] */ HRESULT ( __stdcall *WriteData )( 
            ISDBTextFile * This,
            /* [in] */ long DataPointer,
            /* [in] */ long DataLength);
        
        END_INTERFACE
    } ISDBTextFileVtbl;

    interface ISDBTextFile
    {
        CONST_VTBL struct ISDBTextFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTextFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTextFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTextFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTextFile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTextFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTextFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTextFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBTextFile_WriteLine(This,aText)	\
    ( (This)->lpVtbl -> WriteLine(This,aText) ) 

#define ISDBTextFile_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define ISDBTextFile_Write(This,aText)	\
    ( (This)->lpVtbl -> Write(This,aText) ) 

#define ISDBTextFile_WriteData(This,DataPointer,DataLength)	\
    ( (This)->lpVtbl -> WriteData(This,DataPointer,DataLength) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBTextFile_INTERFACE_DEFINED__ */


#ifndef __ISDBTrackSynchStatus_INTERFACE_DEFINED__
#define __ISDBTrackSynchStatus_INTERFACE_DEFINED__

/* interface ISDBTrackSynchStatus */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBTrackSynchStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FB35B81B-7C46-4EEE-850C-51182B364FA4")
    ISDBTrackSynchStatus : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Track( 
            /* [retval][out] */ ISDBSongData **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DeviceTrackPath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Rating( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Rating( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PlayCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PlayCount( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DateUploaded( 
            /* [retval][out] */ DATE *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DateUploaded( 
            /* [in] */ DATE Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBTrackSynchStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTrackSynchStatus * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTrackSynchStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTrackSynchStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTrackSynchStatus * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTrackSynchStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTrackSynchStatus * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTrackSynchStatus * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Track )( 
            ISDBTrackSynchStatus * This,
            /* [retval][out] */ ISDBSongData **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DeviceTrackPath )( 
            ISDBTrackSynchStatus * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Rating )( 
            ISDBTrackSynchStatus * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Rating )( 
            ISDBTrackSynchStatus * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PlayCount )( 
            ISDBTrackSynchStatus * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PlayCount )( 
            ISDBTrackSynchStatus * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DateUploaded )( 
            ISDBTrackSynchStatus * This,
            /* [retval][out] */ DATE *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DateUploaded )( 
            ISDBTrackSynchStatus * This,
            /* [in] */ DATE Value);
        
        END_INTERFACE
    } ISDBTrackSynchStatusVtbl;

    interface ISDBTrackSynchStatus
    {
        CONST_VTBL struct ISDBTrackSynchStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTrackSynchStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTrackSynchStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTrackSynchStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTrackSynchStatus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTrackSynchStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTrackSynchStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTrackSynchStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBTrackSynchStatus_get_Track(This,Value)	\
    ( (This)->lpVtbl -> get_Track(This,Value) ) 

#define ISDBTrackSynchStatus_get_DeviceTrackPath(This,Value)	\
    ( (This)->lpVtbl -> get_DeviceTrackPath(This,Value) ) 

#define ISDBTrackSynchStatus_get_Rating(This,Value)	\
    ( (This)->lpVtbl -> get_Rating(This,Value) ) 

#define ISDBTrackSynchStatus_put_Rating(This,Value)	\
    ( (This)->lpVtbl -> put_Rating(This,Value) ) 

#define ISDBTrackSynchStatus_get_PlayCount(This,Value)	\
    ( (This)->lpVtbl -> get_PlayCount(This,Value) ) 

#define ISDBTrackSynchStatus_put_PlayCount(This,Value)	\
    ( (This)->lpVtbl -> put_PlayCount(This,Value) ) 

#define ISDBTrackSynchStatus_get_DateUploaded(This,Value)	\
    ( (This)->lpVtbl -> get_DateUploaded(This,Value) ) 

#define ISDBTrackSynchStatus_put_DateUploaded(This,Value)	\
    ( (This)->lpVtbl -> put_DateUploaded(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBTrackSynchStatus_INTERFACE_DEFINED__ */


#ifndef __ISDBAlbumArtList_INTERFACE_DEFINED__
#define __ISDBAlbumArtList_INTERFACE_DEFINED__

/* interface ISDBAlbumArtList */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBAlbumArtList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F33B5E0-3B76-4DC1-966E-593B5FD3342E")
    ISDBAlbumArtList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISDBAlbumArtItem **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Item( 
            /* [in] */ long Index,
            /* [in] */ ISDBAlbumArtItem *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Delete( 
            /* [in] */ long Index) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UpdateDB( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AddNew( 
            /* [retval][out] */ ISDBAlbumArtItem **Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBAlbumArtListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBAlbumArtList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBAlbumArtList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBAlbumArtList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBAlbumArtList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBAlbumArtList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBAlbumArtList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBAlbumArtList * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBAlbumArtList * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBAlbumArtList * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISDBAlbumArtItem **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Item )( 
            ISDBAlbumArtList * This,
            /* [in] */ long Index,
            /* [in] */ ISDBAlbumArtItem *Value);
        
        /* [id] */ HRESULT ( __stdcall *Delete )( 
            ISDBAlbumArtList * This,
            /* [in] */ long Index);
        
        /* [id] */ HRESULT ( __stdcall *UpdateDB )( 
            ISDBAlbumArtList * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AddNew )( 
            ISDBAlbumArtList * This,
            /* [retval][out] */ ISDBAlbumArtItem **Value);
        
        END_INTERFACE
    } ISDBAlbumArtListVtbl;

    interface ISDBAlbumArtList
    {
        CONST_VTBL struct ISDBAlbumArtListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBAlbumArtList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBAlbumArtList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBAlbumArtList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBAlbumArtList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBAlbumArtList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBAlbumArtList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBAlbumArtList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBAlbumArtList_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBAlbumArtList_get_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Index,Value) ) 

#define ISDBAlbumArtList_put_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> put_Item(This,Index,Value) ) 

#define ISDBAlbumArtList_Delete(This,Index)	\
    ( (This)->lpVtbl -> Delete(This,Index) ) 

#define ISDBAlbumArtList_UpdateDB(This)	\
    ( (This)->lpVtbl -> UpdateDB(This) ) 

#define ISDBAlbumArtList_get_AddNew(This,Value)	\
    ( (This)->lpVtbl -> get_AddNew(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBAlbumArtList_INTERFACE_DEFINED__ */


#ifndef __ISDBAlbumArtItem_INTERFACE_DEFINED__
#define __ISDBAlbumArtItem_INTERFACE_DEFINED__

/* interface ISDBAlbumArtItem */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBAlbumArtItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96F21D5C-F190-4B87-A8C1-C45179197BDB")
    ISDBAlbumArtItem : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Image( 
            /* [retval][out] */ ISDBImage **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PicturePath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PicturePath( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_RelativePicturePath( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_RelativePicturePath( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemType( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ItemType( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemStorage( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ItemStorage( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Description( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Description( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBAlbumArtItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBAlbumArtItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBAlbumArtItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBAlbumArtItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBAlbumArtItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBAlbumArtItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBAlbumArtItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBAlbumArtItem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Image )( 
            ISDBAlbumArtItem * This,
            /* [retval][out] */ ISDBImage **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBAlbumArtItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PicturePath )( 
            ISDBAlbumArtItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PicturePath )( 
            ISDBAlbumArtItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_RelativePicturePath )( 
            ISDBAlbumArtItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_RelativePicturePath )( 
            ISDBAlbumArtItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemType )( 
            ISDBAlbumArtItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ItemType )( 
            ISDBAlbumArtItem * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemStorage )( 
            ISDBAlbumArtItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ItemStorage )( 
            ISDBAlbumArtItem * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Description )( 
            ISDBAlbumArtItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Description )( 
            ISDBAlbumArtItem * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBAlbumArtItemVtbl;

    interface ISDBAlbumArtItem
    {
        CONST_VTBL struct ISDBAlbumArtItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBAlbumArtItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBAlbumArtItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBAlbumArtItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBAlbumArtItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBAlbumArtItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBAlbumArtItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBAlbumArtItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBAlbumArtItem_get_Image(This,Value)	\
    ( (This)->lpVtbl -> get_Image(This,Value) ) 

#define ISDBAlbumArtItem_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#define ISDBAlbumArtItem_get_PicturePath(This,Value)	\
    ( (This)->lpVtbl -> get_PicturePath(This,Value) ) 

#define ISDBAlbumArtItem_put_PicturePath(This,Value)	\
    ( (This)->lpVtbl -> put_PicturePath(This,Value) ) 

#define ISDBAlbumArtItem_get_RelativePicturePath(This,Value)	\
    ( (This)->lpVtbl -> get_RelativePicturePath(This,Value) ) 

#define ISDBAlbumArtItem_put_RelativePicturePath(This,Value)	\
    ( (This)->lpVtbl -> put_RelativePicturePath(This,Value) ) 

#define ISDBAlbumArtItem_get_ItemType(This,Value)	\
    ( (This)->lpVtbl -> get_ItemType(This,Value) ) 

#define ISDBAlbumArtItem_put_ItemType(This,Value)	\
    ( (This)->lpVtbl -> put_ItemType(This,Value) ) 

#define ISDBAlbumArtItem_get_ItemStorage(This,Value)	\
    ( (This)->lpVtbl -> get_ItemStorage(This,Value) ) 

#define ISDBAlbumArtItem_put_ItemStorage(This,Value)	\
    ( (This)->lpVtbl -> put_ItemStorage(This,Value) ) 

#define ISDBAlbumArtItem_get_Description(This,Value)	\
    ( (This)->lpVtbl -> get_Description(This,Value) ) 

#define ISDBAlbumArtItem_put_Description(This,Value)	\
    ( (This)->lpVtbl -> put_Description(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBAlbumArtItem_INTERFACE_DEFINED__ */


#ifndef __ISDBImage_INTERFACE_DEFINED__
#define __ISDBImage_INTERFACE_DEFINED__

/* interface ISDBImage */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0DEDF6F9-DABB-430B-A4C1-B6F8BEC5A2D1")
    ISDBImage : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Width( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Height( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ConvertFormat( 
            /* [in] */ long NewWidth,
            /* [in] */ long NewHeight,
            /* [in] */ BSTR NewFormat,
            /* [in] */ long Compression,
            /* [in] */ long BackgroundColor,
            /* [retval][out] */ ISDBImage **NewImage) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ImageData( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ImageDataLen( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ImageFormat( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CopyPart( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ long w,
            /* [in] */ long h,
            /* [in] */ long BackgroundColor,
            /* [retval][out] */ ISDBImage **NewImage) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ConvertFormatEx( 
            /* [in] */ long NewWidth,
            /* [in] */ long NewHeight,
            /* [in] */ BSTR NewFormat,
            /* [in] */ long Compression,
            /* [in] */ long BackgroundColor,
            /* [in] */ long Flags,
            /* [retval][out] */ ISDBImage **NewImage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBImage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBImage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBImage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Width )( 
            ISDBImage * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Height )( 
            ISDBImage * This,
            /* [retval][out] */ long *Value);
        
        /* [id] */ HRESULT ( __stdcall *ConvertFormat )( 
            ISDBImage * This,
            /* [in] */ long NewWidth,
            /* [in] */ long NewHeight,
            /* [in] */ BSTR NewFormat,
            /* [in] */ long Compression,
            /* [in] */ long BackgroundColor,
            /* [retval][out] */ ISDBImage **NewImage);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ImageData )( 
            ISDBImage * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ImageDataLen )( 
            ISDBImage * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ImageFormat )( 
            ISDBImage * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( __stdcall *CopyPart )( 
            ISDBImage * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ long w,
            /* [in] */ long h,
            /* [in] */ long BackgroundColor,
            /* [retval][out] */ ISDBImage **NewImage);
        
        /* [id] */ HRESULT ( __stdcall *ConvertFormatEx )( 
            ISDBImage * This,
            /* [in] */ long NewWidth,
            /* [in] */ long NewHeight,
            /* [in] */ BSTR NewFormat,
            /* [in] */ long Compression,
            /* [in] */ long BackgroundColor,
            /* [in] */ long Flags,
            /* [retval][out] */ ISDBImage **NewImage);
        
        END_INTERFACE
    } ISDBImageVtbl;

    interface ISDBImage
    {
        CONST_VTBL struct ISDBImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBImage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBImage_get_Width(This,Value)	\
    ( (This)->lpVtbl -> get_Width(This,Value) ) 

#define ISDBImage_get_Height(This,Value)	\
    ( (This)->lpVtbl -> get_Height(This,Value) ) 

#define ISDBImage_ConvertFormat(This,NewWidth,NewHeight,NewFormat,Compression,BackgroundColor,NewImage)	\
    ( (This)->lpVtbl -> ConvertFormat(This,NewWidth,NewHeight,NewFormat,Compression,BackgroundColor,NewImage) ) 

#define ISDBImage_get_ImageData(This,Value)	\
    ( (This)->lpVtbl -> get_ImageData(This,Value) ) 

#define ISDBImage_get_ImageDataLen(This,Value)	\
    ( (This)->lpVtbl -> get_ImageDataLen(This,Value) ) 

#define ISDBImage_get_ImageFormat(This,Value)	\
    ( (This)->lpVtbl -> get_ImageFormat(This,Value) ) 

#define ISDBImage_CopyPart(This,X,Y,w,h,BackgroundColor,NewImage)	\
    ( (This)->lpVtbl -> CopyPart(This,X,Y,w,h,BackgroundColor,NewImage) ) 

#define ISDBImage_ConvertFormatEx(This,NewWidth,NewHeight,NewFormat,Compression,BackgroundColor,Flags,NewImage)	\
    ( (This)->lpVtbl -> ConvertFormatEx(This,NewWidth,NewHeight,NewFormat,Compression,BackgroundColor,Flags,NewImage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBImage_INTERFACE_DEFINED__ */


#ifndef __ISDBHWEvents_INTERFACE_DEFINED__
#define __ISDBHWEvents_INTERFACE_DEFINED__

/* interface ISDBHWEvents */
/* [object][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_ISDBHWEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("954E2D22-B192-4354-BF17-BD21A7F7ECEF")
    ISDBHWEvents : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISDBHWEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBHWEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBHWEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBHWEvents * This);
        
        END_INTERFACE
    } ISDBHWEventsVtbl;

    interface ISDBHWEvents
    {
        CONST_VTBL struct ISDBHWEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBHWEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBHWEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBHWEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBHWEvents_INTERFACE_DEFINED__ */


#ifndef __ISDBUITrackBar_INTERFACE_DEFINED__
#define __ISDBUITrackBar_INTERFACE_DEFINED__

/* interface ISDBUITrackBar */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUITrackBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A53D58E0-1398-422E-8824-D01CC468E206")
    ISDBUITrackBar : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ SDBUICommon	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MinValue( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MinValue( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MaxValue( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MaxValue( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Value( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Value( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Horizontal( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Horizontal( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Frequency( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Frequency( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PageSize( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PageSize( 
            /* [in] */ long Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITrackBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITrackBar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITrackBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITrackBar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITrackBar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITrackBar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITrackBar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITrackBar * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUITrackBar * This,
            /* [retval][out] */ SDBUICommon	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MinValue )( 
            ISDBUITrackBar * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MinValue )( 
            ISDBUITrackBar * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MaxValue )( 
            ISDBUITrackBar * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MaxValue )( 
            ISDBUITrackBar * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Value )( 
            ISDBUITrackBar * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Value )( 
            ISDBUITrackBar * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Horizontal )( 
            ISDBUITrackBar * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Horizontal )( 
            ISDBUITrackBar * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Frequency )( 
            ISDBUITrackBar * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Frequency )( 
            ISDBUITrackBar * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PageSize )( 
            ISDBUITrackBar * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PageSize )( 
            ISDBUITrackBar * This,
            /* [in] */ long Value);
        
        END_INTERFACE
    } ISDBUITrackBarVtbl;

    interface ISDBUITrackBar
    {
        CONST_VTBL struct ISDBUITrackBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITrackBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITrackBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITrackBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITrackBar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITrackBar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITrackBar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITrackBar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUITrackBar_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUITrackBar_get_MinValue(This,Value)	\
    ( (This)->lpVtbl -> get_MinValue(This,Value) ) 

#define ISDBUITrackBar_put_MinValue(This,Value)	\
    ( (This)->lpVtbl -> put_MinValue(This,Value) ) 

#define ISDBUITrackBar_get_MaxValue(This,Value)	\
    ( (This)->lpVtbl -> get_MaxValue(This,Value) ) 

#define ISDBUITrackBar_put_MaxValue(This,Value)	\
    ( (This)->lpVtbl -> put_MaxValue(This,Value) ) 

#define ISDBUITrackBar_get_Value(This,Value)	\
    ( (This)->lpVtbl -> get_Value(This,Value) ) 

#define ISDBUITrackBar_put_Value(This,Value)	\
    ( (This)->lpVtbl -> put_Value(This,Value) ) 

#define ISDBUITrackBar_get_Horizontal(This,Value)	\
    ( (This)->lpVtbl -> get_Horizontal(This,Value) ) 

#define ISDBUITrackBar_put_Horizontal(This,Value)	\
    ( (This)->lpVtbl -> put_Horizontal(This,Value) ) 

#define ISDBUITrackBar_get_Frequency(This,Value)	\
    ( (This)->lpVtbl -> get_Frequency(This,Value) ) 

#define ISDBUITrackBar_put_Frequency(This,Value)	\
    ( (This)->lpVtbl -> put_Frequency(This,Value) ) 

#define ISDBUITrackBar_get_PageSize(This,Value)	\
    ( (This)->lpVtbl -> get_PageSize(This,Value) ) 

#define ISDBUITrackBar_put_PageSize(This,Value)	\
    ( (This)->lpVtbl -> put_PageSize(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUITrackBar_INTERFACE_DEFINED__ */


#ifndef __ISDBUITrackBarEvents_DISPINTERFACE_DEFINED__
#define __ISDBUITrackBarEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUITrackBarEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUITrackBarEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9E1F7ECF-4BFB-4586-A19D-62D1D54D9F8A")
    ISDBUITrackBarEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITrackBarEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITrackBarEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITrackBarEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITrackBarEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITrackBarEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITrackBarEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITrackBarEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITrackBarEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUITrackBarEventsVtbl;

    interface ISDBUITrackBarEvents
    {
        CONST_VTBL struct ISDBUITrackBarEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITrackBarEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITrackBarEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITrackBarEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITrackBarEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITrackBarEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITrackBarEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITrackBarEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUITrackBarEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUIDockablePanel_INTERFACE_DEFINED__
#define __ISDBUIDockablePanel_INTERFACE_DEFINED__

/* interface ISDBUIDockablePanel */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIDockablePanel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0470120E-FC98-42B0-8B4A-15DB8D8F5753")
    ISDBUIDockablePanel : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ SDBUICommon	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_DockedTo( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_DockedTo( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Persistent( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Persistent( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_IsNew( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ShowCaption( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ShowCaption( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIDockablePanelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIDockablePanel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIDockablePanel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIDockablePanel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIDockablePanel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIDockablePanel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIDockablePanel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIDockablePanel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBUIDockablePanel * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIDockablePanel * This,
            /* [retval][out] */ SDBUICommon	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBUIDockablePanel * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBUIDockablePanel * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_DockedTo )( 
            ISDBUIDockablePanel * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_DockedTo )( 
            ISDBUIDockablePanel * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Persistent )( 
            ISDBUIDockablePanel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Persistent )( 
            ISDBUIDockablePanel * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_IsNew )( 
            ISDBUIDockablePanel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ShowCaption )( 
            ISDBUIDockablePanel * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ShowCaption )( 
            ISDBUIDockablePanel * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } ISDBUIDockablePanelVtbl;

    interface ISDBUIDockablePanel
    {
        CONST_VTBL struct ISDBUIDockablePanelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIDockablePanel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIDockablePanel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIDockablePanel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIDockablePanel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIDockablePanel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIDockablePanel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIDockablePanel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIDockablePanel_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#define ISDBUIDockablePanel_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIDockablePanel_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBUIDockablePanel_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#define ISDBUIDockablePanel_get_DockedTo(This,Value)	\
    ( (This)->lpVtbl -> get_DockedTo(This,Value) ) 

#define ISDBUIDockablePanel_put_DockedTo(This,Value)	\
    ( (This)->lpVtbl -> put_DockedTo(This,Value) ) 

#define ISDBUIDockablePanel_get_Persistent(This,Value)	\
    ( (This)->lpVtbl -> get_Persistent(This,Value) ) 

#define ISDBUIDockablePanel_put_Persistent(This,Value)	\
    ( (This)->lpVtbl -> put_Persistent(This,Value) ) 

#define ISDBUIDockablePanel_get_IsNew(This,Value)	\
    ( (This)->lpVtbl -> get_IsNew(This,Value) ) 

#define ISDBUIDockablePanel_get_ShowCaption(This,Value)	\
    ( (This)->lpVtbl -> get_ShowCaption(This,Value) ) 

#define ISDBUIDockablePanel_put_ShowCaption(This,Value)	\
    ( (This)->lpVtbl -> put_ShowCaption(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIDockablePanel_INTERFACE_DEFINED__ */


#ifndef __ISDBUIDockablePanelEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIDockablePanelEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIDockablePanelEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIDockablePanelEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("467E8FA3-AA2C-4828-A8B9-5AFE6C351E22")
    ISDBUIDockablePanelEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIDockablePanelEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIDockablePanelEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIDockablePanelEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIDockablePanelEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIDockablePanelEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIDockablePanelEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIDockablePanelEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIDockablePanelEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIDockablePanelEventsVtbl;

    interface ISDBUIDockablePanelEvents
    {
        CONST_VTBL struct ISDBUIDockablePanelEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIDockablePanelEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIDockablePanelEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIDockablePanelEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIDockablePanelEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIDockablePanelEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIDockablePanelEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIDockablePanelEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIDockablePanelEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBTimer_INTERFACE_DEFINED__
#define __ISDBTimer_INTERFACE_DEFINED__

/* interface ISDBTimer */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBTimer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5945B0E-000E-4073-B8DD-FB7E31DB3649")
    ISDBTimer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Interval( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Interval( 
            /* [in] */ long Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBTimerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTimer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTimer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTimer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTimer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTimer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTimer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTimer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Enabled )( 
            ISDBTimer * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Enabled )( 
            ISDBTimer * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Interval )( 
            ISDBTimer * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Interval )( 
            ISDBTimer * This,
            /* [in] */ long Value);
        
        END_INTERFACE
    } ISDBTimerVtbl;

    interface ISDBTimer
    {
        CONST_VTBL struct ISDBTimerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTimer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTimer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTimer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTimer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTimer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTimer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTimer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBTimer_get_Enabled(This,Value)	\
    ( (This)->lpVtbl -> get_Enabled(This,Value) ) 

#define ISDBTimer_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define ISDBTimer_get_Interval(This,Value)	\
    ( (This)->lpVtbl -> get_Interval(This,Value) ) 

#define ISDBTimer_put_Interval(This,Value)	\
    ( (This)->lpVtbl -> put_Interval(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBTimer_INTERFACE_DEFINED__ */


#ifndef __ISDBTimerEvents_DISPINTERFACE_DEFINED__
#define __ISDBTimerEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBTimerEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBTimerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("17FD07A3-88C7-4604-AAAA-49A3565662BB")
    ISDBTimerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBTimerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBTimerEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBTimerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBTimerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBTimerEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBTimerEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBTimerEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBTimerEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBTimerEventsVtbl;

    interface ISDBTimerEvents
    {
        CONST_VTBL struct ISDBTimerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBTimerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBTimerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBTimerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBTimerEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBTimerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBTimerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBTimerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBTimerEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBStringList_INTERFACE_DEFINED__
#define __ISDBStringList_INTERFACE_DEFINED__

/* interface ISDBStringList */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBStringList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8F110E2-DF88-4F2A-8FF0-51FDF9F883AA")
    ISDBStringList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Item( 
            /* [in] */ long Index,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Add( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Delete( 
            /* [in] */ long Index) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Sort( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Copy( 
            /* [retval][out] */ SDBStringList	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBStringListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBStringList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBStringList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBStringList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBStringList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBStringList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBStringList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBStringList * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBStringList * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBStringList * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Item )( 
            ISDBStringList * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *Add )( 
            ISDBStringList * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *Delete )( 
            ISDBStringList * This,
            /* [in] */ long Index);
        
        /* [id] */ HRESULT ( __stdcall *Sort )( 
            ISDBStringList * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Copy )( 
            ISDBStringList * This,
            /* [retval][out] */ SDBStringList	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBStringList * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } ISDBStringListVtbl;

    interface ISDBStringList
    {
        CONST_VTBL struct ISDBStringListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBStringList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBStringList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBStringList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBStringList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBStringList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBStringList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBStringList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBStringList_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBStringList_get_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Index,Value) ) 

#define ISDBStringList_put_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> put_Item(This,Index,Value) ) 

#define ISDBStringList_Add(This,Value)	\
    ( (This)->lpVtbl -> Add(This,Value) ) 

#define ISDBStringList_Delete(This,Index)	\
    ( (This)->lpVtbl -> Delete(This,Index) ) 

#define ISDBStringList_Sort(This)	\
    ( (This)->lpVtbl -> Sort(This) ) 

#define ISDBStringList_get_Copy(This,Value)	\
    ( (This)->lpVtbl -> get_Copy(This,Value) ) 

#define ISDBStringList_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBStringList_INTERFACE_DEFINED__ */


#ifndef __ISDBWebSearch_INTERFACE_DEFINED__
#define __ISDBWebSearch_INTERFACE_DEFINED__

/* interface ISDBWebSearch */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBWebSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD78FB7F-CBEB-4301-B97E-BE4466A05FED")
    ISDBWebSearch : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall SetSearchResults( 
            /* [in] */ ISDBStringList *Results) = 0;
        
        virtual /* [id] */ HRESULT __stdcall SmartUpdateTracks( 
            /* [in] */ ISDBStringList *Tracks) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ResultIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ResultIndex( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NewTracks( 
            /* [retval][out] */ SDBSongList	**Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RefreshViews( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ClearTracksData( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TrackChecked( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_TrackChecked( 
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_AlbumArtURL( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_AlbumArtURL( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBWebSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBWebSearch * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBWebSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBWebSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBWebSearch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBWebSearch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBWebSearch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBWebSearch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *SetSearchResults )( 
            ISDBWebSearch * This,
            /* [in] */ ISDBStringList *Results);
        
        /* [id] */ HRESULT ( __stdcall *SmartUpdateTracks )( 
            ISDBWebSearch * This,
            /* [in] */ ISDBStringList *Tracks);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ResultIndex )( 
            ISDBWebSearch * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ResultIndex )( 
            ISDBWebSearch * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NewTracks )( 
            ISDBWebSearch * This,
            /* [retval][out] */ SDBSongList	**Value);
        
        /* [id] */ HRESULT ( __stdcall *RefreshViews )( 
            ISDBWebSearch * This);
        
        /* [id] */ HRESULT ( __stdcall *ClearTracksData )( 
            ISDBWebSearch * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TrackChecked )( 
            ISDBWebSearch * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_TrackChecked )( 
            ISDBWebSearch * This,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_AlbumArtURL )( 
            ISDBWebSearch * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_AlbumArtURL )( 
            ISDBWebSearch * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBWebSearchVtbl;

    interface ISDBWebSearch
    {
        CONST_VTBL struct ISDBWebSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBWebSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBWebSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBWebSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBWebSearch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBWebSearch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBWebSearch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBWebSearch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBWebSearch_SetSearchResults(This,Results)	\
    ( (This)->lpVtbl -> SetSearchResults(This,Results) ) 

#define ISDBWebSearch_SmartUpdateTracks(This,Tracks)	\
    ( (This)->lpVtbl -> SmartUpdateTracks(This,Tracks) ) 

#define ISDBWebSearch_get_ResultIndex(This,Value)	\
    ( (This)->lpVtbl -> get_ResultIndex(This,Value) ) 

#define ISDBWebSearch_put_ResultIndex(This,Value)	\
    ( (This)->lpVtbl -> put_ResultIndex(This,Value) ) 

#define ISDBWebSearch_get_NewTracks(This,Value)	\
    ( (This)->lpVtbl -> get_NewTracks(This,Value) ) 

#define ISDBWebSearch_RefreshViews(This)	\
    ( (This)->lpVtbl -> RefreshViews(This) ) 

#define ISDBWebSearch_ClearTracksData(This)	\
    ( (This)->lpVtbl -> ClearTracksData(This) ) 

#define ISDBWebSearch_get_TrackChecked(This,Index,Value)	\
    ( (This)->lpVtbl -> get_TrackChecked(This,Index,Value) ) 

#define ISDBWebSearch_put_TrackChecked(This,Index,Value)	\
    ( (This)->lpVtbl -> put_TrackChecked(This,Index,Value) ) 

#define ISDBWebSearch_get_AlbumArtURL(This,Value)	\
    ( (This)->lpVtbl -> get_AlbumArtURL(This,Value) ) 

#define ISDBWebSearch_put_AlbumArtURL(This,Value)	\
    ( (This)->lpVtbl -> put_AlbumArtURL(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBWebSearch_INTERFACE_DEFINED__ */


#ifndef __ISDBUIGroupBox_INTERFACE_DEFINED__
#define __ISDBUIGroupBox_INTERFACE_DEFINED__

/* interface ISDBUIGroupBox */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIGroupBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C58AAEC0-E46F-49F1-AFC3-023AAB74F6AD")
    ISDBUIGroupBox : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ SDBUICommon	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Caption( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Caption( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIGroupBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIGroupBox * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIGroupBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIGroupBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIGroupBox * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIGroupBox * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIGroupBox * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIGroupBox * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIGroupBox * This,
            /* [retval][out] */ SDBUICommon	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Caption )( 
            ISDBUIGroupBox * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Caption )( 
            ISDBUIGroupBox * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBUIGroupBox * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } ISDBUIGroupBoxVtbl;

    interface ISDBUIGroupBox
    {
        CONST_VTBL struct ISDBUIGroupBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIGroupBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIGroupBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIGroupBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIGroupBox_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIGroupBox_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIGroupBox_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIGroupBox_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIGroupBox_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIGroupBox_get_Caption(This,Value)	\
    ( (This)->lpVtbl -> get_Caption(This,Value) ) 

#define ISDBUIGroupBox_put_Caption(This,Value)	\
    ( (This)->lpVtbl -> put_Caption(This,Value) ) 

#define ISDBUIGroupBox_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIGroupBox_INTERFACE_DEFINED__ */


#ifndef __ISDBUIGroupBoxEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIGroupBoxEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIGroupBoxEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIGroupBoxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DC3B33DB-6EB4-4572-B78D-F3A7DE19DA13")
    ISDBUIGroupBoxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIGroupBoxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIGroupBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIGroupBoxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIGroupBoxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIGroupBoxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIGroupBoxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIGroupBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIGroupBoxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIGroupBoxEventsVtbl;

    interface ISDBUIGroupBoxEvents
    {
        CONST_VTBL struct ISDBUIGroupBoxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIGroupBoxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIGroupBoxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIGroupBoxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIGroupBoxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIGroupBoxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIGroupBoxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIGroupBoxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIGroupBoxEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUIMultiLineEdit_INTERFACE_DEFINED__
#define __ISDBUIMultiLineEdit_INTERFACE_DEFINED__

/* interface ISDBUIMultiLineEdit */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIMultiLineEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6285BB6-8029-4962-BC8A-BB67C8F989A1")
    ISDBUIMultiLineEdit : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Text( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Text( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Lines( 
            /* [retval][out] */ ISDBStringList **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Lines( 
            /* [in] */ ISDBStringList *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ SDBUICommon	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelStart( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelStart( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelLength( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelLength( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_SelText( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SelText( 
            /* [in] */ BSTR Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIMultiLineEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIMultiLineEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIMultiLineEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIMultiLineEdit * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Text )( 
            ISDBUIMultiLineEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Text )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Lines )( 
            ISDBUIMultiLineEdit * This,
            /* [retval][out] */ ISDBStringList **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Lines )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ ISDBStringList *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIMultiLineEdit * This,
            /* [retval][out] */ SDBUICommon	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelStart )( 
            ISDBUIMultiLineEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelStart )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelLength )( 
            ISDBUIMultiLineEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelLength )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_SelText )( 
            ISDBUIMultiLineEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SelText )( 
            ISDBUIMultiLineEdit * This,
            /* [in] */ BSTR Value);
        
        END_INTERFACE
    } ISDBUIMultiLineEditVtbl;

    interface ISDBUIMultiLineEdit
    {
        CONST_VTBL struct ISDBUIMultiLineEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIMultiLineEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIMultiLineEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIMultiLineEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIMultiLineEdit_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIMultiLineEdit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIMultiLineEdit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIMultiLineEdit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIMultiLineEdit_get_Text(This,Value)	\
    ( (This)->lpVtbl -> get_Text(This,Value) ) 

#define ISDBUIMultiLineEdit_put_Text(This,Value)	\
    ( (This)->lpVtbl -> put_Text(This,Value) ) 

#define ISDBUIMultiLineEdit_get_Lines(This,Value)	\
    ( (This)->lpVtbl -> get_Lines(This,Value) ) 

#define ISDBUIMultiLineEdit_put_Lines(This,Value)	\
    ( (This)->lpVtbl -> put_Lines(This,Value) ) 

#define ISDBUIMultiLineEdit_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIMultiLineEdit_get_SelStart(This,Value)	\
    ( (This)->lpVtbl -> get_SelStart(This,Value) ) 

#define ISDBUIMultiLineEdit_put_SelStart(This,Value)	\
    ( (This)->lpVtbl -> put_SelStart(This,Value) ) 

#define ISDBUIMultiLineEdit_get_SelLength(This,Value)	\
    ( (This)->lpVtbl -> get_SelLength(This,Value) ) 

#define ISDBUIMultiLineEdit_put_SelLength(This,Value)	\
    ( (This)->lpVtbl -> put_SelLength(This,Value) ) 

#define ISDBUIMultiLineEdit_get_SelText(This,Value)	\
    ( (This)->lpVtbl -> get_SelText(This,Value) ) 

#define ISDBUIMultiLineEdit_put_SelText(This,Value)	\
    ( (This)->lpVtbl -> put_SelText(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIMultiLineEdit_INTERFACE_DEFINED__ */


#ifndef __ISDBUIMultiLineEditEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIMultiLineEditEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIMultiLineEditEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIMultiLineEditEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7F27FAD1-BCD3-49E6-A77F-4B8060FCBF7F")
    ISDBUIMultiLineEditEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIMultiLineEditEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIMultiLineEditEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIMultiLineEditEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIMultiLineEditEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIMultiLineEditEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIMultiLineEditEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIMultiLineEditEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIMultiLineEditEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIMultiLineEditEventsVtbl;

    interface ISDBUIMultiLineEditEvents
    {
        CONST_VTBL struct ISDBUIMultiLineEditEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIMultiLineEditEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIMultiLineEditEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIMultiLineEditEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIMultiLineEditEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIMultiLineEditEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIMultiLineEditEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIMultiLineEditEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIMultiLineEditEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUIMaskEdit_INTERFACE_DEFINED__
#define __ISDBUIMaskEdit_INTERFACE_DEFINED__

/* interface ISDBUIMaskEdit */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIMaskEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("012A5DF3-BB17-4ACD-9DFF-FCD7D8AA8338")
    ISDBUIMaskEdit : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddMask( 
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ItemIndex( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemText( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ItemText( 
            /* [in] */ long Index,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteMask( 
            /* [in] */ long Index) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Text( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Text( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_PathPart( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_PathPart( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MaskPart( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MaskPart( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddMaskHelp( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ClearMaskHelp( void) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_WizardEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_WizardEnabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_BrowseEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_BrowseEnabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_BrowseTitle( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_BrowseTitle( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_VirtualDir( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_VirtualDir( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CanDefineDirs( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CanDefineDirs( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_SampleSongObject( 
            /* [in] */ ISDBSongData *Param1) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_RootDir( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_RootDir( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall MaskHelpPreset( 
            /* [in] */ long ID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIMaskEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIMaskEdit * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIMaskEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIMaskEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIMaskEdit * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIMaskEdit * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIMaskEdit * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIMaskEdit * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id] */ HRESULT ( __stdcall *AddMask )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Text);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemIndex )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ItemIndex )( 
            ISDBUIMaskEdit * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemCount )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemText )( 
            ISDBUIMaskEdit * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ItemText )( 
            ISDBUIMaskEdit * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *DeleteMask )( 
            ISDBUIMaskEdit * This,
            /* [in] */ long Index);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Text )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Text )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_PathPart )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_PathPart )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MaskPart )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MaskPart )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *AddMaskHelp )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *ClearMaskHelp )( 
            ISDBUIMaskEdit * This);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_WizardEnabled )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_WizardEnabled )( 
            ISDBUIMaskEdit * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_BrowseEnabled )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_BrowseEnabled )( 
            ISDBUIMaskEdit * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_BrowseTitle )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_BrowseTitle )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_VirtualDir )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_VirtualDir )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CanDefineDirs )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CanDefineDirs )( 
            ISDBUIMaskEdit * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_SampleSongObject )( 
            ISDBUIMaskEdit * This,
            /* [in] */ ISDBSongData *Param1);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_RootDir )( 
            ISDBUIMaskEdit * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_RootDir )( 
            ISDBUIMaskEdit * This,
            /* [in] */ BSTR Value);
        
        /* [id] */ HRESULT ( __stdcall *MaskHelpPreset )( 
            ISDBUIMaskEdit * This,
            /* [in] */ long ID);
        
        END_INTERFACE
    } ISDBUIMaskEditVtbl;

    interface ISDBUIMaskEdit
    {
        CONST_VTBL struct ISDBUIMaskEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIMaskEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIMaskEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIMaskEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIMaskEdit_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIMaskEdit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIMaskEdit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIMaskEdit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIMaskEdit_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIMaskEdit_AddMask(This,Text)	\
    ( (This)->lpVtbl -> AddMask(This,Text) ) 

#define ISDBUIMaskEdit_get_ItemIndex(This,Value)	\
    ( (This)->lpVtbl -> get_ItemIndex(This,Value) ) 

#define ISDBUIMaskEdit_put_ItemIndex(This,Value)	\
    ( (This)->lpVtbl -> put_ItemIndex(This,Value) ) 

#define ISDBUIMaskEdit_get_ItemCount(This,Value)	\
    ( (This)->lpVtbl -> get_ItemCount(This,Value) ) 

#define ISDBUIMaskEdit_get_ItemText(This,Index,Value)	\
    ( (This)->lpVtbl -> get_ItemText(This,Index,Value) ) 

#define ISDBUIMaskEdit_put_ItemText(This,Index,Value)	\
    ( (This)->lpVtbl -> put_ItemText(This,Index,Value) ) 

#define ISDBUIMaskEdit_DeleteMask(This,Index)	\
    ( (This)->lpVtbl -> DeleteMask(This,Index) ) 

#define ISDBUIMaskEdit_get_Text(This,Value)	\
    ( (This)->lpVtbl -> get_Text(This,Value) ) 

#define ISDBUIMaskEdit_put_Text(This,Value)	\
    ( (This)->lpVtbl -> put_Text(This,Value) ) 

#define ISDBUIMaskEdit_get_PathPart(This,Value)	\
    ( (This)->lpVtbl -> get_PathPart(This,Value) ) 

#define ISDBUIMaskEdit_put_PathPart(This,Value)	\
    ( (This)->lpVtbl -> put_PathPart(This,Value) ) 

#define ISDBUIMaskEdit_get_MaskPart(This,Value)	\
    ( (This)->lpVtbl -> get_MaskPart(This,Value) ) 

#define ISDBUIMaskEdit_put_MaskPart(This,Value)	\
    ( (This)->lpVtbl -> put_MaskPart(This,Value) ) 

#define ISDBUIMaskEdit_AddMaskHelp(This,Value)	\
    ( (This)->lpVtbl -> AddMaskHelp(This,Value) ) 

#define ISDBUIMaskEdit_ClearMaskHelp(This)	\
    ( (This)->lpVtbl -> ClearMaskHelp(This) ) 

#define ISDBUIMaskEdit_get_WizardEnabled(This,Value)	\
    ( (This)->lpVtbl -> get_WizardEnabled(This,Value) ) 

#define ISDBUIMaskEdit_put_WizardEnabled(This,Value)	\
    ( (This)->lpVtbl -> put_WizardEnabled(This,Value) ) 

#define ISDBUIMaskEdit_get_BrowseEnabled(This,Value)	\
    ( (This)->lpVtbl -> get_BrowseEnabled(This,Value) ) 

#define ISDBUIMaskEdit_put_BrowseEnabled(This,Value)	\
    ( (This)->lpVtbl -> put_BrowseEnabled(This,Value) ) 

#define ISDBUIMaskEdit_get_BrowseTitle(This,Value)	\
    ( (This)->lpVtbl -> get_BrowseTitle(This,Value) ) 

#define ISDBUIMaskEdit_put_BrowseTitle(This,Value)	\
    ( (This)->lpVtbl -> put_BrowseTitle(This,Value) ) 

#define ISDBUIMaskEdit_get_VirtualDir(This,Value)	\
    ( (This)->lpVtbl -> get_VirtualDir(This,Value) ) 

#define ISDBUIMaskEdit_put_VirtualDir(This,Value)	\
    ( (This)->lpVtbl -> put_VirtualDir(This,Value) ) 

#define ISDBUIMaskEdit_get_CanDefineDirs(This,Value)	\
    ( (This)->lpVtbl -> get_CanDefineDirs(This,Value) ) 

#define ISDBUIMaskEdit_put_CanDefineDirs(This,Value)	\
    ( (This)->lpVtbl -> put_CanDefineDirs(This,Value) ) 

#define ISDBUIMaskEdit_put_SampleSongObject(This,Param1)	\
    ( (This)->lpVtbl -> put_SampleSongObject(This,Param1) ) 

#define ISDBUIMaskEdit_get_RootDir(This,Value)	\
    ( (This)->lpVtbl -> get_RootDir(This,Value) ) 

#define ISDBUIMaskEdit_put_RootDir(This,Value)	\
    ( (This)->lpVtbl -> put_RootDir(This,Value) ) 

#define ISDBUIMaskEdit_MaskHelpPreset(This,ID)	\
    ( (This)->lpVtbl -> MaskHelpPreset(This,ID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIMaskEdit_INTERFACE_DEFINED__ */


#ifndef __ISDBUIMaskEditEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIMaskEditEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIMaskEditEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIMaskEditEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4A618A57-C77D-409C-AD6E-17C7CD75356D")
    ISDBUIMaskEditEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIMaskEditEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIMaskEditEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIMaskEditEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIMaskEditEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIMaskEditEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIMaskEditEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIMaskEditEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIMaskEditEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIMaskEditEventsVtbl;

    interface ISDBUIMaskEditEvents
    {
        CONST_VTBL struct ISDBUIMaskEditEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIMaskEditEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIMaskEditEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIMaskEditEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIMaskEditEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIMaskEditEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIMaskEditEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIMaskEditEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIMaskEditEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUIListBox_INTERFACE_DEFINED__
#define __ISDBUIListBox_INTERFACE_DEFINED__

/* interface ISDBUIListBox */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUIListBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D3F5B2C-59EF-479E-A7EC-1C07B23E81F1")
    ISDBUIListBox : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Items( 
            /* [retval][out] */ SDBStringList	**Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Items( 
            /* [in] */ SDBStringList	*Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ItemIndex( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ItemIndex( 
            /* [in] */ long Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIListBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIListBox * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIListBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIListBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIListBox * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIListBox * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIListBox * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIListBox * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUIListBox * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Items )( 
            ISDBUIListBox * This,
            /* [retval][out] */ SDBStringList	**Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Items )( 
            ISDBUIListBox * This,
            /* [in] */ SDBStringList	*Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ItemIndex )( 
            ISDBUIListBox * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ItemIndex )( 
            ISDBUIListBox * This,
            /* [in] */ long Value);
        
        END_INTERFACE
    } ISDBUIListBoxVtbl;

    interface ISDBUIListBox
    {
        CONST_VTBL struct ISDBUIListBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIListBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIListBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIListBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIListBox_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIListBox_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIListBox_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIListBox_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUIListBox_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUIListBox_get_Items(This,Value)	\
    ( (This)->lpVtbl -> get_Items(This,Value) ) 

#define ISDBUIListBox_put_Items(This,Value)	\
    ( (This)->lpVtbl -> put_Items(This,Value) ) 

#define ISDBUIListBox_get_ItemIndex(This,Value)	\
    ( (This)->lpVtbl -> get_ItemIndex(This,Value) ) 

#define ISDBUIListBox_put_ItemIndex(This,Value)	\
    ( (This)->lpVtbl -> put_ItemIndex(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUIListBox_INTERFACE_DEFINED__ */


#ifndef __ISDBUIListBoxEvents_DISPINTERFACE_DEFINED__
#define __ISDBUIListBoxEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUIListBoxEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUIListBoxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ADA91410-DEEA-4F89-A32E-768D243712A7")
    ISDBUIListBoxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUIListBoxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUIListBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUIListBoxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUIListBoxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUIListBoxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUIListBoxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUIListBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUIListBoxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUIListBoxEventsVtbl;

    interface ISDBUIListBoxEvents
    {
        CONST_VTBL struct ISDBUIListBoxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUIListBoxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUIListBoxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUIListBoxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUIListBoxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUIListBoxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUIListBoxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUIListBoxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUIListBoxEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUITreeList_INTERFACE_DEFINED__
#define __ISDBUITreeList_INTERFACE_DEFINED__

/* interface ISDBUITreeList */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUITreeList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE7D4489-2657-45CD-919C-AF5889E3228B")
    ISDBUITreeList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Common( 
            /* [retval][out] */ ISDBUICommon **Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall AddNode( 
            /* [in] */ ISDBUITreeListItem *Parent,
            /* [retval][out] */ ISDBUITreeListItem **Result) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FocusedNode( 
            /* [retval][out] */ ISDBUITreeListItem **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FocusedNode( 
            /* [in] */ ISDBUITreeListItem *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FocusedColumn( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FocusedColumn( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Refresh( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall DeleteNode( 
            /* [in] */ ISDBUITreeListItem *Node) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_HeaderVisible( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_HeaderVisible( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall HeaderAddColumn( 
            /* [in] */ BSTR Caption) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_RootNodeCount( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_RootNodeCount( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_HeaderColumnWidth( 
            /* [in] */ long Index,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_HeaderColumnWidth( 
            /* [in] */ long Index,
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FirstNode( 
            /* [retval][out] */ SDBUITreeListItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Indent( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Indent( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ShowTreeLines( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ShowTreeLines( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ExtendedFocus( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ExtendedFocus( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FullRowSelect( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_FullRowSelect( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_MultiSelect( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_MultiSelect( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ShowRoot( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_ShowRoot( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_GridExtensions( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_GridExtensions( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITreeListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITreeList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITreeList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITreeList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITreeList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITreeList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITreeList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITreeList * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Common )( 
            ISDBUITreeList * This,
            /* [retval][out] */ ISDBUICommon **Value);
        
        /* [id] */ HRESULT ( __stdcall *AddNode )( 
            ISDBUITreeList * This,
            /* [in] */ ISDBUITreeListItem *Parent,
            /* [retval][out] */ ISDBUITreeListItem **Result);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FocusedNode )( 
            ISDBUITreeList * This,
            /* [retval][out] */ ISDBUITreeListItem **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FocusedNode )( 
            ISDBUITreeList * This,
            /* [in] */ ISDBUITreeListItem *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FocusedColumn )( 
            ISDBUITreeList * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FocusedColumn )( 
            ISDBUITreeList * This,
            /* [in] */ long Value);
        
        /* [id] */ HRESULT ( __stdcall *Refresh )( 
            ISDBUITreeList * This);
        
        /* [id] */ HRESULT ( __stdcall *DeleteNode )( 
            ISDBUITreeList * This,
            /* [in] */ ISDBUITreeListItem *Node);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_HeaderVisible )( 
            ISDBUITreeList * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_HeaderVisible )( 
            ISDBUITreeList * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( __stdcall *HeaderAddColumn )( 
            ISDBUITreeList * This,
            /* [in] */ BSTR Caption);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_RootNodeCount )( 
            ISDBUITreeList * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_RootNodeCount )( 
            ISDBUITreeList * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_HeaderColumnWidth )( 
            ISDBUITreeList * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_HeaderColumnWidth )( 
            ISDBUITreeList * This,
            /* [in] */ long Index,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FirstNode )( 
            ISDBUITreeList * This,
            /* [retval][out] */ SDBUITreeListItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Indent )( 
            ISDBUITreeList * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Indent )( 
            ISDBUITreeList * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ShowTreeLines )( 
            ISDBUITreeList * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ShowTreeLines )( 
            ISDBUITreeList * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ExtendedFocus )( 
            ISDBUITreeList * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ExtendedFocus )( 
            ISDBUITreeList * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FullRowSelect )( 
            ISDBUITreeList * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_FullRowSelect )( 
            ISDBUITreeList * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_MultiSelect )( 
            ISDBUITreeList * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_MultiSelect )( 
            ISDBUITreeList * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ShowRoot )( 
            ISDBUITreeList * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_ShowRoot )( 
            ISDBUITreeList * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_GridExtensions )( 
            ISDBUITreeList * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_GridExtensions )( 
            ISDBUITreeList * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } ISDBUITreeListVtbl;

    interface ISDBUITreeList
    {
        CONST_VTBL struct ISDBUITreeListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITreeList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITreeList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITreeList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITreeList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITreeList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITreeList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITreeList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUITreeList_get_Common(This,Value)	\
    ( (This)->lpVtbl -> get_Common(This,Value) ) 

#define ISDBUITreeList_AddNode(This,Parent,Result)	\
    ( (This)->lpVtbl -> AddNode(This,Parent,Result) ) 

#define ISDBUITreeList_get_FocusedNode(This,Value)	\
    ( (This)->lpVtbl -> get_FocusedNode(This,Value) ) 

#define ISDBUITreeList_put_FocusedNode(This,Value)	\
    ( (This)->lpVtbl -> put_FocusedNode(This,Value) ) 

#define ISDBUITreeList_get_FocusedColumn(This,Value)	\
    ( (This)->lpVtbl -> get_FocusedColumn(This,Value) ) 

#define ISDBUITreeList_put_FocusedColumn(This,Value)	\
    ( (This)->lpVtbl -> put_FocusedColumn(This,Value) ) 

#define ISDBUITreeList_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define ISDBUITreeList_DeleteNode(This,Node)	\
    ( (This)->lpVtbl -> DeleteNode(This,Node) ) 

#define ISDBUITreeList_get_HeaderVisible(This,Value)	\
    ( (This)->lpVtbl -> get_HeaderVisible(This,Value) ) 

#define ISDBUITreeList_put_HeaderVisible(This,Value)	\
    ( (This)->lpVtbl -> put_HeaderVisible(This,Value) ) 

#define ISDBUITreeList_HeaderAddColumn(This,Caption)	\
    ( (This)->lpVtbl -> HeaderAddColumn(This,Caption) ) 

#define ISDBUITreeList_get_RootNodeCount(This,Value)	\
    ( (This)->lpVtbl -> get_RootNodeCount(This,Value) ) 

#define ISDBUITreeList_put_RootNodeCount(This,Value)	\
    ( (This)->lpVtbl -> put_RootNodeCount(This,Value) ) 

#define ISDBUITreeList_get_HeaderColumnWidth(This,Index,Value)	\
    ( (This)->lpVtbl -> get_HeaderColumnWidth(This,Index,Value) ) 

#define ISDBUITreeList_put_HeaderColumnWidth(This,Index,Value)	\
    ( (This)->lpVtbl -> put_HeaderColumnWidth(This,Index,Value) ) 

#define ISDBUITreeList_get_FirstNode(This,Value)	\
    ( (This)->lpVtbl -> get_FirstNode(This,Value) ) 

#define ISDBUITreeList_get_Indent(This,Value)	\
    ( (This)->lpVtbl -> get_Indent(This,Value) ) 

#define ISDBUITreeList_put_Indent(This,Value)	\
    ( (This)->lpVtbl -> put_Indent(This,Value) ) 

#define ISDBUITreeList_get_ShowTreeLines(This,Value)	\
    ( (This)->lpVtbl -> get_ShowTreeLines(This,Value) ) 

#define ISDBUITreeList_put_ShowTreeLines(This,Value)	\
    ( (This)->lpVtbl -> put_ShowTreeLines(This,Value) ) 

#define ISDBUITreeList_get_ExtendedFocus(This,Value)	\
    ( (This)->lpVtbl -> get_ExtendedFocus(This,Value) ) 

#define ISDBUITreeList_put_ExtendedFocus(This,Value)	\
    ( (This)->lpVtbl -> put_ExtendedFocus(This,Value) ) 

#define ISDBUITreeList_get_FullRowSelect(This,Value)	\
    ( (This)->lpVtbl -> get_FullRowSelect(This,Value) ) 

#define ISDBUITreeList_put_FullRowSelect(This,Value)	\
    ( (This)->lpVtbl -> put_FullRowSelect(This,Value) ) 

#define ISDBUITreeList_get_MultiSelect(This,Value)	\
    ( (This)->lpVtbl -> get_MultiSelect(This,Value) ) 

#define ISDBUITreeList_put_MultiSelect(This,Value)	\
    ( (This)->lpVtbl -> put_MultiSelect(This,Value) ) 

#define ISDBUITreeList_get_ShowRoot(This,Value)	\
    ( (This)->lpVtbl -> get_ShowRoot(This,Value) ) 

#define ISDBUITreeList_put_ShowRoot(This,Value)	\
    ( (This)->lpVtbl -> put_ShowRoot(This,Value) ) 

#define ISDBUITreeList_get_GridExtensions(This,Value)	\
    ( (This)->lpVtbl -> get_GridExtensions(This,Value) ) 

#define ISDBUITreeList_put_GridExtensions(This,Value)	\
    ( (This)->lpVtbl -> put_GridExtensions(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUITreeList_INTERFACE_DEFINED__ */


#ifndef __ISDBUITreeListEvents_DISPINTERFACE_DEFINED__
#define __ISDBUITreeListEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUITreeListEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUITreeListEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EC60F9A9-C28B-4C1B-AACF-FBF76576E88F")
    ISDBUITreeListEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITreeListEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITreeListEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITreeListEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITreeListEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITreeListEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITreeListEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITreeListEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITreeListEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUITreeListEventsVtbl;

    interface ISDBUITreeListEvents
    {
        CONST_VTBL struct ISDBUITreeListEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITreeListEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITreeListEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITreeListEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITreeListEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITreeListEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITreeListEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITreeListEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUITreeListEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBUITreeListItem_INTERFACE_DEFINED__
#define __ISDBUITreeListItem_INTERFACE_DEFINED__

/* interface ISDBUITreeListItem */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBUITreeListItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB803475-46DA-4605-906C-B2A2484B7FF7")
    ISDBUITreeListItem : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get__Self( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Expanded( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Expanded( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_HasChildren( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_HasChildren( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_TreeList( 
            /* [retval][out] */ SDBUITreeList	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Index( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UserText( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_UserText( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_UserData( 
            /* [retval][out] */ IDispatch **Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_UserData( 
            /* [in] */ IDispatch *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CheckType( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CheckType( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_CheckState( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_CheckState( 
            /* [in] */ long Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NextNode( 
            /* [retval][out] */ SDBUITreeListItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_NextSibling( 
            /* [retval][out] */ SDBUITreeListItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_FirstChild( 
            /* [retval][out] */ SDBUITreeListItem	**Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Selected( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT __stdcall put_Selected( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITreeListItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITreeListItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITreeListItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITreeListItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITreeListItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITreeListItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITreeListItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITreeListItem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get__Self )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Expanded )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Expanded )( 
            ISDBUITreeListItem * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_HasChildren )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_HasChildren )( 
            ISDBUITreeListItem * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_TreeList )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ SDBUITreeList	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Index )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UserText )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_UserText )( 
            ISDBUITreeListItem * This,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_UserData )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ IDispatch **Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_UserData )( 
            ISDBUITreeListItem * This,
            /* [in] */ IDispatch *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CheckType )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CheckType )( 
            ISDBUITreeListItem * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_CheckState )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_CheckState )( 
            ISDBUITreeListItem * This,
            /* [in] */ long Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NextNode )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ SDBUITreeListItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_NextSibling )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ SDBUITreeListItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_FirstChild )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ SDBUITreeListItem	**Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Selected )( 
            ISDBUITreeListItem * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propput] */ HRESULT ( __stdcall *put_Selected )( 
            ISDBUITreeListItem * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } ISDBUITreeListItemVtbl;

    interface ISDBUITreeListItem
    {
        CONST_VTBL struct ISDBUITreeListItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITreeListItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITreeListItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITreeListItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITreeListItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITreeListItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITreeListItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITreeListItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBUITreeListItem_get__Self(This,Value)	\
    ( (This)->lpVtbl -> get__Self(This,Value) ) 

#define ISDBUITreeListItem_get_Expanded(This,Value)	\
    ( (This)->lpVtbl -> get_Expanded(This,Value) ) 

#define ISDBUITreeListItem_put_Expanded(This,Value)	\
    ( (This)->lpVtbl -> put_Expanded(This,Value) ) 

#define ISDBUITreeListItem_get_HasChildren(This,Value)	\
    ( (This)->lpVtbl -> get_HasChildren(This,Value) ) 

#define ISDBUITreeListItem_put_HasChildren(This,Value)	\
    ( (This)->lpVtbl -> put_HasChildren(This,Value) ) 

#define ISDBUITreeListItem_get_TreeList(This,Value)	\
    ( (This)->lpVtbl -> get_TreeList(This,Value) ) 

#define ISDBUITreeListItem_get_Index(This,Value)	\
    ( (This)->lpVtbl -> get_Index(This,Value) ) 

#define ISDBUITreeListItem_get_UserText(This,Value)	\
    ( (This)->lpVtbl -> get_UserText(This,Value) ) 

#define ISDBUITreeListItem_put_UserText(This,Value)	\
    ( (This)->lpVtbl -> put_UserText(This,Value) ) 

#define ISDBUITreeListItem_get_UserData(This,Value)	\
    ( (This)->lpVtbl -> get_UserData(This,Value) ) 

#define ISDBUITreeListItem_put_UserData(This,Value)	\
    ( (This)->lpVtbl -> put_UserData(This,Value) ) 

#define ISDBUITreeListItem_get_CheckType(This,Value)	\
    ( (This)->lpVtbl -> get_CheckType(This,Value) ) 

#define ISDBUITreeListItem_put_CheckType(This,Value)	\
    ( (This)->lpVtbl -> put_CheckType(This,Value) ) 

#define ISDBUITreeListItem_get_CheckState(This,Value)	\
    ( (This)->lpVtbl -> get_CheckState(This,Value) ) 

#define ISDBUITreeListItem_put_CheckState(This,Value)	\
    ( (This)->lpVtbl -> put_CheckState(This,Value) ) 

#define ISDBUITreeListItem_get_NextNode(This,Value)	\
    ( (This)->lpVtbl -> get_NextNode(This,Value) ) 

#define ISDBUITreeListItem_get_NextSibling(This,Value)	\
    ( (This)->lpVtbl -> get_NextSibling(This,Value) ) 

#define ISDBUITreeListItem_get_FirstChild(This,Value)	\
    ( (This)->lpVtbl -> get_FirstChild(This,Value) ) 

#define ISDBUITreeListItem_get_Selected(This,Value)	\
    ( (This)->lpVtbl -> get_Selected(This,Value) ) 

#define ISDBUITreeListItem_put_Selected(This,Value)	\
    ( (This)->lpVtbl -> put_Selected(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBUITreeListItem_INTERFACE_DEFINED__ */


#ifndef __ISDBUITreeListItemEvents_DISPINTERFACE_DEFINED__
#define __ISDBUITreeListItemEvents_DISPINTERFACE_DEFINED__

/* dispinterface ISDBUITreeListItemEvents */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID DIID_ISDBUITreeListItemEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6AD02240-8A94-4D3A-9BD0-0A0C346F92B5")
    ISDBUITreeListItemEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ISDBUITreeListItemEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBUITreeListItemEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBUITreeListItemEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBUITreeListItemEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBUITreeListItemEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBUITreeListItemEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBUITreeListItemEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBUITreeListItemEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDBUITreeListItemEventsVtbl;

    interface ISDBUITreeListItemEvents
    {
        CONST_VTBL struct ISDBUITreeListItemEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBUITreeListItemEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBUITreeListItemEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBUITreeListItemEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBUITreeListItemEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBUITreeListItemEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBUITreeListItemEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBUITreeListItemEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ISDBUITreeListItemEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ISDBDownloader_INTERFACE_DEFINED__
#define __ISDBDownloader_INTERFACE_DEFINED__

/* interface ISDBDownloader */
/* [object][oleautomation][dual][helpstring][version][uuid] */ 


EXTERN_C const IID IID_ISDBDownloader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41FCE288-1F84-4770-B94F-7A3AD222DE03")
    ISDBDownloader : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall DownloadFile( 
            /* [in] */ BSTR URL,
            /* [in] */ BSTR Filename,
            /* [in] */ VARIANT_BOOL AddToLibrary) = 0;
        
        virtual /* [id] */ HRESULT __stdcall GetURLContent( 
            /* [in] */ BSTR URL,
            /* [retval][out] */ BSTR *Content) = 0;
        
        virtual /* [id] */ HRESULT __stdcall GetDownloadProgress( 
            /* [in] */ BSTR URL,
            /* [in] */ VARIANT_BOOL UsePercent,
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [id] */ HRESULT __stdcall PauseDownload( 
            /* [in] */ BSTR URL) = 0;
        
        virtual /* [id] */ HRESULT __stdcall ResumeDownload( 
            /* [in] */ BSTR URL) = 0;
        
        virtual /* [id] */ HRESULT __stdcall CancelDownload( 
            /* [in] */ BSTR URL) = 0;
        
        virtual /* [id] */ HRESULT __stdcall GetURLContentLength( 
            /* [in] */ BSTR URL,
            /* [retval][out] */ long *Length) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBDownloaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBDownloader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBDownloader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBDownloader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBDownloader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBDownloader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBDownloader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBDownloader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( __stdcall *DownloadFile )( 
            ISDBDownloader * This,
            /* [in] */ BSTR URL,
            /* [in] */ BSTR Filename,
            /* [in] */ VARIANT_BOOL AddToLibrary);
        
        /* [id] */ HRESULT ( __stdcall *GetURLContent )( 
            ISDBDownloader * This,
            /* [in] */ BSTR URL,
            /* [retval][out] */ BSTR *Content);
        
        /* [id] */ HRESULT ( __stdcall *GetDownloadProgress )( 
            ISDBDownloader * This,
            /* [in] */ BSTR URL,
            /* [in] */ VARIANT_BOOL UsePercent,
            /* [retval][out] */ long *value);
        
        /* [id] */ HRESULT ( __stdcall *PauseDownload )( 
            ISDBDownloader * This,
            /* [in] */ BSTR URL);
        
        /* [id] */ HRESULT ( __stdcall *ResumeDownload )( 
            ISDBDownloader * This,
            /* [in] */ BSTR URL);
        
        /* [id] */ HRESULT ( __stdcall *CancelDownload )( 
            ISDBDownloader * This,
            /* [in] */ BSTR URL);
        
        /* [id] */ HRESULT ( __stdcall *GetURLContentLength )( 
            ISDBDownloader * This,
            /* [in] */ BSTR URL,
            /* [retval][out] */ long *Length);
        
        END_INTERFACE
    } ISDBDownloaderVtbl;

    interface ISDBDownloader
    {
        CONST_VTBL struct ISDBDownloaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBDownloader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBDownloader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBDownloader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBDownloader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBDownloader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBDownloader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBDownloader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBDownloader_DownloadFile(This,URL,Filename,AddToLibrary)	\
    ( (This)->lpVtbl -> DownloadFile(This,URL,Filename,AddToLibrary) ) 

#define ISDBDownloader_GetURLContent(This,URL,Content)	\
    ( (This)->lpVtbl -> GetURLContent(This,URL,Content) ) 

#define ISDBDownloader_GetDownloadProgress(This,URL,UsePercent,value)	\
    ( (This)->lpVtbl -> GetDownloadProgress(This,URL,UsePercent,value) ) 

#define ISDBDownloader_PauseDownload(This,URL)	\
    ( (This)->lpVtbl -> PauseDownload(This,URL) ) 

#define ISDBDownloader_ResumeDownload(This,URL)	\
    ( (This)->lpVtbl -> ResumeDownload(This,URL) ) 

#define ISDBDownloader_CancelDownload(This,URL)	\
    ( (This)->lpVtbl -> CancelDownload(This,URL) ) 

#define ISDBDownloader_GetURLContentLength(This,URL,Length)	\
    ( (This)->lpVtbl -> GetURLContentLength(This,URL,Length) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBDownloader_INTERFACE_DEFINED__ */


#ifndef __ISDBCollection_INTERFACE_DEFINED__
#define __ISDBCollection_INTERFACE_DEFINED__

/* interface ISDBCollection */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_ISDBCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E70B8B9-EE27-4A09-821A-DD34524E6FFC")
    ISDBCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Comment( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Visible( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_ID( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Position( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Name )( 
            ISDBCollection * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Comment )( 
            ISDBCollection * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Visible )( 
            ISDBCollection * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_ID )( 
            ISDBCollection * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Position )( 
            ISDBCollection * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } ISDBCollectionVtbl;

    interface ISDBCollection
    {
        CONST_VTBL struct ISDBCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBCollection_get_Name(This,Value)	\
    ( (This)->lpVtbl -> get_Name(This,Value) ) 

#define ISDBCollection_get_Comment(This,Value)	\
    ( (This)->lpVtbl -> get_Comment(This,Value) ) 

#define ISDBCollection_get_Visible(This,Value)	\
    ( (This)->lpVtbl -> get_Visible(This,Value) ) 

#define ISDBCollection_get_ID(This,Value)	\
    ( (This)->lpVtbl -> get_ID(This,Value) ) 

#define ISDBCollection_get_Position(This,Value)	\
    ( (This)->lpVtbl -> get_Position(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBCollection_INTERFACE_DEFINED__ */


#ifndef __ISDBCollections_INTERFACE_DEFINED__
#define __ISDBCollections_INTERFACE_DEFINED__

/* interface ISDBCollections */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_ISDBCollections;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("961E91D9-7CEA-40ED-B3A7-DC15D671A282")
    ISDBCollections : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISDBCollection **Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDBCollectionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDBCollections * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDBCollections * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDBCollections * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDBCollections * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDBCollections * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDBCollections * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDBCollections * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Count )( 
            ISDBCollections * This,
            /* [retval][out] */ long *Value);
        
        /* [id][propget] */ HRESULT ( __stdcall *get_Item )( 
            ISDBCollections * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISDBCollection **Value);
        
        END_INTERFACE
    } ISDBCollectionsVtbl;

    interface ISDBCollections
    {
        CONST_VTBL struct ISDBCollectionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDBCollections_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDBCollections_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDBCollections_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDBCollections_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDBCollections_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDBCollections_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDBCollections_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDBCollections_get_Count(This,Value)	\
    ( (This)->lpVtbl -> get_Count(This,Value) ) 

#define ISDBCollections_get_Item(This,Index,Value)	\
    ( (This)->lpVtbl -> get_Item(This,Index,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDBCollections_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SDBAlbum;

#ifdef __cplusplus

class DECLSPEC_UUID("DE84FCEF-2C39-4379-AAF9-6C4A24F546F7")
SDBAlbum;
#endif

EXTERN_C const CLSID CLSID_SDBAlbums;

#ifdef __cplusplus

class DECLSPEC_UUID("5191CAFF-A745-4FE5-A192-767CF809823D")
SDBAlbums;
#endif

EXTERN_C const CLSID CLSID_SDBArtist;

#ifdef __cplusplus

class DECLSPEC_UUID("678D2B8C-D4FA-4087-97E2-9E6CAA10322F")
SDBArtist;
#endif

EXTERN_C const CLSID CLSID_SDBArtists;

#ifdef __cplusplus

class DECLSPEC_UUID("D3823CB6-635D-40B9-8744-E6621A13815A")
SDBArtists;
#endif

EXTERN_C const CLSID CLSID_SDBCommonDialog;

#ifdef __cplusplus

class DECLSPEC_UUID("BEB50AAC-4796-44DC-ABCE-A017CC85489E")
SDBCommonDialog;
#endif

EXTERN_C const CLSID CLSID_SDBDatabase;

#ifdef __cplusplus

class DECLSPEC_UUID("5997EFC2-503C-4D8A-89F4-DD17393F07A6")
SDBDatabase;
#endif

EXTERN_C const CLSID CLSID_SDBIniFile;

#ifdef __cplusplus

class DECLSPEC_UUID("3981ED1A-D706-4A7F-9A58-3A8EAB9BCA33")
SDBIniFile;
#endif

EXTERN_C const CLSID CLSID_SDBMedia;

#ifdef __cplusplus

class DECLSPEC_UUID("25FBF537-7850-48E4-90A0-8519EBA1A053")
SDBMedia;
#endif

EXTERN_C const CLSID CLSID_SDBPlayer;

#ifdef __cplusplus

class DECLSPEC_UUID("9DD8C561-427F-4DAB-B388-1C0837DB0FBD")
SDBPlayer;
#endif

EXTERN_C const CLSID CLSID_SDBProgress;

#ifdef __cplusplus

class DECLSPEC_UUID("FC025122-8B9D-4C8A-BB21-5305526BD3F6")
SDBProgress;
#endif

EXTERN_C const CLSID CLSID_SDBSongData;

#ifdef __cplusplus

class DECLSPEC_UUID("6BFDE5D2-6CC2-4F56-B5E7-D77E2BDBDFC1")
SDBSongData;
#endif

EXTERN_C const CLSID CLSID_SDBSongIterator;

#ifdef __cplusplus

class DECLSPEC_UUID("E3023C76-065D-4882-80CC-86D6C585EF90")
SDBSongIterator;
#endif

EXTERN_C const CLSID CLSID_SDBSongList;

#ifdef __cplusplus

class DECLSPEC_UUID("6D1A5B5D-E66B-41B5-8990-D876C697363C")
SDBSongList;
#endif

EXTERN_C const CLSID CLSID_SDBScriptControl;

#ifdef __cplusplus

class DECLSPEC_UUID("B49EB7C9-4F81-496F-8FDC-1CE6FBA6EB04")
SDBScriptControl;
#endif

EXTERN_C const CLSID CLSID_SDBDropTarget;

#ifdef __cplusplus

class DECLSPEC_UUID("AB97EDE4-091B-405F-83E6-9A31AD18EDAF")
SDBDropTarget;
#endif

EXTERN_C const CLSID CLSID_SDBDropTargetNext;

#ifdef __cplusplus

class DECLSPEC_UUID("14D51F54-D86B-4925-9BF6-5F582AF76FAA")
SDBDropTargetNext;
#endif

EXTERN_C const CLSID CLSID_SDBDropTargetLast;

#ifdef __cplusplus

class DECLSPEC_UUID("59924C9D-ED53-42AC-A2BA-1A5CA42D412D")
SDBDropTargetLast;
#endif

EXTERN_C const CLSID CLSID_SDBPlaylist;

#ifdef __cplusplus

class DECLSPEC_UUID("EDAAD31C-FEBC-4C21-BA3D-89388C6619CC")
SDBPlaylist;
#endif

EXTERN_C const CLSID CLSID_SDBPlaylists;

#ifdef __cplusplus

class DECLSPEC_UUID("0632ED14-116D-4CB4-B5E6-2945C4193D81")
SDBPlaylists;
#endif

EXTERN_C const CLSID CLSID_SDBTree;

#ifdef __cplusplus

class DECLSPEC_UUID("553EDFDA-388A-475E-A5C1-2E80B96DE6F9")
SDBTree;
#endif

EXTERN_C const CLSID CLSID_SDBTracksWindow;

#ifdef __cplusplus

class DECLSPEC_UUID("E6C73E13-7546-4A75-A53D-A97EDA76C941")
SDBTracksWindow;
#endif

EXTERN_C const CLSID CLSID_SDBDBIterator;

#ifdef __cplusplus

class DECLSPEC_UUID("9F1E992A-F117-4CB0-B077-7F050F8DF8E2")
SDBDBIterator;
#endif

EXTERN_C const CLSID CLSID_SDBUIForm;

#ifdef __cplusplus

class DECLSPEC_UUID("1967A0F0-B926-47B5-876E-F548BD2C96BC")
SDBUIForm;
#endif

EXTERN_C const CLSID CLSID_SDBUI;

#ifdef __cplusplus

class DECLSPEC_UUID("592BF4D1-7ACF-4177-B56C-3EDC680ABF14")
SDBUI;
#endif

EXTERN_C const CLSID CLSID_SDBUIButton;

#ifdef __cplusplus

class DECLSPEC_UUID("47688C41-46E0-4879-9CD6-5585DD41055A")
SDBUIButton;
#endif

EXTERN_C const CLSID CLSID_SDBUIEdit;

#ifdef __cplusplus

class DECLSPEC_UUID("80735E54-75C7-4E7F-9780-CA7774D6ABDB")
SDBUIEdit;
#endif

EXTERN_C const CLSID CLSID_SDBUIPanel;

#ifdef __cplusplus

class DECLSPEC_UUID("242AB4BE-7BC9-4148-9CB2-56894E0709E1")
SDBUIPanel;
#endif

EXTERN_C const CLSID CLSID_SDBUICheckBox;

#ifdef __cplusplus

class DECLSPEC_UUID("732E6889-F75C-4A07-8BA7-4F5414775FA4")
SDBUICheckBox;
#endif

EXTERN_C const CLSID CLSID_SDBUITranspPanel;

#ifdef __cplusplus

class DECLSPEC_UUID("A60D63C8-A653-4726-BED7-2FB0F7ACEE4B")
SDBUITranspPanel;
#endif

EXTERN_C const CLSID CLSID_SDBUILabel;

#ifdef __cplusplus

class DECLSPEC_UUID("1339436D-4ECE-40B7-B861-26F7024181B2")
SDBUILabel;
#endif

EXTERN_C const CLSID CLSID_SDBUIActiveX;

#ifdef __cplusplus

class DECLSPEC_UUID("DCAAEA6B-7A67-4F4D-93A5-23E565A8AE94")
SDBUIActiveX;
#endif

EXTERN_C const CLSID CLSID_SDBRegistry;

#ifdef __cplusplus

class DECLSPEC_UUID("B8F819B6-7CF1-4C92-90C7-B3BD45BCAA8D")
SDBRegistry;
#endif

EXTERN_C const CLSID CLSID_SDBUIDropDown;

#ifdef __cplusplus

class DECLSPEC_UUID("4F520AC5-5916-47EF-B229-612D73B6F543")
SDBUIDropDown;
#endif

EXTERN_C const CLSID CLSID_SDBMenuItem;

#ifdef __cplusplus

class DECLSPEC_UUID("92C40377-A07B-48E8-81AC-6ADCA700C536")
SDBMenuItem;
#endif

EXTERN_C const CLSID CLSID_SDBDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("1036EE86-E7FA-4188-8A8C-C8538DFEE8B8")
SDBDevice;
#endif

EXTERN_C const CLSID CLSID_SDBTreeNode;

#ifdef __cplusplus

class DECLSPEC_UUID("32EAD83F-AEEC-4F15-ABF6-C97186DD4EEE")
SDBTreeNode;
#endif

EXTERN_C const CLSID CLSID_SDBUIRadioButton;

#ifdef __cplusplus

class DECLSPEC_UUID("C259899B-D2B9-4F73-8E14-57EC3381BB05")
SDBUIRadioButton;
#endif

EXTERN_C const CLSID CLSID_SDBDeviceList;

#ifdef __cplusplus

class DECLSPEC_UUID("CF173AC2-17D1-45DE-9771-0B69EAB906A0")
SDBDeviceList;
#endif

EXTERN_C const CLSID CLSID_SDBTools;

#ifdef __cplusplus

class DECLSPEC_UUID("41FC2986-BA3B-4827-A9D8-6E6B406BD808")
SDBTools;
#endif

EXTERN_C const CLSID CLSID_SDBUISpinEdit;

#ifdef __cplusplus

class DECLSPEC_UUID("259C512B-A4A2-4BB1-A0A4-BE2997F3C0B0")
SDBUISpinEdit;
#endif

EXTERN_C const CLSID CLSID_SDBApplication;

#ifdef __cplusplus

class DECLSPEC_UUID("148F7BB6-4943-4C53-8E30-0F9115D30283")
SDBApplication;
#endif

EXTERN_C const CLSID CLSID_SDBFileSystem;

#ifdef __cplusplus

class DECLSPEC_UUID("8F9F89DF-2252-4D71-9CA5-E3CD15DC7073")
SDBFileSystem;
#endif

EXTERN_C const CLSID CLSID_SDBTextFile;

#ifdef __cplusplus

class DECLSPEC_UUID("64C870C4-35CA-4EC3-B548-DE48C1398E14")
SDBTextFile;
#endif

EXTERN_C const CLSID CLSID_SDBTrackSynchStatus;

#ifdef __cplusplus

class DECLSPEC_UUID("45A75B30-FEB8-48D3-B215-7E70602B47D8")
SDBTrackSynchStatus;
#endif

EXTERN_C const CLSID CLSID_SDBAlbumArtList;

#ifdef __cplusplus

class DECLSPEC_UUID("CBD2D647-2951-4B6B-9E4F-9F86460DFD5E")
SDBAlbumArtList;
#endif

EXTERN_C const CLSID CLSID_SDBAlbumArtItem;

#ifdef __cplusplus

class DECLSPEC_UUID("271724C3-5F42-49FE-988D-B47D695B3BDA")
SDBAlbumArtItem;
#endif

EXTERN_C const CLSID CLSID_SDBImage;

#ifdef __cplusplus

class DECLSPEC_UUID("17C64717-EFE8-44BA-AB8F-DCD34524DD31")
SDBImage;
#endif

EXTERN_C const CLSID CLSID_SDBHWEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("0BA2D9E2-D4C8-45B2-8F5B-B3ADE5E461E6")
SDBHWEvents;
#endif

EXTERN_C const CLSID CLSID_SDBDropTargetRip;

#ifdef __cplusplus

class DECLSPEC_UUID("7903D765-DA8C-4CB9-ADF2-F88D82E6BFFE")
SDBDropTargetRip;
#endif

EXTERN_C const CLSID CLSID_SDBUITrackBar;

#ifdef __cplusplus

class DECLSPEC_UUID("30BC8FC9-2E92-4134-B1A6-E376535D1415")
SDBUITrackBar;
#endif

EXTERN_C const CLSID CLSID_SDBUIDockablePanel;

#ifdef __cplusplus

class DECLSPEC_UUID("778382D4-A8EF-4740-9FA9-F99C06664A3E")
SDBUIDockablePanel;
#endif

EXTERN_C const CLSID CLSID_SDBTimer;

#ifdef __cplusplus

class DECLSPEC_UUID("6B9AC9EF-BCAF-457F-A843-4987C87413C9")
SDBTimer;
#endif

EXTERN_C const CLSID CLSID_SDBUICommon;

#ifdef __cplusplus

class DECLSPEC_UUID("70488D17-1533-4FCC-A234-9320DB980E5E")
SDBUICommon;
#endif

EXTERN_C const CLSID CLSID_SDBStringList;

#ifdef __cplusplus

class DECLSPEC_UUID("11340F80-9B0E-4072-B2CB-2629379A956F")
SDBStringList;
#endif

EXTERN_C const CLSID CLSID_SDBWebSearch;

#ifdef __cplusplus

class DECLSPEC_UUID("BBCE8437-9449-4FF0-8D31-506ED45363E2")
SDBWebSearch;
#endif

EXTERN_C const CLSID CLSID_SDBUIGroupBox;

#ifdef __cplusplus

class DECLSPEC_UUID("366C9FB5-81D3-444B-AE20-4356693D55C4")
SDBUIGroupBox;
#endif

EXTERN_C const CLSID CLSID_SDBUIMultiLineEdit;

#ifdef __cplusplus

class DECLSPEC_UUID("EFEFBCE7-9D03-4306-91AA-783BB2308CE6")
SDBUIMultiLineEdit;
#endif

EXTERN_C const CLSID CLSID_SDBUIMaskEdit;

#ifdef __cplusplus

class DECLSPEC_UUID("7691E2DA-B335-4A3E-9938-D089B6343B4B")
SDBUIMaskEdit;
#endif

EXTERN_C const CLSID CLSID_SDBUIListBox;

#ifdef __cplusplus

class DECLSPEC_UUID("95559831-7883-44C1-B160-C1A42A898325")
SDBUIListBox;
#endif

EXTERN_C const CLSID CLSID_SDBUITreeList;

#ifdef __cplusplus

class DECLSPEC_UUID("813E800A-D84E-46A7-A546-8F9E90C1D23D")
SDBUITreeList;
#endif

EXTERN_C const CLSID CLSID_SDBUITreeListItem;

#ifdef __cplusplus

class DECLSPEC_UUID("BE584DA2-FDDC-44B4-882F-3F0F901158D5")
SDBUITreeListItem;
#endif

EXTERN_C const CLSID CLSID_SDBDownloader;

#ifdef __cplusplus

class DECLSPEC_UUID("7907307C-05F4-4FDF-B853-955D137EFB79")
SDBDownloader;
#endif

EXTERN_C const CLSID CLSID_SDBCollections;

#ifdef __cplusplus

class DECLSPEC_UUID("A53C6461-C3C4-4F6A-BAF2-08F9D566CABE")
SDBCollections;
#endif

EXTERN_C const CLSID CLSID_SDBCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("E3C887F3-186F-4A4F-AF26-7D2AC51F6063")
SDBCollection;
#endif
#endif /* __SongsDB_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


