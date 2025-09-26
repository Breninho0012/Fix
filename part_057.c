
int __cdecl _sprintf_p_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968550  54  _sprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x00e87af6(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _sprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968580  55  _sprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_DstSize,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x008aaf7e(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _sscanf_l(char *_Src,char *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9685b0  56  _sscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(_Src,0xffffffff,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x008ab076(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _sscanf_s_l(char *_Src,char *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x9685e0  57  _sscanf_s_l
  puVar1 = (uint *)func_0x00877a80(_Src,0xffffffff,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x008ab076(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _swprintf(wchar_t *_Dest,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968610  58  _swprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_Dest,0xffffffff,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _swprintf_c(wchar_t *_String,size_t _Count,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968640  59  _swprintf_c
                    // 0x968640  149  swprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_String,_Count,_Format,0,&stack0x00000010);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _swprintf_c_l(wchar_t *_String,size_t _Count,wchar_t *_Format,_locale_t _Plocinfo,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968670  60  _swprintf_c_l
                    // 0x968670  61  _swprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_String,_Count,_Format,_Plocinfo,&stack0x00000014);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _swprintf_p(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9686a0  62  _swprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,0,&stack0x00000010);
  iVar2 = func_0x00e87ad8(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _swprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9686d0  63  _swprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x00e87ad8(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968700  64  _swprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_DstSize,_Format,_Locale,&stack0x00000014);
  iVar2 = func_0x00e87acc(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _swscanf_l(wchar_t *_Src,wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968730  65  _swscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(_Src,0xffffffff,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87ade(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _swscanf_s_l(wchar_t *_Src,wchar_t *_Format,_locale_t _Locale,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968760  66  _swscanf_s_l
  puVar1 = (uint *)func_0x00877a80(_Src,0xffffffff,_Format,_Locale,&stack0x00000010);
  iVar2 = func_0x00e87ade(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl _vfprintf_p(FILE *_File,char *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968790  68  _vfprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,_ArgList);
  iVar2 = func_0x00e87aea(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _vfprintf_p_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9687c0  69  _vfprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87aea(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _vfprintf_s_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9687f0  70  _vfprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87ae4(*puVar1,puVar1[1]);
  return iVar2;
}



void _vfscanf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
                    // 0x968820  71  _vfscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(param_1,param_2,param_3,param_4);
  func_0x00e87af0(*puVar1,puVar1[1]);
  return;
}



void _vfscanf_s_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
                    // 0x968850  72  _vfscanf_s_l
  puVar1 = (uint *)func_0x00877a80(param_1,param_2,param_3,param_4);
  func_0x00e87af0(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl _vfwprintf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968880  73  _vfwprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87ab4(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _vfwprintf_p(FILE *_File,wchar_t *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9688b0  74  _vfwprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,_ArgList);
  iVar2 = func_0x00e87ac0(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _vfwprintf_p_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9688e0  75  _vfwprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87ac0(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl _vfwprintf_s_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968910  76  _vfwprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87aba(*puVar1,puVar1[1]);
  return iVar2;
}



void _vfwscanf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
                    // 0x968940  77  _vfwscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(param_1,param_2,param_3,param_4);
  func_0x00e87ac6(*puVar1,puVar1[1]);
  return;
}



void _vfwscanf_s_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
                    // 0x968970  78  _vfwscanf_s_l
  puVar1 = (uint *)func_0x00877a80(param_1,param_2,param_3,param_4);
  func_0x00e87ac6(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl _vprintf_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x9689a0  79  _vprintf_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,_ArgList);
  iVar3 = func_0x008ab06a(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _vprintf_p(char *_Format,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x9689d0  80  _vprintf_p
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,_ArgList);
  iVar3 = func_0x00e87aea(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _vprintf_p_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x968a00  81  _vprintf_p_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,_ArgList);
  iVar3 = func_0x00e87aea(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _vprintf_s_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x968a30  82  _vprintf_s_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,_ArgList);
  iVar3 = func_0x00e87ae4(*puVar2,puVar2[1]);
  return iVar3;
}



void _vscanf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
                    // 0x968a60  83  _vscanf_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,param_1,param_2,param_3);
  func_0x00e87af0(*puVar2,puVar2[1]);
  return;
}



void _vscanf_s_l(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  
                    // 0x968a90  84  _vscanf_s_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,param_1,param_2,param_3);
  func_0x00e87af0(*puVar2 | 1,puVar2[1]);
  return;
}



int __cdecl _vscprintf(char *_Format,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968ac0  85  _vscprintf
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,_ArgList);
  iVar2 = func_0x008aaf54(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vscprintf_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968af0  86  _vscprintf_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,_ArgList);
  iVar2 = func_0x008aaf54(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vscprintf_p(char *_Format,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968b20  87  _vscprintf_p
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,_ArgList);
  iVar2 = func_0x00e87af6(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vscprintf_p_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968b50  88  _vscprintf_p_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87af6(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vscwprintf(wchar_t *_Format,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968b80  89  _vscwprintf
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,_ArgList);
  iVar2 = func_0x00e87a66(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vscwprintf_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968bb0  90  _vscwprintf_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87a66(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vscwprintf_p(wchar_t *_Format,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968be0  91  _vscwprintf_p
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,0,_ArgList);
  iVar2 = func_0x00e87ad8(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vscwprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x968c10  92  _vscwprintf_p_l
  puVar1 = (uint *)func_0x00462fc0(0,0,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87ad8(*puVar1 | 2,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vsnprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968c40  94  _vsnprintf_c
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,0,_ArgList);
  iVar2 = func_0x008aaf54(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,char *param_3,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968c70  95  _vsnprintf_c_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,param_3,_Locale,_ArgList);
  iVar2 = func_0x008aaf54(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vsnwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,
             va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968ca0  101  _vsnwprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_SizeInWords,_MaxCount,_Format,0,_ArgList);
  iVar2 = func_0x00e87ad2(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale
               ,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968ce0  102  _vsnwprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87ad2(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void _vsnwscanf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
                    // 0x968d20  103  _vsnwscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(param_1,param_2,param_3,param_4,param_5);
  func_0x00e87ade(*puVar1,puVar1[1]);
  return;
}



void _vsnwscanf_s_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  uint *puVar1;
  
                    // 0x968d50  104  _vsnwscanf_s_l
  puVar1 = (uint *)func_0x00877a80(param_1,param_2,param_3,param_4,param_5);
  func_0x00e87ade(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl _vsprintf_p(char *_Dst,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968d80  106  _vsprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_Dst,_MaxCount,_Format,0,_ArgList);
  iVar2 = func_0x00e87af6(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vsprintf_p_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968db0  107  _vsprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87af6(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vswprintf(wchar_t *_Dest,wchar_t *_Format,va_list _Args)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968de0  111  _vswprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_Dest,0xffffffff,_Format,0,_Args);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vswprintf_c(wchar_t *_DstBuf,size_t _SizeInWords,wchar_t *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968e10  112  _vswprintf_c
                    // 0x968e10  171  vswprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_SizeInWords,_Format,0,_ArgList);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vswprintf_c_l(wchar_t *_String,size_t _Count,wchar_t *_Format,_locale_t _Plocinfo,va_list _Ap)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968e40  113  _vswprintf_c_l
                    // 0x968e40  114  _vswprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_String,_Count,_Format,_Plocinfo,_Ap);
  iVar2 = func_0x00e87a66(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vswprintf_p(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968e70  115  _vswprintf_p
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,0,_ArgList);
  iVar2 = func_0x00e87ad8(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vswprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList
              )

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968ea0  116  _vswprintf_p_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87ad8(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x968ed0  117  _vswprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_DstSize,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87acc(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void _vswscanf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
                    // 0x968f00  118  _vswscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(param_1,0xffffffff,param_2,param_3,param_4);
  func_0x00e87ade(*puVar1,puVar1[1]);
  return;
}



void _vswscanf_s_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
                    // 0x968f30  119  _vswscanf_s_l
  puVar1 = (uint *)func_0x00877a80(param_1,0xffffffff,param_2,param_3,param_4);
  func_0x00e87ade(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl _vwprintf_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x968f60  120  _vwprintf_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,_ArgList);
  iVar3 = func_0x00e87ab4(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _vwprintf_p(wchar_t *_Format,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x968f90  121  _vwprintf_p
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,_ArgList);
  iVar3 = func_0x00e87ac0(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _vwprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x968fc0  122  _vwprintf_p_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,_ArgList);
  iVar3 = func_0x00e87ac0(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x968ff0  123  _vwprintf_s_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,_ArgList);
  iVar3 = func_0x00e87aba(*puVar2,puVar2[1]);
  return iVar3;
}



void _vwscanf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
                    // 0x969020  124  _vwscanf_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,param_1,param_2,param_3);
  func_0x00e87ac6(*puVar2,puVar2[1]);
  return;
}



void _vwscanf_s_l(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  
                    // 0x969050  125  _vwscanf_s_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,param_1,param_2,param_3);
  func_0x00e87ac6(*puVar2 | 1,puVar2[1]);
  return;
}



int __cdecl _wprintf_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x969080  126  _wprintf_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87ab4(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _wprintf_p(wchar_t *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x9690b0  127  _wprintf_p
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87ac0(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _wprintf_p_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x9690e0  128  _wprintf_p_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87ac0(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _wprintf_s_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x969110  129  _wprintf_s_l
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87aba(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _wscanf_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x969140  130  _wscanf_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87ac6(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl _wscanf_s_l(wchar_t *_Format,_locale_t _Locale,...)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
                    // 0x969170  131  _wscanf_s_l
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,_Format,_Locale,&stack0x0000000c);
  iVar3 = func_0x00e87ac6(*puVar2 | 1,puVar2[1]);
  return iVar3;
}



int __cdecl fprintf_s(FILE *_File,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969220  133  fprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87ae4(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl fscanf(FILE *_File,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969250  134  fscanf
  puVar1 = (undefined4 *)func_0x00877a80(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87af0(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl fscanf_s(FILE *_File,char *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x969280  135  fscanf_s
  puVar1 = (uint *)func_0x00877a80(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87af0(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl fwprintf(FILE *_File,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9692b0  136  fwprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87ab4(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl fwprintf_s(FILE *_File,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x9692e0  137  fwprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87aba(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl fwscanf(FILE *_File,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969310  138  fwscanf
  puVar1 = (undefined4 *)func_0x00877a80(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87ac6(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl fwscanf_s(FILE *_File,wchar_t *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x969340  139  fwscanf_s
  puVar1 = (uint *)func_0x00877a80(_File,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87ac6(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



undefined4 FUN_00d69bd0(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  FILE *pFVar4;
  
  puVar1 = (undefined *)func_0x00d66f10(param_1,0xffffffff,0);
  uVar2 = func_0x00e8798f(2);
  func_0x00e87aae("PANIC: unprotected error in call to Lua API (",uVar2);
  uVar2 = func_0x00e8798f(2);
  puVar3 = &DAT_01005bd0;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
  }
  func_0x00e87aae(puVar3,uVar2);
  pFVar4 = (FILE *)func_0x00e8798f(2);
  fputc(0x29,pFVar4);
  pFVar4 = (FILE *)func_0x00e8798f(2);
  fputc(10,pFVar4);
  pFVar4 = (FILE *)func_0x00e8798f(2);
  fflush(pFVar4);
  return 0;
}



int __cdecl printf_s(char *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x969c40  141  printf_s
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87ae4(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl scanf(char *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x969c70  142  scanf
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87af0(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl scanf_s(char *_Format,...)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
                    // 0x969ca0  143  scanf_s
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87af0(*puVar2 | 1,puVar2[1]);
  return iVar3;
}



int __cdecl swprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969cd0  150  swprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_Dst,_SizeInWords,_Format,0,&stack0x00000010);
  iVar2 = func_0x00e87acc(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl swscanf(wchar_t *_Src,wchar_t *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969d00  151  swscanf
  puVar1 = (undefined4 *)func_0x00877a80(_Src,0xffffffff,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87ade(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl swscanf_s(wchar_t *_Src,wchar_t *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x969d30  152  swscanf_s
  puVar1 = (uint *)func_0x00877a80(_Src,0xffffffff,_Format,0,&stack0x0000000c);
  iVar2 = func_0x00e87ade(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



int __cdecl vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969d60  153  vfprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,_ArgList);
  iVar2 = func_0x008ab06a(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl vfprintf_s(FILE *_File,char *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969d90  154  vfprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,_ArgList);
  iVar2 = func_0x00e87ae4(*puVar1,puVar1[1]);
  return iVar2;
}



void vfscanf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
                    // 0x969dc0  155  vfscanf
  puVar1 = (undefined4 *)func_0x00877a80(param_1,param_2,0,param_3);
  func_0x00e87af0(*puVar1,puVar1[1]);
  return;
}



void vfscanf_s(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  
                    // 0x969df0  156  vfscanf_s
  puVar1 = (uint *)func_0x00877a80(param_1,param_2,0,param_3);
  func_0x00e87af0(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl vfwprintf(FILE *_File,wchar_t *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969e20  157  vfwprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,_ArgList);
  iVar2 = func_0x00e87ab4(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl vfwprintf_s(FILE *_File,wchar_t *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969e50  158  vfwprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,_ArgList);
  iVar2 = func_0x00e87aba(*puVar1,puVar1[1]);
  return iVar2;
}



void vfwscanf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
                    // 0x969e80  159  vfwscanf
  puVar1 = (undefined4 *)func_0x00877a80(param_1,param_2,0,param_3);
  func_0x00e87ac6(*puVar1,puVar1[1]);
  return;
}



void vfwscanf_s(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  
                    // 0x969eb0  160  vfwscanf_s
  puVar1 = (uint *)func_0x00877a80(param_1,param_2,0,param_3);
  func_0x00e87ac6(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl vprintf(char *_Format,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x969ee0  161  vprintf
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,_ArgList);
  iVar3 = func_0x008ab06a(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl vprintf_s(char *_Format,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x969f10  162  vprintf_s
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,_ArgList);
  iVar3 = func_0x00e87ae4(*puVar2,puVar2[1]);
  return iVar3;
}



void vscanf(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
                    // 0x969f40  163  vscanf
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,param_1,0,param_2);
  func_0x00e87af0(*puVar2,puVar2[1]);
  return;
}



void vscanf_s(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
                    // 0x969f70  164  vscanf_s
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,param_1,0,param_2);
  func_0x00e87af0(*puVar2 | 1,puVar2[1]);
  return;
}



int __cdecl
vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x969fa0  166  vsnprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_DstSize,_MaxCount,_Format,0,_ArgList);
  iVar2 = func_0x008ab070(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x969fe0  167  vsprintf
  puVar1 = (uint *)func_0x00462fc0(_Dest,0xffffffff,_Format,0,_Args);
  iVar2 = func_0x008aaf54(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void vsscanf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
                    // 0x96a010  169  vsscanf
  puVar1 = (undefined4 *)func_0x00877a80(param_1,0xffffffff,param_2,0,param_3);
  func_0x008ab076(*puVar1,puVar1[1]);
  return;
}



int __cdecl vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x96a040  172  vswprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_Dst,_SizeInWords,_Format,0,_ArgList);
  iVar2 = func_0x00e87acc(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void vswscanf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
                    // 0x96a070  173  vswscanf
  puVar1 = (undefined4 *)func_0x00877a80(param_1,0xffffffff,param_2,0,param_3);
  func_0x00e87ade(*puVar1,puVar1[1]);
  return;
}



void vswscanf_s(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  
                    // 0x96a0a0  174  vswscanf_s
  puVar1 = (uint *)func_0x00877a80(param_1,0xffffffff,param_2,0,param_3);
  func_0x00e87ade(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl vwprintf(wchar_t *_Format,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x96a0d0  175  vwprintf
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,_ArgList);
  iVar3 = func_0x00e87ab4(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl vwprintf_s(wchar_t *_Format,va_list _ArgList)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x96a100  176  vwprintf_s
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,_ArgList);
  iVar3 = func_0x00e87aba(*puVar2,puVar2[1]);
  return iVar3;
}



void vwscanf(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
                    // 0x96a130  177  vwscanf
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,param_1,0,param_2);
  func_0x00e87ac6(*puVar2,puVar2[1]);
  return;
}



void vwscanf_s(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
                    // 0x96a160  178  vwscanf_s
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,param_1,0,param_2);
  func_0x00e87ac6(*puVar2 | 1,puVar2[1]);
  return;
}



int __cdecl wprintf(wchar_t *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x96a190  179  wprintf
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87ab4(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl wprintf_s(wchar_t *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x96a1c0  180  wprintf_s
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87aba(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl wscanf(wchar_t *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x96a1f0  181  wscanf
  uVar1 = func_0x00e8798f(0);
  puVar2 = (undefined4 *)func_0x00877a80(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87ac6(*puVar2,puVar2[1]);
  return iVar3;
}



int __cdecl wscanf_s(wchar_t *_Format,...)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
                    // 0x96a220  182  wscanf_s
  uVar1 = func_0x00e8798f(0);
  puVar2 = (uint *)func_0x00877a80(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x00e87ac6(*puVar2 | 1,puVar2[1]);
  return iVar3;
}



undefined4 FUN_00d6b760(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c) = 0xffffffff;
  iVar3 = func_0x00d77070(param_1,param_3);
  if (*(int *)(param_3 + 0x54) != 0) {
    uVar5 = 0x74;
    if (iVar3 != 0) {
      uVar5 = 0x62;
    }
    iVar4 = func_0x008ab0c6(*(int *)(param_3 + 0x54),uVar5);
    if (iVar4 == 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x14);
      *(undefined4 **)(param_1 + 0x14) = puVar1 + 2;
      uVar5 = func_0x00d679a0(param_1,0x884);
      *puVar1 = uVar5;
      puVar1[1] = 0xfffffffb;
      func_0x00d67230();
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  if (iVar3 == 0) {
    uVar5 = func_0x00d7bd40(param_3);
  }
  else {
    uVar5 = func_0x00d782d0();
  }
  uVar5 = func_0x00d70140(param_1,uVar5,*(undefined4 *)(param_1 + 0x24));
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = puVar1 + 2;
  *puVar1 = uVar5;
  puVar1[1] = 0xfffffff7;
  return 0;
}



uint FUN_00d6be00(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = func_0x00e87a40(*param_2);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = func_0x008aafd2(param_2 + 1,1,0x200,*param_2);
  *param_3 = iVar1;
  return -(uint)(iVar1 != 0) & (uint)(param_2 + 1);
}



undefined4 FUN_00d6be40(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  if (param_2[1] == 0) {
    return 0;
  }
  *param_3 = param_2[1];
  param_2[1] = 0;
  return *param_2;
}



void __fastcall FUN_00d6be60(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == param_1[0x3d]) {
    param_1[0x3d] = 0;
  }
  func_0x00d6ffe0();
  iVar1 = *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  param_1[2] = param_1[2] + iVar1 * -8;
  (*(code *)*param_1)(param_1[1],uVar2,iVar1 * 8,0);
  param_1[2] = param_1[2] + -0x30;
  (*(code *)*param_1)(param_1[1],param_2,0x30,0);
  return;
}



undefined4 FUN_00d6c020(undefined4 param_1)

{
  func_0x00d6dbc0(param_1);
  func_0x00d6dc60(param_1);
  return 0;
}



undefined4 FUN_00d6c040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  func_0x00d6c530(param_1,param_1);
  uVar2 = func_0x00d6f2a0(param_1,0,6);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = func_0x00d6f2a0(param_1,0,2);
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar3 + 0xb8) = uVar2;
  *(undefined4 *)(iVar3 + 0xbc) = 0xfffffff4;
  func_0x00d6e460();
  func_0x00d70cf0(param_1);
  func_0x00d76fb0(param_1);
  iVar3 = func_0x00d679a0(param_1,0);
  *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | 0x20;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 8) << 2;
  func_0x00d71ae0(iVar1);
  return 0;
}



void __fastcall FUN_00d6c6a0(int param_1,undefined4 *param_2)

{
  if ((*(char *)(param_1 + 0x11) != '\x01') && (*(char *)(param_1 + 0x11) != '\x02')) {
    *(byte *)(param_2 + -1) = *(byte *)(param_1 + 0x10) & 3 | *(byte *)(param_2 + -1) & 0xf8;
    return;
  }
  func_0x00d6cef0(param_1,*param_2);
  return;
}



undefined4 __fastcall FUN_00d6c9c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  iVar3 = *(int *)(*(int *)(iVar2 + 8) + 0xf8);
  *(int *)(iVar2 + 0x10) = iVar3;
  *(uint *)(iVar2 + 0x14) =
       iVar3 + (uint)*(byte *)(*(int *)(*(int *)(iVar3 + -8) + 0x10) + -0x39) * 8;
  do {
    if (param_2 == 0) {
LAB_00d6ca7e:
      cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
      if ((cVar1 != '\x02') && (cVar1 != '\x05')) {
        return 0;
      }
      return 1;
    }
    iVar3 = *(int *)(iVar2 + 8);
    uVar4 = *(undefined4 *)(iVar3 + 0x78);
    *(undefined4 *)(iVar3 + 0x78) = 0xfffffffd;
    iVar6 = *(int *)(iVar3 + 0x38) * 10;
    if (iVar6 == 0) {
      iVar6 = 0x7fffff00;
    }
    if (*(uint *)(iVar3 + 0xc) < *(uint *)(iVar3 + 8)) {
      *(int *)(iVar3 + 0x30) =
           *(int *)(iVar3 + 0x30) + (*(uint *)(iVar3 + 8) - *(uint *)(iVar3 + 0xc));
    }
    do {
      iVar5 = func_0x00d6d110(iVar2);
      iVar6 = iVar6 - iVar5;
      if (*(char *)(iVar3 + 0x11) == '\0') {
        *(uint *)(iVar3 + 0xc) = (*(uint *)(iVar3 + 0x34) / 100) * *(int *)(iVar3 + 0x3c);
        goto LAB_00d6ca77;
      }
    } while (0 < iVar6);
    if (*(uint *)(iVar3 + 0x30) < 0x400) {
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 8) + 0x400;
LAB_00d6ca77:
      *(undefined4 *)(iVar3 + 0x78) = uVar4;
      goto LAB_00d6ca7e;
    }
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 8);
    *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) - 0x400;
    *(undefined4 *)(iVar3 + 0x78) = uVar4;
    param_2 = param_2 + -1;
  } while( true );
}



undefined4 * __fastcall FUN_00d6caa0(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar2 = (undefined4 *)(*(code *)*puVar3)(puVar3[1],0,0,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3[2] = puVar3[2] + param_2;
    *puVar2 = puVar3[6];
    puVar3[6] = puVar2;
    *(byte *)(puVar2 + 1) = *(byte *)(puVar3 + 4) & 3;
    return puVar2;
  }
  func_0x00d67830(param_1);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}



int __fastcall FUN_00d6e3c0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar8 = uVar1;
  if (uVar2 <= uVar1) {
    uVar8 = uVar2;
  }
  uVar5 = 0;
  if (uVar8 != 0) {
    puVar3 = (uint *)(param_2 + 0x14);
    do {
      uVar6 = *(uint *)((param_1 - param_2) + (int)puVar3);
      uVar7 = *puVar3;
      if (uVar6 != uVar7) {
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        if (-4 < (int)(uVar5 - uVar8)) {
          bVar4 = (char)(uVar5 - uVar8) * '\b' + 0x20;
          uVar6 = uVar6 >> (bVar4 & 0x1f);
          uVar7 = uVar7 >> (bVar4 & 0x1f);
          if (uVar6 == uVar7) break;
        }
        return (-(uint)(uVar6 < uVar7) & 0xfffffffe) + 1;
      }
      uVar5 = uVar5 + 4;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar8);
  }
  return uVar2 - uVar1;
}



void __fastcall FUN_00d6e430(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x18] = param_1[0x18] + -1;
  iVar1 = (*(int *)(param_2 + 0x10) + 4U & 0xfffffffc) + 0x14;
  param_1[2] = param_1[2] - iVar1;
  (*(code *)*param_1)(param_1[1],param_2,iVar1,0);
  return;
}



int * FUN_00d6e5a0(int *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  
  if (param_4 <= param_3) {
    if (param_4 == 0) {
      return param_1;
    }
    uVar2 = *param_2;
    pcVar8 = (char *)(param_3 - (param_4 - 1));
    while ((pcVar8 != (char *)0x0 &&
           (piVar5 = (int *)func_0x00e87d3a(param_1,uVar2,pcVar8), piVar5 != (int *)0x0))) {
      piVar1 = (int *)((int)piVar5 + 1);
      piVar9 = (int *)(param_2 + 1);
      piVar7 = piVar1;
      uVar4 = param_4 - 5;
      uVar6 = param_4 - 1;
      while (uVar3 = uVar4, 3 < uVar6) {
        if (*piVar7 != *piVar9) goto LAB_00d6e617;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
        uVar4 = uVar3 - 4;
        uVar6 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
        return piVar5;
      }
LAB_00d6e617:
      if ((char)*piVar7 == (char)*piVar9) {
        if (uVar3 == 0xfffffffd) {
          return piVar5;
        }
        if (*(char *)((int)piVar7 + 1) == *(char *)((int)piVar9 + 1)) {
          if (uVar3 == 0xfffffffe) {
            return piVar5;
          }
          if (*(char *)((int)piVar7 + 2) == *(char *)((int)piVar9 + 2)) {
            if (uVar3 == 0xffffffff) {
              return piVar5;
            }
            if (*(char *)((int)piVar7 + 3) == *(char *)((int)piVar9 + 3)) {
              return piVar5;
            }
          }
        }
      }
      pcVar8 = (char *)((int)param_1 + ((int)pcVar8 - (int)piVar1));
      param_1 = piVar1;
    }
  }
  return (int *)0x0;
}



uint * FUN_00d6e6c0(int param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 extraout_var;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  iVar3 = *(int *)(param_1 + 8);
  if (0x7ffffefe < param_3 - 1) {
    if (param_3 == 0) {
      return (uint *)(iVar3 + 0x40);
    }
    func_0x00d67890(param_1,0x38);
    pcVar4 = (code *)swi(3);
    puVar9 = (uint *)(*pcVar4)();
    return puVar9;
  }
  uVar5 = func_0x00d6e520(*(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar3 + 0x74),param_2,
                          param_3);
  uVar10 = *(uint *)(iVar3 + 0x5c);
  uVar11 = 0;
  puVar9 = *(uint **)(*(int *)(iVar3 + 0x58) + (uVar10 & uVar5) * 4);
  bVar13 = ((uint)puVar9 & 1) != 0;
  if (bVar13) {
    uVar5 = func_0x00d6e490(*(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar3 + 0x74),uVar5,
                            param_2,param_3);
    puVar9 = (uint *)(*(uint *)(*(int *)(iVar3 + 0x58) + (uVar10 & uVar5) * 4) & 0xfffffffe);
  }
  if (puVar9 != (uint *)0x0) {
    do {
      if ((puVar9[3] == uVar5) && (puVar9[4] == param_3)) {
        puVar6 = puVar9 + 5;
        uVar10 = param_3 - 4;
        puVar8 = param_2;
        if (3 < param_3) {
          do {
            if (*puVar8 != *puVar6) goto LAB_00d6e77e;
            puVar8 = puVar8 + 1;
            puVar6 = puVar6 + 1;
            bVar12 = 3 < uVar10;
            uVar10 = uVar10 - 4;
          } while (bVar12);
        }
        if (uVar10 == 0xfffffffc) {
LAB_00d6e7dc:
          if ((~*(byte *)(iVar3 + 0x10) & (byte)puVar9[1] & 3) != 0) {
            *(byte *)(puVar9 + 1) = (byte)puVar9[1] ^ 3;
          }
          return puVar9;
        }
LAB_00d6e77e:
        if (((char)*puVar8 == (char)*puVar6) &&
           ((uVar10 == 0xfffffffd ||
            ((*(char *)((int)puVar8 + 1) == *(char *)((int)puVar6 + 1) &&
             ((uVar10 == 0xfffffffe ||
              ((*(char *)((int)puVar8 + 2) == *(char *)((int)puVar6 + 2) &&
               ((uVar10 == 0xffffffff || (*(char *)((int)puVar8 + 3) == *(char *)((int)puVar6 + 3)))
               )))))))))) goto LAB_00d6e7dc;
        uVar11 = uVar11 + 1;
      }
      puVar9 = (uint *)*puVar9;
      uVar11 = uVar11 + 1;
    } while (puVar9 != (uint *)0x0);
    if ((0x20 < uVar11) && (!bVar13)) {
      puVar9 = (uint *)func_0x00d6e8f0(param_1,uVar5,param_2,param_3);
      return puVar9;
    }
  }
  puVar9 = (uint *)func_0x00d6e130(param_1,0,0,(param_3 + 4 & 0xfffffffc) + 0x14);
  iVar3 = *(int *)(param_1 + 8);
  bVar1 = *(byte *)(iVar3 + 0x10);
  puVar9[3] = uVar5;
  *(byte *)(puVar9 + 1) = bVar1 & 3;
  *(undefined1 *)((int)puVar9 + 5) = 4;
  puVar9[4] = param_3;
  cVar2 = *(char *)(iVar3 + 0x68);
  *(char *)(iVar3 + 0x68) = cVar2 + -1;
  if (cVar2 == '\0') {
    uVar7 = func_0x00d804e0();
    *(undefined4 *)(iVar3 + 100) = uVar7;
    *(undefined1 *)(iVar3 + 0x68) = extraout_var;
  }
  puVar9[2] = *(uint *)(iVar3 + 100);
  *(int *)(iVar3 + 100) = *(int *)(iVar3 + 100) + 1;
  *(bool *)((int)puVar9 + 7) = bVar13;
  *(undefined1 *)((int)puVar9 + 6) = 0;
  *(undefined4 *)((param_3 & 0xfffffffc) + 0x14 + (int)puVar9) = 0;
  memcpy(puVar9 + 5,param_2,param_3);
  uVar5 = uVar5 & *(uint *)(iVar3 + 0x5c);
  uVar10 = *(uint *)(*(int *)(iVar3 + 0x58) + uVar5 * 4);
  *puVar9 = uVar10 & 0xfffffffe;
  *(uint *)(*(int *)(iVar3 + 0x58) + uVar5 * 4) = uVar10 & 1 | (uint)puVar9;
  uVar10 = *(uint *)(iVar3 + 0x60);
  *(uint *)(iVar3 + 0x60) = uVar10 + 1;
  if (*(uint *)(iVar3 + 0x5c) < uVar10) {
    func_0x00d6e9f0(param_1,*(uint *)(iVar3 + 0x5c) * 2 + 1);
  }
  return puVar9;
}



void __fastcall FUN_00d6ecb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(*(int *)(param_1 + 0x14) + 0x14) =
         *(int *)(param_1 + 0x14) + (*(int *)(param_1 + 0x1c) * 3 + 3) * 8;
    iVar2 = *(int *)(param_1 + 0x1c) + 1;
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0xc);
    do {
      puVar1[1] = 0;
      *puVar1 = 0xffffffff;
      puVar1[-2] = 0xffffffff;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 6;
    } while (iVar2 != 0);
  }
  return;
}



int __fastcall FUN_00d6ed10(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_2 + 0x1c);
  if (uVar8 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = iVar2 + 1;
  }
  iVar2 = func_0x00d6fb10(param_1,*(undefined4 *)(param_2 + 0x18),iVar2);
  *(undefined1 *)(iVar2 + 6) = 0;
  uVar8 = *(uint *)(param_2 + 0x18);
  if (uVar8 != 0) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
    if (uVar8 < 0x40) {
      iVar6 = (int)*(void **)(param_2 + 8) - (int)puVar3;
      do {
        uVar1 = *(undefined4 *)(iVar6 + -4 + (int)(puVar3 + 2));
        *puVar3 = *(undefined4 *)(iVar6 + (int)puVar3);
        puVar3[1] = uVar1;
        uVar8 = uVar8 - 1;
        puVar3 = puVar3 + 2;
      } while (uVar8 != 0);
    }
    else {
      memcpy(puVar3,*(void **)(param_2 + 8),uVar8 * 8);
    }
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    return iVar2;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  puVar3 = *(undefined4 **)(iVar2 + 0x14);
  iVar5 = (int)puVar3 - iVar4;
  iVar6 = *(int *)(param_2 + 0x1c) + 1;
  puVar3[5] = *(int *)(iVar4 + 0x14) + iVar5;
  puVar7 = (undefined4 *)(iVar4 + 8);
  do {
    iVar4 = puVar7[2];
    uVar1 = puVar7[-1];
    *puVar3 = puVar7[-2];
    puVar3[1] = uVar1;
    uVar1 = puVar7[1];
    *(undefined4 *)((int)puVar7 + iVar5) = *puVar7;
    if (iVar4 != 0) {
      iVar4 = iVar5 + iVar4;
    }
    *(undefined4 *)((int)puVar7 + iVar5 + 4) = uVar1;
    puVar3[4] = iVar4;
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + 6;
    puVar3 = puVar3 + 6;
  } while (iVar6 != 0);
  return iVar2;
}



void __fastcall FUN_00d6edf0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    iVar2 = *(int *)(param_2 + 0x1c) + 1;
    param_1[2] = param_1[2] + iVar2 * -0x18;
    (*(code *)*param_1)(param_1[1],uVar1,iVar2 * 0x18,0);
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (*(char *)(param_2 + 7) < '\x01')) {
    uVar1 = *(undefined4 *)(param_2 + 8);
    param_1[2] = param_1[2] + iVar2 * -8;
    (*(code *)*param_1)(param_1[1],uVar1,iVar2 * 8,0);
  }
  if (*(char *)(param_2 + 7) != '\0') {
    iVar2 = ((int)*(char *)(param_2 + 7) & 0x7fU) * 8 + 0x20;
    param_1[2] = param_1[2] - iVar2;
    (*(code *)*param_1)(param_1[1],param_2,iVar2,0);
    return;
  }
  param_1[2] = param_1[2] + -0x20;
  (*(code *)*param_1)(param_1[1],param_2,0x20,0);
  return;
}



int __fastcall FUN_00d6ef10(int param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)((int)param_2 + 4) < 0xfffffff2) {
    uVar3 = (uint)*param_2;
    if ((uVar3 < *(uint *)(param_1 + 0x18)) && (*param_2 == (double)(int)uVar3)) {
      return uVar3 + 1;
    }
  }
  else if (*(uint *)((int)param_2 + 4) == 0xffffffff) {
    return 0;
  }
  iVar1 = func_0x00d6f120(param_1,param_2);
  do {
    iVar2 = func_0x00d6c620();
    if (iVar2 != 0) {
      return ((iVar1 - *(int *)(param_1 + 0x14)) + 0x18) / 0x18 + *(int *)(param_1 + 0x18);
    }
    iVar1 = *(int *)(iVar1 + 0x10);
  } while (iVar1 != 0);
  if (*(int *)((int)param_2 + 4) == -0x18001) {
    return *(int *)param_2;
  }
  return -1;
}



uint __fastcall FUN_00d6efb0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(int *)(param_1 + 0x18) - 1;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  if ((uVar2 != 0) && (*(int *)(*(int *)(param_1 + 8) + 4 + uVar2 * 8) == -1)) {
    uVar4 = 0;
    uVar1 = uVar2;
    while (1 < uVar2) {
      uVar2 = uVar4 + uVar1 >> 1;
      uVar3 = uVar2;
      if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar2 * 8) != -1) {
        uVar3 = uVar1;
        uVar4 = uVar2;
      }
      uVar1 = uVar3;
      uVar2 = uVar3 - uVar4;
    }
    return uVar4;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = func_0x00d6fe50(param_1,uVar2);
  }
  return uVar2;
}



undefined8 __fastcall FUN_00d6f010(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 + 1 < uVar4) {
    if ((*(int *)(iVar1 + 4 + param_2 * 8) != -1) && (*(int *)(iVar1 + 0xc + param_2 * 8) == -1))
    goto LAB_00d6f097;
  }
  else if (((param_2 + 1 <= uVar4) && (*(int *)(param_1 + 0x1c) == 0)) &&
          (*(int *)(iVar1 + 4 + param_2 * 8) != -1)) goto LAB_00d6f097;
  uVar5 = uVar4 - 1;
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  if ((uVar5 == 0) || (*(int *)(iVar1 + 4 + uVar5 * 8) != -1)) {
    param_2 = uVar5;
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar2 = func_0x00d6fe50(param_1,uVar5);
      return CONCAT44(uVar2,uVar2);
    }
  }
  else {
    param_2 = 0;
    if (1 < uVar5) {
      do {
        uVar3 = param_2 + uVar5 >> 1;
        uVar4 = uVar3;
        if (*(int *)(iVar1 + 4 + uVar3 * 8) != -1) {
          uVar4 = uVar5;
          param_2 = uVar3;
        }
        uVar5 = uVar4;
      } while (1 < uVar4 - param_2);
      return CONCAT44(param_2,param_2);
    }
  }
LAB_00d6f097:
  return CONCAT44(param_2,param_2);
}



int __fastcall FUN_00d6f0a0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = func_0x00d6fb10(param_1,param_2 & 0xffffff,param_2 >> 0x18);
  iVar3 = *(int *)(iVar1 + 0x18);
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + 4);
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x1c) + 1;
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x14) + 0xc);
    do {
      puVar2[1] = 0;
      *puVar2 = 0xffffffff;
      puVar2[-2] = 0xffffffff;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 6;
    } while (iVar3 != 0);
  }
  return iVar1;
}



int FUN_00d6f310(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else if (param_3 == 1) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0x1f;
    if (param_3 - 1U != 0) {
      for (; param_3 - 1U >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = iVar3 + 1;
  }
  iVar1 = param_2 + 1;
  if (param_2 < 1) {
    iVar1 = 0;
  }
  iVar1 = func_0x00d6fb10(param_1,iVar1,iVar3);
  iVar3 = *(int *)(iVar1 + 0x18);
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + 4);
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x1c) + 1;
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x14) + 0xc);
    do {
      puVar2[1] = 0;
      *puVar2 = 0xffffffff;
      puVar2[-2] = 0xffffffff;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 6;
    } while (iVar3 != 0);
  }
  return iVar1;
}



undefined4 * FUN_00d6f3a0(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar6 = (undefined4 *)func_0x00d6f120(param_2,param_3);
  if ((puVar6[1] != -1) || (puVar9 = puVar6, *(int *)(param_2 + 0x1c) == 0)) {
    puVar7 = *(undefined4 **)(param_2 + 0x14);
    puVar9 = (undefined4 *)puVar7[5];
    do {
      puVar8 = puVar9;
      if (puVar8 == puVar7) {
        func_0x00d6fc20(param_1,param_2,param_3);
        puVar6 = (undefined4 *)func_0x00d6f900(param_1,param_2,param_3);
        return puVar6;
      }
      puVar9 = puVar8 + -6;
    } while (puVar8[-3] != -1);
    puVar7[5] = puVar9;
    puVar7 = (undefined4 *)func_0x00d6f120(param_2,puVar6 + 2);
    if (puVar7 == puVar6) {
      puVar8[-2] = puVar6[4];
      puVar6[4] = puVar9;
    }
    else {
      puVar5 = (undefined4 *)puVar7[4];
      while (puVar4 = puVar5, puVar4 != puVar6) {
        puVar7 = puVar4;
        puVar5 = (undefined4 *)puVar4[4];
      }
      puVar7[4] = puVar9;
      uVar1 = puVar6[1];
      *puVar9 = *puVar6;
      puVar8[-5] = uVar1;
      uVar1 = puVar6[3];
      puVar8[-4] = puVar6[2];
      puVar8[-3] = uVar1;
      puVar8[-2] = puVar6[4];
      puVar6[4] = 0;
      puVar6[1] = 0xffffffff;
      iVar2 = puVar8[-2];
      puVar7 = puVar9;
      while (puVar9 = puVar6, iVar2 != 0) {
        puVar9 = (undefined4 *)puVar7[4];
        if ((puVar9[1] != -1) &&
           (puVar8 = (undefined4 *)func_0x00d6f120(param_2,puVar9 + 2), puVar8 == puVar6)) {
          puVar7[4] = puVar9[4];
          puVar9[4] = puVar6[4];
          puVar6[4] = puVar9;
          puVar9 = (undefined4 *)puVar7[4];
          while (puVar8 = puVar9, puVar9 = puVar6, puVar8 != (undefined4 *)0x0) {
            if (((puVar8[1] != -1) &&
                (puVar9 = (undefined4 *)func_0x00d6f120(param_2,puVar8 + 2), puVar9 != puVar7)) &&
               (puVar9 != puVar8)) {
              puVar7[4] = puVar8[4];
              puVar8[4] = puVar9[4];
              puVar9[4] = puVar8;
              puVar8 = puVar7;
            }
            puVar7 = puVar8;
            puVar9 = (undefined4 *)puVar8[4];
          }
          break;
        }
        puVar7 = puVar9;
        iVar2 = puVar9[4];
      }
    }
  }
  iVar2 = *param_3;
  iVar3 = param_3[1];
  puVar9[2] = iVar2;
  puVar9[3] = iVar3;
  if ((iVar2 == 0) && (iVar3 == -0x80000000)) {
    puVar9[2] = 0;
    puVar9[3] = 0;
  }
  if ((*(byte *)(param_2 + 4) & 4) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfb;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar2 + 0x24);
    *(int *)(iVar2 + 0x24) = param_2;
  }
  return puVar9;
}



void __fastcall FUN_00d70060(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 6) == '\0') {
    iVar1 = (uint)*(byte *)(param_2 + 7) * 4 + 0x14;
    param_1[2] = param_1[2] - iVar1;
    (*(code *)*param_1)(param_1[1],param_2,iVar1,0);
    return;
  }
  iVar1 = (uint)*(byte *)(param_2 + 7) * 8 + 0x18;
  param_1[2] = param_1[2] - iVar1;
  (*(code *)*param_1)(param_1[1],param_2,iVar1,0);
  return;
}



void __fastcall FUN_00d700a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x20);
  param_1[2] = param_1[2] - iVar1;
  (*(code *)*param_1)(param_1[1],param_2,iVar1,0);
  return;
}



void __fastcall FUN_00d700c0(undefined4 *param_1,int param_2)

{
  if (*(char *)(param_2 + 6) == '\0') {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  param_1[2] = param_1[2] + -0x18;
  (*(code *)*param_1)(param_1[1],param_2,0x18,0);
  return;
}



void __fastcall FUN_00d703a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc) + 0x18;
  param_1[2] = param_1[2] - iVar1;
  (*(code *)*param_1)(param_1[1],param_2,iVar1,0);
  return;
}



void __fastcall FUN_00d71640(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_2 + 0x40);
  if (uVar1 != 0) {
    if ((uint)uVar1 < (uint)param_1[0xbd]) {
      param_1[0xbd] = (uint)uVar1;
    }
    *(undefined4 *)(param_1[0xbc] + (uint)*(ushort *)(param_2 + 0x40) * 4) = 0;
  }
  iVar2 = (uint)*(ushort *)(param_2 + 6) * 3 +
          (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x14)) * 2 + 0x14 + *(int *)(param_2 + 0x18);
  param_1[2] = param_1[2] + iVar2 * -4;
  (*(code *)*param_1)(param_1[1],param_2,iVar2 * 4,0);
  return;
}



undefined4 FUN_00d72020(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48) = 0xfff00240;
  uVar1 = func_0x00d91f30(*param_3,param_3[1]);
  param_3[2] = uVar1;
  return 0;
}



undefined4 FUN_00d72680(int param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  
LAB_00d72691:
  do {
    switch(*(undefined4 *)(param_3 + 0xa8)) {
    case 0x12:
LAB_00d72732:
      *(undefined4 *)(param_3 + 0xa8) = 0x11;
    case 0x11:
      if (*(undefined4 **)(param_3 + 0x930) != (undefined4 *)0x0) {
        if (*(char *)(param_3 + 0x77) == '\0') {
          **(undefined4 **)(param_3 + 0x930) = *(undefined4 *)(param_3 + 0x934);
          *(undefined4 *)(param_3 + 0x930) = 0;
        }
        else {
          *(undefined1 *)(param_3 + 0x77) = 0;
        }
      }
      *(undefined4 *)(param_3 + -0x140) = 0xfffffffb;
      if (((*(byte *)(*(int *)(param_1 + 8) + 0x57) & 4) != 0) &&
         (iVar10 = func_0x00da3060(param_1,0x9425fa7a), iVar10 != 0)) {
        uVar2 = *(undefined4 *)(param_3 + -0x128);
        pdVar3 = *(double **)(param_1 + 0x14);
        uVar4 = *(undefined4 *)(param_3 + -0x124);
        uVar5 = *(undefined4 *)(param_3 + -0x120);
        uVar6 = *(undefined4 *)(param_3 + -0x11c);
        uVar7 = *(undefined4 *)(param_3 + 0x924);
        uVar8 = *(undefined4 *)(param_3 + 0x928);
        *(double **)(param_1 + 0x14) = pdVar3 + 1;
        *pdVar3 = (double)*(ushort *)(param_3 + 0x40);
        puVar9 = *(undefined4 **)(param_1 + 0x14);
        *(undefined4 **)(param_1 + 0x14) = puVar9 + 2;
        *puVar9 = *(undefined4 *)(param_3 + 0x5c);
        puVar9[1] = 0xfffffff7;
        if (*(int *)(param_3 + 0x60) == 0) {
          iVar11 = -1;
        }
        else {
          iVar11 = (*(int *)(param_3 + 0x58) - *(int *)(param_3 + 0x60)) + -0x40 >> 2;
        }
        pdVar3 = *(double **)(param_1 + 0x14);
        *(double **)(param_1 + 0x14) = pdVar3 + 1;
        *pdVar3 = (double)iVar11;
        pdVar3 = *(double **)(param_1 + 0x14);
        *(double **)(param_1 + 0x14) = pdVar3 + 1;
        *pdVar3 = (double)*(int *)(param_3 + 0xb8);
        func_0x00da2fc0(param_1,iVar10);
        *(undefined4 *)(param_3 + -0x128) = uVar2;
        *(undefined4 *)(param_3 + -0x124) = uVar4;
        *(undefined4 *)(param_3 + -0x120) = uVar5;
        *(undefined4 *)(param_3 + -0x11c) = uVar6;
        *(undefined4 *)(param_3 + 0x924) = uVar7;
        *(undefined4 *)(param_3 + 0x928) = uVar8;
      }
      func_0x00d941d0(param_3);
      break;
    case 0x13:
      *(undefined4 *)(param_3 + 0xa8) = 0x11;
      func_0x00d72360(param_3);
      func_0x00d7fe40(param_3 + -0x1b8);
      if (*(int *)(param_3 + 0xa8) == 0x12) goto LAB_00d72732;
      break;
    case 0x14:
      if (*(undefined4 **)(param_3 + 0x930) != (undefined4 *)0x0) {
        **(undefined4 **)(param_3 + 0x930) = *(undefined4 *)(param_3 + 0x934);
        *(undefined4 *)(param_3 + 0x930) = 0;
      }
      *(undefined4 *)(param_3 + 0x11c) = 0;
      if ((((*(uint *)(param_3 + 0x68) & 0x400000) != 0) &&
          (*(short *)(param_3 + 0x42) == *(short *)(param_3 + 0x40))) &&
         (*(int *)(param_3 + 0xbc) + *(int *)(param_3 + 0xb8) == 0)) {
        *(undefined4 *)(param_3 + -0x140) = 0xfffffffa;
        func_0x00d8ea90(param_3);
        iVar10 = func_0x00d8eb30(param_3);
        if (iVar10 != 0) {
          *(undefined4 *)(param_3 + 0xa8) = 0x11;
          *(undefined2 *)(param_3 + 0x42) = 0;
          *(undefined1 *)(param_3 + 0x4c) = 0;
          *(undefined4 *)(param_3 + 0x11c) = *(undefined4 *)(param_3 + 8);
          break;
        }
        *(uint *)(param_3 + 0x11c) = (uint)*(ushort *)(param_3 + 0x168);
      }
      func_0x00d8f530(param_3);
      func_0x00d90990(param_3);
      if (*(int *)(param_3 + 0x11c) == 0) {
        *(undefined1 *)(*(int *)(param_3 + 0x1c) + -1 + (uint)*(ushort *)(param_3 + 6) * 0xc) = 0xff
        ;
      }
      *(undefined4 *)(param_3 + 0xa8) = 0x15;
      break;
    case 0x15:
      *(undefined4 *)(param_3 + -0x140) = 0xfffffff9;
      func_0x00da1bd0(param_3,param_3);
      func_0x00d729d0(param_3);
      *(undefined4 *)(param_3 + -0x140) = 0xffffffff;
      *(undefined4 *)(param_3 + 0xa8) = 0;
      func_0x00d7fe40(param_3 + -0x1b8);
      return 0;
    case 0x16:
      goto code_r0x00d726b6;
    default:
      puVar1 = *(undefined8 **)(param_1 + 0x14);
      *(undefined8 **)(param_1 + 0x14) = puVar1 + 1;
      *puVar1 = 0;
      goto code_r0x00d726b6;
    }
    if (*(int *)(param_3 + 0xa8) < 0x12) {
      return 0;
    }
  } while( true );
code_r0x00d726b6:
  if (*(undefined4 **)(param_3 + 0x930) != (undefined4 *)0x0) {
    **(undefined4 **)(param_3 + 0x930) = *(undefined4 *)(param_3 + 0x934);
    *(undefined4 *)(param_3 + 0x930) = 0;
  }
  iVar10 = func_0x00d71c50(param_3);
  if (iVar10 == 0) {
    *(undefined4 *)(param_3 + 0xa8) = 0;
    *(undefined4 *)(param_3 + -0x140) = 0xffffffff;
    func_0x00d7fe40(param_3 + -0x1b8);
    return 0;
  }
  goto LAB_00d72691;
}



bool __fastcall FUN_00d72c80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00d72ca0(param_1 + 0x14,*(undefined4 *)(param_1 + 0x10),param_2,2);
  return iVar1 != 0;
}



void __fastcall FUN_00d73ef0(undefined4 param_1,undefined1 param_2)

{
  FUN_00d6e6c0(param_1,&stack0xffffffff,1,CONCAT13(param_2,(int3)param_1));
  return;
}



void __fastcall FUN_00d73f10(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_10 [12];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_10;
  iVar1 = func_0x00d742d0();
  FUN_00d6e6c0(param_1,auStack_10,iVar1 - (int)auStack_10);
  FUN_008ab370();
  return;
}



int * __fastcall FUN_00d74230(int *param_1)

{
  int iVar1;
  
  if ((uint)(param_1[1] - *param_1) < 0xb) {
    func_0x00d752e0();
  }
  iVar1 = func_0x00d742d0();
  *param_1 = iVar1;
  return param_1;
}



void __fastcall FUN_00d74260(undefined4 param_1,undefined8 *param_2)

{
  FUN_00d8c9d0(param_1,0xf000035,*param_2);
  return;
}



void __fastcall FUN_00d742b0(undefined4 param_1,int param_2)

{
  func_0x00d751e0(param_1,param_2 + 0x14,*(undefined4 *)(param_2 + 0x10));
  return;
}



int * FUN_00d74c50(int *param_1,uint param_2,undefined1 param_3)

{
  undefined1 *_Dst;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 0x10 & 0xff;
  _Dst = (undefined1 *)*param_1;
  uVar1 = 1;
  if (1 < uVar2) {
    uVar1 = uVar2;
  }
  if ((uint)(param_1[1] - (int)_Dst) < uVar1) {
    _Dst = (undefined1 *)func_0x00d752e0();
  }
  if ((param_2 & 0x100) != 0) {
    *_Dst = param_3;
    _Dst = _Dst + 1;
  }
  if (1 < uVar2) {
    memset(_Dst,0x20,uVar2 - 1);
    _Dst = _Dst + (uVar2 - 1);
  }
  if ((param_2 & 0x100) == 0) {
    *_Dst = param_3;
    _Dst = _Dst + 1;
  }
  *param_1 = (int)_Dst;
  return param_1;
}



int * FUN_00d74cc0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = func_0x008abe00();
  if (((int)((ulonglong)uVar3 >> 0x20) == (int)uVar3 >> 0x1f) && (param_2 == 3)) {
    if ((uint)(param_1[1] - *param_1) < 0xb) {
      func_0x00d752e0();
    }
    iVar1 = func_0x00d742d0();
    *param_1 = iVar1;
    return param_1;
  }
  piVar2 = (int *)FUN_00d74d70(param_1,param_2,uVar3);
  return piVar2;
}



void FUN_00d74d20(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = func_0x008abe00();
  FUN_00d74d70(param_1,param_2,uVar1);
  return;
}



void FUN_00d74d50(undefined4 param_1,undefined4 param_2,int param_3)

{
  func_0x00d75140(param_1,param_2,param_3 + 0x14,*(undefined4 *)(param_3 + 0x10));
  return;
}



void FUN_00d74d70(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  size_t sVar8;
  byte *pbVar9;
  bool bVar10;
  byte *pbStack_48;
  byte *pbStack_44;
  uint uStack_40;
  undefined4 *puStack_3c;
  uint uStack_38;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  byte abStack_7 [3];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&pbStack_48;
  uStack_40 = 0;
  pbStack_44 = (byte *)param_4;
  pbVar9 = abStack_7 + 2;
  puStack_3c = param_1;
  if (((byte)param_2 & 0xf) == 3) {
    if (((int)param_4 < 1) && ((int)param_4 < 0)) {
      bVar10 = param_3 != 0;
      param_3 = -param_3;
      uStack_40 = 0x12d;
      pbStack_44 = (byte *)-(param_4 + bVar10);
    }
    else if ((param_2 & 0x200) == 0) {
      uStack_40 = 0;
      if ((param_2 & 0x800) != 0) {
        uStack_40 = 0x120;
      }
    }
    else {
      uStack_40 = 299;
    }
  }
  pbVar3 = (byte *)((param_2 >> 0x18) - 1);
  uStack_38 = param_2 & 0xfffffbff;
  if ((int)pbVar3 < 0) {
    uStack_38 = param_2;
  }
  if (param_3 == 0 && pbStack_44 == (byte *)0x0) {
    if ((pbVar3 != (byte *)0x0) || ((uStack_38 & 0x1020) == 0x1020)) {
      pbVar9 = abStack_7 + 1;
      abStack_7[1] = 0x30;
    }
  }
  else if ((uStack_38 & 0x30) == 0) {
    while (pbStack_44 != (byte *)0x0) {
      pbVar9 = pbVar9 + -1;
      lVar2 = ZEXT48(pbStack_44) * 0xcccccccd + ((ulonglong)param_3 * 0xcccccccd >> 0x20);
      uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar5 = (int)((ulonglong)param_3 * 0xcccccccc >> 0x20) +
              (uint)CARRY4((uint)((ulonglong)param_3 * 0xcccccccc),(uint)lVar2);
      lVar2 = ZEXT48(pbStack_44) * 0xcccccccc +
              (ulonglong)CONCAT14(CARRY4(uVar7,uVar5),uVar7 + uVar5);
      uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar5 = (uint)lVar2 >> 3;
      *pbVar9 = (char)param_3 + (char)uVar5 * -10 + 0x30;
      param_3 = uVar5 | uVar7 * 0x20000000;
      pbStack_30 = pbVar9;
      pbStack_44 = (byte *)(uVar7 >> 3);
    }
    do {
      pbVar9 = pbVar9 + -1;
      uVar5 = param_3 / 10;
      *pbVar9 = (char)param_3 + (char)uVar5 * -10 + 0x30;
      param_3 = uVar5;
    } while (uVar5 != 0);
  }
  else if ((uStack_38 & 0x10) == 0) {
    do {
      pbVar4 = pbVar9;
      bVar1 = (byte)param_3;
      pbVar9 = pbVar4 + -1;
      param_3 = param_3 >> 3 | (int)pbStack_44 << 0x1d;
      *pbVar9 = (bVar1 & 7) + 0x30;
      pbStack_44 = (byte *)((uint)pbStack_44 >> 3);
    } while (param_3 != 0 || pbStack_44 != (byte *)0x0);
    if ((uStack_38 & 0x1000) != 0) {
      pbVar9 = pbVar4 + -2;
      *pbVar9 = 0x30;
    }
  }
  else {
    pcVar6 = "0123456789ABCDEF";
    if ((uStack_38 & 0x2000) == 0) {
      pcVar6 = "0123456789abcdef";
    }
    do {
      pbVar9 = pbVar9 + -1;
      uVar5 = param_3 & 0xf;
      param_3 = param_3 >> 4 | (int)pbStack_44 << 0x1c;
      pbStack_44 = (byte *)((uint)pbStack_44 >> 4);
      *pbVar9 = pcVar6[uVar5];
    } while (param_3 != 0 || pbStack_44 != (byte *)0x0);
    if ((uStack_38 & 0x1000) != 0) {
      uStack_40 = (~(uStack_38 >> 8) & 0x20 | 0x58) + 0x200;
    }
  }
  pbVar4 = (byte *)*param_1;
  pbStack_34 = abStack_7 + (2 - (int)pbVar9);
  pbStack_2c = pbStack_34;
  if ((int)pbStack_34 < (int)pbVar3) {
    pbStack_2c = pbVar3;
  }
  pbVar3 = (byte *)(uStack_38 >> 0x10 & 0xff);
  pbStack_48 = pbStack_2c + (uStack_40 >> 8);
  pbStack_44 = pbStack_48;
  if (pbStack_48 < pbVar3) {
    pbStack_44 = pbVar3;
  }
  if ((byte *)(param_1[1] - (int)pbVar4) < pbStack_44) {
    pbVar4 = (byte *)func_0x00d752e0();
  }
  pbStack_30 = (byte *)(uStack_38 & 0x500);
  if (pbStack_30 == (byte *)0x0) {
    if (pbStack_48 < pbVar3) {
      sVar8 = (int)pbVar3 - (int)pbStack_48;
      memset(pbVar4,0x20,sVar8);
      pbVar4 = pbVar4 + sVar8;
      do {
        pbVar3 = pbVar3 + -1;
        sVar8 = sVar8 - 1;
      } while (sVar8 != 0);
    }
    pbVar3 = pbVar3 + -1;
  }
  if (uStack_40 != 0) {
    if (0x57 < (byte)uStack_40) {
      *pbVar4 = 0x30;
      pbVar4 = pbVar4 + 1;
    }
    *pbVar4 = (byte)uStack_40;
    pbVar4 = pbVar4 + 1;
  }
  if (pbStack_30 == (byte *)0x400) {
    if (pbStack_48 < pbVar3) {
      sVar8 = (int)pbVar3 - (int)pbStack_48;
      memset(pbVar4,0x30,sVar8);
      pbVar4 = pbVar4 + sVar8;
      do {
        pbVar3 = pbVar3 + -1;
        sVar8 = sVar8 - 1;
      } while (sVar8 != 0);
    }
    pbVar3 = pbVar3 + -1;
  }
  if (pbStack_34 < pbStack_2c) {
    sVar8 = (int)pbStack_2c - (int)pbStack_34;
    memset(pbVar4,0x30,sVar8);
    pbVar4 = pbVar4 + sVar8;
  }
  if (pbVar9 < abStack_7 + 2) {
    do {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      *pbVar4 = bVar1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar9 < abStack_7 + 2);
  }
  if (((uStack_38 & 0x100) != 0) && (pbStack_48 < pbVar3)) {
    sVar8 = (int)pbVar3 - (int)pbStack_48;
    memset(pbVar4,0x20,sVar8);
    pbVar4 = pbVar4 + sVar8;
  }
  *puStack_3c = pbVar4;
  FUN_008ab370();
  return;
}



uint * __fastcall FUN_00d75400(uint *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 < (undefined1 *)param_1[1]) {
    *puVar1 = param_2;
    *param_1 = (uint)(puVar1 + 1);
    return param_1;
  }
  puVar1 = (undefined1 *)func_0x00d752e0();
  *puVar1 = param_2;
  *param_1 = (uint)(puVar1 + 1);
  return param_1;
}



int * __fastcall FUN_00d75420(int *param_1,int param_2)

{
  uint _Size;
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  _Size = *(uint *)(param_2 + 0x10);
  if ((uint)(param_1[1] - (int)pvVar1) < _Size) {
    pvVar1 = (void *)func_0x00d752e0();
  }
  pvVar1 = memcpy(pvVar1,(void *)(param_2 + 0x14),_Size);
  *param_1 = (int)pvVar1 + _Size;
  return param_1;
}



undefined4 * __fastcall FUN_00d75460(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  uint uVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  uint uVar23;
  byte bVar3;
  byte bVar4;
  
  pbVar9 = (byte *)*param_1;
  uVar11 = *(uint *)(param_2 + 0x10);
  if ((uint)(param_1[1] - (int)pbVar9) < uVar11) {
    pbVar9 = (byte *)func_0x00d752e0();
  }
  pbVar1 = pbVar9 + uVar11;
  pbVar13 = (byte *)(param_2 + 0x14);
  uVar12 = 0;
  if (pbVar1 < pbVar9) {
    uVar11 = 0;
  }
  if ((((uVar11 != 0) && (7 < uVar11)) && (1 < DAT_013ddbb0)) &&
     (((byte *)(param_2 + 0x13 + uVar11) < pbVar9 || (pbVar9 + (uVar11 - 1) < pbVar13)))) {
    do {
      auVar20 = pmovzxbd(in_XMM2,*(undefined4 *)pbVar13);
      uVar19 = auVar20._0_4_;
      uVar21 = auVar20._4_4_;
      uVar22 = auVar20._8_4_;
      uVar23 = auVar20._12_4_;
      uVar12 = uVar12 + 8;
      uVar15 = -(uint)(((uint)(0x5a < uVar19) * 0x5a | (0x5a >= uVar19) * uVar19) == uVar19 &&
                      ((uint)(uVar19 < 0x41) * 0x41 | (uVar19 >= 0x41) * uVar19) == uVar19);
      uVar16 = -(uint)(((uint)(0x5a < uVar21) * 0x5a | (0x5a >= uVar21) * uVar21) == uVar21 &&
                      ((uint)(uVar21 < 0x41) * 0x41 | (uVar21 >= 0x41) * uVar21) == uVar21);
      uVar17 = -(uint)(((uint)(0x5a < uVar22) * 0x5a | (0x5a >= uVar22) * uVar22) == uVar22 &&
                      ((uint)(uVar22 < 0x41) * 0x41 | (uVar22 >= 0x41) * uVar22) == uVar22);
      uVar18 = -(uint)(((uint)(0x5a < uVar23) * 0x5a | (0x5a >= uVar23) * uVar23) == uVar23 &&
                      ((uint)(uVar23 < 0x41) * 0x41 | (uVar23 >= 0x41) * uVar23) == uVar23);
      uVar15 = uVar19 + 0x20 & uVar15 | ~uVar15 & uVar19;
      uVar16 = uVar21 + 0x20 & uVar16 | ~uVar16 & uVar21;
      uVar17 = uVar22 + 0x20 & uVar17 | ~uVar17 & uVar22;
      uVar18 = uVar23 + 0x20 & uVar18 | ~uVar18 & uVar23;
      uVar5 = (ushort)uVar15 & 0xff;
      uVar6 = (ushort)uVar16 & 0xff;
      uVar7 = (ushort)uVar17 & 0xff;
      uVar8 = (ushort)uVar18 & 0xff;
      bVar2 = ((uVar15 & 0xff) != 0) * (uVar5 < 0x100) * (char)uVar15 - (0xff < uVar5);
      bVar10 = ((uVar16 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar16 - (0xff < uVar6);
      bVar3 = ((uVar17 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar17 - (0xff < uVar7);
      bVar4 = ((uVar18 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar18 - (0xff < uVar8);
      *(uint *)pbVar9 =
           CONCAT13((bVar4 != 0) * (bVar4 < 0x100) * bVar4 - (0xff < bVar4),
                    CONCAT12((bVar3 != 0) * (bVar3 < 0x100) * bVar3 - (0xff < bVar3),
                             CONCAT11((bVar10 != 0) * (bVar10 < 0x100) * bVar10 - (0xff < bVar10),
                                      (bVar2 != 0) * (bVar2 < 0x100) * bVar2 - (0xff < bVar2))));
      in_XMM2 = pmovzxbd(auVar20,*(undefined4 *)(pbVar13 + 4));
      uVar19 = in_XMM2._0_4_;
      uVar21 = in_XMM2._4_4_;
      uVar22 = in_XMM2._8_4_;
      uVar23 = in_XMM2._12_4_;
      pbVar13 = pbVar13 + 8;
      uVar15 = -(uint)(((uint)(0x5a < uVar19) * 0x5a | (0x5a >= uVar19) * uVar19) == uVar19 &&
                      ((uint)(uVar19 < 0x41) * 0x41 | (uVar19 >= 0x41) * uVar19) == uVar19);
      uVar16 = -(uint)(((uint)(0x5a < uVar21) * 0x5a | (0x5a >= uVar21) * uVar21) == uVar21 &&
                      ((uint)(uVar21 < 0x41) * 0x41 | (uVar21 >= 0x41) * uVar21) == uVar21);
      uVar17 = -(uint)(((uint)(0x5a < uVar22) * 0x5a | (0x5a >= uVar22) * uVar22) == uVar22 &&
                      ((uint)(uVar22 < 0x41) * 0x41 | (uVar22 >= 0x41) * uVar22) == uVar22);
      uVar18 = -(uint)(((uint)(0x5a < uVar23) * 0x5a | (0x5a >= uVar23) * uVar23) == uVar23 &&
                      ((uint)(uVar23 < 0x41) * 0x41 | (uVar23 >= 0x41) * uVar23) == uVar23);
      uVar15 = uVar19 + 0x20 & uVar15 | ~uVar15 & uVar19;
      uVar16 = uVar21 + 0x20 & uVar16 | ~uVar16 & uVar21;
      uVar17 = uVar22 + 0x20 & uVar17 | ~uVar17 & uVar22;
      uVar18 = uVar23 + 0x20 & uVar18 | ~uVar18 & uVar23;
      uVar5 = (ushort)uVar15 & 0xff;
      uVar6 = (ushort)uVar16 & 0xff;
      uVar7 = (ushort)uVar17 & 0xff;
      uVar8 = (ushort)uVar18 & 0xff;
      bVar2 = ((uVar15 & 0xff) != 0) * (uVar5 < 0x100) * (char)uVar15 - (0xff < uVar5);
      bVar10 = ((uVar16 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar16 - (0xff < uVar6);
      bVar3 = ((uVar17 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar17 - (0xff < uVar7);
      bVar4 = ((uVar18 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar18 - (0xff < uVar8);
      *(uint *)(pbVar9 + 4) =
           CONCAT13((bVar4 != 0) * (bVar4 < 0x100) * bVar4 - (0xff < bVar4),
                    CONCAT12((bVar3 != 0) * (bVar3 < 0x100) * bVar3 - (0xff < bVar3),
                             CONCAT11((bVar10 != 0) * (bVar10 < 0x100) * bVar10 - (0xff < bVar10),
                                      (bVar2 != 0) * (bVar2 < 0x100) * bVar2 - (0xff < bVar2))));
      pbVar9 = pbVar9 + 8;
    } while (uVar12 < (uVar11 & 0xfffffff8));
  }
  if (pbVar9 < pbVar1) {
    iVar14 = (int)pbVar13 - (int)pbVar9;
    do {
      bVar2 = pbVar9[iVar14];
      bVar10 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        bVar10 = bVar2;
      }
      *pbVar9 = bVar10;
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 < pbVar1);
  }
  *param_1 = pbVar9;
  return param_1;
}



undefined4 * __fastcall FUN_00d755c0(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined1 *)*param_1;
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uint)(param_1[1] - (int)puVar4) < uVar3) {
    puVar4 = (undefined1 *)func_0x00d752e0();
  }
  puVar1 = puVar4 + uVar3;
  puVar5 = (undefined1 *)(param_2 + 0x13 + uVar3);
  for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    uVar2 = *puVar5;
    puVar5 = puVar5 + -1;
    *puVar4 = uVar2;
  }
  *param_1 = puVar4;
  return param_1;
}



undefined4 * __fastcall FUN_00d75610(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  uint uVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  uint uVar23;
  byte bVar3;
  byte bVar4;
  
  pbVar9 = (byte *)*param_1;
  uVar11 = *(uint *)(param_2 + 0x10);
  if ((uint)(param_1[1] - (int)pbVar9) < uVar11) {
    pbVar9 = (byte *)func_0x00d752e0();
  }
  pbVar1 = pbVar9 + uVar11;
  pbVar13 = (byte *)(param_2 + 0x14);
  uVar12 = 0;
  if (pbVar1 < pbVar9) {
    uVar11 = 0;
  }
  if ((((uVar11 != 0) && (7 < uVar11)) && (1 < DAT_013ddbb0)) &&
     (((byte *)(param_2 + 0x13 + uVar11) < pbVar9 || (pbVar9 + (uVar11 - 1) < pbVar13)))) {
    do {
      auVar20 = pmovzxbd(in_XMM2,*(undefined4 *)pbVar13);
      uVar19 = auVar20._0_4_;
      uVar21 = auVar20._4_4_;
      uVar22 = auVar20._8_4_;
      uVar23 = auVar20._12_4_;
      uVar12 = uVar12 + 8;
      uVar15 = -(uint)(((uint)(0x7a < uVar19) * 0x7a | (0x7a >= uVar19) * uVar19) == uVar19 &&
                      ((uint)(uVar19 < 0x61) * 0x61 | (uVar19 >= 0x61) * uVar19) == uVar19);
      uVar16 = -(uint)(((uint)(0x7a < uVar21) * 0x7a | (0x7a >= uVar21) * uVar21) == uVar21 &&
                      ((uint)(uVar21 < 0x61) * 0x61 | (uVar21 >= 0x61) * uVar21) == uVar21);
      uVar17 = -(uint)(((uint)(0x7a < uVar22) * 0x7a | (0x7a >= uVar22) * uVar22) == uVar22 &&
                      ((uint)(uVar22 < 0x61) * 0x61 | (uVar22 >= 0x61) * uVar22) == uVar22);
      uVar18 = -(uint)(((uint)(0x7a < uVar23) * 0x7a | (0x7a >= uVar23) * uVar23) == uVar23 &&
                      ((uint)(uVar23 < 0x61) * 0x61 | (uVar23 >= 0x61) * uVar23) == uVar23);
      uVar15 = uVar19 - 0x20 & uVar15 | ~uVar15 & uVar19;
      uVar16 = uVar21 - 0x20 & uVar16 | ~uVar16 & uVar21;
      uVar17 = uVar22 - 0x20 & uVar17 | ~uVar17 & uVar22;
      uVar18 = uVar23 - 0x20 & uVar18 | ~uVar18 & uVar23;
      uVar5 = (ushort)uVar15 & 0xff;
      uVar6 = (ushort)uVar16 & 0xff;
      uVar7 = (ushort)uVar17 & 0xff;
      uVar8 = (ushort)uVar18 & 0xff;
      bVar2 = ((uVar15 & 0xff) != 0) * (uVar5 < 0x100) * (char)uVar15 - (0xff < uVar5);
      bVar10 = ((uVar16 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar16 - (0xff < uVar6);
      bVar3 = ((uVar17 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar17 - (0xff < uVar7);
      bVar4 = ((uVar18 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar18 - (0xff < uVar8);
      *(uint *)pbVar9 =
           CONCAT13((bVar4 != 0) * (bVar4 < 0x100) * bVar4 - (0xff < bVar4),
                    CONCAT12((bVar3 != 0) * (bVar3 < 0x100) * bVar3 - (0xff < bVar3),
                             CONCAT11((bVar10 != 0) * (bVar10 < 0x100) * bVar10 - (0xff < bVar10),
                                      (bVar2 != 0) * (bVar2 < 0x100) * bVar2 - (0xff < bVar2))));
      in_XMM2 = pmovzxbd(auVar20,*(undefined4 *)(pbVar13 + 4));
      uVar19 = in_XMM2._0_4_;
      uVar21 = in_XMM2._4_4_;
      uVar22 = in_XMM2._8_4_;
      uVar23 = in_XMM2._12_4_;
      pbVar13 = pbVar13 + 8;
      uVar15 = -(uint)(((uint)(0x7a < uVar19) * 0x7a | (0x7a >= uVar19) * uVar19) == uVar19 &&
                      ((uint)(uVar19 < 0x61) * 0x61 | (uVar19 >= 0x61) * uVar19) == uVar19);
      uVar16 = -(uint)(((uint)(0x7a < uVar21) * 0x7a | (0x7a >= uVar21) * uVar21) == uVar21 &&
                      ((uint)(uVar21 < 0x61) * 0x61 | (uVar21 >= 0x61) * uVar21) == uVar21);
      uVar17 = -(uint)(((uint)(0x7a < uVar22) * 0x7a | (0x7a >= uVar22) * uVar22) == uVar22 &&
                      ((uint)(uVar22 < 0x61) * 0x61 | (uVar22 >= 0x61) * uVar22) == uVar22);
      uVar18 = -(uint)(((uint)(0x7a < uVar23) * 0x7a | (0x7a >= uVar23) * uVar23) == uVar23 &&
                      ((uint)(uVar23 < 0x61) * 0x61 | (uVar23 >= 0x61) * uVar23) == uVar23);
      uVar15 = uVar19 - 0x20 & uVar15 | ~uVar15 & uVar19;
      uVar16 = uVar21 - 0x20 & uVar16 | ~uVar16 & uVar21;
      uVar17 = uVar22 - 0x20 & uVar17 | ~uVar17 & uVar22;
      uVar18 = uVar23 - 0x20 & uVar18 | ~uVar18 & uVar23;
      uVar5 = (ushort)uVar15 & 0xff;
      uVar6 = (ushort)uVar16 & 0xff;
      uVar7 = (ushort)uVar17 & 0xff;
      uVar8 = (ushort)uVar18 & 0xff;
      bVar2 = ((uVar15 & 0xff) != 0) * (uVar5 < 0x100) * (char)uVar15 - (0xff < uVar5);
      bVar10 = ((uVar16 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar16 - (0xff < uVar6);
      bVar3 = ((uVar17 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar17 - (0xff < uVar7);
      bVar4 = ((uVar18 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar18 - (0xff < uVar8);
      *(uint *)(pbVar9 + 4) =
           CONCAT13((bVar4 != 0) * (bVar4 < 0x100) * bVar4 - (0xff < bVar4),
                    CONCAT12((bVar3 != 0) * (bVar3 < 0x100) * bVar3 - (0xff < bVar3),
                             CONCAT11((bVar10 != 0) * (bVar10 < 0x100) * bVar10 - (0xff < bVar10),
                                      (bVar2 != 0) * (bVar2 < 0x100) * bVar2 - (0xff < bVar2))));
      pbVar9 = pbVar9 + 8;
    } while (uVar12 < (uVar11 & 0xfffffff8));
  }
  if (pbVar9 < pbVar1) {
    iVar14 = (int)pbVar13 - (int)pbVar9;
    do {
      bVar2 = pbVar9[iVar14];
      bVar10 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        bVar10 = bVar2;
      }
      *pbVar9 = bVar10;
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 < pbVar1);
  }
  *param_1 = pbVar9;
  return param_1;
}



void __fastcall FUN_00d75820(int *param_1)

{
  FUN_00d6e6c0(param_1[3] & 0xfffffff8,param_1[2],*param_1 - param_1[2]);
  return;
}



int __fastcall FUN_00d75840(int *param_1,uint param_2)

{
  if ((uint)(param_1[1] - *param_1) < param_2) {
    func_0x00d752e0();
  }
  return param_1[1] - *param_1;
}



int * FUN_00d759a0(int *param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if ((uint)(param_1[1] - (int)pvVar1) < param_3) {
    pvVar1 = (void *)func_0x00d752e0();
  }
  pvVar1 = memcpy(pvVar1,param_2,param_3);
  *param_1 = (int)pvVar1 + param_3;
  return param_1;
}



undefined4 * FUN_00d759e0(undefined4 *param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  
  if (((int)param_3 < 1) || (uVar3 = *(uint *)(param_2 + 0x10), uVar3 == 0)) {
    return param_1;
  }
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar3);
  if ((((int)param_3 >> 0x1f) * uVar3 + (int)((ulonglong)param_3 * (ulonglong)uVar3 >> 0x20) == 0)
     && (uVar5 < 0x7fffff01)) {
    puVar6 = (undefined1 *)*param_1;
    if ((uint)(param_1[1] - (int)puVar6) < uVar5) {
      puVar6 = (undefined1 *)func_0x00d752e0();
    }
    puVar1 = (undefined1 *)(param_2 + 0x14);
    if (uVar3 != 1) {
      puVar7 = puVar1;
      do {
        do {
          puVar8 = puVar7 + 1;
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 1;
          puVar7 = puVar8;
        } while (puVar8 < (undefined1 *)(param_2 + 0x14 + uVar3));
        param_3 = param_3 - 1;
        puVar7 = puVar1;
      } while (0 < (int)param_3);
      *param_1 = puVar6;
      return param_1;
    }
    uVar2 = *puVar1;
    do {
      *puVar6 = uVar2;
      param_3 = param_3 - 1;
      puVar6 = puVar6 + 1;
    } while (0 < (int)param_3);
    *param_1 = puVar6;
    return param_1;
  }
  func_0x00d67830(param_1[3] & 0xfffffff8);
  pcVar4 = (code *)swi(3);
  puVar9 = (undefined4 *)(*pcVar4)();
  return puVar9;
}



uint * FUN_00d75aa0(uint *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  size_t _Size;
  void *pvVar1;
  int *piVar2;
  uint _Size_00;
  
  if (param_3 == 0) {
    _Size_00 = 0;
  }
  else {
    _Size_00 = *(uint *)(param_3 + 0x10);
  }
  if ((int)param_5 < (int)param_4) {
    return param_1;
  }
  while( true ) {
    if (param_4 < *(uint *)(param_2 + 0x18)) {
      piVar2 = (int *)(*(int *)(param_2 + 8) + param_4 * 8);
    }
    else {
      piVar2 = (int *)func_0x00d6ee90();
    }
    if (piVar2 == (int *)0x0) break;
    if (piVar2[1] == 0xfffffffb) {
      _Size = *(size_t *)(*piVar2 + 0x10);
      pvVar1 = (void *)*param_1;
      if (param_1[1] - (int)pvVar1 < _Size + _Size_00) {
        pvVar1 = (void *)func_0x00d752e0();
      }
      pvVar1 = memcpy(pvVar1,(void *)(*piVar2 + 0x14),_Size);
      pvVar1 = (void *)(_Size + (int)pvVar1);
    }
    else {
      if (0xfffffff1 < (uint)piVar2[1]) break;
      piVar2 = (int *)FUN_00d8c9d0(param_1,0xf000035,*(undefined8 *)piVar2);
      pvVar1 = (void *)*piVar2;
      if ((uint)(piVar2[1] - (int)pvVar1) < _Size_00) {
        pvVar1 = (void *)func_0x00d752e0();
      }
    }
    if (param_4 == param_5) {
      *param_1 = (uint)pvVar1;
      return param_1;
    }
    if (_Size_00 != 0) {
      pvVar1 = memcpy(pvVar1,(void *)(param_3 + 0x14),_Size_00);
      pvVar1 = (void *)(_Size_00 + (int)pvVar1);
    }
    *param_1 = (uint)pvVar1;
    param_4 = param_4 + 1;
  }
  *param_1 = param_4;
  return (uint *)0x0;
}



void FUN_00d75bd0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1[3] & 0xfffffff8;
  piVar1 = (int *)(uVar5 + 8);
  if ((param_1[3] & 6U) == 0) {
    iVar2 = param_1[2];
    puVar3 = (undefined4 *)*piVar1;
    iVar4 = param_1[1] - iVar2;
    puVar3[2] = puVar3[2] - iVar4;
    (*(code *)*puVar3)(puVar3[1],iVar2,iVar4,0);
  }
  param_1[1] = 0;
  param_1[3] = uVar5 + 3;
  param_1[2] = 0;
  param_1[1] = param_3 + param_2;
  *param_1 = param_3 + param_2;
  param_1[2] = param_2;
  param_1[5] = param_2;
  param_1[4] = param_4;
  if (((*(byte *)(param_4 + 4) & 3) != 0) && ((*(byte *)(param_1 + -5) & 4) != 0)) {
    func_0x00d6daa0(*piVar1,param_1 + -6,param_4);
  }
  return;
}



undefined4 FUN_00d778e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  size_t _Size;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = param_3;
  if ((uint)(*(int *)(param_3 + 4) - *(int *)(param_3 + 8)) < 0x400) {
    func_0x00d753b0();
  }
  puVar3 = *(undefined4 **)(uVar2 + 8);
  iVar1 = *(int *)(*(int *)(uVar2 + 0x10) + 0x28);
  _Size = *(size_t *)(iVar1 + 0x10);
  if ((uint)(*(int *)(uVar2 + 4) - (int)puVar3) < _Size + 10) {
    puVar3 = (undefined4 *)func_0x00d753b0();
  }
  *puVar3 = 0x24a4c1b;
  *(byte *)(puVar3 + 1) =
       (-(*(int *)(uVar2 + 0x1c) != 0) & 2U) + (*(byte *)(*(int *)(uVar2 + 0x10) + 0x25) & 4);
  iVar6 = (int)puVar3 + 5;
  if (*(int *)(uVar2 + 0x1c) == 0) {
    pvVar4 = (void *)func_0x00d744c0();
    pvVar4 = memcpy(pvVar4,(void *)(iVar1 + 0x14),_Size);
    iVar6 = _Size + (int)pvVar4;
  }
  uVar5 = (**(code **)(uVar2 + 0x14))
                    (*(uint *)(uVar2 + 0xc) & 0xfffffff8,*(int *)(uVar2 + 8),
                     iVar6 - *(int *)(uVar2 + 8),*(undefined4 *)(uVar2 + 0x18));
  *(undefined4 *)(uVar2 + 0x20) = uVar5;
  func_0x00d77500(uVar2,*(undefined4 *)(uVar2 + 0x10));
  if (*(int *)(uVar2 + 0x20) == 0) {
    param_3 = param_3 & 0xffffff00;
    uVar5 = (**(code **)(uVar2 + 0x14))
                      (*(uint *)(uVar2 + 0xc) & 0xfffffff8,&param_3,1,*(undefined4 *)(uVar2 + 0x18))
    ;
    *(undefined4 *)(uVar2 + 0x20) = uVar5;
  }
  return 0;
}



ulonglong __fastcall FUN_00d80620(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar5 = uVar1 << 0x12 | uVar3 >> 0xe;
  uVar4 = ((uVar3 & 0xffffc000 ^ uVar1 << 1) >> 0xe | (uVar1 & 1 ^ uVar1 >> 0x1f) << 0x12) ^
          (uVar3 & 0xfffffffe) << 0x12;
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uVar8 = uVar1 & 0x1fff ^ uVar1 >> 0x13;
  uVar2 = (uVar3 & 0xfffff800 ^ (uVar3 >> 0x13 | uVar1 << 0xd)) >> 0xb | uVar8 << 0x15;
  uVar6 = param_1[4];
  uVar9 = uVar8 >> 0xb ^ (uVar1 << 0x1c | (uVar3 & 0xffffffc0) >> 4);
  param_1[3] = uVar9;
  param_1[2] = uVar2;
  uVar3 = param_1[5];
  uVar8 = uVar3 << 7 | uVar6 >> 0x19;
  uVar6 = ((uVar3 << 8 ^ uVar6 & 0xff000000) >> 0x18 | (uVar3 >> 0x18 ^ uVar3 & 0xff) << 8) ^
          (uVar6 & 0xfffffe00) << 7;
  uVar3 = param_1[6];
  param_1[4] = uVar6;
  uVar1 = param_1[7];
  param_1[5] = uVar8;
  uVar7 = uVar1 << 8 | uVar3 >> 0x18;
  uVar3 = ((uVar3 & 0xfffc0000 ^ uVar1 << 0xb) >> 0x12 | (uVar1 & 0x7ff ^ uVar1 >> 0x15) << 0xe) ^
          (uVar3 & 0xfffe0000) << 8;
  param_1[7] = uVar7;
  param_1[6] = uVar3;
  return CONCAT44(uVar5 ^ uVar9 ^ uVar8 ^ uVar7,uVar3 ^ uVar4 ^ uVar2 ^ uVar6) & 0xfffffffffffff |
         0x3ff0000000000000;
}



void FUN_00d80d80(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    func_0x00d80dc0(param_1,param_2);
    return;
  }
  if (param_2 == 0) {
    func_0x00d812d0(param_1);
    return;
  }
  func_0x00d81500(param_1,param_2,param_4);
  return;
}



undefined4 FUN_00d824e0(int *param_1)

{
  byte bVar1;
  DWORD dwMilliseconds;
  int iVar2;
  int iVar3;
  int iVar4;
  
  dwMilliseconds = param_1[7];
  (*(code *)param_1[0xb])(dwMilliseconds);
  Sleep(dwMilliseconds);
  if (param_1[0x14] == 0) {
    do {
      iVar2 = *param_1;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
      param_1[8] = param_1[8] + 1;
      bVar1 = *(byte *)(iVar2 + 0x55);
      if ((bVar1 & 0xe0) == 0) {
        iVar3 = *(int *)(iVar2 + 0x78);
        if (iVar3 < 0) {
          if (iVar3 == -1) {
            iVar4 = 0x49;
          }
          else if (iVar3 == -2) {
            iVar4 = 0x43;
          }
          else {
            iVar4 = 0x4a;
            if (iVar3 == -3) {
              iVar4 = 0x47;
            }
          }
        }
        else {
          iVar4 = 0x4e;
        }
        param_1[9] = iVar4;
        *(byte *)(iVar2 + 0x55) = bVar1 | 0x80;
        func_0x00d7fe40(iVar2);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
      Sleep(dwMilliseconds);
    } while (param_1[0x14] == 0);
  }
  (*(code *)param_1[0xc])(dwMilliseconds);
  return 0;
}



void FUN_00d82580(int param_1)

{
  code *pcVar1;
  int iVar2;
  int extraout_ECX;
  
  func_0x00d8df20(param_1,1);
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) == iVar2 + 8) {
    func_0x00d67660(param_1,0x3e1);
    iVar2 = extraout_ECX;
  }
  if ((*(uint *)(iVar2 + 0xc) != 0xfffffffb) && (0xfffffff2 < *(uint *)(iVar2 + 0xc))) {
    func_0x00d670e0();
  }
  iVar2 = func_0x00d8e1f0(param_1,2);
  func_0x00d67680(param_1,iVar2 + 0x14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d825d0(undefined4 param_1)

{
  code *pcVar1;
  
  func_0x00d8e270(param_1,1);
  func_0x00d67890(param_1,0xc0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d825f0(undefined4 param_1)

{
  func_0x00d83400(param_1,0x14);
  return;
}



undefined4 FUN_00d82600(undefined4 param_1)

{
  func_0x00d8e270(param_1,1);
  func_0x00d8df80(param_1,2);
  return 0;
}



void FUN_00d82620(undefined4 param_1)

{
  func_0x00d83400(param_1,0x15);
  return;
}



undefined4 FUN_00d82630(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = func_0x00d8e270(param_1,1);
  iVar3 = func_0x00d8e2a0(param_1,2);
  iVar4 = func_0x00d70da0(param_1,*(undefined4 *)(param_1 + 0x10),0x11);
  if (*(int *)(iVar4 + 4) == -1) {
    *(int *)(iVar2 + 0x10) = iVar3;
    if (((iVar3 != 0) && ((*(byte *)(iVar3 + 4) & 3) != 0)) && ((*(byte *)(iVar2 + 4) & 4) != 0)) {
      iVar3 = *(int *)(param_1 + 8);
      *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0x24);
      *(int *)(iVar3 + 0x24) = iVar2;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    *(int *)(iVar3 + -8) = iVar2;
    *(undefined4 *)(iVar3 + -4) = 0xfffffff4;
    return 2;
  }
  func_0x00d67660(param_1,0x3f3);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00d826b0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar3 = param_1;
  piVar4 = *(int **)(param_1 + 0x10);
  if ((*(int **)(param_1 + 0x14) <= piVar4) || (piVar4[1] != -9)) {
    param_1 = func_0x00d8e2e0(param_1,1,1);
    piVar4 = (int *)func_0x00d6a9f0(iVar3,param_1,&param_1);
    if (piVar4 == (int *)0x0) {
      func_0x00d67530(iVar3,1,0x4ce);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  if (*(char *)(*piVar4 + 6) == '\0') {
    uVar5 = *(undefined4 *)(*piVar4 + 8);
  }
  else {
    uVar5 = *(undefined4 *)(iVar3 + 0x24);
  }
  puVar1 = *(undefined4 **)(iVar3 + 0x14);
  *(undefined4 **)(iVar3 + 0x14) = puVar1 + 2;
  *puVar1 = uVar5;
  puVar1[1] = 0xfffffff4;
  return 1;
}



undefined4 FUN_00d82720(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar3 = param_1;
  iVar4 = func_0x00d8e270(param_1,2);
  piVar5 = *(int **)(iVar3 + 0x10);
  if ((*(int **)(iVar3 + 0x14) <= piVar5) || (piVar5[1] != -9)) {
    param_1 = func_0x00d8df80(iVar3,1);
    if (param_1 == 0) {
      *(int *)(iVar3 + 0x24) = iVar4;
      return 0;
    }
    piVar5 = (int *)func_0x00d6a9f0(iVar3,param_1,&param_1);
    if (piVar5 == (int *)0x0) {
      func_0x00d67530(iVar3,1,0x4ce);
      goto LAB_00d827ba;
    }
  }
  iVar1 = *piVar5;
  if (*(char *)(iVar1 + 6) == '\0') {
    *(int *)(iVar1 + 8) = iVar4;
    if (((*(byte *)(iVar4 + 4) & 3) != 0) && ((*(byte *)(iVar1 + 4) & 4) != 0)) {
      func_0x00d6daa0(*(undefined4 *)(iVar3 + 8),iVar1,iVar4);
    }
    piVar5 = *(int **)(iVar3 + 0x14);
    *(int **)(iVar3 + 0x14) = piVar5 + 2;
    *piVar5 = iVar1;
    piVar5[1] = -9;
    return 1;
  }
LAB_00d827ba:
  func_0x00d67660(iVar3,0x50e);
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}



undefined4 FUN_00d827d0(undefined4 param_1)

{
  func_0x00d8e270(param_1,1);
  func_0x00d8df20(param_1,2);
  return 0;
}



undefined4 FUN_00d827f0(int param_1)

{
  int iVar1;
  
  func_0x00d8e270(param_1,1);
  func_0x00d8df20(param_1,2);
  iVar1 = func_0x00d8df20(param_1,3);
  *(int *)(param_1 + 0x14) = iVar1 + 8;
  func_0x00d669c0(param_1,1);
  return 1;
}



undefined4 FUN_00d82830(int param_1)

{
  int iVar1;
  
  func_0x00d8df20(param_1,1);
  func_0x00d8df20(param_1,2);
  iVar1 = func_0x00d6c620();
  *(int *)(*(int *)(param_1 + 0x14) + -4) = -2 - iVar1;
  return 1;
}



int FUN_00d82870(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar6 = func_0x00d8e270(param_1,1);
  uVar7 = func_0x00d8e2e0(param_1,2,1);
  if ((*(int *)(param_1 + 0x10) + 0x10U < *(uint *)(param_1 + 0x14)) &&
     (*(int *)(*(int *)(param_1 + 0x10) + 0x14) != -1)) {
    iVar8 = func_0x00d8df80(param_1,3);
  }
  else {
    iVar8 = FUN_00d6efb0();
  }
  if (iVar8 < (int)uVar7) {
    return 0;
  }
  iVar1 = (iVar8 - uVar7) + 1;
  if (iVar8 - uVar7 < 8000) {
    iVar9 = func_0x00d65d50(param_1,iVar1);
    if (iVar9 != 0) {
      do {
        if (uVar7 < *(uint *)(iVar6 + 0x18)) {
          puVar10 = (undefined4 *)(*(int *)(iVar6 + 8) + uVar7 * 8);
        }
        else {
          puVar10 = (undefined4 *)func_0x00d6ee90();
        }
        puVar2 = *(undefined4 **)(param_1 + 0x14);
        if (puVar10 == (undefined4 *)0x0) {
          puVar2[1] = 0xffffffff;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
        }
        else {
          *(undefined4 **)(param_1 + 0x14) = puVar2 + 2;
          uVar3 = puVar10[1];
          *puVar2 = *puVar10;
          puVar2[1] = uVar3;
        }
        bVar4 = (int)uVar7 < iVar8;
        uVar7 = uVar7 + 1;
      } while (bVar4);
      return iVar1;
    }
  }
  func_0x00d67660(param_1,0x417);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}



int FUN_00d82940(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14) - (int)piVar1 >> 3;
  if (((0 < iVar4) && (piVar1[1] == -5)) && (*(char *)(*piVar1 + 0x14) == '#')) {
    *(double *)(*(int *)(param_1 + 0x14) + -8) = (double)(iVar4 + -1);
    return 1;
  }
  iVar3 = func_0x00d8df80(param_1,1);
  if (iVar3 < 0) {
    iVar3 = iVar3 + iVar4;
  }
  else if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  if (0 < iVar3) {
    return iVar4 - iVar3;
  }
  func_0x00d67530(param_1,1,0x496);
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}



undefined4 FUN_00d829b0(int param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  double dVar11;
  byte *apbStack_8 [2];
  
  iVar5 = func_0x00d8e2e0(param_1,2,10);
  if (iVar5 == 10) {
    piVar6 = (int *)func_0x00d8df20();
    if (((uint)piVar6[1] < 0xfffffff3) ||
       ((piVar6[1] == 0xfffffffb && (iVar5 = FUN_00d72c80(), iVar5 != 0)))) {
      iVar5 = *(int *)(param_1 + 0x10);
      iVar8 = piVar6[1];
      *(int *)(iVar5 + -8) = *piVar6;
      *(int *)(iVar5 + -4) = iVar8;
      return 2;
    }
    if (piVar6[1] == -0xb) {
      apbStack_8[0] = *(byte **)(*(int *)(param_1 + 8) + 0xfc);
      *(int *)(apbStack_8[0] + 0xc) = param_1;
      puVar7 = (uint *)func_0x00d7f340(apbStack_8[0],*(undefined2 *)(*piVar6 + 6));
      if ((*puVar7 & 0xf0000000) == 0x50000000) {
        puVar7 = (uint *)(*(int *)apbStack_8[0] + (*puVar7 & 0xffff) * 0x10);
      }
      if ((*puVar7 < 0x10000000) || ((*puVar7 & 0xf4000000) == 0x34000000)) {
        func_0x00da4730(apbStack_8[0],*(int *)apbStack_8[0] + 0xe0,*(int *)(param_1 + 0x10) + -8,
                        piVar6,0);
        return 2;
      }
    }
    goto LAB_00d82b9a;
  }
  iVar8 = func_0x00d8e1f0(param_1,1);
  bVar3 = false;
  pbVar10 = (byte *)(iVar8 + 0x14);
  if (0x22 < iVar5 - 2U) {
    func_0x00d67530(param_1,2,0x4a9);
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return uVar9;
  }
  bVar4 = *pbVar10;
  bVar1 = (&DAT_010cd571)[bVar4];
  while ((bVar1 & 2) != 0) {
    bVar4 = pbVar10[1];
    pbVar10 = pbVar10 + 1;
    bVar1 = (&DAT_010cd571)[bVar4];
  }
  if (bVar4 == 0x2d) {
    bVar3 = true;
LAB_00d82b05:
    bVar4 = pbVar10[1];
    pbVar10 = pbVar10 + 1;
  }
  else {
    bVar4 = *pbVar10;
    if (bVar4 == 0x2b) goto LAB_00d82b05;
  }
  if ((((&DAT_010cd571)[bVar4] & 0x68) != 0) &&
     (iVar5 = func_0x00e87983(pbVar10,apbStack_8,iVar5), pbVar10 != apbStack_8[0])) {
    bVar4 = *apbStack_8[0];
    bVar1 = (&DAT_010cd571)[bVar4];
    while ((bVar1 & 2) != 0) {
      apbStack_8[0] = apbStack_8[0] + 1;
      bVar4 = *apbStack_8[0];
      bVar1 = (&DAT_010cd571)[bVar4];
    }
    if (bVar4 == 0) {
      dVar11 = (double)iVar5 + (double)(&DAT_011a2c10)[-(iVar5 >> 0x1f)];
      if (bVar3) {
        dVar11 = -dVar11;
      }
      *(double *)(*(int *)(param_1 + 0x10) + -8) = dVar11;
      return 2;
    }
  }
LAB_00d82b9a:
  *(undefined4 *)(*(int *)(param_1 + 0x10) + -4) = 0xffffffff;
  return 2;
}



undefined4 FUN_00d82bc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00d8df20(param_1,1);
  *(int *)(param_1 + 0x14) = iVar1 + 8;
  puVar2 = (undefined4 *)func_0x00d70da0(param_1,iVar1,0x12);
  if (puVar2[1] != -1) {
    uVar3 = puVar2[1];
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + -8) = *puVar2;
    *(undefined4 *)(iVar1 + -4) = uVar3;
    return 0xffffffff;
  }
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  uVar3 = func_0x00d73f60();
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + -8) = uVar3;
  *(undefined4 *)(iVar1 + -4) = 0xfffffffb;
  return 2;
}



void FUN_00d82c30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00d8e2e0(param_1,2,1);
  func_0x00d66d90(param_1,1);
  iVar2 = func_0x00d66340(param_1,1);
  if ((iVar2 != 0) && (0 < iVar1)) {
    func_0x00d67b50(param_1,iVar1);
    func_0x00d668e0(param_1,1);
    func_0x00d65da0(param_1,2);
  }
  func_0x00d67ba0(param_1);
  return;
}



undefined4 FUN_00d82c90(undefined4 param_1)

{
  func_0x00d8df20(param_1,1);
  func_0x00d8df50(param_1,2);
  return 0;
}



void FUN_00d82cb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00d8e340(param_1,1);
  iVar2 = func_0x00d8e340(param_1,2);
  func_0x00d66d90(param_1,3);
  uVar3 = func_0x00d6bb40(param_1,-(uint)(iVar1 != 0) & iVar1 + 0x14U,
                          -(uint)(iVar2 != 0) & iVar2 + 0x14U);
  func_0x00d83570(param_1,uVar3,3);
  return;
}



void FUN_00d82d00(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  
  iVar3 = param_1;
  iVar4 = func_0x00d8e340(param_1,2);
  iVar5 = func_0x00d8e340(param_1,3);
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 0x14) <= piVar1) {
LAB_00d82db9:
    func_0x00d8df50(param_1,1);
    func_0x00d66d90(param_1,5);
    if (iVar4 == 0) {
      pcVar8 = "=(load)";
    }
    else {
      pcVar8 = (char *)(iVar4 + 0x14);
    }
    uVar7 = func_0x00d6bd60(param_1,FUN_00d83690,0,pcVar8,-(uint)(iVar5 != 0) & iVar5 + 0x14U);
    func_0x00d83570(param_1,uVar7,4);
    return;
  }
  uVar2 = piVar1[1];
  if (uVar2 != 0xfffffffb) {
    if ((0xfffffff2 < uVar2) && ((uVar2 != 0xfffffff3 || (*(char *)(*piVar1 + 6) != '\x03'))))
    goto LAB_00d82db9;
    if ((uVar2 == 0xfffffff3) && (iVar6 = *piVar1, *(char *)(iVar6 + 6) == '\x03')) {
      iVar9 = *(int *)(iVar6 + 0x2c);
      iVar6 = *(int *)(iVar6 + 0x18) - iVar9;
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 8) + 0x40;
      }
      goto LAB_00d82d7f;
    }
  }
  iVar6 = func_0x00d8e1f0(param_1,1);
  iVar9 = iVar6 + 0x14;
  iVar6 = *(int *)(iVar6 + 0x10);
LAB_00d82d7f:
  param_1 = iVar6;
  func_0x00d66d90(iVar3,4);
  iVar6 = iVar4 + 0x14;
  if (iVar4 == 0) {
    iVar6 = iVar9;
  }
  uVar7 = func_0x00d6b8c0(iVar3,iVar9,param_1,iVar6,-(uint)(iVar5 != 0) & iVar5 + 0x14U);
  func_0x00d83570(iVar3,uVar7,4);
  return;
}



int FUN_00d82e10(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00d8e340(param_1,1);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
  iVar1 = func_0x00d6b970(param_1,-(uint)(iVar1 != 0) & iVar1 + 0x14U);
  if (iVar1 != 0) {
    func_0x00d67ba0(param_1);
  }
  func_0x00d65d20(param_1,0,0xffffffff);
  return (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3) + -1;
}



undefined4 FUN_00d82e70(int param_1)

{
  double *pdVar1;
  
  pdVar1 = *(double **)(param_1 + 0x14);
  *(double **)(param_1 + 0x14) = pdVar1 + 1;
  *pdVar1 = (double)(*(uint *)(*(int *)(param_1 + 8) + 8) >> 10);
  return 1;
}



undefined4 FUN_00d82ea0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x00d8e0d0(param_1,1,2,&DAT_010cc348);
  uVar2 = func_0x00d8e2e0(param_1,2,0);
  if (iVar1 == 3) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
    **(double **)(param_1 + 0x14) =
         ((double)iVar1 + (double)(&DAT_011a2c10)[-(iVar1 >> 0x1f)]) * 0.0009765625;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    return 1;
  }
  iVar3 = func_0x00d65ec0(param_1,iVar1,uVar2);
  if ((iVar1 != 5) && (iVar1 != 9)) {
    **(double **)(param_1 + 0x14) = (double)iVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    return 1;
  }
  *(int *)(*(int *)(param_1 + 0x14) + 4) = -2 - iVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  return 1;
}



undefined4 FUN_00d82f50(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x00d66d90(param_1,1);
  func_0x00d66480(param_1,0);
  iVar2 = func_0x00d66e90(param_1,1);
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = func_0x00d67010(param_1,1);
  if (iVar2 != 1) {
    iVar2 = func_0x00d66100(param_1,1);
    if (iVar2 != 0) {
      func_0x00d66920(param_1,0xffffd8ed);
      iVar2 = func_0x00d66e90(param_1,0xffffffff);
      func_0x00d66d90(param_1,0xfffffffe);
      if (iVar2 != 0) {
        func_0x00d66100(param_1,1);
        func_0x00d66c00(param_1,2);
        return 1;
      }
    }
    func_0x00d67530(param_1,1,0x2af);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  func_0x00d65e70(param_1,0,0);
  func_0x00d668e0(param_1,0xffffffff);
  func_0x00d66630(param_1,1);
  func_0x00d669c0(param_1,0xffffd8ed);
  func_0x00d66c00(param_1,2);
  return 1;
}



undefined4 FUN_00d83030(size_t param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  size_t sVar5;
  int *piVar6;
  void *_Str;
  FILE *_File;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  size_t sStack_8;
  int iStack_4;
  
  sVar5 = param_1;
  iVar8 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  iStack_4 = iVar8;
  piVar6 = (int *)func_0x00d6f270(*(undefined4 *)(param_1 + 0x24),
                                  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 0x18));
  if ((piVar6 == (int *)0x0) || (piVar6[1] == -1)) {
    puVar1 = *(undefined4 **)(sVar5 + 0x14);
    *(undefined4 **)(sVar5 + 0x14) = puVar1 + 2;
    *puVar1 = *(undefined4 *)(*(int *)(*(int *)(sVar5 + 0x10) + -8) + 0x18);
    puVar1[1] = 0xfffffffb;
    func_0x00d66180(sVar5,0xffffd8ee);
    piVar6 = (int *)(*(int *)(sVar5 + 0x14) + -8);
  }
  else {
    piVar2 = *(int **)(sVar5 + 0x14);
    *(int **)(sVar5 + 0x14) = piVar2 + 2;
    iVar9 = piVar6[1];
    *piVar2 = *piVar6;
    piVar2[1] = iVar9;
  }
  if (((piVar6[1] == -9) && (*(char *)(*piVar6 + 6) == '\x12')) &&
     (*(int *)(*(int *)(sVar5 + 8) + 0x1ac) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      puVar1 = (undefined4 *)(*(int *)(sVar5 + 0x10) + iVar9 * 8);
      if (bVar4) {
        _Str = (void *)func_0x00d750c0(sVar5,puVar1,&sStack_8);
        if (_Str == (void *)0x0) goto LAB_00d83109;
        param_1 = sStack_8;
      }
      else {
LAB_00d83109:
        iVar8 = *(int *)(sVar5 + 0x14);
        uVar7 = puVar1[1];
        *(undefined4 *)(iVar8 + 8) = *puVar1;
        *(undefined4 *)(iVar8 + 0xc) = uVar7;
        puVar1 = *(undefined4 **)(sVar5 + 0x14);
        *puVar1 = puVar1[-2];
        puVar1[1] = puVar1[-1];
        *(int *)(sVar5 + 0x14) = *(int *)(sVar5 + 0x14) + 0x10;
        func_0x00d65d20(sVar5,1,1);
        _Str = (void *)func_0x00d66f10(sVar5,0xffffffff,&param_1);
        if (_Str == (void *)0x0) {
          func_0x00d67660(sVar5,0x457);
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return uVar7;
        }
        *(int *)(sVar5 + 0x14) = *(int *)(sVar5 + 0x14) + -8;
      }
      if (iVar9 != 0) {
        func_0x00e87bdc(9);
      }
      _File = (FILE *)func_0x00e8798f(1);
      fwrite(_Str,1,param_1,_File);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iStack_4);
  }
  func_0x00e87bdc(10);
  return 0;
}



undefined4 FUN_00d831b0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((*(int **)(param_1 + 0x14) <= piVar1) || (piVar1[1] != -7)) {
    func_0x00d67530(param_1,1,0x236);
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  iVar2 = *piVar1;
  if (iVar2 == param_1) {
    func_0x00d66830(param_1,"running");
    return 1;
  }
  if (*(char *)(iVar2 + 7) == '\x01') {
    func_0x00d66830(param_1,"suspended");
    return 1;
  }
  if (*(char *)(iVar2 + 7) != '\0') {
    func_0x00d66830(param_1,&DAT_010cc3a0);
    return 1;
  }
  if (*(int *)(iVar2 + 0x1c) + 8U < *(uint *)(iVar2 + 0x10)) {
    func_0x00d66830(param_1,"normal");
    return 1;
  }
  pcVar4 = "dead";
  if (*(uint *)(iVar2 + 0x14) != *(uint *)(iVar2 + 0x10)) {
    pcVar4 = "suspended";
  }
  func_0x00d66830(param_1,pcVar4);
  return 1;
}



undefined4 FUN_00d83270(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00d668a0(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  }
  return 1;
}



undefined4 FUN_00d832a0(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0x14) + 4) = -2 - (*(uint *)(param_1 + 0x28) & 1);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  return 1;
}



undefined4 FUN_00d832d0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) &&
     (*(int *)(*(uint *)(param_1 + 0x10) + 4) == -9)) {
    iVar3 = func_0x00d66430(param_1);
    puVar1 = *(undefined4 **)(iVar3 + 0x14);
    *(undefined4 **)(iVar3 + 0x14) = puVar1 + 2;
    *puVar1 = **(undefined4 **)(param_1 + 0x10);
    puVar1[1] = 0xfffffff7;
    return 1;
  }
  func_0x00d67550(param_1,1,6);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



void FUN_00d83320(undefined4 param_1)

{
  code *pcVar1;
  
  func_0x00d67660(param_1,0x33e);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d83330(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if ((puVar1 < *(undefined4 **)(param_1 + 0x14)) && (puVar1[1] == -7)) {
    func_0x00d83490(param_1,*puVar1,0);
    return;
  }
  func_0x00d67530(param_1,1,0x236);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 FUN_00d83360(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) &&
     (*(int *)(*(uint *)(param_1 + 0x10) + 4) == -9)) {
    iVar3 = func_0x00d66430(param_1);
    puVar1 = *(undefined4 **)(iVar3 + 0x14);
    *(undefined4 **)(iVar3 + 0x14) = puVar1 + 2;
    *puVar1 = **(undefined4 **)(param_1 + 0x10);
    puVar1[1] = 0xfffffff7;
    iVar3 = func_0x00d8e480(param_1,FUN_00d83510,0x24,1);
    *(int *)(iVar3 + 0x10) = *(int *)(param_1 + 8) + 0xfa8;
    return 1;
  }
  func_0x00d67550(param_1,1,6);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



undefined4 FUN_00d83510(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 0x18);
  if (((*(int *)(iVar1 + 0x28) == 0) && (*(byte *)(iVar1 + 7) < 2)) &&
     ((*(byte *)(iVar1 + 7) != 0 || (*(int *)(iVar1 + 0x14) != *(int *)(iVar1 + 0x10))))) {
    func_0x00d6bf10();
    return 0;
  }
  uVar3 = 0x562;
  if (*(int *)(iVar1 + 0x28) != 0) {
    uVar3 = 0x542;
  }
  func_0x00d67660(param_1,uVar3);
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}



undefined4 FUN_00d835d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = FUN_00d6e6c0(param_1,&DAT_010cc3ac,2);
  puVar3 = (undefined4 *)func_0x00d6fab0(param_1,uVar5,uVar2);
  *puVar3 = uVar5;
  puVar3[1] = 0xfffffff4;
  func_0x00d66780(param_1,"Lua 5.1",7);
  iVar4 = func_0x00d6f2a0(param_1,0,1);
  piVar1 = *(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = piVar1 + 2;
  *piVar1 = iVar4;
  piVar1[1] = -0xc;
  *(int *)(iVar4 + 0x10) = iVar4;
  uVar5 = FUN_00d6e6c0(param_1,&DAT_010cc3a8,2);
  uVar2 = FUN_00d6e6c0(param_1,"__mode",6);
  puVar3 = (undefined4 *)func_0x00d6fab0(param_1,iVar4,uVar2);
  *puVar3 = uVar5;
  puVar3[1] = 0xfffffffb;
  *(undefined1 *)(iVar4 + 6) = 0xf7;
  func_0x00d8e4c0(param_1,&DAT_010cc3ac,&DAT_010cc180,&PTR_FUN_010cc118);
  func_0x00d8e4c0(param_1,"coroutine",&DAT_010cc2e8,&PTR_FUN_010cc2cc);
  return 2;
}



undefined4 FUN_00d83690(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  func_0x00d657b0(param_1,2,"too many nested functions");
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = puVar5 + 2;
  uVar4 = (*(undefined4 **)(param_1 + 0x10))[1];
  *puVar5 = **(undefined4 **)(param_1 + 0x10);
  puVar5[1] = uVar4;
  func_0x00d65d20(param_1,0,1);
  iVar1 = *(int *)(param_1 + 0x14);
  puVar5 = (undefined4 *)(iVar1 + -8);
  *(undefined4 **)(param_1 + 0x14) = puVar5;
  uVar2 = *(uint *)(iVar1 + -4);
  if (uVar2 == 0xffffffff) {
    *param_3 = 0;
    return 0;
  }
  if ((uVar2 != 0xfffffffb) && (0xfffffff2 < uVar2)) {
    func_0x00d67660(param_1,0x432);
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x20) = *puVar5;
  *(uint *)(iVar1 + 0x24) = uVar2;
  uVar4 = func_0x00d66f10(param_1,5,param_3);
  return uVar4;
}



undefined4 FUN_00d83720(undefined4 param_1)

{
  func_0x00d8e080(param_1,1);
  return 0;
}



undefined4 FUN_00d83740(int param_1)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = (float10)func_0x00d8e080(param_1,1);
  dVar3 = (double)fVar1;
  if (*(int *)(param_1 + 0x10) + 8U < *(uint *)(param_1 + 0x14)) {
    fVar1 = (float10)func_0x00d8e080(param_1,2);
    dVar2 = (double)fVar1;
    func_0x00e879c5();
    func_0x00e879c5();
    *(double *)(*(int *)(param_1 + 0x10) + -8) = (1.0 / dVar2) * dVar3;
    return 2;
  }
  return 0;
}



undefined4 FUN_00d837c0(undefined4 param_1)

{
  func_0x00d8e080(param_1,1);
  func_0x00d8e080(param_1,2);
  return 0;
}



undefined4 FUN_00d837e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    func_0x00d8e080(param_1,iVar1);
  } while ((uint)(*(int *)(param_1 + 0x10) + iVar1 * 8) < *(uint *)(param_1 + 0x14));
  return 0;
}



undefined4 FUN_00d83810(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined8 uStack_60;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  uStack_60 = (double)FUN_00d80620();
  uStack_60 = uStack_60 - 1.0;
  if (0 < iVar1) {
    fVar2 = (float10)func_0x00d8e080(param_1,1);
    if (iVar1 == 1) {
      fVar3 = (float10)func_0x0044eb31((double)fVar2 * uStack_60);
      fVar3 = fVar3 + (float10)1.0;
    }
    else {
      fVar3 = (float10)func_0x00d8e080(param_1,2);
      fVar3 = (float10)func_0x0044eb31((((double)fVar3 - (double)fVar2) + 1.0) * uStack_60);
      fVar3 = fVar3 + (float10)(double)fVar2;
    }
    uStack_60 = (double)fVar3;
  }
  **(double **)(param_1 + 0x14) = uStack_60;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  return 1;
}



undefined4 FUN_00d838f0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 0x18);
  fVar3 = (float10)func_0x00d8e080(param_1,1);
  dVar4 = (double)fVar3 * 3.141592653589793 + 2.718281828459045;
  uStack_4 = (int)((ulonglong)dVar4 >> 0x20);
  uStack_8 = SUB84(dVar4,0);
  dVar5 = dVar4;
  if ((uStack_4 == 0) && (uStack_8 < 2)) {
    dVar5 = (double)(ulonglong)CONCAT14(0xfffffffd < uStack_8,uStack_8 + 2);
  }
  *(double *)(iVar1 + 0x18) = dVar5;
  dVar4 = dVar4 * 3.141592653589793 + 2.718281828459045;
  uStack_4 = (int)((ulonglong)dVar4 >> 0x20);
  uStack_8 = SUB84(dVar4,0);
  dVar5 = dVar4;
  if ((uStack_4 == 0) && (uStack_8 < 0x40)) {
    dVar5 = (double)(ulonglong)CONCAT14(0xffffffbf < uStack_8,uStack_8 + 0x40);
  }
  *(double *)(iVar1 + 0x20) = dVar5;
  dVar4 = dVar4 * 3.141592653589793 + 2.718281828459045;
  uStack_4 = (int)((ulonglong)dVar4 >> 0x20);
  uStack_8 = SUB84(dVar4,0);
  dVar5 = dVar4;
  if ((uStack_4 == 0) && (uStack_8 < 0x200)) {
    dVar5 = (double)(ulonglong)CONCAT14(0xfffffdff < uStack_8,uStack_8 + 0x200);
  }
  *(double *)(iVar1 + 0x28) = dVar5;
  dVar5 = dVar4 * 3.141592653589793 + 2.718281828459045;
  uStack_4 = (int)((ulonglong)dVar5 >> 0x20);
  uStack_8 = SUB84(dVar5,0);
  if ((uStack_4 == 0) && (uStack_8 < 0x20000)) {
    dVar5 = (double)(ulonglong)CONCAT14(0xfffdffff < uStack_8,uStack_8 + 0x20000);
  }
  iVar2 = 10;
  *(double *)(iVar1 + 0x30) = dVar5;
  do {
    func_0x00d804e0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}



undefined4 FUN_00d83a00(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00d66480(param_1,0x20);
  *puVar1 = 0xa345b8c;
  puVar1[1] = 0xa0d27757;
  puVar1[2] = 0x5d4aa64f;
  puVar1[3] = 0x764a296c;
  puVar1[4] = 0x70adeaa;
  puVar1[5] = 0x51220704;
  puVar1[6] = 0xa7b7b927;
  puVar1[7] = 0x2a2717b5;
  func_0x00d8e4c0(param_1,&DAT_010cb788,&DAT_010cc3f0,&PTR_FUN_010cc3d0);
  return 1;
}



int FUN_00d83a70(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  iVar2 = func_0x00d8e1f0(param_1,1);
  iVar5 = *(int *)(iVar2 + 0x10);
  iVar3 = func_0x00d8e2e0(param_1,2,1);
  iVar4 = func_0x00d8e2e0(param_1,3,iVar3);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1 + iVar5;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1 + iVar5;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  if (iVar4 <= iVar5) {
    iVar5 = iVar4;
  }
  if (iVar3 <= iVar5) {
    uVar7 = iVar5 - (iVar3 + -1);
    if (8000 < uVar7) {
      func_0x00d67660(param_1,0x6bc);
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) <= (int)(uVar7 * 8)) {
      func_0x00d6bf10();
    }
    iVar5 = 0;
    iVar2 = iVar2 + 0x14 + iVar3 + -1;
    if (3 < (int)uVar7) {
      iVar3 = 0;
      pbVar6 = (byte *)(iVar2 + 2);
      do {
        iVar3 = iVar3 + 0x20;
        *(double *)(*(int *)(param_1 + 0x10) + -0x28 + iVar3) = (double)pbVar6[-2];
        *(double *)(*(int *)(param_1 + 0x10) + iVar5 * 8) = (double)pbVar6[-1];
        *(double *)(*(int *)(param_1 + 0x10) + 8 + iVar5 * 8) = (double)*pbVar6;
        *(double *)(*(int *)(param_1 + 0x10) + 0x10 + iVar5 * 8) = (double)pbVar6[1];
        iVar5 = iVar5 + 4;
        pbVar6 = pbVar6 + 4;
      } while (iVar5 < (int)(uVar7 - 3));
    }
    for (; iVar5 < (int)uVar7; iVar5 = iVar5 + 1) {
      *(double *)(*(int *)(param_1 + 0x10) + -8 + iVar5 * 8) = (double)*(byte *)(iVar2 + iVar5);
    }
    return uVar7 + 1;
  }
  return 1;
}



undefined4 FUN_00d83bb0(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  iVar2 = func_0x00d757f0();
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      uVar3 = func_0x00d8df80(param_1,iVar5);
      if (uVar3 != (uVar3 & 0xff)) {
        func_0x00d67530(param_1,iVar5,0x219);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      *(char *)(iVar5 + -1 + iVar2) = (char)uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar6);
  }
  uVar4 = FUN_00d6e6c0(param_1,iVar2,iVar6);
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + -8) = uVar4;
  *(undefined4 *)(iVar2 + -4) = 0xfffffffb;
  return 2;
}



undefined4 FUN_00d83c20(int param_1)

{
  int iVar1;
  
  func_0x00d8e1f0(param_1,1);
  func_0x00d8df80(param_1,2);
  iVar1 = func_0x00d8e2e0(param_1,3,0xffffffff);
  *(double *)(*(int *)(param_1 + 0x10) + 0x10) = (double)iVar1;
  return 0;
}



undefined4 FUN_00d83c60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  uVar2 = func_0x00d8e1f0(param_1,1);
  iVar3 = func_0x00d8df80(param_1,2);
  iVar4 = func_0x00d8e340(param_1,3);
  iVar1 = *(int *)(param_1 + 8);
  puVar6 = (undefined4 *)(iVar1 + 0x80);
  *(int *)(iVar1 + 0x8c) = param_1;
  *puVar6 = *(undefined4 *)(iVar1 + 0x88);
  if ((iVar4 != 0) && (1 < iVar3)) {
    uVar2 = func_0x00d75920(param_1,iVar4,uVar2);
    *puVar6 = *(undefined4 *)(iVar1 + 0x88);
    FUN_00d75420();
    iVar3 = iVar3 + -1;
  }
  piVar5 = (int *)FUN_00d759e0(puVar6,uVar2,iVar3);
  uVar2 = FUN_00d6e6c0(param_1,piVar5[2],*piVar5 - piVar5[2]);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + -8) = uVar2;
  *(undefined4 *)(iVar1 + -4) = 0xfffffffb;
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00d83d10(undefined4 param_1)

{
  func_0x00d8e1f0(param_1,1);
  return 0;
}



undefined4 FUN_00d83d30(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar3 = func_0x00d8df50(param_1,1);
  if ((*(int *)(param_1 + 0x10) + 8U < *(uint *)(param_1 + 0x14)) &&
     (*(uint *)(*(int *)(param_1 + 0x10) + 0xc) < 0xfffffffe)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  piVar5 = (int *)(iVar1 + 0x80);
  *(int *)(iVar1 + 0x8c) = param_1;
  *piVar5 = *(int *)(iVar1 + 0x88);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
  if (*(char *)(iVar3 + 6) == '\0') {
    iVar3 = func_0x00d779c0(param_1,*(int *)(iVar3 + 0x10) + -0x40,FUN_00d84e00,piVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = FUN_00d6e6c0(param_1,*(int *)(iVar1 + 0x88),*piVar5 - *(int *)(iVar1 + 0x88));
      iVar3 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar3 + -8) = uVar4;
      *(undefined4 *)(iVar3 + -4) = 0xfffffffb;
      if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
        func_0x00d6c6d0();
      }
      return 1;
    }
  }
  func_0x00d67660(param_1,0x69e);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



void FUN_00d83de0(undefined4 param_1)

{
  func_0x00d84c10(param_1,1);
  return;
}



void FUN_00d83df0(undefined4 param_1)

{
  func_0x00d84c10(param_1,0);
  return;
}



undefined4 FUN_00d83e00(int param_1)

{
  int iVar1;
  
  func_0x00d8e1f0(param_1,1);
  func_0x00d8e1f0(param_1,2);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x14) = iVar1 + 0x18;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  func_0x00d8e480(param_1,FUN_00d842a0,0x56,3);
  return 1;
}



void FUN_00d83e50(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_338 [3];
  char cStack_335;
  undefined4 uStack_334;
  int iStack_330;
  int iStack_32c;
  char *pcStack_328;
  undefined1 *puStack_324;
  undefined1 *puStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  uint *apuStack_210 [131];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_338;
  uStack_334 = param_1;
  puVar3 = (undefined1 *)func_0x00d656e0(param_1,1,&iStack_330);
  pcVar4 = (char *)func_0x00d656e0(param_1,2,0);
  iVar5 = func_0x00d67010(param_1,3);
  iStack_32c = func_0x00d659b0(param_1,4,iStack_330 + 1);
  uVar2 = uStack_334;
  cStack_335 = *pcVar4;
  pcStack_328 = pcVar4 + 1;
  if (cStack_335 != '^') {
    pcStack_328 = pcVar4;
  }
  iVar7 = 0;
  if ((((iVar5 != 3) && (iVar5 != 4)) && (iVar5 != 6)) && (iVar5 != 5)) {
    func_0x00d67530(uStack_334,3,0x290);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  func_0x00d69470(uStack_334,apuStack_210);
  iVar5 = iStack_32c;
  uStack_31c = uVar2;
  puStack_320 = puVar3 + iStack_330;
  puVar6 = puVar3;
  puStack_324 = puVar3;
  if (iStack_32c < 1) {
LAB_00d83fa8:
    func_0x00d69370(apuStack_210,puVar6,(int)puStack_320 - (int)puVar6);
    func_0x00d69a50(apuStack_210);
    func_0x00d66720(uStack_334,iVar7);
    FUN_008ab370();
    return;
  }
  do {
    uStack_314 = 0;
    uStack_318 = 0;
    puVar6 = (undefined1 *)func_0x00d843e0(&puStack_324,puVar3,pcStack_328);
    if (puVar6 == (undefined1 *)0x0) {
LAB_00d83f58:
      puVar6 = puVar3;
      if (puStack_320 <= puVar3) goto LAB_00d83fa8;
      if (&uStack_4 <= apuStack_210[0]) {
        func_0x00d69990(apuStack_210);
      }
      *(undefined1 *)apuStack_210[0] = *puVar3;
      apuStack_210[0] = (uint *)((int)apuStack_210[0] + 1);
      puVar6 = puVar3 + 1;
    }
    else {
      iVar7 = iVar7 + 1;
      func_0x00d84080(&puStack_324,apuStack_210,puVar3,puVar6);
      if (puVar6 <= puVar3) goto LAB_00d83f58;
    }
    if ((cStack_335 == '^') || (puVar3 = puVar6, iVar5 <= iVar7)) goto LAB_00d83fa8;
  } while( true );
}



undefined4 FUN_00d84010(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + 8);
    piVar4 = (int *)(iVar1 + 0x80);
    *(int *)(iVar1 + 0x8c) = param_1;
    *piVar4 = *(int *)(iVar1 + 0x88);
    iVar3 = func_0x00d74730(param_1,piVar4,1,-iVar3);
  } while (0 < iVar3);
  uVar2 = FUN_00d6e6c0(param_1,*(int *)(iVar1 + 0x88),*piVar4 - *(int *)(iVar1 + 0x88));
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + -8) = uVar2;
  *(undefined4 *)(iVar3 + -4) = 0xfffffffb;
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



void FUN_00d842a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iStack_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_118;
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + -8);
  iVar4 = *(int *)(iVar2 + 0x20);
  iStack_110 = param_1;
  iVar1 = *(int *)(iVar2 + 0x18) + 0x14;
  uVar5 = *(int *)(iVar2 + 0x28) + iVar1;
  uStack_114 = *(int *)(*(int *)(iVar2 + 0x18) + 0x10) + iVar1;
  iStack_118 = iVar1;
  if (uVar5 <= uStack_114) {
    do {
      uStack_108 = 0;
      uStack_10c = 0;
      uVar3 = func_0x00d843e0(&iStack_118,uVar5,iVar4 + 0x14);
      if (uVar3 != 0) {
        iVar4 = (uVar3 - iVar1) + 1;
        if (uVar3 != uVar5) {
          iVar4 = uVar3 - iVar1;
        }
        *(int *)(iVar2 + 0x28) = iVar4;
        func_0x00d84a80(&iStack_118,uVar5,uVar3);
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= uStack_114);
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00d84360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  func_0x00d8e4c0(param_1,"string",&DAT_010cc530,&PTR_FUN_010cc500);
  iVar3 = func_0x00d6f2a0(param_1,0,1);
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(iVar1 + 0x188) = iVar3;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + -8);
  puVar4 = (undefined4 *)func_0x00d6fab0(param_1,iVar3,*(undefined4 *)(iVar1 + 0x120));
  *puVar4 = uVar2;
  puVar4[1] = 0xfffffff4;
  *(undefined1 *)(iVar3 + 6) = 0xfe;
  func_0x00d8e430(param_1,"string.buffer",FUN_00da5a50,
                  *(undefined4 *)(*(int *)(param_1 + 0x14) + -8));
  return 1;
}



undefined4 FUN_00d84e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00d759a0(param_4,param_2,param_3);
  return 0;
}



undefined4 FUN_00d84e20(int param_1)

{
  double dVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  
  iVar2 = func_0x00d8e270(param_1,1);
  dVar6 = 0.0;
  iVar4 = *(int *)(iVar2 + 0x18) + -1;
  if (-1 < iVar4) {
    piVar5 = (int *)(*(int *)(iVar2 + 8) + iVar4 * 8 + 4);
    do {
      if (*piVar5 != -1) {
        dVar6 = (double)iVar4;
        break;
      }
      piVar5 = piVar5 + -2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(iVar2 + 0x1c);
  if (-1 < iVar4) {
    puVar3 = (uint *)(iVar4 * 0x18 + 0xc + *(int *)(iVar2 + 0x14));
    do {
      dVar1 = dVar6;
      if (((puVar3[-2] != 0xffffffff) && (*puVar3 < 0xfffffff3)) &&
         (dVar1 = *(double *)(puVar3 + -1), *(double *)(puVar3 + -1) <= dVar6)) {
        dVar1 = dVar6;
      }
      dVar6 = dVar1;
      puVar3 = puVar3 + -6;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(double *)(*(int *)(param_1 + 0x14) + -8) = dVar6;
  return 1;
}



undefined4 FUN_00d84ea0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piStack_c;
  
  iVar3 = func_0x00d8e270(param_1,1);
  uVar4 = FUN_00d6efb0();
  uVar11 = uVar4 + 1;
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  uVar6 = uVar11;
  if (iVar5 != 0x10) {
    if (iVar5 != 0x18) {
      func_0x00d67660(param_1,0x5a5);
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
    uVar6 = func_0x00d8df80(param_1,2);
    for (; (int)uVar6 < (int)uVar11; uVar11 = uVar11 - 1) {
      piStack_c = (int *)(iVar3 + 8);
      if (uVar11 < *(uint *)(iVar3 + 0x18)) {
        puVar10 = (undefined4 *)(*piStack_c + uVar11 * 8);
      }
      else {
        puVar10 = (undefined4 *)func_0x00d6fa20(param_1,iVar3,uVar11);
      }
      if (uVar4 < *(uint *)(iVar3 + 0x18)) {
        puVar7 = (undefined4 *)(*piStack_c + -8 + uVar11 * 8);
      }
      else {
        puVar7 = (undefined4 *)func_0x00d6ee90();
      }
      if (puVar7 == (undefined4 *)0x0) {
        puVar10[1] = 0xffffffff;
      }
      else {
        uVar9 = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[1] = uVar9;
      }
      uVar4 = uVar4 - 1;
    }
  }
  if (uVar6 < *(uint *)(iVar3 + 0x18)) {
    piVar8 = (int *)(*(int *)(iVar3 + 8) + uVar6 * 8);
  }
  else {
    piVar8 = (int *)func_0x00d6fa20(param_1,iVar3,uVar6);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + -8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + -4);
  piVar8[1] = iVar1;
  *piVar8 = iVar5;
  if (((0xfffffff6 < iVar1 + 4U) && ((*(byte *)(iVar5 + 4) & 3) != 0)) &&
     ((*(byte *)(iVar3 + 4) & 4) != 0)) {
    iVar5 = *(int *)(param_1 + 8);
    *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xfb;
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 0x24);
    *(int *)(iVar5 + 0x24) = iVar3;
  }
  return 0;
}



undefined4 FUN_00d84fe0(int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  
  iVar4 = func_0x00d8e270(param_1,1);
  uVar5 = func_0x00d8e340(param_1,2);
  uVar6 = func_0x00d8e2e0(param_1,3,1);
  if ((*(int *)(param_1 + 0x10) + 0x18U < *(uint *)(param_1 + 0x14)) &&
     (*(int *)(*(int *)(param_1 + 0x10) + 0x1c) != -1)) {
    uVar7 = func_0x00d8df80(param_1,4);
  }
  else {
    uVar7 = FUN_00d6efb0();
  }
  iVar1 = *(int *)(param_1 + 8);
  puVar10 = (uint *)(iVar1 + 0x80);
  *(int *)(iVar1 + 0x8c) = param_1;
  *puVar10 = *(uint *)(iVar1 + 0x88);
  piVar8 = (int *)FUN_00d75aa0(puVar10,iVar4,uVar5,uVar6,uVar7);
  if (piVar8 != (int *)0x0) {
    uVar5 = FUN_00d6e6c0(param_1,piVar8[2],*piVar8 - piVar8[2]);
    iVar4 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar4 + -8) = uVar5;
    *(undefined4 *)(iVar4 + -4) = 0xfffffffb;
    if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    return 1;
  }
  uVar2 = *puVar10;
  if (uVar2 < *(uint *)(iVar4 + 0x18)) {
    iVar4 = *(int *)(iVar4 + 8) + uVar2 * 8;
  }
  else {
    iVar4 = func_0x00d6ee90();
  }
  if (iVar4 == 0) {
    uVar9 = 0;
  }
  else if (*(uint *)(iVar4 + 4) < 0xfffffff3) {
    uVar9 = 0xd;
  }
  else {
    uVar9 = ~*(uint *)(iVar4 + 4);
  }
  func_0x00d67710(param_1,0x5cb,(&PTR_DAT_010cb7d8)[uVar9],uVar2);
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}



undefined4 FUN_00d850e0(int param_1)

{
  undefined4 uVar1;
  
  func_0x00d8e270(param_1,1);
  uVar1 = FUN_00d6efb0();
  func_0x00d66d90(param_1,2);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) != -1) {
    func_0x00d8df50(param_1,2);
  }
  func_0x00d85130(param_1,1,uVar1);
  return 0;
}



undefined4 FUN_00d854d0(undefined4 param_1)

{
  func_0x00d8e270(param_1,1);
  FUN_00d6ecb0();
  return 0;
}



undefined4 FUN_00d854f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0x00d8df80(param_1,1);
  uVar2 = func_0x00d8df80(param_1,2);
  func_0x00d65e70(param_1,uVar1,uVar2);
  return 1;
}



undefined4 FUN_00d85520(int param_1)

{
  func_0x00d8e4c0(param_1,"table",&DAT_010cc5d0,&PTR_FUN_010cc5c0);
  func_0x00d8e430(param_1,"table.new",FUN_00d85590,*(undefined4 *)(*(int *)(param_1 + 0x14) + -8));
  func_0x00d8e430(param_1,"table.clear",FUN_00d85570,*(undefined4 *)(*(int *)(param_1 + 0x14) + -8))
  ;
  return 1;
}



void FUN_00d85570(undefined4 param_1)

{
  func_0x00d8e390(param_1,FUN_00d854d0,0x5f,"clear");
  return;
}



void FUN_00d85590(undefined4 param_1)

{
  func_0x00d8e390(param_1,FUN_00d854f0,0x5e,&DAT_010cc7cc);
  return;
}



void FUN_00d85620(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int extraout_ECX;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 < *(int **)(param_1 + 0x14)) {
    if ((piVar3[1] != -0xd) || (*(char *)(*piVar3 + 6) != '\x01')) goto LAB_00d85669;
    piVar3 = (int *)(*piVar3 + 0x18);
    iVar1 = *piVar3;
  }
  else {
    piVar3 = (int *)(*(int *)(*(int *)(param_1 + 8) + 0x1b4) + 0x18);
    iVar1 = *piVar3;
  }
  if (iVar1 != 0) {
    func_0x00d85da0(param_1,piVar3);
    return;
  }
  func_0x00d67660(param_1,0x623);
  param_1 = extraout_ECX;
LAB_00d85669:
  func_0x00d67570(param_1,1,"FILE*");
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_00d85680(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (((piVar2 < *(int **)(param_1 + 0x14)) && (piVar2[1] == -0xd)) &&
     (*(char *)(*piVar2 + 6) == '\x01')) {
    piVar2 = (int *)(*piVar2 + 0x18);
    if (*piVar2 != 0) {
      func_0x00d85f50(param_1,piVar2,1);
      return;
    }
  }
  else {
    param_1 = func_0x00d67570(param_1,1,"FILE*");
  }
  func_0x00d67660(param_1,0x623);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d856d0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (((piVar2 < *(int **)(param_1 + 0x14)) && (piVar2[1] == -0xd)) &&
     (*(char *)(*piVar2 + 6) == '\x01')) {
    piVar2 = (int *)(*piVar2 + 0x18);
    if (*piVar2 != 0) {
      func_0x00d86310(param_1,piVar2,1);
      return;
    }
  }
  else {
    param_1 = func_0x00d67570(param_1,1,"FILE*");
  }
  func_0x00d67660(param_1,0x623);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d85720(int param_1)

{
  int *piVar1;
  FILE *_File;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (*(char *)(*piVar1 + 6) == '\x01')) {
    _File = *(FILE **)(*piVar1 + 0x18);
    if (_File != (FILE *)0x0) {
      uVar4 = 0;
      iVar3 = fflush(_File);
      func_0x00d69490(param_1,iVar3 == 0,uVar4);
      return;
    }
  }
  else {
    func_0x00d67570(param_1,1,"FILE*");
  }
  func_0x00d67660(param_1,0x623);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 FUN_00d85780(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (*(char *)(*piVar1 + 6) == '\x01')) {
    iVar2 = *(int *)(*piVar1 + 0x18);
    if (iVar2 != 0) {
      iVar5 = func_0x00d8e0d0(param_1,2,1,&DAT_010cc8f8);
      uVar8 = 0;
      if (((iVar5 != 0) && (iVar5 != 1)) && (iVar5 == 2)) {
        iVar5 = 2;
      }
      puVar6 = (undefined8 *)(*(int *)(param_1 + 0x10) + 0x10);
      if (puVar6 < *(undefined8 **)(param_1 + 0x14)) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
        if (uVar3 < 0xfffffff2) {
          uVar8 = *puVar6;
          uVar9 = func_0x008abe00();
          goto LAB_00d85814;
        }
        if (uVar3 != 0xffffffff) goto LAB_00d85874;
      }
      uVar9 = 0;
LAB_00d85814:
      iVar5 = func_0x008aafd8(iVar2,uVar9,iVar5);
      if (iVar5 == 0) {
        func_0x00e87be8(iVar2);
        func_0x008abf00();
        *(undefined8 *)(*(int *)(param_1 + 0x14) + -8) = uVar8;
        return 1;
      }
      uVar7 = func_0x00d69490(param_1,0,0);
      return uVar7;
    }
  }
  else {
    func_0x00d67570(param_1,1,"FILE*");
  }
  func_0x00d67660(param_1,0x623);
LAB_00d85874:
  func_0x00d67550(param_1,3,3);
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return uVar7;
}



void FUN_00d85880(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (*(char *)(*piVar1 + 6) == '\x01')) {
    iVar5 = *(int *)(*piVar1 + 0x18);
    if (iVar5 != 0) {
      iVar3 = func_0x00d8e0d0(param_1,2,0xffffffff,&DAT_010cc908);
      uVar4 = func_0x00d8e2e0(param_1,3,0x200);
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          iVar3 = 0x40;
        }
        else if (iVar3 == 2) {
          iVar3 = 4;
        }
      }
      iVar5 = func_0x008aafc6(iVar5,0,iVar3,uVar4,0);
      func_0x00d69490(param_1,iVar5 == 0);
      return;
    }
  }
  else {
    func_0x00d67570(param_1,1,"FILE*");
  }
  func_0x00d67660(param_1,0x623);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 FUN_00d85920(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (*(char *)(*piVar1 + 6) == '\x01')) {
    if (*(int *)(*piVar1 + 0x18) != 0) {
      iVar4 = (int)*(int **)(param_1 + 0x14) - (int)piVar1 >> 3;
      if (iVar4 < 0x3d) {
        func_0x00d66660(param_1,FUN_00d85e20,iVar4);
        return 1;
      }
      goto LAB_00d8597b;
    }
  }
  else {
    param_1 = func_0x00d67570(param_1,1,"FILE*");
  }
  param_1 = func_0x00d67660(param_1,0x623);
LAB_00d8597b:
  func_0x00d67660(param_1,0x417);
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}



undefined4 FUN_00d85990(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x01')) {
    if ((*(int *)(iVar2 + 0x18) != 0) && (((byte)*(undefined4 *)(iVar2 + 0x1c) & 3) != 2)) {
      func_0x00d85da0(param_1,(int *)(iVar2 + 0x18));
    }
    return 0;
  }
  func_0x00d67570(param_1,1,"FILE*");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00d859e0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (*(char *)(*piVar1 + 6) == '\x01')) {
    iVar2 = *(int *)(*piVar1 + 0x18);
    if (iVar2 != 0) {
      func_0x00d666f0(param_1,"file (%p)",iVar2);
      return 1;
    }
    func_0x00d66780(param_1,"file (closed)",0xd);
    return 1;
  }
  func_0x00d67570(param_1,1,"FILE*");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00d85a40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar1 = func_0x00d8e1f0(param_1,1);
  iVar2 = func_0x00d8e340(param_1,2);
  puVar5 = (undefined1 *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    puVar5 = &DAT_01198360;
  }
  piVar3 = (int *)func_0x00d66480(param_1,8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + -8);
  *(undefined1 *)(iVar2 + 6) = 1;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 8);
  *piVar3 = 0;
  piVar3[1] = 0;
  iVar2 = func_0x00e87989(iVar1 + 0x14,puVar5);
  *piVar3 = iVar2;
  if (iVar2 != 0) {
    return 1;
  }
  uVar4 = func_0x00d69490(param_1,0,iVar1 + 0x14);
  return uVar4;
}



