#include "Storm.h"

BOOL __stdcall NetInit()
{
	return 0;
}

BOOL __stdcall SNetCreateGame(char* Source, char* a2, char* a3, int a4, int a5, int a6, char* a7, char* a8, int* playerid)
{
	return 0;
}

BOOL __cdecl SNetDestroy()
{
	return 0;
}

BOOL __stdcall SNetEnumProviders(int mincaps, int(__stdcall* callback)(DWORD*, DWORD*, DWORD*, DWORD*))
{
	return 0;
}

BOOL __stdcall SNetEnumDevices(int(__stdcall* callback)(DWORD*, DWORD*, DWORD*))
{
	return 0;
}

BOOL __stdcall SNetEnumGames(int(__stdcall* callback)(DWORD*, DWORD*, DWORD*), int* hintnextcall)
{
	return 0;
}

BOOL __stdcall SNetDropPlayer(int playerid, int flags)
{
	return 0;
}

BOOL __stdcall SNetGetGameInfo(int type, void* src, unsigned int length, int* byteswritten)
{
	return 0;
}

BOOL __stdcall SNetGetNetworkLatency(int measurementtype, int* result)
{
	return 0;
}

BOOL __stdcall SNetGetNumPlayers(int* firstplayerid, int* lastplayerid, int* activeplayers)
{
	return 0;
}

BOOL __stdcall SNetGetOwnerTurnsWaiting(int* turns)
{
	return 0;
}

BOOL __stdcall SNetGetPerformanceData(int counterid, int* countervalue, int* countertype, int* counterscale, LPFILETIME* measurementtime, int* measurementfreq)
{
	return 0;
}

BOOL __stdcall SNetGetPlayerCaps(char a1, int* caps)
{
	return 0;
}

BOOL __stdcall SNetGetPlayerName(int playerid, char* buffer, size_t buffersize)
{
	return 0;
}

BOOL __stdcall SNetGetProviderCaps(void* caps)
{
	return 0;
}

BOOL __stdcall SNetGetTurnsInTransit(int* turns)
{
	return 0;
}

