#include "Storm.h"

BOOL CALLBACK NetInit()
{
	return 0;
}

BOOL CALLBACK SNetCreateGame(char* Source, char* a2, char* a3, int a4, int a5, int a6, char* a7, char* a8, int* playerid)
{
	return 0;
}

BOOL __cdecl SNetDestroy()
{
	return 0;
}

BOOL CALLBACK SNetEnumProviders(int mincaps, int(CALLBACK* callback)(DWORD*, DWORD*, DWORD*, DWORD*))
{
	return 0;
}

BOOL CALLBACK SNetEnumDevices(int(CALLBACK* callback)(DWORD*, DWORD*, DWORD*))
{
	return 0;
}

BOOL CALLBACK SNetEnumGames(int(CALLBACK* callback)(DWORD*, DWORD*, DWORD*), int* hintnextcall)
{
	return 0;
}

BOOL CALLBACK SNetDropPlayer(int playerid, int flags)
{
	return 0;
}

BOOL CALLBACK SNetGetGameInfo(int type, void* src, unsigned int length, int* byteswritten)
{
	return 0;
}

BOOL CALLBACK SNetGetNetworkLatency(int measurementtype, int* result)
{
	return 0;
}

BOOL CALLBACK SNetGetNumPlayers(int* firstplayerid, int* lastplayerid, int* activeplayers)
{
	return 0;
}

BOOL CALLBACK SNetGetOwnerTurnsWaiting(int* turns)
{
	return 0;
}

BOOL CALLBACK SNetGetPerformanceData(int counterid, int* countervalue, int* countertype, int* counterscale, LPFILETIME* measurementtime, int* measurementfreq)
{
	return 0;
}

BOOL CALLBACK SNetGetPlayerCaps(char a1, int* caps)
{
	return 0;
}

BOOL CALLBACK SNetGetPlayerName(int playerid, char* buffer, size_t buffersize)
{
	return 0;
}

BOOL CALLBACK SNetGetProviderCaps(void* caps)
{
	return 0;
}

BOOL CALLBACK SNetGetTurnsInTransit(int* turns)
{
	return 0;
}