undefined4 FUN_00d85ad0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar1 = func_0x00d8e1f0(param_1,1);
  iVar2 = func_0x00d8e340(param_1,2);
  puVar5 = (undefined1 *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    puVar5 = &DAT_01198360;
  }
  piVar3 = (int *)func_0x00d66480(param_1,8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + -8);
  *(undefined1 *)(iVar2 + 6) = 1;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 8);
  *piVar3 = 0;
  piVar3[1] = 1;
  iVar2 = func_0x00e87bfa(iVar1 + 0x14,puVar5);
  *piVar3 = iVar2;
  if (iVar2 != 0) {
    return 1;
  }
  uVar4 = func_0x00d69490(param_1,0,iVar1 + 0x14);
  return uVar4;
}



undefined4 FUN_00d85b60(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)func_0x00d66480(param_1,8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + -8);
  *(undefined1 *)(iVar2 + 6) = 1;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 8);
  *piVar1 = 0;
  piVar1[1] = 0;
  iVar2 = func_0x00e87c00();
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    return 1;
  }
  uVar3 = func_0x00d69490(param_1,0,0);
  return uVar3;
}



void FUN_00d85bc0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(*(int *)(param_1 + 8) + 0x1b0) + 0x18);
  if (*piVar2 != 0) {
    func_0x00d85f50(param_1,piVar2,0);
    return;
  }
  func_0x00d67660(param_1,0x640);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d85bf0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(*(int *)(param_1 + 8) + 0x1b4) + 0x18);
  if (*piVar2 != 0) {
    func_0x00d86310(param_1,piVar2,0);
    return;
  }
  func_0x00d67660(param_1,0x640);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d85c20(int param_1)

