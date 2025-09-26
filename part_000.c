typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef unsigned short    wchar16;
typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
    ESTypeList *pESTypeList;
    int EHFlags;
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _nlsversioninfo _nlsversioninfo, *P_nlsversioninfo;

typedef struct _nlsversioninfo *LPNLSVERSIONINFO;

typedef ulong DWORD;

struct _nlsversioninfo {
    DWORD dwNLSVersionInfoSize;
    DWORD dwNLSVersion;
    DWORD dwDefinedVersion;
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct GuardCfgTableEntry GuardCfgTableEntry, *PGuardCfgTableEntry;

struct GuardCfgTableEntry {
    ImageBaseOffset32 Offset;
    byte Pad[1];
};

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void *LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef long LONG;

typedef wchar_t WCHAR;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef union _RTL_RUN_ONCE _RTL_RUN_ONCE, *P_RTL_RUN_ONCE;

typedef union _RTL_RUN_ONCE *PRTL_RUN_ONCE;

typedef PRTL_RUN_ONCE LPINIT_ONCE;

union _RTL_RUN_ONCE {
    PVOID Ptr;
};

typedef void (*PFIBER_START_ROUTINE)(LPVOID);

typedef struct _BY_HANDLE_FILE_INFORMATION _BY_HANDLE_FILE_INFORMATION, *P_BY_HANDLE_FILE_INFORMATION;

struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef enum _FINDEX_INFO_LEVELS {
    FindExInfoStandard=0,
    FindExInfoBasic=1,
    FindExInfoMaxInfoLevel=2
} _FINDEX_INFO_LEVELS;

typedef enum _FINDEX_INFO_LEVELS FINDEX_INFO_LEVELS;

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo=0,
    FileStandardInfo=1,
    FileNameInfo=2,
    FileRenameInfo=3,
    FileDispositionInfo=4,
    FileAllocationInfo=5,
    FileEndOfFileInfo=6,
    FileStreamInfo=7,
    FileCompressionInfo=8,
    FileAttributeTagInfo=9,
    FileIdBothDirectoryInfo=10,
    FileIdBothDirectoryRestartInfo=11,
    FileIoPriorityHintInfo=12,
    FileRemoteProtocolInfo=13,
    MaximumFileInfoByHandleClass=14
} _FILE_INFO_BY_HANDLE_CLASS;

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef enum _FINDEX_SEARCH_OPS {
    FindExSearchNameMatch=0,
    FindExSearchLimitToDirectories=1,
    FindExSearchLimitToDevices=2,
    FindExSearchMaxSearchOp=3
} _FINDEX_SEARCH_OPS;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _MEMORYSTATUSEX _MEMORYSTATUSEX, *P_MEMORYSTATUSEX;

typedef double ULONGLONG;

typedef ULONGLONG DWORDLONG;

struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
};

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef struct _TIME_ZONE_INFORMATION TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef PFIBER_START_ROUTINE LPFIBER_START_ROUTINE;

typedef enum _FILE_INFO_BY_HANDLE_CLASS FILE_INFO_BY_HANDLE_CLASS;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _MEMORYSTATUSEX *LPMEMORYSTATUSEX;

typedef enum _FINDEX_SEARCH_OPS FINDEX_SEARCH_OPS;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK *PSRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef struct _BY_HANDLE_FILE_INFORMATION *LPBY_HANDLE_FILE_INFORMATION;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef void (*PTIMERAPCROUTINE)(LPVOID, DWORD, DWORD);

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef struct tagFUNCDESC tagFUNCDESC, *PtagFUNCDESC;

typedef LONG DISPID;

typedef DISPID MEMBERID;

typedef LONG SCODE;

typedef struct tagELEMDESC tagELEMDESC, *PtagELEMDESC;

typedef struct tagELEMDESC ELEMDESC;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL=0,
    FUNC_PUREVIRTUAL=1,
    FUNC_NONVIRTUAL=2,
    FUNC_STATIC=3,
    FUNC_DISPATCH=4
} tagFUNCKIND;

typedef enum tagFUNCKIND FUNCKIND;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC=1,
    INVOKE_PROPERTYGET=2,
    INVOKE_PROPERTYPUT=4,
    INVOKE_PROPERTYPUTREF=8
} tagINVOKEKIND;

typedef enum tagINVOKEKIND INVOKEKIND;

typedef enum tagCALLCONV {
    CC_FASTCALL=0,
    CC_CDECL=1,
    CC_MSCPASCAL=2,
    CC_PASCAL=3,
    CC_MACPASCAL=4,
    CC_STDCALL=5,
    CC_FPFASTCALL=6,
    CC_SYSCALL=7,
    CC_MPWCDECL=8,
    CC_MPWPASCAL=9,
    CC_MAX=10
} tagCALLCONV;

typedef enum tagCALLCONV CALLCONV;

typedef short SHORT;

typedef struct tagTYPEDESC tagTYPEDESC, *PtagTYPEDESC;

typedef struct tagTYPEDESC TYPEDESC;

typedef union _union_2702 _union_2702, *P_union_2702;

typedef union _union_2691 _union_2691, *P_union_2691;

typedef ushort VARTYPE;

typedef struct tagIDLDESC tagIDLDESC, *PtagIDLDESC;

typedef struct tagIDLDESC IDLDESC;

typedef struct tagPARAMDESC tagPARAMDESC, *PtagPARAMDESC;

typedef struct tagPARAMDESC PARAMDESC;

typedef struct tagARRAYDESC tagARRAYDESC, *PtagARRAYDESC;

typedef DWORD HREFTYPE;

typedef ushort USHORT;

typedef struct tagPARAMDESCEX tagPARAMDESCEX, *PtagPARAMDESCEX;

typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

typedef DWORD ULONG;

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

typedef struct tagVARIANT VARIANT;

typedef VARIANT VARIANTARG;

typedef union _union_2683 _union_2683, *P_union_2683;

typedef struct __tagVARIANT __tagVARIANT, *P__tagVARIANT;

typedef struct tagDEC tagDEC, *PtagDEC;

typedef struct tagDEC DECIMAL;

typedef union _union_2685 _union_2685, *P_union_2685;

typedef union _union_1695 _union_1695, *P_union_1695;

typedef union _union_1697 _union_1697, *P_union_1697;

typedef double LONGLONG;

typedef float FLOAT;

typedef double DOUBLE;

typedef short VARIANT_BOOL;

typedef union tagCY tagCY, *PtagCY;

typedef union tagCY CY;

typedef double DATE;

typedef WCHAR OLECHAR;

typedef OLECHAR *BSTR;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef int INT;

typedef struct __tagBRECORD __tagBRECORD, *P__tagBRECORD;

typedef struct _struct_1696 _struct_1696, *P_struct_1696;

typedef struct _struct_1698 _struct_1698, *P_struct_1698;

typedef struct _struct_1693 _struct_1693, *P_struct_1693;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef long HRESULT;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

typedef DWORD LCID;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

typedef OLECHAR *LPOLESTR;

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

typedef struct tagDISPPARAMS DISPPARAMS;

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

typedef struct tagEXCEPINFO EXCEPINFO;

typedef struct IRecordInfo IRecordInfo, *PIRecordInfo;

typedef struct ITypeInfoVtbl ITypeInfoVtbl, *PITypeInfoVtbl;

typedef struct tagTYPEATTR tagTYPEATTR, *PtagTYPEATTR;

typedef struct tagTYPEATTR TYPEATTR;

typedef struct ITypeComp ITypeComp, *PITypeComp;

typedef struct tagFUNCDESC FUNCDESC;

typedef struct tagVARDESC tagVARDESC, *PtagVARDESC;

typedef struct tagVARDESC VARDESC;

typedef struct ITypeLib ITypeLib, *PITypeLib;

typedef struct IRecordInfoVtbl IRecordInfoVtbl, *PIRecordInfoVtbl;

typedef OLECHAR *LPCOLESTR;

typedef enum tagTYPEKIND {
    TKIND_ENUM=0,
    TKIND_RECORD=1,
    TKIND_MODULE=2,
    TKIND_INTERFACE=3,
    TKIND_DISPATCH=4,
    TKIND_COCLASS=5,
    TKIND_ALIAS=6,
    TKIND_UNION=7,
    TKIND_MAX=8
} tagTYPEKIND;

typedef enum tagTYPEKIND TYPEKIND;

typedef struct ITypeCompVtbl ITypeCompVtbl, *PITypeCompVtbl;

typedef enum tagDESCKIND {
    DESCKIND_NONE=0,
    DESCKIND_FUNCDESC=1,
    DESCKIND_VARDESC=2,
    DESCKIND_TYPECOMP=3,
    DESCKIND_IMPLICITAPPOBJ=4,
    DESCKIND_MAX=5
} tagDESCKIND;

typedef enum tagDESCKIND DESCKIND;

typedef union tagBINDPTR tagBINDPTR, *PtagBINDPTR;

typedef union tagBINDPTR BINDPTR;

typedef union _union_2711 _union_2711, *P_union_2711;

typedef enum tagVARKIND {
    VAR_PERINSTANCE=0,
    VAR_STATIC=1,
    VAR_CONST=2,
    VAR_DISPATCH=3
} tagVARKIND;

typedef enum tagVARKIND VARKIND;

typedef struct ITypeLibVtbl ITypeLibVtbl, *PITypeLibVtbl;

typedef struct tagTLIBATTR tagTLIBATTR, *PtagTLIBATTR;

typedef struct tagTLIBATTR TLIBATTR;

typedef enum tagSYSKIND {
    SYS_WIN16=0,
    SYS_WIN32=1,
    SYS_MAC=2,
    SYS_WIN64=3
} tagSYSKIND;

typedef enum tagSYSKIND SYSKIND;

struct _struct_1693 {
    ulong Lo;
    long Hi;
};

union tagCY {
    struct _struct_1693 s;
    LONGLONG int64;
};

struct _struct_1698 {
    ULONG Lo32;
    ULONG Mid32;
};

union _union_1697 {
    struct _struct_1698 s2;
    ULONGLONG Lo64;
};

struct _struct_1696 {
    BYTE scale;
    BYTE sign;
};

union _union_1695 {
    struct _struct_1696 s;
    USHORT signscale;
};

struct tagDEC {
    USHORT wReserved;
    union _union_1695 u;
    ULONG Hi32;
    union _union_1697 u2;
};

struct __tagBRECORD {
    PVOID pvRecord;
    struct IRecordInfo *pRecInfo;
};

union _union_2685 {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    struct IUnknown *punkVal;
    struct IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    struct IUnknown **ppunkVal;
    struct IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    struct __tagBRECORD brecVal;
};

struct __tagVARIANT {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    union _union_2685 n3;
};

union _union_2683 {
    struct __tagVARIANT n2;
    DECIMAL decVal;
};

union _union_2691 {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
};

struct tagTYPEDESC {
    union _union_2691 u;
    VARTYPE vt;
};

struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
};

struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
};

union _union_2702 {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
};

struct tagELEMDESC {
    TYPEDESC tdesc;
    union _union_2702 u;
};

struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
};

struct tagVARIANT {
    union _union_2683 n1;
};

struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
};

union _union_2711 {
    ULONG oInst;
    VARIANT *lpvarValue;
};

struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union _union_2711 u;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
};

struct ITypeCompVtbl {
    HRESULT (*QueryInterface)(struct ITypeComp *, IID *, void **);
    ULONG (*AddRef)(struct ITypeComp *);
    ULONG (*Release)(struct ITypeComp *);
    HRESULT (*Bind)(struct ITypeComp *, LPOLESTR, ULONG, WORD, struct ITypeInfo **, DESCKIND *, BINDPTR *);
    HRESULT (*BindType)(struct ITypeComp *, LPOLESTR, ULONG, struct ITypeInfo **, struct ITypeComp **);
};

struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
};

struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[1];
};

struct ITypeInfoVtbl {
    HRESULT (*QueryInterface)(struct ITypeInfo *, IID *, void **);
    ULONG (*AddRef)(struct ITypeInfo *);
    ULONG (*Release)(struct ITypeInfo *);
    HRESULT (*GetTypeAttr)(struct ITypeInfo *, TYPEATTR **);
    HRESULT (*GetTypeComp)(struct ITypeInfo *, struct ITypeComp **);
    HRESULT (*GetFuncDesc)(struct ITypeInfo *, UINT, FUNCDESC **);
    HRESULT (*GetVarDesc)(struct ITypeInfo *, UINT, VARDESC **);
    HRESULT (*GetNames)(struct ITypeInfo *, MEMBERID, BSTR *, UINT, UINT *);
    HRESULT (*GetRefTypeOfImplType)(struct ITypeInfo *, UINT, HREFTYPE *);
    HRESULT (*GetImplTypeFlags)(struct ITypeInfo *, UINT, INT *);
    HRESULT (*GetIDsOfNames)(struct ITypeInfo *, LPOLESTR *, UINT, MEMBERID *);
    HRESULT (*Invoke)(struct ITypeInfo *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetDocumentation)(struct ITypeInfo *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*GetDllEntry)(struct ITypeInfo *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
    HRESULT (*GetRefTypeInfo)(struct ITypeInfo *, HREFTYPE, struct ITypeInfo **);
    HRESULT (*AddressOfMember)(struct ITypeInfo *, MEMBERID, INVOKEKIND, PVOID *);
    HRESULT (*CreateInstance)(struct ITypeInfo *, struct IUnknown *, IID *, PVOID *);
    HRESULT (*GetMops)(struct ITypeInfo *, MEMBERID, BSTR *);
    HRESULT (*GetContainingTypeLib)(struct ITypeInfo *, struct ITypeLib **, UINT *);
    void (*ReleaseTypeAttr)(struct ITypeInfo *, TYPEATTR *);
    void (*ReleaseFuncDesc)(struct ITypeInfo *, FUNCDESC *);
    void (*ReleaseVarDesc)(struct ITypeInfo *, VARDESC *);
};

struct ITypeLibVtbl {
    HRESULT (*QueryInterface)(struct ITypeLib *, IID *, void **);
    ULONG (*AddRef)(struct ITypeLib *);
    ULONG (*Release)(struct ITypeLib *);
    UINT (*GetTypeInfoCount)(struct ITypeLib *);
    HRESULT (*GetTypeInfo)(struct ITypeLib *, UINT, struct ITypeInfo **);
    HRESULT (*GetTypeInfoType)(struct ITypeLib *, UINT, TYPEKIND *);
    HRESULT (*GetTypeInfoOfGuid)(struct ITypeLib *, GUID *, struct ITypeInfo **);
    HRESULT (*GetLibAttr)(struct ITypeLib *, TLIBATTR **);
    HRESULT (*GetTypeComp)(struct ITypeLib *, struct ITypeComp **);
    HRESULT (*GetDocumentation)(struct ITypeLib *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*IsName)(struct ITypeLib *, LPOLESTR, ULONG, BOOL *);
    HRESULT (*FindName)(struct ITypeLib *, LPOLESTR, ULONG, struct ITypeInfo **, MEMBERID *, USHORT *);
    void (*ReleaseTLibAttr)(struct ITypeLib *, TLIBATTR *);
};

struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
};

struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    SAFEARRAYBOUND rgbounds[1];
};

struct ITypeComp {
    struct ITypeCompVtbl *lpVtbl;
};

struct IRecordInfo {
    struct IRecordInfoVtbl *lpVtbl;
};

struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
};

struct IRecordInfoVtbl {
    HRESULT (*QueryInterface)(struct IRecordInfo *, IID *, void **);
    ULONG (*AddRef)(struct IRecordInfo *);
    ULONG (*Release)(struct IRecordInfo *);
    HRESULT (*RecordInit)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordClear)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordCopy)(struct IRecordInfo *, PVOID, PVOID);
    HRESULT (*GetGuid)(struct IRecordInfo *, GUID *);
    HRESULT (*GetName)(struct IRecordInfo *, BSTR *);
    HRESULT (*GetSize)(struct IRecordInfo *, ULONG *);
    HRESULT (*GetTypeInfo)(struct IRecordInfo *, struct ITypeInfo **);
    HRESULT (*GetField)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNoCopy)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
    HRESULT (*PutField)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*PutFieldNoCopy)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNames)(struct IRecordInfo *, ULONG *, BSTR *);
    BOOL (*IsMatchingType)(struct IRecordInfo *, struct IRecordInfo *);
    PVOID (*RecordCreate)(struct IRecordInfo *);
    HRESULT (*RecordCreateCopy)(struct IRecordInfo *, PVOID, PVOID *);
    HRESULT (*RecordDestroy)(struct IRecordInfo *, PVOID);
};

struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
};

union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    struct ITypeComp *lptcomp;
};

struct IDispatch {
    struct IDispatchVtbl *lpVtbl;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

struct ITypeLib {
    struct ITypeLibVtbl *lpVtbl;
};

struct ITypeInfo {
    struct ITypeInfoVtbl *lpVtbl;
};

struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (*pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[35];
};

typedef longlong fpos_t;

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef struct _CONSOLE_READCONSOLE_CONTROL _CONSOLE_READCONSOLE_CONTROL, *P_CONSOLE_READCONSOLE_CONTROL;


// WARNING! conflicting data type names: /WinDef.h/ULONG - /wtypes.h/ULONG

struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
};

typedef struct _CONSOLE_READCONSOLE_CONTROL *PCONSOLE_READCONSOLE_CONTROL;

typedef void (*PMFN)(void *);

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;


// WARNING! conflicting data type names: /ehdata.h/TypeDescriptor - /TypeDescriptor

struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor *pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    PMFN copyFunction;
};

typedef struct _s_CatchableType CatchableType;

typedef struct _s_CatchableTypeArray _s_CatchableTypeArray, *P_s_CatchableTypeArray;

typedef struct _s_CatchableTypeArray CatchableTypeArray;

struct _s_CatchableTypeArray {
    int nCatchableTypes;
    CatchableType *arrayOfCatchableTypes[0];
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int (*pForwardCompat)(void);
    CatchableTypeArray *pCatchableTypeArray;
};

typedef char *va_list;

typedef uint uintptr_t;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

typedef longlong __time64_t;

typedef uint size_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

typedef int errno_t;

typedef struct localeinfo_struct *_locale_t;

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef long LONG_PTR;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef CHAR *LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

struct HWND__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct tagMSG *LPMSG;

typedef struct _ICONINFO _ICONINFO, *P_ICONINFO;

typedef struct _ICONINFO ICONINFO;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
};

struct HBITMAP__ {
    int unused;
};

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef struct tagWNDCLASSEXA WNDCLASSEXA;

struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
};

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

struct HDC__ {
    int unused;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct FLASHWINFO FLASHWINFO, *PFLASHWINFO;

struct FLASHWINFO {
    UINT cbSize;
    HWND hwnd;
    DWORD dwFlags;
    UINT uCount;
    DWORD dwTimeout;
};

typedef ICONINFO *PICONINFO;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct tagWNDCLASSW tagWNDCLASSW, *PtagWNDCLASSW;

typedef struct tagWNDCLASSW WNDCLASSW;

typedef WCHAR *LPCWSTR;

struct tagWNDCLASSW {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
};

typedef BOOL (*WNDENUMPROC)(HWND, LPARAM);

typedef GUID CLSID;

typedef CLSID *LPCLSID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct tagPIXELFORMATDESCRIPTOR tagPIXELFORMATDESCRIPTOR, *PtagPIXELFORMATDESCRIPTOR;

struct tagPIXELFORMATDESCRIPTOR {
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerType;
    BYTE bReserved;
    DWORD dwLayerMask;
    DWORD dwVisibleMask;
    DWORD dwDamageMask;
};

typedef struct tagPIXELFORMATDESCRIPTOR PIXELFORMATDESCRIPTOR;

typedef struct tagPIXELFORMATDESCRIPTOR *LPPIXELFORMATDESCRIPTOR;

typedef PVOID BCRYPT_KEY_HANDLE;

typedef PVOID BCRYPT_HANDLE;

typedef PVOID BCRYPT_ALG_HANDLE;

typedef PVOID BCRYPT_HASH_HANDLE;

typedef LONG NTSTATUS;

typedef struct SC_HANDLE__ SC_HANDLE__, *PSC_HANDLE__;

typedef struct SC_HANDLE__ *SC_HANDLE;

struct SC_HANDLE__ {
    int unused;
};

typedef struct _SERVICE_STATUS _SERVICE_STATUS, *P_SERVICE_STATUS;

struct _SERVICE_STATUS {
    DWORD dwServiceType;
    DWORD dwCurrentState;
    DWORD dwControlsAccepted;
    DWORD dwWin32ExitCode;
    DWORD dwServiceSpecificExitCode;
    DWORD dwCheckPoint;
    DWORD dwWaitHint;
};

typedef struct _SERVICE_STATUS *LPSERVICE_STATUS;

typedef struct _ACTIVATION_CONTEXT _ACTIVATION_CONTEXT, *P_ACTIVATION_CONTEXT;

struct _ACTIVATION_CONTEXT {
};

typedef PVOID PSECURITY_DESCRIPTOR;

typedef struct _TP_WORK _TP_WORK, *P_TP_WORK;

struct _TP_WORK {
};

typedef struct _TP_CLEANUP_GROUP _TP_CLEANUP_GROUP, *P_TP_CLEANUP_GROUP;

struct _TP_CLEANUP_GROUP {
};

typedef union _union_381 _union_381, *P_union_381;

typedef struct _struct_382 _struct_382, *P_struct_382;

struct _struct_382 {
    DWORD LongFunction:1;
    DWORD Persistent:1;
    DWORD Private:30;
};

union _union_381 {
    DWORD Flags;
    struct _struct_382 s;
};

typedef struct _TP_CALLBACK_INSTANCE _TP_CALLBACK_INSTANCE, *P_TP_CALLBACK_INSTANCE;

struct _TP_CALLBACK_INSTANCE {
};

typedef struct _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;

typedef struct _TP_WORK *PTP_WORK;

typedef void (*PTP_WORK_CALLBACK)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK);

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef struct _struct_299 _struct_299, *P_struct_299;

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

struct _struct_299 {
    SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
};

union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_299 s;
};

typedef DWORD TP_VERSION;

typedef struct _OSVERSIONINFOEXA _OSVERSIONINFOEXA, *P_OSVERSIONINFOEXA;

struct _OSVERSIONINFOEXA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
    WORD wServicePackMajor;
    WORD wServicePackMinor;
    WORD wSuiteMask;
    BYTE wProductType;
    BYTE wReserved;
};

typedef struct _ACL _ACL, *P_ACL;

typedef struct _ACL ACL;

typedef ACL *PACL;

struct _ACL {
    BYTE AclRevision;
    BYTE Sbz1;
    WORD AclSize;
    WORD AceCount;
    WORD Sbz2;
};

typedef struct _TP_POOL _TP_POOL, *P_TP_POOL;

struct _TP_POOL {
};

typedef void (*PAPCFUNC)(ULONG_PTR);

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef struct _OSVERSIONINFOEXW _OSVERSIONINFOEXW, *P_OSVERSIONINFOEXW;