BOOL CALLBACK SNetInitializeDevice(int a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

BOOL CALLBACK SNetInitializeProvider(DWORD providerName, int a2, int a3, int a4, DWORD ThreadID)
{
	return 0;
}

BOOL CALLBACK SNetJoinGame(int a1, char* a2, char* a3, char* playerName, char* a5, int* playerid)
{
	return 0;
}

BOOL CALLBACK SNetLeaveGame(int type)
{
	return 0;
}

BOOL CALLBACK SNetPerformUpgrade(DWORD* upgradestatus)
{
	return 0;
}

BOOL CALLBACK SNetReceiveMessage(int* senderplayerid, int* data, int* databytes)
{
	return 0;
}

BOOL CALLBACK SNetReceiveTurns(unsigned int a1, int arraysize, void* arraydata, void* arraydatabytes, void* arrayplayerstatus)
{
	return 0;
}

HANDLE CALLBACK SNetRegisterEventHandler(int event, int size)
{
	return 0;
}

BOOL __cdecl SNetResetLatencyMeasurements()
{
	return 0;
}

int CALLBACK SNetSelectGame(int a1, int a2, int a3, int a4, int a5, int* playerid)
{
	return 0;
}

BOOL CALLBACK SNetSelectProvider(LPARAM lparam, int a2, int a3, int a4, int a5, int* providerid)
{
	return 0;
}

BOOL CALLBACK SNetSendMessage(signed int playerID, void* data, int databytes)
{
	return 0;
}

BOOL CALLBACK SNetSendTurn(void* data, int databytes)
{
	return 0;
}

BOOL CALLBACK SNetSetBasePlayer(int a1)
{
	return 0;
}

BOOL CALLBACK SNetSetGameMode(int a1)
{
	return 0;
}

int CALLBACK SNetUnregisterEventHandler(int a1, int callback)
{
	return 0;
}

BOOL CALLBACK SNetEnumGamesEx(int a1, int a2, int(__fastcall* callback)(DWORD*, DWORD*, DWORD*), int* hintnextcall)
{
	return 0;
}

int CALLBACK SNetSendServerChatCommand(char* command)
{
	return 0;
}

BOOL CALLBACK SNet135(signed int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SNet136(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SNet137(int a1)
{
	return 0;
}

BOOL CALLBACK SNetCreateLadderGame(int a1, int a2, int a3, int a4, int a5, int a6, const void* MemSrc, int MemSize, int a9, char* playerName, int a11, int a12)
{
	return 0;
}

BOOL CALLBACK SNetReportGameResult(unsigned int a1, int size, int a3, int a4, int a5)
{
	return 0;
}

BOOL CALLBACK SNetCheckDataFile(int a1, int a2, int a3, int a4)
{
	return 0;
}

int CALLBACK SNetSendLeagueCommand(char* cmd, int a2)
{
	return 0;
}

int CALLBACK SNetSendReplayPath(int a1, int a2, char* replayPath)
{
	return 0;
}

int CALLBACK SNet143(int a1)
{
	return 0;
}

BOOL CALLBACK SNet144(int a1)
{
	return 0;
}

int CALLBACK SNetLeagueLogout(char* bnetName)
{
	return 0;
}

int CALLBACK SNet146(int* curPlayerID, size_t nameSize)
{
	return 0;
}


BOOL CALLBACK SDlgInit()
{
	return 0;
}

HDC CALLBACK SDlgBeginPaint(HWND window, LPPAINTSTRUCT ps)
{
	return 0;
}

int CALLBACK SDlgBltToWindowI(HWND window, HRGN hrgnSrc2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

BOOL __cdecl SDlgCheckTimers()
{
	return 0;
}

int CALLBACK SDlgCreateDialogIndirectParam(HMODULE hModule, LPCSTR lpName, HWND hWndParent, LPVOID lpParam)
{
	return 0;
}

int CALLBACK SDlgCreateDialogParam(int a1, int a2, HWND hWndParent, LPVOID lpParam)
{
	return 0;
}

HGDIOBJ CALLBACK SDlgDefDialogProc(HWND hDlg, signed int DlgType, HDC textLabel, HWND hWnd)
{
	return 0;
}

void CALLBACK SDlgDestroy()
{
	
}

int CALLBACK SDlgDialogBoxIndirectParam(int a1, int a2, HWND hWndParent, LPVOID lpParam, LPARAM lParam)
{
	return 0;
}

int CALLBACK SDlgDialogBoxParam(HMODULE hModule, LPCSTR lpName, HWND hWndParent, LPVOID lpParam, LPARAM lParam)
{
	return 0;
}

int CALLBACK SDlgDrawBitmap(HWND window, HGDIOBJ a2, HRGN hrgnSrc2, int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL CALLBACK SDlgEndDialog(HWND hDlg, HANDLE nResult)
{
	return 0;
}

BOOL CALLBACK SDlgEndPaint(HWND hWnd, PAINTSTRUCT* lpPaint)
{
	return 0;
}

int CALLBACK SDlgKillTimer(int a1, int a2)
{
	return 0;
}

int CALLBACK SDlgSetBaseFont(int a1, int a2, int a3, int a4, char* Source)
{
	return 0;
}

int CALLBACK SDlgSetBitmapI(int a1, int a2, char* Str2, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

int CALLBACK SDlgSetControlBitmaps(HWND parentwindow, int a2, int a3, int a4, int a5, int arg14, int a7)
{
	return 0;
}

int CALLBACK SDlgSetCursor(HWND hWnd, LONG dwNewLong, int a3, int a4)
{
	return 0;
}

int CALLBACK SDlgSetSystemCursor(int a1, int a2, int a3, signed int a4)
{
	return 0;
}

int CALLBACK SDlgSetTimer(int a1, int a2, int a3, int a4)
{
	return 0;
}

int __cdecl SDlgUpdateCursor()
{
	return 0;
}

int CALLBACK SDlgBltToWindowE(HWND hWnd, HRGN a2, char* a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

int CALLBACK SDlgSetBitmapE(int a1, int a2, char* src, int a4, int a5, int a6, int a7, signed int a8, int a9, signed int a10)
{
	return 0;
}

char* CALLBACK SDlgSetLocale(int a1, const char* a2)
{
	return 0;
}

int CALLBACK Ordinal224(int a1)
{
	return 0;
}

BOOL CALLBACK SFileInit()
{
	return 0;
}

int CALLBACK SFileAuthenticateArchive(HANDLE hArchive, int a2)
{
	return 0;
}

BOOL CALLBACK SFileCloseArchive(HANDLE hArchive)
{
	return 0;
}

BOOL CALLBACK SFileCloseFile(HANDLE hFile)
{
	return 0;
}

int CALLBACK SFileDdaBegin(HANDLE hFile, int a2, int a3)
{
	return 0;
}

int CALLBACK SFileDdaBeginEx(HANDLE hFile, signed int a2, unsigned int a3, unsigned __int32 lDistanceToMove, signed int a5, signed int a6, int a7)
{
	return 0;
}

BOOL __cdecl SFileDdaDestroy()
{
	return 0;
}

BOOL CALLBACK SFileDdaEnd(HANDLE directsound)
{
	return 0;
}

BOOL CALLBACK SFileDdaGetPos(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SFileDdaGetVolume(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SFileDdaInitialize(HANDLE directsound)
{
	return 0;
}

BOOL CALLBACK SFileDdaSetVolume(HANDLE directsound, signed int bigvolume, signed int volume)
{
	return 0;
}

BOOL __cdecl SFileDestroy()
{
	return 0;
}

BOOL CALLBACK SFileEnableDirectAccess(HANDLE hFile)
{
	return 0;
}

BOOL CALLBACK SFileGetFileArchive(HANDLE hFile, HANDLE archive)
{
	return 0;
}

LONG CALLBACK SFileGetFileSize(HANDLE hFile, DWORD* lpFileSizeHigh)
{
	return 0;
}

BOOL CALLBACK SFileOpenArchive(const char* archivename, DWORD dwPriority, DWORD dwFlags, HANDLE* handle)
{
	return 0;
}

BOOL CALLBACK SFileOpenFile(const char* filename, HANDLE* handle)
{
	return 0;
}

BOOL CALLBACK SFileOpenFileEx(HANDLE handle, const char* filename, char mode, HANDLE* result)
{
	return 0;
}

BOOL CALLBACK SFileReadFile(HANDLE hFile, const char* buffer, DWORD nNumberOfBytesToRead, int* read, LONG lpDistanceToMoveHigh)
{
	return 0;
}

BOOL CALLBACK SFileSetBasePath(const char* path)
{
	return 0;
}

LONG CALLBACK SFileSetFilePointer(HANDLE hFile, LONG filePos, LONG* filePosHigh, DWORD dwMethod)
{
	return 0;
}

LCID CALLBACK SFileSetLocale(LCID lcLocale)
{
	return 0;
}

BOOL CALLBACK SFileGetBasePath(const char* result, int maxSize)
{
	return 0;
}

BOOL CALLBACK SFileSetIoErrorMode(int a1, int a2)
{
	return 0;
}

BOOL CALLBACK SFileGetArchiveName(HANDLE hArchive, const char* name, int length)
{
	return 0;
}

BOOL CALLBACK SFileGetFileName(HANDLE hFile, const char* buffer, int length)
{
	return 0;
}

int CALLBACK SFileGetArchiveInfo(int a1, int a2, int a3)
{
	return 0;
}

char CALLBACK SFileSetPlatform(char a1)
{
	return 0;
}

int CALLBACK SFileLoadFile(LPCSTR lpFileName, LPVOID lpBuffer, size_t* pSize, size_t extraSizeToAlocate, LPOVERLAPPED lpOverlapped)
{
	return 0;
}

BOOL CALLBACK SFileUnloadFile(void* buffer)
{
	return 0;
}

BOOL CALLBACK SFileLoadFileEx(HANDLE hArchive, const char* filename, LPVOID lpBuffer, size_t* pSize, size_t extraSizeToAlocate, DWORD searchScope, struct _OVERLAPPED* lpOverlapped)
{
	return 0;
}

void CALLBACK SFilePrioritizeRequest(int a1, int a2)
{
	
}

void CALLBACK SFileCancelRequest(int a1)
{
	
}

int CALLBACK SFileSetAsyncBudget(int a1)
{
	return 0;
}

void CALLBACK SFileSetDataChunkSize(int a1)
{
	
}

BOOL CALLBACK SFileOpenFileAsArchive(DWORD a0, LPCSTR lpArchiveName, DWORD dwPriority, DWORD dwFlags, HANDLE* hMpq)
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

BOOL CALLBACK StormGetOption(int type, int optval, size_t optlen)
{
	return 0;
}

BOOL CALLBACK StormSetOption(int type, int optval, size_t optlen)
{
	return 0;
}

BOOL CALLBACK SBltDestroy()
{
	return 0;
}

BOOL CALLBACK SBltGetSCode(unsigned int a1, char* buffer, size_t buffersize, int a4)
{
	return 0;
}

BOOL CALLBACK SBltROP3(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
	return 0;
}

BOOL CALLBACK SBltROP3Clipped(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

BOOL CALLBACK SBltROP3Tiled(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	return 0;
}

BOOL	 CALLBACK SBmpInit()
{
	return 0;
}

BOOL CALLBACK SBmpDecodeImage(int a1, signed int* a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
	return 0;
}

BOOL	 CALLBACK SBmpDestroy()
{
	return 0;
}

BOOL CALLBACK SBmpLoadImage(const char* fileName, int a2, int a3, int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL CALLBACK SBmpSaveImage(const char* fileName, unsigned __int16 width, unsigned __int16 height, int paletteentries, int bitdepth, int bitmapbits)
{
	return 0;
}

HANDLE CALLBACK SBmpAllocLoadImage(const char* fileName, int a2, int a3, int a4, int a5, int a6, int a7, int(CALLBACK* a8)(DWORD*))
{
	return 0;
}

BOOL CALLBACK SBmpSaveImageEx(const char* filename, unsigned __int16 width, unsigned __int16 height, int paletteentries, int bitdepth, int bitmapbits, int reserved)
{
	return 0;
}

BOOL	 CALLBACK SCodeInit()
{
	return 0;
}

BOOL CALLBACK SCodeCompile(char* directives1, char* directives2, int a3, unsigned int a4, unsigned int flags, char* src)
{
	return 0;
}

BOOL CALLBACK SCodeDelete(int handle)
{
	return 0;
}

BOOL	 CALLBACK SCodeDestroy()
{
	return 0;
}

int __cdecl SCodeExecute(int a1, int a2)
{
	return 0;
}

BOOL CALLBACK SCodeGetPseudocode(int scodestring, int buffer, size_t buffersize)
{
	return 0;
}

BOOL	 CALLBACK SDrawInit()
{
	return 0;
}

BOOL CALLBACK SDrawAutoInitialize(HINSTANCE hWnd, LPCSTR lpClassName, LPCSTR lpWindowName, int(CALLBACK* a4)(HWND, UINT, WPARAM, LPARAM), signed int a5, int nWidth, int nHeight, int a8)
{
	return 0;
}

BOOL CALLBACK SDrawCaptureScreen(char* source)
{
	return 0;
}

BOOL CALLBACK SDrawClearSurface(int surfacenumber)
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

HWND CALLBACK SDrawGetFrameWindow(int sdraw_framewindow)
{
	return 0;
}

BOOL CALLBACK SDrawGetObjects(int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, int obj7)
{
	return 0;
}

BOOL CALLBACK SDrawGetScreenSize(int width, int height, int depth)
{
	return 0;
}

BOOL CALLBACK SDrawGetServiceLevel(int a1)
{
	return 0;
}

BOOL CALLBACK SDrawLockSurface(int surfacenumber, RECT* lpDestRect, void** lplpSurface, int* lpPitch, int arg_unused)
{
	return 0;
}

BOOL CALLBACK SDrawManualInitialize(HWND a1, int obj1, int obj2, int obj3, int obj4, int obj5, int obj6, void* obj7)
{
	return 0;
}

int CALLBACK SDrawMessageBox(LPCSTR lpText, LPCSTR lpCaption, UINT uType)
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

int CALLBACK SDrawSelectGdiSurface(unsigned int a1, int a2)
{
	return 0;
}

BOOL CALLBACK SDrawUnlockSurface(int surfacenumber, void* lpSurface, int zero1, int zero2)
{
	return 0;
}

BOOL CALLBACK SDrawUpdatePalette(unsigned int firstentry, unsigned int numentries, PALETTEENTRY* pPalEntries, int a4)
{
	return 0;
}

BOOL CALLBACK SDrawUpdateScreen(int a1)
{
	return 0;
}

int __cdecl SDrawWaitForVerticalBlank()
{
	return 0;
}

BOOL CALLBACK SEvtDispatch(DWORD messageID, int a2, int a3, int a4)
{
	return 0;
}

BOOL CALLBACK SEvtRegisterHandler(DWORD messageID, unsigned int a2, int event, int a4, int a5)
{
	return 0;
}

BOOL CALLBACK SEvtUnregisterHandler(DWORD messageID, int a2, int a3, int a4)
{
	return 0;
}

BOOL CALLBACK SEvtUnregisterType(DWORD messageID, int a2)
{
	return 0;
}

BOOL CALLBACK SEvtPopState(DWORD messageID, int type)
{
	return 0;
}

BOOL CALLBACK SEvtPushState(DWORD messageID, int type)
{
	return 0;
}

BOOL CALLBACK SEvtBreakHandlerChain(int a1)
{
	return 0;
}

BOOL	CALLBACK SGdiInit()
{
	return 0;
}

BOOL CALLBACK SGdiBitBlt(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, unsigned int a8, signed int a9)
{
	return 0;
}

BOOL CALLBACK SGdiCreateFont(const void* handle, int bits, int width, int height, int filecharwidth, int filecharheight, const void* charsizetable, int a8)
{
	return 0;
}

BOOL CALLBACK SGdiDeleteObject(int a1)
{
	return 0;
}

BOOL __cdecl SGdiDestroy()
{
	return 0;
}

BOOL CALLBACK SGdiExtTextOut(int a1, int a2, int a3, int a4, unsigned int a8, signed int a6, signed int a7, const char* arg1C, unsigned int arg20)
{
	return 0;
}

BOOL CALLBACK SGdiImportFont(HGDIOBJ handle, int windowsfont)
{
	return 0;
}

BOOL CALLBACK SGdiLoadFont(char* Str, int a5, int a6, int argC, int a7, int a8)
{
	return 0;
}

BOOL CALLBACK SGdiRectangle(int a1, int a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

BOOL CALLBACK SGdiSelectObject(int a1)
{
	return 0;
}

BOOL CALLBACK SGdiSetPitch(int pitch)
{
	return 0;
}

BOOL CALLBACK SGdiTextOut(int a1, int a2, int a3, unsigned int a8, const char* arg1C, unsigned int arg20)
{
	return 0;
}

BOOL CALLBACK SGdi392(int, int, int, int)
{
	return 0;
}

BOOL CALLBACK Ordinal393(int, int, int)
{
	return 0;
}

BOOL	CALLBACK SMemInit()
{
	return 0;
}

void* CALLBACK SMemAlloc(int amount, char* logfilename, int logline, int defaultValue)
{
	return 0;
}

BOOL __cdecl SMemDestroy()
{
	return 0;
}

BOOL CALLBACK SMemFree(void* location, char* logfilename, int logline, int defaultValue)
{
	return 0;
}

int CALLBACK SMemGetSize(void* location, char* logfilename, int logline)
{
	return 0;
}

void* CALLBACK SMemReAlloc(void* location, int amount, char* logfilename, int logline, int defaultValue)
{
	return 0;
}

BOOL CALLBACK SMsgDispatchMessage(HWND hWnd, DWORD messageID, WPARAM wParam, LPARAM lParam, int a5, int a6)
{
	return 0;
}

WPARAM CALLBACK SMsgDoMessageLoop(void* callback, int followWithStormDestroy)
{
	return 0;
}

BOOL CALLBACK SMsgRegisterCommand(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SMsgRegisterKeyDown(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SMsgRegisterKeyUp(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SMsgRegisterMessage(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SMsgPopRegisterState(int type)
{
	return 0;
}

BOOL CALLBACK SMsgPushRegisterState(int type)
{
	return 0;
}

BOOL CALLBACK SMsg420(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SRegLoadData(char* keyname, char* valuename, HKEY phkResult, LPBYTE lpData, int a5, DWORD* lpcbData)
{
	return 0;
}

BOOL CALLBACK SRegLoadString(char* keyname, char* valuename, int a3, char* buffer, size_t buffersize)
{
	return 0;
}

BOOL CALLBACK SRegLoadValue(char* keyname, char* valuename, int a3, int value)
{
	return 0;
}

BOOL CALLBACK SRegSaveData(char* keyname, char* valuename, BYTE flags, BYTE* lpData, DWORD cbData)
{
	return 0;
}

BOOL CALLBACK SRegSaveString(char* keyname, char* valuename, BYTE flags, char* string)
{
	return 0;
}

BOOL CALLBACK SRegSaveValue(char* keyname, char* valuename, BYTE flags, DWORD result)
{
	return 0;
}

BOOL CALLBACK SRegGetBaseKey(char flags, char* buffer, size_t bufferchars)
{
	return 0;
}

BOOL CALLBACK SReg428(char* keyname, char* valuename, HKEY phkResult)
{
	return 0;
}

BOOL CALLBACK SReg429(char* keyname, DWORD dwflags, DWORD dwIndex, char*, size_t)
{
	return 0;
}

BOOL CALLBACK SReg430(char* keyname, int, DWORD cSubKeys)
{
	return 0;
}

BOOL CALLBACK STransBlt(int a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

BOOL CALLBACK STransBltUsingMask(int a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

BOOL CALLBACK STransCreateI(int a1, int a2, int a3, signed int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL CALLBACK STransDelete(int a1)
{
	return 0;
}

BOOL	CALLBACK STransDestroy()
{
	return 0;
}

BOOL CALLBACK STransDuplicate(int handle, int source)
{
	return 0;
}

BOOL CALLBACK STransIntersectDirtyArray(int handle, int dirtyarraymask, unsigned __int8 dirtyarray, int sourcemask)
{
	return 0;
}

BOOL CALLBACK STransInvertMask(int handle, int sourcemask)
{
	return 0;
}

BOOL CALLBACK STransLoadI(char* filename, int a5, int a6, int handle)
{
	return 0;
}

BOOL CALLBACK STransSetDirtyArrayInfo(signed int depth, int depth2, int height, int width)
{
	return 0;
}

BOOL CALLBACK STransUpdateDirtyArray(int a1, char a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

BOOL CALLBACK STrans442(int, int, int, char*, size_t)
{
	return 0;
}

BOOL CALLBACK STransCombineMasks(int, int, int, int, int, int)
{
	return 0;
}

BOOL CALLBACK STransCreateE(int, int, int, int, int, int, int)
{
	return 0;
}

BOOL CALLBACK STrans446(int, int, int, int, int, int, int)
{
	return 0;
}

BOOL CALLBACK STransLoadE(char* filename, int, int, int handle)
{
	return 0;
}

BOOL	CALLBACK SVidInit()
{
	return 0;
}

BOOL __cdecl SVidDestroy()
{
	return 0;
}

BOOL CALLBACK SVidGetSize(int video, int a2, int a3, int a4)
{
	return 0;
}

BOOL CALLBACK SVidInitialize(int arg0)
{
	return 0;
}

BOOL CALLBACK SVidPlayBegin(char* filename, int arg4, int a3, int a4, int a5, int a6, int a7)
{
	return 0;
}

BOOL CALLBACK SVidPlayBeginFromMemory(void* destbuffer, int destsize, int arg4, int a3, int a4, int a6, int sourcebytes, int sourceptr)
{
	return 0;
}

BOOL __cdecl SVidPlayContinue()
{
	return 0;
}

BOOL CALLBACK SVidPlayContinueSingle(int video, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SVidPlayEnd(int video)
{
	return 0;
}

BOOL CALLBACK SVidSetVolume(int video, int a2, int a3, int type)
{
	return 0;
}

int CALLBACK SErrDisplayError(DWORD dwMessageId, char* logfile, int logline, char a3, int a4, UINT uExitCode)
{
	return 0;
}

int CALLBACK SErrGetErrorStr(DWORD dwMessageId, char* buffer, size_t bufferchars)
{
	return 0;
}

DWORD __cdecl SErrGetLastError()
{
	return 0;
}

BOOL CALLBACK SErrRegisterMessageSource(__int16 a1, int a2, int a3)
{
	return 0;
}

void CALLBACK SErrSetLastError(DWORD dwErrCode)
{
	
}

int CALLBACK SErrReportNamedResourceLeak(char* resourceName, int)
{
	return 0;
}

int CALLBACK SErrReportResourceLeak(char* resourceName)
{
	return 0;
}

BOOL CALLBACK SErrSuppressErrors(BOOL suppressErrors)
{
	return 0;
}

int CALLBACK SErrRegisterHandler(int)
{
	return 0;
}

void CALLBACK SErr470(int)
{
	
}

BOOL CALLBACK SCmdGetBool(int a1)
{
	return 0;
}

int CALLBACK SCmdGetNum(int a1)
{
	return 0;
}

BOOL CALLBACK SCmdGetString(int a1, char* dest, size_t size)
{
	return 0;
}

BOOL CALLBACK SCmdProcess(const char** string, int a2, int a3, int a4)
{
	return 0;
}

BOOL CALLBACK SCmdRegisterArgList(int, int)
{
	return 0;
}

BOOL CALLBACK SCmdRegisterArgument(int a1, int a2, char* str, int a4, int a5, int a6, int a7, int a8)
{
	return 0;
}

int CALLBACK SCmd478(int)
{
	return 0;
}

BOOL CALLBACK SCmdProcessCommandLine(int, int)
{
	return 0;
}

BOOL	CALLBACK SMemInit2()
{
	return 0;
}

BOOL CALLBACK SMemFindNextBlock(int, int, int, int)
{
	return 0;
}

BOOL CALLBACK SMemFindNextHeap(int prevheap, int details, int nextheap)
{
	return 0;
}

int CALLBACK SMemGetHeapByCaller(int, int)
{
	return 0;
}

int CALLBACK SMemGetHeapByPtr(int)
{
	return 0;
}

int CALLBACK SMemHeapAlloc(int, int, int)
{
	return 0;
}

int CALLBACK SMemHeapCreate(int, int, int, char, DWORD ExitCode)
{
	return 0;
}

BOOL CALLBACK SMemHeapDestroy(int)
{
	return 0;
}

BOOL CALLBACK SMemHeapFree(int a1, int a2, void* a3)
{
	return 0;
}

int CALLBACK SMemHeapRealloc(int a1, int a2, void* a3, int a4)
{
	return 0;
}

int CALLBACK SMemHeapSize(int a1, int a2, void* a3)
{
	return 0;
}

int CALLBACK SMemCopy(void* dest, const void* source, size_t size)
{
	return 0;
}

int CALLBACK SMemFill(void* location, size_t length, char fillWith)
{
	return 0;
}

int CALLBACK SMemMove(void* dest, void* source, size_t size)
{
	return 0;
}

int CALLBACK SMemZero(void* location, size_t length)
{
	return 0;
}

int CALLBACK SMemCmp(void* location1, void* location2, size_t size)
{
	return 0;
}

int CALLBACK SMem496(int, char)
{
	return 0;
}

BOOL CALLBACK SMemDumpState(int, int)
{
	return 0;
}

BOOL	CALLBACK SStrInit()
{
	return 0;
}

int CALLBACK SStrCopy(char* dest, const char* source, size_t size)
{
	return 0;
}

DWORD CALLBACK SStrHash(const char* string, unsigned long flags, unsigned long Seed)
{
	return 0;
}

int CALLBACK SStrNCat(char* base, char* _new, int max_length)
{
	return 0;
}

void CALLBACK SStrTokenize(const char** string, char* (*string2), char* buffer, const char* whitespace, size_t size)
{
	
}

char* CALLBACK SStr505(const char* string, char c, int type)
{
	return 0;
}

int CALLBACK SStrLen(const char* string)
{
	return 0;
}

void* CALLBACK SStrDup(int a1)
{
	return 0;
}

int CALLBACK SStrCmp(const char* string1, const char* string2, size_t size)
{
	return 0;
}

int CALLBACK SStrCmpI(const char* string1, const char* string2, size_t size)
{
	return 0;
}

int CALLBACK SStrUpper(char* string)
{
	return 0;
}

BOOL CALLBACK SMsgBreakHandlerChain(int a1)
{
	return 0;
}

BOOL CALLBACK SMsgUnregisterCommand(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SMsgUnregisterKeyDown(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SMsgUnregisterKeyUp(int a1, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SMsgUnregisterMessage(int a1, int a2, int a3)
{
	return 0;
}

int CALLBACK SMsg516(int a1)
{
	return 0;
}

BOOL CALLBACK SMsgSetDefaultWindow(int a1)
{
	return 0;
}

HWND __cdecl SMsgGetDefaultWindow()
{
	return 0;
}

BOOL CALLBACK SMsg519(int a1, int a2, int a3)
{
	return 0;
}

int CALLBACK Ordinal521(int a1)
{
	return 0;
}

void CALLBACK SRgn523(int handle, int a2, int a3, int a4)
{
	
}

void CALLBACK SRgn524(int handle, int a2)
{
	
}

void CALLBACK SRgn525(int handle)
{
	
}

void CALLBACK SRgn527(int handle, int a2, int a3)
{
	
}

void CALLBACK SRgn528i(int handle, int a2, int a3, int a4)
{
	
}

void CALLBACK SRgn529i(int handle, int a2, int a3)
{
	
}

void CALLBACK SRgn530i(int handle, int a2)
{
	
}

BOOL CALLBACK SRgn531i(int handle, int a2, int a3)
{
	return 0;
}

BOOL CALLBACK SRgn532i(int handle, int a2)
{
	return 0;
}

void CALLBACK SRgn533i(int handle, int a2, int a3)
{
	
}

void CALLBACK SRgn534(int handle, int a2, int a3, int a4)
{
	
}

void CALLBACK SRgn535f(int handle, float a2, float a3, float a4)
{
	
}

void CALLBACK SRgn536f(int handle, float a2, float a3)
{
	
}

void CALLBACK SRgn537f(int handle, float a2)
{
	
}

BOOL CALLBACK SRgn538f(int handle, float a2, float a3)
{
	return 0;
}

BOOL CALLBACK SRgn539f(int handle, float a2)
{
	return 0;
}

void CALLBACK SRgn540f(int handle, float a2, float a3)
{
	
}

void CALLBACK SLogClose(DWORD NumberOfBytesWritten)
{
	
}

HANDLE CALLBACK SLogCreate(char* filename, int a2, int a3)
{
	return 0;
}

void CALLBACK SLog543(int a1, int a2)
{
	
}

void CALLBACK SLogDump(int a1, int a2, DWORD NumberOfBytesWritten)
{
	
}

void CALLBACK SLogFlush(DWORD NumberOfBytesWritten)
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

void CALLBACK SLog549(int a1, int a2)
{
	
}

void CALLBACK SLog550(HANDLE handle, int a2)
{
	
}

BOOL CALLBACK SCompCompress(void* a1, int a2, unsigned int a3, signed int amount, int a5, char a6, int a7)
{
	return 0;
}

BOOL CALLBACK SCompDecompress(void* a1, int* a2, const void* a3, unsigned int a4)
{
	return 0;
}

void __cdecl SLogVWrite(HANDLE handle, char* format, ...)
{
	
}

BOOL CALLBACK SErrInit()
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

int CALLBACK SErrPrepareAppFatal(int a1, int a2)
{
	return 0;
}

int CALLBACK SErrSetLogTitleString(int a1)
{
	return 0;
}

int CALLBACK SErrDisplayAppFatal(int a1)
{
	return 0;
}

LPTOP_LEVEL_EXCEPTION_FILTER __cdecl SErrCatchUnhandledExceptions()
{
	return 0;
}

char* CALLBACK SStrChr(char* string, char c)
{
	return 0;
}

char* CALLBACK SStrChrR(char* string, char c)
{
	return 0;
}

char* CALLBACK SStrChr(const char* string, char c)
{
	return 0;
}

char* CALLBACK SStrChrR(const char* string, char c)
{
	return 0;
}

double CALLBACK SStrToDouble(const char* string)
{
	return 0;
}

float CALLBACK SStrToFloat(const char* string)
{
	return 0;
}

signed int CALLBACK SStrToInt(const char* string)
{
	return 0;
}

unsigned int CALLBACK SStrToUnsigned(const char* string)
{
	return 0;
}

__int64 CALLBACK SStrToInt64(const char* string)
{
	return 0;
}

int __cdecl SStrVPrintf(char* dest, size_t size, const char* format, ...)
{
	return 0;
}

int CALLBACK SStrLower(char* string)
{
	return 0;
}

int CALLBACK Ordinal580(int a1, int a2, int a3, int a4)
{
	return 0;
}

int __cdecl SStrPrintf(char* dest, size_t size, const char* format, ...)
{
	return 0;
}

void CALLBACK Ordinal582(LPRECT lpRect)
{
	
}

int CALLBACK Ordinal583(LPRECT lpRect)
{
	return 0;
}

int CALLBACK SStrStrI(char* string, const char* search)
{
	return 0;
}

int CALLBACK SStrStrI(const char* string, const char* search)
{
	return 0;
}

int CALLBACK SStrStr(char* string, const char* search)
{
	return 0;
}

int CALLBACK SStrStr(const char* string, const char* search)
{
	return 0;
}

int CALLBACK SNet588(char* a1, char* a2)
{
	return 0;
}

BOOL	 CALLBACK SBigInit()
{
	return 0;
}

int CALLBACK SBigAdd(void* buffer, const void* buffer2, const void* buffer3)
{
	return 0;
}

int CALLBACK SBigAnd(void* buffer, const void* buffer2, const void* buffer3)
{
	return 0;
}

int CALLBACK SBigCompare(void* buffer, void* buffer2)
{
	return 0;
}

int CALLBACK SBigCopy(void* buffer, void* buffer2)
{
	return 0;
}

int CALLBACK SBigDec(void* buffer, const void* buffer2)
{
	return 0;
}

int CALLBACK SBigDel(void* buffer)
{
	return 0;
}

int CALLBACK SBigDiv(int a1, const void* buffer1, const void* buffer2)
{
	return 0;
}

int CALLBACK SBigFindPrime(int a1, void* a2, unsigned int a3, const void* a4)
{
	return 0;
}

int CALLBACK SBigFromBinary(void* buffer, const void* str, size_t size)
{
	return 0;
}

int CALLBACK SBigFromStr(void* buffer, int a2)
{
	return 0;
}

int CALLBACK SBigFromStream(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int CALLBACK SBigFromUnsigned(void* buffer, unsigned int value)
{
	return 0;
}

int CALLBACK SBigGcd(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigInc(void* buffer, int a2)
{
	return 0;
}

int CALLBACK SBigInvMod(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigIsEven(void* buffer)
{
	return 0;
}

int CALLBACK SBigIsOdd(void* buffer)
{
	return 0;
}

int CALLBACK SBigIsOne(void* buffer)
{
	return 0;
}

int CALLBACK SBigIsPrime(void* buffer)
{
	return 0;
}

int CALLBACK SBigIsZero(void* buffer)
{
	return 0;
}

int CALLBACK SBigMod(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigMul(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigMulMod(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int CALLBACK SBigNew(void** buffer)
{
	return 0;
}

int CALLBACK SBigNot(void* buffer, int a2)
{
	return 0;
}

int CALLBACK SBigOr(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigPow(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigPowMod(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int CALLBACK SBigRand(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigSet2Exp(void* buffer, int a2)
{
	return 0;
}

int CALLBACK SBigSetOne(void* buffer)
{
	return 0;
}

int CALLBACK SBigSetZero(void* buffer)
{
	return 0;
}

int CALLBACK SBigShl(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigShr(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigSquare(void* buffer, int a2)
{
	return 0;
}

int CALLBACK SBigSub(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigToBinaryArray(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigToBinaryBuffer(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int CALLBACK SBigToBinaryPtr(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigToStrArray(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigToStrBuffer(void* buffer, char* dst, int count)
{
	return 0;
}

int CALLBACK SBigToStrPtr(void* buffer, int a2)
{
	return 0;
}

int CALLBACK SBigToStreamArray(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigToStreamBuffer(void* buffer, int a2, int a3, int a4)
{
	return 0;
}

int CALLBACK SBigToStreamPtr(void* buffer, int a2, int a3)
{
	return 0;
}

int CALLBACK SBigToUnsigned(void* buffer, int a2)
{
	return 0;
}

int CALLBACK SBigXor(void* buffer, int a2, int a3)
{
	return 0;
}

BOOL	 CALLBACK SSignatureVerify(int, int, int, int)
{
	return 0;
}

BOOL	 CALLBACK SSignatureVerifyStream_Begin(int)
{
	return 0;
}

BOOL	 CALLBACK SSignatureVerifyStream_ProvideData(int)
{
	return 0;
}

BOOL	 CALLBACK SSignatureVerifyStream_Finish(int)
{
	return 0;
}

BOOL	 CALLBACK SSignatureGenerate(int, int, int, int, int, int)
{
	return 0;
}

BOOL	 CALLBACK SSignatureVerifyStream_GetSignatureLength()
{
	return 0;
}

BOOL	 CALLBACK SUniInit()
{
	return 0;
}

int CALLBACK SUniConvertUTF16to8Len(int a1, int a2, int a3)
{
	return 0;
}

int CALLBACK SUniConvertUTF16to8(int a1, int a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

int CALLBACK SUniConvertUTF8to16Len(int a1, int a2, int a3)
{
	return 0;
}

int CALLBACK SUniConvertUTF8to16(int a1, int a2, int a3, int a4, int a5, int a6)
{
	return 0;
}

int CALLBACK SUniS905(int a1, int a2)
{
	return 0;
}

int CALLBACK SUniS906(int a1, int a2)
{
	return 0;
}

int CALLBACK SUniFindAfterUTF8Chr(int a1, int a2)
{
	return 0;
}

int CALLBACK SUniFindUTF8ChrStart(int a1, int a2)
{
	return 0;
}

int CALLBACK SUniConvertUTF16To909(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}

int CALLBACK SUniConvertUTF16To910(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}

int CALLBACK SUniConvertUTF16To911(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}

int CALLBACK SUniConvert912(int a1, int a2, int a3)
{
	return 0;
}

int CALLBACK SUniConvert913(int a1, int a2, int a3)
{
	return 0;
}

int CALLBACK SUniConvert914(int a1, int a2, int a3)
{
	return 0;
}

int CALLBACK SUniConvertUTF8ToWin(unsigned __int32 a1, char* a2, unsigned __int16* a3)
{
	return 0;
}