{
  FILE *_File;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  _File = *(FILE **)(*(int *)(*(int *)(param_1 + 8) + 0x1b4) + 0x18);
  if (_File != (FILE *)0x0) {
    uVar3 = 0;
    iVar2 = fflush(_File);
    func_0x00d69490(param_1,iVar2 == 0,uVar3);
    return;
  }
  func_0x00d67660(param_1,0x640);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00d85c60(undefined4 param_1)

{
  func_0x00d863a0(param_1,0x24,&DAT_01198360);
  return;
}



void FUN_00d85c80(undefined4 param_1)

{
  func_0x00d863a0(param_1,0x25,&DAT_0114337c);
  return;
}



undefined4 FUN_00d85ca0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4[1] == -1) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x1b0);
  }
  else {
    iVar2 = func_0x00d85ed0(param_1,&DAT_01198360);
    *(undefined4 *)(iVar2 + 4) = 4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -8;
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    uVar3 = **(undefined4 **)(param_1 + 0x14);
  }
  puVar4[1] = 0xfffffff3;
  *puVar4 = uVar3;
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  if (iVar2 < 0x3d) {
    func_0x00d66660(param_1,FUN_00d85e20,iVar2);
    return 1;
  }
  func_0x00d67660(param_1,0x417);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



undefined4 FUN_00d85d30(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)func_0x00d8df20(param_1,1);
  if ((piVar1[1] == -0xd) && (*(char *)(*piVar1 + 6) == '\x01')) {
    if (*(int *)(*piVar1 + 0x18) != 0) {
      func_0x00d66780(param_1,&DAT_0113c44c,4);
      return 1;
    }
    func_0x00d66780(param_1,"closed file",0xb);
    return 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  return 1;
}