struct _OSVERSIONINFOEXW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
    WORD wServicePackMajor;
    WORD wServicePackMinor;
    WORD wSuiteMask;
    BYTE wProductType;
    BYTE wReserved;
};

typedef struct _TP_CALLBACK_ENVIRON_V3 _TP_CALLBACK_ENVIRON_V3, *P_TP_CALLBACK_ENVIRON_V3;

typedef struct _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;

typedef TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;

typedef struct _TP_POOL *PTP_POOL;

typedef struct _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;

typedef void (*PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(PVOID, PVOID);

typedef void (*PTP_SIMPLE_CALLBACK)(PTP_CALLBACK_INSTANCE, PVOID);

typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH=0,
    TP_CALLBACK_PRIORITY_NORMAL=1,
    TP_CALLBACK_PRIORITY_LOW=2,
    TP_CALLBACK_PRIORITY_INVALID=3
} _TP_CALLBACK_PRIORITY;

typedef enum _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;

struct _TP_CALLBACK_ENVIRON_V3 {
    TP_VERSION Version;
    PTP_POOL Pool;
    PTP_CLEANUP_GROUP CleanupGroup;
    PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback;
    PVOID RaceDll;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    PTP_SIMPLE_CALLBACK FinalizationCallback;
    union _union_381 u;
    TP_CALLBACK_PRIORITY CallbackPriority;
    DWORD Size;
};

typedef DWORD ACCESS_MASK;

typedef PVOID PSID;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _OSVERSIONINFOEXW *LPOSVERSIONINFOEXW;

typedef WCHAR *LPWSTR;

typedef DWORD SECURITY_INFORMATION;

typedef BYTE BOOLEAN;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef struct _OSVERSIONINFOEXA *LPOSVERSIONINFOEXA;

typedef HANDLE *PHANDLE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct _CRYPTOAPI_BLOB _CRYPTOAPI_BLOB, *P_CRYPTOAPI_BLOB;

typedef struct _CRYPTOAPI_BLOB CRYPT_INTEGER_BLOB;

struct _CRYPTOAPI_BLOB {
    DWORD cbData;
    BYTE *pbData;
};

typedef struct _CRYPTOAPI_BLOB CRYPT_OBJID_BLOB;

typedef void *HCERTSTORE;

typedef uint ALG_ID;

typedef ULONG_PTR HCRYPTKEY;

typedef ULONG_PTR HCRYPTPROV;

typedef struct _CRYPT_BIT_BLOB _CRYPT_BIT_BLOB, *P_CRYPT_BIT_BLOB;

struct _CRYPT_BIT_BLOB {
    DWORD cbData;
    BYTE *pbData;
    DWORD cUnusedBits;
};

typedef ULONG_PTR HCRYPTHASH;

typedef struct _CERT_PUBLIC_KEY_INFO _CERT_PUBLIC_KEY_INFO, *P_CERT_PUBLIC_KEY_INFO;

typedef struct _CERT_PUBLIC_KEY_INFO CERT_PUBLIC_KEY_INFO;

typedef struct _CRYPT_ALGORITHM_IDENTIFIER _CRYPT_ALGORITHM_IDENTIFIER, *P_CRYPT_ALGORITHM_IDENTIFIER;

typedef struct _CRYPT_ALGORITHM_IDENTIFIER CRYPT_ALGORITHM_IDENTIFIER;

typedef struct _CRYPT_BIT_BLOB CRYPT_BIT_BLOB;

struct _CRYPT_ALGORITHM_IDENTIFIER {
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Parameters;
};

struct _CERT_PUBLIC_KEY_INFO {
    CRYPT_ALGORITHM_IDENTIFIER Algorithm;
    CRYPT_BIT_BLOB PublicKey;
};

typedef struct _CERT_INFO _CERT_INFO, *P_CERT_INFO;

typedef struct _CERT_INFO *PCERT_INFO;

typedef struct _CRYPTOAPI_BLOB CERT_NAME_BLOB;

typedef struct _CERT_EXTENSION _CERT_EXTENSION, *P_CERT_EXTENSION;

typedef struct _CERT_EXTENSION *PCERT_EXTENSION;

struct _CERT_INFO {
    DWORD dwVersion;
    CRYPT_INTEGER_BLOB SerialNumber;
    CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
    CERT_NAME_BLOB Issuer;
    FILETIME NotBefore;
    FILETIME NotAfter;
    CERT_NAME_BLOB Subject;
    CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
    CRYPT_BIT_BLOB IssuerUniqueId;
    CRYPT_BIT_BLOB SubjectUniqueId;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
};

struct _CERT_EXTENSION {
    LPSTR pszObjId;
    BOOL fCritical;
    CRYPT_OBJID_BLOB Value;
};

typedef struct _CERT_CONTEXT _CERT_CONTEXT, *P_CERT_CONTEXT;

typedef struct _CERT_CONTEXT CERT_CONTEXT;

struct _CERT_CONTEXT {
    DWORD dwCertEncodingType;
    BYTE *pbCertEncoded;
    DWORD cbCertEncoded;
    PCERT_INFO pCertInfo;
    HCERTSTORE hCertStore;
};

typedef CERT_CONTEXT *PCCERT_CONTEXT;

typedef ULONG_PTR HCRYPTPROV_LEGACY;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ulong *PULONG_PTR;

typedef struct in_addr in_addr, *Pin_addr;

typedef union _union_1226 _union_1226, *P_union_1226;

typedef struct _struct_1227 _struct_1227, *P_struct_1227;

typedef struct _struct_1228 _struct_1228, *P_struct_1228;

typedef uchar UCHAR;

struct _struct_1228 {
    USHORT s_w1;
    USHORT s_w2;
};

struct _struct_1227 {
    UCHAR s_b1;
    UCHAR s_b2;
    UCHAR s_b3;
    UCHAR s_b4;
};

union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};

struct in_addr {
    union _union_1226 S_un;
};

typedef struct _PROCESS_MEMORY_COUNTERS _PROCESS_MEMORY_COUNTERS, *P_PROCESS_MEMORY_COUNTERS;

struct _PROCESS_MEMORY_COUNTERS {
    DWORD cb;
    DWORD PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
};

typedef struct _PROCESS_MEMORY_COUNTERS PROCESS_MEMORY_COUNTERS;

typedef PROCESS_MEMORY_COUNTERS *PPROCESS_MEMORY_COUNTERS;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef UCHAR *PUCHAR;

typedef DWORD *LPDWORD;

typedef DWORD *PDWORD;

typedef int *LPINT;

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef long *LPLONG;

typedef BOOL *PBOOL;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef WORD *LPWORD;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD ATOM;

typedef struct HWINSTA__ HWINSTA__, *PHWINSTA__;

struct HWINSTA__ {
    int unused;
};

typedef struct HWINSTA__ *HWINSTA;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef void *LPCVOID;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
    pointer32 GuardCFCCheckFunctionPointer;
    pointer32 GuardCFDispatchFunctionPointer;
    pointer32 GuardCFFunctionTable;
    dword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer32 GuardAddressTakenIatEntryTable;
    dword GuardAddressTakenIatEntryCount;
    pointer32 GuardLongJumpTargetTable;
    dword GuardLongJumpTargetCount;
    pointer32 DynamicValueRelocTable;
    pointer32 CHPEMetadataPointer;
    pointer32 GuardRFFailureRoutine;
    pointer32 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer32 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    dword Reserved3;
};

typedef enum _SE_OBJECT_TYPE {
    SE_UNKNOWN_OBJECT_TYPE=0,
    SE_FILE_OBJECT=1,
    SE_SERVICE=2,
    SE_PRINTER=3,
    SE_REGISTRY_KEY=4,
    SE_LMSHARE=5,
    SE_KERNEL_OBJECT=6,
    SE_WINDOW_OBJECT=7,
    SE_DS_OBJECT=8,
    SE_DS_OBJECT_ALL=9,
    SE_PROVIDER_DEFINED_OBJECT=10,
    SE_WMIGUID_OBJECT=11,
    SE_REGISTRY_WOW64_32KEY=12
} _SE_OBJECT_TYPE;

typedef enum _SE_OBJECT_TYPE SE_OBJECT_TYPE;

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct tagPROPVARIANT tagPROPVARIANT, *PtagPROPVARIANT;

typedef struct tagPROPVARIANT PROPVARIANT;

struct tagPROPVARIANT {
};

typedef struct timecaps_tag timecaps_tag, *Ptimecaps_tag;

typedef struct timecaps_tag *LPTIMECAPS;

struct timecaps_tag {
    UINT wPeriodMin;
    UINT wPeriodMax;
};

typedef UINT MMRESULT;

typedef ulong u_long;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};

typedef struct servent servent, *Pservent;

struct servent {
    char *s_name;
    char **s_aliases;
    short s_port;
    char *s_proto;
};

typedef ushort u_short;

typedef UINT_PTR SOCKET;

typedef WSADATA *LPWSADATA;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};

typedef struct fd_set fd_set, *Pfd_set;

typedef uint u_int;

struct fd_set {
    u_int fd_count;
    SOCKET fd_array[64];
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    long tv_sec;
    long tv_usec;
};

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    short h_addrtype;
    short h_length;
    char **h_addr_list;
};

typedef struct IUnknown *LPUNKNOWN;



