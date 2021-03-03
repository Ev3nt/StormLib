#ifndef STORM_INCLUDED
#define STORM_INCLUDED

#if defined(_MSC_VER) && _MSC_VER > 1000
#pragma once
#endif

#include <stddef.h>

#ifdef _WIN32
#include <windows.h>
#else
typedef int BOOL;
typedef unsigned long DWORD;
typedef void* HANDLE;
typedef unsigned long LCID;
typedef long LONG;
#endif

#ifdef __cplusplus
extern "C"
{
#endif

	BOOL   CALLBACK NetInit();
	BOOL   CALLBACK SNetCreateGame(char* Source, char* a2, char* a3, int a4, int a5, int a6, char* a7, char* a8, int* playerid);
	BOOL   __cdecl   SNetDestroy();
	BOOL   CALLBACK SNetEnumProviders(int mincaps, int(CALLBACK* callback)(DWORD*, DWORD*, DWORD*, DWORD*));
	BOOL   CALLBACK SNetEnumDevices(int(CALLBACK* callback)(DWORD*, DWORD*, DWORD*));
	BOOL   CALLBACK SNetEnumGames(int(CALLBACK* callback)(DWORD*, DWORD*, DWORD*), int* hintnextcall);
	BOOL   CALLBACK SNetDropPlayer(int playerid, int flags);
	BOOL   CALLBACK SNetGetGameInfo(int type, void* src, unsigned int length, int* byteswritten);
	BOOL   CALLBACK SNetGetNetworkLatency(int measurementtype, int* result);
	BOOL   CALLBACK SNetGetNumPlayers(int* firstplayerid, int* lastplayerid, int* activeplayers);
	BOOL   CALLBACK SNetGetOwnerTurnsWaiting(int* turns);
	BOOL   CALLBACK SNetGetPerformanceData(int counterid, int* countervalue, int* countertype, int* counterscale, LPFILETIME* measurementtime, int* measurementfreq);
	BOOL   CALLBACK SNetGetPlayerCaps(char a1, int* caps);
	BOOL   CALLBACK SNetGetPlayerName(int playerid, char* buffer, size_t buffersize);
	BOOL   CALLBACK SNetGetProviderCaps(void* caps);
	BOOL   CALLBACK SNetGetTurnsInTransit(int* turns);
	BOOL   CALLBACK SNetInitializeDevice(int a1, int a2, int a3, int a4, int a5);
	BOOL   CALLBACK SNetInitializeProvider(DWORD providerName, int a2, int a3, int a4, DWORD ThreadID);
	BOOL   CALLBACK SNetJoinGame(int a1, char* a2, char* a3, char* playerName, char* a5, int* playerid);
	BOOL   CALLBACK SNetLeaveGame(int type);
	BOOL   CALLBACK SNetPerformUpgrade(DWORD* upgradestatus);
	BOOL   CALLBACK SNetReceiveMessage(int* senderplayerid, int* data, int* databytes);
	BOOL   CALLBACK SNetReceiveTurns(unsigned int a1, int arraysize, void* arraydata, void* arraydatabytes, void* arrayplayerstatus);
	HANDLE CALLBACK SNetRegisterEventHandler(int event, int size);
	BOOL   __cdecl   SNetResetLatencyMeasurements();
	int    CALLBACK SNetSelectGame(int a1, int a2, int a3, int a4, int a5, int* playerid);
	BOOL   CALLBACK SNetSelectProvider(LPARAM lparam, int a2, int a3, int a4, int a5, int* providerid);
	BOOL   CALLBACK SNetSendMessage(signed int playerID, void* data, int databytes);
	BOOL   CALLBACK SNetSendTurn(void* data, int databytes);
	BOOL   CALLBACK SNetSetBasePlayer(int a1);
	BOOL   CALLBACK SNetSetGameMode(int a1);
	int    CALLBACK SNetUnregisterEventHandler(int a1, int callback);

	BOOL CALLBACK SNetEnumGamesEx(int a1, int a2, int(__fastcall* callback)(DWORD*, DWORD*, DWORD*), int* hintnextcall);
	int	 CALLBACK SNetSendServerChatCommand(char* command);
	BOOL CALLBACK SNet135(signed int a1, int a2, int a3);
	BOOL CALLBACK SNet136(int a1, int a2, int a3);
	BOOL CALLBACK SNet137(int a1);
	BOOL CALLBACK SNetCreateLadderGame(int a1, int a2, int a3, int a4, int a5, int a6, const void* MemSrc, int MemSize, int a9, char* playerName, int a11, int a12);
	BOOL CALLBACK SNetReportGameResult(unsigned int a1, int size, int a3, int a4, int a5);
	BOOL CALLBACK SNetCheckDataFile(int a1, int a2, int a3, int a4);
	int	 CALLBACK SNetSendLeagueCommand(char* cmd, int a2);
	int	 CALLBACK SNetSendReplayPath(int a1, int a2, char* replayPath);
	int	 CALLBACK SNet143(int a1);
	BOOL CALLBACK SNet144(int a1);
	int	 CALLBACK SNetLeagueLogout(char* bnetName);
	int	 CALLBACK SNet146(int* curPlayerID, size_t nameSize);

	BOOL	CALLBACK SDlgInit();
	HDC     CALLBACK SDlgBeginPaint(HWND window, LPPAINTSTRUCT ps);
	int     CALLBACK SDlgBltToWindowI(HWND window, HRGN hrgnSrc2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
	BOOL    __cdecl   SDlgCheckTimers();
	int     CALLBACK SDlgCreateDialogIndirectParam(HMODULE hModule, LPCSTR lpName, HWND hWndParent, LPVOID lpParam);
	int     CALLBACK SDlgCreateDialogParam(int a1, int a2, HWND hWndParent, LPVOID lpParam);
	HGDIOBJ CALLBACK SDlgDefDialogProc(HWND hDlg, signed int DlgType, HDC textLabel, HWND hWnd);
	void	CALLBACK SDlgDestroy();
	int     CALLBACK SDlgDialogBoxIndirectParam(int a1, int a2, HWND hWndParent, LPVOID lpParam, LPARAM lParam);
	int     CALLBACK SDlgDialogBoxParam(HMODULE hModule, LPCSTR lpName, HWND hWndParent, LPVOID lpParam, LPARAM lParam);
	int     CALLBACK SDlgDrawBitmap(HWND window, HGDIOBJ a2, HRGN hrgnSrc2, int a4, int a5, int a6, int a7);
	BOOL    CALLBACK SDlgEndDialog(HWND hDlg, HANDLE nResult);
	BOOL    CALLBACK SDlgEndPaint(HWND hWnd, PAINTSTRUCT* lpPaint);
	int     CALLBACK SDlgKillTimer(int a1, int a2);
	int     CALLBACK SDlgSetBaseFont(int a1, int a2, int a3, int a4, char* Source);
	int     CALLBACK SDlgSetBitmapI(int a1, int a2, char* Str2, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
	int     CALLBACK SDlgSetControlBitmaps(HWND parentwindow, int a2, int a3, int a4, int a5, int arg14, int a7);
	int     CALLBACK SDlgSetCursor(HWND hWnd, LONG dwNewLong, int a3, int a4);
	int     CALLBACK SDlgSetSystemCursor(int a1, int a2, int a3, signed int a4);
	int     CALLBACK SDlgSetTimer(int a1, int a2, int a3, int a4);
	int     __cdecl   SDlgUpdateCursor();
	int     CALLBACK SDlgBltToWindowE(HWND hWnd, HRGN a2, char* a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
	int     CALLBACK SDlgSetBitmapE(int a1, int a2, char* src, int a4, int a5, int a6, int a7, signed int a8, int a9, signed int a10);
	char* CALLBACK SDlgSetLocale(int a1, const char* a2);
	int     CALLBACK Ordinal224(int a1);

	BOOL	CALLBACK SFileInit();
	int     CALLBACK SFileAuthenticateArchive(HANDLE hArchive, int a2);
	BOOL    CALLBACK SFileCloseArchive(HANDLE hArchive);
	BOOL    CALLBACK SFileCloseFile(HANDLE hFile);
	int     CALLBACK SFileDdaBegin(HANDLE hFile, int a2, int a3);
	int     CALLBACK SFileDdaBeginEx(HANDLE hFile, signed int a2, unsigned int a3, unsigned __int32 lDistanceToMove, signed int a5, signed int a6, int a7);
	BOOL    __cdecl   SFileDdaDestroy();
	BOOL    CALLBACK SFileDdaEnd(HANDLE directsound);
	BOOL    CALLBACK SFileDdaGetPos(int a1, int a2, int a3);
	BOOL    CALLBACK SFileDdaGetVolume(int a1, int a2, int a3);
	BOOL    CALLBACK SFileDdaInitialize(HANDLE directsound);
	BOOL    CALLBACK SFileDdaSetVolume(HANDLE directsound, signed int bigvolume, signed int volume);
	BOOL    __cdecl   SFileDestroy();
	BOOL    CALLBACK SFileEnableDirectAccess(HANDLE hFile);
	BOOL    CALLBACK SFileGetFileArchive(HANDLE hFile, HANDLE archive);
	LONG    CALLBACK SFileGetFileSize(HANDLE hFile, DWORD* lpFileSizeHigh);
	BOOL    CALLBACK SFileOpenArchive(const char* archivename, DWORD dwPriority, DWORD dwFlags, HANDLE* handle);
	BOOL    CALLBACK SFileOpenFile(const char* filename, HANDLE* handle);
	BOOL    CALLBACK SFileOpenFileEx(HANDLE handle, const char* filename, char mode, HANDLE* result);
	BOOL    CALLBACK SFileReadFile(HANDLE hFile, const char* buffer, DWORD nNumberOfBytesToRead, int* read, LONG lpDistanceToMoveHigh);
	BOOL    CALLBACK SFileSetBasePath(const char* path);
	LONG    CALLBACK SFileSetFilePointer(HANDLE hFile, LONG filePos, LONG* filePosHigh, DWORD dwMethod);
	LCID    CALLBACK SFileSetLocale(LCID lcLocale);
	BOOL    CALLBACK SFileGetBasePath(const char* result, int maxSize);
	BOOL    CALLBACK SFileSetIoErrorMode(int a1, int a2);
	BOOL    CALLBACK SFileGetArchiveName(HANDLE hArchive, const char* name, int length);
	BOOL    CALLBACK SFileGetFileName(HANDLE hFile, const char* buffer, int length);
	int     CALLBACK SFileGetArchiveInfo(int a1, int a2, int a3);
	char    CALLBACK SFileSetPlatform(char a1);
	int     CALLBACK SFileLoadFile(LPCSTR lpFileName, LPVOID lpBuffer, size_t* pSize, size_t extraSizeToAlocate, LPOVERLAPPED lpOverlapped);
	BOOL    CALLBACK SFileUnloadFile(void* buffer);
	BOOL    CALLBACK SFileLoadFileEx(HANDLE hArchive, const char* filename, LPVOID lpBuffer, size_t* pSize, size_t extraSizeToAlocate, DWORD searchScope, struct _OVERLAPPED* lpOverlapped);
	void    CALLBACK SFilePrioritizeRequest(int a1, int a2);
	void    CALLBACK SFileCancelRequest(int a1);
	int     CALLBACK SFileSetAsyncBudget(int a1);
	void    CALLBACK SFileSetDataChunkSize(int a1);
	BOOL	CALLBACK SFileOpenFileAsArchive(DWORD a0, LPCSTR lpArchiveName, DWORD dwPriority, DWORD dwFlags, HANDLE* hMpq);
	LCID    __cdecl   SFileGetLocale();
	BOOL    __cdecl   StormDestroy();
	HMODULE __cdecl   StormGetInstance();
	BOOL    CALLBACK StormGetOption(int type, int optval, size_t optlen);
	BOOL    CALLBACK StormSetOption(int type, int optval, size_t optlen);

	BOOL CALLBACK SBltDestroy();
	BOOL CALLBACK SBltGetSCode(unsigned int a1, char* buffer, size_t buffersize, int a4);
	BOOL CALLBACK SBltROP3(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
	BOOL CALLBACK SBltROP3Clipped(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
	BOOL CALLBACK SBltROP3Tiled(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);

	BOOL   CALLBACK SBmpInit();
	BOOL   CALLBACK SBmpDecodeImage(int a1, signed int* a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9);
	BOOL   CALLBACK SBmpDestroy();
	BOOL   CALLBACK SBmpLoadImage(const char* fileName, int a2, int a3, int a4, int a5, int a6, int a7);
	BOOL   CALLBACK SBmpSaveImage(const char* fileName, unsigned __int16 width, unsigned __int16 height, int paletteentries, int bitdepth, int bitmapbits);
	HANDLE CALLBACK SBmpAllocLoadImage(const char* fileName, int a2, int a3, int a4, int a5, int a6, int a7, int(CALLBACK* a8)(DWORD*));
	BOOL   CALLBACK SBmpSaveImageEx(const char* filename, unsigned __int16 width, unsigned __int16 height, int paletteentries, int bitdepth, int bitmapbits, int reserved);

	BOOL CALLBACK SCodeInit();
	BOOL CALLBACK SCodeCompile(char* directives1, char* directives2, int a3, unsigned int a4, unsigned int flags, char* src);
	BOOL CALLBACK SCodeDelete(int handle);
	BOOL CALLBACK SCodeDestroy();
	int  __cdecl   SCodeExecute(int a1, int a2);
	BOOL CALLBACK SCodeGetPseudocode(int scodestring, int buffer, size_t buffersize);

	BOOL CALLBACK SDrawInit();
	BOOL CALLBACK SDrawAutoInitialize(HINSTANCE hWnd, LPCSTR lpClassName, LPCSTR lpWindowName, int(CALLBACK* a4)(HWND, UINT, WPARAM, LPARAM), signed int a5, int nWidth, int nHeight, int a8);
	BOOL CALLBACK SDrawCaptureScreen(char* source);
	BOOL CALLBACK SDrawClearSurface(int surfacenumber);
	BOOL __cdecl   SDrawDestroy();
	BOOL __cdecl   SDrawFlipPage();
	HWND CALLBACK SDrawGetFrameWindow(int sdraw_framewindow);
	BOOL CALLBACK SDrawGetObjects(int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, int obj7);
	BOOL CALLBACK SDrawGetScreenSize(int width, int height, int depth);
	BOOL CALLBACK SDrawGetServiceLevel(int a1);
	BOOL CALLBACK SDrawLockSurface(int surfacenumber, RECT* lpDestRect, void** lplpSurface, int* lpPitch, int arg_unused);
	BOOL CALLBACK SDrawManualInitialize(HWND a1, int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, void* obj7);
	int  CALLBACK SDrawMessageBox(LPCSTR lpText, LPCSTR lpCaption, UINT uType);
	BOOL __cdecl   SDrawPostClose();
	BOOL __cdecl   SDrawRealizePalette();
	int  CALLBACK SDrawSelectGdiSurface(unsigned int a1, int a2);
	BOOL CALLBACK SDrawUnlockSurface(int surfacenumber, void* lpSurface, int zero1, int zero2);
	BOOL CALLBACK SDrawUpdatePalette(unsigned int firstentry, unsigned int numentries, PALETTEENTRY* pPalEntries, int a4);
	BOOL CALLBACK SDrawUpdateScreen(int a1);
	int  __cdecl   SDrawWaitForVerticalBlank();

	BOOL CALLBACK SEvtDispatch(DWORD messageID, int a2, int a3, int a4);
	BOOL CALLBACK SEvtRegisterHandler(DWORD messageID, unsigned int a2, int event, int a4, int a5);
	BOOL CALLBACK SEvtUnregisterHandler(DWORD messageID, int a2, int a3, int a4);
	BOOL CALLBACK SEvtUnregisterType(DWORD messageID, int a2);
	BOOL CALLBACK SEvtPopState(DWORD messageID, int type);
	BOOL CALLBACK SEvtPushState(DWORD messageID, int type);
	BOOL CALLBACK SEvtBreakHandlerChain(int a1);

	BOOL CALLBACK SGdiInit();
	BOOL CALLBACK SGdiBitBlt(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, unsigned int a8, signed int a9);
	BOOL CALLBACK SGdiCreateFont(const void* handle, int bits, int width, int height, int filecharwidth, int filecharheight, const void* charsizetable, int a8);
	BOOL CALLBACK SGdiDeleteObject(int a1);
	BOOL __cdecl  SGdiDestroy();
	BOOL CALLBACK SGdiExtTextOut(int a1, int a2, int a3, int a4, unsigned int a8, signed int a6, signed int a7, const char* arg1C, unsigned int arg20);
	BOOL CALLBACK SGdiImportFont(HGDIOBJ handle, int windowsfont);
	BOOL CALLBACK SGdiLoadFont(char* Str, int a5, int a6, int argC, int a7, int a8);
	BOOL CALLBACK SGdiRectangle(int a1, int a2, int a3, int a4, int a5, int a6);
	BOOL CALLBACK SGdiSelectObject(int a1);
	BOOL CALLBACK SGdiSetPitch(int pitch);
	BOOL CALLBACK SGdiTextOut(int a1, int a2, int a3, unsigned int a8, const char* arg1C, unsigned int arg20);
	BOOL CALLBACK SGdi392(int, int, int, int);
	BOOL CALLBACK Ordinal393(int, int, int);

	BOOL  CALLBACK SMemInit();
	void* CALLBACK SMemAlloc(int amount, char* logfilename, int logline, int defaultValue);
	BOOL  __cdecl   SMemDestroy();
	BOOL  CALLBACK SMemFree(void* location, char* logfilename, int logline, int defaultValue);
	int   CALLBACK SMemGetSize(void* location, char* logfilename, int logline);
	void* CALLBACK SMemReAlloc(void* location, int amount, char* logfilename, int logline, int defaultValue);

	BOOL   CALLBACK SMsgDispatchMessage(HWND hWnd, DWORD messageID, WPARAM wParam, LPARAM lParam, int a5, int a6);
	WPARAM CALLBACK SMsgDoMessageLoop(void* callback, int followWithStormDestroy);
	BOOL   CALLBACK SMsgRegisterCommand(int a1, int a2, int a3);
	BOOL   CALLBACK SMsgRegisterKeyDown(int a1, int a2, int a3);
	BOOL   CALLBACK SMsgRegisterKeyUp(int a1, int a2, int a3);
	BOOL   CALLBACK SMsgRegisterMessage(int a1, int a2, int a3);
	BOOL   CALLBACK SMsgPopRegisterState(int type);
	BOOL   CALLBACK SMsgPushRegisterState(int type);
	BOOL   CALLBACK SMsg420(int a1, int a2, int a3);
	BOOL   CALLBACK SRegLoadData(char* keyname, char* valuename, HKEY phkResult, LPBYTE lpData, int a5, DWORD* lpcbData);
	BOOL   CALLBACK SRegLoadString(char* keyname, char* valuename, int a3, char* buffer, size_t buffersize);
	BOOL   CALLBACK SRegLoadValue(char* keyname, char* valuename, int a3, int value);
	BOOL   CALLBACK SRegSaveData(char* keyname, char* valuename, BYTE flags, BYTE* lpData, DWORD cbData);
	BOOL   CALLBACK SRegSaveString(char* keyname, char* valuename, BYTE flags, char* string);
	BOOL   CALLBACK SRegSaveValue(char* keyname, char* valuename, BYTE flags, DWORD result);
	BOOL   CALLBACK SRegGetBaseKey(char flags, char* buffer, size_t bufferchars);
	BOOL   CALLBACK SReg428(char* keyname, char* valuename, HKEY phkResult);
	BOOL   CALLBACK SReg429(char* keyname, DWORD dwflags, DWORD dwIndex, char*, size_t);
	BOOL   CALLBACK SReg430(char* keyname, int, DWORD cSubKeys);
	BOOL   CALLBACK STransBlt(int a1, int a2, int a3, int a4, int a5);
	BOOL   CALLBACK STransBltUsingMask(int a1, int a2, int a3, int a4, int a5);
	BOOL   CALLBACK STransCreateI(int a1, int a2, int a3, signed int a4, int a5, int a6, int a7);
	BOOL   CALLBACK STransDelete(int a1);
	BOOL   CALLBACK STransDestroy();
	BOOL   CALLBACK STransDuplicate(int handle, int source);
	BOOL   CALLBACK STransIntersectDirtyArray(int handle, int dirtyarraymask, unsigned __int8 dirtyarray, int sourcemask);
	BOOL   CALLBACK STransInvertMask(int handle, int sourcemask);
	BOOL   CALLBACK STransLoadI(char* filename, int a5, int a6, int handle);
	BOOL   CALLBACK STransSetDirtyArrayInfo(signed int depth, int depth2, int height, int width);
	BOOL   CALLBACK STransUpdateDirtyArray(int a1, char a2, int a3, int a4, int a5, int a6);
	BOOL   CALLBACK STrans442(int, int, int, char*, size_t);
	BOOL   CALLBACK STransCombineMasks(int, int, int, int, int, int);
	BOOL   CALLBACK STransCreateE(int, int, int, int, int, int, int);
	BOOL   CALLBACK STrans446(int, int, int, int, int, int, int);
	BOOL   CALLBACK STransLoadE(char* filename, int, int, int handle);

	BOOL  CALLBACK SVidInit();
	BOOL  __cdecl   SVidDestroy();
	BOOL  CALLBACK SVidGetSize(int video, int a2, int a3, int a4);
	BOOL  CALLBACK SVidInitialize(int arg0);
	BOOL  CALLBACK SVidPlayBegin(char* filename, int arg4, int a3, int a4, int a5, int a6, int a7);
	BOOL  CALLBACK SVidPlayBeginFromMemory(void* destbuffer, int destsize, int arg4, int a3, int a4, int a6, int sourcebytes, int sourceptr);
	BOOL  __cdecl   SVidPlayContinue();
	BOOL  CALLBACK SVidPlayContinueSingle(int video, int a2, int a3);
	BOOL  CALLBACK SVidPlayEnd(int video);
	BOOL  CALLBACK SVidSetVolume(int video, int a2, int a3, int type);
	BOOL  CALLBACK SErrInit();
	int   CALLBACK SErrDisplayError(DWORD dwMessageId, char* logfile, int logline, char a3, int a4, UINT uExitCode);
	int   CALLBACK SErrGetErrorStr(DWORD dwMessageId, char* buffer, size_t bufferchars);
	DWORD __cdecl   SErrGetLastError();
	BOOL  CALLBACK SErrRegisterMessageSource(__int16 a1, int a2, int a3);
	void  CALLBACK SErrSetLastError(DWORD dwErrCode);
	int   CALLBACK SErrReportNamedResourceLeak(char* resourceName, int);
	int   CALLBACK SErrReportResourceLeak(char* resourceName);
	BOOL  CALLBACK SErrSuppressErrors(BOOL suppressErrors);
	int   CALLBACK SErrRegisterHandler(int);
	void  CALLBACK SErr470(int);

	BOOL CALLBACK SCmdGetBool(int a1);
	int  CALLBACK SCmdGetNum(int a1);
	BOOL CALLBACK SCmdGetString(int a1, char* dest, size_t size);
	BOOL CALLBACK SCmdProcess(const char** string, int a2, int a3, int a4);
	BOOL CALLBACK SCmdRegisterArgList(int, int);
	BOOL CALLBACK SCmdRegisterArgument(int a1, int a2, char* str, int a4, int a5, int a6, int a7, int a8);
	int  CALLBACK SCmd478(int);
	BOOL CALLBACK SCmdProcessCommandLine(int, int);
	BOOL CALLBACK SMemInit2();
	BOOL CALLBACK SMemFindNextBlock(int, int, int, int);
	BOOL CALLBACK SMemFindNextHeap(int prevheap, int details, int nextheap);
	int  CALLBACK SMemGetHeapByCaller(int, int);
	int  CALLBACK SMemGetHeapByPtr(int);
	int  CALLBACK SMemHeapAlloc(int, int, int);
	int  CALLBACK SMemHeapCreate(int, int, int, char, DWORD ExitCode);
	BOOL CALLBACK SMemHeapDestroy(int);
	BOOL CALLBACK SMemHeapFree(int a1, int a2, void* a3);
	int  CALLBACK SMemHeapRealloc(int a1, int a2, void* a3, int a4);
	int  CALLBACK SMemHeapSize(int a1, int a2, void* a3);
	int  CALLBACK SMemCopy(void* dest, const void* source, size_t size);
	int  CALLBACK SMemFill(void* location, size_t length, char fillWith);
	int  CALLBACK SMemMove(void* dest, void* source, size_t size);
	int  CALLBACK SMemZero(void* location, size_t length);
	int  CALLBACK SMemCmp(void* location1, void* location2, size_t size);
	int  CALLBACK SMem496(int, char);
	BOOL CALLBACK SMemDumpState(int, int);

	BOOL  CALLBACK SStrInit();
	int   CALLBACK SStrCopy(char* dest, const char* source, size_t size);
	DWORD CALLBACK SStrHash(const char* string, unsigned long flags, unsigned long Seed);
	int   CALLBACK SStrNCat(char* base, char* _new, int max_length);
	void  CALLBACK SStrTokenize(const char** string, char* (*string2), char* buffer, const char* whitespace, size_t size);
	char* CALLBACK SStr505(const char* string, char c, int type);
	int   CALLBACK SStrLen(const char* string);
	void* CALLBACK SStrDup(int a1);
	int   CALLBACK SStrCmp(const char* string1, const char* string2, size_t size);
	int   CALLBACK SStrCmpI(const char* string1, const char* string2, size_t size);
	int   CALLBACK SStrUpper(char* string);
	BOOL  CALLBACK SMsgBreakHandlerChain(int a1);
	BOOL  CALLBACK SMsgUnregisterCommand(int a1, int a2, int a3);
	BOOL  CALLBACK SMsgUnregisterKeyDown(int a1, int a2, int a3);
	BOOL  CALLBACK SMsgUnregisterKeyUp(int a1, int a2, int a3);
	BOOL  CALLBACK SMsgUnregisterMessage(int a1, int a2, int a3);
	int   CALLBACK SMsg516(int a1);
	BOOL  CALLBACK SMsgSetDefaultWindow(int a1);
	HWND  __cdecl   SMsgGetDefaultWindow();
	BOOL  CALLBACK SMsg519(int a1, int a2, int a3);

	int CALLBACK Ordinal521(int a1);

	void CALLBACK SRgn523(int handle, int a2, int a3, int a4);
	void CALLBACK SRgn524(int handle, int a2);
	void CALLBACK SRgn525(int handle);

	void   CALLBACK SRgn527(int handle, int a2, int a3);
	void   CALLBACK SRgn528i(int handle, int a2, int a3, int a4);
	void   CALLBACK SRgn529i(int handle, int a2, int a3);
	void   CALLBACK SRgn530i(int handle, int a2);
	BOOL   CALLBACK SRgn531i(int handle, int a2, int a3);
	BOOL   CALLBACK SRgn532i(int handle, int a2);
	void   CALLBACK SRgn533i(int handle, int a2, int a3);
	void   CALLBACK SRgn534(int handle, int a2, int a3, int a4);
	void   CALLBACK SRgn535f(int handle, float a2, float a3, float a4);
	void   CALLBACK SRgn536f(int handle, float a2, float a3);
	void   CALLBACK SRgn537f(int handle, float a2);
	BOOL   CALLBACK SRgn538f(int handle, float a2, float a3);
	BOOL   CALLBACK SRgn539f(int handle, float a2);
	void   CALLBACK SRgn540f(int handle, float a2, float a3);
	void   CALLBACK SLogClose(DWORD NumberOfBytesWritten);
	HANDLE CALLBACK SLogCreate(char* filename, int a2, int a3);
	void   CALLBACK SLog543(int a1, int a2);
	void   CALLBACK SLogDump(int a1, int a2, DWORD NumberOfBytesWritten);
	void   CALLBACK SLogFlush(DWORD NumberOfBytesWritten);
	void   __cdecl   SLogFlushAll();
	void   __cdecl   SLogPend(int a1, char* a2, char a3);
	void   __cdecl   SLogWrite(HANDLE handle, char* format, ...);
	void   CALLBACK SLog549(int a1, int a2);
	void   CALLBACK SLog550(HANDLE handle, int a2);
	BOOL   CALLBACK SCompCompress(void* a1, int a2, unsigned int a3, signed int amount, int a5, char a6, int a7);
	BOOL   CALLBACK SCompDecompress(void* a1, int* a2, const void* a3, unsigned int a4);
	void   __cdecl   SLogVWrite(HANDLE handle, char* format, ...);

	void                         __cdecl   SErr561(char*, char);
	int                          __cdecl   SErrDisplayErrorFmt(DWORD dwMessageId, char* logfile, int logline, int unk, UINT uExitCode, char* format, ...);
	int                          __cdecl   SErrIsDisplayingError();
	int                          CALLBACK SErrPrepareAppFatal(int a1, int a2);
	int                          CALLBACK SErrSetLogTitleString(int a1);
	int                          CALLBACK SErrDisplayAppFatal(int a1);
	LPTOP_LEVEL_EXCEPTION_FILTER __cdecl   SErrCatchUnhandledExceptions();

	char* CALLBACK SStrChr(const char* string, char c);
	char* CALLBACK SStrChrR(const char* string, char c);
	double       CALLBACK SStrToDouble(const char* string);
	float        CALLBACK SStrToFloat(const char* string);
	signed int   CALLBACK SStrToInt(const char* string);
	unsigned int CALLBACK SStrToUnsigned(const char* string);
	__int64      CALLBACK SStrToInt64(const char* string);
	int          __cdecl   SStrVPrintf(char* dest, size_t size, const char* format, ...);
	int          CALLBACK SStrLower(char* string);
	int          CALLBACK Ordinal580(int a1, int a2, int a3, int a4);
	int          __cdecl   SStrPrintf(char* dest, size_t size, const char* format, ...);
	void         CALLBACK Ordinal582(LPRECT lpRect);
	int          CALLBACK Ordinal583(LPRECT lpRect);
	int          CALLBACK SStrStrI(const char* string, const char* search);
	int          CALLBACK SStrStr(const char* string, const char* search);
	int          CALLBACK SNet588(char* a1, char* a2);

	BOOL CALLBACK SBigInit();
	int  CALLBACK SBigAdd(void* buffer, const void* buffer2, const void* buffer3);
	int  CALLBACK SBigAnd(void* buffer, const void* buffer2, const void* buffer3);
	int  CALLBACK SBigCompare(void* buffer, void* buffer2);
	int  CALLBACK SBigCopy(void* buffer, void* buffer2);
	int  CALLBACK SBigDec(void* buffer, const void* buffer2);
	int  CALLBACK SBigDel(void* buffer);
	int  CALLBACK SBigDiv(int a1, const void* buffer1, const void* buffer2);
	int  CALLBACK SBigFindPrime(int a1, void* a2, unsigned int a3, const void* a4);
	int  CALLBACK SBigFromBinary(void* buffer, const void* str, size_t size);
	int  CALLBACK SBigFromStr(void* buffer, int a2);
	int  CALLBACK SBigFromStream(void* buffer, int a2, int a3, int a4);
	int  CALLBACK SBigFromUnsigned(void* buffer, unsigned int value);
	int  CALLBACK SBigGcd(void* buffer, int a2, int a3);
	int  CALLBACK SBigInc(void* buffer, int a2);
	int  CALLBACK SBigInvMod(void* buffer, int a2, int a3);
	int  CALLBACK SBigIsEven(void* buffer);
	int  CALLBACK SBigIsOdd(void* buffer);
	int  CALLBACK SBigIsOne(void* buffer);
	int  CALLBACK SBigIsPrime(void* buffer);
	int  CALLBACK SBigIsZero(void* buffer);
	int  CALLBACK SBigMod(void* buffer, int a2, int a3);
	int  CALLBACK SBigMul(void* buffer, int a2, int a3);
	int  CALLBACK SBigMulMod(void* buffer, int a2, int a3, int a4);
	int  CALLBACK SBigNew(void** buffer);
	int  CALLBACK SBigNot(void* buffer, int a2);
	int  CALLBACK SBigOr(void* buffer, int a2, int a3);
	int  CALLBACK SBigPow(void* buffer, int a2, int a3);
	int  CALLBACK SBigPowMod(void* buffer, int a2, int a3, int a4);
	int  CALLBACK SBigRand(void* buffer, int a2, int a3);
	int  CALLBACK SBigSet2Exp(void* buffer, int a2);
	int  CALLBACK SBigSetOne(void* buffer);
	int  CALLBACK SBigSetZero(void* buffer);
	int  CALLBACK SBigShl(void* buffer, int a2, int a3);
	int  CALLBACK SBigShr(void* buffer, int a2, int a3);
	int  CALLBACK SBigSquare(void* buffer, int a2);
	int  CALLBACK SBigSub(void* buffer, int a2, int a3);
	int  CALLBACK SBigToBinaryArray(void* buffer, int a2, int a3);
	int  CALLBACK SBigToBinaryBuffer(void* buffer, int a2, int a3, int a4);
	int  CALLBACK SBigToBinaryPtr(void* buffer, int a2, int a3);
	int  CALLBACK SBigToStrArray(void* buffer, int a2, int a3);
	int  CALLBACK SBigToStrBuffer(void* buffer, char* dst, int count);
	int  CALLBACK SBigToStrPtr(void* buffer, int a2);
	int  CALLBACK SBigToStreamArray(void* buffer, int a2, int a3);
	int  CALLBACK SBigToStreamBuffer(void* buffer, int a2, int a3, int a4);
	int  CALLBACK SBigToStreamPtr(void* buffer, int a2, int a3);
	int  CALLBACK SBigToUnsigned(void* buffer, int a2);
	int  CALLBACK SBigXor(void* buffer, int a2, int a3);
	BOOL CALLBACK SSignatureVerify(int, int, int, int);
	BOOL CALLBACK SSignatureVerifyStream_Begin(int);
	BOOL CALLBACK SSignatureVerifyStream_ProvideData(int);
	BOOL CALLBACK SSignatureVerifyStream_Finish(int);
	BOOL CALLBACK SSignatureGenerate(int, int, int, int, int, int);
	BOOL CALLBACK SSignatureVerifyStream_GetSignatureLength();

	BOOL CALLBACK SUniInit();
	int  CALLBACK SUniConvertUTF16to8Len(int a1, int a2, int a3);
	int  CALLBACK SUniConvertUTF16to8(int a1, int a2, int a3, int a4, int a5, int a6);
	int  CALLBACK SUniConvertUTF8to16Len(int a1, int a2, int a3);
	int  CALLBACK SUniConvertUTF8to16(int a1, int a2, int a3, int a4, int a5, int a6);
	int  CALLBACK SUniS905(int a1, int a2);
	int  CALLBACK SUniS906(int a1, int a2);
	int  CALLBACK SUniFindAfterUTF8Chr(int a1, int a2);
	int  CALLBACK SUniFindUTF8ChrStart(int a1, int a2);
	int  CALLBACK SUniConvertUTF16To909(unsigned __int32 a1, char* a2, unsigned __int16* a3);
	int  CALLBACK SUniConvertUTF16To910(unsigned __int32 a1, char* a2, unsigned __int16* a3);
	int  CALLBACK SUniConvertUTF16To911(unsigned __int32 a1, char* a2, unsigned __int16* a3);
	int  CALLBACK SUniConvert912(int a1, int a2, int a3);
	int  CALLBACK SUniConvert913(int a1, int a2, int a3);
	int  CALLBACK SUniConvert914(int a1, int a2, int a3);
	int  CALLBACK SUniConvertUTF8ToWin(unsigned __int32 a1, char* a2, unsigned __int16* a3);

#ifdef __cplusplus
}
#endif

#endif