undefined4 FUN_00d85e20(int param_1)

{
  size_t _Size;
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(iVar5 + -8);
  iVar2 = *(int *)(iVar1 + 0x18);
  piVar7 = (int *)(iVar2 + 0x18);
  iVar6 = *(byte *)(iVar1 + 7) - 1;
  if (*piVar7 == 0) {
    func_0x00d67660(param_1,0x623);
  }
  else {
    *(int *)(param_1 + 0x14) = iVar5;
    if (iVar6 != 0) {
      _Size = iVar6 * 8;
      if (*(int *)(param_1 + 0x18) - iVar5 <= (int)_Size) {
        func_0x00d6bf10();
      }
      memcpy(*(void **)(param_1 + 0x14),(void *)(iVar1 + 0x20),_Size);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + _Size;
    }
    uVar4 = func_0x00d85f50(param_1,piVar7,0);
    iVar5 = func_0x008ab05e(*piVar7);
    if (iVar5 == 0) {
      if ((*(int *)(*(int *)(param_1 + 0x10) + 4) == -1) && ((*(byte *)(iVar2 + 0x1c) & 4) != 0)) {
        func_0x00d85da0(param_1,piVar7);
        return 0;
      }
      return uVar4;
    }
  }
  func_0x00d67680(param_1,*(int *)(*(int *)(param_1 + 0x14) + -0x10) + 0x14);
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00d86460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  func_0x00d8e4c0(param_1,0,&DAT_010cc810,&PTR_FUN_010cc7e8);
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  *puVar3 = puVar3[-2];
  puVar3[1] = puVar3[-1];
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  func_0x00d66b60(param_1,0xffffd8f0,"FILE*");
  func_0x00d8e4c0(param_1,&DAT_010cb778,&DAT_010cc888,&PTR_FUN_010cc85c);
  uVar2 = func_0x00e8798f(0);
  puVar3 = (undefined4 *)func_0x00d66480(param_1,8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + -8);
  *(undefined1 *)(iVar1 + 6) = 1;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x14) + -0x18);
  *puVar3 = uVar2;
  puVar3[1] = 2;
  func_0x00d66b60(param_1,0xfffffffe,"stdin");
  *(int *)(*(int *)(param_1 + 8) + 0x1b0) = iVar1;
  uVar2 = func_0x00e8798f(1);
  puVar3 = (undefined4 *)func_0x00d66480(param_1,8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + -8);
  *(undefined1 *)(iVar1 + 6) = 1;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x14) + -0x18);
  *puVar3 = uVar2;
  puVar3[1] = 2;
  func_0x00d66b60(param_1,0xfffffffe,"stdout");
  *(int *)(*(int *)(param_1 + 8) + 0x1b4) = iVar1;
  uVar2 = func_0x00e8798f(2);
  puVar3 = (undefined4 *)func_0x00d66480(param_1,8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + -8);
  *(undefined1 *)(iVar1 + 6) = 1;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x14) + -0x18);
  *puVar3 = uVar2;
  puVar3[1] = 2;
  func_0x00d66b60(param_1,0xfffffffe,"stderr");
  return 1;
}