undefined FUN_00d679d0;
uint DAT_0128fd40;
undefined FUN_00f70710;
int DAT_0145ca7c;
int DAT_0145ca80;
undefined FUN_00f70780;
undefined DAT_00eac610;
undefined FUN_00466d70;
undefined FUN_00f70870;
undefined FUN_00f70860;
undefined FUN_00f70850;
undefined FUN_00f707d0;
undefined FUN_00f70880;
undefined FUN_00f70900;
undefined FUN_00f708f0;
undefined FUN_00f708e0;
undefined FUN_00f708d0;
undefined FUN_00f708c0;
undefined FUN_00f708b0;
undefined FUN_00f708a0;
undefined FUN_00f70890;
undefined FUN_00f70910;
undefined FUN_00f70920;
undefined FUN_00f70940;
undefined FUN_00f70960;
undefined FUN_00f709b0;
undefined FUN_00f709d0;
undefined FUN_00f70a20;
undefined FUN_00f70a40;
undefined FUN_00f70a90;
undefined FUN_00f70ab0;
undefined FUN_00f70b00;
undefined FUN_00f70b20;
undefined FUN_00f70b70;
undefined FUN_00f70c60;
undefined FUN_00f70c80;
undefined FUN_00f70cd0;
undefined FUN_00f70cf0;
undefined FUN_00f70d40;
undefined FUN_00f70d50;
undefined4 DAT_0145d15c;
undefined4 DAT_0145d160;
undefined4 DAT_0145d164;
undefined FUN_00f70d70;
undefined DAT_00eb39e9;
undefined FUN_00f70e50;
undefined FUN_00f70e70;
int DAT_0145d168;
undefined DAT_00eb3c1f;
undefined FUN_00f70ec0;
undefined FUN_00f70f20;
undefined FUN_00f70f40;
undefined FUN_00f70f90;
undefined FUN_00f70fb0;
undefined FUN_00f71000;
undefined FUN_00f71020;
undefined FUN_00f710b0;
undefined FUN_00f710d0;
undefined FUN_00f71120;
undefined FUN_00f71140;
undefined FUN_00f71190;
undefined FUN_00f711b0;
undefined FUN_00f71200;
undefined FUN_00f71220;
undefined FUN_00f71270;
undefined FUN_00f71280;
undefined FUN_00f712d0;
undefined FUN_00f712f0;
undefined FUN_00f71340;
undefined FUN_00f71360;
undefined FUN_00f713b0;
undefined FUN_00f713d0;
undefined DAT_0145d690;
undefined DAT_0145d694;
undefined DAT_0145d698;
undefined DAT_0145d6b8;
undefined4 DAT_0145d6bc;
undefined DAT_0145d69c;
undefined DAT_0145d6b4;
undefined DAT_0145d6ac;
undefined DAT_00ec4509;
undefined DAT_0145d490;
undefined4 UNK_0145d6a0;
undefined4 UNK_0145d6a4;
undefined4 UNK_0145d6a8;
undefined FUN_00586d60;
undefined FUN_00588c40;
undefined FUN_00f71420;
undefined FUN_00f71470;
undefined FUN_00f71490;
undefined FUN_00f714e0;
undefined FUN_00f71500;
undefined FUN_00f71550;
undefined FUN_00f71570;
undefined FUN_00f715c0;
undefined FUN_00f715e0;
int DAT_0145d740;
undefined DAT_00ec518f;
undefined FUN_00f71630;
undefined FUN_00f71680;
undefined FUN_00f716a0;
undefined FUN_00f716f0;
undefined FUN_00f71710;
undefined FUN_00f71760;
undefined FUN_00f71780;
undefined FUN_00f717d0;
undefined FUN_00f717f0;
undefined FUN_00f71840;
undefined4 DAT_0145d7ec;
undefined4 DAT_0145d7f0;
undefined4 DAT_0145d7f4;
undefined DAT_0145d7d8;
undefined DAT_0145d7d4;
undefined DAT_00ec96b3;
undefined FUN_00f71940;
undefined FUN_00f71960;
undefined FUN_00f719b0;
undefined FUN_00f719d0;
undefined FUN_00f71a20;
undefined FUN_00f71a40;
undefined FUN_00f71a90;
undefined FUN_00f71ab0;
undefined4 DAT_0145d8d0;
undefined4 DAT_0145d8d4;
undefined4 DAT_0145d8d8;
undefined4 DAT_0145d8dc;
undefined4 DAT_0145d8e0;
undefined4 DAT_0145d8e4;
undefined DAT_0145d8e8;
undefined DAT_0145d8ec;
undefined4 DAT_0145d8f0;
undefined4 DAT_0145d8f4;
undefined4 DAT_0145d8f8;
undefined4 DAT_0145d8fc;
undefined4 DAT_0145d914;
undefined4 DAT_0145d918;
undefined FUN_005650e0;
undefined DAT_00ecaefd;
undefined4 DAT_0145d8a0;
undefined FUN_00482c00;
undefined FUN_00f71b00;
undefined FUN_00f71b10;
undefined FUN_00f71b30;
undefined FUN_00f71b80;
int DAT_0145d970;
undefined4 DAT_0145d978;
int *DAT_0145d97c;
undefined DAT_00ecc009;
undefined FUN_00f71ba0;
undefined FUN_00f71c40;
undefined FUN_00f71c60;
undefined FUN_00f71cb0;
undefined FUN_00f71cd0;
undefined FUN_00f71d20;
undefined FUN_00f71d40;
undefined FUN_00f71d90;
undefined FUN_00f71db0;
undefined FUN_00f71e00;
undefined FUN_00f71e20;
undefined FUN_00f71e70;
undefined FUN_00f71e90;
undefined FUN_00f71ee0;
undefined FUN_00f71f00;
undefined FUN_00f71f50;
undefined FUN_00f71f70;
undefined FUN_00f71fc0;
undefined FUN_00f71fe0;
undefined FUN_00f72030;
undefined FUN_00f72050;
int DAT_012bbf90;
undefined DAT_00ece30f;
undefined FUN_00f720d0;
undefined DAT_00ece84f;
undefined FUN_00f72130;
undefined FUN_00f72190;
undefined FUN_00f72180;
undefined FUN_00f721a0;
int DAT_0145dab0;
int DAT_0145dab8;
undefined4 DAT_0145dabc;
undefined DAT_0145dac0;
undefined DAT_0145dac4;
undefined DAT_0145dac8;
undefined DAT_0145dae8;
undefined4 DAT_0145daec;
undefined DAT_0145dacc;
undefined DAT_0145dae4;
undefined DAT_0145dadc;
undefined DAT_0145daf0;
undefined DAT_0145daf4;
undefined DAT_0145daf8;
undefined1 DAT_0145db18;
undefined DAT_0145db08;
undefined DAT_00ecf539;
undefined4 UNK_0145dad0;
undefined4 UNK_0145dad4;
undefined4 UNK_0145dad8;
undefined4 UNK_0145dafc;
undefined4 UNK_0145db00;
undefined FUN_00f721c0;
undefined4 UNK_0145db04;
undefined4 UNK_0145db0c;
undefined4 UNK_0145db10;
undefined4 UNK_0145db14;
undefined FUN_00f72240;
undefined FUN_00f72260;
undefined8 DAT_0145db20;
undefined8 DAT_0145db28;
undefined4 DAT_0145db30;
undefined FUN_00f72280;
undefined FUN_00f722a0;
int DAT_0145db40;
undefined DAT_0145db44;
undefined DAT_00ecfbe9;
undefined FUN_00f722c0;
undefined FUN_00f72360;
undefined FUN_00f72380;
undefined FUN_00f723a0;
undefined FUN_00f723b0;
undefined4 DAT_0145d748;
undefined4 DAT_0145d818;
undefined4 DAT_0145d128;
undefined FUN_00f723c0;
undefined FUN_00f723e0;
undefined FUN_00f72400;
undefined FUN_00f72450;
undefined FUN_00f72460;
int DAT_0145dce0;
undefined4 DAT_0145dd0c;
undefined4 DAT_0145dd10;
undefined DAT_0145dd20;
undefined * *DAT_0145dd88;
undefined DAT_0145dd90;
undefined DAT_0145dd94;
undefined DAT_0145dd98;
undefined DAT_0145dd9c;
undefined DAT_0145dda0;
undefined DAT_0145dda8;
undefined DAT_0145ddb0;
undefined DAT_0145ddb4;
undefined DAT_0145ddb8;
undefined DAT_0145ddc0;
undefined DAT_0145ddc4;
undefined1 DAT_0145ddc8;
undefined DAT_0145dd28;
undefined DAT_0145dd2c;
undefined DAT_0145dd3c;
undefined DAT_0145dd4c;
undefined DAT_0145dd5c;
undefined DAT_0145ddd0;
undefined DAT_0145ddd4;
undefined DAT_0145ddd8;
undefined DAT_0145ddf8;
undefined4 DAT_0145ddfc;
undefined4 DAT_0145de00;
undefined DAT_0145de10;
undefined4 DAT_0145de14;
undefined DAT_0145dddc;
undefined DAT_0145ddf4;
undefined DAT_0145ddec;
undefined1 DAT_0145de18;
undefined FUN_00f72480;
undefined DAT_0145dd30;
undefined DAT_00ed1977;
pointer PTR_0112e74c;
undefined UNK_01142540;
undefined4 UNK_0145dd34;
undefined4 UNK_0145dd38;
undefined4 UNK_0145dd40;
undefined4 UNK_0145dd44;
undefined4 UNK_0145dd48;
undefined4 UNK_0145dd50;
undefined4 UNK_0145dd54;
undefined4 UNK_0145dd58;
undefined4 UNK_0145dde0;
undefined4 UNK_0145dde4;
undefined4 UNK_0145dde8;
undefined4 UNK_0145de04;
undefined4 UNK_0145de08;
undefined4 UNK_0145de0c;
pointer[1] vftable;
pointer[15] vftable;
undefined FUN_00f72580;
undefined FUN_00f725e0;
undefined4 DAT_0145de20;
undefined4 DAT_0145de34;
undefined DAT_0145de38;
undefined DAT_00ed2771;
undefined FUN_00f72600;
undefined FUN_00f726a0;
undefined DAT_00ed387f;
undefined FUN_00f726c0;
undefined DAT_012bbfc0;
undefined4 DAT_012bbfb0;
undefined4 DAT_012bbfc4;
undefined DAT_012bbfc8;
undefined DAT_012bbfcc;
undefined4 DAT_012bbfd0;
undefined4 DAT_012bbfd8;
undefined DAT_012bbfe8;
undefined4 DAT_012bbfec;
undefined4 DAT_012bbfd4;
undefined DAT_012bbff0;
undefined DAT_00ed38dd;
undefined4 DAT_012bbf98;
undefined4 UNK_012bbfb4;
undefined FUN_00f72710;
undefined4 UNK_012bbfb8;
undefined4 UNK_012bbfbc;
undefined4 UNK_012bbfdc;
undefined4 UNK_012bbfe0;
undefined4 UNK_012bbfe4;
undefined FUN_00f72870;
undefined FUN_00f729c0;
undefined FUN_00f729e0;
undefined DAT_0145de60;
undefined DAT_0145de70;
undefined DAT_0145de80;
undefined DAT_0145de64;
undefined DAT_0145de68;
undefined DAT_0145de6c;
undefined DAT_0145de74;
undefined DAT_0145de7c;
undefined DAT_0145de88;
undefined4 UNK_0145de78;
undefined4 UNK_0145de84;
undefined4 UNK_0145de8c;
undefined FUN_00f72a00;
undefined FUN_00f72a40;
undefined FUN_00f72a60;
undefined FUN_00f72a80;
undefined FUN_00f72ad0;
undefined FUN_00f72af0;
undefined FUN_0046f300;
undefined FUN_00f72b40;
int DAT_0145ded0;
undefined4 DAT_0145ded4;
undefined1 DAT_0145df4c;
undefined DAT_00ed764f;
undefined4 DAT_0145dec0;
undefined FUN_00468340;
undefined FUN_00616a80;
undefined DAT_0145ded8;
undefined FUN_005dadd0;
undefined FUN_00f72bc0;
undefined FUN_00f72be0;
undefined FUN_00f72cb0;
undefined FUN_00f72cd0;
undefined FUN_00f72d20;
undefined FUN_00f72d40;
undefined FUN_00f72d90;
undefined FUN_00f72db0;
void *DAT_0145dfd0;
undefined DAT_0145dfd4;
int DAT_0145dfd8;
void *DAT_0145dfdc;
undefined DAT_0145dfe0;
int DAT_0145dfe4;
void *DAT_0145dfe8;
undefined DAT_0145dfec;
int DAT_0145dff0;
undefined FUN_00f72e00;
undefined1 DAT_0145dff4;
undefined4 DAT_0145dff8;
undefined DAT_00ed7eeb;
undefined FUN_00f72f00;
undefined FUN_00f72f20;
undefined FUN_00f72f70;
undefined FUN_00f73000;
undefined FUN_00f73020;
undefined4 DAT_0145e04c;
undefined FUN_00f73070;
int *DAT_0145e050;
undefined DAT_00ed8329;
undefined FUN_00f73150;
undefined FUN_00f73170;
undefined FUN_00f731c0;
undefined4 DAT_0145e0a8;
undefined4 DAT_0145e0ac;
undefined4 DAT_0145e0b0;
undefined4 DAT_0145e0b4;
undefined4 DAT_0145e0b8;
undefined FUN_00f731e0;
undefined DAT_00ed8b23;
undefined FUN_00f73300;
undefined FUN_00f73320;
undefined DAT_00ed8d17;
undefined FUN_00f73370;
undefined FUN_00f733d0;
undefined FUN_00f733f0;
undefined4 DAT_012bc018;
undefined DAT_012bc028;
undefined4 DAT_012bc02c;
undefined4 DAT_012bc030;
undefined DAT_012bc040;
undefined4 DAT_012bc044;
undefined4 DAT_012bc048;
undefined DAT_012bc058;
undefined4 DAT_012bc05c;
undefined1 DAT_012bc068;
undefined4 DAT_012bc060;
undefined DAT_00ed8fad;
undefined4 UNK_012bc01c;
undefined4 UNK_012bc020;
undefined4 UNK_012bc024;
undefined4 UNK_012bc034;
undefined4 UNK_012bc038;
undefined4 UNK_012bc03c;
undefined4 UNK_012bc04c;
undefined4 UNK_012bc050;
undefined4 UNK_012bc054;
undefined FUN_00f73440;
undefined FUN_00f73570;
undefined FUN_00f73590;
undefined FUN_00f735e0;
undefined FUN_00f73600;
undefined FUN_00f73620;
undefined FUN_00f73670;
undefined FUN_00f736b0;
undefined FUN_00f736f0;
undefined FUN_00f73730;
undefined FUN_00f73770;
undefined FUN_00f737b0;
undefined FUN_00f737f0;
undefined FUN_00f73830;
undefined FUN_00f73870;
undefined FUN_00f738b0;
undefined FUN_00f738f0;
undefined FUN_00f73930;
undefined FUN_00f73970;
undefined FUN_00f739b0;
undefined FUN_00f739f0;
undefined FUN_00f73a30;
undefined FUN_00f73a70;
undefined FUN_00f73ab0;
undefined FUN_00f73ad0;
undefined FUN_00f73b20;
undefined FUN_00f73b40;
undefined FUN_00f73b90;
undefined FUN_00f73bb0;
int DAT_0145f1c4;
undefined4 DAT_0145f1cc;
undefined4 DAT_0145f1d0;
undefined4 DAT_0145f1d4;
undefined DAT_0145f1d8;
undefined DAT_0145f1dc;
undefined DAT_0145f1c0;
undefined FUN_00f73c00;
undefined DAT_00ed9b3d;
undefined FUN_00f73ca0;
undefined FUN_00f73cc0;
undefined FUN_00f73d10;
undefined FUN_00f73d30;
undefined DAT_00eda6c9;
undefined4 DAT_0145e6f0;
undefined4 DAT_0145e744;
undefined FUN_00628aa0;
undefined FUN_006299b0;
undefined FUN_00f73d80;
undefined FUN_00f73dd0;
undefined FUN_00f73df0;
undefined FUN_00f73e40;
undefined FUN_00f73e60;
int DAT_0145f1e4;
undefined4 DAT_0145f1ec;
undefined FUN_00f73eb0;
undefined4 DAT_0145f1f0;
undefined4 DAT_0145f1f4;
undefined DAT_0145f1f8;
undefined DAT_0145f1fc;
undefined DAT_0145f1e0;
undefined4 DAT_0145f200;
undefined4 DAT_0145f204;
undefined4 DAT_0145f208;
undefined DAT_0145f20c;
undefined4 DAT_0145f210;
int DAT_0145f214;
undefined DAT_0145f218;
undefined DAT_00edad6b;
undefined FUN_00f73ec0;
undefined4 DAT_012bc0a0;
undefined DAT_012bc0a4;
undefined FUN_00f73ee0;
undefined4 DAT_012bc0a8;
undefined DAT_012bc0ac;
undefined4 DAT_012bc0b0;
undefined DAT_012bc0b4;
undefined4 DAT_012bc0c8;
undefined DAT_012bc0b8;
undefined4 DAT_012bc0cc;
undefined DAT_00edc033;
undefined4 UNK_012bc0bc;
undefined4 UNK_012bc0c0;
undefined4 UNK_012bc0c4;
undefined FUN_00f73ef0;
undefined FUN_00f73f10;
undefined FUN_00f73f20;
undefined FUN_00f73f40;
undefined FUN_00f73f60;
undefined4 DAT_0145e980;
undefined4 DAT_0145e988;
undefined DAT_0145e98c;
undefined DAT_0145e990;
undefined DAT_0145e994;
undefined DAT_0145e998;
undefined DAT_0145e99c;
undefined DAT_0145e9a0;
undefined DAT_0145e9a4;
undefined DAT_0145e9c4;
undefined FUN_00f73fb0;
undefined DAT_0145e9c8;
undefined DAT_0145e9a8;
undefined DAT_0145e9c0;
undefined DAT_0145e9b8;
undefined DAT_00f1edf1;
undefined4 UNK_0145e9ac;
undefined4 UNK_0145e9b0;
undefined4 UNK_0145e9b4;
undefined FUN_00f74050;
undefined FUN_00f74070;
undefined FUN_00f74090;
undefined FUN_00f74140;
undefined FUN_00f741b0;
undefined FUN_00f741d0;
undefined FUN_00f741f0;
undefined FUN_00f74240;
undefined FUN_00f74260;
int DAT_0145dcb8;
undefined FUN_00f74270;
undefined FUN_00f74290;
undefined FUN_00f742b0;
undefined FUN_00f74300;
undefined FUN_00f74320;
undefined FUN_00f74340;
undefined FUN_00f74360;
undefined FUN_00f74380;
undefined FUN_00f743a0;
undefined FUN_00f743c0;
undefined FUN_00f743e0;
undefined FUN_00f74400;
undefined FUN_00f74420;
undefined FUN_00f74440;
undefined FUN_00f74460;
undefined FUN_00f744f0;
undefined FUN_00f74510;
undefined FUN_00f745f0;
undefined FUN_00f74610;
undefined1 DAT_0145ebe0;
undefined DAT_0145ebe4;
undefined4 DAT_0145ebec;
int DAT_0145ebf0;
undefined4 DAT_0145ebf4;
int DAT_0145ebf8;
undefined4 DAT_0145ebfc;
undefined DAT_00f2dc37;
undefined FUN_00f74630;
undefined FUN_00f74700;
undefined FUN_00f74720;
int DAT_0145e054;
undefined DAT_00f2e61f;
undefined FUN_00f74780;
int DAT_0145de98;
undefined DAT_00f2e64f;
undefined4 DAT_0145db48;
undefined FUN_00f747e0;
undefined FUN_00f74800;
undefined4 DAT_012bc114;
undefined4 DAT_012bc118;
undefined4 DAT_012bc11c;
undefined4 DAT_012bc120;
undefined4 DAT_012bc124;
undefined4 DAT_012bc128;
undefined4 DAT_012bc12c;
undefined4 DAT_012bc130;
undefined4 DAT_012bc134;
undefined4 DAT_012bc138;
undefined4 DAT_012bc13c;
undefined4 DAT_012bc140;
undefined4 DAT_012bc144;
undefined4 DAT_012bc154;
undefined4 DAT_012bc158;
undefined DAT_00f308c1;
undefined4 UNK_012bc148;
undefined4 UNK_012bc14c;
undefined FUN_00f74850;
undefined4 UNK_012bc150;
undefined FUN_00f74860;
undefined FUN_00f74870;
undefined FUN_00f748b0;
undefined DAT_00f31640;
undefined FUN_00469ba0;
undefined FUN_00f748f0;
undefined DAT_0119fff0;
undefined DAT_011a0024;
undefined DAT_00f316eb;
undefined FUN_00f74950;
undefined DAT_00f31790;
undefined FUN_00f749b0;
undefined DAT_011a0188;
undefined DAT_011a01a0;
undefined DAT_00f3189e;
undefined FUN_00f74a10;
undefined DAT_00f3191f;
undefined DAT_011a00ac;
undefined FUN_00f74a70;
undefined FUN_00f74ad0;
undefined FUN_00f74b30;
undefined FUN_00f74b50;
undefined FUN_00f74b70;
undefined FUN_00f74b90;
undefined FUN_00f74bb0;
undefined FUN_00f74bd0;
int DAT_0145eca8;
undefined DAT_0145ecb0;
undefined FUN_00f74bf0;
int DAT_0145ecb4;
undefined DAT_0145ecb8;
undefined4 DAT_0145ecbc;
undefined DAT_0145ecc0;
undefined4 DAT_0145ecc4;
undefined DAT_0145ecc8;
undefined DAT_0145eccc;
undefined4 DAT_0145ecd0;
undefined4 DAT_0145ecd4;
undefined4 DAT_0145ecd8;
undefined1 DAT_0145ecdc;
undefined DAT_0145ece0;
int DAT_0145ece4;
undefined DAT_0145ece8;
undefined DAT_0145ecec;
undefined DAT_0145ecf0;
undefined DAT_0145ecf4;
undefined DAT_0145ecf8;
undefined DAT_0145ecfc;
undefined DAT_00f326b1;
undefined FUN_00f74d30;
undefined FUN_00f74d50;
undefined FUN_00f74d90;
undefined FUN_00f74db0;
undefined4 DAT_0145e648;
undefined FUN_00f74de0;
undefined FUN_00f74e00;
undefined FUN_00f74e50;
undefined FUN_00f74e70;
undefined FUN_00f74ec0;
undefined FUN_00f74ee0;
undefined FUN_00f74f30;
undefined FUN_00f74f50;
undefined FUN_00f74fa0;
undefined FUN_00f74fc0;
undefined FUN_00f75010;
undefined FUN_00f75030;
undefined FUN_00f75080;
undefined FUN_00f750a0;
undefined FUN_00f750f0;
undefined FUN_00f75100;
undefined FUN_00f75120;
undefined FUN_00f75170;
undefined FUN_00f75190;
undefined FUN_00f751e0;
undefined FUN_00f75200;
undefined FUN_00f75250;
undefined FUN_00f75270;
undefined FUN_00f752c0;
undefined FUN_00f752e0;
undefined FUN_00f75330;
undefined FUN_00f75350;
undefined FUN_00f753a0;
undefined FUN_00f753c0;
undefined4 DAT_0145efb8;
undefined FUN_00f75400;
undefined FUN_00f75410;
undefined FUN_00f75430;
undefined FUN_00f754b0;
undefined FUN_00f754d0;
undefined FUN_00f754f0;
int DAT_0145f148;
undefined4 DAT_0145f14c;
undefined DAT_0145f170;
undefined DAT_0145f174;
undefined DAT_0145f178;
undefined DAT_0145f198;
undefined4 DAT_0145f19c;
undefined DAT_0145f150;
undefined DAT_0145f160;
undefined DAT_0145f17c;
undefined DAT_0145f194;
undefined DAT_0145f18c;
undefined DAT_0145f154;
undefined DAT_0145f158;
undefined DAT_0145f15c;
undefined DAT_0145f164;
undefined DAT_0145f168;
undefined DAT_0145f16c;
undefined DAT_00f3ac9b;
undefined DAT_0145eff8;
undefined4 UNK_0145f180;
undefined4 UNK_0145f184;
undefined4 UNK_0145f188;
undefined FUN_00f75540;
undefined FUN_00873b80;
undefined FUN_00873cf0;
undefined FUN_00f755b0;
undefined FUN_00f755d0;
undefined FUN_00f755f0;
undefined FUN_00f75610;
undefined FUN_00f75630;
byte DAT_013dd820;
byte DAT_013dd821;
byte DAT_013dd822;
byte DAT_013dd823;
byte DAT_013dd824;
byte DAT_013dd825;
byte DAT_013dd826;
byte DAT_013dd827;
byte DAT_013dd828;
byte DAT_013dd834;
byte DAT_013dd840;
undefined DAT_0128e004;
undefined DAT_0128e00c;
undefined _ANGLEGetDisplayPlatform@20;
undefined _ANGLEResetDisplayPlatform@4;
byte DAT_013ddbb8;
byte DAT_013ddbb9;
byte DAT_013ddbbc;
byte DAT_013ddbc4;
byte DAT_013ddbc5;
byte DAT_013ddbc6;
byte DAT_013ddbc7;
byte DAT_013ddbd0;
byte DAT_013ddbd1;
byte DAT_013ddbd2;
undefined DAT_013ddbd8;
undefined FUN_008e6cd0;
undefined FUN_008e6dd0;
undefined FUN_008e6ed0;
undefined FUN_008e7010;
undefined FUN_008e7110;
undefined FUN_008e7210;
undefined FUN_008e72d0;
undefined FUN_008e73d0;
undefined FUN_008e74d0;
undefined FUN_008e75d0;
undefined FUN_008e76d0;
undefined FUN_008e77d0;
undefined FUN_008e78d0;
byte DAT_013ddbd4;
byte DAT_013ddc0c;
byte DAT_013ddc0d;
byte DAT_013ddc0e;
byte DAT_013ddc84;
byte DAT_013ddc85;
byte DAT_013ddc86;
byte DAT_013ddc87;
byte DAT_013ddc88;
byte DAT_013ddc89;
byte DAT_013ddc8a;
byte DAT_013ddc8b;
byte DAT_013ddc8c;
byte DAT_013ddc94;
byte DAT_013ddc95;
byte DAT_013ddf24;
byte DAT_013ddf34;
byte DAT_013ddf38;
byte DAT_013ddf60;
byte DAT_013ddf61;
byte DAT_013ddf62;
byte DAT_013ddf63;
byte DAT_013de230;
byte DAT_013de238;
byte DAT_013de239;
byte DAT_013de23a;
byte DAT_013de23b;
byte DAT_013de248;
byte DAT_013de249;
byte DAT_013de24a;
byte DAT_013de24b;
byte DAT_013de24c;
byte DAT_013de25c;
byte DAT_013de25d;
byte DAT_013de25e;
byte DAT_013de25f;
byte DAT_013de260;
byte DAT_013de268;
byte DAT_013de274;
byte DAT_013de275;
byte DAT_013de284;
byte DAT_013de285;
byte DAT_013de286;
byte DAT_013de294;
byte DAT_013de295;
byte DAT_013de296;
byte DAT_013de297;
byte DAT_013de298;
byte DAT_013de299;
byte DAT_013de29a;
byte DAT_013de29b;
undefined DAT_01293c00;
undefined DAT_01293c04;
undefined1 DAT_01293c08;
undefined DAT_01293c0c;
undefined DAT_00fb2310;
undefined FUN_00994d10;
undefined FUN_00994e10;
undefined FUN_00994f10;
undefined FUN_00995110;
undefined FUN_00995210;
undefined FUN_00995310;
undefined FUN_009a6620;
undefined FUN_00995510;
undefined FUN_009a6640;
undefined FUN_00995610;
undefined FUN_009a6660;
undefined FUN_009a6680;
undefined FUN_009a66a0;
undefined FUN_009a66c0;
undefined FUN_009a66e0;
undefined FUN_009a6700;
undefined FUN_009a6720;
undefined FUN_009a6760;
undefined FUN_009a6780;
undefined FUN_009a67a0;
undefined FUN_009a67c0;
undefined FUN_009a67e0;
undefined FUN_009a6800;
undefined FUN_009a6820;
undefined FUN_00996510;
undefined FUN_009a6840;
undefined FUN_00996610;
undefined FUN_009a6860;
undefined FUN_00996710;
undefined FUN_009a6880;
undefined FUN_00996810;
undefined FUN_009a68a0;
undefined FUN_009a68c0;
undefined FUN_009a68e0;
undefined FUN_00996b10;
undefined FUN_009a6900;
undefined FUN_00996c10;
undefined FUN_009a6920;
undefined FUN_00996d10;
undefined FUN_009a6940;
undefined FUN_00996e10;
undefined FUN_009a6960;
undefined FUN_00996f10;
undefined FUN_009a6980;
undefined FUN_00997010;
undefined FUN_009a69a0;
undefined FUN_00997110;
undefined FUN_009a69c0;
undefined FUN_00997210;
undefined FUN_009a69e0;
undefined FUN_00997310;
undefined FUN_009a6a00;
undefined FUN_00997410;
undefined FUN_009a6a20;
undefined FUN_00997510;
undefined FUN_009a6a40;
undefined FUN_00997610;
undefined FUN_009a6c00;
undefined FUN_009a6cc0;
undefined FUN_009a6ce0;
undefined FUN_009a6fc0;
undefined FUN_009a6fe0;
undefined FUN_009a7000;
undefined FUN_009a7020;
undefined FUN_009a7040;
undefined FUN_009a7060;
undefined FUN_009a70a0;
undefined FUN_009a70c0;
undefined FUN_009a70e0;
undefined FUN_009a7100;
undefined FUN_009a7120;
undefined FUN_009a7140;
undefined FUN_009a7160;
undefined FUN_009a7180;
undefined FUN_009a71a0;
undefined FUN_009a61c0;
undefined FUN_009a71c0;
undefined FUN_009a71e0;
undefined FUN_009a7200;
undefined FUN_009a7220;
undefined FUN_009a7240;
undefined FUN_009a7260;
undefined FUN_009a7280;
undefined FUN_009a72a0;
undefined FUN_009a72c0;
byte DAT_013de29c;
byte DAT_013de29d;
byte DAT_013de29e;
byte DAT_013de2b8;
byte DAT_013de2c8;
byte DAT_013de2d8;
byte DAT_013de2e2;
byte DAT_013de2e3;
byte DAT_013de2e5;
byte DAT_013de2e6;
byte DAT_013de2fc;
byte DAT_013de2fd;
byte DAT_013de2fe;
byte DAT_013de2ff;
byte DAT_013de300;
byte DAT_013de301;
byte DAT_013de302;
byte DAT_013de304;
byte DAT_013de305;
byte DAT_013de306;
byte DAT_013de307;
byte DAT_013de308;
byte DAT_013de309;
byte DAT_013de30a;
byte DAT_013de30b;
byte DAT_013de30c;
byte DAT_013de30d;
byte DAT_013de350;
byte DAT_013de3a4;
byte DAT_013de3a5;
byte DAT_013de3a6;
byte DAT_013de3a7;
byte DAT_013de3a8;
byte DAT_013de3a9;
byte DAT_013de3aa;
byte DAT_013de3ab;
byte DAT_013de3ac;
byte DAT_013de3ad;
byte DAT_013de3ae;
byte DAT_013de3af;
byte DAT_013de3b0;
byte DAT_013de3b1;
byte DAT_013de3b2;
byte DAT_013de3b3;
byte DAT_013de3b4;
byte DAT_013de3b5;
byte DAT_013de3b6;
byte DAT_013de3b7;
byte DAT_013de414;
byte DAT_013de430;
byte DAT_013de431;
byte DAT_013de432;
byte DAT_013de433;
byte DAT_013de434;
byte DAT_013de435;
byte DAT_013de436;
byte DAT_013de437;
byte DAT_013de438;
byte DAT_013de444;
byte DAT_013de445;
byte DAT_013de450;
byte DAT_013de451;
byte DAT_013de452;
byte DAT_013de453;
byte DAT_013de454;
byte DAT_013de455;
byte DAT_013de456;
byte DAT_013de457;
byte DAT_013de458;
byte DAT_013de459;
byte DAT_013de45a;
byte DAT_013de47c;
byte DAT_013de47d;
byte DAT_013de47e;
byte DAT_013de47f;
byte DAT_013de480;
byte DAT_013de490;
byte DAT_013de491;
byte DAT_013de492;
byte DAT_013de493;
byte DAT_013de494;
byte DAT_013de495;
byte DAT_013de496;
byte DAT_013de497;
byte DAT_013de498;
byte DAT_013de499;
byte DAT_013de49a;
byte DAT_013de49b;
byte DAT_013de49c;
byte DAT_013de49d;
byte DAT_013de49e;
byte DAT_013de49f;
byte DAT_013de4a0;
byte DAT_013de4a1;
byte DAT_013de4a2;
byte DAT_013de4a3;
byte DAT_013de528;
byte DAT_013de90c;
byte DAT_013de90d;
byte DAT_013de90e;
byte DAT_013de90f;
byte DAT_013de910;
byte DAT_013de911;
byte DAT_013de912;
byte DAT_013de920;
byte DAT_013de921;
byte DAT_013de922;
byte DAT_013de923;
byte DAT_013de924;
byte DAT_013de925;
byte DAT_013de926;
byte DAT_013de927;
byte DAT_013de928;
byte DAT_013de929;
byte DAT_013de92a;
byte DAT_013de92b;
byte DAT_013de92c;
byte DAT_013de92d;
byte DAT_013de92e;
byte DAT_013de92f;
byte DAT_013de930;
byte DAT_013de931;
byte DAT_013de932;
byte DAT_013de933;
byte DAT_013de934;
byte DAT_013de935;
byte DAT_013de936;
byte DAT_013de937;
byte DAT_013de938;
byte DAT_013de939;
byte DAT_013de93a;
byte DAT_013de93b;
byte DAT_013de93c;
byte DAT_013de93d;
byte DAT_013de93e;
byte DAT_013de93f;
byte DAT_013de940;
byte DAT_013de941;
byte DAT_013de942;
byte DAT_013de943;
byte DAT_013de944;
byte DAT_013de945;
byte DAT_013de950;
byte DAT_013de951;
byte DAT_013de952;
byte DAT_013de964;
byte DAT_013de96c;
byte DAT_013de96d;
byte DAT_013de96e;
byte DAT_013de96f;
byte DAT_013de970;
byte DAT_013de971;
byte DAT_013de972;
byte DAT_013de973;
byte DAT_013de974;
byte DAT_013de975;
byte DAT_013de976;
byte DAT_013de977;
byte DAT_013de978;
byte DAT_013de979;
byte DAT_013de97a;
byte DAT_013de97b;
byte DAT_013de97c;
byte DAT_013de97d;
byte DAT_013de97e;
byte DAT_013de97f;
byte DAT_013de982;
byte DAT_013de983;
byte DAT_013de984;
byte DAT_013de985;
byte DAT_013de986;
byte DAT_013de9b0;
byte DAT_013de9b1;
byte DAT_013de9b2;
byte DAT_013de9b3;
byte DAT_013de9b4;
byte DAT_013de9c0;
byte DAT_013de9c1;
byte DAT_013de9c8;
byte DAT_013de9c9;
byte DAT_013de9ca;
byte DAT_013de9cb;
byte DAT_013de9cc;
byte DAT_013de9cd;
byte DAT_013de9ce;
byte DAT_013dea7c;
byte DAT_013dea7d;
byte DAT_013dea7e;
byte DAT_013dea7f;
byte DAT_013dea80;
byte DAT_013dea81;
byte DAT_013dea82;
byte DAT_013dea83;
byte DAT_013dea84;
byte DAT_013dea85;
byte DAT_013dea86;
byte DAT_013dea87;
byte DAT_013dea88;
byte DAT_013dea89;
byte DAT_013dea8a;
byte DAT_013dea94;
undefined FUN_00f75650;
undefined FUN_00f75690;
undefined FUN_00f756d0;
undefined FUN_00f75730;
undefined FUN_00f75790;
undefined FUN_00f757f0;
undefined4 DAT_013e0188;
undefined FUN_00f75850;
undefined4 DAT_013e0274;
undefined FUN_00f75910;
undefined FUN_00f75a00;
undefined FUN_00f75a10;
undefined FUN_00f75a60;
undefined FUN_00f75b00;
undefined FUN_00f75b50;
undefined FUN_00f75bc0;
undefined DAT_013e0310;
undefined1 DAT_0113c2e4;
undefined4 DAT_013e0318;
undefined DAT_00f6e82d;
undefined4 DAT_013e08b0;
undefined4 DAT_013e0cb0;
undefined4 DAT_013e06b0;
undefined4 DAT_013e0cb4;
undefined DAT_013e0d78;
undefined DAT_013e0d88;
undefined4 UNK_013e0d7c;
undefined4 UNK_013e0d80;
undefined4 UNK_013e0d84;
undefined4 UNK_013e0d8c;
undefined4 UNK_013e0d90;
undefined4 UNK_013e0d94;
undefined DAT_013e0cf8;
undefined DAT_013e0d08;
undefined DAT_013e0d18;
undefined DAT_013e0d28;
undefined4 UNK_013e0cfc;
undefined4 UNK_013e0d00;
undefined4 UNK_013e0d04;
undefined4 UNK_013e0d0c;
undefined4 UNK_013e0d10;
undefined4 UNK_013e0d14;
undefined4 UNK_013e0d1c;
undefined4 UNK_013e0d20;
undefined4 UNK_013e0d24;
undefined4 UNK_013e0d2c;
undefined4 UNK_013e0d30;
undefined4 UNK_013e0d34;
undefined DAT_013e0d38;
undefined DAT_013e0d48;
undefined DAT_013e0d58;
undefined DAT_013e0d68;
undefined4 UNK_013e0d3c;
undefined4 UNK_013e0d40;
undefined4 UNK_013e0d44;
undefined4 UNK_013e0d4c;
undefined4 UNK_013e0d50;
undefined4 UNK_013e0d54;
undefined4 UNK_013e0d5c;
undefined4 UNK_013e0d60;
undefined4 UNK_013e0d64;
undefined4 UNK_013e0d6c;
undefined4 UNK_013e0d70;
undefined4 UNK_013e0d74;
undefined4 DAT_010e2a18;
undefined4 DAT_010e2a28;
undefined4 DAT_010e2a38;
undefined4 DAT_010e2a48;
undefined4 DAT_010e2a58;
undefined4 DAT_010e2a98;
undefined4 DAT_010e2ad8;
undefined4 DAT_010e2b18;
undefined4 DAT_013e0d98;
undefined4 DAT_010e2798;
undefined4 DAT_010e27a8;
undefined4 DAT_010e27b8;
undefined4 DAT_010e27c8;
undefined4 DAT_010e27d8;
undefined4 DAT_010e27e8;
undefined4 DAT_010e27f8;
undefined4 DAT_010e2808;
undefined4 DAT_010e2818;
undefined4 DAT_010e2858;
undefined4 DAT_010e2898;
undefined4 DAT_010e28d8;
undefined4 DAT_010e2918;
undefined4 DAT_010e2958;
undefined4 DAT_010e2998;
undefined4 DAT_010e29d8;
undefined4 DAT_013e0e98;
undefined4 DAT_010e4060;
undefined4 DAT_010e40c4;
undefined4 DAT_010e4128;
undefined4 DAT_010e418c;
undefined4 DAT_010e41f0;
undefined4 DAT_010e4254;
undefined4 DAT_010e42b8;
undefined4 DAT_010e431c;
undefined4 DAT_010e4380;
undefined4 DAT_010e43e4;
undefined4 DAT_010e4448;
undefined4 DAT_010e4488;
undefined4 DAT_010e44c8;
undefined4 DAT_010e4508;
undefined4 DAT_010e4548;
undefined4 DAT_010e4588;
undefined4 DAT_010e45c8;
undefined4 DAT_010e4608;
undefined4 DAT_010e4648;
undefined4 DAT_010e4688;
undefined4 DAT_013e15d8;
undefined4 DAT_010e3008;
undefined4 DAT_010e302c;
undefined4 DAT_010e3050;
undefined4 DAT_010e3074;
undefined4 DAT_010e3098;
undefined4 DAT_010e30bc;
undefined4 DAT_010e30e0;
undefined4 DAT_010e3120;
undefined4 DAT_010e3160;
undefined4 DAT_010e31a0;
undefined4 DAT_010e31e0;
undefined4 DAT_010e3220;
undefined4 DAT_013e2018;
undefined4 DAT_010e2b7c;
undefined4 DAT_010e2d48;
undefined4 DAT_013e1398;
undefined4 DAT_010e3c60;
undefined4 DAT_010e3ca0;
undefined4 DAT_010e3ce0;
undefined4 DAT_010e3d20;
undefined4 DAT_010e3d60;
undefined4 DAT_010e3da0;
undefined4 DAT_010e3de0;
undefined4 DAT_010e3e20;
undefined4 DAT_010e3e60;
undefined4 DAT_010e3ea0;
undefined4 DAT_010e3ee0;
undefined4 DAT_010e3f20;
undefined4 DAT_010e3f60;
undefined4 DAT_010e3fa0;
undefined4 DAT_010e3fe0;
undefined4 DAT_010e4020;
undefined4 DAT_013e0f98;
undefined4 DAT_010e32a0;
undefined4 DAT_010e37a0;
undefined4 DAT_013e1c18;
undefined4 DAT_013e2258;
undefined4 DAT_013e2338;
undefined4 DAT_013e22c8;
undefined4 DAT_013e23a8;
undefined4 DAT_013e2488;
undefined4 DAT_013e2418;
undefined4 DAT_013e24f8;
undefined4 DAT_013e2568;
undefined4 DAT_013e25d8;
undefined4 DAT_013e2648;
undefined4 DAT_013e26b8;
undefined4 DAT_013e2728;
undefined4 DAT_013e2798;
undefined4 DAT_013e2808;
undefined4 DAT_013e2878;
undefined4 DAT_013e28e8;
undefined8 DAT_011a2c10;
undefined8 DAT_013e2980;
undefined8 DAT_013e4978;
undefined4 DAT_013e4990;
undefined4 DAT_013e598c;
undefined FUN_00f75d50;
undefined FUN_00f75db0;
undefined4 DAT_0110ea78;
undefined DAT_014339c0;
undefined4 DAT_0110eae8;
undefined DAT_013e59c0;
undefined FUN_00f75e00;
undefined FUN_00f75e10;
undefined FUN_00f75e20;
undefined DAT_0145c3c0;
undefined FUN_00f75e30;
undefined FUN_00f75e40;
undefined4 DAT_0145c370;
undefined4 *DAT_0145c6a0;
undefined4 DAT_0145c69c;
undefined DAT_0145c369;
undefined DAT_0145c384;
undefined DAT_0145c3ac;
undefined FUN_00f75e50;
undefined FUN_00f75e60;
undefined DAT_0145c608;
undefined FUN_00f75e70;
int *DAT_0145c698;
undefined *DAT_0145c69c;
int *DAT_0145c6a0;
undefined DAT_0145c5b1;
undefined DAT_0145c5b8;
undefined FUN_00f75e80;
pointer PTR_vftable_012bac3c;
undefined FUN_00f75e90;
undefined DAT_0125c4dc;
pointer PTR_vftable_012babe0;
undefined DAT_012babec;
pointer[2] vftable;
pointer PTR_vftable_012babd4;
undefined FUN_00f75ea0;
undefined DAT_0128754c;
pointer PTR_vftable_012bab78;
undefined DAT_012bab84;
undefined FUN_00f75eb0;
undefined FUN_00f75ec0;
undefined FUN_00f75ed0;
undefined FUN_00f75ee0;
undefined FUN_00f75ef0;
undefined DAT_00eab880;
undefined DAT_00eab8cd;
undefined DAT_00eab8fd;
undefined DAT_00eab975;
undefined DAT_00eab9b5;
undefined DAT_00eab9f5;
pointer[3] vftable;
undefined DAT_00eabb2d;
undefined DAT_00eabb6d;
undefined DAT_00eabbad;
undefined DAT_00eabbe5;
undefined DAT_00eabc2e;
undefined DAT_00eabd6d;
undefined DAT_00eabde5;
undefined DAT_00eabe2d;
pointer[11] vftable;
undefined DAT_00eabee5;
undefined DAT_00eabf35;
undefined4 DAT_0128fd40;
undefined DAT_00eabf6d;
undefined DAT_00eac107;
undefined DAT_00eac130;
undefined DAT_00eab8a0;
undefined DAT_00eac16e;
undefined DAT_00eac31d;
undefined DAT_0112e274;
undefined DAT_00465ec3;
undefined DAT_00eac47e;
undefined DAT_00eac4f6;
undefined DAT_0112e454;
undefined DAT_0112e458;
undefined DAT_00eac538;
undefined DAT_00eac578;
undefined DAT_00eac5b8;
undefined DAT_00eac66d;
undefined DAT_00eac747;
undefined DAT_00eac860;
pointer[26] vftable;
undefined DAT_00eac929;
pointer[6] vftable;
undefined DAT_00468310;
undefined DAT_00eaccd0;
undefined DAT_00eacd2d;
undefined DAT_00eacd60;
undefined DAT_0046af4a;
undefined LAB_0046b043;
undefined DAT_0046b85b;
undefined DAT_00ead220;
undefined DAT_00ead27e;
undefined DAT_00ead2c3;
undefined DAT_00ead35b;
undefined DAT_01288560;
undefined DAT_00ead39c;
undefined DAT_0046cc56;
undefined DAT_00ead568;
TypeDescriptor RTTI_Type_Descriptor;
int *DAT_0145d39c;
int *DAT_0145d398;
int *DAT_0145d3a8;
int *DAT_0145d3a4;
undefined DAT_00eac97d;
undefined DAT_00eaccfd;
pointer[4] vftable;
undefined DAT_0046e923;
undefined DAT_00eadabe;
undefined DAT_00eadfa0;
undefined DAT_00eae018;
undefined DAT_00eae063;
int DAT_0145d7e0;
int *DAT_0145ec98;
undefined4 DAT_0145e9f0;
undefined DAT_00eae5ad;
undefined DAT_00eae5dd;
undefined DAT_00eadb2d;
undefined DAT_00eae6bd;
undefined DAT_00eae740;
uint DAT_0145d0cc;
uint DAT_0145d7e0;
double DAT_0145db28;
undefined DAT_00eae848;
int DAT_0145dc9c;
undefined DAT_00eae920;
undefined DAT_0145d7e0;
undefined DAT_0145db28;
undefined4 DAT_0145dc9c;
undefined DAT_00eae9c8;
int DAT_0145d8b0;
int DAT_0145d8ac;
undefined DAT_00eaea10;
undefined4 DAT_0145d8a4;
undefined DAT_00eaea4d;
undefined DAT_00eaeb3d;
undefined DAT_00eaeb6d;
undefined DAT_00ead7cd;
undefined DAT_00eaebf0;
uint DAT_0145d0c4;
double DAT_012bbf10;
double DAT_012bbf18;
double DAT_012bbf20;
int DAT_0145d0fc;
uint DAT_0145d024;
uint DAT_0145d0c8;
undefined DAT_00eaed70;
undefined1 DAT_0112e1b4;
undefined DAT_00eaedae;
undefined DAT_00eaede5;
undefined DAT_00eaecf8;
undefined DAT_00eaf150;
undefined DAT_00eac9ed;
undefined DAT_00eae785;
undefined DAT_00eae661;
undefined DAT_00eaf248;
pointer[18] vftable;
undefined DAT_00eaf294;
undefined DAT_00eaf2f3;
undefined DAT_00eaf3ce;
undefined DAT_00eaf41f;
undefined DAT_00eaf4bc;
undefined DAT_00eaf500;
undefined DAT_0000000f;
undefined DAT_00eaf902;
undefined DAT_00eaf996;
undefined DAT_00eaf9f9;
undefined DAT_00eafabd;
undefined DAT_00eafbdc;
undefined DAT_0113c44c;
undefined DAT_0113c490;
undefined DAT_00eafc5e;
undefined2 DAT_0113c2ec;
undefined DAT_00eafd16;
undefined DAT_004813c6;
undefined DAT_0113c58c;
undefined DAT_00eafe09;
undefined DAT_004817d9;
undefined DAT_00eaffb9;
undefined DAT_00eafff5;
undefined DAT_00eb0056;
undefined DAT_00eb010f;
undefined DAT_00482ecd;
undefined DAT_00eb020d;
undefined DAT_00eb0298;
undefined DAT_004844b9;
pointer[8] vftable;
undefined DAT_00485a9c;
undefined DAT_00eb0a4e;
undefined DAT_00eb0aa7;
undefined DAT_00eb0b07;
undefined DAT_00eb0b67;
undefined DAT_00eb0bbe;
undefined DAT_00eb0c0e;
undefined DAT_00eb0c5e;
undefined DAT_00eb0d01;
undefined DAT_00487c85;
pointer[14] vftable;
undefined LAB_0048817f;
undefined LAB_0048832f;
undefined DAT_00eb128c;
TypeDescriptor TypeDescriptor_012bdcbc;
TypeDescriptor TypeDescriptor_012bdcf0;
undefined DAT_00eb12d7;
undefined DAT_00eb131c;
TypeDescriptor TypeDescriptor_012bd878;
undefined DAT_00eb1367;
undefined DAT_0048bf30;
undefined DAT_00eb14ad;
undefined DAT_00eb14f3;
undefined DAT_00eb1528;
int DAT_012bc27c;
undefined DAT_00eb17db;
int DAT_0145d8bc;
int DAT_0145d8b8;
undefined DAT_00eb184d;
undefined DAT_00eb187d;
undefined DAT_00eb18be;
undefined DAT_00eb2105;
undefined DAT_00eb2175;
undefined DAT_0113cb18;
undefined DAT_00eb21b5;
char DAT_0145efc3;
undefined DAT_00eb2215;
undefined DAT_00eb22b5;
undefined DAT_00eb2355;
undefined DAT_00eb2395;
undefined DAT_00eb23cd;
undefined DAT_00eb240d;
undefined DAT_00eb2455;
int DAT_0145d8a4;
int DAT_0145d8a0;
undefined DAT_00eb2495;
int DAT_0145d0f4;
undefined DAT_00eb24d5;
undefined DAT_00eb2515;
undefined DAT_00eb2566;
undefined DAT_00eb259d;
undefined DAT_00eb25e5;
undefined DAT_00eb2625;
undefined DAT_00eb267d;
undefined DAT_00eb26bd;
undefined DAT_00eb26ed;
undefined DAT_00eb2738;
undefined DAT_00eb276d;
undefined DAT_00eb27ad;
undefined DAT_00eb27ed;
int DAT_0145d008;
int DAT_012bc280;
undefined2 DAT_0145d028;
undefined4 DAT_0145d060;
undefined DAT_00eb284d;
uint DAT_0145d0c0;
int DAT_0145e9f8;
char DAT_0145dc80;
char DAT_0145dbad;
undefined DAT_00eb2885;
undefined DAT_00eb28cd;
undefined DAT_00eb29ee;
undefined DAT_0113cd34;
undefined1 DAT_0113cd40;
undefined DAT_0113cd4c;
undefined1 DAT_0145d021;
undefined DAT_0145d048;
undefined DAT_0145d04c;
int UNK_0145d030;
int UNK_0145d034;
undefined DAT_00eb1ce5;
undefined DAT_00eb3a4f;
undefined DAT_00eb3b5b;
undefined DAT_00eac78e;
undefined DAT_00eb3be6;
undefined FUN_00469e70;
undefined DAT_00eb3c6e;
undefined DAT_00eb3cad;
undefined DAT_00eb3e60;
undefined DAT_00eb3f21;
undefined DAT_00eb3fbb;
undefined DAT_004a488c;
undefined DAT_00eb40c2;
undefined DAT_004a4cdf;
undefined DAT_00eb4126;
undefined DAT_00eb45bc;
undefined DAT_00eb4607;
undefined DAT_00eb463d;
undefined DAT_00eb4678;
undefined DAT_004a6a8c;
undefined DAT_004a6c07;
undefined DAT_00eb491e;
undefined DAT_00eadafe;
undefined DAT_00eb4977;
undefined4 DAT_012bc274;
undefined4 DAT_012bc278;
float DAT_012bc26c;
float DAT_0145f21c;
float DAT_0145f220;
float DAT_0145f224;
float DAT_0145f228;
undefined4 DAT_012bc270;
int DAT_0145d8d4;
int DAT_0145d8d0;
int DAT_0145d8f8;
undefined DAT_00eb49c5;
undefined DAT_004a8225;
undefined DAT_00eb4b0e;
undefined DAT_00eb4c10;
undefined DAT_00eb4c80;
TypeDescriptor TypeDescriptor_012bde8c;
TypeDescriptor TypeDescriptor_012bde80;
undefined4 DAT_014638f8;
int DAT_014638f0;
int DAT_014638ec;
undefined FUN_00f71070;
int DAT_0145ceb8;
undefined4 DAT_012bc26c;
undefined4 DAT_014638f4;
undefined DAT_00eb4de9;
undefined DAT_00eb4f3d;
pointer[39] vftable;
uint DAT_0145d040;
undefined DAT_00eb514d;
undefined DAT_00eb51c6;
int *DAT_0145d3b4;
int *DAT_0145d3b0;
undefined DAT_00eb520d;
ulonglong DAT_0145db28;
undefined DAT_00eb54e0;
undefined DAT_00eb5635;
undefined DAT_00eb56db;
undefined DAT_00eb571d;
undefined DAT_00eb574d;
char *DAT_0145e9f0;
undefined DAT_00eb5795;
int DAT_0145d42c;
int DAT_0145d420;
undefined DAT_00eb59e3;
undefined DAT_00eb5a20;
undefined DAT_00eb5b0e;
undefined DAT_00eb5b4e;
undefined DAT_00eb5b9e;
undefined DAT_00eb5c27;
undefined DAT_00eb39ad;
undefined DAT_00eb5c7e;
undefined DAT_00eb5cde;
undefined DAT_00eb391d;
undefined DAT_00eadefd;
undefined DAT_00eb5d2d;
undefined DAT_00eb5d6e;
undefined DAT_00eb5dae;
undefined DAT_00eb5e46;
undefined DAT_0113d23c;
undefined DAT_0113d240;
undefined DAT_00eb5e9e;
undefined DAT_00eb5eee;
undefined DAT_00eb5f2e;
undefined DAT_00eb5f6e;
undefined DAT_00eb5fa8;
undefined DAT_00eb6002;
undefined FUN_004a52a0;
undefined DAT_00eb6051;
undefined DAT_00eb60d3;
undefined DAT_00eb6145;
undefined DAT_00eb6207;
undefined DAT_00eb9f25;
undefined DAT_00eb9f6b;
undefined DAT_00eb9fec;
TypeDescriptor TypeDescriptor_012c976c;
TypeDescriptor TypeDescriptor_012e1c30;
undefined DAT_00ebd6f7;
TypeDescriptor TypeDescriptor_012ccfd0;
TypeDescriptor TypeDescriptor_012ed414;
TypeDescriptor TypeDescriptor_012f52ec;
TypeDescriptor TypeDescriptor_012e0324;
undefined DAT_00ebdc3d;
undefined DAT_00ebdc85;
undefined DAT_00ebdcd0;
undefined DAT_00ebdd1d;
undefined DAT_00ebdd78;
undefined DAT_00ebddad;
undefined DAT_012886a4;
undefined DAT_00ebddfd;
undefined DAT_00ebde5d;
undefined DAT_00ebdebd;
undefined DAT_00ebdf1d;
undefined DAT_00ebdf7d;
undefined DAT_00ebdfdd;
undefined DAT_00ebe01d;
undefined DAT_00ebe06d;
undefined DAT_00ebe0cd;
undefined DAT_00ebe12d;
undefined DAT_00ebe18d;
undefined DAT_00ebe1ed;
undefined DAT_00ebe24d;
undefined DAT_00ebe2b5;
undefined DAT_00ebe36a;
undefined DAT_00ebe41a;
undefined DAT_00ebe46d;
undefined DAT_00ebe4dd;
undefined DAT_00ebe59a;
undefined DAT_00ebe5d5;
undefined DAT_00ebe68a;
undefined DAT_00ebe6dd;
undefined DAT_00ebe79a;
undefined DAT_00ebe7ed;
undefined DAT_00ebe835;
undefined DAT_00ebe895;
undefined DAT_00ebe94a;
undefined DAT_00ebe9ad;
undefined DAT_00ebea6a;
undefined DAT_00ebeb1a;
undefined DAT_00ebeb6d;
undefined DAT_00ebec2a;
undefined DAT_00ebec5d;
undefined DAT_00ebed12;
undefined DAT_00ebed45;
undefined DAT_012886ec;
undefined DAT_00ebed9d;
undefined DAT_00ebeddd;
undefined DAT_00ebee92;
undefined DAT_00ebef32;
undefined DAT_00ebefd2;
undefined DAT_00ebf005;
undefined DAT_00ebf0b2;
undefined DAT_00ebf152;
undefined DAT_00ebf17d;
undefined DAT_00ebf232;
undefined DAT_00ebf265;
undefined DAT_00ebf2de;
undefined DAT_00ebf33d;
undefined DAT_00ebf385;
undefined DAT_00ebf3cd;
undefined DAT_00ebf3fd;
undefined DAT_00ebf4b2;
undefined DAT_00ebf4dd;
undefined DAT_00ebf51d;
undefined DAT_00ebf565;
undefined DAT_00ebf5bd;
undefined DAT_00ebf672;
undefined DAT_00ebf712;
undefined DAT_00ebf73d;
undefined DAT_00ebf7f2;
undefined DAT_00ebf81d;
undefined DAT_00ebf8d2;
undefined DAT_00ebf972;
undefined DAT_00ebf99d;
undefined DAT_00ebfa52;
undefined DAT_00ebfa7d;
undefined DAT_00ebfb32;
undefined DAT_00ebfb5d;
undefined DAT_00ebfc12;
undefined DAT_00ebfc45;
undefined DAT_00ebfcf2;
undefined DAT_00ebfd25;
undefined DAT_00ebfd65;
undefined DAT_00ebfe12;
undefined DAT_00ebfe3d;
undefined DAT_00ebfef2;
undefined DAT_00ebff1d;
undefined DAT_00ebffe2;
undefined DAT_00ec0015;
undefined DAT_00ec00c2;
undefined DAT_00ec00ed;
undefined DAT_00ec01a2;
undefined DAT_00ec01dd;
undefined DAT_00ec02a2;
undefined DAT_00ec05d0;
undefined DAT_00ec0623;
undefined DAT_00ec11dd;
undefined DAT_0145d974;
undefined DAT_0145d16c;
undefined DAT_00ec14db;
undefined DAT_00ec1535;
undefined DAT_00ec1575;
undefined DAT_00ec15bd;
undefined4 DAT_0145f21c;
undefined4 DAT_0145f220;
undefined4 DAT_0145f224;
undefined4 DAT_0145f228;
undefined DAT_00ec160d;
undefined DAT_00eb38ed;
undefined DAT_0145ea08;
undefined DAT_00ec167e;
undefined DAT_00ec1707;
undefined DAT_00ec17f5;
undefined DAT_00ec189e;
undefined DAT_00ec18ee;
undefined DAT_00ec19ea;
undefined DAT_00ec1ac0;
undefined DAT_00ec1ba5;
char DAT_0145efc5;
undefined DAT_00ec2225;
undefined DAT_0113feb4;
undefined1 DAT_0113ffdc;
undefined DAT_00ec23dd;
undefined DAT_00ec2455;
undefined DAT_00eaceb0;
undefined DAT_00ec29b0;
undefined DAT_00ec2dc0;
undefined DAT_00ec1ed8;
undefined DAT_00ec2e16;
undefined DAT_00ec2e58;
undefined DAT_00ec2ecb;
undefined DAT_00ec1856;
char DAT_0145d902;
uint DAT_0145d908;
int *DAT_0145d904;
undefined DAT_00ec32b1;
undefined DAT_0057e8e9;
undefined4 *DAT_0145d908;
undefined DAT_0000000a;
undefined4 DAT_0145d904;
undefined DAT_00ec33f9;
undefined DAT_0057f662;
int DAT_0145d90c;
undefined DAT_00ec347d;
undefined DAT_0057f9c2;
undefined DAT_00ec34ed;
undefined4 DAT_0145d90c;
undefined DAT_0145d0fc;
undefined DAT_0057fe08;
undefined DAT_00ec36a0;
undefined DAT_00ec4086;
pointer PTR_vftable_012bc288;
pointer PTR_vftable_012bc290;
undefined DAT_00ec4396;
undefined DAT_00ec43fe;
undefined DAT_00ec453d;
undefined DAT_00ec45ed;
undefined DAT_00ec47a4;
undefined DAT_00588294;
undefined DAT_00ec4815;
undefined DAT_0058858a;
undefined DAT_00ec48b4;
undefined DAT_011405a4;
undefined DAT_00588a9b;
undefined DAT_00588b72;
undefined DAT_00ec4903;
undefined DAT_00ec4c00;
undefined DAT_00eac9bd;
undefined DAT_00ec4cf9;
int DAT_0145d8c8;
int DAT_0145d8c4;
undefined DAT_00ec4d70;
undefined DAT_00ec4dbb;
int DAT_0145dff8;
undefined DAT_00ec50f5;
int DAT_0145cebc;
undefined4 DAT_0145e0a0;
int *DAT_0145cff4;
undefined4 DAT_0145cff0;
undefined DAT_00ec52c6;
undefined DAT_00ec530d;
undefined DAT_0058e627;
undefined4 DAT_0145d0f4;
undefined FUN_0058e360;
undefined DAT_0114074c;
undefined FUN_0058e380;
undefined LAB_0058f08e;
undefined DAT_0113c2f0;
undefined DAT_00000004;
undefined DAT_00000000;
undefined DAT_00000008;
undefined DAT_00ec7a4c;
undefined DAT_0000001c;
undefined DAT_00ec7ad9;
undefined DAT_00ec7b77;
byte * * * *DAT_0145e9f0;
char DAT_0145d125;
undefined DAT_00ec7dca;
undefined DAT_00ec7e3e;
uint DAT_0145d0d0;
undefined DAT_00ec7f7d;
undefined DAT_005a80ea;
undefined DAT_00ec808d;
pointer[10] vftable;
undefined LAB_005ac0ef;
undefined DAT_00ec6235;
undefined DAT_005b0e86;
undefined DAT_00ec919d;
undefined LAB_005b530c;
undefined DAT_005b5967;
undefined DAT_00ec97d0;
undefined DAT_005b664e;
undefined DAT_005b6923;
undefined DAT_005b6ea8;
undefined DAT_005b7034;
undefined DAT_00ec9cc4;
undefined DAT_00ec9d18;
undefined DAT_00ec9d6d;
undefined DAT_00ec9ffd;
undefined DAT_00eac6ee;
undefined DAT_00eca09f;
undefined DAT_00eca0f1;
undefined DAT_00eca865;
undefined DAT_00eca710;
undefined DAT_00ecaca4;
undefined DAT_00ecad30;
undefined FUN_005c1340;
float DAT_0145db30;
undefined DAT_00ecb00d;
undefined DAT_01141770;
undefined DAT_00ecb088;
undefined DAT_005c1988;
undefined DAT_01288754;
undefined DAT_00ecb160;
undefined DAT_01141768;
undefined DAT_005c1d27;
undefined DAT_00ecb1f0;
undefined DAT_005c20e4;
undefined DAT_00ecb31e;
undefined1 DAT_0113fde4;
undefined DAT_0113fdf0;
undefined DAT_01141824;
undefined DAT_0114184c;
undefined DAT_01141914;
undefined DAT_005c2733;
undefined DAT_00ecb416;
undefined DAT_00ecb47f;
undefined DAT_00ecb4df;
undefined DAT_00ecb526;
undefined DAT_00ecb576;
undefined DAT_00ecb5be;
undefined DAT_00ecb5fe;
undefined DAT_00ecb63d;
undefined DAT_005c4807;
undefined DAT_00ecb955;
undefined DAT_00ecb9b5;
char DAT_0145d126;
int *DAT_0145e9f0;
undefined DAT_00ecba00;
undefined DAT_00ecba4e;
undefined DAT_00ecbac8;
undefined DAT_00ecbb48;
undefined DAT_00ecbb96;
undefined DAT_00ecbbee;
undefined DAT_00ecbc4e;
undefined DAT_00ecbd08;
undefined DAT_00ecbd66;
undefined4 DAT_01141a30;
undefined DAT_00ecbdb6;
undefined DAT_00ecbe16;
undefined DAT_00ecbe7e;
undefined DAT_00ecbec5;
undefined DAT_0000000e;
undefined DAT_00ecbf0e;
undefined DAT_00ecbf83;
undefined DAT_00ecbfb5;
undefined DAT_00eb41ad;
undefined DAT_00ecc0b6;
undefined DAT_00ecc4a9;
undefined DAT_00ecc4f5;
undefined DAT_00ecc5f3;
undefined DAT_00ecc6c3;
undefined4 *DAT_0145ec98;
undefined DAT_00000006;
undefined DAT_0000002c;
undefined DAT_00ecc7f2;
undefined4 DAT_012bc25c;
undefined DAT_00ecc83e;
undefined DAT_00ecc870;
undefined DAT_00ecc98e;
undefined DAT_00eccaff;
undefined DAT_00eccddb;
int DAT_0145ec98;
undefined DAT_00ecce3a;
undefined DAT_00ecceb8;
undefined DAT_005d2b93;
undefined DAT_005d2d26;
undefined DAT_005d2e96;
undefined DAT_005d310c;
undefined DAT_00ecd365;
undefined DAT_00ecd431;
undefined DAT_00ecd47d;
undefined DAT_00ecd594;
undefined DAT_005d5959;
undefined DAT_00ecd70b;
pointer[29] vftable;
undefined DAT_00f383ed;
undefined DAT_00ecd745;
undefined DAT_00ecd79e;
undefined DAT_00ecd844;
undefined DAT_00ecdbe0;
undefined DAT_00ecdc0d;
undefined DAT_00ecdeed;
undefined DAT_00ecdf1d;
undefined DAT_00ecdf5d;
undefined DAT_00ecdfd8;
undefined DAT_01141eec;
undefined DAT_00ece116;
char DAT_0145d7d0;
undefined DAT_00ece1b7;
undefined DAT_00ece238;
undefined DAT_00ece3b4;
undefined4 DAT_01141f68;
undefined DAT_00ece53e;
undefined DAT_00ece5e5;
char DAT_0145f250;
char DAT_0145dc6d;
char DAT_0145dc6e;
undefined FUN_0056f550;
undefined DAT_00ece88d;
undefined4 DAT_0145dbf0;
undefined FUN_00821cc0;
undefined DAT_00ece958;
undefined4 DAT_0145dab0;
undefined DAT_0145ebc8;
undefined FUN_005e09a0;
undefined FUN_005e0eb0;
int DAT_0145dabc;
undefined4 DAT_0145dab8;
undefined FUN_005dc360;
char DAT_0145ebe0;
int * * * * *DAT_0145ebe8;
undefined DAT_00eb96b5;
undefined4 DAT_0145dcbc;
int DAT_0145e9f0;
char DAT_0145ebdc;
uint DAT_0145ebd8;
int DAT_0145ebe8;
undefined DAT_00ece995;
undefined DAT_00ece9d5;
undefined DAT_00ecea36;
undefined DAT_00ecebbe;
undefined DAT_00ecec0b;
undefined DAT_012887c8;
undefined DAT_00ecec4c;
undefined DAT_00ecf58d;
undefined DAT_00ecf5fd;
undefined DAT_00ecf86b;
uint DAT_0145e648;
int DAT_0145e64c;
undefined DAT_00ecf953;
undefined DAT_005e2354;
undefined DAT_00ecf9cd;
undefined DAT_00ead9d0;
undefined DAT_00ecfa35;
undefined DAT_00ecfa75;
undefined DAT_00ecfac6;
undefined DAT_00ecfb26;
undefined DAT_00ecfcd7;
undefined DAT_00ecfd2e;
undefined DAT_00ecfd76;
undefined DAT_00ecfdee;
undefined DAT_00ecfe45;
undefined1 DAT_0145dc80;
undefined DAT_00ed019e;
undefined DAT_00ed0246;
undefined DAT_00ed048e;
undefined DAT_011a0a34;
undefined4 *DAT_0145ea60;
undefined DAT_0145eb40;
undefined DAT_0145eb68;
int *DAT_0145eb64;
int *DAT_0145eb8c;
undefined4 DAT_0145edc0;
undefined DAT_0145ee6c;
int DAT_0145ee74;
uint DAT_0145ee88;
undefined4 DAT_0145ea98;
undefined4 DAT_0145ea9c;
undefined4 DAT_012bbff8;
undefined4 DAT_012bbffc;
undefined FUN_005ec800;
undefined FUN_005ec850;
undefined DAT_00ed0aa9;
int DAT_0145ea60;
undefined4 DAT_0145dab4;
int DAT_0145eca4;
undefined4 DAT_0145eca8;
int DAT_0145ecd0;
int DAT_0145ecd4;
undefined DAT_0145ecac;
int DAT_0145eca0;
undefined DAT_0145e984;
undefined DAT_00ed1255;
int DAT_0145d748;
uint DAT_012bbff8;
char *DAT_012bbffc;
undefined FUN_005ec950;
undefined DAT_00ed139b;
undefined DAT_00ed1525;
undefined FUN_005ed080;
undefined FUN_005ed210;
undefined FUN_005ed3a0;
int DAT_012bbff8;
int DAT_012bbffc;
undefined DAT_0145eb10;
undefined DAT_00ed159e;
undefined DAT_00ed15e5;
undefined DAT_00ed0843;
undefined DAT_0145eea8;
undefined DAT_0145eeac;
undefined DAT_00ed16f0;
undefined DAT_00ed13ed;
undefined DAT_00ed173e;
undefined DAT_00ed1770;
undefined DAT_00ed179d;
undefined DAT_00ed17fb;
undefined DAT_00ed1838;
undefined DAT_00ed186d;
char DAT_0145f258;
undefined4 DAT_01463924;
undefined DAT_01463938;
undefined DAT_01463928;
undefined DAT_0146393c;
undefined DAT_01463950;
undefined DAT_01463940;
undefined DAT_01463954;
undefined DAT_01463968;
undefined DAT_01463958;
undefined DAT_0146396c;
undefined DAT_01463980;
undefined DAT_01463970;
undefined DAT_01463984;
undefined DAT_01463998;
undefined DAT_01463988;
undefined DAT_0146399c;
undefined DAT_00ed1b32;
undefined FUN_00f72560;
undefined4 UNK_0146392c;
undefined4 UNK_01463930;
undefined4 UNK_01463934;
undefined4 UNK_01463944;
undefined4 UNK_01463948;
undefined4 UNK_0146394c;
undefined4 UNK_0146395c;
undefined4 UNK_01463960;
undefined4 UNK_01463964;
undefined4 UNK_01463974;
undefined4 UNK_01463978;
undefined4 UNK_0146397c;
undefined4 UNK_0146398c;
undefined4 UNK_01463990;
undefined4 UNK_01463994;
undefined DAT_00ed1c95;
undefined DAT_00ed1cfd;
undefined DAT_005ef8a4;
undefined DAT_005ef9ee;
undefined DAT_00ed1edb;
undefined DAT_00ed1f23;
undefined *DAT_0145e9f0;
undefined DAT_00ed21be;
undefined DAT_005f0a78;
undefined DAT_00ed2285;
undefined4 * * *DAT_0145e9f0;
undefined DAT_005f0f85;
undefined DAT_00ed284e;
undefined DAT_00ed28e6;
undefined DAT_0113c348;
undefined DAT_005f3944;
undefined DAT_00ed292d;
undefined DAT_00ed296d;
undefined DAT_00ed29b5;
undefined DAT_00ed2a17;
undefined DAT_00ed37bd;
undefined DAT_00ed37ed;
undefined DAT_00ed384d;
undefined DAT_005fb562;
undefined DAT_005fb769;
undefined DAT_005fb88d;
undefined DAT_00ed3fb5;
undefined DAT_00ed3ff5;
undefined DAT_00ed40a6;
undefined DAT_00ed42b5;
undefined DAT_00ed42ed;
undefined DAT_00ed43dd;
undefined DAT_01142c38;
undefined DAT_01463a00;
undefined4 DAT_01463a48;
undefined4 UNK_014639e0;
undefined4 DAT_014639bc;
undefined4 UNK_014639e4;
undefined4 UNK_014639e8;
undefined FUN_00f728b0;
undefined FUN_00f728d0;
undefined4 DAT_01463a58;
undefined DAT_014639ec;
undefined4 DAT_014639dc;
undefined4 DAT_014639f0;
undefined DAT_00ed45ec;
undefined DAT_00ed4646;
undefined1 DAT_0113c6d8;
undefined DAT_00ed4685;
int DAT_01463a54;
undefined DAT_014639f8;
undefined DAT_014639f4;
undefined DAT_00ed4725;
undefined DAT_00ed4a36;
undefined2 DAT_01141648;
undefined DAT_01142c88;
undefined4 DAT_01463a5c;
undefined DAT_00ed4abc;
undefined DAT_014639d0;
int UNK_014639c4;
undefined FUN_00f72970;
int UNK_014639c8;
int UNK_014639cc;
uint DAT_014639d4;
undefined4 DAT_014639c0;
undefined DAT_00000007;
undefined DAT_01142eb4;
undefined DAT_00ed4e9b;
undefined DAT_0000001f;
undefined DAT_00ed508a;
undefined DAT_00ed51b2;
undefined DAT_00ed52fc;
undefined DAT_00ed5b2f;
undefined DAT_006076c8;
undefined DAT_00ed665e;
undefined DAT_00ed6b68;
undefined DAT_00ed34eb;
undefined DAT_00ed6d13;
undefined DAT_00ed7148;
undefined DAT_00ed737d;
undefined DAT_0145ca94;
undefined DAT_00ed75c3;
undefined DAT_00ed78b4;
undefined1 DAT_011434e0;
undefined DAT_011434e4;
undefined DAT_00ed7e5d;
undefined DAT_00ed7fd3;
int DAT_0145dfd0;
int DAT_0145dfdc;
undefined DAT_00ed8001;
undefined4 DAT_01463b38;
int DAT_01463b28;
int DAT_01463b2c;
int DAT_01463b30;
int DAT_01463b34;
undefined4 DAT_01463b48;
void *DAT_01463b40;
undefined4 DAT_01463b3c;
void *DAT_01463b44;
undefined DAT_00ed8039;
undefined FUN_00f72fc0;
undefined FUN_0061c5b0;
int DAT_0145d818;
undefined DAT_00ed8492;
undefined DAT_01143628;
undefined DAT_00ed84de;
undefined DAT_00ed866b;
undefined FUN_0061e2b0;
undefined4 DAT_0145ceb4;
undefined DAT_00ed8955;
undefined DAT_00ed899d;
undefined DAT_00ed8a80;
undefined DAT_00ed8ae3;
undefined DAT_00ed8d58;
undefined DAT_00ed8f63;
undefined DAT_00620c8f;
undefined DAT_00ed97c3;
undefined DAT_00ed991b;
int DAT_0145db30;
undefined DAT_00ed9987;
undefined DAT_00ed99e6;
undefined DAT_00ed9cf8;
undefined DAT_011451fc;
undefined DAT_00ed9dc9;
undefined DAT_00ed9f40;
undefined DAT_00ed9f8b;
undefined DAT_00ed9fc0;
undefined DAT_00ec0455;
undefined DAT_00eda016;
undefined DAT_00eda2b9;
char DAT_012bc068;
undefined DAT_00eda3e5;
undefined DAT_00eda73d;
undefined DAT_00eda98d;
undefined DAT_00eda87e;
int DAT_012bbf30;
undefined DAT_00edac2d;
undefined DAT_00edac7d;
undefined DAT_00edae25;
undefined DAT_01143a0c;
undefined DAT_0062b545;
undefined DAT_00edb217;
undefined DAT_00edb298;
undefined DAT_00edb46d;
undefined DAT_00edb597;
undefined DAT_00edb5fd;
pointer PTR_vftable_012bbeb8;
pointer PTR_vftable_012bbee0;
undefined DAT_00edc190;
undefined DAT_00edc3a1;
undefined DAT_00edc4c1;
undefined DAT_00edc973;
undefined DAT_00edc9ef;
undefined DAT_00edb76d;
undefined DAT_00edcbe3;
undefined DAT_00edccbd;
undefined DAT_00edd406;
undefined DAT_00edd45b;
undefined DAT_00edd498;
undefined DAT_00edd4fe;
undefined DAT_00edd553;
undefined DAT_00edd580;
undefined DAT_00edd991;
undefined DAT_00eddabd;
undefined DAT_00edd649;
undefined DAT_01288948;
undefined DAT_00edd68c;
undefined DAT_012889c8;
undefined DAT_01288a30;
undefined DAT_012889f4;
undefined DAT_01288a04;
undefined DAT_01288848;
undefined DAT_00edd7ad;
undefined DAT_00639553;
undefined DAT_00eddaf0;
undefined DAT_00edc855;
undefined DAT_00eddb3b;
undefined DAT_00eddb70;
undefined DAT_00edc69d;
undefined DAT_00eddbc6;
undefined DAT_00ec66e5;
undefined DAT_00edc29d;
undefined DAT_00eddc44;
undefined DAT_00eddd0d;
undefined LAB_0063b00a;
undefined DAT_0063b215;
undefined DAT_0063b422;
undefined LAB_0063b5ea;
undefined LAB_0063b7ba;
undefined DAT_0063b976;
undefined DAT_00ede23f;
undefined DAT_00ede274;
undefined DAT_00ede2ad;
undefined DAT_00ede2e8;
undefined DAT_00ede328;
undefined DAT_00ede4a0;
undefined DAT_00edcc18;
undefined DAT_00ede5fa;
undefined DAT_00ede63e;
undefined DAT_00ede69f;
undefined DAT_00ede6ff;
undefined DAT_00ede735;
undefined DAT_00ede798;
undefined DAT_00ede7fd;
undefined DAT_00ede85d;
undefined DAT_00ede8d0;
undefined DAT_00ede92b;
undefined DAT_0063dc0f;
undefined DAT_00edebcd;
undefined DAT_00edeea9;
undefined FUN_0063f290;
undefined FUN_00641100;
undefined DAT_00edeef3;
undefined DAT_00edef4d;
undefined DAT_00edf07c;
int DAT_012bbee8;
int DAT_012bbeec;
undefined DAT_00648701;
undefined FUN_006490b0;
undefined DAT_00edf815;
undefined FUN_00649a50;
undefined DAT_00edf971;
undefined4 DAT_011489ac;
pointer PTR_vftable_012bbe90;
undefined FUN_00649d20;
undefined DAT_00edfacb;
undefined DAT_00edfbdb;
undefined FUN_0064a480;
undefined DAT_00edfcc5;
undefined DAT_00edfd85;
undefined DAT_00edfee3;
undefined DAT_00edff90;
undefined DAT_00ee0586;
undefined DAT_00ee05d3;
undefined DAT_00ee060d;
undefined DAT_01288ab4;
undefined DAT_01288a88;
undefined DAT_00ee07b0;
undefined DAT_00ee07e8;
undefined DAT_01288b34;
undefined DAT_01288a78;
undefined DAT_00edf02d;
undefined DAT_00ee0b1d;
undefined FUN_00641e50;
undefined DAT_00ee0caa;
undefined FUN_0064b490;
undefined FUN_0063f260;
undefined DAT_00ee0d1d;
undefined DAT_00ee0ce5;
undefined DAT_00651efa;
undefined DAT_0065211a;
undefined DAT_00ee1860;
undefined DAT_00ee1930;
undefined DAT_00ee1b38;
undefined DAT_00ee1c48;
undefined DAT_00ee238d;
undefined FUN_0065f9a0;
undefined FUN_0065ded0;
undefined DAT_00ee2622;
undefined LAB_0065718a;
undefined DAT_00ee2fe5;
undefined DAT_00ee30ad;
undefined DAT_00ee3fed;
undefined DAT_00ee410c;
undefined DAT_00ee4450;
undefined DAT_00ee2d25;
undefined DAT_00ee47b8;
undefined DAT_00ee4c50;
undefined DAT_00ee4c95;
undefined DAT_00ee4dbd;
undefined DAT_00ee4e58;
undefined DAT_00ee5986;
undefined DAT_00ee5b58;
undefined DAT_00ee63ff;
undefined FUN_00675530;
undefined DAT_00ee6666;
undefined FUN_006703d0;
undefined FUN_00675600;
undefined FUN_00670400;
undefined DAT_00ee6b76;
undefined DAT_00ee695d;
undefined DAT_00ee69b5;
undefined DAT_00ee6a05;
undefined DAT_00ee6d46;
undefined DAT_00ee6ee6;
undefined DAT_00ee7394;
undefined DAT_00ee73ed;
undefined DAT_00ee744d;
undefined DAT_00ee7918;
undefined DAT_00ee83fb;
undefined DAT_00ee8cfd;
undefined DAT_00ee91c8;
undefined DAT_00ee9468;
undefined DAT_00eeab12;
undefined DAT_00eeae2f;
undefined DAT_00eeadbf;
undefined DAT_00eeac3a;
undefined DAT_00eeacba;
undefined DAT_00eeafb6;
undefined DAT_00eeb0d6;
undefined DAT_00eeb60b;
undefined DAT_00eeb65b;
undefined DAT_00eeb6cc;
undefined DAT_00eeb8e0;
undefined DAT_00eec0f6;
undefined DAT_00eec216;
undefined DAT_00eec2ec;
undefined DAT_00eec372;
undefined DAT_00eec3f2;
undefined DAT_00eec4bd;
undefined DAT_00eec732;
undefined DAT_00eec7fa;
undefined DAT_00eec87a;
undefined DAT_00eec9f8;
undefined DAT_00eecda2;
undefined DAT_00eece6a;
undefined DAT_00eeceea;
undefined DAT_00eecfcd;
undefined DAT_00eed17d;
pointer[7] vftable;
undefined4 DAT_01463890;
undefined DAT_01462f90;
undefined DAT_01462f98;
undefined DAT_01462fa0;
undefined DAT_01462f84;
undefined DAT_01462f88;
undefined DAT_01462f8c;
undefined DAT_01462f80;
undefined DAT_00eed1f1;
int DAT_01463894;
undefined DAT_00eed406;
undefined DAT_00eed456;
undefined DAT_00eed880;
undefined DAT_00eed913;
undefined DAT_00eeda0d;
undefined DAT_00697e1e;
undefined FUN_00698b60;
undefined DAT_00eedf53;
undefined FUN_006994f0;
undefined _guard_check_icall;
undefined DAT_00eee04d;
undefined FUN_00699990;
undefined FUN_00699c20;
undefined DAT_00eee279;
undefined DAT_00eee33b;
undefined FUN_0069a090;
undefined DAT_00eee3f6;
undefined DAT_00eee7a8;
undefined DAT_01288c0c;
undefined DAT_01288b8c;
undefined DAT_01288b7c;
undefined DAT_00eee8af;
undefined DAT_00eee933;
undefined DAT_006a6f4a;
undefined DAT_006a716a;
undefined DAT_006a7aea;
undefined LAB_006a9158;
undefined DAT_00ef0091;
undefined DAT_00ef0821;
undefined FUN_0065c070;
undefined DAT_00ef0a30;
undefined FUN_0065de10;
undefined DAT_00ef1ac0;
undefined DAT_00ef1b40;
undefined DAT_00ef1baa;
undefined DAT_00ef1cd8;
undefined DAT_00ef1bed;
undefined DAT_00ef1975;
undefined DAT_00ef19b5;
undefined DAT_00ef21dd;
undefined DAT_00ef214e;
undefined DAT_00ef21a4;
undefined DAT_00ef2ecd;
undefined DAT_00ef2fbd;
undefined FUN_006cdf40;
undefined DAT_00ef3fe9;
undefined FUN_006d35e0;
undefined DAT_00ef40d1;
undefined DAT_00ef4cda;
undefined DAT_00ef4a48;
undefined FUN_006d3ad0;
undefined DAT_00ef577a;
undefined FUN_006ce110;
undefined FUN_006d39e0;
undefined FUN_006ce0e0;
undefined FUN_006d38f0;
undefined DAT_00ef56e0;
undefined FUN_006ce0b0;
undefined FUN_006d3800;
undefined FUN_006ce080;
undefined DAT_00ef53dd;
undefined DAT_00ef540d;
undefined DAT_00ef5b29;
undefined DAT_00ef5bc2;
undefined DAT_00ef62ab;
undefined DAT_00ef631b;
undefined DAT_00ef66e8;
undefined *PTR_vftable_012bbee0;
undefined DAT_00ef3e85;
undefined DAT_00ef5da4;
undefined DAT_00ef5e04;
undefined DAT_00ef5e64;
undefined DAT_00ef5ebe;
undefined DAT_00ef5f14;
undefined DAT_00ef7962;
undefined DAT_00ef7a82;
undefined DAT_00ef7ba2;
undefined DAT_00ef90de;
undefined DAT_00ef8805;
undefined DAT_00ef8855;
undefined DAT_00ef49fd;
undefined DAT_00ef92fb;
undefined DAT_00ef940b;
undefined DAT_00efae06;
undefined DAT_00ef9f78;
undefined DAT_00ef9ff0;
undefined DAT_00efa03d;
undefined DAT_00efa08d;
undefined DAT_00efa0f1;
undefined DAT_00efa146;
undefined DAT_00efa7cd;
undefined DAT_00efa7fd;
undefined DAT_00efa86d;
undefined DAT_00efbf9f;
undefined LAB_006d6e9a;
undefined DAT_00efb50d;
undefined DAT_00efbdf0;
undefined DAT_00efce4a;
undefined FUN_006eaa90;
undefined FUN_006eeb40;
undefined FUN_006eaa60;
undefined FUN_006eea80;
undefined DAT_00efcdaf;
undefined DAT_00efc57d;
undefined DAT_00efe19f;
undefined DAT_00efe13f;
undefined DAT_00efe0df;
undefined DAT_00efe07f;
undefined FUN_006eec00;
undefined FUN_006f3700;
undefined DAT_00efe012;
undefined DAT_00efd76d;
undefined DAT_00efd7bb;
undefined DAT_00efd82c;
undefined DAT_00efd895;
undefined DAT_00efc884;
undefined DAT_00efc8e4;
undefined DAT_00efc944;
undefined DAT_00efc9a4;
undefined DAT_00efe6a2;
undefined DAT_00efe7c2;
undefined DAT_00efe8e2;
undefined DAT_00efea32;
undefined DAT_00efeb52;
undefined DAT_00f005a7;
undefined DAT_00eff7ed;
undefined DAT_00eff88d;
undefined DAT_00eff904;
undefined DAT_00eff974;
undefined DAT_00eff9bb;
undefined DAT_00effa56;
undefined DAT_00effaa6;
undefined DAT_00effaf6;
undefined DAT_00effb53;
undefined DAT_00efd984;
undefined DAT_00efd9de;
undefined DAT_00f008c9;
undefined DAT_00f009de;
undefined DAT_00f00df5;
undefined DAT_00f00e6f;
undefined DAT_00f00edf;
undefined DAT_00f00f4f;
undefined DAT_00f00fbc;
undefined DAT_00f01c28;
undefined DAT_00f02362;
undefined DAT_00f023b5;
undefined DAT_00f01454;
undefined DAT_00f03b81;
undefined DAT_00f03bec;
undefined DAT_00f03c5c;
undefined DAT_00f03d75;
undefined DAT_00f03e85;
undefined DAT_00f026e4;
undefined DAT_00f04f36;
undefined DAT_00f0669f;
undefined DAT_00f0663f;
undefined DAT_00f065df;
undefined DAT_00f0657f;
undefined DAT_00f0651f;
undefined DAT_00f05ae7;
undefined DAT_00f03f74;
undefined DAT_00f03fd4;
undefined DAT_00f06b42;
undefined DAT_00f06c62;
undefined DAT_00f06d82;
undefined DAT_00f06ea2;
undefined DAT_00f0892a;
undefined DAT_00f088b2;
undefined DAT_00f08832;
undefined DAT_00f087b7;
undefined DAT_00f07974;
undefined DAT_00f079e4;
undefined DAT_00f07a54;
undefined DAT_00f07ac4;
undefined DAT_00f07b34;
undefined DAT_00f07b86;
undefined DAT_00f07bd6;
undefined DAT_00f07c26;
undefined DAT_00f07cb6;
undefined DAT_00f07d06;
undefined DAT_00f05e04;
undefined DAT_00f05e64;
undefined DAT_00f05ec4;
undefined DAT_00f08d62;
undefined DAT_00f08e82;
undefined DAT_00f08fd2;
undefined DAT_00f0acef;
undefined DAT_00f0ac7f;
undefined DAT_00f0ac0f;
undefined DAT_00f0ab9f;
undefined DAT_00f09dc9;
undefined DAT_00f09e1b;
undefined DAT_00f09e6b;
undefined DAT_00f09ed8;
undefined DAT_00f09f4f;
undefined DAT_00f09fcd;
undefined DAT_00f0a042;
undefined DAT_00f0b3b6;
undefined DAT_00f0b4c6;
undefined DAT_00f0b5e9;
undefined DAT_00f0bdbb;
undefined DAT_00f0be0b;
undefined DAT_00f0be5b;
undefined DAT_00f0beab;
undefined DAT_00f0bf1c;
undefined DAT_00f0a564;
undefined DAT_00f0cdc2;
undefined DAT_00f0d9fc;
undefined DAT_00f0da6c;
undefined DAT_00f0dadc;
undefined DAT_00f0db4c;
undefined DAT_00f0dbbc;
undefined DAT_00f0c364;
undefined DAT_00f0e9d2;
undefined DAT_00f0eb12;
undefined DAT_00f0ec32;
undefined DAT_00f0ed72;
undefined DAT_00f0eeb2;
undefined DAT_00f0eff2;
undefined DAT_00f0f132;
undefined DAT_00f10f6f;
undefined DAT_00f10f0f;
undefined DAT_00f10eaf;
undefined DAT_00f10e4f;
undefined DAT_00f0f9ca;
undefined DAT_00f0fa47;
undefined DAT_00f0fad5;
undefined DAT_00f0fb55;
undefined DAT_00f0fbca;
undefined DAT_00f113b2;
undefined DAT_00f114d2;
undefined DAT_00f115e6;
undefined DAT_00f134a5;
undefined DAT_00f13425;
undefined DAT_00f133ad;
undefined DAT_00f13325;
undefined FUN_00748970;
undefined DAT_00f132a2;
undefined FUN_0073f270;
undefined DAT_00f1320f;
undefined DAT_00f131af;
undefined DAT_00f123a4;
undefined DAT_00f12414;
undefined DAT_00f12484;
undefined DAT_00f124f4;
undefined DAT_00f12546;
undefined DAT_00f12596;
undefined DAT_00f125e6;
undefined DAT_00f12636;
undefined DAT_00f126b2;
undefined DAT_00f12732;
undefined DAT_00f127b2;
undefined DAT_00f12832;
undefined DAT_00f10994;
undefined DAT_00f109f4;
undefined DAT_00f10a54;
undefined DAT_00f139f2;
undefined DAT_00f13b12;
undefined DAT_00f13c32;
undefined DAT_00f1521f;
undefined DAT_00f151b1;
undefined DAT_00f1458b;
undefined DAT_00f145f9;
undefined DAT_00f1464b;
undefined DAT_00f146b9;
undefined DAT_00f1470b;
undefined DAT_00f14784;
undefined DAT_00f147f4;
undefined DAT_00f14846;
undefined DAT_00f14896;
undefined DAT_00f14926;
undefined DAT_00f160ef;
undefined DAT_00f1572b;
undefined DAT_00f15799;
undefined DAT_00f1581a;
undefined DAT_00f1589a;
undefined DAT_00f1591d;
undefined DAT_00f164d2;
undefined DAT_00f1748a;
undefined DAT_00f1740f;
undefined DAT_00f16bf4;
undefined DAT_00f16c46;
undefined DAT_00f16cac;
undefined DAT_00f16d1c;
undefined DAT_00f16d8c;
undefined DAT_00f16dfc;
undefined DAT_00f15ce4;
undefined DAT_00f17842;
undefined DAT_00f184ef;
undefined DAT_00f1848f;
undefined DAT_00f17c3b;
undefined DAT_00f17cb4;
undefined DAT_00f17d06;
undefined DAT_00f17d6c;
undefined DAT_00f17ddc;
undefined DAT_00f17e41;
undefined DAT_00f17ec8;
undefined DAT_00f17f63;
undefined DAT_00f17fe8;
undefined DAT_00f18078;
undefined DAT_00f191f0;
undefined DAT_00f19168;
undefined DAT_00f190ef;
undefined DAT_00f1908f;
undefined DAT_00f1902f;
undefined DAT_00f18a04;
undefined DAT_00f18a74;
undefined DAT_00f18ac6;
undefined DAT_00f18b16;
undefined DAT_00f18b8a;
undefined DAT_00f18bf8;
undefined DAT_00f18c72;
undefined DAT_00f19562;
undefined DAT_00f19682;
undefined DAT_00f197a2;
undefined DAT_00f1a7ed;
undefined DAT_00f1a76a;
undefined DAT_00f1a6ea;
undefined DAT_00f19cd9;
undefined DAT_00f19d49;
undefined DAT_00f19dc4;
undefined DAT_00f19e34;
undefined DAT_00f19ea4;
undefined DAT_00f19ef6;
undefined DAT_00f19f46;
undefined DAT_00f19f96;
undefined DAT_00f19ffc;
undefined DAT_00f1b32f;
undefined DAT_00f1ad74;
undefined DAT_00f1adbb;
undefined DAT_00f1ae0b;
undefined DAT_00f1ae7c;
undefined DAT_00f1af10;
undefined DAT_00f1bdbd;
undefined DAT_00f1bd3f;
undefined DAT_00f1b804;
undefined DAT_00f1b856;
undefined DAT_00f1b8bc;
undefined DAT_00f1b92c;
undefined DAT_00f1c082;
undefined DAT_00f1ca0a;
undefined DAT_00f1c3b9;
undefined DAT_00f1c434;
undefined DAT_00f1c486;
undefined DAT_00f1c4ec;
undefined DAT_00f1c55c;
undefined DAT_00f1c5cc;
undefined DAT_00f1c65b;
undefined DAT_00f1c6f6;
undefined DAT_00f1d1af;
undefined DAT_00f1d14f;
undefined DAT_00f1d0ef;
undefined DAT_00f1cd9b;
undefined DAT_00f1ce30;
undefined DAT_00f1cec0;
undefined DAT_00f1cf53;
undefined DAT_00f1db4d;
undefined DAT_00f1dacd;
undefined DAT_00f1da50;
undefined DAT_00f1d454;
undefined DAT_00f1d4c4;
undefined DAT_00f1d534;
undefined DAT_00f1d586;
undefined DAT_00f1d5d6;
undefined DAT_00f1d626;
undefined DAT_00f1d68c;
undefined DAT_00f1dd99;
undefined DAT_00f1de09;
undefined DAT_00f1de79;
undefined DAT_00f1deec;
undefined DAT_00f1df83;
undefined DAT_00f1e3ff;
undefined DAT_00f1e390;
undefined DAT_00f1e8cd;
undefined DAT_00f1e5e4;
undefined DAT_00f1e636;
undefined DAT_00f1e69c;
undefined DAT_00f1e70c;
undefined DAT_00f1e77c;
undefined DAT_00f1e979;
undefined DAT_00f1ea16;
undefined DAT_00f1eaa3;
undefined DAT_00f1eb33;
undefined DAT_00f1ecdc;
undefined DAT_00f1ed73;
undefined DAT_00f1ef14;
undefined FUN_00774840;
undefined DAT_00f1f08c;
undefined FUN_00774cc0;
undefined DAT_00f1f1c2;
undefined DAT_00f1f272;
undefined FUN_00774f10;
undefined DAT_00f1f2ad;
undefined DAT_0145eb00;
undefined DAT_00f1f3fb;
undefined DAT_00f1f481;
undefined DAT_00f1f745;
undefined DAT_01198084;
undefined DAT_0119822c;
undefined DAT_00f1f795;
undefined DAT_0145e9fc;
undefined LAB_00777cf5;
undefined DAT_00779539;
undefined DAT_00f1fbcd;
undefined DAT_011982ec;
undefined DAT_00f1fc15;
undefined DAT_007798e1;
undefined DAT_00f1fc7e;
undefined DAT_00f1fcc5;
undefined DAT_00779c13;
undefined DAT_00f1fd05;
undefined DAT_00f1fd80;
undefined DAT_00779f4f;
undefined DAT_0145ea00;
undefined DAT_00f1fdbd;
undefined DAT_0077b972;
TypeDescriptor TypeDescriptor_012fa888;
undefined DAT_013dd858;
undefined1 DAT_01464f90;
undefined1 DAT_01464f96;
undefined DAT_00f20435;
undefined DAT_00f20491;
undefined LAB_0077e86f;
undefined DAT_00f2077d;
undefined DAT_011983a4;
undefined DAT_0119839c;
undefined DAT_01198398;
undefined DAT_00f207c6;
char DAT_0145ecdc;
undefined DAT_00f32415;
undefined DAT_00edfdfd;
undefined DAT_00f2083e;
undefined DAT_00f2086d;
undefined DAT_00f208b5;
undefined DAT_00f20935;
undefined DAT_00f209a5;
undefined DAT_00f209fe;
undefined DAT_00f20a4e;
undefined DAT_00791d58;
undefined LAB_007a9c98;
undefined LAB_007a9d5c;
undefined LAB_007a9e34;
undefined LAB_007a9efc;
undefined LAB_007a9fdf;
undefined LAB_007aa0cf;
undefined LAB_007aa1bf;
undefined DAT_00f25ecd;
TypeDescriptor TypeDescriptor_0130b1b8;
undefined DAT_00f260fd;
undefined DAT_00f2617d;
undefined DAT_00f261bd;
undefined DAT_00ec669d;
undefined DAT_00f2620d;
char DAT_0145cecd;
char DAT_0145cecf;
undefined DAT_00f2624d;
undefined DAT_00f262ad;
undefined DAT_00f262dd;
undefined DAT_00f26325;
undefined DAT_00f263ea;
undefined DAT_00f2642d;
undefined DAT_00f2646d;
undefined DAT_00f264bd;
undefined DAT_00f26562;
undefined DAT_00f26595;
undefined DAT_00f26642;
undefined DAT_00f2666d;
undefined DAT_00f266c5;
undefined DAT_00f2677a;
undefined DAT_00f267d5;
undefined DAT_00f2682d;
undefined DAT_00f26885;
undefined DAT_00f268e5;
undefined DAT_00f2699a;
undefined DAT_00f26a52;
undefined DAT_00f26a85;
undefined DAT_00f26b42;
undefined DAT_00f26b75;
undefined DAT_00f26bad;
undefined DAT_00f26c62;
undefined DAT_00f26d02;
undefined DAT_00f26da2;
undefined DAT_00f26dcd;
undefined DAT_00f26e82;
undefined DAT_00f26ead;
undefined DAT_00f26f62;
undefined DAT_00f26f8d;
undefined DAT_00f26fcd;
undefined4 DAT_0145e9f4;
undefined DAT_00f273c5;
undefined DAT_00f27f3d;
int DAT_0145dcbc;
undefined DAT_00f27f85;
undefined DAT_00f27fc5;
undefined DAT_00f276e8;
undefined LAB_007fe10f;
undefined DAT_00f281de;
undefined DAT_00f28233;
undefined DAT_01288c38;
undefined DAT_00f2886e;
undefined DAT_00f28988;
undefined FUN_00801840;
undefined DAT_00f28bc7;
undefined FUN_00801290;
undefined DAT_00f29111;
undefined DAT_00f291c0;
undefined DAT_00f29205;
undefined DAT_00f29270;
undefined DAT_00f295a6;
undefined DAT_00f2966b;
undefined DAT_00f2982c;
undefined DAT_00f298b1;
undefined DAT_00f29915;
undefined DAT_01288694;
undefined DAT_00f29955;
int DAT_012bbe68;
int DAT_012bbe6c;
pointer PTR_vftable_012bbe60;
undefined FUN_008040c0;
undefined DAT_00f29cb0;
undefined DAT_00f29f78;
undefined DAT_00805fa4;
undefined FUN_00808990;
int DAT_0145ebf4;
undefined FUN_00808bc0;
undefined FUN_0056f580;
undefined DAT_00f2a3dc;
undefined FUN_0056f600;
undefined *PTR_vftable_012bbe60;
undefined DAT_00f2a5e5;
undefined DAT_00f2a648;
undefined FUN_008079d0;
undefined DAT_00f2a6b0;
undefined FUN_00807b40;
undefined DAT_00f2a735;
undefined DAT_00f2a77e;
undefined DAT_00f2a8a8;
undefined DAT_00f2a988;
undefined DAT_00f2aa33;
undefined DAT_00f2aad3;
undefined DAT_0080a4ce;
undefined DAT_0080a6be;
undefined DAT_0080a89e;
undefined DAT_00f2adad;
undefined DAT_00f2ae0d;
undefined DAT_00f2aee0;
undefined DAT_00f2af3d;
undefined DAT_0080bd56;
undefined DAT_00f2af9d;
undefined DAT_00f2b19c;
undefined DAT_00ec5625;
undefined DAT_00f2b2a5;
undefined DAT_00f2b45d;
undefined DAT_00f2b6d7;
undefined DAT_0080eb65;
undefined DAT_00f2be46;
undefined DAT_00813a9f;
undefined DAT_01288c80;
int DAT_0145d128;
undefined DAT_00f2c795;
undefined FUN_00814310;
undefined FUN_008145b0;
undefined DAT_00f2c80d;
undefined DAT_00f2c865;
undefined FUN_00814890;
undefined DAT_00f2c8b5;
undefined FUN_00814aa0;
undefined DAT_00f2cde5;
char DAT_0145ca93;
undefined DAT_00f2ce4d;
undefined DAT_00f2ce95;
undefined DAT_00f2cf0d;
undefined DAT_00f2cf57;
undefined DAT_00f2cfbf;
undefined DAT_00f2d022;
undefined DAT_00f2d06e;
undefined DAT_00f2d1da;
undefined4 DAT_01463bc0;
undefined DAT_01463ba4;
undefined4 DAT_01463bac;
undefined FUN_00f74590;
undefined4 *DAT_01463ba8;
undefined DAT_00f2d26d;
undefined DAT_00ede598;
uint DAT_0145dc38;
undefined4 DAT_0145dc24;
undefined DAT_00f2d4bd;
char DAT_0145eb0a;
undefined DAT_0145eba4;
uint DAT_0145ea9c;
byte DAT_0145eae8;
int DAT_0145eaa0;
int DAT_0145eaa4;
undefined DAT_0145eba8;
HWND DAT_0145eb9c;
undefined DAT_00f2d6e5;
undefined4 DAT_0145ea60;
undefined1 UNK_0145eb0d;
undefined FUN_0081cc30;
undefined DAT_00f2d62d;
undefined DAT_00f2d696;
undefined DAT_00f2d71d;
undefined DAT_00f2d755;
undefined DAT_00f2d7d8;
undefined DAT_00f2d825;
undefined DAT_00f2d8e6;
undefined DAT_00f2d895;
undefined DAT_00f2da00;
undefined DAT_00eb9eed;
undefined DAT_01463bc4;
undefined DAT_00f2da2d;
undefined4 DAT_012bbe68;
undefined4 DAT_012bbe6c;
undefined DAT_00f2dcf7;
undefined DAT_00f2dd6e;
undefined DAT_00f2ddc6;
undefined DAT_00f2df82;
undefined DAT_0113c084;
undefined DAT_00f2e07d;
undefined DAT_00f2e0ce;
undefined DAT_00f2e3d1;
undefined DAT_00f2e473;
undefined FUN_00822d20;
undefined DAT_00f2e93a;
undefined FUN_00823d50;
undefined DAT_00f2ebb8;
undefined DAT_00f2ebfd;
undefined DAT_00f2ed08;
undefined FUN_00824170;
undefined FUN_008249b0;
undefined FUN_00825810;
undefined DAT_00f2f008;
undefined DAT_00f2f05d;
undefined FUN_00825eb0;
undefined DAT_0082731e;
undefined DAT_0082755e;
undefined DAT_0082792e;
undefined DAT_00827b4e;
undefined DAT_00827d7e;
undefined FUN_0082aae0;
undefined DAT_00f2f8e9;
undefined FUN_0082bba0;
undefined DAT_00f2f9ed;
undefined FUN_0082bc50;
undefined DAT_00f2fc24;
undefined FUN_0082bd10;
undefined DAT_00f3015d;
undefined DAT_00f302bd;
undefined DAT_00f303cd;
undefined DAT_00f30535;
undefined DAT_00f2fcbd;
undefined DAT_00f30585;
undefined DAT_00f305c5;
undefined DAT_00f307d3;
undefined DAT_00f30825;
undefined DAT_0082d9fb;
undefined LAB_0082dc31;
undefined DAT_0082ea77;
undefined DAT_0082ed07;
undefined DAT_0082f00a;
undefined DAT_0082f30a;
undefined DAT_0082f73f;
undefined DAT_0082fb71;
int DAT_012bc100;
char DAT_0145cecc;
char DAT_0145cece;
undefined DAT_00f3134c;
undefined DAT_00830077;
undefined LAB_00830302;
undefined1 DAT_0145dc6d;
undefined DAT_00f3149d;
undefined DAT_00f314dd;
undefined DAT_00f3229d;
undefined DAT_00f3236e;
undefined4 DAT_01464f78;
undefined DAT_00f323c9;
undefined DAT_00f32623;
undefined DAT_00f3288d;
undefined DAT_00f32911;
undefined DAT_00f32966;
undefined DAT_00f329ad;
undefined DAT_0083887e;
undefined DAT_00838963;
undefined DAT_00f32b7d;
undefined DAT_00f32bbd;
undefined DAT_00f32c0b;
undefined DAT_00f3322d;
pointer PTR_vftable_012bc31c;
undefined DAT_00f33150;
undefined DAT_00f331a3;
undefined DAT_00f333a6;
undefined DAT_00f33425;
undefined DAT_0083ce99;
undefined DAT_0083d207;
undefined DAT_00f341f5;
undefined DAT_00f34556;
undefined DAT_011a08d0;
undefined DAT_011a08d8;
undefined DAT_00f3460c;
undefined DAT_00f3464d;
undefined DAT_00ecd923;
undefined DAT_00f3476d;
undefined DAT_00f347cf;
undefined DAT_00f348db;
undefined DAT_011a0960;
undefined DAT_00f34925;
undefined DAT_00f34a8a;
undefined DAT_011a0984;
undefined DAT_00f34b2c;
undefined DAT_00f34bfc;
undefined DAT_00f34cea;
undefined DAT_00f3558d;
undefined DAT_011a0ce0;
undefined DAT_00846fdb;
undefined DAT_00f355fd;
undefined DAT_0084719c;
undefined DAT_00f3579e;
undefined DAT_00f35830;
undefined DAT_011a0cbc;
undefined DAT_00f358e3;
undefined DAT_0084822f;
undefined DAT_00f359ad;
undefined DAT_00848597;
undefined DAT_00f35a1e;
undefined DAT_00848754;
undefined DAT_00f35af5;
undefined LAB_00848fd4;
undefined DAT_00f353d9;
undefined DAT_00f35d98;
undefined DAT_00f354f9;
undefined DAT_00f35de0;
undefined4 DAT_0145eaec;
undefined4 DAT_0145eaf0;
undefined DAT_00f35225;
undefined DAT_00f351e5;
undefined DAT_00f35e9e;
undefined DAT_00f3608d;
undefined DAT_00f360bd;
undefined DAT_00f3613d;
undefined2 DAT_0119c998;
undefined DAT_011a0d74;
undefined DAT_00f361d5;
undefined DAT_00eee475;
undefined DAT_00f36226;
undefined DAT_00f36265;
undefined DAT_00f362be;
undefined DAT_011a0d6c;
undefined DAT_00000010;
undefined DAT_00f3651e;
undefined DAT_00f3655d;
uint DAT_0145e9f0;
undefined DAT_00f365bd;
undefined DAT_00f36605;
undefined DAT_00f3663d;
undefined DAT_00f3681c;
undefined DAT_00f36c74;
char DAT_0145ee4a;
undefined4 DAT_0145ec98;
undefined DAT_00f36cc6;
undefined4 DAT_012bc20c;
undefined DAT_0000002f;
undefined DAT_00f36d4d;
undefined DAT_00f36e1d;
undefined DAT_00f36e80;
undefined DAT_00f36ec5;
undefined DAT_00f36f0d;
undefined DAT_00f36f5d;
undefined DAT_00f36fad;
undefined DAT_00f37037;
undefined DAT_00f3706d;
undefined DAT_00f370ad;
undefined DAT_00f370f5;
undefined DAT_00f37227;
undefined1 DAT_0112e28c;
undefined DAT_011426e0;
undefined DAT_011a166c;
undefined DAT_008554ba;
undefined DAT_00f3728d;
undefined1 DAT_01142038;
undefined DAT_00f372f5;
undefined DAT_00f37365;
undefined DAT_00f373ae;
undefined DAT_00f37406;
undefined DAT_00f37456;
undefined DAT_00f374a6;
int *DAT_0145edcc;
int DAT_0145edc8;
undefined DAT_00f374f6;
int *DAT_0145edd4;
int DAT_0145edd0;
undefined DAT_00f3753e;
undefined DAT_00f3762e;
undefined DAT_00f37696;
undefined DAT_00f376d5;
undefined DAT_00f3773e;
undefined DAT_00f37795;
undefined DAT_00f37829;
undefined DAT_00f3788d;
undefined DAT_00f378dd;
undefined DAT_00f37947;
undefined DAT_00f379ee;
undefined DAT_00f37a46;
undefined DAT_00f37a8e;
undefined DAT_00f37ade;
undefined DAT_00f37b2e;
undefined DAT_00f37b7e;
undefined DAT_00f37bc6;
undefined DAT_00f37c16;
undefined DAT_00f37c66;
undefined DAT_00f37cb6;
undefined DAT_00f37d1f;
undefined DAT_00f382bd;
undefined DAT_00f382fd;
undefined DAT_00f38335;
undefined DAT_00f38375;
undefined DAT_00f383b5;
undefined DAT_00f3842d;
undefined DAT_00eb037e;
undefined DAT_00f3823d;
undefined DAT_00f38760;
undefined DAT_00f395b5;
undefined DAT_00f39748;
undefined DAT_00f39b85;
undefined DAT_00f39be9;
undefined DAT_00f39c85;
undefined DAT_00f39f05;
int DAT_012bc26c;
int DAT_012bc270;
int DAT_012bc274;
int DAT_012bc278;
undefined DAT_00f39fec;
undefined DAT_00f3a4f9;
undefined DAT_00f3a545;
undefined DAT_00f3a5a2;
undefined DAT_00f3a787;
undefined DAT_00f3a7e7;
undefined DAT_00f3a83e;
undefined DAT_00f3a886;
undefined DAT_00f3ac46;
undefined DAT_00f3ad86;
undefined DAT_00f3af47;
undefined DAT_00f3af8d;
undefined DAT_00f3b017;
undefined DAT_011a2310;
undefined DAT_00f3b399;
undefined DAT_00f3b82d;
undefined DAT_00f3b92e;
pointer[19] vftable;
undefined DAT_00f3ba30;
undefined DAT_00f3bb2b;
undefined DAT_00f3bba4;
undefined DAT_00f3bc2c;
undefined DAT_00f3bc6c;
undefined DAT_011a23f8;
undefined DAT_011a2408;
undefined DAT_00f3bcf7;
undefined DAT_00f3be4d;
undefined1 DAT_011a2468;
undefined DAT_00f3be9c;
undefined1 DAT_011a23fc;
undefined DAT_0112e4e8;
undefined DAT_01141644;
undefined1 DAT_011a2464;
undefined DAT_00f3bf33;
undefined DAT_0087d74c;
undefined4 _tls_index;
undefined DAT_00f3c904;
undefined DAT_00f3cb7d;
undefined *PTR_FUN_00f8f794;
undefined DAT_00f8f294;
undefined DAT_00f3da60;
undefined LAB_008d75c0;
undefined FUN_00466fc0;
undefined FUN_008ac310;
int DAT_013dd860;
undefined DAT_00f76a8c;
undefined DAT_00f77510;
undefined DAT_00f77520;
undefined DAT_00f77530;
undefined DAT_0125c440;
int DAT_0128fd40;
undefined DAT_013dd988;
undefined DAT_013dd984;
undefined DAT_013dd980;
undefined DAT_013dd97c;
undefined DAT_013dd978;
undefined DAT_013dd974;
undefined DAT_013dd9a0;
undefined DAT_013dd994;
undefined DAT_013dd970;
undefined DAT_013dd96c;
undefined DAT_013dd968;
undefined DAT_013dd964;
undefined DAT_013dd998;
undefined DAT_013dd98c;
undefined4 DAT_013dd990;
undefined DAT_013dd99c;
undefined DAT_013dd8d8;
undefined DAT_013dd894;
undefined DAT_013dd888;
undefined DAT_013dd88c;
undefined DAT_013dd898;
undefined4 DAT_0128fd80;
undefined4 DAT_013dd89c;
pointer PTR_DAT_00f949e0;
undefined DAT_00f3c970;
pointer PTR_FUN_00f77518;
undefined UNK_00f7751c;
undefined FUN_008ab370;
undefined FUN_004693b0;
undefined FUN_008ad0a0;
TypeDescriptor TypeDescriptor_012bc368;
undefined FUN_008c1280;
undefined FUN_008c2420;
undefined DAT_00f3cf60;
undefined DAT_00f3de01;
undefined DAT_00f3e000;
undefined FUN_00f3e140;
undefined DAT_00f3e1a0;
undefined DAT_00f3e8f0;
undefined DAT_00f3e910;
undefined FUN_00f3f7f0;
undefined FUN_00f3e8d0;
undefined DAT_00f3d85d;
undefined UNK_00face14;
undefined DAT_0128fdb0;
undefined *PTR_s_currentTime_00fac478;
undefined *PTR__guard_check_icall_0128fdc0;
undefined *PTR__guard_check_icall_0128fdd0;
undefined *PTR__guard_check_icall_0128fde0;
undefined PTR__guard_check_icall_0128fdf0;
undefined *PTR__guard_check_icall_0128fdc4;
undefined *PTR_FUN_0128fdc8;
undefined *PTR_FUN_0128fdcc;
undefined *PTR__guard_check_icall_0128fdd4;
undefined *PTR__guard_check_icall_0128fdd8;
undefined *PTR__guard_check_icall_0128fddc;
undefined *PTR__guard_check_icall_0128fde4;
undefined *PTR__guard_check_icall_0128fde8;
undefined *PTR__guard_check_icall_0128fdec;
undefined4 UNK_0128fdb4;
undefined4 UNK_0128fdb8;
undefined4 UNK_0128fdbc;
undefined DAT_00f413cd;
undefined DAT_00f41cf0;
undefined FUN_00969f30;
int DAT_013de264;
undefined DAT_00f42efd;
int UNK_00000052;
undefined DAT_013de288;
undefined FUN_008e8b00;
undefined DAT_00f45790;
undefined DAT_00f45845;
undefined DAT_00f458c4;
undefined DAT_00f458fd;
undefined DAT_00f3e610;
undefined DAT_00f45ba9;
undefined *PTR_LAB_00994bec;
undefined *PTR_LAB_00994cec;
undefined *PTR_LAB_00994dec;
undefined *PTR_LAB_00994eec;
undefined *PTR_LAB_00994fec;
undefined *PTR_LAB_009950ec;
undefined *PTR_LAB_009951ec;
undefined *PTR_LAB_009952ec;
undefined *PTR_LAB_009953ec;
undefined *PTR_LAB_009954ec;
undefined *PTR_LAB_009955ec;
undefined *PTR_LAB_009956ec;
undefined *PTR_LAB_009957ec;
undefined *PTR_LAB_009958ec;
undefined *PTR_LAB_009959ec;
undefined *PTR_LAB_00995aec;
undefined *PTR_LAB_00995bec;
undefined *PTR_LAB_00995cec;
undefined *PTR_LAB_00995dec;
undefined *PTR_LAB_00995eec;
undefined *PTR_LAB_00995fec;
undefined *PTR_LAB_009960ec;
undefined *PTR_LAB_009961ec;
undefined *PTR_LAB_009962ec;
undefined *PTR_LAB_009963ec;
undefined *PTR_LAB_009964ec;
undefined *PTR_LAB_009965ec;
undefined *PTR_LAB_009966ec;
undefined *PTR_LAB_009967ec;
undefined *PTR_LAB_009968ec;
undefined *PTR_LAB_009969ec;
undefined *PTR_LAB_00996aec;
undefined *PTR_LAB_00996bec;
undefined *PTR_LAB_00996cec;
undefined *PTR_LAB_00996dec;
undefined *PTR_LAB_00996eec;
undefined *PTR_LAB_00996fec;
undefined *PTR_LAB_009970ec;
undefined *PTR_LAB_009971ec;
undefined *PTR_LAB_009972ec;
undefined *PTR_LAB_009973ec;
undefined *PTR_LAB_009974ec;
undefined *PTR_LAB_009975ec;
undefined *PTR_LAB_009976ec;