BOOL __stdcall SNetInitializeDevice(int a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

BOOL __stdcall SNetInitializeProvider(DWORD providerName, int a2, int a3, int a4, DWORD ThreadID)
{
	return 0;
}

BOOL __stdcall SNetJoinGame(int a1, char* a2, char* a3, char* playerName, char* a5, int* playerid)
{
	return 0;
}

BOOL __stdcall SNetLeaveGame(int type)
{
	return 0;
}

BOOL __stdcall SNetPerformUpgrade(DWORD* upgradestatus)
{
	return 0;
}

BOOL __stdcall SNetReceiveMessage(int* senderplayerid, int* data, int* databytes)
{
	return 0;
}

BOOL __stdcall SNetReceiveTurns(unsigned int a1, int arraysize, void* arraydata, void* arraydatabytes, void* arrayplayerstatus)
{
	return 0;
}

HANDLE __stdcall SNetRegisterEventHandler(int event, int size)
{
	return 0;
}

BOOL __cdecl SNetResetLatencyMeasurements()
{
	return 0;
}

int __stdcall SNetSelectGame(int a1, int a2, int a3, int a4, int a5, int* playerid)
{
	return 0;
}

BOOL __stdcall SNetSelectProvider(LPARAM lparam, int a2, int a3, int a4, int a5, int* providerid)
{
	return 0;
}

BOOL __stdcall SNetSendMessage(signed int playerID, void* data, int databytes)
{
	return 0;
}

BOOL __stdcall SNetSendTurn(void* data, int databytes)
{
	return 0;
}

BOOL __stdcall SNetSetBasePlayer(int a1)
{
	return 0;
}

BOOL __stdcall SNetSetGameMode(int a1)
{
	return 0;
}

int __stdcall SNetUnregisterEventHandler(int a1, int callback)
{
	return 0;
}

BOOL __stdcall SNetEnumGamesEx(int a1, int a2, int(__fastcall* callback)(DWORD*, DWORD*, DWORD*), int* hintnextcall)
{
	return 0;
}

int __stdcall SNetSendServerChatCommand(char* command)
{
	return 0;
}

BOOL __stdcall SNet135(signed int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SNet136(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SNet137(int a1)
{
	return 0;
}

BOOL __stdcall SNetCreateLadderGame(int a1, int a2, int a3, int a4, int a5, int a6, const void* MemSrc, int MemSize, int a9, char* playerName, int a11, int a12)
{
	return 0;
}

BOOL __stdcall SNetReportGameResult(unsigned int a1, int size, int a3, int a4, int a5)
{
	return 0;
}

BOOL __stdcall SNetCheckDataFile(int a1, int a2, int a3, int a4)
{
	return 0;
}

int __stdcall SNetSendLeagueCommand(char* cmd, int a2)
{
	return 0;
}

int __stdcall SNetSendReplayPath(int a1, int a2, char* replayPath)
{
	return 0;
}

int __stdcall SNet143(int a1)
{
	return 0;
}

BOOL __stdcall SNet144(int a1)
{
	return 0;
}

int __stdcall SNetLeagueLogout(char* bnetName)
{
	return 0;
}

int __stdcall SNet146(int* curPlayerID, size_t nameSize)
{
	return 0;
}


BOOL __stdcall SDlgInit()
{
	return 0;
}

HDC __stdcall SDlgBeginPaint(HWND window, LPPAINTSTRUCT ps)
{
	return 0;
}

int __stdcall SDlgBltToWindowI(HWND window, HRGN hrgnSrc2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

BOOL __cdecl SDlgCheckTimers()
{
	return 0;
}

int __stdcall SDlgCreateDialogIndirectParam(HMODULE hModule, LPCSTR lpName, HWND hWndParent, LPVOID lpParam)
{
	return 0;
}

int __stdcall SDlgCreateDialogParam(int a1, int a2, HWND hWndParent, LPVOID lpParam)
{
	return 0;
}

HGDIOBJ __stdcall SDlgDefDialogProc(HWND hDlg, signed int DlgType, HDC textLabel, HWND hWnd)
{
	return 0;
}

void __stdcall SDlgDestroy()
{
	
}

int __stdcall SDlgDialogBoxIndirectParam(int a1, int a2, HWND hWndParent, LPVOID lpParam, LPARAM lParam)
{
	return 0;
}

int __stdcall SDlgDialogBoxParam(HMODULE hModule, LPCSTR lpName, HWND hWndParent, LPVOID lpParam, LPARAM lParam)
{
	return 0;
}

int __stdcall SDlgDrawBitmap(HWND window, HGDIOBJ a2, HRGN hrgnSrc2, int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL __stdcall SDlgEndDialog(HWND hDlg, HANDLE nResult)
{
	return 0;
}

BOOL __stdcall SDlgEndPaint(HWND hWnd, PAINTSTRUCT* lpPaint)
{
	return 0;
}

int __stdcall SDlgKillTimer(int a1, int a2)
{
	return 0;
}

int __stdcall SDlgSetBaseFont(int a1, int a2, int a3, int a4, char* Source)
{
	return 0;
}

int __stdcall SDlgSetBitmapI(int a1, int a2, char* Str2, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

int __stdcall SDlgSetControlBitmaps(HWND parentwindow, int a2, int a3, int a4, int a5, int arg14, int a7)
{
	return 0;
}

int __stdcall SDlgSetCursor(HWND hWnd, LONG dwNewLong, int a3, int a4)
{
	return 0;
}

int __stdcall SDlgSetSystemCursor(int a1, int a2, int a3, signed int a4)
{
	return 0;
}

int __stdcall SDlgSetTimer(int a1, int a2, int a3, int a4)
{
	return 0;
}

int __cdecl SDlgUpdateCursor()
{
	return 0;
}

int __stdcall SDlgBltToWindowE(HWND hWnd, HRGN a2, char* a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

int __stdcall SDlgSetBitmapE(int a1, int a2, char* src, int a4, int a5, int a6, int a7, signed int a8, int a9, signed int a10)
{
	return 0;
}

char* __stdcall SDlgSetLocale(int a1, const char* a2)
{
	return 0;
}

int __stdcall Ordinal224(int a1)
{
	return 0;
}

BOOL __stdcall SFileInit()
{
	return 0;
}

int __stdcall SFileAuthenticateArchive(HANDLE hArchive, int a2)
{
	return 0;
}

BOOL __stdcall SFileCloseArchive(HANDLE hArchive)
{
	return 0;
}

BOOL __stdcall SFileCloseFile(HANDLE hFile)
{
	return 0;
}

int __stdcall SFileDdaBegin(HANDLE hFile, int a2, int a3)
{
	return 0;
}

int __stdcall SFileDdaBeginEx(HANDLE hFile, signed int a2, unsigned int a3, unsigned __int32 lDistanceToMove, signed int a5, signed int a6, int a7)
{
	return 0;
}

BOOL __cdecl SFileDdaDestroy()
{
	return 0;
}

BOOL __stdcall SFileDdaEnd(HANDLE directsound)
{
	return 0;
}

BOOL __stdcall SFileDdaGetPos(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SFileDdaGetVolume(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SFileDdaInitialize(HANDLE directsound)
{
	return 0;
}

BOOL __stdcall SFileDdaSetVolume(HANDLE directsound, signed int bigvolume, signed int volume)
{
	return 0;
}

BOOL __cdecl SFileDestroy()
{
	return 0;
}

BOOL __stdcall SFileEnableDirectAccess(HANDLE hFile)
{
	return 0;
}

BOOL __stdcall SFileGetFileArchive(HANDLE hFile, HANDLE archive)
{
	return 0;
}

LONG __stdcall SFileGetFileSize(HANDLE hFile, DWORD* lpFileSizeHigh)
{
	return 0;
}

BOOL __stdcall SFileOpenArchive(const char* archivename, DWORD dwPriority, DWORD dwFlags, HANDLE* handle)
{
	return 0;
}

BOOL __stdcall SFileOpenFile(const char* filename, HANDLE* handle)
{
	return 0;
}

BOOL __stdcall SFileOpenFileEx(HANDLE handle, const char* filename, char mode, HANDLE* result)
{
	return 0;
}

BOOL __stdcall SFileReadFile(HANDLE hFile, const char* buffer, DWORD nNumberOfBytesToRead, int* read, LONG lpDistanceToMoveHigh)
{
	return 0;
}

BOOL __stdcall SFileSetBasePath(const char* path)
{
	return 0;
}

LONG __stdcall SFileSetFilePointer(HANDLE hFile, LONG filePos, LONG* filePosHigh, DWORD dwMethod)
{
	return 0;
}

LCID __stdcall SFileSetLocale(LCID lcLocale)
{
	return 0;
}

BOOL __stdcall SFileGetBasePath(const char* result, int maxSize)
{
	return 0;
}

BOOL __stdcall SFileSetIoErrorMode(int a1, int a2)
{
	return 0;
}

BOOL __stdcall SFileGetArchiveName(HANDLE hArchive, const char* name, int length)
{
	return 0;
}

BOOL __stdcall SFileGetFileName(HANDLE hFile, const char* buffer, int length)
{
	return 0;
}

int __stdcall SFileGetArchiveInfo(int a1, int a2, int a3)
{
	return 0;
}

char __stdcall SFileSetPlatform(char a1)
{
	return 0;
}

int __stdcall SFileLoadFile(const char* filename, int a2, int a3, int a4, int a5)
{
	return 0;
}

BOOL __stdcall SFileUnloadFile(void* buffer)
{
	return 0;
}

BOOL __stdcall SFileLoadFileEx(void* hArchive, const char* filename, int a3, int a4, int a5, DWORD searchScope, struct _OVERLAPPED* lpOverlapped)
{
	return 0;
}

void __stdcall SFilePrioritizeRequest(int a1, int a2)
{
	
}

void __stdcall SFileCancelRequest(int a1)
{
	
}

int __stdcall SFileSetAsyncBudget(int a1)
{
	return 0;
}

void __stdcall SFileSetDataChunkSize(int a1)
{
	
}

BOOL __stdcall SFileOpenFileAsArchive(int a1, const char* archivename, DWORD dwPriority, DWORD dwFlags, HANDLE* handle)
{
	return 0;
}

LCID __cdecl SFileGetLocale()
{
	return 0;
}

BOOL __cdecl StormDestroy()
{
	return 0;
}

HMODULE __cdecl StormGetInstance()
{
	return 0;
}

BOOL __stdcall StormGetOption(int type, int optval, size_t optlen)
{
	return 0;
}

BOOL __stdcall StormSetOption(int type, int optval, size_t optlen)
{
	return 0;
}

BOOL __stdcall SBltDestroy()
{
	return 0;
}

BOOL __stdcall SBltGetSCode(unsigned int a1, char* buffer, size_t buffersize, int a4)
{
	return 0;
}

BOOL __stdcall SBltROP3(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
	return 0;
}

BOOL __stdcall SBltROP3Clipped(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

BOOL __stdcall SBltROP3Tiled(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

BOOL	 __stdcall SBmpInit()
{
	return 0;
}

BOOL __stdcall SBmpDecodeImage(int a1, signed int* a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
	return 0;
}

BOOL	 __stdcall SBmpDestroy()
{
	return 0;
}

BOOL __stdcall SBmpLoadImage(const char* fileName, int a2, int a3, int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL __stdcall SBmpSaveImage(const char* fileName, unsigned __int16 width, unsigned __int16 height, int paletteentries, int bitdepth, int bitmapbits)
{
	return 0;
}

HANDLE __stdcall SBmpAllocLoadImage(const char* fileName, int a2, int a3, int a4, int a5, int a6, int a7, int(__stdcall* a8)(DWORD*))
{
	return 0;
}

BOOL __stdcall SBmpSaveImageEx(const char* filename, unsigned __int16 width, unsigned __int16 height, int paletteentries, int bitdepth, int bitmapbits, int reserved)
{
	return 0;
}

BOOL	 __stdcall SCodeInit()
{
	return 0;
}

BOOL __stdcall SCodeCompile(char* directives1, char* directives2, int a3, unsigned int a4, unsigned int flags, char* src)
{
	return 0;
}

BOOL __stdcall SCodeDelete(int handle)
{
	return 0;
}

BOOL	 __stdcall SCodeDestroy()
{
	return 0;
}

int __cdecl SCodeExecute(int a1, int a2)
{
	return 0;
}

BOOL __stdcall SCodeGetPseudocode(int scodestring, int buffer, size_t buffersize)
{
	return 0;
}

BOOL	 __stdcall SDrawInit()
{
	return 0;
}

BOOL __stdcall SDrawAutoInitialize(HINSTANCE hWnd, LPCSTR lpClassName, LPCSTR lpWindowName, int(__stdcall* a4)(HWND, UINT, WPARAM, LPARAM), signed int a5, int nWidth, int nHeight, int a8)
{
	return 0;
}

BOOL __stdcall SDrawCaptureScreen(char* source)
{
	return 0;
}

BOOL __stdcall SDrawClearSurface(int surfacenumber)
{
	return 0;
}

BOOL __cdecl SDrawDestroy()
{
	return 0;
}

BOOL __cdecl SDrawFlipPage()
{
	return 0;
}

HWND __stdcall SDrawGetFrameWindow(int sdraw_framewindow)
{
	return 0;
}

BOOL __stdcall SDrawGetObjects(int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, int obj7)
{
	return 0;
}

BOOL __stdcall SDrawGetScreenSize(int width, int height, int depth)
{
	return 0;
}

BOOL __stdcall SDrawGetServiceLevel(int a1)
{
	return 0;
}

BOOL __stdcall SDrawLockSurface(int surfacenumber, RECT* lpDestRect, void** lplpSurface, int* lpPitch, int arg_unused)
{
	return 0;
}

BOOL __stdcall SDrawManualInitialize(HWND a1, int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, void* obj7)
{
	return 0;
}

int __stdcall SDrawMessageBox(LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
	return 0;
}

BOOL __cdecl SDrawPostClose()
{
	return 0;
}

BOOL __cdecl SDrawRealizePalette()
{
	return 0;
}

int __stdcall SDrawSelectGdiSurface(unsigned int a1, int a2)
{
	return 0;
}

BOOL __stdcall SDrawUnlockSurface(int surfacenumber, void* lpSurface, int zero1, int zero2)
{
	return 0;
}

BOOL __stdcall SDrawUpdatePalette(unsigned int firstentry, unsigned int numentries, PALETTEENTRY* pPalEntries, int a4)
{
	return 0;
}

BOOL __stdcall SDrawUpdateScreen(int a1)
{
	return 0;
}

int __cdecl SDrawWaitForVerticalBlank()
{
	return 0;
}

BOOL __stdcall SEvtDispatch(DWORD messageID, int a2, int a3, int a4)
{
	return 0;
}

BOOL __stdcall SEvtRegisterHandler(DWORD messageID, unsigned int a2, int event, int a4, int a5)
{
	return 0;
}

BOOL __stdcall SEvtUnregisterHandler(DWORD messageID, int a2, int a3, int a4)
{
	return 0;
}

BOOL __stdcall SEvtUnregisterType(DWORD messageID, int a2)
{
	return 0;
}

BOOL __stdcall SEvtPopState(DWORD messageID, int type)
{
	return 0;
}

BOOL __stdcall SEvtPushState(DWORD messageID, int type)
{
	return 0;
}

BOOL __stdcall SEvtBreakHandlerChain(int a1)
{
	return 0;
}

BOOL	__stdcall SGdiInit()
{
	return 0;
}

BOOL __stdcall SGdiBitBlt(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, unsigned int a8, signed int a9)
{
	return 0;
}

BOOL __stdcall SGdiCreateFont(const void* handle, int bits, int width, int height, int filecharwidth, int filecharheight, const void* charsizetable, int a8)
{
	return 0;
}

BOOL __stdcall SGdiDeleteObject(int a1)
{
	return 0;
}

BOOL __cdecl SGdiDestroy()
{
	return 0;
}

BOOL __stdcall SGdiExtTextOut(int a1, int a2, int a3, int a4, unsigned int a8, signed int a6, signed int a7, const char* arg1C, unsigned int arg20)
{
	return 0;
}

BOOL __stdcall SGdiImportFont(HGDIOBJ handle, int windowsfont)
{
	return 0;
}

BOOL __stdcall SGdiLoadFont(char* Str, int a5, int a6, int argC, int a7, int a8)
{
	return 0;
}

BOOL __stdcall SGdiRectangle(int a1, int a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

BOOL __stdcall SGdiSelectObject(int a1)
{
	return 0;
}

BOOL __stdcall SGdiSetPitch(int pitch)
{
	return 0;
}

BOOL __stdcall SGdiTextOut(int a1, int a2, int a3, unsigned int a8, const char* arg1C, unsigned int arg20)
{
	return 0;
}

BOOL __stdcall SGdi392(int, int, int, int)
{
	return 0;
}

BOOL __stdcall Ordinal393(int, int, int)
{
	return 0;
}

BOOL	__stdcall SMemInit()
{
	return 0;
}

void* __stdcall SMemAlloc(int amount, char* logfilename, int logline, int defaultValue)
{
	return 0;
}

BOOL __cdecl SMemDestroy()
{
	return 0;
}

BOOL __stdcall SMemFree(void* location, char* logfilename, int logline, int defaultValue)
{
	return 0;
}

int __stdcall SMemGetSize(void* location, char* logfilename, int logline)
{
	return 0;
}

void* __stdcall SMemReAlloc(void* location, int amount, char* logfilename, int logline, int defaultValue)
{
	return 0;
}

BOOL __stdcall SMsgDispatchMessage(HWND hWnd, DWORD messageID, WPARAM wParam, LPARAM lParam, int a5, int a6)
{
	return 0;
}

WPARAM __stdcall SMsgDoMessageLoop(void* callback, int followWithStormDestroy)
{
	return 0;
}

BOOL __stdcall SMsgRegisterCommand(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SMsgRegisterKeyDown(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SMsgRegisterKeyUp(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SMsgRegisterMessage(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SMsgPopRegisterState(int type)
{
	return 0;
}

BOOL __stdcall SMsgPushRegisterState(int type)
{
	return 0;
}

BOOL __stdcall SMsg420(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SRegLoadData(char* keyname, char* valuename, HKEY phkResult, LPBYTE lpData, int a5, DWORD* lpcbData)
{
	return 0;
}

BOOL __stdcall SRegLoadString(char* keyname, char* valuename, int a3, char* buffer, size_t buffersize)
{
	return 0;
}

BOOL __stdcall SRegLoadValue(char* keyname, char* valuename, int a3, int value)
{
	return 0;
}

BOOL __stdcall SRegSaveData(char* keyname, char* valuename, BYTE flags, BYTE* lpData, DWORD cbData)
{
	return 0;
}

BOOL __stdcall SRegSaveString(char* keyname, char* valuename, BYTE flags, char* string)
{
	return 0;
}

BOOL __stdcall SRegSaveValue(char* keyname, char* valuename, BYTE flags, DWORD result)
{
	return 0;
}

BOOL __stdcall SRegGetBaseKey(char flags, char* buffer, size_t bufferchars)
{
	return 0;
}

BOOL __stdcall SReg428(char* keyname, char* valuename, HKEY phkResult)
{
	return 0;
}

BOOL __stdcall SReg429(char* keyname, DWORD dwflags, DWORD dwIndex, char*, size_t)
{
	return 0;
}

BOOL __stdcall SReg430(char* keyname, int, DWORD cSubKeys)
{
	return 0;
}

BOOL __stdcall STransBlt(int a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

BOOL __stdcall STransBltUsingMask(int a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

BOOL __stdcall STransCreateI(int a1, int a2, int a3, signed int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL __stdcall STransDelete(int a1)
{
	return 0;
}

BOOL	__stdcall STransDestroy()
{
	return 0;
}

BOOL __stdcall STransDuplicate(int handle, int source)
{
	return 0;
}

BOOL __stdcall STransIntersectDirtyArray(int handle, int dirtyarraymask, unsigned __int8 dirtyarray, int sourcemask)
{
	return 0;
}

BOOL __stdcall STransInvertMask(int handle, int sourcemask)
{
	return 0;
}

BOOL __stdcall STransLoadI(char* filename, int a5, int a6, int handle)
{
	return 0;
}

BOOL __stdcall STransSetDirtyArrayInfo(signed int depth, int depth2, int height, int width)
{
	return 0;
}

BOOL __stdcall STransUpdateDirtyArray(int a1, char a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

BOOL __stdcall STrans442(int, int, int, char*, size_t)
{
	return 0;
}

BOOL __stdcall STransCombineMasks(int, int, int, int, int, int)
{
	return 0;
}

BOOL __stdcall STransCreateE(int, int, int, int, int, int, int)
{
	return 0;
}

BOOL __stdcall STrans446(int, int, int, int, int, int, int)
{
	return 0;
}

BOOL __stdcall STransLoadE(char* filename, int, int, int handle)
{
	return 0;
}

BOOL	__stdcall SVidInit()
{
	return 0;
}

BOOL __cdecl SVidDestroy()
{
	return 0;
}

BOOL __stdcall SVidGetSize(int video, int a2, int a3, int a4)
{
	return 0;
}

BOOL __stdcall SVidInitialize(int arg0)
{
	return 0;
}

BOOL __stdcall SVidPlayBegin(char* filename, int arg4, int a3, int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL __stdcall SVidPlayBeginFromMemory(void* destbuffer, int destsize, int arg4, int a3, int a4, int a6, int sourcebytes, int sourceptr)
{
	return 0;
}

BOOL __cdecl SVidPlayContinue()
{
	return 0;
}

BOOL __stdcall SVidPlayContinueSingle(int video, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SVidPlayEnd(int video)
{
	return 0;
}

BOOL __stdcall SVidSetVolume(int video, int a2, int a3, int type)
{
	return 0;
}

int __stdcall SErrDisplayError(DWORD dwMessageId, char* logfile, int logline, char a3, int a4, UINT uExitCode)
{
	return 0;
}

int __stdcall SErrGetErrorStr(DWORD dwMessageId, char* buffer, size_t bufferchars)
{
	return 0;
}

DWORD __cdecl SErrGetLastError()
{
	return 0;
}

BOOL __stdcall SErrRegisterMessageSource(__int16 a1, int a2, int a3)
{
	return 0;
}

void __stdcall SErrSetLastError(DWORD dwErrCode)
{
	
}

int __stdcall SErrReportNamedResourceLeak(char* resourceName, int)
{
	return 0;
}

int __stdcall SErrReportResourceLeak(char* resourceName)
{
	return 0;
}

BOOL __stdcall SErrSuppressErrors(BOOL suppressErrors)
{
	return 0;
}

int __stdcall SErrRegisterHandler(int)
{
	return 0;
}

void __stdcall SErr470(int)
{
	
}

BOOL __stdcall SCmdGetBool(int a1)
{
	return 0;
}

int __stdcall SCmdGetNum(int a1)
{
	return 0;
}

BOOL __stdcall SCmdGetString(int a1, char* dest, size_t size)
{
	return 0;
}

BOOL __stdcall SCmdProcess(const char** string, int a2, int a3, int a4)
{
	return 0;
}

BOOL __stdcall SCmdRegisterArgList(int, int)
{
	return 0;
}

BOOL __stdcall SCmdRegisterArgument(int a1, int a2, char* str, int a4, int a5, int a6, int a7, int a8)
{
	return 0;
}

int __stdcall SCmd478(int)
{
	return 0;
}

BOOL __stdcall SCmdProcessCommandLine(int, int)
{
	return 0;
}

BOOL	__stdcall SMemInit2()
{
	return 0;
}

BOOL __stdcall SMemFindNextBlock(int, int, int, int)
{
	return 0;
}

BOOL __stdcall SMemFindNextHeap(int prevheap, int details, int nextheap)
{
	return 0;
}

int __stdcall SMemGetHeapByCaller(int, int)
{
	return 0;
}

int __stdcall SMemGetHeapByPtr(int)
{
	return 0;
}

int __stdcall SMemHeapAlloc(int, int, int)
{
	return 0;
}

int __stdcall SMemHeapCreate(int, int, int, char, DWORD ExitCode)
{
	return 0;
}

BOOL __stdcall SMemHeapDestroy(int)
{
	return 0;
}

BOOL __stdcall SMemHeapFree(int a1, int a2, void* a3)
{
	return 0;
}

int __stdcall SMemHeapRealloc(int a1, int a2, void* a3, int a4)
{
	return 0;
}

int __stdcall SMemHeapSize(int a1, int a2, void* a3)
{
	return 0;
}

int __stdcall SMemCopy(void* dest, const void* source, size_t size)
{
	return 0;
}

int __stdcall SMemFill(void* location, size_t length, char fillWith)
{
	return 0;
}

int __stdcall SMemMove(void* dest, void* source, size_t size)
{
	return 0;
}

int __stdcall SMemZero(void* location, size_t length)
{
	return 0;
}

int __stdcall SMemCmp(void* location1, void* location2, size_t size)
{
	return 0;
}

int __stdcall SMem496(int, char)
{
	return 0;
}

BOOL __stdcall SMemDumpState(int, int)
{
	return 0;
}

BOOL	__stdcall SStrInit()
{
	return 0;
}

int __stdcall SStrCopy(char* dest, const char* source, size_t size)
{
	return 0;
}

DWORD __stdcall SStrHash(const char* string, unsigned long flags, unsigned long Seed)
{
	return 0;
}

int __stdcall SStrNCat(char* base, char* _new, int max_length)
{
	return 0;
}

void __stdcall SStrTokenize(const char** string, char* (*string2), char* buffer, const char* whitespace, size_t size)
{
	
}

char* __stdcall SStr505(const char* string, char c, int type)
{
	return 0;
}

int __stdcall SStrLen(const char* string)
{
	return 0;
}

void* __stdcall SStrDup(int a1)
{
	return 0;
}

int __stdcall SStrCmp(const char* string1, const char* string2, size_t size)
{
	return 0;
}

int __stdcall SStrCmpI(const char* string1, const char* string2, size_t size)
{
	return 0;
}

int __stdcall SStrUpper(char* string)
{
	return 0;
}

BOOL __stdcall SMsgBreakHandlerChain(int a1)
{
	return 0;
}

BOOL __stdcall SMsgUnregisterCommand(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SMsgUnregisterKeyDown(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SMsgUnregisterKeyUp(int a1, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SMsgUnregisterMessage(int a1, int a2, int a3)
{
	return 0;
}

int __stdcall SMsg516(int a1)
{
	return 0;
}

BOOL __stdcall SMsgSetDefaultWindow(int a1)
{
	return 0;
}

HWND __cdecl SMsgGetDefaultWindow()
{
	return 0;
}

BOOL __stdcall SMsg519(int a1, int a2, int a3)
{
	return 0;
}

int __stdcall Ordinal521(int a1)
{
	return 0;
}

void __stdcall SRgn523(int handle, int a2, int a3, int a4)
{
	
}

void __stdcall SRgn524(int handle, int a2)
{
	
}

void __stdcall SRgn525(int handle)
{
	
}

void __stdcall SRgn527(int handle, int a2, int a3)
{
	
}

void __stdcall SRgn528i(int handle, int a2, int a3, int a4)
{
	
}

void __stdcall SRgn529i(int handle, int a2, int a3)
{
	
}

void __stdcall SRgn530i(int handle, int a2)
{
	
}

BOOL __stdcall SRgn531i(int handle, int a2, int a3)
{
	return 0;
}

BOOL __stdcall SRgn532i(int handle, int a2)
{
	return 0;
}

void __stdcall SRgn533i(int handle, int a2, int a3)
{
	
}

void __stdcall SRgn534(int handle, int a2, int a3, int a4)
{
	
}

void __stdcall SRgn535f(int handle, float a2, float a3, float a4)
{
	
}

void __stdcall SRgn536f(int handle, float a2, float a3)
{
	
}

void __stdcall SRgn537f(int handle, float a2)
{
	
}

BOOL __stdcall SRgn538f(int handle, float a2, float a3)
{
	return 0;
}

BOOL __stdcall SRgn539f(int handle, float a2)
{
	return 0;
}

void __stdcall SRgn540f(int handle, float a2, float a3)
{
	
}

void __stdcall SLogClose(DWORD NumberOfBytesWritten)
{
	
}

HANDLE __stdcall SLogCreate(char* filename, int a2, int a3)
{
	return 0;
}

void __stdcall SLog543(int a1, int a2)
{
	
}

void __stdcall SLogDump(int a1, int a2, DWORD NumberOfBytesWritten)
{
	
}

void __stdcall SLogFlush(DWORD NumberOfBytesWritten)
{
	
}

void __cdecl SLogFlushAll()
{
	
}

void __cdecl SLogPend(int a1, char* a2, char a3)
{
	
}

void __cdecl SLogWrite(HANDLE handle, char* format, ...)
{
	
}

void __stdcall SLog549(int a1, int a2)
{
	
}

void __stdcall SLog550(HANDLE handle, int a2)
{
	
}

BOOL __stdcall SCompCompress(void* a1, int a2, unsigned int a3, signed int amount, int a5, char a6, int a7)
{
	return 0;
}

BOOL __stdcall SCompDecompress(void* a1, int* a2, const void* a3, unsigned int a4)
{
	return 0;
}

void __cdecl SLogVWrite(HANDLE handle, char* format, ...)
{
	
}

BOOL __stdcall SErrInit()
{
	return 0;
}

void __cdecl SErr561(char*, char)
{
	
}

int __cdecl SErrDisplayErrorFmt(DWORD dwMessageId, char* logfile, int logline, int unk, UINT uExitCode, char* format, ...)
{
	return 0;
}

int __cdecl SErrIsDisplayingError()
{
	return 0;
}

int __stdcall SErrPrepareAppFatal(int a1, int a2)
{
	return 0;
}

int __stdcall SErrSetLogTitleString(int a1)
{
	return 0;
}

int __stdcall SErrDisplayAppFatal(int a1)
{
	return 0;
}

LPTOP_LEVEL_EXCEPTION_FILTER __cdecl SErrCatchUnhandledExceptions()
{
	return 0;
}

char* __stdcall SStrChr(char* string, char c)
{
	return 0;
}

char* __stdcall SStrChrR(char* string, char c)
{
	return 0;
}

char* __stdcall SStrChr(const char* string, char c)
{
	return 0;
}

char* __stdcall SStrChrR(const char* string, char c)
{
	return 0;
}

double __stdcall SStrToDouble(const char* string)
{
	return 0;
}

float __stdcall SStrToFloat(const char* string)
{
	return 0;
}

signed int __stdcall SStrToInt(const char* string)
{
	return 0;
}

unsigned int __stdcall SStrToUnsigned(const char* string)
{
	return 0;
}

__int64 __stdcall SStrToInt64(const char* string)
{
	return 0;
}

int __cdecl SStrVPrintf(char* dest, size_t size, const char* format, ...)
{
	return 0;
}

int __stdcall SStrLower(char* string)
{
	return 0;
}

int __stdcall Ordinal580(int a1, int a2, int a3, int a4)
{
	return 0;
}

int __cdecl SStrPrintf(char* dest, size_t size, const char* format, ...)
{
	return 0;
}

void __stdcall Ordinal582(LPRECT lpRect)
{
	
}

int __stdcall Ordinal583(LPRECT lpRect)
{
	return 0;
}

int __stdcall SStrStrI(char* string, const char* search)
{
	return 0;
}

int __stdcall SStrStrI(const char* string, const char* search)
{
	return 0;
}

int __stdcall SStrStr(char* string, const char* search)
{
	return 0;
}

int __stdcall SStrStr(const char* string, const char* search)
{
	return 0;
}

int __stdcall SNet588(char* a1, char* a2)
{
	return 0;
}

BOOL	 __stdcall SBigInit()
{
	return 0;
}

int __stdcall SBigAdd(void* buffer, const void* buffer2, const void* buffer3)
{
	return 0;
}

int __stdcall SBigAnd(void* buffer, const void* buffer2, const void* buffer3)
{
	return 0;
}

int __stdcall SBigCompare(void* buffer, void* buffer2)
{
	return 0;
}

int __stdcall SBigCopy(void* buffer, void* buffer2)
{
	return 0;
}

int __stdcall SBigDec(void* buffer, const void* buffer2)
{
	return 0;
}

int __stdcall SBigDel(void* buffer)
{
	return 0;
}

int __stdcall SBigDiv(int a1, const void* buffer1, const void* buffer2)
{
	return 0;
}

int __stdcall SBigFindPrime(int a1, void* a2, unsigned int a3, const void* a4)
{
	return 0;
}

int __stdcall SBigFromBinary(void* buffer, const void* str, size_t size)
{
	return 0;
}

int __stdcall SBigFromStr(void* buffer, int a2)
{
	return 0;
}

int __stdcall SBigFromStream(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int __stdcall SBigFromUnsigned(void* buffer, unsigned int value)
{
	return 0;
}

int __stdcall SBigGcd(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigInc(void* buffer, int a2)
{
	return 0;
}

int __stdcall SBigInvMod(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigIsEven(void* buffer)
{
	return 0;
}

int __stdcall SBigIsOdd(void* buffer)
{
	return 0;
}

int __stdcall SBigIsOne(void* buffer)
{
	return 0;
}

int __stdcall SBigIsPrime(void* buffer)
{
	return 0;
}

int __stdcall SBigIsZero(void* buffer)
{
	return 0;
}

int __stdcall SBigMod(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigMul(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigMulMod(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int __stdcall SBigNew(void** buffer)
{
	return 0;
}

int __stdcall SBigNot(void* buffer, int a2)
{
	return 0;
}

int __stdcall SBigOr(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigPow(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigPowMod(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int __stdcall SBigRand(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigSet2Exp(void* buffer, int a2)
{
	return 0;
}

int __stdcall SBigSetOne(void* buffer)
{
	return 0;
}

int __stdcall SBigSetZero(void* buffer)
{
	return 0;
}

int __stdcall SBigShl(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigShr(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigSquare(void* buffer, int a2)
{
	return 0;
}

int __stdcall SBigSub(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigToBinaryArray(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigToBinaryBuffer(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int __stdcall SBigToBinaryPtr(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigToStrArray(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigToStrBuffer(void* buffer, char* dst, int count)
{
	return 0;
}

int __stdcall SBigToStrPtr(void* buffer, int a2)
{
	return 0;
}

int __stdcall SBigToStreamArray(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigToStreamBuffer(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int __stdcall SBigToStreamPtr(void* buffer, int a2, int a3)
{
	return 0;
}

int __stdcall SBigToUnsigned(void* buffer, int a2)
{
	return 0;
}

int __stdcall SBigXor(void* buffer, int a2, int a3)
{
	return 0;
}

BOOL	 __stdcall SSignatureVerify(int, int, int, int)
{
	return 0;
}

BOOL	 __stdcall SSignatureVerifyStream_Begin(int)
{
	return 0;
}

BOOL	 __stdcall SSignatureVerifyStream_ProvideData(int)
{
	return 0;
}

BOOL	 __stdcall SSignatureVerifyStream_Finish(int)
{
	return 0;
}

BOOL	 __stdcall SSignatureGenerate(int, int, int, int, int, int)
{
	return 0;
}

BOOL	 __stdcall SSignatureVerifyStream_GetSignatureLength()
{
	return 0;
}

BOOL	 __stdcall SUniInit()
{
	return 0;
}

int __stdcall SUniConvertUTF16to8Len(int a1, int a2, int a3)
{
	return 0;
}

int __stdcall SUniConvertUTF16to8(int a1, int a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

int __stdcall SUniConvertUTF8to16Len(int a1, int a2, int a3)
{
	return 0;
}

int __stdcall SUniConvertUTF8to16(int a1, int a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

int __stdcall SUniS905(int a1, int a2)
{
	return 0;
}

int __stdcall SUniS906(int a1, int a2)
{
	return 0;
}

int __stdcall SUniFindAfterUTF8Chr(int a1, int a2)
{
	return 0;
}

int __stdcall SUniFindUTF8ChrStart(int a1, int a2)
{
	return 0;
}

int __stdcall SUniConvertUTF16To909(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}

int __stdcall SUniConvertUTF16To910(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}

int __stdcall SUniConvertUTF16To911(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}

int __stdcall SUniConvert912(int a1, int a2, int a3)
{
	return 0;
}

int __stdcall SUniConvert913(int a1, int a2, int a3)
{
	return 0;
}

int __stdcall SUniConvert914(int a1, int a2, int a3)
{
	return 0;
}

int __stdcall SUniConvertUTF8ToWin(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}