undefined4 FUN_00d86580(int param_1)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = func_0x00d65a20(param_1,1,0,0);
  iVar3 = func_0x00e87c1e(uVar2);
  pdVar1 = *(double **)(param_1 + 0x14);
  *(double **)(param_1 + 0x14) = pdVar1 + 1;
  *pdVar1 = (double)iVar3;
  return 1;
}



void FUN_00d865c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00d656e0(param_1,1,0);
  iVar2 = func_0x008aaffe(uVar1,uVar1);
  func_0x00d69490(param_1,iVar2 == 0);
  return;
}



void FUN_00d865f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = func_0x00d656e0(param_1,1,0);
  uVar2 = func_0x00d656e0(param_1,2,0);
  iVar3 = func_0x008ab00a(uVar1,uVar2,uVar1);
  func_0x00d69490(param_1,iVar3 == 0);
  return;
}



void FUN_00d86630(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_108 [260];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_108;
  iVar2 = func_0x00e87c18(auStack_108);
  if (iVar2 != 0) {
    func_0x00d66830(param_1,auStack_108);
    FUN_008ab370();
    return;
  }
  func_0x00d67660(param_1,0x658);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00d866a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00d656e0(param_1,1,0);
  uVar1 = func_0x00e87a9c(uVar1);
  func_0x00d66830(param_1,uVar1);
  return 1;
}



void FUN_00d866d0(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) &&
     ((iVar1 = *(int *)(*(uint *)(param_1 + 0x10) + 4), iVar1 == -2 || (iVar1 == -3)))) {
    uVar3 = (uint)(iVar1 == -2);
  }
  else {
    uVar3 = func_0x00d8e2e0(param_1,1,0);
  }
  if ((*(int *)(param_1 + 0x10) + 8U < *(uint *)(param_1 + 0x14)) &&
     (*(uint *)(*(int *)(param_1 + 0x10) + 0xc) < 0xfffffffe)) {
    func_0x00d6c1a0(param_1);
  }
  func_0x00e8791d(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 FUN_00d86730(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00e87c06();
  **(double **)(param_1 + 0x14) = (double)iVar1 * 0.001;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  return 1;
}



undefined4 FUN_00d86760(int param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  byte bVar11;
  byte *pbVar12;
  bool bVar13;
  undefined8 uStack_8;
  
  pbVar3 = (byte *)func_0x00d65a20(param_1,1,&DAT_010cbd10,0);
  iVar4 = func_0x00d67010(param_1,2);
  if (iVar4 < 1) {
    uStack_8 = func_0x008aaff6(0);
  }
  else {
    func_0x00d65760(param_1,2);
    uStack_8 = func_0x00e88370();
  }
  if (*pbVar3 == 0x21) {
    pbVar3 = pbVar3 + 1;
    puVar5 = (undefined4 *)func_0x008ab028();
  }
  else {
    puVar5 = (undefined4 *)func_0x008ab04c(&uStack_8);
  }
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    return 1;
  }
  pbVar12 = &DAT_010cc9dc;
  pbVar6 = pbVar3;
  do {
    bVar11 = *pbVar6;
    bVar13 = bVar11 < *pbVar12;
    if (bVar11 != *pbVar12) {
LAB_00d86820:
      uVar7 = -(uint)bVar13 | 1;
      goto LAB_00d86825;
    }
    if (bVar11 == 0) break;
    bVar11 = pbVar6[1];
    bVar13 = bVar11 < pbVar12[1];
    if (bVar11 != pbVar12[1]) goto LAB_00d86820;
    pbVar6 = pbVar6 + 2;
    pbVar12 = pbVar12 + 2;
  } while (bVar11 != 0);
  uVar7 = 0;
LAB_00d86825:
  if (uVar7 == 0) {
    func_0x00d65e70(param_1,0,9);
    func_0x00d66720(param_1,*puVar5);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010cc9e0);
    func_0x00d66720(param_1,puVar5[1]);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010087ac);
    func_0x00d66720(param_1,puVar5[2]);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010cc9e4);
    func_0x00d66720(param_1,puVar5[3]);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010cc9ec);
    func_0x00d66720(param_1,puVar5[4] + 1);
    func_0x00d66b60(param_1,0xfffffffe,"month");
    func_0x00d66720(param_1,puVar5[5] + 0x76c);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010cc9f8);
    func_0x00d66720(param_1,puVar5[6] + 1);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010cca00);
    func_0x00d66720(param_1,puVar5[7] + 1);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010cca08);
    if (-1 < (int)puVar5[8]) {
      func_0x00d66630(param_1,puVar5[8]);
      func_0x00d66b60(param_1,0xfffffffe,"isdst");
      return 1;
    }
  }
  else {
    bVar11 = *pbVar3;
    if (bVar11 == 0) {
      piVar2 = *(int **)(param_1 + 0x14);
      *(int **)(param_1 + 0x14) = piVar2 + 2;
      iVar4 = *(int *)(param_1 + 8);
      piVar2[1] = -5;
      *piVar2 = iVar4 + 0x40;
      return 1;
    }
    iVar1 = *(int *)(param_1 + 8);
    uVar7 = 0;
    iVar4 = 4;
    pbVar6 = pbVar3;
    do {
      bVar13 = bVar11 == 0x25;
      pbVar6 = pbVar6 + 1;
      bVar11 = *pbVar6;
      iVar8 = 1;
      if (bVar13) {
        iVar8 = 0x1e;
      }
      uVar7 = uVar7 + iVar8;
    } while (bVar11 != 0);
    *(int *)(iVar1 + 0x8c) = param_1;
    do {
      iVar4 = iVar4 + -1;
      iVar8 = *(int *)(iVar1 + 0x88);
      if ((uint)(*(int *)(iVar1 + 0x84) - iVar8) < uVar7) {
        iVar8 = func_0x00d753b0();
      }
      iVar9 = func_0x008ab046(iVar8,*(int *)(iVar1 + 0x84) - *(int *)(iVar1 + 0x88),pbVar3,puVar5);
      if (iVar9 != 0) {
        puVar5 = *(undefined4 **)(param_1 + 0x14);
        *(undefined4 **)(param_1 + 0x14) = puVar5 + 2;
        uVar10 = FUN_00d6e6c0(param_1,iVar8,iVar9);
        *puVar5 = uVar10;
        puVar5[1] = 0xfffffffb;
        if (*(uint *)(*(int *)(param_1 + 8) + 8) < *(uint *)(*(int *)(param_1 + 8) + 0xc)) {
          return 1;
        }
        func_0x00d6c6d0();
        return 1;
      }
      uVar7 = uVar7 + (uVar7 | 1);
    } while (iVar4 != 0);
  }
  return 1;
}



void FUN_00d86a20(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_XMM0_Qa;
  longlong lVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_28;
  iVar2 = func_0x00d67010(param_1,1);
  if (iVar2 < 1) {
    lVar4 = func_0x008aaff6();
LAB_00d86c04:
    if (lVar4 == -1) {
      func_0x00d667d0();
    }
    else {
      func_0x008abf00();
      func_0x00d667f0(param_1,in_XMM0_Qa);
    }
    FUN_008ab370();
    return;
  }
  func_0x00d65800(param_1,1,5);
  func_0x00d66d90(param_1,1);
  func_0x00d66060(param_1,0xffffffff,&DAT_010cc9e0);
  iVar2 = func_0x00d662f0(param_1,0xffffffff);
  if (iVar2 == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = func_0x00d66eb0(param_1,0xffffffff);
  }
  func_0x00d66d90(param_1,0xfffffffe);
  func_0x00d66060(param_1,0xffffffff,&DAT_010087ac);
  iVar2 = func_0x00d662f0(param_1,0xffffffff);
  if (iVar2 == 0) {
    uStack_24 = 0;
  }
  else {
    uStack_24 = func_0x00d66eb0(param_1,0xffffffff);
  }
  func_0x00d66d90(param_1,0xfffffffe);
  func_0x00d66060(param_1,0xffffffff,&DAT_010cc9e4);
  iVar2 = func_0x00d662f0(param_1,0xffffffff);
  if (iVar2 == 0) {
    uStack_20 = 0xc;
  }
  else {
    uStack_20 = func_0x00d66eb0(param_1,0xffffffff);
  }
  func_0x00d66d90(param_1,0xfffffffe);
  func_0x00d66060(param_1,0xffffffff,&DAT_010cc9ec);
  iVar2 = func_0x00d662f0(param_1,0xffffffff);
  if (iVar2 == 0) {
    func_0x00d67710(param_1,0x67d,&DAT_010cc9ec);
  }
  else {
    uVar3 = func_0x00d66eb0(param_1,0xffffffff);
    func_0x00d66d90(param_1,0xfffffffe);
    uStack_1c = uVar3;
    func_0x00d66060(param_1,0xffffffff,"month");
    iVar2 = func_0x00d662f0(param_1,0xffffffff);
    if (iVar2 == 0) goto LAB_00d86c64;
    iVar2 = func_0x00d66eb0(param_1,0xffffffff);
    func_0x00d66d90(param_1,0xfffffffe);
    iStack_18 = iVar2 + -1;
    func_0x00d66060(param_1,0xffffffff,&DAT_010cc9f8);
    iVar2 = func_0x00d662f0(param_1,0xffffffff);
    if (iVar2 != 0) {
      iVar2 = func_0x00d66eb0(param_1,0xffffffff);
      func_0x00d66d90(param_1,0xfffffffe);
      iStack_14 = iVar2 + -0x76c;
      func_0x00d66060(param_1,0xffffffff,"isdst");
      iVar2 = func_0x00d67010(param_1,0xffffffff);
      if (iVar2 == 0) {
        uStack_8 = 0xffffffff;
      }
      else {
        uStack_8 = func_0x00d66e90(param_1,0xffffffff);
      }
      func_0x00d66d90(param_1,0xfffffffe);
      lVar4 = func_0x00e87c12(&uStack_28);
      goto LAB_00d86c04;
    }
  }
  func_0x00d67710(param_1,0x67d,&DAT_010cc9f8);
LAB_00d86c64:
  func_0x00d67710(param_1,0x67d,"month");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00d86c80(undefined4 param_1)

{
  float10 fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00d65ad0(param_1,2,0);
  uVar2 = func_0x00e88370();
  func_0x00d65760(param_1,1);
  uVar3 = func_0x00e88370();
  fVar1 = (float10)func_0x00e87c0c(uVar3,uVar2);
  func_0x00d667f0(param_1,(double)fVar1);
  return 1;
}



undefined4 FUN_00d86cf0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00d8e340(param_1,1);
  iVar2 = func_0x00d8e0d0(param_1,2,6,&DAT_010cca18);
  if (iVar2 == 0) {
    iVar2 = 2;
  }
  else if (iVar2 == 1) {
    iVar2 = 4;
  }
  else if (iVar2 == 2) {
    iVar2 = 5;
  }
  else if (iVar2 == 3) {
    iVar2 = 1;
  }
  else if (iVar2 == 4) {
    iVar2 = 3;
  }
  else if (iVar2 == 6) {
    iVar2 = 0;
  }
  uVar3 = func_0x00e87c24(iVar2,-(uint)(iVar1 != 0) & iVar1 + 0x14U);
  func_0x00d66830(param_1,uVar3);
  return 1;
}



undefined4 FUN_00d86d80(undefined4 param_1)

{
  func_0x00d8e4c0(param_1,&DAT_010cb77c,&DAT_010cc988,&PTR_FUN_010cc958);
  return 1;
}



undefined4 FUN_00d86db0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar1 = func_0x00d656e0(param_1,1,0);
  uVar2 = func_0x00d656e0(param_1,2,0);
  iVar3 = func_0x00d87660(param_1,uVar1,uVar2,1);
  if (iVar3 == 0) {
    return 1;
  }
  func_0x00d667d0(param_1);
  func_0x00d66260(param_1,0xfffffffe);
  puVar4 = &DAT_0113da50;
  if (iVar3 != 1) {
    puVar4 = &DAT_01093ec0;
  }
  func_0x00d66830(param_1,puVar4);
  return 3;
}



undefined4 FUN_00d86e20(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00d65a20(param_1,4,&DAT_01141648,0);
  uVar1 = func_0x00d65a20(param_1,3,&DAT_0113c6d8,0,uVar1);
  uVar1 = func_0x00d656e0(param_1,2,0,uVar1);
  uVar1 = func_0x00d656e0(param_1,1,0,uVar1);
  iVar2 = func_0x00d87a90(param_1,uVar1);
  if (iVar2 != 0) {
    return 1;
  }
  func_0x00d667d0(param_1);
  func_0x00d66260(param_1,0xfffffffe);
  return 2;
}



undefined4 FUN_00d86ea0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00d656e0(param_1,1,0);
  func_0x00d66060(param_1,0xffffd8ef,&DAT_010506f8);
  iVar2 = func_0x00d66f10(param_1,0xffffffff,0);
  if (iVar2 == 0) {
    func_0x00d67b30(param_1,"\'package.%s\' must be a string",&DAT_010506f8);
  }
  iVar2 = func_0x00d87a90(param_1,uVar1,iVar2,&DAT_0113c6d8,&DAT_01141648);
  if (iVar2 != 0) {
    iVar3 = func_0x00d6b970(param_1,iVar2);
    if (iVar3 != 0) {
      uVar1 = func_0x00d66f10(param_1,0xffffffff,0);
      uVar1 = func_0x00d66f10(param_1,1,0,iVar2,uVar1);
      func_0x00d67b30(param_1,"error loading module \'%s\' from file \'%s\':\n\t%s",uVar1);
    }
  }
  return 1;
}



undefined4 FUN_00d86f50(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00d656e0(param_1,1,0);
  func_0x00d66060(param_1,0xffffd8ef,"cpath");
  iVar2 = func_0x00d66f10(param_1,0xffffffff,0);
  if (iVar2 == 0) {
    func_0x00d67b30(param_1,"\'package.%s\' must be a string","cpath");
  }
  iVar2 = func_0x00d87a90(param_1,uVar1,iVar2,&DAT_0113c6d8,&DAT_01141648);
  if (iVar2 != 0) {
    iVar3 = func_0x00d87660(param_1,iVar2,uVar1,0);
    if (iVar3 != 0) {
      uVar1 = func_0x00d66f10(param_1,0xffffffff,0);
      uVar1 = func_0x00d66f10(param_1,1,0,iVar2,uVar1);
      func_0x00d67b30(param_1,"error loading module \'%s\' from file \'%s\':\n\t%s",uVar1);
    }
  }
  return 1;
}



undefined4 FUN_00d87000(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = func_0x00d656e0(param_1,1,0);
  iVar2 = func_0x008ab0c6(iVar1,0x2e);
  if (iVar2 == 0) {
    return 0;
  }
  func_0x00d66780(param_1,iVar1,iVar2 - iVar1);
  uVar3 = func_0x00d66f10(param_1,0xffffffff,0,"cpath");
  iVar2 = func_0x00d87570(param_1,uVar3);
  if (iVar2 != 0) {
    iVar4 = func_0x00d87660(param_1,iVar2,iVar1,0);
    if (iVar4 != 0) {
      if (iVar4 != 2) {
        func_0x00d87800(param_1,iVar2);
      }
      func_0x00d666f0(param_1,"\n\tno module \'%s\' in file \'%s\'",iVar1,iVar2);
    }
  }
  return 1;
}