void __fastcall FUN_0044c912(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  uint *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_2 + -0x10 + param_1 * 8);
  uVar2 = *(uint *)(iVar1 + 0x18);
  puVar6 = (uint *)(unaff_ESI + 4);
  iVar3 = *(int *)(iVar1 + 8);
  for (uVar5 = *(uint *)(param_2 + -8 + param_1 * 8); uVar5 < uVar2; uVar5 = uVar5 + 1) {
    if (*(int *)(iVar3 + 4 + uVar5 * 8) != -1) {
      *(undefined4 *)(param_2 + 0xc + param_1 * 8) = *(undefined4 *)(iVar3 + 4 + uVar5 * 8);
      *(undefined4 *)(param_2 + 8 + param_1 * 8) = *(undefined4 *)(iVar3 + uVar5 * 8);
      *(double *)(param_2 + param_1 * 8) = (double)(int)uVar5;
      *(uint *)(param_2 + -8 + param_1 * 8) = uVar5 + 1;
      goto LAB_0044c955;
    }
  }
  uVar5 = uVar5 - uVar2;
  while( true ) {
    if (*(uint *)(iVar1 + 0x1c) < uVar5) goto LAB_0044c960;
    puVar7 = (undefined4 *)(uVar5 * 0x18 + *(int *)(iVar1 + 0x14));
    if (puVar7[1] != -1) break;
    uVar5 = uVar5 + 1;
  }
  uVar4 = puVar7[3];
  *(undefined4 *)(param_2 + param_1 * 8) = puVar7[2];
  *(undefined4 *)(param_2 + 4 + param_1 * 8) = uVar4;
  uVar4 = puVar7[1];
  *(undefined4 *)(param_2 + 8 + param_1 * 8) = *puVar7;
  *(undefined4 *)(param_2 + 0xc + param_1 * 8) = uVar4;
  *(uint *)(param_2 + -8 + param_1 * 8) = uVar5 + 1 + uVar2;
LAB_0044c955:
  puVar6 = (uint *)(unaff_ESI + -0x1fffc + (uint)*(ushort *)(unaff_ESI + 2) * 4);
LAB_0044c960:
                    // WARNING: Could not recover jumptable at 0x0044c976. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (*puVar6 & 0xff) * 4))();
  return;
}



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used

undefined4 __fastcall FUN_0044d0bd(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  
  *unaff_FS_OFFSET = param_1 + 0x24;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 8) + 0x78) = 0xfffffffe;
  *unaff_FS_OFFSET = *(int *)(param_1 + 0x24);
  return param_2;
}



// WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used

undefined8 __fastcall FUN_0044d0dc(uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 *unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined8 uVar19;
  
  piVar8 = (int *)(param_1 & 0xfffffffc);
  *unaff_FS_OFFSET = (int)(piVar8 + 9);
  iVar9 = -8;
  uVar11 = *(uint *)(piVar8[0x10] + 0x10);
  iVar18 = *(int *)(piVar8[0x10] + 8);
  iVar12 = iVar18 + 0xba0;
  puVar16 = *(uint **)(uVar11 - 4);
  *(undefined4 *)(uVar11 - 4) = 0xfffffffe;
  *(undefined4 *)(iVar18 + 0x78) = 0xffffffff;
  iVar5 = 2;
LAB_0044d002:
  iVar4 = iVar5 + 1;
  if (iVar4 == 0) {
    uVar6 = 1;
    *(undefined4 *)(*(int *)(piVar8[0x10] + 8) + 0x78) = 0xfffffffe;
LAB_0044d073:
    *unaff_FS_OFFSET = piVar8[9];
    return CONCAT44(uVar11,uVar6);
  }
  piVar8[5] = iVar4;
  if (((uint)puVar16 & 3) == 0) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)(uVar11 - 8) = *(undefined4 *)(uVar11 + iVar9);
      *(undefined4 *)(uVar11 - 4) = *(undefined4 *)(uVar11 + 4 + iVar9);
      uVar11 = uVar11 + 8;
    }
    bVar2 = *(byte *)((int)puVar16 + -1);
    for (uVar17 = piVar8[5]; uVar17 < bVar2; uVar17 = uVar17 + 1) {
      *(undefined4 *)(uVar11 - 4) = 0xffffffff;
      uVar11 = uVar11 + 8;
    }
                    // WARNING: Could not recover jumptable at 0x0044cb46. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar19 = (**(code **)(iVar12 + (*puVar16 & 0xff) * 4))();
    return uVar19;
  }
  uVar17 = (uint)puVar16 ^ 1;
  if ((uVar17 & 3) != 0) {
    if ((uVar17 & 4) == 0) {
      iVar5 = uVar11 - (uVar17 & 0xfffffff8);
      *(undefined4 *)(iVar9 + uVar11 + -4 + iVar4 * 8) = 0xffffffff;
      uVar17 = *(uint *)(uVar11 - 0xc);
      UNRECOVERED_JUMPTABLE = *(code **)(uVar11 - 0x10);
      if ((code *)0x1 < UNRECOVERED_JUMPTABLE) {
                    // WARNING: Could not recover jumptable at 0x0044d34a. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar19 = (*UNRECOVERED_JUMPTABLE)();
        return uVar19;
      }
      if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
        iVar9 = (uVar11 - iVar5 >> 3) - 1;
        if ((uVar17 & 3) == 0) {
          iVar18 = ~(uint)*(byte *)(uVar17 - 3) * 8;
        }
        else {
          iVar18 = -(uVar17 & 0xfffffff8);
        }
        if (*(int *)(iVar5 + -4) == -9) {
          *(uint *)(iVar5 + -4) = uVar17;
                    // WARNING: Could not recover jumptable at 0x0044d2a6. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar19 = (**(code **)(iVar12 + (**(uint **)(*(int *)(iVar5 + -8) + 0x10) & 0xff) * 4))();
          return uVar19;
        }
        piVar8[5] = iVar5;
        piVar8[4] = iVar9;
        iVar4 = piVar8[0x10];
        piVar8[1] = iVar5 + -8;
        piVar8[2] = iVar5 + -8 + iVar9 * 8;
        *piVar8 = iVar4;
        *(int *)(iVar4 + 0x10) = iVar5 + iVar18;
        piVar8[6] = uVar17;
        piVar14 = piVar8 + -1;
        piVar8[-1] = 0x44d6b0;
        func_0x00d70710();
        puVar10 = *(undefined4 **)(iVar4 + 0x10);
        puVar7 = *(undefined4 **)((int)piVar14 + 0x14);
        iVar9 = *(int *)((int)piVar14 + 0x10);
        iVar18 = puVar7[-2];
        if (unaff_EDI != puVar10) {
          puVar7[-1] = uVar17;
                    // WARNING: Could not recover jumptable at 0x0044d6dc. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar19 = (**(code **)(iVar12 + (**(uint **)(iVar18 + 0x10) & 0xff) * 4))();
          return uVar19;
        }
        if (((puVar10[-1] & 3) != 0) && (uVar11 = puVar10[-1] - 3, (uVar11 & 7) == 0)) {
          puVar10 = (undefined4 *)((int)puVar10 - uVar11);
          unaff_EDI = puVar10;
        }
        puVar10[-2] = iVar18;
        *(int *)((int)piVar14 + 0x14) = iVar9 + 1;
        if (iVar9 != 0) {
          do {
            *unaff_EDI = *puVar7;
            puVar1 = puVar7 + 1;
            puVar7 = puVar7 + 2;
            unaff_EDI[1] = *puVar1;
            unaff_EDI = unaff_EDI + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          iVar18 = puVar10[-2];
        }
                    // WARNING: Could not recover jumptable at 0x0044c87e. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar19 = (**(code **)(iVar12 + (**(uint **)(iVar18 + 0x10) & 0xff) * 4))();
        return uVar19;
      }
      iVar9 = piVar8[0x10];
      iVar18 = *(int *)(iVar18 + 0xfc);
      *(int *)(iVar18 + 0xc) = iVar9;
      *(int *)(iVar9 + 0x10) = iVar5;
      *(uint *)(iVar9 + 0x14) = uVar11;
      piVar15 = piVar8 + -1;
      piVar8[-1] = 0x44ee2e;
      func_0x00da3190();
      uVar19 = *(undefined8 *)(iVar18 + 0x60);
      *(uint *)((int)piVar15 + 0x40) =
           (uint)*(ushort *)(*(int *)(*(int *)((int)piVar15 + 0x40) + 0x14) + 6);
      *unaff_FS_OFFSET = *(int *)((int)piVar15 + 0x24);
      *(undefined4 *)((int)piVar15 + *(int *)((int)piVar15 + 0x40) + 0x4c) =
           *(undefined4 *)((int)piVar15 + 0x3c);
      return uVar19;
    }
    uVar11 = uVar11 - (uVar17 & 0xfffffff8);
    iVar9 = iVar9 + -8 + (uVar17 & 0xfffffff8);
    puVar16 = *(uint **)(uVar11 - 4);
    *(undefined4 *)(uVar11 + 4 + iVar9) = 0xfffffffd;
    iVar5 = iVar4;
    goto LAB_0044d002;
  }
  *(undefined4 *)(iVar18 + 0x78) = 0xfffffffe;
  iVar18 = (uVar17 & 0xfffffff8) - uVar11;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)(uVar11 - 8) = *(undefined4 *)(uVar11 + iVar9);
    *(undefined4 *)(uVar11 - 4) = *(undefined4 *)(uVar11 + 4 + iVar9);
    uVar11 = uVar11 + 8;
  }
  iVar9 = piVar8[0x10];
  *(int *)(iVar9 + 0x10) = -iVar18;