undefined4 FUN_00d87090(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  LPCSTR lpProcName;
  FARPROC pFVar5;
  BOOL BVar6;
  HMODULE pHStack_4;
  
  iVar1 = func_0x00d656e0(param_1,1,0);
  func_0x00d66060(param_1,0xffffd8ef,"preload");
  iVar2 = func_0x00d67010(param_1,0xffffffff);
  if (iVar2 != 5) {
    func_0x00d67b30(param_1,"\'package.preload\' must be a table");
  }
  func_0x00d66060(param_1,0xffffffff,iVar1);
  iVar2 = func_0x00d67010(param_1,0xffffffff);
  if (iVar2 != 0) {
    return 1;
  }
  iVar3 = func_0x008ab0c6(iVar1,0x2d);
  iVar2 = iVar3 + 1;
  if (iVar3 == 0) {
    iVar2 = iVar1;
  }
  uVar4 = func_0x00d69610(param_1,iVar2,&DAT_0113c6d8,&DAT_00fb8b8c);
  lpProcName = (LPCSTR)func_0x00d666f0(param_1,"luaJIT_BC_%s",uVar4);
  func_0x00d66a80(param_1,0xfffffffe);
  pHStack_4 = GetModuleHandleA((LPCSTR)0x0);
  pFVar5 = GetProcAddress(pHStack_4,lpProcName);
  if (((pFVar5 != (FARPROC)0x0) ||
      ((BVar6 = GetModuleHandleExA(6,(LPCSTR)FUN_00d87600,&pHStack_4), BVar6 != 0 &&
       (pFVar5 = GetProcAddress(pHStack_4,lpProcName), pFVar5 != (FARPROC)0x0)))) &&
     (iVar2 = func_0x00d6b810(param_1,pFVar5,0xffffffff,iVar1), iVar2 == 0)) {
    return 1;
  }
  func_0x00d666f0(param_1,"\n\tno field package.preload[\'%s\']",iVar1);
  return 1;
}



undefined4 FUN_00d871a0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = func_0x00d656e0(param_1,1,0);
  func_0x00d66d90(param_1,1);
  func_0x00d66060(param_1,0xffffd8f0,"_LOADED");
  func_0x00d66060(param_1,2,uVar3);
  iVar4 = func_0x00d66e90(param_1,0xffffffff);
  if (iVar4 == 0) {
    func_0x00d66060(param_1,0xffffd8ef,"loaders");
    iVar4 = func_0x00d67010(param_1,0xffffffff);
    if (iVar4 != 5) {
      func_0x00d67b30(param_1,"\'package.loaders\' must be a table");
    }
    func_0x00d66780(param_1,&DAT_0112e1b4,0);
    iVar4 = 1;
    while( true ) {
      func_0x00d66960(param_1,0xfffffffe,iVar4);
      iVar5 = func_0x00d67010(param_1,0xffffffff);
      if (iVar5 == 0) {
        uVar6 = func_0x00d66f10(param_1,0xfffffffe,0);
        func_0x00d67b30(param_1,"module \'%s\' not found:%s",uVar3,uVar6);
      }
      func_0x00d66830(param_1,uVar3);
      func_0x00d65d20(param_1,1,1);
      iVar5 = func_0x00d67010(param_1,0xffffffff);
      if (iVar5 == 6) break;
      iVar5 = func_0x00d66340(param_1,0xffffffff);
      if (iVar5 == 0) {
        func_0x00d66d90(param_1,0xfffffffe);
        iVar4 = iVar4 + 1;
      }
      else {
        func_0x00d65da0(param_1,2);
        iVar4 = iVar4 + 1;
      }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    *puVar1 = 0x73;
    puVar1[1] = 0x80000000;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    func_0x00d66b60(param_1,2,uVar3);
    func_0x00d66830(param_1,uVar3);
    func_0x00d65d20(param_1,1,1);
    iVar4 = func_0x00d67010(param_1,0xffffffff);
    if (iVar4 != 0) {
      func_0x00d66b60(param_1,2,uVar3);
    }
    func_0x00d66060(param_1,2,uVar3);
    if ((*(int *)(*(int *)(param_1 + 0x14) + -8) == 0x73) &&
       (*(int *)(*(int *)(param_1 + 0x14) + -4) == -0x80000000)) {
      func_0x00d66630(param_1,1);
      func_0x00d668e0(param_1,0xffffffff);
      func_0x00d66b60(param_1,2,uVar3);
    }
    **(undefined8 **)(param_1 + 0x14) = 0x41d56a8cddc00000;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    iVar4 = func_0x00d66eb0(param_1,0xffffffff);
    if (iVar4 != 0x55aa3377) {
      func_0x00d67660(param_1,0x3a5);
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -8;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x14) + -8) == 0x73) &&
          (*(int *)(*(int *)(param_1 + 0x14) + -4) == -0x80000000)) {
    func_0x00d67b30(param_1,"loop or previous error loading module \'%s\'",uVar3);
    return 1;
  }
  return 1;
}



void FUN_00d873a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [100];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_68;
  iVar1 = func_0x00d656e0(param_1,1,0);
  iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  func_0x00d699c0(param_1,iVar1,1);
  func_0x00d66060(param_1,0xffffffff,"_NAME");
  iVar2 = func_0x00d67010(param_1,0xffffffff);
  if (iVar2 == 0) {
    func_0x00d66d90(param_1,0xfffffffe);
    func_0x00d668e0(param_1,0xffffffff);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010ccc78);
    func_0x00d66830(param_1,iVar1);
    func_0x00d66b60(param_1,0xfffffffe,"_NAME");
    iVar3 = func_0x00e87d40(iVar1,0x2e);
    iVar2 = iVar1;
    if (iVar3 != 0) {
      iVar2 = iVar3 + 1;
    }
    func_0x00d66780(param_1,iVar1,iVar2 - iVar1);
    func_0x00d66b60(param_1,0xfffffffe,"_PACKAGE");
  }
  else {
    func_0x00d66d90(param_1,0xfffffffe);
  }
  func_0x00d668e0(param_1,0xffffffff);
  iVar1 = func_0x00d6b6c0(param_1,1,auStack_68);
  if (((iVar1 == 0) || (iVar1 = func_0x00d6b600(param_1,&DAT_01198234,auStack_68), iVar1 == 0)) ||
     (iVar1 = func_0x00d662c0(param_1,0xffffffff), iVar1 != 0)) {
    func_0x00d67b30(param_1,"\'module\' not called from a Lua function");
  }
  func_0x00d668e0(param_1,0xfffffffe);
  func_0x00d66ae0(param_1,0xfffffffe);
  func_0x00d66d90(param_1,0xfffffffe);
  iVar1 = 2;
  if (1 < iVar4) {
    do {
      func_0x00d668e0(param_1,iVar1);
      func_0x00d668e0(param_1,0xfffffffe);
      func_0x00d65d20(param_1,1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 <= iVar4);
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00d87510(undefined4 param_1)

{
  int iVar1;
  
  func_0x00d65800(param_1,1,5);
  iVar1 = func_0x00d66100(param_1,1);
  if (iVar1 == 0) {
    func_0x00d65e70(param_1,0,1);
    func_0x00d668e0(param_1,0xffffffff);
    func_0x00d66c00(param_1,1);
  }
  func_0x00d668e0(param_1,0xffffd8ee);
  func_0x00d66b60(param_1,0xfffffffe,"__index");
  return 0;
}



void FUN_00d875d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00d65870(param_1,1,"_LOADLIB");
  if ((HMODULE)*puVar1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*puVar1);
  }
  *puVar1 = 0;
  return;
}



FARPROC FUN_00d87600(HMODULE param_1,LPCSTR param_2)

{
  FARPROC pFVar1;
  BOOL BVar2;
  
  if (param_1 != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(param_1,param_2);
    return pFVar1;
  }
  param_1 = GetModuleHandleA((LPCSTR)0x0);
  pFVar1 = GetProcAddress(param_1,param_2);
  if (pFVar1 == (FARPROC)0x0) {
    BVar2 = GetModuleHandleExA(6,(LPCSTR)FUN_00d87600,&param_1);
    if (BVar2 != 0) {
      pFVar1 = GetProcAddress(param_1,param_2);
    }
  }
  return pFVar1;
}



undefined4 FUN_00d87840(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x00d65900(param_1,"_LOADLIB");
  func_0x00d8e480(param_1,FUN_00d875d0,1,0);
  func_0x00d66b60(param_1,0xfffffffe,&DAT_011980b0);
  func_0x00d69b50(param_1,"package",&PTR_s_loadlib_010cca44);
  func_0x00d65e40(param_1,0xffffffff,0xffffd8ef);
  func_0x00d65e70(param_1,4,0);
  pcVar1 = FUN_00d87090;
  iVar3 = 0;
  do {
    func_0x00d8e480(param_1,pcVar1,1,0);
    iVar3 = iVar3 + 1;
    func_0x00d66a10(param_1,0xfffffffe,iVar3);
    pcVar1 = *(code **)(&UNK_010cca7c + iVar3 * 4);
  } while (pcVar1 != (code *)0x0);
  func_0x00d66b60(param_1,0xfffffffe,"loaders");
  func_0x00d66060(param_1,0xffffd8f0,"LUA_NOENV");
  uVar2 = func_0x00d66e90(param_1,0xffffffff);
  func_0x00d66d90(param_1,0xfffffffe);
  func_0x00d87bf0(param_1,&DAT_010506f8,"LUA_PATH",".\\?.lua;!\\lua\\?.lua;!\\lua\\?\\init.lua;",
                  uVar2);
  func_0x00d87bf0(param_1,"cpath","LUA_CPATH",".\\?.dll;!\\?.dll;!\\loadall.dll",uVar2);
  func_0x00d66780(param_1,"\\\n;\n?\n!\n-\n",10);
  func_0x00d66b60(param_1,0xfffffffe,"config");
  func_0x00d69520(param_1,0xffffd8f0,"_LOADED",0x10);
  func_0x00d66b60(param_1,0xfffffffe,"loaded");
  func_0x00d69520(param_1,0xffffd8f0,"_PRELOAD",4);
  func_0x00d66b60(param_1,0xfffffffe,"preload");
  func_0x00d668e0(param_1,0xffffd8ee);
  func_0x00d69b50(param_1,0,&PTR_s_module_010cca64);
  func_0x00d66d90(param_1,0xfffffffe);
  return 1;
}



undefined4 FUN_00d87d00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = puVar1 + 2;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xb8);
  puVar1[1] = *(undefined4 *)(*(int *)(param_1 + 8) + 0xbc);
  *puVar1 = uVar2;
  return 1;
}



undefined4 FUN_00d87d30(int param_1)

{
  int iVar1;
  
  func_0x00d8df20(param_1,1);
  iVar1 = func_0x00d66100(param_1,1);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + -4) = 0xffffffff;
  }
  return 1;
}



undefined4 FUN_00d87d60(int param_1)

{
  func_0x00d8e2a0(param_1,2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 0x10;
  func_0x00d66c00(param_1,1);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + -4) = 0xfffffffd;
  return 1;
}



undefined4 FUN_00d87da0(undefined4 param_1)

{
  func_0x00d8df20(param_1,1);
  func_0x00d65fe0(param_1,1);
  return 1;
}



undefined4 FUN_00d87dc0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x00d8e270(param_1,2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 0x10;
  iVar2 = func_0x00d66ae0(param_1,1);
  if (iVar2 != 0) {
    return 1;
  }
  func_0x00d67660(param_1,0x50e);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void FUN_00d87e00(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  char *extraout_ECX;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined2 in_ES;
  undefined1 uVar15;
  char cVar16;
  char cVar17;
  int iStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [56];
  undefined *puStack_d8;
  int *piStack_d4;
  undefined *puStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  char *pcStack_c4;
  int *piStack_c0;
  undefined *puStack_bc;
  int *piStack_b8;
  undefined *puStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  char *pcStack_94;
  int *piStack_80;
  int iStack_7c;
  int *piStack_78;
  int *piStack_74;
  char acStack_70 [4];
  char *pcStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *pcStack_5c;
  char *pcStack_58;
  undefined *puStack_54;
  undefined *puStack_50;
  undefined1 auStack_4c [64];
  int *piStack_c;
  undefined *puStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&piStack_80;
  piStack_80 = (int *)0x0;
  puVar2 = (undefined4 *)param_1[4];
  if ((puVar2 < (undefined4 *)param_1[5]) && (puVar2[1] == -7)) {
    piStack_74 = (int *)*puVar2;
    piStack_9c = (int *)0x3;
    iStack_7c = 8;
    piVar13 = (int *)0x2;
  }
  else {
    piStack_9c = (int *)0x2;
    piStack_74 = param_1;
    iStack_7c = 0;
    piVar13 = (int *)0x1;
  }
  piVar11 = piStack_74;
  pcStack_94 = (char *)0x0;
  piStack_98 = (int *)0x10cce34;
  piStack_a0 = param_1;
  piStack_a4 = (int *)0xd87e72;
  piStack_78 = piStack_9c;
  pcVar6 = (char *)func_0x00d65a20();
  piStack_a8 = param_1;
  piStack_ac = (int *)0xd87e7b;
  piStack_a4 = piVar13;
  iVar7 = func_0x00d662f0();
  piStack_98 = piVar13;
  if (iVar7 == 0) {
    uVar8 = param_1[4] + iStack_7c;
    uVar9 = param_1[5];
    cVar17 = SBORROW4(uVar8,uVar9);
    iVar7 = uVar8 - uVar9;
    uVar15 = uVar8 == uVar9;
    if (uVar8 < uVar9) {
      iVar5 = *(int *)(uVar8 + 4);
      cVar17 = SBORROW4(iVar5,-9);
      iVar7 = iVar5 + 9;
      uVar15 = iVar5 == -9;
      if ((bool)uVar15) {
        piStack_98 = (int *)&DAT_010cce3c;
        piStack_9c = param_1;
        piStack_a0 = (int *)0xd87eed;
        pcStack_94 = pcVar6;
        pcVar6 = (char *)func_0x00d666f0();
        puVar2 = (undefined4 *)piVar11[5];
        piVar11[5] = (int)(puVar2 + 2);
        *puVar2 = *(undefined4 *)(iStack_7c + param_1[4]);
        puVar2[1] = 0xfffffff7;
        goto LAB_00d87f0e;
      }
    }
    cVar16 = iVar7 < 0;
    pcStack_94 = (char *)0x275;
    piStack_9c = param_1;
    piStack_a0 = (int *)0xd88129;
    func_0x00d67530();
LAB_00d88129:
    pcStack_94 = (char *)0x4dc;
    piStack_98 = piStack_78;
    piStack_9c = param_1;
    piStack_a0 = (int *)0xd88138;
    iVar7 = func_0x00d67530();
    *(int *)(iVar7 + 0x7f5d00d8) = iVar7;
    if (!(bool)uVar15 && cVar17 == cVar16) {
      piVar1 = piVar11 + -0x20;
      iVar5 = *piVar1;
      cVar17 = (char)extraout_ECX;
      *(char *)piVar1 = (char)*piVar1 + cVar17;
      if ((char)*piVar1 != '\0' && SCARRY1((char)iVar5,cVar17) == (char)*piVar1 < '\0') {
                    // WARNING: Could not recover jumptable at 0x00d88128. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(iVar7 + -0x24))();
        return;
      }
      *(char *)(param_1 + 0x3620) = (char)param_1[0x3620] + cVar17;
      piStack_9c = (int *)CONCAT22(piStack_9c._2_2_,in_ES);
      piStack_a0 = (int *)CONCAT22(piStack_a0._2_2_,in_ES);
      piStack_a4 = (int *)CONCAT22(piStack_a4._2_2_,in_ES);
      piVar1 = piStack_a4;
      piStack_a8 = (int *)CONCAT22(piStack_a8._2_2_,in_ES);
      piStack_b0 = (int *)CONCAT22(piStack_b0._2_2_,in_ES);
      *param_1 = *param_1 + iVar7;
      puStack_b4 = (undefined *)CONCAT22(puStack_b4._2_2_,in_ES);
      piStack_b8 = (int *)CONCAT22(piStack_b8._2_2_,in_ES);
      puStack_bc = (undefined *)CONCAT22(puStack_bc._2_2_,in_ES);
      piStack_c0 = (int *)CONCAT22(piStack_c0._2_2_,in_ES);
      pcStack_c4 = (char *)CONCAT22(pcStack_c4._2_2_,in_ES);
      uStack_c8 = CONCAT22(uStack_c8._2_2_,in_ES);
      piStack_cc = (int *)CONCAT22(piStack_cc._2_2_,in_ES);
      puStack_d0 = (undefined *)CONCAT22(puStack_d0._2_2_,in_ES);
      piStack_d4 = (int *)CONCAT22(piStack_d4._2_2_,in_ES);
      puStack_d8 = (undefined *)CONCAT22(puStack_d8._2_2_,in_ES);
      iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),(char)iVar7 + (char)*param_1) + *param_1;
      iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),(char)iVar7 + '\x06');
      uStack_114 = CONCAT22(uStack_114._2_2_,in_ES);
      if (SCARRY4(iVar7,-0x137c3334)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      uVar9 = iVar7 + 0xec83cccd;
      *extraout_ECX = *extraout_ECX - (char)uVar9;
      piStack_ac = (int *)(uVar9 ^ (uint)&iStack_118);
      piVar14 = *(int **)((int)piStack_a4 + 0x10);
      if ((piVar14 < *(int **)((int)piStack_a4 + 0x14)) && (piVar14[1] == -7)) {
        uVar12 = 2;
        iStack_118 = 0xc;
        uVar10 = 3;
        iVar7 = 0x10;
        piVar14 = (int *)*piVar14;
      }
      else {
        uVar12 = 1;
        iStack_118 = 4;
        uVar10 = 2;
        iVar7 = 8;
        piVar14 = piStack_a4;
      }
      uStack_114 = func_0x00d8df80(piStack_a4,uVar10,pcVar6,param_1,piVar13,piVar11);
      if (*(int *)(*(int *)((int)piVar1 + 0x10) + iStack_118) == -9) {
        *(int *)((int)piVar1 + 0x14) = *(int *)((int)piVar1 + 0x10) + iVar7;
        uVar10 = func_0x00d6b620(piVar1,0,uStack_114);
        func_0x00d66830(piVar1,uVar10);
      }
      else {
        uVar10 = func_0x00d8df80(piVar1,uVar12,auStack_110);
        iVar7 = func_0x00d6b6c0(piVar14,uVar10);
        if (iVar7 == 0) {
          func_0x00d67530(piVar1,uVar12,0x4bb);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = func_0x00d6b620(piVar14,auStack_110,uStack_114);
        if (iVar7 != 0) {
          func_0x00d67080(piVar14,piVar1,1);
          func_0x00d66830(piVar1,iVar7);
          func_0x00d668e0(piVar1,0xfffffffe);
          FUN_008ab370();
          return;
        }
        *(undefined4 *)(*(int *)((int)piVar1 + 0x14) + -4) = 0xffffffff;
      }
      FUN_008ab370();
      return;
    }
LAB_00d880c2:
    piStack_a0 = (int *)0xd880c8;
    piStack_9c = piVar11;
    func_0x00d67080();
LAB_00d880cb:
    pcStack_94 = "activelines";
    piStack_98 = (int *)0xfffffffe;
    piStack_9c = param_1;
    piStack_a0 = (int *)0xd880d8;
    func_0x00d66b60();
  }
  else {
    pcStack_94 = acStack_70;
    piStack_9c = param_1;
    piStack_a0 = (int *)0xd87e8e;
    piStack_98 = (int *)func_0x00d66eb0();
    piStack_a0 = (int *)0xd87e98;
    piStack_9c = piVar11;
    iVar7 = func_0x00d6b6c0();
    if (iVar7 == 0) {
      *(undefined4 *)(param_1[5] + -4) = 0xffffffff;
      goto LAB_00d87ea9;
    }
LAB_00d87f0e:
    pcStack_94 = (char *)0x1;
    piStack_98 = (int *)acStack_70;
    piStack_a4 = (int *)0xd87f1c;
    piStack_a0 = piVar11;
    piStack_9c = (int *)pcVar6;
    iVar7 = func_0x00d6ab30();
    cVar17 = '\0';
    cVar16 = iVar7 < 0;
    uVar15 = iVar7 == 0;
    if ((bool)uVar15) goto LAB_00d88129;
    pcStack_94 = &DAT_00000010;
    piStack_98 = (int *)0x0;
    piStack_9c = param_1;
    piStack_a0 = (int *)0xd87f31;
    func_0x00d65e70();
    cVar17 = *pcVar6;
    if (cVar17 == '\0') goto LAB_00d87ea9;
    bVar4 = false;
    do {
      switch(cVar17) {
      case 'L':
        bVar4 = true;
        break;
      case 'S':
        pcStack_94 = (char *)uStack_60;
        piStack_98 = param_1;
        piStack_9c = (int *)&UNK_00d87f67;
        func_0x00d66830();
        piStack_9c = (int *)0xfb7a50;
        piStack_a0 = (int *)0xfffffffe;
        piStack_a4 = param_1;
        piStack_a8 = (int *)&UNK_00d87f74;
        func_0x00d66b60();
        piStack_a8 = (int *)auStack_4c;
        piStack_ac = param_1;
        piStack_b0 = (int *)&UNK_00d87f7f;
        func_0x00d66830();
        piStack_b0 = (int *)0x10cce40;
        puStack_b4 = (undefined *)0xfffffffe;
        piStack_b8 = param_1;
        puStack_bc = &UNK_00d87f8c;
        func_0x00d66b60();
        puStack_bc = puStack_54;
        piStack_c0 = param_1;
        pcStack_c4 = &UNK_00d87f96;
        func_0x00d66720();
        pcStack_c4 = "linedefined";
        uStack_c8 = 0xfffffffe;
        piStack_cc = param_1;
        puStack_d0 = &UNK_00d87fa3;
        func_0x00d66b60();
        puStack_d0 = puStack_50;
        piStack_d4 = param_1;
        puStack_d8 = &UNK_00d87fad;
        func_0x00d66720();
        pcStack_94 = "lastlinedefined";
        piStack_98 = (int *)0xfffffffe;
        piStack_9c = param_1;
        piStack_a0 = (int *)&UNK_00d87fbd;
        func_0x00d66b60();
        piStack_a0 = (int *)uStack_64;
        piStack_a4 = param_1;
        piStack_a8 = (int *)&UNK_00d87fc7;
        func_0x00d66830();
        piStack_a8 = (int *)&UNK_010cce68;
        piStack_ac = (int *)0xfffffffe;
        piStack_b0 = param_1;
        puStack_b4 = &UNK_00d87fd4;
        func_0x00d66b60();
        break;
      case 'f':
        piStack_80 = (int *)0x1;
        goto code_r0x00d88092;
      case 'l':
        pcStack_94 = pcStack_5c;
        piStack_98 = param_1;
        piStack_9c = (int *)&UNK_00d87fe6;
        func_0x00d66720();
        piStack_9c = (int *)0x10cce70;
        piStack_a0 = (int *)0xfffffffe;
        piStack_a4 = param_1;
        piStack_a8 = (int *)&UNK_00d87ff3;
        func_0x00d66b60();
        break;
      case 'n':
        pcStack_94 = pcStack_6c;
        piStack_98 = param_1;
        piStack_9c = (int *)&UNK_00d88055;
        func_0x00d66830();
        piStack_9c = (int *)&DAT_0113c348;
        piStack_a0 = (int *)0xfffffffe;
        piStack_a4 = param_1;
        piStack_a8 = (int *)&UNK_00d88062;
        func_0x00d66b60();
        piStack_a8 = piStack_68;
        piStack_ac = param_1;
        piStack_b0 = (int *)&UNK_00d8806c;
        func_0x00d66830();
        piStack_b0 = (int *)0x10cce98;
        puStack_b4 = (undefined *)0xfffffffe;
        piStack_b8 = param_1;
        puStack_bc = &UNK_00d88079;
        func_0x00d66b60();
        break;
      case 'u':
        pcStack_94 = pcStack_58;
        piStack_98 = param_1;
        piStack_9c = (int *)&UNK_00d88005;
        func_0x00d66720();
        piStack_9c = (int *)&UNK_010cce7c;
        piStack_a0 = (int *)0xfffffffe;
        piStack_a4 = param_1;
        piStack_a8 = (int *)&UNK_00d88012;
        func_0x00d66b60();
        piStack_a8 = piStack_c;
        piStack_ac = param_1;
        piStack_b0 = (int *)&UNK_00d8801f;
        func_0x00d66720();
        piStack_b0 = (int *)0x10cce84;
        puStack_b4 = (undefined *)0xfffffffe;
        piStack_b8 = param_1;
        puStack_bc = &UNK_00d8802c;
        func_0x00d66b60();
        puStack_bc = puStack_8;
        piStack_c0 = param_1;
        pcStack_c4 = &UNK_00d88039;
        func_0x00d66630();
        pcStack_c4 = "isvararg";
        uStack_c8 = 0xfffffffe;
        piStack_cc = param_1;
        puStack_d0 = &UNK_00d88046;
        func_0x00d66b60();
      }
code_r0x00d88092:
      piVar11 = piStack_74;
      piVar13 = piStack_80;
      cVar17 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar17 != '\0');
    if (bVar4) {
      if (param_1 != piStack_74) {
        pcStack_94 = (char *)0x1;
        piStack_98 = param_1;
        goto LAB_00d880c2;
      }
      pcStack_94 = (char *)0xfffffffe;
      piStack_98 = param_1;
      piStack_9c = (int *)0xd880b2;
      func_0x00d668e0();
      piStack_9c = (int *)0xfffffffd;
      piStack_a0 = param_1;
      piStack_a4 = (int *)0xd880ba;
      func_0x00d66a80();
      goto LAB_00d880cb;
    }
  }
  if (piVar13 != (int *)0x0) {
    if (param_1 == piVar11) {
      pcStack_94 = (char *)0xfffffffe;
      piStack_98 = param_1;
      piStack_9c = (int *)0xd880ef;
      func_0x00d668e0();
      piStack_9c = (int *)0xfffffffd;
      piStack_a0 = param_1;
      piStack_a4 = (int *)0xd880f7;
      func_0x00d66a80();
    }
    else {
      pcStack_94 = (char *)0x1;
      piStack_98 = param_1;
      piStack_a0 = (int *)0xd88105;
      piStack_9c = piVar11;
      func_0x00d67080();
    }
    pcStack_94 = "func";
    piStack_98 = (int *)0xfffffffe;
    piStack_9c = param_1;
    piStack_a0 = (int *)0xd88115;
    func_0x00d66b60();
  }
LAB_00d87ea9:
  FUN_008ab370();
  return;
}



void FUN_00d88180(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [100];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_70;
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -7)) {
    uVar5 = 2;
    iStack_70 = 0xc;
    uVar3 = 3;
    iVar4 = 0x10;
    iVar6 = *piVar1;
  }
  else {
    uVar5 = 1;
    iStack_70 = 4;
    uVar3 = 2;
    iVar4 = 8;
    iVar6 = param_1;
  }
  uStack_6c = func_0x00d8df80(param_1,uVar3);
  if (*(int *)(*(int *)(param_1 + 0x10) + iStack_70) == -9) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + iVar4;
    uVar3 = func_0x00d6b620(param_1,0,uStack_6c);
    func_0x00d66830(param_1,uVar3);
  }
  else {
    uVar3 = func_0x00d8df80(param_1,uVar5,auStack_68);
    iVar4 = func_0x00d6b6c0(iVar6,uVar3);
    if (iVar4 == 0) {
      func_0x00d67530(param_1,uVar5,0x4bb);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = func_0x00d6b620(iVar6,auStack_68,uStack_6c);
    if (iVar4 != 0) {
      func_0x00d67080(iVar6,param_1,1);
      func_0x00d66830(param_1,iVar4);
      func_0x00d668e0(param_1,0xfffffffe);
      FUN_008ab370();
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x14) + -4) = 0xffffffff;
  }
  FUN_008ab370();
  return;
}



void FUN_00d882b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_6c;
  undefined1 auStack_68 [100];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_6c;
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -7)) {
    uVar9 = 4;
    uStack_6c = 3;
    uVar7 = 2;
    iVar8 = *piVar1;
  }
  else {
    uStack_6c = 2;
    uVar9 = 3;
    uVar7 = 1;
    iVar8 = param_1;
  }
  uVar4 = func_0x00d8df80(param_1,uVar7,auStack_68);
  iVar5 = func_0x00d6b6c0(iVar8,uVar4);
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)func_0x00d8df20(param_1,uVar9);
    puVar2 = *(undefined4 **)(iVar8 + 0x14);
    *(undefined4 **)(iVar8 + 0x14) = puVar2 + 2;
    uVar7 = puVar6[1];
    *puVar2 = *puVar6;
    puVar2[1] = uVar7;
    uVar7 = func_0x00d8df80(param_1,uStack_6c);
    uVar7 = func_0x00d6b710(iVar8,auStack_68,uVar7);
    func_0x00d66830(param_1,uVar7);
    FUN_008ab370();
    return;
  }
  func_0x00d67530(param_1,uVar7,0x4bb);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



undefined4 FUN_00d88380(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = func_0x00d8df80(param_1,2);
  func_0x00d8df50(param_1,1);
  iVar3 = func_0x00d661f0(param_1,1,uVar2);
  if (iVar3 != 0) {
    func_0x00d66830(param_1,iVar3);
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    *puVar1 = puVar1[-4];
    puVar1[1] = puVar1[-3];
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    return 2;
  }
  return 0;
}



undefined4 FUN_00d883e0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  func_0x00d8df20(param_1,3);
  uVar1 = func_0x00d8df80(param_1,2);
  func_0x00d8df50(param_1,1);
  iVar2 = func_0x00d66e10(param_1,1,uVar1);
  if (iVar2 != 0) {
    func_0x00d66830(param_1,iVar2);
    return 1;
  }
  return 0;
}



undefined4 FUN_00d88430(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = func_0x00d8df50(param_1,1);
  iVar3 = func_0x00d8df80(param_1,2);
  if ((uint)*(byte *)(iVar2 + 7) <= iVar3 - 1U) {
    func_0x00d67530(param_1,2,0x496);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (*(char *)(iVar2 + 6) == '\0') {
    func_0x00d66750(param_1,*(undefined4 *)(iVar2 + 0x14 + (iVar3 - 1U) * 4));
    return 1;
  }
  func_0x00d66750(param_1,iVar2 + (iVar3 + 2) * 8);
  return 1;
}



undefined4 FUN_00d884a0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *apiStack_10 [2];
  int aiStack_8 [2];
  
  iVar6 = 0;
  iVar5 = 2;
  while( true ) {
    iVar2 = func_0x00d8df50(param_1,iVar5 + -1);
    aiStack_8[iVar6] = iVar2;
    if (*(char *)(iVar2 + 6) != '\0') break;
    iVar3 = func_0x00d8df80(param_1,iVar5);
    if ((uint)*(byte *)(iVar2 + 7) <= iVar3 - 1U) goto LAB_00d88535;
    iVar5 = iVar5 + 2;
    apiStack_10[iVar6] = (int *)(iVar2 + (iVar3 + 4) * 4);
    iVar6 = iVar6 + 1;
    if (5 < iVar5) {
      *apiStack_10[0] = *apiStack_10[1];
      if (((*(byte *)(*apiStack_10[1] + 4) & 3) != 0) && ((*(byte *)(aiStack_8[0] + 4) & 4) != 0)) {
        func_0x00d6daa0(*(undefined4 *)(param_1 + 8),aiStack_8[0],*apiStack_10[1]);
      }
      return 0;
    }
  }
  func_0x00d67530(param_1,iVar5 + -1,0x25f);
LAB_00d88535:
  func_0x00d67530(param_1,iVar6 * 2 + 2,0x496);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



undefined4 FUN_00d88550(code *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 uVar9;
  
  iVar2 = (int)param_1;
  if ((*(uint *)((int)param_1 + 0x10) < *(uint *)((int)param_1 + 0x14)) &&
     (*(int *)(*(uint *)((int)param_1 + 0x10) + 4) == -7)) {
    uVar9 = 3;
    param_1 = (code *)0x4;
    uVar7 = 2;
  }
  else {
    uVar9 = 2;
    param_1 = (code *)0x3;
    uVar7 = 1;
  }
  iVar3 = func_0x00d67010(iVar2,uVar7);
  if (iVar3 < 1) {
    func_0x00d66d90(iVar2,uVar7);
    param_1 = (code *)0x0;
    iVar3 = 0;
    bVar8 = 0;
  }
  else {
    uVar9 = func_0x00d656e0(iVar2,uVar9,0);
    func_0x00d65800(iVar2,uVar7,6);
    iVar3 = func_0x00d659b0(iVar2,param_1,0);
    param_1 = FUN_00d88930;
    iVar4 = func_0x008ab0c6(uVar9,99);
    iVar5 = func_0x008ab0c6(uVar9,0x72);
    bVar8 = iVar4 != 0 | 2;
    if (iVar5 == 0) {
      bVar8 = iVar4 != 0;
    }
    iVar4 = func_0x008ab0c6(uVar9,0x6c);
    bVar6 = bVar8 | 4;
    if (iVar4 == 0) {
      bVar6 = bVar8;
    }
    bVar8 = bVar6 | 8;
    if (iVar3 < 1) {
      bVar8 = bVar6;
    }
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x14);
  *puVar1 = 0x68;
  puVar1[1] = 0x80000000;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 8;
  func_0x00d668e0(iVar2,uVar7);
  func_0x00d669c0(iVar2,0xffffd8f0);
  func_0x00d802d0(iVar2,param_1,bVar8,iVar3);
  return 0;
}



void FUN_00d88670(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_c [8];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_c;
  uVar2 = func_0x00d802c0(param_1);
  pcVar3 = (code *)func_0x00d802a0(param_1);
  if ((pcVar3 == (code *)0x0) || (pcVar3 == FUN_00d88930)) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    *puVar1 = 0x68;
    puVar1[1] = 0x80000000;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    func_0x00d66920(param_1,0xffffd8f0);
  }
  else {
    func_0x00d66780(param_1,"external hook",0xd);
  }
  uVar4 = uVar2 & 1;
  if (uVar4 != 0) {
    auStack_c[0] = 99;
  }
  if ((uVar2 & 2) != 0) {
    auStack_c[uVar4] = 0x72;
    uVar4 = uVar4 + 1;
  }
  if ((uVar2 & 4) != 0) {
    auStack_c[uVar4] = 0x6c;
    uVar4 = uVar4 + 1;
  }
  auStack_c[uVar4] = 0;
  func_0x00d66830(param_1,auStack_c);
  uVar5 = func_0x00d802b0(param_1);
  func_0x00d66720(param_1,uVar5);
  FUN_008ab370();
  return;
}