LAB_0044d058:
  uVar17 = piVar8[5];
  uVar3 = piVar8[0x12];
  do {
    if (uVar3 == uVar17) {
LAB_0044d064:
      uVar11 = uVar11 - 8;
      *(uint *)(iVar9 + 0x14) = uVar11;
      *(int *)(iVar9 + 0x28) = piVar8[0x11];
      uVar6 = 0;
      goto LAB_0044d073;
    }
    if (uVar3 < uVar17) {
      if (uVar3 != 0) {
        uVar11 = uVar11 + (uVar3 - uVar17) * 8;
      }
      goto LAB_0044d064;
    }
    if (*(uint *)(iVar9 + 0x18) < uVar11) break;
    *(undefined4 *)(uVar11 - 4) = 0xffffffff;
    uVar11 = uVar11 + 8;
    uVar17 = uVar17 + 1;
  } while( true );
  *(uint *)(iVar9 + 0x14) = uVar11;
  piVar8[5] = uVar17;
  piVar13 = piVar8 + -1;
  piVar8 = piVar8 + -1;
  *piVar13 = 0x44d0b4;
  func_0x00d6bf10();
  uVar11 = *(uint *)(iVar9 + 0x14);
  goto LAB_0044d058;
}



void __fastcall FUN_0044d35f(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *in_EAX;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  uint uVar8;
  uint *unaff_ESI;
  undefined4 *unaff_EDI;
  int iStack00000010;
  int in_stack_00000040;
  
  if ((undefined4 *)(param_2 + (uint)*(byte *)((int)unaff_ESI + -1) * 8) ==
      (undefined4 *)(unaff_EBP + -0x10)) {
    bVar3 = *(byte *)((int)unaff_ESI + -3);
    uVar5 = *in_EAX;
    *(undefined4 *)(param_2 + 4 + (uint)bVar3 * 8) = in_EAX[1];
    *(undefined4 *)(param_2 + (uint)bVar3 * 8) = uVar5;
                    // WARNING: Could not recover jumptable at 0x0044d419. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_EBX + (*unaff_ESI & 0xff) * 4))();
    return;
  }
  uVar5 = *in_EAX;
  *(undefined4 *)(unaff_EBP + -0xc) = in_EAX[1];
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  *(int *)(in_stack_00000040 + 0x10) = param_2;
  puVar6 = (undefined4 *)func_0x00d70760();
  iVar4 = *(int *)(in_stack_00000040 + 0x10);
  if (puVar6 == (undefined4 *)0x0) {
    bVar3 = *(byte *)((int)unaff_ESI + -3);
    uVar5 = *(undefined4 *)(iVar4 + (uint)*(byte *)((int)unaff_ESI + -1) * 8);
    *(undefined4 *)(iVar4 + 4 + (uint)bVar3 * 8) =
         *(undefined4 *)(iVar4 + 4 + (uint)*(byte *)((int)unaff_ESI + -1) * 8);
    *(undefined4 *)(iVar4 + (uint)bVar3 * 8) = uVar5;
                    // WARNING: Could not recover jumptable at 0x0044bfeb. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_EBX + (*unaff_ESI & 0xff) * 4))();
    return;
  }
  puVar6[-3] = unaff_ESI;
  iVar2 = (int)puVar6 + (2 - iVar4);
  if (puVar6[-1] == -9) {
    puVar6[-1] = iVar2;
                    // WARNING: Could not recover jumptable at 0x0044d2a6. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_EBX + (**(uint **)(puVar6[-2] + 0x10) & 0xff) * 4))();
    return;
  }
  iStack00000010 = 3;
  *(int *)(in_stack_00000040 + 0x10) = iVar4;
  func_0x00d70710();
  puVar7 = *(undefined4 **)(in_stack_00000040 + 0x10);
  if (unaff_EDI != puVar7) {
    puVar6[-1] = iVar2;
                    // WARNING: Could not recover jumptable at 0x0044d6dc. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_EBX + (**(uint **)(puVar6[-2] + 0x10) & 0xff) * 4))();
    return;
  }
  if (((puVar7[-1] & 3) != 0) && (uVar8 = puVar7[-1] - 3, (uVar8 & 7) == 0)) {
    puVar7 = (undefined4 *)((int)puVar7 - uVar8);
    unaff_EDI = puVar7;
  }
  puVar7[-2] = puVar6[-2];
  do {
    *unaff_EDI = *puVar6;
    puVar1 = puVar6 + 1;
    puVar6 = puVar6 + 2;
    unaff_EDI[1] = *puVar1;
    unaff_EDI = unaff_EDI + 2;
    iStack00000010 = iStack00000010 + -1;
  } while (iStack00000010 != 0);
                    // WARNING: Could not recover jumptable at 0x0044c87e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (**(uint **)(puVar7[-2] + 0x10) & 0xff) * 4))();
  return;
}



void __fastcall FUN_0044d3fb(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int unaff_EBX;
  uint *unaff_ESI;
  
  bVar1 = *(byte *)((int)unaff_ESI + -3);
  uVar2 = *in_EAX;
  *(undefined4 *)(param_2 + 4 + (uint)bVar1 * 8) = in_EAX[1];
  *(undefined4 *)(param_2 + (uint)bVar1 * 8) = uVar2;
                    // WARNING: Could not recover jumptable at 0x0044d419. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (*unaff_ESI & 0xff) * 4))();
  return;
}



void FUN_0044d4d7(void)

{
  int unaff_EBX;
  uint *unaff_ESI;
  
                    // WARNING: Could not recover jumptable at 0x0044d4e5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (*unaff_ESI & 0xff) * 4))();
  return;
}



void FUN_0044d58f(void)

{
  int in_EAX;
  int unaff_EBX;
  int unaff_ESI;
  uint *puVar1;
  
  puVar1 = (uint *)(unaff_ESI + 4);
  if (*(uint *)(in_EAX + 4) < 0xfffffffe) {
    puVar1 = (uint *)(unaff_ESI + -0x1fffc + (uint)*(ushort *)(unaff_ESI + 2) * 4);
  }
                    // WARNING: Could not recover jumptable at 0x0044d58c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (*puVar1 & 0xff) * 4))();
  return;
}