void FUN_00d88730(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  byte abStack_100 [252];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)abStack_100;
  uVar2 = func_0x00e8798f(2);
  func_0x00e87aae("lua_debug> ",uVar2);
  uVar2 = func_0x00e8798f(0);
  iVar3 = func_0x00e87a46(abStack_100,0xfa,uVar2);
  if (iVar3 == 0) {
    FUN_008ab370();
    return;
  }
  do {
    pcVar4 = "cont\n";
    pbVar7 = abStack_100;
    do {
      bVar1 = *pbVar7;
      bVar8 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00d887b0:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_00d887b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar8 = bVar1 < ((byte *)pcVar4)[1];
      if (bVar1 != ((byte *)pcVar4)[1]) goto LAB_00d887b0;
      pbVar7 = pbVar7 + 2;
      pcVar4 = (char *)((byte *)pcVar4 + 2);
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_00d887b5:
    if (uVar5 == 0) break;
    pbVar7 = abStack_100;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    iVar3 = func_0x00d6b810(param_1,abStack_100,(int)pbVar7 - (int)(abStack_100 + 1),
                            "=(debug command)");
    if ((iVar3 != 0) || (iVar3 = func_0x00d665c0(param_1,0,0,0), iVar3 != 0)) {
      pcVar6 = (char *)func_0x00d66f10(param_1,0xffffffff,0);
      uVar2 = func_0x00e8798f(2);
      pcVar4 = "(error object is not a string)";
      if (pcVar6 != (char *)0x0) {
        pcVar4 = pcVar6;
      }
      func_0x00e87aae(pcVar4,uVar2);
      uVar2 = func_0x00e8798f(2);
      func_0x00e87aae(&DAT_0113d23c,uVar2);
    }
    func_0x00d66d90(param_1,0);
    uVar2 = func_0x00e8798f(2);
    func_0x00e87aae("lua_debug> ",uVar2);
    uVar2 = func_0x00e8798f(0);
    iVar3 = func_0x00e87a46(abStack_100,0xfa,uVar2);
  } while (iVar3 != 0);
  FUN_008ab370();
  return;
}



undefined4 FUN_00d888a0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -7)) {
    uVar5 = 3;
    iVar6 = 8;
    uVar4 = 2;
    iVar7 = *piVar1;
  }
  else {
    uVar5 = 2;
    iVar6 = 0;
    uVar4 = 1;
    iVar7 = param_1;
  }
  iVar2 = func_0x00d66f10(param_1,uVar4,0);
  if ((iVar2 == 0) && (uVar3 = *(int *)(param_1 + 0x10) + iVar6, uVar3 < *(uint *)(param_1 + 0x14)))
  {
    *(uint *)(param_1 + 0x14) = uVar3 + 8;
    return 1;
  }
  uVar4 = func_0x00d8e2e0(param_1,uVar5,param_1 == iVar7);
  func_0x00d6b380(param_1,iVar7,iVar2,uVar4);
  return 1;
}



void FUN_00d88930(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *puVar1 = 0x68;
  puVar1[1] = 0x80000000;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  func_0x00d66920(param_1,0xffffd8f0);
  iVar2 = func_0x00d67010(param_1,0xffffffff);
  if (iVar2 == 6) {
    func_0x00d66830(param_1,(&PTR_DAT_010ccd20)[*param_2]);
    if (-1 < param_2[5]) {
      func_0x00d66720(param_1,param_2[5]);
      func_0x00d65d20(param_1,2,0);
      return;
    }
    func_0x00d667d0(param_1);
    func_0x00d65d20(param_1,2,0);
  }
  return;
}



undefined4 FUN_00d889c0(undefined4 param_1)

{
  func_0x00d8e4c0(param_1,"debug",&DAT_010ccd78,&PTR_FUN_010ccd38);
  return 1;
}



undefined4 FUN_00d889f0(int param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar1 = func_0x00da63b0(param_1,1,&uStack_4);
  *(double *)(*(int *)(param_1 + 0x10) + -8) = (double)iVar1;
  return 2;
}



undefined4 FUN_00d88a30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack_4;
  
  iStack_4 = 0;
  uVar3 = func_0x00da63b0(param_1,1,&iStack_4);
  iVar1 = iStack_4;
  if (iStack_4 != 0) {
    iVar2 = FUN_00d6caa0();
    *(short *)(iVar2 + 6) = (short)iVar1;
    *(uint *)(iVar2 + 8) = ~(uint)uVar3;
    *(uint *)(iVar2 + 0xc) = ~(uint)((ulonglong)uVar3 >> 0x20);
    *(undefined1 *)(iVar2 + 5) = 10;
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -4) = 0xfffffff5;
    return 2;
  }
  return 0;
}



undefined4 FUN_00d88aa0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iStack_4;
  
  iStack_4 = 0;
  uVar5 = func_0x00da63b0(param_1,1,&iStack_4);
  iVar1 = iStack_4;
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar2 = (uint)uVar5;
  if (iStack_4 != 0) {
    iVar3 = FUN_00d6caa0();
    *(short *)(iVar3 + 6) = (short)iVar1;
    *(uint *)(iVar3 + 8) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *(uint *)(iVar3 + 0xc) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    *(undefined1 *)(iVar3 + 5) = 10;
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -4) = 0xfffffff5;
    return 2;
  }
  return 0;
}



undefined4 FUN_00d88b10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack_8;
  int iStack_4;
  
  iStack_8 = 0;
  iStack_4 = 0;
  uVar3 = func_0x00da63b0(param_1,1,&iStack_8);
  iVar1 = func_0x00da63b0(param_1,2,&iStack_4);
  if (iStack_8 != 0) {
    uVar3 = func_0x00da6ad0(uVar3,iVar1,
                            *(byte *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 6) - 0x43);
    iVar1 = iStack_8;
    iVar2 = FUN_00d6caa0();
    *(short *)(iVar2 + 6) = (short)iVar1;
    *(undefined8 *)(iVar2 + 8) = uVar3;
    *(undefined1 *)(iVar2 + 5) = 10;
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -4) = 0xfffffff5;
    return 2;
  }
  if (iStack_4 != 0) {
    *(double *)(*(int *)(param_1 + 0x10) + 8) = (double)iVar1;
  }
  return 0;
}



undefined4 FUN_00d88bd0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined8 uStack_8;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  iVar6 = 0;
  uVar2 = *(uint *)(param_1 + 0x14);
  iStack_1c = 0;
  do {
    iVar6 = iVar6 + 1;
    func_0x00da63b0(param_1,iVar6,&iStack_1c);
    uVar5 = uVar5 + 8;
  } while (uVar5 < uVar2);
  if (iStack_1c == 0) {
    return 0;
  }
  piStack_14 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piStack_14[3] = param_1;
  uVar5 = *(uint *)(param_1 + 0x10);
  iStack_18 = iStack_1c * 0x10 + *piStack_14;
  bVar1 = *(byte *)(*(int *)(uVar5 - 8) + 6);
  if (bVar1 < 0x49) {
    uVar4 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
  else {
    uStack_8 = 0;
    if (bVar1 == 0x49) {
      uStack_8 = 0;
      uStack_8._4_4_ = 0;
      uStack_8._0_4_ = 0;
      uVar4 = (uint)uStack_8;
      uVar7 = uStack_8._4_4_;
      do {
        func_0x00da4730(piStack_14,iStack_18,&uStack_10,uVar5,0);
        uVar4 = uVar4 | uStack_10;
        uVar5 = uVar5 + 8;
        uVar7 = uVar7 | uStack_c;
      } while (uVar5 < uVar2);
      goto LAB_00d88cda;
    }
    uStack_8._4_4_ = 0;
    uStack_8._0_4_ = 0;
    uVar4 = (uint)uStack_8;
    uVar7 = uStack_8._4_4_;
  }
  do {
    func_0x00da4730(piStack_14,iStack_18,&uStack_10,uVar5,0);
    if (bVar1 < 0x49) {
      uVar4 = uVar4 & uStack_10;
      uVar7 = uVar7 & uStack_c;
    }
    else {
      uVar4 = uVar4 ^ uStack_10;
      uVar7 = uVar7 ^ uStack_c;
    }
    uVar5 = uVar5 + 8;
  } while (uVar5 < uVar2);
LAB_00d88cda:
  iVar6 = iStack_1c;
  iVar3 = FUN_00d6caa0();
  *(short *)(iVar3 + 6) = (short)iVar6;
  *(uint *)(iVar3 + 8) = uVar4;
  *(uint *)(iVar3 + 0xc) = uVar7;
  *(undefined1 *)(iVar3 + 5) = 10;
  iVar6 = *(int *)(param_1 + 0x10);
  *(int *)(iVar6 + -8) = iVar3;
  *(undefined4 *)(iVar6 + -4) = 0xfffffff5;
  return 2;
}



// WARNING: Type propagation algorithm not settling

undefined4 FUN_00d88d20(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int aiStack_8 [2];
  
  aiStack_8[0] = 0;
  aiStack_8[1] = 0;
  uVar8 = func_0x00da63b0(param_1,1,aiStack_8);
  if (*(int *)(param_1 + 0x10) + 8U < *(uint *)(param_1 + 0x14)) {
    uVar4 = func_0x00da63b0(param_1,2,aiStack_8 + 1);
  }
  else {
    uVar4 = (uint)(aiStack_8[0] != 0) * 8 + 8;
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar6 = (int)uVar4 >> 0x1f;
  uVar7 = (uVar6 & 0x2000) + 0x14;
  *(int *)(iVar1 + 0x8c) = param_1;
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar1 + 0x88);
  uVar6 = (uVar4 ^ uVar6) - uVar6;
  if (uVar6 < 0xff) {
    uVar7 = uVar7 | (uVar6 + 1) * 0x1000000;
    if ((int)uVar6 < 0x10) {
      uVar6 = uVar6 * 4;
      uVar4 = 1 << (uVar6 & 0x1f);
      uVar5 = 0;
      if (0x1f < uVar6) {
        uVar5 = uVar4;
      }
      uVar4 = uVar4 ^ uVar5;
      if (0x3f < uVar6) {
        uVar5 = uVar4;
      }
      uVar8 = CONCAT44((uint)((ulonglong)uVar8 >> 0x20) & (uVar5 - 1) + (uint)(uVar4 != 0),
                       (uint)uVar8 & uVar4 - 1);
    }
  }
  else {
    uVar7 = uVar7 | 0xff000000;
  }
  piVar2 = (int *)FUN_00d74d70((undefined4 *)(iVar1 + 0x80),uVar7,uVar8);
  uVar3 = FUN_00d6e6c0(param_1,piVar2[2],*piVar2 - piVar2[2]);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + -8) = uVar3;
  *(undefined4 *)(iVar1 + -4) = 0xfffffffb;
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00d88e30(undefined4 param_1)

{
  func_0x00d8e4c0(param_1,&DAT_010cb790,&DAT_010ccf28,&PTR_FUN_010ccf10);
  return 1;
}



void FUN_00d88e60(undefined4 param_1)

{
  func_0x00d8a280(param_1,0x100);
  return;
}



void FUN_00d88e80(undefined4 param_1)

{
  func_0x00d8a280(param_1,0);
  return;
}



undefined4 FUN_00d88e90(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) &&
     (*(uint *)(*(uint *)(param_1 + 0x10) + 4) < 0xfffffff3)) {
    uVar1 = func_0x00d8df80(param_1,1);
    func_0x00d800c0(param_1,uVar1,0x205);
    return 0;
  }
  uVar1 = func_0x00d8a280(param_1,0x200);
  return uVar1;
}



int FUN_00d88ed0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
  *(uint *)(*(int *)(param_1 + 0x10) + 4) = -2 - (*(uint *)(iVar1 + 0x220) & 1);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  func_0x00d89f90(param_1,*(undefined4 *)(iVar1 + 0x220),0x10,&DAT_010cd15c);
  func_0x00d89f90(param_1,*(undefined4 *)(iVar1 + 0x220),0x10000,&DAT_010cd170);
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
}



undefined4 FUN_00d88f30(int param_1)

{
  double *pdVar1;
  char cVar2;
  
  cVar2 = func_0x00d8e0d0(param_1,1,0xffffffff,&DAT_010cd1a4);
  pdVar1 = *(double **)(param_1 + 0x14);
  *(double **)(param_1 + 0x14) = pdVar1 + 1;
  *pdVar1 = (double)(0x55U >> (cVar2 * '\x02' & 0x1fU) & 3);
  return 1;
}



undefined4 FUN_00d88f70(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = func_0x00d8df50(param_1,1);
  iVar4 = func_0x00d8e340(param_1,2);
  func_0x00d69520(param_1,0xffffd8f0,"_VMEVENTS",4);
  if (iVar4 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    iVar4 = func_0x00d66500(param_1,0xfffffffe);
    while (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x14);
      *(int **)(param_1 + 0x14) = (int *)(iVar4 + -8);
      if ((*(int *)(iVar4 + -4) == -9) && (*(int *)(iVar4 + -8) == iVar3)) {
        iVar4 = func_0x00d6f900(param_1,*(undefined4 *)(iVar4 + -0x18),iVar4 + -0x10);
        *(undefined4 *)(iVar4 + 4) = 0xffffffff;
      }
      iVar4 = func_0x00d66500(param_1,0xfffffffe);
    }
    return 0;
  }
  pbVar1 = (byte *)(iVar4 + 0x14);
  uVar5 = *(uint *)(iVar4 + 0x10);
  bVar2 = *(byte *)(iVar4 + 0x14);
  while (bVar2 != 0) {
    pbVar1 = pbVar1 + 1;
    uVar5 = uVar5 ^ (uVar5 >> 0x1a | uVar5 << 6) + (uint)bVar2;
    bVar2 = *pbVar1;
  }
  func_0x00d668e0(param_1,1);
  func_0x00d66a10(param_1,0xfffffffe,uVar5 * 8);
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x57) = 0xff;
  return 0;
}



undefined4 FUN_00d89050(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  double *pdVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  
  piVar9 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 0x14) <= piVar9) {
LAB_00d89358:
    func_0x00d67550(param_1,1,6);
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  if (piVar9[1] == -8) {
    iVar11 = *piVar9;
    iVar8 = iVar11;
  }
  else {
    if (piVar9[1] != -9) goto LAB_00d89358;
    iVar8 = *piVar9;
    if (*(char *)(iVar8 + 6) != '\0') goto LAB_00d892bb;
    iVar11 = *(int *)(iVar8 + 0x10) + -0x40;
  }
  if (iVar11 != 0) {
    uVar5 = func_0x00d8e2e0(param_1,2,0);
    func_0x00d65e70(param_1,0,0x10);
    iVar8 = *(int *)(iVar11 + 0x2c);
    uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x14) + -8);
    uVar6 = FUN_00d6e6c0(param_1,"linedefined",0xb);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)iVar8;
    iVar8 = *(int *)(iVar11 + 0x30);
    iVar2 = *(int *)(iVar11 + 0x2c);
    uVar6 = FUN_00d6e6c0(param_1,"lastlinedefined",0xf);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)(iVar8 + iVar2);
    bVar1 = *(byte *)(iVar11 + 7);
    uVar6 = FUN_00d6e6c0(param_1,"stackslots",10);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)bVar1;
    bVar1 = *(byte *)(iVar11 + 6);
    uVar6 = FUN_00d6e6c0(param_1,"params",6);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)bVar1;
    iVar8 = *(int *)(iVar11 + 8);
    uVar6 = FUN_00d6e6c0(param_1,"bytecodes",9);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)iVar8;
    iVar8 = *(int *)(iVar11 + 0x18);
    uVar6 = FUN_00d6e6c0(param_1,"gcconsts",8);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)iVar8;
    iVar8 = *(int *)(iVar11 + 0x1c);
    uVar6 = FUN_00d6e6c0(param_1,"nconsts",7);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)iVar8;
    bVar1 = *(byte *)(iVar11 + 0x24);
    uVar6 = FUN_00d6e6c0(param_1,"upvalues",8);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)bVar1;
    if (uVar5 < *(uint *)(iVar11 + 8)) {
      iVar8 = func_0x00d6a250();
      uVar6 = FUN_00d6e6c0(param_1,"currentline",0xb);
      pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
      *pdVar7 = (double)iVar8;
    }
    func_0x00d66630(param_1,*(byte *)(iVar11 + 0x25) & 2);
    func_0x00d66b60(param_1,0xfffffffe,"isvararg");
    func_0x00d66630(param_1,*(byte *)(iVar11 + 0x25) & 1);
    func_0x00d66b60(param_1,0xfffffffe,"children");
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x14) = puVar3 + 2;
    *puVar3 = *(undefined4 *)(iVar11 + 0x28);
    puVar3[1] = 0xfffffffb;
    func_0x00d66b60(param_1,0xfffffffe,"source");
    func_0x00d6aed0(param_1,iVar11,uVar5);
    func_0x00d66b60(param_1,0xfffffffe,&DAT_010cd204);
    uVar6 = FUN_00d6e6c0(param_1,"proto",5);
    piVar9 = (int *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *piVar9 = iVar11;
    piVar9[1] = -8;
    return 1;
  }
LAB_00d892bb:
  func_0x00d65e70(param_1,0,4);
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x14) + -8);
  bVar1 = *(byte *)(iVar8 + 6);
  if (bVar1 != 1) {
    uVar6 = FUN_00d6e6c0(param_1,&DAT_010cd208,4);
    pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
    *pdVar7 = (double)bVar1;
  }
  iVar11 = *(int *)(iVar8 + 0x14);
  uVar6 = FUN_00d6e6c0(param_1,&DAT_010cd210,4);
  pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
  *pdVar7 = (double)iVar11;
  bVar1 = *(byte *)(iVar8 + 7);
  uVar6 = FUN_00d6e6c0(param_1,"upvalues",8);
  pdVar7 = (double *)func_0x00d6fab0(param_1,uVar10,uVar6);
  *pdVar7 = (double)bVar1;
  return 1;
}



undefined4 FUN_00d89370(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 < *(int **)(param_1 + 0x14)) {
    if (piVar1[1] == -8) {
      iVar5 = *piVar1;
    }
    else {
      if ((piVar1[1] != -9) || (*(char *)(*piVar1 + 6) != '\0')) goto LAB_00d893ec;
      iVar5 = *(int *)(*piVar1 + 0x10) + -0x40;
    }
    uVar3 = func_0x00d8df80(param_1,2);
    if (uVar3 < *(uint *)(iVar5 + 8)) {
      uVar3 = *(uint *)(iVar5 + 0x40 + uVar3 * 4);
      **(double **)(param_1 + 0x14) = (double)(int)uVar3;
      *(double *)(*(int *)(param_1 + 0x14) + 8) =
           (double)*(ushort *)(&DAT_010cb9b0 + (uVar3 & 0xff) * 2);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x10;
      return 2;
    }
    return 0;
  }
LAB_00d893ec:
  func_0x00d67550(param_1,1,6);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



undefined4 FUN_00d89400(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 < *(int **)(param_1 + 0x14)) {
    if (piVar2[1] == -8) {
      iVar7 = *piVar2;
    }
    else {
      if ((piVar2[1] != -9) || (*(char *)(*piVar2 + 6) != '\0')) goto LAB_00d8948b;
      iVar7 = *(int *)(*piVar2 + 0x10) + -0x40;
    }
    uVar5 = func_0x00d8df80(param_1,2);
    if ((int)uVar5 < 0) {
      if ((int)~uVar5 < *(int *)(iVar7 + 0x18)) {
        iVar7 = *(int *)(*(int *)(iVar7 + 0x10) + uVar5 * 4);
        iVar3 = *(int *)(param_1 + 0x14);
        bVar1 = *(byte *)(iVar7 + 5);
        *(int *)(iVar3 + -8) = iVar7;
        *(uint *)(iVar3 + -4) = ~(uint)bVar1;
        return 1;
      }
    }
    else if ((int)uVar5 < *(int *)(iVar7 + 0x1c)) {
      iVar3 = *(int *)(param_1 + 0x14);
      uVar6 = *(undefined4 *)(*(int *)(iVar7 + 0x10) + 4 + uVar5 * 8);
      *(undefined4 *)(iVar3 + -8) = *(undefined4 *)(*(int *)(iVar7 + 0x10) + uVar5 * 8);
      *(undefined4 *)(iVar3 + -4) = uVar6;
      return 1;
    }
    return 0;
  }
LAB_00d8948b:
  func_0x00d67550(param_1,1,6);
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return uVar6;
}



undefined4 FUN_00d894a0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 < *(int **)(param_1 + 0x14)) {
    if (piVar3[1] == -8) {
      iVar8 = *piVar3;
    }
    else {
      if ((piVar3[1] != -9) || (*(char *)(*piVar3 + 6) != '\0')) goto LAB_00d8952a;
      iVar8 = *(int *)(*piVar3 + 0x10) + -0x40;
    }
    uVar5 = func_0x00d8df80(param_1,2);
    if (uVar5 < *(byte *)(iVar8 + 0x24)) {
      pcVar6 = (char *)func_0x00d6b2e0(iVar8,uVar5);
      pcVar1 = pcVar6 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar7 = func_0x00d6b2e0(iVar8,uVar5,(int)pcVar6 - (int)pcVar1);
      uVar7 = FUN_00d6e6c0(param_1,uVar7);
      iVar8 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar8 + -8) = uVar7;
      *(undefined4 *)(iVar8 + -4) = 0xfffffffb;
      return 1;
    }
    return 0;
  }
LAB_00d8952a:
  func_0x00d67550(param_1,1,6);
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return uVar7;
}



undefined4 FUN_00d89540(int param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  double *pdVar9;
  undefined4 uVar10;
  char *pcVar11;
  
  uVar7 = func_0x00d8df80(param_1,1);
  if (((uVar7 != 0) && (uVar7 < *(uint *)(*(int *)(param_1 + 8) + 0x2f8))) &&
     (iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x2f0) + uVar7 * 4), iVar4 != 0)) {
    func_0x00d65e70(param_1,0,8);
    iVar5 = *(int *)(iVar4 + 8);
    uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x14) + -8);
    uVar8 = FUN_00d6e6c0(param_1,&DAT_010cd218,4);
    pdVar9 = (double *)func_0x00d6fab0(param_1,uVar10,uVar8);
    *pdVar9 = (double)(iVar5 + -0x8001);
    iVar5 = *(int *)(iVar4 + 0x14);
    uVar8 = FUN_00d6e6c0(param_1,&DAT_010cd220,2);
    pdVar9 = (double *)func_0x00d6fab0(param_1,uVar10,uVar8);
    *pdVar9 = (double)(0x8000 - iVar5);
    uVar3 = *(ushort *)(iVar4 + 0x42);
    uVar8 = FUN_00d6e6c0(param_1,&DAT_010cd224,4);
    pdVar9 = (double *)func_0x00d6fab0(param_1,uVar10,uVar8);
    *pdVar9 = (double)uVar3;
    uVar3 = *(ushort *)(iVar4 + 6);
    uVar8 = FUN_00d6e6c0(param_1,"nexit",5);
    pdVar9 = (double *)func_0x00d6fab0(param_1,uVar10,uVar8);
    *pdVar9 = (double)uVar3;
    pcVar11 = (&PTR_DAT_010ccfd8)[*(byte *)(iVar4 + 0x4c)];
    pcVar1 = pcVar11 + 1;
    do {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    puVar6 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x14) = puVar6 + 2;
    uVar10 = FUN_00d6e6c0(param_1,(&PTR_DAT_010ccfd8)[*(byte *)(iVar4 + 0x4c)],
                          (int)pcVar11 - (int)pcVar1);
    *puVar6 = uVar10;
    puVar6[1] = 0xfffffffb;
    func_0x00d66b60(param_1,0xfffffffe,"linktype");
    return 1;
  }
  return 0;
}



undefined4 FUN_00d89690(int param_1)

{
  byte bVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = func_0x00d8df80(param_1,1);
  if ((uVar4 == 0) || (*(uint *)(*(int *)(param_1 + 8) + 0x2f8) <= uVar4)) {
    func_0x00d8df80(param_1,2);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x2f0) + uVar4 * 4);
    iVar5 = func_0x00d8df80(param_1,2);
    uVar4 = iVar5 + 0x8000;
    if (((iVar2 != 0) && (0x7fff < uVar4)) && (uVar4 < *(uint *)(iVar2 + 8))) {
      iVar2 = *(int *)(iVar2 + 0x10);
      iVar5 = 0;
      bVar1 = (&DAT_010cdcc0)[*(byte *)(iVar2 + 5 + uVar4 * 8)];
      *(double *)(*(int *)(param_1 + 0x14) + -0x10) = (double)bVar1;
      *(double *)(*(int *)(param_1 + 0x14) + -8) = (double)*(ushort *)(iVar2 + 4 + uVar4 * 8);
      pdVar3 = *(double **)(param_1 + 0x14);
      *(double **)(param_1 + 0x14) = pdVar3 + 1;
      if ((bVar1 & 3) == 0) {
        iVar5 = 0x8000;
      }
      iVar6 = 0;
      *pdVar3 = (double)(int)((uint)*(ushort *)(iVar2 + uVar4 * 8) - iVar5);
      pdVar3 = *(double **)(param_1 + 0x14);
      *(double **)(param_1 + 0x14) = pdVar3 + 1;
      if ((bVar1 & 0xc) == 0) {
        iVar6 = 0x8000;
      }
      *pdVar3 = (double)(int)((uint)*(ushort *)(iVar2 + 2 + uVar4 * 8) - iVar6);
      pdVar3 = *(double **)(param_1 + 0x14);
      *(double **)(param_1 + 0x14) = pdVar3 + 1;
      *pdVar3 = (double)*(ushort *)(iVar2 + 6 + uVar4 * 8);
      return 5;
    }
  }
  return 0;
}



undefined4 FUN_00d897c0(int param_1)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  
  uVar3 = func_0x00d8df80(param_1,1);
  if ((uVar3 == 0) || (*(uint *)(*(int *)(param_1 + 8) + 0x2f8) <= uVar3)) {
    func_0x00d8df80(param_1,2);
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x2f0) + uVar3 * 4);
    iVar4 = func_0x00d8df80(param_1,2);
    uVar3 = iVar4 + 0x8000;
    if (((iVar1 != 0) && (*(uint *)(iVar1 + 0x14) <= uVar3)) && (uVar3 < 0x8000)) {
      puVar5 = (ushort *)(*(int *)(iVar1 + 0x10) + uVar3 * 8);
      uVar3 = 0xffffffff;
      if (*(char *)((int)puVar5 + 5) == '\x1e') {
        uVar3 = (uint)puVar5[1];
        puVar5 = (ushort *)(*(int *)(iVar1 + 0x10) + (uint)*puVar5 * 8);
      }
      if ((*(char *)((int)puVar5 + 5) == '\x1d') && (*(int *)(*(int *)(param_1 + 8) + 0xfc) == 0)) {
        iVar1 = *(int *)(param_1 + 0x14);
        iVar4 = *(int *)(param_1 + 0x1c);
        FUN_00d8bca0(param_1);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x1c) + (iVar1 - iVar4);
      }
      func_0x00da7410(param_1,*(int *)(param_1 + 0x14) + -0x10,puVar5);
      *(double *)(*(int *)(param_1 + 0x14) + -8) = (double)((byte)puVar5[2] & 0x1f);
      if (uVar3 == 0xffffffff) {
        return 2;
      }
      pdVar2 = *(double **)(param_1 + 0x14);
      *(double **)(param_1 + 0x14) = pdVar2 + 1;
      *pdVar2 = (double)(int)uVar3;
      return 3;
    }
  }
  return 0;
}



undefined4 FUN_00d898d0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uStack_10;
  
  uVar4 = func_0x00d8df80(param_1,1);
  if ((uVar4 == 0) || (*(uint *)(*(int *)(param_1 + 8) + 0x2f8) <= uVar4)) {
    func_0x00d8df80(param_1,2);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x2f0) + uVar4 * 4);
    uVar4 = func_0x00d8df80(param_1,2);
    if ((iVar2 != 0) && (uVar4 < *(ushort *)(iVar2 + 6))) {
      iVar9 = *(int *)(iVar2 + 0x1c);
      uStack_10 = (uint)*(byte *)(iVar9 + 10 + uVar4 * 0xc);
      uVar1 = uStack_10 + 2;
      piVar7 = (int *)(*(int *)(iVar2 + 0x20) + *(int *)(iVar9 + uVar4 * 0xc) * 4);
      func_0x00d65e70(param_1,uVar1,0);
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + -8);
      if (*(int *)(iVar2 + 0x18) == 0) {
        pdVar5 = (double *)func_0x00d6fa20(param_1,iVar2,0);
      }
      else {
        pdVar5 = *(double **)(iVar2 + 8);
      }
      piVar8 = (int *)(iVar2 + 8);
      *pdVar5 = (double)(int)(*(ushort *)(iVar9 + 4 + uVar4 * 0xc) - 0x8000);
      if (*(uint *)(iVar2 + 0x18) < 2) {
        pdVar5 = (double *)func_0x00d6fa20(param_1,iVar2,1);
      }
      else {
        pdVar5 = (double *)(*piVar8 + 8);
      }
      *pdVar5 = (double)*(byte *)(iVar9 + 8 + uVar4 * 0xc);
      if (uStack_10 != 0) {
        uVar4 = 2;
        iVar9 = 0x10;
        do {
          if (uVar4 < *(uint *)(iVar2 + 0x18)) {
            pdVar5 = (double *)(*piVar8 + iVar9);
          }
          else {
            pdVar5 = (double *)func_0x00d6fa20(param_1,iVar2,uVar4);
          }
          iVar3 = *piVar7;
          iVar9 = iVar9 + 8;
          piVar7 = piVar7 + 1;
          uVar4 = uVar4 + 1;
          uStack_10 = uStack_10 - 1;
          *pdVar5 = (double)iVar3;
        } while (uStack_10 != 0);
      }
      if (uVar1 < *(uint *)(iVar2 + 0x18)) {
        puVar6 = (undefined8 *)(*piVar8 + uVar1 * 8);
      }
      else {
        puVar6 = (undefined8 *)func_0x00d6fa20(param_1,iVar2,uVar1);
      }
      *puVar6 = 0xc170000000000000;
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00d89a80(int param_1)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = func_0x00d8df80(param_1,1);
  if ((((uVar4 != 0) && (uVar4 < *(uint *)(*(int *)(param_1 + 8) + 0x2f8))) &&
      (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x2f0) + uVar4 * 4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x34) != 0)) {
    uVar5 = FUN_00d6e6c0(param_1,*(int *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x30));
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar2 + -8) = uVar5;
    *(undefined4 *)(iVar2 + -4) = 0xfffffffb;
    pdVar3 = *(double **)(param_1 + 0x14);
    *(double **)(param_1 + 0x14) = pdVar3 + 1;
    *pdVar3 = (double)*(int *)(iVar1 + 0x34);
    pdVar3 = *(double **)(param_1 + 0x14);
    *(double **)(param_1 + 0x14) = pdVar3 + 1;
    *pdVar3 = (double)*(int *)(iVar1 + 0x38);
    return 3;
  }
  return 0;
}



undefined4 FUN_00d89b10(int param_1)

{
  uint uVar1;
  
  uVar1 = func_0x00d8df80(param_1,1);
  if (uVar1 < 0x200) {
    *(double *)(*(int *)(param_1 + 0x14) + -8) =
         (double)(int)(*(int *)(*(int *)(param_1 + 8) + 0x800 + (uVar1 >> 5) * 4) +
                      (uVar1 & 0x1f) * 4);
    return 1;
  }
  return 0;
}



undefined4 FUN_00d89b60(int param_1)

{
  uint uVar1;
  
  uVar1 = func_0x00d8df80(param_1,1);
  if (uVar1 < 0x71) {
    *(double *)(*(int *)(param_1 + 0x14) + -8) = (double)(int)(&PTR_FUN_010cdd48)[uVar1 * 2];
    return 1;
  }
  return 0;
}



undefined4 FUN_00d89ba0(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  int iStack_c;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  if (iVar10 == 0) {
    *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) & 0xf3ffffff | 0x3ff0000;
  }
  else {
    iStack_c = 1;
    if (0 < iVar10) {
      do {
        iVar6 = func_0x00d8e1f0(param_1,iStack_c);
        cVar1 = *(char *)(iVar6 + 0x14);
        pcVar7 = (char *)(iVar6 + 0x14);
        if (((byte)(cVar1 - 0x30U) < 10) && (*(char *)(iVar6 + 0x15) == '\0')) {
          if (cVar1 == '0') {
            *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) & 0xf000ffff;
          }
          else if (cVar1 == '1') {
            *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) & 0xf000ffff | 0x70000;
          }
          else {
            uVar11 = 0x3ff0000;
            if (cVar1 == '2') {
              uVar11 = 0x670000;
            }
            *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) & 0xf000ffff | uVar11;
          }
        }
        else {
          cVar1 = *pcVar7;
          bVar4 = true;
          pbVar13 = &DAT_010cd170;
          if (cVar1 == '+') {
            pcVar12 = (char *)(iVar6 + 0x15);
          }
          else {
            if (cVar1 == '-') {
              pcVar12 = (char *)(iVar6 + 0x15);
            }
            else {
              pcVar12 = pcVar7;
              if ((cVar1 != 'n') || (*(char *)(iVar6 + 0x15) != 'o')) goto LAB_00d89caf;
              pcVar12 = pcVar7 + (*(char *)(iVar6 + 0x16) == '-') + 2;
            }
            bVar4 = false;
          }
LAB_00d89caf:
          uVar11 = 0x10000;
          uVar14 = 4;
          do {
            iVar6 = func_0x008ab040(pcVar12,pbVar13 + 1,uVar14);
            if ((iVar6 == 0) && (pcVar12[uVar14] == '\0')) {
              if (bVar4) {
                *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) | uVar11;
              }
              else {
                *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) & ~uVar11;
              }
              goto LAB_00d89d93;
            }
            uVar11 = uVar11 * 2;
            pbVar13 = pbVar13 + uVar14 + 1;
            uVar14 = (uint)*pbVar13;
          } while (uVar14 != 0);
          pbVar13 = &DAT_010cd240;
          iVar6 = 0;
          while( true ) {
            uVar11 = (uint)*pbVar13;
            iVar8 = func_0x008ab040(pcVar7,pbVar13 + 1,uVar11);
            if ((iVar8 == 0) && (pcVar7[uVar11] == '=')) break;
            iVar6 = iVar6 + 1;
            pbVar13 = pbVar13 + uVar11 + 1;
            if (0xe < iVar6) goto LAB_00d89daf;
          }
          pcVar12 = pcVar7 + uVar11 + 1;
          iVar8 = 0;
          cVar1 = *pcVar12;
          if ('/' < cVar1) {
            uVar5 = CONCAT11(cVar1,cVar1);
            do {
              if (0x39 < (byte)uVar5) break;
              pcVar12 = pcVar12 + 1;
              iVar8 = (uint)(uVar5 >> 8) + (iVar8 * 5 + -0x18) * 2;
              cVar1 = *pcVar12;
              uVar5 = CONCAT11(cVar1,cVar1);
            } while ('/' < cVar1);
          }
          if (*pcVar12 != '\0') {
LAB_00d89daf:
            func_0x00d67710(param_1,0x858,pcVar7);
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return uVar9;
          }
          *(int *)(iVar2 + 0x7c4 + iVar6 * 4) = iVar8;
          if (iVar6 == 6) {
            func_0x00d7fe00(iVar2);
          }
        }
LAB_00d89d93:
        iStack_c = iStack_c + 1;
      } while (iStack_c <= iVar10);
    }
  }
  return 0;
}



undefined4 FUN_00d89dc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xb8);
  iVar3 = func_0x00d8e340(param_1,1);
  uVar4 = func_0x00d8df50(param_1,2);
  uVar5 = func_0x00d66430(param_1);
  uStack_10 = 0x74;
  uStack_c = 0x80000000;
  puVar6 = (undefined4 *)func_0x00d6f900(param_1,iVar1,&uStack_10);
  *puVar6 = uVar5;
  puVar6[1] = 0xfffffff9;
  uStack_10 = 0x66;
  uStack_c = 0x80000000;
  puVar6 = (undefined4 *)func_0x00d6f900(param_1,iVar1,&uStack_10);
  *puVar6 = uVar4;
  puVar6[1] = 0xfffffff7;
  if ((*(byte *)(iVar1 + 4) & 4) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0x24);
    *(int *)(iVar2 + 0x24) = iVar1;
  }
  if (iVar3 == 0) {
    puVar7 = &DAT_0112e1b4;
  }
  else {
    puVar7 = (undefined1 *)(iVar3 + 0x14);
  }
  func_0x00d82250(param_1,puVar7,FUN_00d89fe0,uVar5);
  return 0;
}



undefined4 FUN_00d89ea0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  func_0x00d82450(param_1);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xb8);
  uStack_10 = 0x74;
  uStack_c = 0x80000000;
  iVar2 = func_0x00d6f900(param_1,iVar1,&uStack_10);
  *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  uStack_10 = 0x66;
  uStack_c = 0x80000000;
  iVar2 = func_0x00d6f900(param_1,iVar1,&uStack_10);
  *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  if ((*(byte *)(iVar1 + 4) & 4) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0x24);
    *(int *)(iVar2 + 0x24) = iVar1;
  }
  return 0;
}



undefined4 FUN_00d89f30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1;
  iVar5 = 0;
  piVar1 = *(int **)(param_1 + 0x10);
  iVar6 = param_1;
  if ((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -7)) {
    iVar6 = *piVar1;
    iVar5 = 1;
  }
  iVar3 = func_0x00d8e1f0(param_1,iVar5 + 1);
  uVar4 = func_0x00d8df80(iVar2,iVar5 + 2);
  uVar4 = func_0x00d82200(iVar6,iVar3 + 0x14,uVar4,&param_1);
  func_0x00d66780(iVar2,uVar4,param_1);
  return 1;
}



void FUN_00d89fe0(int param_1,int param_2,int param_3,undefined1 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  double *pdVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uStack_11;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = 0x66;
  uStack_c = 0x80000000;
  puVar6 = (undefined4 *)
           func_0x00d6f1b0(param_2,*(undefined4 *)(*(int *)(param_2 + 8) + 0xb8),&uStack_10);
  if (puVar6[1] == -9) {
    uStack_11 = param_4;
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x14) = puVar2 + 2;
    *puVar2 = *puVar6;
    puVar2[1] = 0xfffffff7;
    piVar3 = *(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = piVar3 + 2;
    *piVar3 = param_2;
    piVar3[1] = -7;
    pdVar4 = *(double **)(param_1 + 0x14);
    *pdVar4 = (double)param_3;
    *(double **)(param_1 + 0x14) = pdVar4 + 2;
    uVar7 = FUN_00d6e6c0(param_1,&uStack_11,1);
    *(undefined4 *)(pdVar4 + 1) = uVar7;
    *(undefined4 *)((int)pdVar4 + 0xc) = 0xfffffffb;
    iVar8 = func_0x00d665c0(param_1,3,0,0);
    if (iVar8 != 0) {
      pcVar5 = *(code **)(*(int *)(param_1 + 8) + 0xe8);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(param_1);
      }
      func_0x00e8791d(1);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + 0x260);
    *puVar1 = *puVar1 & 0xffffffef;
  }
  return;
}



void FUN_00d8a0c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_34 [8];
  uint uStack_2c;
  uint auStack_24 [4];
  undefined1 auStack_14 [4];
  uint uStack_10;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_34;
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = func_0x0044ecf1(0,auStack_24);
  if (iVar2 != 0) {
    iVar2 = func_0x0044ecf1(1,auStack_34);
    if ((iVar2 != 0) &&
       (uVar3 = (uStack_2c >> 0x13 & 1) << 5 | (uStack_2c & 1) << 4, 6 < auStack_24[0])) {
      func_0x0044ecf1(7,auStack_14);
      uVar3 = uVar3 | (uStack_10 >> 8 & 1) << 6;
    }
  }
  *(uint *)(iVar1 + 0x220) = uVar3 | 0x3ff0001;
  *(undefined4 *)(iVar1 + 0x7c4) = 1000;
  *(undefined4 *)(iVar1 + 0x7c8) = 4000;
  *(undefined4 *)(iVar1 + 0x7cc) = 500;
  *(undefined4 *)(iVar1 + 2000) = 100;
  *(undefined4 *)(iVar1 + 0x7d4) = 500;
  *(undefined4 *)(iVar1 + 0x7d8) = 0;
  *(undefined4 *)(iVar1 + 0x7dc) = 0x38;
  *(undefined4 *)(iVar1 + 0x7e0) = 10;
  *(undefined4 *)(iVar1 + 0x7e4) = 4;
  *(undefined4 *)(iVar1 + 0x7e8) = 4;
  *(undefined4 *)(iVar1 + 0x7ec) = 0xf;
  *(undefined4 *)(iVar1 + 0x7f0) = 3;
  *(undefined8 *)(iVar1 + 0x7f4) = 0x4000000002;
  *(undefined4 *)(iVar1 + 0x7fc) = 0x200;
  func_0x00d7fe40(*(undefined4 *)(param_1 + 8));
  func_0x00d66780(param_1,"Windows",7);
  func_0x00d66780(param_1,&DAT_01198398,3);
  func_0x00d66720(param_1,0x4e84);
  func_0x00d66780(param_1,"LuaJIT 2.1.0-beta3",0x12);
  func_0x00d8e4c0(param_1,&DAT_010cb794,&DAT_010ccf88,&PTR_FUN_010ccf70);
  func_0x00d8e430(param_1,"jit.profile",FUN_00d8a240,*(undefined4 *)(param_1 + 0x24));
  func_0x00d8e430(param_1,"jit.util",FUN_00d8a260,*(undefined4 *)(param_1 + 0x24));
  func_0x00d8e4c0(param_1,"jit.opt",&DAT_010cd098,&PTR_FUN_010cd094);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0x10;
  FUN_008ab370();
  return;
}



undefined4 FUN_00d8a240(undefined4 param_1)

{
  func_0x00d8e4c0(param_1,0,&DAT_010cd0b0,&PTR_FUN_010cd0a4);
  return 1;
}



undefined4 FUN_00d8a260(undefined4 param_1)

{
  func_0x00d8e4c0(param_1,0,&DAT_010cd028,&PTR_FUN_010ccffc);
  return 1;
}



undefined4 FUN_00d8a320(uint param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0xfc);
  *(uint *)(iVar5 + 0xc) = param_1;
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  param_1 = 0;
  if ((puVar1 + 2 < *(undefined4 **)(iVar3 + 0x14)) && (puVar1[1] == -0xb)) {
    uVar4 = func_0x00d8c010(iVar5,*puVar1,puVar1 + 2,&uStack_4,&param_1);
    if ((param_1 & 1) != 0) {
      uVar4 = func_0x00d8bad0(iVar3,iVar5,uVar4,0);
      return uVar4;
    }
    iVar5 = func_0x00d8bf20(iVar5,uVar4,*(int *)(iVar3 + 0x14) + -8,uStack_4);
    if ((iVar5 != 0) && (*(uint *)(*(int *)(iVar3 + 8) + 0xc) <= *(uint *)(*(int *)(iVar3 + 8) + 8))
       ) {
      func_0x00d6c6d0();
    }
    return 1;
  }
  func_0x00d67550(iVar3,1,10);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



undefined4 FUN_00d8a3c0(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_4;
  
  iVar4 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xfc);
  *(uint *)(iVar1 + 0xc) = param_1;
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  param_1 = 0;
  if ((puVar2 + 4 < *(undefined4 **)(iVar4 + 0x14)) && (puVar2[1] == -0xb)) {
    uVar5 = func_0x00d8c010(iVar1,*puVar2,puVar2 + 2,&uStack_4,&param_1);
    if ((param_1 & 1) == 0) {
      func_0x00d8c540(iVar1,uVar5,uStack_4,puVar2 + 4,param_1);
      return 0;
    }
    if ((param_1 & 0x2000000) == 0) {
      uVar5 = func_0x00d8bad0(iVar4,iVar1,uVar5,1);
      return uVar5;
    }
  }
  else {
    func_0x00d67550(iVar4,1,10);
  }
  func_0x00d67660(iVar4,0xe32);
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}



void FUN_00d8a460(int param_1)

{
  func_0x00da6840(param_1,*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 6) - 0xa2);
  return;
}



undefined4 FUN_00d8a480(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  uint *puVar12;
  int iStack_8;
  undefined4 *puStack_4;
  int *piVar11;
  
  iVar4 = param_1;
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar1[3] = param_1;
  iVar5 = func_0x00d8b990(param_1,piVar1,0);
  puVar12 = (uint *)(iVar5 * 0x10 + *piVar1);
  uVar6 = *puVar12;
  while ((uVar6 & 0xf0000000) == 0x80000000) {
    puVar12 = (uint *)((uVar6 & 0xffff) * 0x10 + *piVar1);
    uVar6 = *puVar12;
  }
  puStack_4 = (undefined4 *)func_0x00d7ee90(piVar1,iVar5,&param_1);
  piVar10 = *(int **)(iVar4 + 0x10);
  if (((uint)puStack_4 & 0x100000) != 0) {
    piVar11 = *(int **)(*(int *)(iVar4 + 8) + 0xfc);
    piVar11[3] = iVar4;
    uVar6 = *(int *)(iVar4 + 0x10) + 8;
    if (*(uint *)(iVar4 + 0x14) <= uVar6) {
      func_0x00d67530(iVar4,2,0x227);
      goto LAB_00d8a65b;
    }
    func_0x00da4730(piVar11,*piVar11 + 0x90,&iStack_8,uVar6,0x200);
    param_1 = func_0x00d7f6f0(piVar1,puVar12,iStack_8);
    piVar10 = piVar10 + 2;
  }
  piVar11 = piVar10 + 2;
  if (param_1 != -1) {
    iStack_8 = func_0x00d8c470(piVar1,iVar5,param_1,puStack_4);
    *piVar10 = iStack_8;
    piVar10[1] = -0xb;
    func_0x00da4590(piVar1,puVar12,param_1,iStack_8 + 8,piVar11,
                    *(int *)(iVar4 + 0x14) - (int)piVar11 >> 3);
    if (((((*puVar12 & 0xf0000000) == 0x10000000) &&
         (piVar7 = (int *)func_0x00d6ee90(), piVar7 != (int *)0x0)) && (piVar7[1] == -0xc)) &&
       (((iVar5 = *piVar7, iVar5 != 0 && ((*(byte *)(iVar5 + 6) & 4) == 0)) &&
        ((puStack_4 = (undefined4 *)
                      func_0x00d706e0(iVar5,2,*(undefined4 *)(*(int *)(iVar4 + 8) + 0x128)),
         puStack_4 != (undefined4 *)0x0 && (iVar5 = piVar1[5], *(int *)(iVar5 + 0x10) != 0)))))) {
      puVar8 = (undefined4 *)func_0x00d6f900(iVar4,iVar5,piVar10);
      uVar9 = puStack_4[1];
      *puVar8 = *puStack_4;
      puVar8[1] = uVar9;
      if ((*(byte *)(iVar5 + 4) & 4) != 0) {
        iVar2 = *(int *)(iVar4 + 8);
        *(byte *)(iVar5 + 4) = *(byte *)(iVar5 + 4) & 0xfb;
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0x24);
        *(int *)(iVar2 + 0x24) = iVar5;
      }
      *(byte *)(iStack_8 + 4) = *(byte *)(iStack_8 + 4) | 0x10;
    }
    *(int **)(iVar4 + 0x14) = piVar11;
    if (*(uint *)(*(int *)(iVar4 + 8) + 0xc) <= *(uint *)(*(int *)(iVar4 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    return 1;
  }
LAB_00d8a65b:
  func_0x00d67530(iVar4,1,0xbff);
  pcVar3 = (code *)swi(3);
  uVar9 = (*pcVar3)();
  return uVar9;
}



void FUN_00d8a670(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint unaff_EDI;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar1[3] = param_1;
  piVar2 = *(int **)(param_1 + 0x10);
  if ((piVar2 < *(int **)(param_1 + 0x14)) && (piVar2[1] == -0xb)) {
    iVar6 = *piVar2;
    iVar7 = 9;
    uVar5 = (uint)*(ushort *)(iVar6 + 6);
    if (uVar5 == 0x16) {
      uVar5 = *(uint *)(iVar6 + 8);
      iVar7 = 0x13;
    }
    else {
      iVar6 = func_0x00dabcb0(param_1,iVar6);
      if (-1 < iVar6) {
        return;
      }
    }
    for (uVar3 = *(uint *)(*piVar1 + uVar5 * 0x10); (uVar3 & 0xf0000000) == 0x80000000;
        uVar3 = *(uint *)(*piVar1 + (uVar3 & 0xffff) * 0x10)) {
    }
    unaff_EDI = uVar3 & 0xffff;
    if ((uVar3 & 0xf0000000) != 0x20000000) {
      unaff_EDI = uVar5;
    }
    iVar6 = func_0x00d7f220(piVar1,unaff_EDI,iVar7);
    if (iVar6 != 0) {
      func_0x00d70e10(param_1,iVar6);
      return;
    }
    if (iVar7 != 9) {
      FUN_00d8a480(param_1);
      return;
    }
  }
  else {
    func_0x00d67550(param_1,1,10);
  }
  iVar7 = func_0x00d7f380(param_1,unaff_EDI,0);
  func_0x00d67710(param_1,0xd7f,iVar7 + 0x14);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



undefined4 FUN_00d8a770(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  char *pcStack_8;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if ((*(int **)(param_1 + 0x14) <= piVar2) || (piVar2[1] != -0xb)) {
    func_0x00d67550(param_1,1,10);
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  iVar7 = *piVar2;
  uVar8 = (uint)*(ushort *)(iVar7 + 6);
  puVar1 = (uint *)(iVar7 + 8);
  pcStack_8 = "cdata<%s>: %p";
  puVar11 = puVar1;
  if (uVar8 == 0x16) {
    uVar8 = *puVar1;
    pcStack_8 = "ctype<%s>";
  }
  else {
    piVar2 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
    piVar2[3] = param_1;
    iVar3 = *piVar2;
    puVar5 = (uint *)(uVar8 * 0x10 + iVar3);
    uVar10 = *puVar5;
    while ((uVar10 & 0xf0000000) == 0x80000000) {
      puVar5 = (uint *)((uVar10 & 0xffff) * 0x10 + iVar3);
      uVar10 = *puVar5;
    }
    if ((uVar10 & 0xf0800000) == 0x20800000) {
      puVar11 = (uint *)*puVar1;
      do {
        puVar5 = (uint *)((uVar10 & 0xffff) * 0x10 + iVar3);
        uVar10 = *puVar5;
      } while ((uVar10 & 0xf0000000) == 0x80000000);
    }
    if ((uVar10 & 0xf4000000) == 0x34000000) {
      uVar6 = func_0x00d7f480(param_1,puVar1,puVar5[1]);
      iVar7 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar7 + -8) = uVar6;
      *(undefined4 *)(iVar7 + -4) = 0xfffffffb;
      goto LAB_00d8a8c6;
    }
    if ((puVar5[1] == 8) && ((*puVar5 & 0xfc000000) == 0)) {
      uVar6 = func_0x00d7f550(param_1,*puVar1,*(undefined4 *)(iVar7 + 0xc),*puVar5 & 0x800000);
      iVar7 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar7 + -8) = uVar6;
      *(undefined4 *)(iVar7 + -4) = 0xfffffffb;
      goto LAB_00d8a8c6;
    }
    uVar10 = *puVar5;
    uVar9 = uVar10 >> 0x1c;
    if (uVar9 != 6) {
      if (uVar9 != 5) {
        if (uVar9 == 2) {
          puVar11 = (uint *)*puVar11;
          do {
            puVar5 = (uint *)((uVar10 & 0xffff) * 0x10 + *piVar2);
            uVar10 = *puVar5;
          } while ((uVar10 & 0xf0000000) == 0x80000000);
        }
        if ((((uVar10 & 0xf0000000) == 0x10000000) || ((*puVar5 & 0xf8000000) == 0x38000000)) &&
           (iVar7 = func_0x00d7f220(piVar2,(int)puVar5 - *piVar2 >> 4,0x12), iVar7 != 0)) {
          uVar6 = func_0x00d70e10(param_1,iVar7);
          return uVar6;
        }
        goto LAB_00d8a8a8;
      }
      pcStack_8 = "cdata<%s>: %d";
    }
    puVar11 = (uint *)*puVar11;
  }
LAB_00d8a8a8:
  iVar7 = func_0x00d7f380(param_1,uVar8,0,puVar11);
  func_0x00d744e0(param_1,pcStack_8,iVar7 + 0x14);
LAB_00d8a8c6:
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



void FUN_00d8a970(undefined4 param_1)

{
  func_0x00d8bbe0(param_1,0x14);
  return;
}



void FUN_00d8a980(undefined4 param_1)

{
  func_0x00d8bbe0(param_1,0x15);
  return;
}



undefined4 FUN_00d8a990(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  
  piVar5 = *(int **)(param_1 + 0x10);
  if (((piVar5 < *(int **)(param_1 + 0x14)) && (piVar5[1] == -0xd)) &&
     (*(char *)(*piVar5 + 6) == '\x02')) {
    if ((piVar5 + 2 < *(int **)(param_1 + 0x14)) && (piVar5[3] == -5)) {
      piVar5 = (int *)func_0x00dac100(param_1,*piVar5 + 0x18,piVar5[2]);
      if (piVar5[1] == -0xb) {
        piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
        piVar1[3] = param_1;
        iVar6 = *piVar1;
        uVar9 = *(uint *)(iVar6 + (uint)*(ushort *)(*piVar5 + 6) * 0x10);
        if ((uVar9 & 0xf0000000) == 0xc0000000) {
          uVar9 = uVar9 & 0xffff;
          puVar8 = (uint *)(uVar9 * 0x10 + iVar6);
          uVar2 = *puVar8;
          while ((uVar2 & 0xf0000000) == 0x80000000) {
            puVar8 = (uint *)((uVar2 & 0xffff) * 0x10 + iVar6);
            uVar2 = *puVar8;
          }
          iVar6 = func_0x00da4c80(piVar1,puVar8,uVar9,*(int *)(param_1 + 0x14) + -8,
                                  *(undefined4 *)(*piVar5 + 8));
          if ((iVar6 != 0) &&
             (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8))) {
            func_0x00d6c6d0();
          }
          return 1;
        }
      }
      iVar6 = *(int *)(param_1 + 0x14);
      iVar3 = piVar5[1];
      *(int *)(iVar6 + -8) = *piVar5;
      *(int *)(iVar6 + -4) = iVar3;
      return 1;
    }
  }
  else {
    func_0x00d67550(param_1,1,7);
  }
  func_0x00d67550(param_1,2,4);
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return uVar7;
}



undefined4 FUN_00d8aab0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  piVar5 = *(int **)(param_1 + 0x10);
  if (((piVar5 < *(int **)(param_1 + 0x14)) && (piVar5[1] == -0xd)) &&
     (*(char *)(*piVar5 + 6) == '\x02')) {
    if ((*(int **)(param_1 + 0x14) <= piVar5 + 2) || (piVar5[3] != -5)) goto LAB_00d8abc4;
    piVar5 = (int *)func_0x00dac100(param_1,*piVar5 + 0x18,piVar5[2]);
    uVar8 = *(int *)(param_1 + 0x10) + 0x10;
    if ((uVar8 < *(uint *)(param_1 + 0x14)) && (piVar5[1] == -0xb)) {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
      piVar1[3] = param_1;
      iVar2 = *piVar1;
      uVar3 = *(uint *)(iVar2 + (uint)*(ushort *)(*piVar5 + 6) * 0x10);
      if ((uVar3 & 0xf0000000) == 0xc0000000) {
        uVar9 = 0;
        puVar7 = (uint *)((uVar3 & 0xffff) * 0x10 + iVar2);
        uVar3 = *puVar7;
        while ((uVar3 & 0xf0000000) == 0x80000000) {
          if (*(char *)((int)puVar7 + 2) == '\x01') {
            uVar9 = uVar9 | puVar7[1];
          }
          puVar7 = (uint *)((uVar3 & 0xffff) * 0x10 + iVar2);
          uVar3 = *puVar7;
        }
        if (((uVar3 | uVar9) & 0x2000000) == 0) {
          func_0x00da4730(piVar1,puVar7,*(undefined4 *)(*piVar5 + 8),uVar8,0);
          return 0;
        }
      }
    }
  }
  else {
    func_0x00d67550(param_1,1,7);
  }
  func_0x00d67660(param_1,0xe32);
LAB_00d8abc4:
  func_0x00d67550(param_1,2,4);
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return uVar6;
}



undefined4 FUN_00d8abd0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (*(char *)(*piVar1 + 6) == '\x02')) {
    func_0x00dac420(*piVar1 + 0x18);
  }
  return 0;
}



void FUN_00d8ac00(undefined4 param_1)

{
  func_0x00d8b860(param_1,0);
  return;
}



void FUN_00d8ac10(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00d8df50(param_1,2);
  func_0x00d8b860(param_1,uVar1);
  return;
}



void FUN_00d8ac30(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_58 [24];
  int iStack_40;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_10;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_58;
  iStack_40 = func_0x00d8e1f0(param_1,1);
  iStack_40 = iStack_40 + 0x14;
  iStack_2c = param_1;
  iStack_28 = *(int *)(*(int *)(param_1 + 8) + 0xfc);
  *(int *)(iStack_28 + 0xc) = param_1;
  iStack_24 = *(int *)(param_1 + 0x10) + 8;
  uStack_10 = 5;
  iStack_20 = iStack_40;
  iVar2 = func_0x00dab6a0(auStack_58);
  if (iVar2 == 0) {
    if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    FUN_008ab370();
    return;
  }
  func_0x00d67230();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00d8acc0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar1[3] = param_1;
  uVar3 = func_0x00d8b990(param_1,piVar1,0);
  puVar8 = (uint *)(uVar3 * 0x10 + *piVar1);
  uVar7 = *puVar8;
  while ((uVar7 & 0xf0000000) == 0x80000000) {
    puVar8 = (uint *)((uVar7 & 0xffff) * 0x10 + *piVar1);
    uVar7 = *puVar8;
  }
  piVar4 = (int *)func_0x00d8df20(param_1,2);
  *(int **)(param_1 + 0x14) = piVar4 + 2;
  uVar7 = *puVar8 >> 0x1c;
  if (((uVar7 != 0) && (uVar7 != 2)) && (uVar7 != 5)) {
    func_0x00d67530(param_1,1,0xbf0);
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if ((piVar4[1] != -0xb) || (*(ushort *)(*piVar4 + 6) != uVar3)) {
    iVar5 = FUN_00d6caa0();
    *(undefined1 *)(iVar5 + 5) = 10;
    *(short *)(iVar5 + 6) = (short)uVar3;
    func_0x00da4730(piVar1,puVar8,iVar5 + 8,piVar4,1);
    *piVar4 = iVar5;
    piVar4[1] = -0xb;
    if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
      func_0x00d6c6d0();
    }
  }
  return 1;
}



undefined4 FUN_00d8adc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xfc);
  *(int *)(iVar1 + 0xc) = param_1;
  uVar2 = func_0x00d8b990(param_1,iVar1,*(int *)(param_1 + 0x10) + 8);
  iVar3 = FUN_00d6caa0();
  *(undefined1 *)(iVar3 + 5) = 10;
  *(undefined2 *)(iVar3 + 6) = 0x16;
  *(undefined4 *)(iVar3 + 8) = uVar2;
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(iVar1 + -8) = iVar3;
  *(undefined4 *)(iVar1 + -4) = 0xfffffff5;
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00d8ae30(uint param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  double *pdVar7;
  undefined4 uVar8;
  int *piVar9;
  
  uVar5 = param_1;
  piVar9 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar9[3] = param_1;
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar2[3] = param_1;
  if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x10)) {
    func_0x00d67530(param_1,1,0x227);
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return uVar8;
  }
  func_0x00da4730(piVar2,*piVar2 + 0x90,&param_1,*(uint *)(param_1 + 0x10),0x100);
  if ((param_1 != 0) && (param_1 < (uint)piVar9[1])) {
    piVar9 = (int *)(param_1 * 0x10 + *piVar9);
    func_0x00d65e70(uVar5,0,4);
    iVar3 = *piVar9;
    uVar8 = *(undefined4 *)(*(int *)(uVar5 + 0x14) + -8);
    uVar6 = FUN_00d6e6c0(uVar5,&DAT_011987c4,4);
    pdVar7 = (double *)func_0x00d6fab0(uVar5,uVar8,uVar6);
    *pdVar7 = (double)iVar3;
    iVar3 = piVar9[1];
    if (iVar3 != -1) {
      uVar6 = FUN_00d6e6c0(uVar5,&DAT_0113cdc0,4);
      pdVar7 = (double *)func_0x00d6fab0(uVar5,uVar8,uVar6);
      *pdVar7 = (double)iVar3;
    }
    uVar1 = *(ushort *)(piVar9 + 2);
    if (uVar1 != 0) {
      uVar6 = FUN_00d6e6c0(uVar5,&DAT_010cd548,3);
      pdVar7 = (double *)func_0x00d6fab0(uVar5,uVar8,uVar6);
      *pdVar7 = (double)uVar1;
    }
    iVar3 = piVar9[3];
    if (iVar3 != 0) {
      if ((~*(byte *)(*(int *)(uVar5 + 8) + 0x10) & *(byte *)(iVar3 + 4) & 3) != 0) {
        *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) ^ 3;
      }
      uVar6 = FUN_00d6e6c0(uVar5,&DAT_0113c348,4);
      piVar9 = (int *)func_0x00d6fab0(uVar5,uVar8,uVar6);
      *piVar9 = iVar3;
      piVar9[1] = -5;
    }
    if (*(uint *)(*(int *)(uVar5 + 8) + 0xc) <= *(uint *)(*(int *)(uVar5 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_00d8afa0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar1[3] = param_1;
  uVar2 = func_0x00d8b990(param_1,piVar1,0);
  piVar3 = (int *)func_0x00d8df20(param_1,2);
  uVar8 = 0;
  if (piVar3[1] == -0xb) {
    uVar6 = (uint)*(ushort *)(*piVar3 + 6);
    if (uVar6 == 0x16) {
      uVar6 = *(uint *)(*piVar3 + 8);
    }
    puVar4 = (uint *)func_0x00d7f340(piVar1,uVar2);
    puVar5 = (uint *)func_0x00d7f340(piVar1,uVar6);
    if (puVar4 == puVar5) {
      uVar8 = 1;
    }
    else {
      uVar6 = *puVar5;
      uVar7 = *puVar4 >> 0x1c;
      if ((uVar7 == uVar6 >> 0x1c) && (puVar4[1] == puVar5[1])) {
        if ((*puVar4 & 0xe0000000) == 0x20000000) {
          uVar8 = func_0x00da3da0(piVar1,puVar4,puVar5,8);
        }
        else if ((uVar7 == 0) || (uVar7 == 4)) {
          uVar8 = (uint)(((*puVar4 ^ uVar6) & 0xfcbfffff) == 0);
        }
      }
      else if ((uVar7 == 1) && (uVar6 >> 0x1c == 2)) {
        do {
          puVar5 = (uint *)((uVar6 & 0xffff) * 0x10 + *piVar1);
          uVar6 = *puVar5;
        } while ((uVar6 & 0xf0000000) == 0x80000000);
        uVar8 = (uint)(puVar4 == puVar5);
      }
    }
  }
  *(uint *)(*(int *)(param_1 + 0x14) + -4) = -2 - uVar8;
  *(uint *)(*(int *)(param_1 + 8) + 0x9c) = -2 - uVar8;
  return 1;
}