void FUN_0044d59a(void)

{
  int in_EAX;
  int unaff_EBX;
  uint *puVar1;
  int unaff_ESI;
  
  puVar1 = (uint *)(unaff_ESI + 4);
  if (0xfffffffd < *(uint *)(in_EAX + 4)) {
    puVar1 = (uint *)(unaff_ESI + -0x1fffc + (uint)*(ushort *)(unaff_ESI + 2) * 4);
  }
                    // WARNING: Could not recover jumptable at 0x0044d58c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (*puVar1 & 0xff) * 4))();
  return;
}



void __fastcall FUN_0044e882(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_EBX;
  int unaff_ESI;
  int in_stack_00000040;
  
  bVar1 = *(byte *)(unaff_EBX + -0xb4b);
  if ((bVar1 & 0x20) == 0) {
    if (((bVar1 & 0x10) == 0) && ((bVar1 & 0xc) != 0)) {
      *(int *)(unaff_EBX + -0xac8) = *(int *)(unaff_EBX + -0xac8) + -1;
    }
    *(undefined4 *)(in_stack_00000040 + 0x10) = param_2;
    func_0x00d7f960();
  }
                    // WARNING: Could not recover jumptable at 0x0044e8e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + 0x268 + (uint)*(byte *)(unaff_ESI + -4) * 4))();
  return;
}



void __fastcall FUN_0044e89d(undefined4 param_1,undefined4 param_2)

{
  int unaff_EBX;
  int unaff_ESI;
  int in_stack_00000040;
  
  if ((*(byte *)(unaff_EBX + -0xb4b) & 0x10) == 0) {
    *(undefined4 *)(in_stack_00000040 + 0x10) = param_2;
    func_0x00d7f960();
  }
                    // WARNING: Could not recover jumptable at 0x0044e8e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + 0x268 + (uint)*(byte *)(unaff_ESI + -4) * 4))();
  return;
}



void __fastcall FUN_0044e8aa(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  int unaff_EBX;
  int unaff_ESI;
  int in_stack_00000040;
  
  bVar2 = *(byte *)(unaff_EBX + -0xb4b);
  if (((bVar2 & 0x10) == 0) && ((bVar2 & 0xc) != 0)) {
    piVar1 = (int *)(unaff_EBX + -0xac8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) || ((bVar2 & 4) != 0)) {
      *(undefined4 *)(in_stack_00000040 + 0x10) = param_2;
      func_0x00d7f960();
    }
  }
                    // WARNING: Could not recover jumptable at 0x0044e8e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + 0x268 + (uint)*(byte *)(unaff_ESI + -4) * 4))();
  return;
}



void __fastcall FUN_0044e927(undefined4 param_1,int param_2)

{
  int in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000040;
  
  *(int *)(in_stack_00000040 + 0x10) = param_2;
  *(int *)(in_stack_00000040 + 0x14) = param_2 + -8 + in_EAX * 8;
  UNRECOVERED_JUMPTABLE = (code *)func_0x00d7f7e0();
                    // WARNING: Could not recover jumptable at 0x0044e96c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void __fastcall FUN_0044e96e(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int iStack00000010;
  int in_stack_00000014;
  int in_stack_00000040;
  
  iStack00000010 = *(int *)(unaff_EBP + -0x18);
  puVar4 = (undefined4 *)(param_2 + (uint)*(byte *)((int)unaff_ESI + -3) * 8);
  for (in_stack_00000014 = in_stack_00000014 + -1; in_stack_00000014 != 0;
      in_stack_00000014 = in_stack_00000014 + -1) {
    *puVar4 = *in_EAX;
    puVar4[1] = in_EAX[1];
    in_EAX = in_EAX + 2;
    puVar4 = puVar4 + 2;
  }
  bVar1 = *(byte *)((int)unaff_ESI + -3);
  bVar2 = *(byte *)((int)unaff_ESI + -1);
  for (; puVar4 < (undefined4 *)(param_2 + -8 + ((uint)bVar1 + (uint)bVar2) * 8);
      puVar4 = puVar4 + 2) {
    puVar4[1] = 0xffffffff;
  }
  uVar3 = (uint)*(ushort *)(iStack00000010 + 0x42);
  if (uVar3 != *(ushort *)(iStack00000010 + 0x40)) {
    if (uVar3 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(*(int *)(unaff_EBX + -0x8b0) + uVar3 * 4) + 0x34);
      *(int *)(unaff_EBX + -0xaa8) = param_2;
      *(int *)(unaff_EBX + -0xb14) = in_stack_00000040;
                    // WARNING: Could not recover jumptable at 0x0044ce21. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    *(uint *)(unaff_EBX + -0xc0) = (uint)*(ushort *)(iStack00000010 + 0x40);
    *(int *)(in_stack_00000040 + 0x10) = param_2;
    *(int *)(unaff_EBX + -0x994) = in_stack_00000040;
    func_0x00d7fb60();
  }
                    // WARNING: Could not recover jumptable at 0x0044d4e5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (*unaff_ESI & 0xff) * 4))();
  return;
}



void __fastcall FUN_0044ea04(undefined4 param_1,undefined4 param_2)

{
  int unaff_EBX;
  int unaff_ESI;
  int in_stack_00000040;
  
  *(undefined4 *)(in_stack_00000040 + 0x10) = param_2;
  func_0x00d7fad0();
                    // WARNING: Could not recover jumptable at 0x0044d4e5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + (*(uint *)(unaff_ESI + -4) & 0xff) * 4))();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

float10 FUN_0044ea1f(undefined1 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  float10 fVar7;
  undefined8 uVar8;
  undefined1 unaff_retaddr;
  
  uVar1 = *(undefined4 *)(param_2 + -0xb28);
  *(undefined4 *)(param_2 + -0xb28) = 0xfffffffc;
  *(uint *)(param_2 + -0xc0) = (uint)CONCAT11(unaff_retaddr,param_1);
  *(undefined4 *)(param_2 + -0xc4) = uVar1;
  iVar2 = *(int *)(param_2 + -0xaac);
  *(int *)(param_2 + -0x994) = iVar2;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + -0xaa8);
  *(undefined4 *)(param_2 + -0xaa8) = 0;
  iVar4 = func_0x00d71300();
  uVar5 = *(uint *)(iVar2 + 0x28) & 0xfffffffc;
  *(int *)(uVar5 + 0x40) = iVar2;
  uVar1 = *(undefined4 *)(iVar2 + 0x10);
  puVar3 = *(uint **)(uVar5 + 0x18);
  if (-1 < iVar4) {
    *(int *)(uVar5 + 0x14) = iVar4;
    *(undefined4 *)(*(int *)(uVar5 + 0x40) + 0x10) = uVar1;
    *(undefined4 *)(param_2 + -0xaa8) = 0;
    *(undefined4 *)(param_2 + -0xb28) = 0xffffffff;
                    // WARNING: Could not recover jumptable at 0x0044eb07. Too many branches
                    // WARNING: Treating indirect jump as call
    fVar7 = (float10)(**(code **)(param_2 + (*puVar3 & 0xff) * 4))();
    return fVar7;
  }
  puVar6 = (undefined1 *)(uVar5 - 4);
  *(undefined4 *)(uVar5 - 4) = 0x44eb31;
  func_0x00d67270();
  uVar8 = *(undefined8 *)(puVar6 + 4);
  *(undefined4 *)(puVar6 + -4) = 0x44eb3c;
  FUN_0044eb47();
  *(undefined8 *)(puVar6 + 4) = uVar8;
  return (float10)*(double *)(puVar6 + 4);
}



float10 __fastcall FUN_0044eabf(undefined4 param_1,undefined4 param_2,double param_3)

{
  int in_EAX;
  int unaff_EBX;
  uint *unaff_ESI;
  float10 fVar1;
  int in_stack_00000040;
  
  if (-1 < in_EAX) {
    *(undefined4 *)(in_stack_00000040 + 0x10) = param_2;
    *(undefined4 *)(unaff_EBX + -0xaa8) = 0;
    *(undefined4 *)(unaff_EBX + -0xb28) = 0xffffffff;
                    // WARNING: Could not recover jumptable at 0x0044eb07. Too many branches
                    // WARNING: Treating indirect jump as call
    fVar1 = (float10)(**(code **)(unaff_EBX + (*unaff_ESI & 0xff) * 4))();
    return fVar1;
  }
  func_0x00d67270();
  FUN_0044eb47();
  return (float10)param_3;
}



undefined4 FUN_0044eb47(void)

{
  undefined4 uVar1;
  double in_XMM0_Qa;
  
  uVar1 = 0x43300000;
  if (ABS(in_XMM0_Qa) < 4503599627370496.0) {
    uVar1 = 0x3ff00000;
  }
  return uVar1;
}



undefined4 FUN_0044ebb4(void)

{
  undefined4 uVar1;
  double in_XMM0_Qa;
  
  uVar1 = 0x43300000;
  if (ABS(in_XMM0_Qa) < 4503599627370496.0) {
    uVar1 = 0x3ff00000;
  }
  return uVar1;
}



undefined4 FUN_0044ec25(void)

{
  undefined4 uVar1;
  double in_XMM0_Qa;
  
  uVar1 = 0x43300000;
  if (ABS(in_XMM0_Qa) < 4503599627370496.0) {
    uVar1 = 0x3ff00000;
  }
  return uVar1;
}



void __fastcall FUN_0044ed21(int param_1,uint param_2)

{
  while( true ) {
    if (*(uint *)(param_1 + 0x18) <= param_2) {
      param_2 = param_2 - *(uint *)(param_1 + 0x18);
      while( true ) {
        if (*(uint *)(param_1 + 0x1c) < param_2) {
          return;
        }
        if (*(int *)(param_2 * 0x18 + *(int *)(param_1 + 0x14) + 4) != -1) break;
        param_2 = param_2 + 1;
      }
      return;
    }
    if (*(int *)(*(int *)(param_1 + 8) + 4 + param_2 * 8) != -1) break;
    param_2 = param_2 + 1;
  }
  return;
}



void __fastcall FUN_0044ed88(undefined4 param_1,undefined4 param_2)

{
  uint in_EAX;
  int iVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  
  pcStack_20 = FUN_00d679d0;
  uStack_24 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_24;
  iVar1 = *(int *)(unaff_EBP + 0xfc);
  *(uint *)(iVar1 + 0x94) = in_EAX & 0xffff;
  *(undefined4 *)(iVar1 + 0x60) = param_1;
  *(undefined4 *)(iVar1 + 100) = param_2;
  *(undefined1 **)(iVar1 + 0x80) = &stack0x00000008;
  iVar1 = func_0x00da3110();
  *(undefined4 *)(unaff_EBP + 0x78) = 0xffffffff;
                    // WARNING: Could not recover jumptable at 0x0044ee0f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBP + 0xba0 +
              (**(uint **)(*(int *)(*(int *)(iVar1 + 0x10) + -8) + 0x10) & 0xff) * 4))();
  return;
}



void FUN_0044eec0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70710);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044ef30(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70780);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044f010(void)

{
  func_0x008ab7fd(FUN_00f70870);
  return;
}



void FUN_0044f020(void)

{
  func_0x008ab7fd(FUN_00f70860);
  return;
}



void FUN_0044f030(void)

{
  func_0x008ab7fd(FUN_00f70850);
  return;
}



void FUN_0044f040(void)

{
  func_0x00468870();
  func_0x008ab7fd(FUN_00f707d0);
  return;
}



void FUN_0044f060(void)

{
  func_0x008ab7fd(FUN_00f70880);
  return;
}



void FUN_0044f070(void)

{
  func_0x008ab7fd(FUN_00f70900);
  return;
}



void FUN_0044f080(void)

{
  func_0x008ab7fd(FUN_00f708f0);
  return;
}



void FUN_0044f090(void)

{
  func_0x008ab7fd(FUN_00f708e0);
  return;
}



void FUN_0044f0a0(void)

{
  func_0x008ab7fd(FUN_00f708d0);
  return;
}



void FUN_0044f0b0(void)

{
  func_0x008ab7fd(FUN_00f708c0);
  return;
}



void FUN_0044f0c0(void)

{
  func_0x008ab7fd(FUN_00f708b0);
  return;
}



void FUN_0044f0d0(void)

{
  func_0x008ab7fd(FUN_00f708a0);
  return;
}



void FUN_0044f0e0(void)

{
  func_0x008ab7fd(FUN_00f70890);
  return;
}



void FUN_0044f0f0(void)

{
  func_0x008ab7fd(FUN_00f70910);
  return;
}



void FUN_0044f100(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70920);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f170(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70940);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f1e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70960);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044f2c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f709b0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f330(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f709d0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044f410(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70a20);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f480(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70a40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044f560(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70a90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f5d0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70ab0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044f6b0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70b00);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f720(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70b20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044f800(void)

{
  func_0x004803d0();
  func_0x008ab7fd(FUN_00f70b70);
  return;
}



void FUN_0044f820(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70c60);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f890(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70c80);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044f970(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70cd0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044f9e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70cf0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044fac0(void)

{
  func_0x0048df00();
  func_0x008ab7fd(FUN_00f70d40);
  return;
}



void FUN_0044fae0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70d50);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044fb50(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb39e9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145d15c = 0;
  DAT_0145d160 = 0;
  DAT_0145d164 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f70d70,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044fbc0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70e50);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044fc30(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70e70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044fd10(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb3c1f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145d168 = func_0x008ab47d(0x10,uVar1);
  *(int *)DAT_0145d168 = DAT_0145d168;
  *(int *)(DAT_0145d168 + 4) = DAT_0145d168;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f70ec0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044fd70(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70f20);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044fde0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70f40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0044fec0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f70f90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0044ff30(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f70fb0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450010(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71000);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450080(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71020);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450160(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f710b0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004501d0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f710d0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004502b0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71120);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450320(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450400(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71190);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450470(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f711b0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450550(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71200);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004505c0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71220);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004506a0(void)

{
  func_0x00570710();
  func_0x008ab7fd(FUN_00f71270);
  return;
}



void FUN_004506c0(void)

{
  func_0x008ab7fd(FUN_00f71280);
  return;
}



void FUN_004506d0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f712d0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450740(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f712f0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450820(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71340);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450890(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71360);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450970(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f713b0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004509e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f713d0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00450ac0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec4509;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab84c(&DAT_0145d490,0x20,0x10,FUN_00588c40,FUN_00586d60,uVar1);
  _DAT_0145d69c = 0;
  uRam0145d6a0 = 0;
  uRam0145d6a4 = 0;
  uRam0145d6a8 = 0;
  _DAT_0145d6b4 = 0;
  _DAT_0145d6ac = 0;
  _DAT_0145d694 = 0;
  _DAT_0145d698 = 0;
  _DAT_0145d6b8 = 0xffffffff;
  _DAT_0145d690 = 2;
  DAT_0145d6bc = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f71420);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450bb0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71470);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450c20(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71490);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450d00(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f714e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450d70(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71500);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450e50(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71550);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00450ec0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71570);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00450fa0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f715c0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451010(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f715e0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004510f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec518f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145d740 = func_0x008ab47d(0x10,uVar1);
  *(int *)DAT_0145d740 = DAT_0145d740;
  *(int *)(DAT_0145d740 + 4) = DAT_0145d740;
  *(int *)(DAT_0145d740 + 8) = DAT_0145d740;
  *(undefined2 *)(DAT_0145d740 + 0xc) = 0x101;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f71630);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00451150(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71680);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004511c0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f716a0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004512a0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f716f0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451310(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71710);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004513f0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71760);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451460(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71780);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00451540(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f717d0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004515b0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f717f0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00451690(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec96b3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145d7ec = 0;
  DAT_0145d7f0 = 0;
  DAT_0145d7f4 = 0;
  uStack_8 = 1;
  func_0x005b72b0(uVar1);
  _DAT_0145d7d8 = 0;
  _DAT_0145d7d4 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f71840);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00451720(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71940);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451790(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71960);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00451870(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f719b0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004518e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f719d0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004519c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71a20);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451a30(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71a40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00451b10(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71a90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451b80(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71ab0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00451c60(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecaefd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab84c(&DAT_0145d8a0,0xc,4,FUN_005650e0,FUN_00482c00,uVar1,param_1);
  DAT_0145d8d0 = 0;
  DAT_0145d8d4 = 0;
  DAT_0145d8d8 = 0;
  DAT_0145d8dc = 0;
  DAT_0145d8e0 = 0;
  DAT_0145d8e4 = 0;
  uStack_8 = 2;
  _DAT_0145d8e8 = 0;
  _DAT_0145d8ec = 0;
  _DAT_0145d8e8 = func_0x008ab47d(0x14);
  *(int *)_DAT_0145d8e8 = _DAT_0145d8e8;
  *(int *)(_DAT_0145d8e8 + 4) = _DAT_0145d8e8;
  *(int *)(_DAT_0145d8e8 + 8) = _DAT_0145d8e8;
  *(undefined2 *)(_DAT_0145d8e8 + 0xc) = 0x101;
  DAT_0145d8f0 = 0;
  DAT_0145d8f4 = 0;
  DAT_0145d8f8 = 0;
  DAT_0145d8fc = 0;
  DAT_0145d914 = 0;
  DAT_0145d918 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f71b00);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00451d90(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71b10);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451e00(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71b30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00451ee0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71b80);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00451f50(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecc009;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145d970 = func_0x008ab47d(0x10,uVar6);
  *(int *)DAT_0145d970 = DAT_0145d970;
  *(int *)(DAT_0145d970 + 4) = DAT_0145d970;
  DAT_0145d978 = 0;
  DAT_0145d97c = (int *)0x0;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  puVar7 = (undefined4 *)func_0x004d5d40();
  DAT_0145d978 = *puVar7;
  uVar3 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  piVar2 = DAT_0145d97c;
  uStack_8._0_1_ = 2;
  if (DAT_0145d97c != (int *)0x0) {
    LOCK();
    piVar1 = DAT_0145d97c + 1;
    iVar5 = *piVar1 + -1;
    DAT_0145d97c = (int *)uVar3;
    *piVar1 = iVar5;
    UNLOCK();
    uVar3 = DAT_0145d97c;
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      uVar3 = DAT_0145d97c;
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar4)();
        uVar3 = DAT_0145d97c;
      }
    }
  }
  DAT_0145d97c = (int *)uVar3;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar5 = piStack_1c[1] + -1;
    piStack_1c[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piStack_1c;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      piVar2 = piStack_1c + 2;
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piStack_1c + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f71ba0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004520a0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71c40);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452110(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71c60);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004521f0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71cb0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452260(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
