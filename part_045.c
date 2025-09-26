


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8e50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = func_0x00ba70c0(&stack0x00000000);
  if (iVar1 == 0) {
    _DAT_013dec04 = iVar1;
    return;
  }
  uVar2 = func_0x00bf85f0();
  func_0x00ba71a0(unaff_retaddr);
  _DAT_013dec04 = uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8e90(void)

{
  _DAT_013dec0c = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8ea0(void)

{
  _DAT_013dec14 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8eb0(void)

{
  func_0x00bf10a0();
  _DAT_013dec1c = 1;
  _DAT_013dec24 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8ed0(void)

{
  _DAT_013dec04 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8ee0(void)

{
  _DAT_013debf4 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8ef0(void)

{
  int iVar1;
  
  iVar1 = func_0x008ab7cf(FUN_00bb8f10);
  _DAT_013debf4 = (uint)(iVar1 != 0);
  return;
}



undefined4 FUN_00bb8f10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((DAT_013debe8 != 0) && (DAT_013debc8 == 0)) {
    DAT_013debc8 = 1;
    func_0x00bbef10();
    puVar2 = DAT_013debcc;
    while (puVar2 != (undefined4 *)0x0) {
      (*(code *)*puVar2)();
      puVar1 = (undefined4 *)puVar2[1];
      FUN_00bbc580(puVar2,"crypto\\init.c",0x17e);
      puVar2 = puVar1;
    }
    DAT_013debcc = (undefined4 *)0x0;
    func_0x00bbb370(DAT_013debd8);
    DAT_013debd8 = 0;
    func_0x00bbb370(DAT_013debdc);
    DAT_013debdc = 0;
    func_0x00bbb2e0(&DAT_013debe0);
    _guard_check_icall();
    _guard_check_icall();
    _guard_check_icall();
    if (DAT_013dec2c != 0) {
      func_0x00bf2320();
    }
    func_0x00bc5b20();
    func_0x00bf1ca0();
    func_0x00bf84c0();
    func_0x00bf8790();
    func_0x00befd90();
    func_0x00bbf400();
    func_0x00bab7f0();
    func_0x00bf0ee0();
    func_0x00bc3470();
    func_0x00ba6e00();
    func_0x00bee6e0();
    func_0x00bf87a0();
    _guard_check_icall();
    DAT_013debe8 = 0;
  }
  return 0;
}



void FUN_00bba080(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if ((iVar1 != 0) && ((param_1[4] & 2U) == 0)) {
      if ((param_1[4] & 8U) == 0) {
        FUN_00bbc6c0(iVar1,param_1[2] * 4,"crypto\\bn\\bn_lib.c",0xd0);
      }
      else {
        FUN_00bee500(iVar1,param_1[2] * 4,"crypto\\bn\\bn_lib.c",0xce);
      }
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      func_0x00401320(param_1,0x14);
      FUN_00bbc580(param_1,"crypto\\bn\\bn_lib.c",0xde);
    }
  }
  return;
}



void FUN_00bba400(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1[4] & 2) == 0) {
      if ((param_1[4] & 8) == 0) {
        FUN_00bbc580(*param_1,"crypto\\bn\\bn_lib.c",0xd2);
      }
      else {
        FUN_00bee500(*param_1,param_1[2] << 2,"crypto\\bn\\bn_lib.c",0xce);
      }
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      FUN_00bbc580(param_1,"crypto\\bn\\bn_lib.c",0xe9);
    }
  }
  return;
}



void FUN_00bbb5f0(undefined4 param_1)

{
  DWORD *pDVar1;
  DWORD dwErrCode;
  LPVOID pvVar2;
  
  pDVar1 = (DWORD *)func_0x00beff20(param_1);
  dwErrCode = GetLastError();
  pvVar2 = TlsGetValue(*pDVar1);
  SetLastError(dwErrCode);
  FUN_00bbc580(pvVar2,"crypto\\threads_win.c",0xf4);
  TlsSetValue(*pDVar1,(LPVOID)0x0);
  return;
}



undefined4 FUN_00bbba70(undefined4 *param_1)

{
  return *param_1;
}



int FUN_00bbc4f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((code *)PTR_FUN_012b5b00 == FUN_00bbc4f0) {
    if (param_1 == 0) {
      return 0;
    }
    if (DAT_012b5afc != 0) {
      DAT_012b5afc = 0;
    }
    iVar1 = func_0x008aafe4(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_012b5b00)(param_1,param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) || (param_3 != 0)) {
    FUN_00bc4f50();
    func_0x00bc5050(param_2,param_3,0);
    func_0x00bc5160(0xf,0xc0100,0);
  }
  return 0;
}



void FUN_00bbc580(void *param_1)

{
  if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
                    // WARNING: Could not recover jumptable at 0x00bbc58c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)PTR_FUN_012b5b08)();
    return;
  }
  free(param_1);
  return;
}



undefined4 FUN_00bbc5a0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((code *)PTR_FUN_012b5b04 != FUN_00bbc5a0) {
                    // WARNING: Could not recover jumptable at 0x00bbc5ac. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*(code *)PTR_FUN_012b5b04)();
    return uVar1;
  }
  if (param_1 == (void *)0x0) {
    uVar1 = FUN_00bbc4f0(param_2,param_3,param_4);
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = func_0x008ab004(param_1,param_2);
    return uVar1;
  }
  if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
    (*(code *)PTR_FUN_012b5b08)(param_1,param_3,param_4);
    return 0;
  }
  free(param_1);
  return 0;
}



void FUN_00bbc6c0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      func_0x00401320(param_1,param_2);
    }
    if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
      (*(code *)PTR_FUN_012b5b08)(param_1,param_3,param_4);
      return;
    }
    free(param_1);
  }
  return;
}



void * FUN_00bbc710(void *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = (void *)FUN_00bbc4f0(param_3,param_4,param_5);
    return pvVar1;
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      func_0x00401320(param_1,param_2);
    }
    if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
      (*(code *)PTR_FUN_012b5b08)(param_1,param_4,param_5);
      return (void *)0x0;
    }
    free(param_1);
    return (void *)0x0;
  }
  if (param_3 < param_2) {
    func_0x00401320((int)param_1 + param_3,param_2 - param_3);
    return param_1;
  }
  pvVar1 = (void *)FUN_00bbc4f0(param_3,param_4,param_5);
  if (pvVar1 != (void *)0x0) {
    memcpy(pvVar1,param_1,param_2);
    if (param_2 != 0) {
      func_0x00401320(param_1,param_2);
    }
    if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
      (*(code *)PTR_FUN_012b5b08)(param_1,param_4,param_5);
      return pvVar1;
    }
    free(param_1);
  }
  return pvVar1;
}



void * FUN_00bbc830(undefined4 param_1,size_t param_2,int param_3,int param_4)

{
  void *_Dst;
  
  func_0x00e87f70();
  if ((code *)PTR_FUN_012b5b00 == FUN_00bbc4f0) {
    if (param_2 == 0) {
      return (void *)0x0;
    }
    if (DAT_012b5afc != 0) {
      DAT_012b5afc = 0;
    }
    _Dst = (void *)func_0x008aafe4(param_2);
    if (_Dst != (void *)0x0) goto LAB_00bbc898;
  }
  else {
    _Dst = (void *)(*(code *)PTR_FUN_012b5b00)(param_2,param_3,param_4);
    if (_Dst != (void *)0x0) {
LAB_00bbc898:
      memset(_Dst,0,param_2);
      return _Dst;
    }
    if (param_2 == 0) {
      return (void *)0x0;
    }
  }
  if ((param_3 != 0) || (param_4 != 0)) {
    FUN_00bc4f50();
    func_0x00bc5050(param_3,param_4,0);
    func_0x00bc5160(0xf,0xc0100,0);
  }
  return (void *)0x0;
}



uint FUN_00bbcb30(uint param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_retaddr;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  func_0x00e87f70();
  iVar1 = func_0x00bbcb90(&stack0x0000000c,0,&stack0x00000010,&param_1,&stack0x00000000,
                          in_stack_00000014,in_stack_00000018);
  if ((iVar1 != 0) && (unaff_retaddr == 0)) {
    uVar2 = 0xffffffff;
    if (param_1 < 0x80000000) {
      uVar2 = param_1;
    }
    return uVar2;
  }
  return 0xffffffff;
}



uint FUN_00bbe5f0(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x00e87f70();
  uVar5 = 0;
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    uVar3 = 0x100;
    do {
      param_2 = param_2 + 1;
      uVar4 = (int)cVar1 | uVar3;
      uVar3 = uVar3 + 0x100;
      uVar2 = (uVar4 >> 2 ^ uVar4) & 0xf;
      cVar1 = *param_2;
      uVar5 = (uVar5 << (sbyte)uVar2 | uVar5 >> (ulonglong)(0x20 - uVar2)) ^ uVar4 * uVar4;
    } while (cVar1 != '\0');
    return uVar5 ^ uVar5 >> 0x10;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bbef60(void)

{
  int *piVar1;
  int iVar2;
  
  DAT_013dec80 = (int *)FUN_00bbc830(8,"crypto\\initthread.c",0x3c);
  if (DAT_013dec80 != (int *)0x0) {
    iVar2 = func_0x00bd1790();
    *DAT_013dec80 = iVar2;
    iVar2 = func_0x00bbb390();
    piVar1 = DAT_013dec80;
    DAT_013dec80[1] = iVar2;
    if ((*piVar1 != 0) && (iVar2 != 0)) {
      _DAT_013dec88 = 1;
      return;
    }
    FUN_00bd1630(*piVar1);
    func_0x00bbb370(DAT_013dec80[1]);
    FUN_00bbc580(DAT_013dec80,"crypto\\initthread.c",0x45);
    DAT_013dec80 = (int *)0x0;
  }
  _DAT_013dec88 = 0;
  return;
}



void FUN_00bbf270(undefined4 param_1)

{
  func_0x00bbf340(0,param_1);
  func_0x00bbf2a0(param_1);
  FUN_00bbc580(param_1,"crypto\\initthread.c",199);
  return;
}



int __cdecl _vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x7bf960  99  _vsnwprintf
  puVar1 = (uint *)func_0x00462fc0(_Dest,_Count,_Format,0,_Args);
  iVar2 = func_0x00e87a66(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x7bf9a0  100  _vsnwprintf_l
  puVar1 = (uint *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  iVar2 = func_0x00e87a66(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void FUN_00bc2050(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    (*(code *)param_2[1])(param_1,param_2[2]);
  }
  return;
}



void FUN_00bc2070(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\objects\\o_names.c",0x16c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bc2090(void)

{
  int iVar1;
  int *piVar2;
  int *in_stack_00000014;
  
  func_0x00e87f70();
  if (((in_stack_00000014 != (int *)0x0) &&
      (((DAT_013deca4 < 0 || (DAT_013deca4 == *in_stack_00000014)) &&
       (iVar1 = func_0x00bbb3d0(&DAT_013dec9c,FUN_00bc2180),
       (_DAT_013deca0 & -(uint)(iVar1 != 0)) != 0)))) &&
     (iVar1 = func_0x00bbb470(DAT_013dec94), iVar1 != 0)) {
    piVar2 = (int *)func_0x00bbe070(DAT_013dec90,&stack0x00000000);
    if (piVar2 != (int *)0x0) {
      if (DAT_013dec98 != 0) {
        iVar1 = func_0x00bd1830(DAT_013dec98);
        if (*piVar2 < iVar1) {
          iVar1 = func_0x00bd1a80(DAT_013dec98,*piVar2);
          (**(code **)(iVar1 + 8))(piVar2[2],*piVar2,piVar2[3]);
        }
      }
      FUN_00bbc580(piVar2,"crypto\\objects\\o_names.c",0x10d);
    }
    func_0x00bbb440(DAT_013dec94);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bc2180(void)

{
  undefined4 uVar1;
  
  DAT_013dec90 = 0;
  DAT_013dec94 = func_0x00bbb390();
  if (DAT_013dec94 != 0) {
    uVar1 = func_0x00bbe4d0(FUN_00bc2280,FUN_00bc2220,FUN_00ba7390,FUN_00ba7370,FUN_00ba7380,
                            FUN_00ba7370);
    DAT_013dec90 = func_0x00bbe5c0(uVar1);
  }
  if (DAT_013dec90 == 0) {
    func_0x00bbb370(DAT_013dec94);
    DAT_013dec94 = 0;
    _DAT_013deca0 = 0;
    return;
  }
  _DAT_013deca0 = (uint)(DAT_013dec94 != 0);
  return;
}



void FUN_00bc2220(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 == *param_2) {
    if (DAT_013dec98 != 0) {
      iVar1 = func_0x00bd1830(DAT_013dec98);
      if (*param_1 < iVar1) {
        iVar1 = func_0x00bd1a80(DAT_013dec98,*param_1);
        (**(code **)(iVar1 + 4))(param_1[2],param_2[2]);
        return;
      }
    }
    func_0x00bbbfe0(param_1[2],param_2[2]);
  }
  return;
}



uint FUN_00bc2280(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (DAT_013dec98 != 0) {
    iVar1 = func_0x00bd1830(DAT_013dec98);
    if ((int)*param_1 < iVar1) {
      puVar2 = (undefined4 *)func_0x00bd1a80(DAT_013dec98,*param_1);
      uVar3 = (*(code *)*puVar2)(param_1[2]);
      return *param_1 ^ uVar3;
    }
  }
  uVar3 = func_0x00bbe720(param_1[2]);
  return *param_1 ^ uVar3;
}



uint FUN_00bc2d70(int *param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  uVar5 = *param_1 - *param_2;
  if (uVar5 == 0) {
    puVar2 = (undefined4 *)param_1[1];
    puVar3 = (undefined4 *)param_2[1];
    switch(*param_1) {
    case 0:
      uVar5 = puVar2[3] - puVar3[3];
      if (uVar5 != 0) {
        return uVar5;
      }
      pbVar7 = (byte *)puVar2[4];
      pbVar6 = (byte *)puVar3[4];
      uVar5 = puVar2[3];
      while (uVar4 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar7 != *(int *)pbVar6) goto LAB_00bc2dca;
        pbVar7 = pbVar7 + 4;
        pbVar6 = pbVar6 + 4;
        uVar5 = uVar4;
      }
      if (uVar4 != 0xfffffffc) {
LAB_00bc2dca:
        bVar8 = *pbVar7 < *pbVar6;
        if ((*pbVar7 != *pbVar6) ||
           ((uVar4 != 0xfffffffd &&
            ((bVar8 = pbVar7[1] < pbVar6[1], pbVar7[1] != pbVar6[1] ||
             ((uVar4 != 0xfffffffe &&
              ((bVar8 = pbVar7[2] < pbVar6[2], pbVar7[2] != pbVar6[2] ||
               ((uVar4 != 0xffffffff && (bVar8 = pbVar7[3] < pbVar6[3], pbVar7[3] != pbVar6[3]))))))
             )))))) goto LAB_00bc2df7;
      }
      break;
    case 1:
      pbVar7 = (byte *)*puVar2;
      if (pbVar7 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar6 = (byte *)*puVar3;
      if (pbVar6 == (byte *)0x0) {
        return 1;
      }
      do {
        bVar1 = *pbVar7;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) goto LAB_00bc2df7;
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00bc2df7;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      break;
    case 2:
      pbVar7 = (byte *)puVar2[1];
      if (pbVar7 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar6 = (byte *)puVar3[1];
      if (pbVar6 == (byte *)0x0) {
        return 1;
      }
      while( true ) {
        bVar1 = *pbVar7;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) break;
        if (bVar1 == 0) goto LAB_00bc2e2c;
        bVar1 = pbVar7[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) break;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
        if (bVar1 == 0) {
          return 0;
        }
      }
LAB_00bc2df7:
      return -(uint)bVar8 | 1;
    case 3:
      return puVar2[2] - puVar3[2];
    }
LAB_00bc2e2c:
    uVar5 = 0;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00bc2e90(undefined4 param_1,int *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar22;
  int iVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  
  func_0x00e87f70();
  puVar2 = (undefined4 *)param_2[1];
  switch(*param_2) {
  case 0:
    uVar3 = puVar2[3];
    iVar8 = 0;
    iVar7 = puVar2[4];
    uVar6 = uVar3 << 0x14;
    if (0 < (int)uVar3) {
      if ((7 < uVar3) && (4 < DAT_013ddbb0)) {
        uVar4 = uVar3 & 0x80000007;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
        }
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        uVar25 = 0;
        uVar26 = 0;
        uVar27 = 0;
        uVar28 = 0;
        iVar5 = 4;
        iVar9 = iVar8;
        do {
          iVar8 = iVar9 + 8;
          auVar17._4_4_ = iVar9 + 1;
          auVar17._0_4_ = iVar9;
          auVar17._8_4_ = iVar9 + 2;
          auVar17._12_4_ = iVar9 + 3;
          auVar18 = pmulld(auVar17,_DAT_010569e0);
          iVar9 = auVar18._0_4_;
          iVar22 = auVar18._4_4_;
          iVar23 = auVar18._8_4_;
          iVar24 = auVar18._12_4_;
          auVar10._4_4_ = iVar23;
          auVar10._0_4_ = iVar23;
          auVar10._8_4_ = iVar24;
          auVar10._12_4_ = iVar24;
          auVar10 = pmuldq(auVar10,_DAT_01056a00);
          auVar13._0_8_ = auVar18._0_8_;
          auVar13._8_4_ = iVar22;
          auVar13._12_4_ = iVar22;
          auVar12._8_8_ = auVar13._8_8_;
          auVar12._4_4_ = iVar9;
          auVar12._0_4_ = iVar9;
          auVar14 = pmuldq(auVar12,_DAT_01056a00);
          auVar18._0_4_ = (auVar14._4_4_ >> 2) - (auVar14._4_4_ >> 0x1f);
          auVar18._4_4_ = (auVar14._12_4_ >> 2) - (auVar14._12_4_ >> 0x1f);
          auVar18._8_4_ = (auVar10._4_4_ >> 2) - (auVar10._4_4_ >> 0x1f);
          auVar18._12_4_ = (auVar10._12_4_ >> 2) - (auVar10._12_4_ >> 0x1f);
          auVar10 = pmulld(auVar18,_DAT_010569f0);
          auVar19._0_4_ = iVar9 - auVar10._0_4_;
          auVar19._4_4_ = iVar22 - auVar10._4_4_;
          auVar19._8_4_ = iVar23 - auVar10._8_4_;
          auVar19._12_4_ = iVar24 - auVar10._12_4_;
          auVar10 = pmovzxbd(auVar10,*(undefined4 *)(iVar5 + -4 + iVar7));
          auVar10 = vpsllvd_avx2(auVar10,auVar19);
          uVar29 = uVar29 ^ auVar10._0_4_;
          uVar30 = uVar30 ^ auVar10._4_4_;
          uVar31 = uVar31 ^ auVar10._8_4_;
          uVar32 = uVar32 ^ auVar10._12_4_;
          auVar20._4_4_ = iVar5 + 1;
          auVar20._0_4_ = iVar5;
          auVar20._8_4_ = iVar5 + 2;
          auVar20._12_4_ = iVar5 + 3;
          auVar18 = pmulld(auVar20,_DAT_010569e0);
          iVar9 = auVar18._0_4_;
          iVar22 = auVar18._4_4_;
          iVar23 = auVar18._8_4_;
          iVar24 = auVar18._12_4_;
          auVar14._4_4_ = iVar23;
          auVar14._0_4_ = iVar23;
          auVar14._8_4_ = iVar24;
          auVar14._12_4_ = iVar24;
          auVar10 = pmuldq(auVar14,_DAT_01056a00);
          auVar16._0_8_ = auVar18._0_8_;
          auVar16._8_4_ = iVar22;
          auVar16._12_4_ = iVar22;
          auVar15._8_8_ = auVar16._8_8_;
          auVar15._4_4_ = iVar9;
          auVar15._0_4_ = iVar9;
          auVar18 = pmuldq(auVar15,_DAT_01056a00);
          auVar11._0_4_ = (auVar18._4_4_ >> 2) - (auVar18._4_4_ >> 0x1f);
          auVar11._4_4_ = (auVar18._12_4_ >> 2) - (auVar18._12_4_ >> 0x1f);
          auVar11._8_4_ = (auVar10._4_4_ >> 2) - (auVar10._4_4_ >> 0x1f);
          auVar11._12_4_ = (auVar10._12_4_ >> 2) - (auVar10._12_4_ >> 0x1f);
          auVar10 = pmulld(auVar11,_DAT_010569f0);
          auVar21._0_4_ = iVar9 - auVar10._0_4_;
          auVar21._4_4_ = iVar22 - auVar10._4_4_;
          auVar21._8_4_ = iVar23 - auVar10._8_4_;
          auVar21._12_4_ = iVar24 - auVar10._12_4_;
          auVar10 = pmovzxbd(auVar10,*(undefined4 *)(iVar5 + iVar7));
          auVar10 = vpsllvd_avx2(auVar10,auVar21);
          iVar5 = iVar5 + 8;
          uVar25 = uVar25 ^ auVar10._0_4_;
          uVar26 = uVar26 ^ auVar10._4_4_;
          uVar27 = uVar27 ^ auVar10._8_4_;
          uVar28 = uVar28 ^ auVar10._12_4_;
          iVar9 = iVar8;
        } while (iVar8 < (int)(uVar3 - uVar4));
        uVar6 = uVar6 ^ uVar25 ^ uVar29 ^ uVar27 ^ uVar31 ^ uVar26 ^ uVar30 ^ uVar28 ^ uVar32;
        if ((int)uVar3 <= iVar8) break;
      }
      iVar9 = iVar8 * 3;
      do {
        pbVar1 = (byte *)(iVar7 + iVar8);
        iVar8 = iVar8 + 1;
        iVar7 = iVar9 % 0x18;
        iVar9 = iVar9 + 3;
        uVar6 = uVar6 ^ (uint)*pbVar1 << ((byte)iVar7 & 0x1f);
        iVar7 = *(int *)(param_2[1] + 0x10);
      } while (iVar8 < *(int *)(param_2[1] + 0xc));
    }
    break;
  case 1:
    uVar6 = FUN_00bbe5f0(*puVar2);
    break;
  case 2:
    uVar6 = FUN_00bbe5f0(puVar2[1]);
    break;
  case 3:
    uVar6 = puVar2[2];
    break;
  default:
    return 0;
  }
  return *param_2 << 0x1e | uVar6 & 0x3fffffff;
}



void FUN_00bc3080(int param_1)

{
  uint *puVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x14);
  *puVar1 = *puVar1 | 0xd;
  return;
}



void FUN_00bc30a0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + 8);
  *piVar1 = *piVar1 + 1;
  return;
}



void FUN_00bc30b0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00bfb4c0(*(undefined4 *)(param_1 + 4));
  }
  FUN_00bbc580(param_1,"crypto\\objects\\obj_dat.c",0xd0);
  return;
}



uint FUN_00bc30e0(int *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (&PTR_s_undefined_01042c04)[*param_2 * 6];
  pbVar3 = *(byte **)(*param_1 + 4);
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)bVar4 | 1;
}



uint FUN_00bc3130(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(*param_1 + 0xc);
  uVar2 = uVar1 - *(int *)(&DAT_01042c0c + *param_2 * 0x18);
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      pbVar3 = *(byte **)(*param_1 + 0x10);
      pbVar4 = *(byte **)(&DAT_01042c10 + *param_2 * 0x18);
      while (uVar2 = uVar1 - 4, 3 < uVar1) {
        if (*(int *)pbVar3 != *(int *)pbVar4) goto LAB_00bc3178;
        pbVar3 = pbVar3 + 4;
        pbVar4 = pbVar4 + 4;
        uVar1 = uVar2;
      }
      if (uVar2 != 0xfffffffc) {
LAB_00bc3178:
        bVar5 = *pbVar3 < *pbVar4;
        if ((*pbVar3 != *pbVar4) ||
           ((uVar2 != 0xfffffffd &&
            ((bVar5 = pbVar3[1] < pbVar4[1], pbVar3[1] != pbVar4[1] ||
             ((uVar2 != 0xfffffffe &&
              ((bVar5 = pbVar3[2] < pbVar4[2], pbVar3[2] != pbVar4[2] ||
               ((uVar2 != 0xffffffff && (bVar5 = pbVar3[3] < pbVar4[3], pbVar3[3] != pbVar4[3]))))))
             )))))) {
          return -(uint)bVar5 | 1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bc31b0(void)

{
  DAT_013decac = func_0x00bbb390();
  _DAT_013decb4 = (uint)(DAT_013decac != 0);
  return;
}



uint FUN_00bc3680(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (&PTR_s_UNDEF_01042c00)[*param_2 * 6];
  pbVar3 = *(byte **)*param_1;
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)bVar4 | 1;
}



undefined4 FUN_00bc39e0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



void FUN_00bc3b90(undefined4 *param_1)

{
  if (param_1[0xf] == 0) {
    func_0x00bc2790(*param_1);
  }
  return;
}



void FUN_00bc3bc0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  func_0x00e87f70();
  if (in_stack_0000001c != 0) {
    uVar1 = func_0x00bc3700(in_stack_00000018);
    if (uVar1 < 0x11) {
      uVar2 = func_0x00bfce00(in_stack_0000001c,&stack0x00000000,uVar1);
      if (uVar2 == uVar1) {
        iVar3 = func_0x00ba8630(in_stack_00000018,0,0,0,&stack0x00000000,0xffffffff);
        if (iVar3 != 0) goto LAB_00bc3c3c;
      }
    }
    FUN_008ab370();
    return;
  }
LAB_00bc3c3c:
  FUN_008ab370();
  return;
}



undefined4 FUN_00bc3f60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 *in_stack_00000044;
  int in_stack_00000048;
  
  func_0x00e87f70();
  puVar2 = in_stack_00000044;
  if (in_stack_00000048 != 0) {
    in_stack_00000018 = 0;
    in_stack_0000001c = 0;
    puVar1 = in_stack_00000044 + 4;
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    in_stack_00000028 = 0;
    in_stack_0000002c = 0;
    in_stack_00000030 = 0;
    in_stack_00000034 = 0;
    in_stack_00000038 = 0;
    in_stack_0000003c = 0;
    puVar3 = (undefined4 *)func_0x00bbfa70(&stack0x00000004,&DAT_01056ae8,&stack0x00000000,0x10);
    in_stack_00000018 = *puVar3;
    in_stack_0000001c = puVar3[1];
    in_stack_00000020 = puVar3[2];
    in_stack_00000024 = puVar3[3];
    in_stack_00000028 = puVar3[4];
    iVar4 = func_0x00bc9e90(*puVar2,puVar2[0x24],&stack0x00000018);
    puVar3 = (undefined4 *)0x0;
    if (iVar4 != 0) {
      puVar3 = puVar1;
    }
    uVar5 = func_0x00bc3700(puVar2);
    if (0x10 < uVar5) {
      func_0x00bbf4f0("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x4b);
    }
    uVar6 = func_0x00bfcee0(in_stack_00000048,puVar3,uVar5);
    return uVar6;
  }
  return 0;
}



undefined4 * FUN_00bc42b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return param_1;
  }
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    return (undefined4 *)param_1[0xe];
  }
  puVar1 = (undefined4 *)func_0x00bc2790(*param_1);
  return puVar1;
}



void FUN_00bc4f50(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = func_0x00ba73a0();
  if (iVar2 != 0) {
    uVar4 = *(int *)(iVar2 + 0x240) + 1U & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(iVar2 + 0x240) = uVar4;
    if (uVar4 == *(uint *)(iVar2 + 0x244)) {
      uVar3 = *(uint *)(iVar2 + 0x244) + 1 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      *(uint *)(iVar2 + 0x244) = uVar3;
    }
    if ((*(byte *)(iVar2 + 0x140 + uVar4 * 4) & 1) == 0) {
      *(undefined4 *)(iVar2 + 0xc0 + uVar4 * 4) = 0;
      *(undefined4 *)(iVar2 + 0x100 + uVar4 * 4) = 0;
      *(undefined4 *)(iVar2 + 0x140 + uVar4 * 4) = 0;
    }
    else {
      puVar1 = *(undefined1 **)(iVar2 + 0xc0 + uVar4 * 4);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
        *(undefined4 *)(iVar2 + 0x140 + uVar4 * 4) = 1;
      }
    }
    *(undefined4 *)(iVar2 + 0x40 + uVar4 * 4) = 0;
    *(undefined4 *)(iVar2 + uVar4 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x80 + uVar4 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x1c0 + uVar4 * 4) = 0xffffffff;
    FUN_00bbc580(*(undefined4 *)(iVar2 + 0x180 + uVar4 * 4),
                 "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                 ,0x5b);
    *(undefined4 *)(iVar2 + 0x180 + uVar4 * 4) = 0;
    FUN_00bbc580(*(undefined4 *)(iVar2 + 0x200 + uVar4 * 4),
                 "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                 ,0x5d);
    *(undefined4 *)(iVar2 + 0x200 + uVar4 * 4) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bc5aa0(void)

{
  int iVar1;
  
  DAT_013decbc = func_0x00bbb390();
  if (DAT_013decbc != 0) {
    DAT_013decc0 = func_0x00bbb390();
    if ((DAT_013decc0 != 0) && (iVar1 = FUN_0058e2e0(), iVar1 != 0)) {
      DAT_013deccc = 1;
      _DAT_013decd0 = 1;
      return;
    }
    func_0x00bbb370(DAT_013decc0);
    DAT_013decc0 = 0;
    func_0x00bbb370(DAT_013decbc);
    DAT_013decbc = 0;
  }
  _DAT_013decd0 = 0;
  return;
}



void FUN_00bc5d40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bef6e0(param_1,5);
  if (iVar1 != 0) {
    uVar2 = func_0x00bbb320(iVar1 + 0xc);
    func_0x00bbb420(iVar1 + 0xc,0);
    func_0x00bfd850(uVar2);
    uVar2 = func_0x00bbb320(iVar1 + 0x10);
    func_0x00bbb420(iVar1 + 0x10,0);
    func_0x00bfd850(uVar2);
  }
  return;
}



undefined4 FUN_00bc6380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  uVar1 = func_0x00bb6160(param_3);
  iVar2 = func_0x00bef6e0(uVar1,5);
  uVar7 = 1;
  uVar1 = FUN_00bc39e0(param_2);
  iVar3 = FUN_00bfee30(param_3,uVar1);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rand\\rand_lib.c",0x39a,"random_conf_init");
    func_0x00bc5160(0xf,0x77,0);
    return 0;
  }
  if (iVar2 != 0) {
    iVar6 = 0;
    iVar4 = func_0x00bd1830(iVar3);
    if (0 < iVar4) {
      do {
        iVar4 = func_0x00bd1a80(iVar3,iVar6);
        iVar5 = func_0x00bbbfe0(*(undefined4 *)(iVar4 + 4),"random");
        if (iVar5 == 0) {
          iVar5 = 0;
          if ((*(int *)(iVar4 + 8) != 0) &&
             (iVar5 = func_0x00bbbc70(*(int *)(iVar4 + 8),"crypto\\rand\\rand_lib.c",0x381),
             iVar5 == 0)) {
            return 0;
          }
          FUN_00bbc580(*(undefined4 *)(iVar2 + 0x14),"crypto\\rand\\rand_lib.c",0x385);
          *(int *)(iVar2 + 0x14) = iVar5;
        }
        else {
          iVar5 = func_0x00bbbfe0(*(undefined4 *)(iVar4 + 4),"cipher");
          if (iVar5 == 0) {
            iVar5 = 0;
            if ((*(int *)(iVar4 + 8) != 0) &&
               (iVar5 = func_0x00bbbc70(*(int *)(iVar4 + 8),"crypto\\rand\\rand_lib.c",0x381),
               iVar5 == 0)) {
              return 0;
            }
            FUN_00bbc580(*(undefined4 *)(iVar2 + 0x18),"crypto\\rand\\rand_lib.c",0x385);
            *(int *)(iVar2 + 0x18) = iVar5;
          }
          else {
            iVar5 = func_0x00bbbfe0(*(undefined4 *)(iVar4 + 4),"digest");
            if (iVar5 == 0) {
              iVar5 = 0;
              if ((*(int *)(iVar4 + 8) != 0) &&
                 (iVar5 = func_0x00bbbc70(*(int *)(iVar4 + 8),"crypto\\rand\\rand_lib.c",0x381),
                 iVar5 == 0)) {
                return 0;
              }
              FUN_00bbc580(*(undefined4 *)(iVar2 + 0x1c),"crypto\\rand\\rand_lib.c",0x385);
              *(int *)(iVar2 + 0x1c) = iVar5;
            }
            else {
              iVar5 = func_0x00bbbfe0(*(undefined4 *)(iVar4 + 4),"properties");
              if (iVar5 == 0) {
                iVar5 = 0;
                if ((*(int *)(iVar4 + 8) != 0) &&
                   (iVar5 = func_0x00bbbc70(*(int *)(iVar4 + 8),"crypto\\rand\\rand_lib.c",0x381),
                   iVar5 == 0)) {
                  return 0;
                }
                FUN_00bbc580(*(undefined4 *)(iVar2 + 0x20),"crypto\\rand\\rand_lib.c",0x385);
                *(int *)(iVar2 + 0x20) = iVar5;
              }
              else {
                iVar5 = func_0x00bbbfe0(*(undefined4 *)(iVar4 + 4),&DAT_01056c84);
                if (iVar5 == 0) {
                  iVar5 = 0;
                  if ((*(int *)(iVar4 + 8) != 0) &&
                     (iVar5 = func_0x00bbbc70(*(int *)(iVar4 + 8),"crypto\\rand\\rand_lib.c",0x381),
                     iVar5 == 0)) {
                    return 0;
                  }
                  FUN_00bbc580(*(undefined4 *)(iVar2 + 0x24),"crypto\\rand\\rand_lib.c",0x385);
                  *(int *)(iVar2 + 0x24) = iVar5;
                }
                else {
                  iVar5 = func_0x00bbbfe0(*(undefined4 *)(iVar4 + 4),"seed_properties");
                  if (iVar5 == 0) {
                    iVar5 = 0;
                    if ((*(int *)(iVar4 + 8) != 0) &&
                       (iVar5 = func_0x00bbbc70(*(int *)(iVar4 + 8),"crypto\\rand\\rand_lib.c",0x381
                                               ), iVar5 == 0)) {
                      return 0;
                    }
                    FUN_00bbc580(*(undefined4 *)(iVar2 + 0x28),"crypto\\rand\\rand_lib.c",0x385);
                    *(int *)(iVar2 + 0x28) = iVar5;
                  }
                  else {
                    FUN_00bc4f50();
                    func_0x00bc5050("crypto\\rand\\rand_lib.c",0x3b6,"random_conf_init");
                    func_0x00bc5160(0xf,0x78,"name=%s, value=%s",*(undefined4 *)(iVar4 + 4),
                                    *(undefined4 *)(iVar4 + 8));
                    uVar7 = 0;
                  }
                }
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar4 = func_0x00bd1830(iVar3);
      } while (iVar6 < iVar4);
    }
    return uVar7;
  }
  return 0;
}



void FUN_00bc67b0(void)

{
  func_0x00c01160(&DAT_013decd4);
  return;
}



int FUN_00bc6a60(undefined4 param_1,int param_2,code *param_3,code *param_4,code *param_5,
                int param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  func_0x00e87f70();
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  iVar2 = func_0x00bef6e0(uVar8,1);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\provider_core.c",0x14e,"get_provider_store");
    func_0x00bc5160(0xf,0xc0103,0);
    return 0;
  }
  piVar3 = (int *)FUN_00bbc4f0(0x14,"crypto\\provider_core.c",0x707);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = (int)param_3;
    *piVar3 = param_2;
    piVar3[2] = (int)param_4;
    piVar3[3] = (int)param_5;
    piVar3[4] = param_6;
    iVar4 = func_0x00bbb470(*(undefined4 *)(iVar2 + 0x10));
    if (iVar4 != 0) {
      iVar4 = func_0x00bc9540(uVar8,0);
      if (iVar4 != 0) {
        (*param_5)(iVar4,param_6);
        FUN_00bbc580(iVar4,"crypto\\provider_core.c",0x718);
      }
      iVar5 = func_0x00bd1830(*(undefined4 *)(iVar2 + 4));
      iVar4 = 0;
      if (0 < iVar5) {
        while( true ) {
          puVar6 = (uint *)func_0x00bd1a80(*(undefined4 *)(iVar2 + 4),iVar4);
          iVar7 = func_0x00bbb3c0(puVar6[1]);
          if (iVar7 == 0) break;
          uVar1 = *puVar6;
          func_0x00bbb440(puVar6[1]);
          if ((((uVar1 & 2) != 0) && (iVar7 = (*param_3)(puVar6,param_6), iVar7 == 0)) ||
             (iVar4 = iVar4 + 1, iVar5 <= iVar4)) break;
        }
      }
      if ((iVar4 == iVar5) &&
         (iVar5 = func_0x00bd18c0(*(undefined4 *)(iVar2 + 8),piVar3), 0 < iVar5)) {
        func_0x00bbb440(*(undefined4 *)(iVar2 + 0x10));
        return iVar5;
      }
      for (; -1 < iVar4; iVar4 = iVar4 + -1) {
        uVar8 = func_0x00bd1a80(*(undefined4 *)(iVar2 + 4),iVar4);
        (*param_4)(uVar8,param_6);
      }
      FUN_00bbc580(piVar3,"crypto\\provider_core.c",0x73a);
      func_0x00bbb440(*(undefined4 *)(iVar2 + 0x10));
      return 0;
    }
    FUN_00bbc580(piVar3,"crypto\\provider_core.c",0x711);
  }
  return 0;
}



void FUN_00bc6c30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = func_0x00bef6e0(*(undefined4 *)(param_1 + 0x28),1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\provider_core.c",0x14e,"get_provider_store");
    func_0x00bc5160(0xf,0xc0103,0);
    return;
  }
  iVar2 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x10));
  if (iVar2 != 0) {
    iVar2 = func_0x00bd1830(*(undefined4 *)(iVar1 + 8));
    iVar4 = 0;
    if (0 < iVar2) {
      while (piVar3 = (int *)func_0x00bd1a80(*(undefined4 *)(iVar1 + 8),iVar4), *piVar3 != param_1)
      {
        iVar4 = iVar4 + 1;
        if (iVar2 <= iVar4) {
          func_0x00bbb440(*(undefined4 *)(iVar1 + 0x10));
          return;
        }
      }
      func_0x00bd1430(*(undefined4 *)(iVar1 + 8),iVar4);
      FUN_00bbc580(piVar3,"crypto\\provider_core.c",0x759);
    }
    func_0x00bbb440(*(undefined4 *)(iVar1 + 0x10));
  }
  return;
}



undefined ** FUN_00bc6d00(void)

{
  return &PTR_s_openssl_version_01056d38;
}



undefined4 FUN_00bc6d10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = func_0x00bc09d0(param_2,"openssl-version");
  if (iVar1 != 0) {
    func_0x00bc1270(iVar1,"3.4.0");
  }
  iVar1 = func_0x00bc09d0(param_2,"provider-name");
  if (iVar1 != 0) {
    func_0x00bc1270(iVar1,*(undefined4 *)(param_1 + 0x14));
  }
  iVar1 = func_0x00bc09d0(param_2,"module-filename");
  if (iVar1 != 0) {
    uVar2 = func_0x00c051e0(*(undefined4 *)(param_1 + 0x1c));
    func_0x00bc1270(iVar1,uVar2);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar4 = 0;
    iVar1 = func_0x00bd1830(*(int *)(param_1 + 0x24));
    if (0 < iVar1) {
      do {
        puVar3 = (undefined4 *)func_0x00bd1a80(*(undefined4 *)(param_1 + 0x24),iVar4);
        iVar1 = func_0x00bc09d0(param_2,*puVar3);
        if (iVar1 != 0) {
          func_0x00bc1270(iVar1,puVar3[1]);
        }
        iVar4 = iVar4 + 1;
        iVar1 = func_0x00bd1830(*(undefined4 *)(param_1 + 0x24));
      } while (iVar4 < iVar1);
    }
  }
  return 1;
}



void FUN_00bc6de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00bbf490(param_1,param_3,param_2);
  return;
}



void thunk_FUN_00bc4f50(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = func_0x00ba73a0();
  if (iVar2 != 0) {
    uVar4 = *(int *)(iVar2 + 0x240) + 1U & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(iVar2 + 0x240) = uVar4;
    if (uVar4 == *(uint *)(iVar2 + 0x244)) {
      uVar3 = *(uint *)(iVar2 + 0x244) + 1 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      *(uint *)(iVar2 + 0x244) = uVar3;
    }
    if ((*(byte *)(iVar2 + 0x140 + uVar4 * 4) & 1) == 0) {
      *(undefined4 *)(iVar2 + 0xc0 + uVar4 * 4) = 0;
      *(undefined4 *)(iVar2 + 0x100 + uVar4 * 4) = 0;
      *(undefined4 *)(iVar2 + 0x140 + uVar4 * 4) = 0;
    }
    else {
      puVar1 = *(undefined1 **)(iVar2 + 0xc0 + uVar4 * 4);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
        *(undefined4 *)(iVar2 + 0x140 + uVar4 * 4) = 1;
      }
    }
    *(undefined4 *)(iVar2 + 0x40 + uVar4 * 4) = 0;
    *(undefined4 *)(iVar2 + uVar4 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x80 + uVar4 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x1c0 + uVar4 * 4) = 0xffffffff;
    FUN_00bbc580(*(undefined4 *)(iVar2 + 0x180 + uVar4 * 4),
                 "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                 ,0x5b);
    *(undefined4 *)(iVar2 + 0x180 + uVar4 * 4) = 0;
    FUN_00bbc580(*(undefined4 *)(iVar2 + 0x200 + uVar4 * 4),
                 "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                 ,0x5d);
    *(undefined4 *)(iVar2 + 0x200 + uVar4 * 4) = 0;
  }
  return;
}



void FUN_00bc6e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00bc5050(param_2,param_3,param_4);
  return;
}



void FUN_00bc6e30(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack00000004;
  uint in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x00e87f70();
  uVar5 = 0;
  iVar6 = 0;
  uStack00000004 = 0;
  iVar2 = func_0x00ba73a0();
  if (iVar2 == 0) {
    return;
  }
  if (in_stack_00000018 == 0) goto LAB_00bc5262;
  iVar3 = *(int *)(iVar2 + 0x240);
  uVar5 = *(uint *)(iVar2 + 0x100 + iVar3 * 4);
  iVar6 = *(int *)(iVar2 + 0xc0 + iVar3 * 4);
  *(undefined4 *)(iVar2 + 0xc0 + iVar3 * 4) = 0;
  *(undefined4 *)(iVar2 + 0x140 + iVar3 * 4) = 0;
  if ((uVar5 < 0x400) &&
     (iVar3 = FUN_00bbc5a0(iVar6,0x400,"crypto\\err\\err_blocks.c",0x54), iVar3 != 0)) {
    uVar5 = 0x400;
    iVar6 = iVar3;
LAB_00bc5201:
    iVar4 = FUN_00bbcb30(iVar6,uVar5,in_stack_00000018,in_stack_0000001c);
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    *(undefined1 *)(iVar3 + iVar6) = 0;
  }
  else {
    if (iVar6 != 0) goto LAB_00bc5201;
    iVar3 = 0;
  }
  iVar4 = FUN_00bbc5a0(iVar6,iVar3 + 1U,"crypto\\err\\err_blocks.c",0x67);
  if (iVar4 == 0) {
    if (iVar6 == 0) goto LAB_00bc5262;
  }
  else {
    *(undefined1 *)(iVar3 + iVar4) = 0;
    uVar5 = iVar3 + 1U;
    iVar6 = iVar4;
  }
  uStack00000004 = 3;
LAB_00bc5262:
  iVar3 = *(int *)(iVar2 + 0x240);
  if ((*(byte *)(iVar2 + 0x140 + iVar3 * 4) & 1) == 0) {
    *(undefined4 *)(iVar2 + 0xc0 + iVar3 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x100 + iVar3 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x140 + iVar3 * 4) = 0;
  }
  else {
    puVar1 = *(undefined1 **)(iVar2 + 0xc0 + iVar3 * 4);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(iVar2 + 0x140 + iVar3 * 4) = 1;
    }
  }
  if (in_stack_00000010 == 2) {
    in_stack_00000014 = in_stack_00000014 | 0x80000000;
  }
  else {
    in_stack_00000014 = (in_stack_00000010 & 0xff) << 0x17 | in_stack_00000014 & 0x7fffff;
  }
  *(uint *)(iVar2 + 0x80 + *(int *)(iVar2 + 0x240) * 4) = in_stack_00000014;
  if (in_stack_00000018 != 0) {
    iVar3 = *(int *)(iVar2 + 0x240);
    if ((*(byte *)(iVar2 + 0x140 + iVar3 * 4) & 1) != 0) {
      FUN_00bbc580(*(undefined4 *)(iVar2 + (iVar3 + 0x30) * 4),
                   "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                   ,0x4e);
    }
    *(int *)(iVar2 + (iVar3 + 0x30) * 4) = iVar6;
    *(uint *)(iVar2 + 0x100 + iVar3 * 4) = uVar5;
    *(undefined4 *)(iVar2 + 0x140 + iVar3 * 4) = uStack00000004;
  }
  return;
}



undefined4 thunk_FUN_00bcaeb0(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = func_0x00ba73a0();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x244) != *(int *)(iVar2 + 0x240))) {
    piVar1 = (int *)(iVar2 + 0x40 + *(int *)(iVar2 + 0x240) * 4);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  return 0;
}



undefined4 thunk_FUN_00bcacf0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = func_0x00ba73a0();
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x240);
    iVar2 = *(int *)(iVar3 + 0x244);
    if (iVar2 != iVar4) {
      do {
        if (*(int *)(iVar3 + 0x40 + iVar4 * 4) != 0) break;
        if (iVar4 < 1) {
          iVar4 = 0xf;
        }
        else {
          iVar4 = iVar4 + -1;
        }
      } while (iVar2 != iVar4);
      if (iVar2 != iVar4) {
        piVar1 = (int *)(iVar3 + 0x40 + iVar4 * 4);
        *piVar1 = *piVar1 + -1;
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00bc6ea0(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = func_0x00ba73a0();
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 0x244);
    iVar4 = *(int *)(iVar3 + 0x240);
    if (iVar5 != iVar4) {
      do {
        if (*(int *)(iVar3 + 0x40 + iVar4 * 4) != 0) break;
        if ((*(byte *)(iVar3 + 0x140 + iVar4 * 4) & 1) == 0) {
          *(undefined4 *)(iVar3 + 0xc0 + iVar4 * 4) = 0;
          *(undefined4 *)(iVar3 + 0x100 + iVar4 * 4) = 0;
          *(undefined4 *)(iVar3 + 0x140 + iVar4 * 4) = 0;
        }
        else {
          puVar2 = *(undefined1 **)(iVar3 + 0xc0 + iVar4 * 4);
          if (puVar2 != (undefined1 *)0x0) {
            *puVar2 = 0;
            *(undefined4 *)(iVar3 + 0x140 + iVar4 * 4) = 1;
          }
        }
        *(undefined4 *)(iVar3 + 0x40 + iVar4 * 4) = 0;
        *(undefined4 *)(iVar3 + iVar4 * 4) = 0;
        *(undefined4 *)(iVar3 + 0x80 + iVar4 * 4) = 0;
        *(undefined4 *)(iVar3 + 0x1c0 + iVar4 * 4) = 0xffffffff;
        FUN_00bbc580(*(undefined4 *)(iVar3 + 0x180 + iVar4 * 4),
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                     ,0x5b);
        *(undefined4 *)(iVar3 + 0x180 + iVar4 * 4) = 0;
        FUN_00bbc580(*(undefined4 *)(iVar3 + 0x200 + iVar4 * 4),
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                     ,0x5d);
        *(undefined4 *)(iVar3 + 0x200 + iVar4 * 4) = 0;
        if (*(int *)(iVar3 + 0x240) < 1) {
          iVar4 = 0xf;
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x240) + -1;
        }
        *(int *)(iVar3 + 0x240) = iVar4;
        iVar5 = *(int *)(iVar3 + 0x244);
      } while (iVar5 != iVar4);
      if (iVar5 != iVar4) {
        piVar1 = (int *)(iVar3 + 0x40 + iVar4 * 4);
        *piVar1 = *piVar1 + -1;
        return 1;
      }
    }
  }
  return 0;
}



void thunk_FUN_00c017e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00bef6e0(param_1,0x16);
  if (param_2 != (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
      return;
    }
    *param_2 = 0;
  }
  return;
}



void thunk_FUN_00c05930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)func_0x00bef6e0(param_1,0xc);
  if (param_2 != (undefined4 *)0x0) {
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    *param_2 = uVar2;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      *param_3 = puVar1[1];
      return;
    }
    *param_3 = 0;
  }
  return;
}



void FUN_00bc6ed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00c04c00(*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
  return;
}



void FUN_00bc6ef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00c04d20(*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
  return;
}



void FUN_00bc6f10(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c04b50(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  return;
}



void FUN_00bc6f30(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c04b90(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  return;
}



void FUN_00bc6f50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00c04c80(*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_00bc6f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00c04de0(*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_00bc6fb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c04b70(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  return;
}



void FUN_00bc6fd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c04be0(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  return;
}



undefined4 thunk_FUN_00baaa40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



undefined4 thunk_FUN_00bc77d0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  return 0;
}



undefined4 thunk_FUN_00bc7da0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x6c);
  }
  return 0;
}



uint FUN_00bc7020(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    piVar1 = (int *)(param_1 + 8);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar7 = iVar3 + 1;
    if (((*(byte *)(param_1 + 100) & 1) != 0) && (iVar3 = func_0x00c05710(param_1,0), iVar3 == 0)) {
      FUN_00bc7c90(param_1);
      uVar7 = 0;
    }
    return uVar7;
  }
  if ((param_1 != 0) && (iVar3 = func_0x00bc8660(param_1,1,1), 0 < iVar3)) {
    if (iVar3 != 1) {
      return 1;
    }
    iVar3 = func_0x00bef6e0(*(undefined4 *)(param_1 + 0x28),1);
    if (iVar3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\provider_core.c",0x14e,"get_provider_store");
      func_0x00bc5160(0xf,0xc0103,0);
    }
    else {
      iVar4 = func_0x00bbb3c0(*(undefined4 *)(iVar3 + 0x10));
      if (iVar4 != 0) {
        uVar7 = *(uint *)(iVar3 + 0x24);
        func_0x00bbb440(*(undefined4 *)(iVar3 + 0x10));
        if ((uVar7 & 2) != 0) {
          return 1;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x28);
        iVar3 = func_0x00bc96b0(uVar2);
        iVar4 = func_0x00c03f00(uVar2);
        iVar5 = func_0x00c02540(*(undefined4 *)(param_1 + 0x28));
        iVar6 = func_0x00c04a00(*(undefined4 *)(param_1 + 0x28));
        return (uint)(iVar6 + iVar4 + iVar3 + iVar5 == 4);
      }
    }
  }
  return 0;
}



undefined4 FUN_00bc7140(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_00bc7c90(param_1);
    return 1;
  }
  if (param_1 != 0) {
    iVar1 = func_0x00bc88a0(param_1,1,1);
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        uVar2 = func_0x00bc8f10(param_1);
        return uVar2;
      }
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00bc7190(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = func_0x00bc2c10(param_2);
  iVar5 = 0;
  iVar2 = func_0x00bc2c10(param_4);
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) &&
     (iVar5 = func_0x00bc2c10(param_3), iVar5 == 0)) {
    return 0;
  }
  if (iVar1 != 0) {
    iVar3 = func_0x00c04220(iVar1,0,0);
    if (iVar3 != 0) {
      return 1;
    }
    if (iVar2 != 0) {
      uVar4 = func_0x00c04060(iVar1,iVar5,iVar2);
      return uVar4;
    }
  }
  return 0;
}



undefined4 FUN_00bc7210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bc2c10(param_2);
  if (iVar1 == 0) {
    iVar1 = func_0x00bc22f0(param_2,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



int * FUN_00bc73d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00bbc830(8,"crypto\\provider_core.c",0x102);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*param_1 != 0) {
    iVar2 = func_0x00bbbc70(*param_1,"crypto\\provider_core.c",0x107);
    *piVar1 = iVar2;
    if (iVar2 == 0) goto LAB_00bc7432;
  }
  if (param_1[1] != 0) {
    iVar2 = func_0x00bbbc70(param_1[1],"crypto\\provider_core.c",0x10c);
    piVar1[1] = iVar2;
    if (iVar2 == 0) {
LAB_00bc7432:
      FUN_00bbc580(*piVar1,"crypto\\provider_core.c",0x112);
      FUN_00bbc580(piVar1,"crypto\\provider_core.c",0x113);
      return (int *)0x0;
    }
  }
  return piVar1;
}



void FUN_00bc7460(undefined4 *param_1)

{
  FUN_00bbc580(*param_1,"crypto\\provider_core.c",0xfb);
  FUN_00bbc580(param_1[1],"crypto\\provider_core.c",0xfc);
  FUN_00bbc580(param_1,"crypto\\provider_core.c",0xfd);
  return;
}



void FUN_00bc7770(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\provider_core.c",0xf5);
  return;
}



uint FUN_00bc7790(int *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = *(byte **)(*param_2 + 0x14);
  pbVar3 = *(byte **)(*param_1 + 0x14);
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)bVar4 | 1;
}



undefined4 FUN_00bc77d0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  return 0;
}



void FUN_00bc7c90(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = param_1 + 2;
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*param_1 & 1) != 0) {
        if (((code *)param_1[0xe] != (code *)0x0) && ((param_1[0x19] & 1) == 0)) {
          (*(code *)param_1[0xe])(param_1[0x1a]);
        }
        if (param_1[0xd] != 0) {
          func_0x00ba6c20(param_1[0xc],param_1[0xd]);
          FUN_00bbc580(param_1[0xd],"crypto\\provider_core.c",0x2d6);
          param_1[0xd] = 0;
        }
        FUN_00bbc580(param_1[0x15],"crypto\\provider_core.c",0x2db);
        param_1[0x15] = 0;
        *param_1 = *param_1 & 0xfffffffe;
        param_1[0x16] = 0;
      }
      func_0x00bbf480(param_1);
      func_0x00c05100(param_1[7]);
      FUN_00bbc580(param_1[5],"crypto\\provider_core.c",0x2ea);
      FUN_00bbc580(param_1[6],"crypto\\provider_core.c",0x2eb);
      func_0x00bd1860(param_1[9],FUN_00bc7460);
      func_0x00bbb370(param_1[0x17]);
      func_0x00bbb370(param_1[1]);
      func_0x00bbb370(param_1[3]);
      FUN_00bbc580(param_1,"crypto\\provider_core.c",0x2f1);
      return;
    }
    if ((param_1[0x19] & 1) != 0) {
      func_0x00c05530(param_1,0);
    }
  }
  return;
}



undefined4 FUN_00bc7da0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x6c);
  }
  return 0;
}



void FUN_00bc8a10(byte *param_1)

{
  int iVar1;
  
  if ((*param_1 & 2) != 0) {
    iVar1 = func_0x00bc88a0(param_1,1,1);
    if ((-1 < iVar1) && (iVar1 == 0)) {
      func_0x00bc8f10(param_1);
    }
  }
  FUN_00bc7c90(param_1);
  return;
}



undefined4
FUN_00bc8ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  func_0x00e87f70();
  iVar3 = param_7;
  uVar2 = param_6;
  param_3 = 1;
  iVar7 = *(int *)(param_7 + 4);
  param_4 = iVar7;
  if (iVar7 == 0) {
    iVar7 = 1;
    param_4 = 0x16;
  }
  do {
    param_2 = 0;
    piVar4 = (int *)func_0x00bc8220(uVar2,iVar7,&param_2);
    uVar1 = param_2;
    param_7 = 0;
    iVar5 = (**(code **)(iVar3 + 0xc))(param_2,*(undefined4 *)(iVar3 + 0x1c));
    if (iVar5 == 0) {
      func_0x00bc8600(uVar2,iVar7,piVar4);
      return 0;
    }
    if (*(code **)(iVar3 + 8) == (code *)0x0) {
      param_7 = 1;
LAB_00bc9077:
      if (piVar4 != (int *)0x0) {
        iVar5 = *piVar4;
        piVar6 = piVar4;
        while (iVar5 != 0) {
          (**(code **)(iVar3 + 0x10))(uVar2,piVar6,uVar1,*(undefined4 *)(iVar3 + 0x1c));
          piVar6 = piVar6 + 4;
          iVar5 = *piVar6;
        }
      }
      if (*(code **)(iVar3 + 0x18) == (code *)0x0) {
        param_7 = 1;
      }
      else {
        iVar5 = (**(code **)(iVar3 + 0x18))
                          (uVar2,iVar7,uVar1,*(undefined4 *)(iVar3 + 0x1c),&param_7);
        if (iVar5 == 0) goto LAB_00bc90ea;
      }
    }
    else {
      iVar5 = (**(code **)(iVar3 + 8))(uVar2,iVar7,uVar1,*(undefined4 *)(iVar3 + 0x1c),&param_7);
      if (iVar5 == 0) {
LAB_00bc90ea:
        param_7 = -1;
      }
      else {
        if (param_7 != 0) goto LAB_00bc9077;
        param_7 = 1;
      }
    }
    (**(code **)(iVar3 + 0x14))(*(undefined4 *)(iVar3 + 0x1c));
    iVar5 = param_7;
    func_0x00bc8600(uVar2,iVar7,piVar4);
    if (iVar5 < 0) {
      return 0;
    }
    if (iVar5 == 0) {
      param_3 = 0;
    }
    iVar7 = iVar7 + 1;
    if (param_4 < iVar7) {
      return param_3;
    }
  } while( true );
}



void FUN_00bc9250(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc7fa0(param_2);
  uVar1 = func_0x00c07780(uVar1);
  iVar2 = func_0x00c07330(uVar1,0,*param_1,0x3a);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (**(code **)(param_3 + 0x1c))(iVar2,param_1,param_2);
  if (iVar2 == 0) {
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 1;
  }
  return;
}



void FUN_00bc92a0(undefined4 param_1,int param_2)

{
  (**(code **)(param_2 + 0x24))(param_1);
  return;
}



void FUN_00bc9950(byte param_1,undefined4 param_2,uint *param_3)

{
  if ((uint)param_1 == *param_3) {
    (*(code *)param_3[1])(param_2,param_3[2]);
  }
  return;
}



undefined4 FUN_00bc9970(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  func_0x00e87f70();
  uVar5 = param_4[2];
  if (uVar5 == 0) {
    if (param_4[3] == 0) {
      return 0;
    }
    iVar3 = func_0x00c07780(*param_4);
    pcVar2 = (char *)param_4[3];
    iVar4 = func_0x008ab0c6(pcVar2,0x3a);
    if (iVar4 == 0) {
      pcVar6 = pcVar2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar6 - (int)(pcVar2 + 1);
    }
    else {
      iVar4 = iVar4 - (int)pcVar2;
    }
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = func_0x00c076d0(iVar3,pcVar2,iVar4);
    if (uVar5 == 0) {
      return 0;
    }
  }
  if (((uVar5 - 1 < 0x7fffff) && (param_4[1] - 1 < 0xff)) &&
     (uVar5 = (uVar5 & 0x7fffff) << 8 | param_4[1] & 0xff, uVar5 != 0)) {
    if ((param_2 == 0) && (param_2 = func_0x00bef6e0(*param_4,0), param_2 == 0)) {
      return 0;
    }
    iVar3 = func_0x00c06730(param_2,uVar5,param_4[4],param_3,&stack0x00000000);
    if (iVar3 != 0) {
      return 0;
    }
  }
  return 0;
}



void FUN_00bc9a50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[5] == 0) {
    uVar1 = func_0x00c069f0(*param_1);
    param_1[5] = uVar1;
  }
  return;
}



undefined4
FUN_00bc9d70(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  if (param_4 != (char *)0x0) {
    iVar5 = func_0x008ab0c6(param_4,0x3a);
    if (iVar5 == 0) {
      pcVar6 = param_4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar5 = (int)pcVar6 - (int)(param_4 + 1);
    }
    else {
      iVar5 = iVar5 - (int)param_4;
    }
  }
  iVar2 = func_0x00c07780(*param_6);
  if ((((iVar2 != 0) && (uVar3 = func_0x00c076d0(iVar2,param_4,iVar5), uVar3 != 0)) &&
      (uVar3 - 1 < 0x7fffff)) &&
     ((param_6[1] - 1 < 0xff && (uVar3 = (uVar3 & 0x7fffff) << 8 | param_6[1] & 0xff, uVar3 != 0))))
  {
    if ((param_1 == 0) && (param_1 = func_0x00bef6e0(*param_6,0), param_1 == 0)) {
      return 0;
    }
    uVar4 = func_0x00c05fa0(param_1,param_3,uVar3,param_5,param_2,param_6[8],param_6[9]);
    return uVar4;
  }
  return 0;
}



void FUN_00bc9e30(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,0);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c05f80(param_1);
  return;
}



void FUN_00bc9e60(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,0);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c06b00(param_1);
  return;
}



void FUN_00bca5b0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\ex_data.c",0x3f);
  return;
}



int FUN_00bca5d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 != iVar2) {
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar2 == 0) {
      return -1;
    }
    if (*(int *)(iVar1 + 8) != *(int *)(iVar2 + 8)) {
      return (uint)(*(int *)(iVar1 + 8) <= *(int *)(iVar2 + 8)) * 2 + -1;
    }
  }
  return 0;
}



undefined4 FUN_00bcacf0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = func_0x00ba73a0();
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x240);
    iVar2 = *(int *)(iVar3 + 0x244);
    if (iVar2 != iVar4) {
      do {
        if (*(int *)(iVar3 + 0x40 + iVar4 * 4) != 0) break;
        if (iVar4 < 1) {
          iVar4 = 0xf;
        }
        else {
          iVar4 = iVar4 + -1;
        }
      } while (iVar2 != iVar4);
      if (iVar2 != iVar4) {
        piVar1 = (int *)(iVar3 + 0x40 + iVar4 * 4);
        *piVar1 = *piVar1 + -1;
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00bcaeb0(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = func_0x00ba73a0();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x244) != *(int *)(iVar2 + 0x240))) {
    piVar1 = (int *)(iVar2 + 0x40 + *(int *)(iVar2 + 0x240) * 4);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  return 0;
}



void FUN_00bcb3e0(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x14));
      }
      if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x18));
      }
      pvVar1 = *(void **)((int)param_1 + 0x1c);
      free(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}



uint FUN_00bcb430(void)

{
  undefined4 uVar1;
  void *pvVar2;
  u_short uVar3;
  int *piVar4;
  u_short hostshort;
  u_short uVar5;
  servent *psVar6;
  int iVar7;
  _union_1226 in;
  void *pvVar8;
  undefined2 *puVar9;
  u_long hostlong;
  uint *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  bool bVar18;
  bool bVar19;
  uint uStack00000004;
  u_short uStack0000000c;
  uint uStack00000010;
  char *in_stack_00000014;
  char *in_stack_0000001c;
  char *in_stack_00000020;
  uint *in_stack_00000024;
  int *in_stack_00000028;
  
  func_0x00e87f70();
  pcVar17 = in_stack_00000020;
  pcVar11 = in_stack_0000001c;
  uVar15 = 0;
  uStack00000004 = 0;
  uStack00000010 = 0;
  in_stack_00000014 = (char *)0x0;
  bVar18 = false;
  uStack0000000c = 0;
  uVar3 = uStack0000000c;
  uStack0000000c = 0;
  uVar5 = uStack0000000c;
  uStack0000000c = 0;
  *in_stack_00000028 = 0;
  if ((in_stack_0000001c == (char *)0x0) && (in_stack_00000020 == (char *)0x0)) {
    return 0x2af9;
  }
  if (in_stack_00000024 != (uint *)0x0) {
    if ((((in_stack_00000024[4] != 0) || (in_stack_00000024[5] != 0)) || (in_stack_00000024[6] != 0)
        ) || (in_stack_00000024[7] != 0)) {
      return 0x2afb;
    }
    uStack00000004 = *in_stack_00000024;
    if (((uStack00000004 & 2) != 0) && (in_stack_0000001c == (char *)0x0)) {
      return 0x2726;
    }
    if ((in_stack_00000024[1] != 0) && (in_stack_00000024[1] != 2)) {
      return 0x273f;
    }
    uVar15 = in_stack_00000024[2];
    if ((((uVar15 != 0) && (uVar15 != 1)) && (uVar15 != 2)) && (uVar15 != 3)) {
      return 0x273c;
    }
    uStack00000010 = in_stack_00000024[3];
  }
  hostshort = 0;
  if (in_stack_00000020 != (char *)0x0) {
    hostshort = func_0x00e87983(in_stack_00000020,&stack0x00000014,10);
    if (*in_stack_00000014 == '\0') {
      uStack0000000c = htons(hostshort);
      uVar16 = uVar15;
      if (uVar15 == 0) {
        uVar16 = 1;
      }
      bVar18 = uVar15 == 0;
      uVar15 = uVar16;
      hostshort = uStack0000000c;
    }
    else {
      if ((uVar15 == 0) || (uStack0000000c = uVar5, uVar15 == 2)) {
        psVar6 = getservbyname(pcVar17,"udp");
        uStack0000000c = uVar3;
        if (psVar6 != (servent *)0x0) {
          uStack0000000c = psVar6->s_port;
          hostshort = uStack0000000c;
        }
        if (uVar15 != 0) goto LAB_00bcb5a7;
LAB_00bcb5ac:
        psVar6 = getservbyname(pcVar17,"tcp");
        if (psVar6 == (servent *)0x0) goto LAB_00bcb5c4;
        uVar5 = psVar6->s_port;
        hostshort = uVar5;
      }
      else {
LAB_00bcb5a7:
        if (uVar15 == 1) goto LAB_00bcb5ac;
LAB_00bcb5c4:
        uVar5 = 0;
      }
      if (hostshort == 0) {
        uVar16 = 0x2af9;
        if (uVar15 != 0) {
          uVar16 = 0x277d;
        }
        return uVar16;
      }
      if ((uVar15 == 0) &&
         ((uVar15 = (uVar5 == 0) + 1, uVar5 == 0 || (bVar18 = true, uStack0000000c == 0)))) {
        bVar18 = false;
      }
    }
  }
  if (pcVar11 == (char *)0x0) {
    hostlong = 0x7f000001;
    if ((uStack00000004 & 1) != 0) {
      hostlong = 0;
    }
    in.S_addr = htonl(hostlong);
LAB_00bcb731:
    puVar10 = (uint *)func_0x00bcbe10(uVar15,uStack00000010,hostshort,in);
    *in_stack_00000028 = (int)puVar10;
    if (puVar10 == (uint *)0x0) {
      uVar15 = 8;
      goto LAB_00bcb7a5;
    }
    uVar15 = 0;
    if ((pcVar11 != (char *)0x0) && (*puVar10 = *puVar10 | 4, (uStack00000004 & 2) != 0)) {
      iVar14 = *in_stack_00000028;
      pcVar11 = inet_ntoa((in_addr)in);
      uVar12 = func_0x00bcbe90(pcVar11);
      *(undefined4 *)(iVar14 + 0x14) = uVar12;
      if (*(int *)(*in_stack_00000028 + 0x14) == 0) {
        uVar15 = 8;
        goto LAB_00bcb7a5;
      }
    }
  }
  else {
    cVar13 = *pcVar11;
    iVar14 = 0;
    pcVar17 = pcVar11;
    if (cVar13 != '\0') {
      do {
        bVar19 = cVar13 != '.';
        cVar13 = pcVar17[1];
        pcVar17 = pcVar17 + 1;
        iVar7 = iVar14 + 1;
        if (bVar19) {
          iVar7 = iVar14;
        }
        iVar14 = iVar7;
      } while (cVar13 != '\0');
      if ((iVar7 == 3) && (in.S_addr = inet_addr(pcVar11), in.S_addr != 0xffffffff))
      goto LAB_00bcb731;
    }
    if ((uStack00000004 & 4) != 0) {
      uVar15 = 0x2af9;
      goto LAB_00bcb7a5;
    }
    uVar15 = func_0x00bcbbe0(pcVar11,uVar15,uStack00000010,hostshort,uStack00000004 & 2,
                             in_stack_00000028);
    if (uVar15 != 0) goto LAB_00bcb7a5;
  }
  if (!bVar18) {
    return uVar15;
  }
  iVar14 = *in_stack_00000028;
  while (iVar14 != 0) {
    uVar12 = *(undefined4 *)(iVar14 + 0xc);
    uVar1 = *(undefined4 *)(*(int *)(iVar14 + 0x18) + 4);
    pvVar8 = (void *)func_0x008aaf6c(1,0x20);
    if (pvVar8 == (void *)0x0) break;
    puVar9 = (undefined2 *)func_0x008aaf6c(1,0x10);
    if (puVar9 == (undefined2 *)0x0) {
      free(pvVar8);
      break;
    }
    *(undefined4 *)(puVar9 + 2) = uVar1;
    *puVar9 = 2;
    puVar9[1] = uStack0000000c;
    *(undefined4 *)((int)pvVar8 + 4) = 2;
    *(undefined4 *)((int)pvVar8 + 8) = 2;
    *(undefined4 *)((int)pvVar8 + 0xc) = uVar12;
    *(undefined4 *)((int)pvVar8 + 0x10) = 0x10;
    *(undefined2 **)((int)pvVar8 + 0x18) = puVar9;
    *(undefined4 *)((int)pvVar8 + 0x1c) = *(undefined4 *)(iVar14 + 0x1c);
    *(void **)(iVar14 + 0x1c) = pvVar8;
    iVar14 = *(int *)((int)pvVar8 + 0x1c);
  }
  uVar15 = -(uint)(iVar14 != 0) & 8;
  if (iVar14 == 0) {
    return uVar15;
  }
LAB_00bcb7a5:
  piVar4 = in_stack_00000028;
  pvVar8 = (void *)*in_stack_00000028;
  while (pvVar8 != (void *)0x0) {
    if (*(void **)((int)pvVar8 + 0x14) != (void *)0x0) {
      free(*(void **)((int)pvVar8 + 0x14));
    }
    if (*(void **)((int)pvVar8 + 0x18) != (void *)0x0) {
      free(*(void **)((int)pvVar8 + 0x18));
    }
    pvVar2 = *(void **)((int)pvVar8 + 0x1c);
    free(pvVar8);
    pvVar8 = pvVar2;
  }
  *piVar4 = 0;
  return uVar15;
}



void FUN_00bcb800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 uint param_5,undefined4 param_6,short *param_7,int param_8,int param_9,
                 uint param_10,int param_11,uint param_12,uint param_13)

{
  char cVar1;
  ushort netshort;
  _struct_1227 in;
  short *psVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  u_short uVar6;
  char *pcVar7;
  servent *psVar8;
  hostent *phVar9;
  undefined1 *puVar10;
  int iVar11;
  char *pcVar12;
  
  func_0x00e87f70();
  uVar5 = param_13;
  uVar3 = param_12;
  iVar4 = param_11;
  iVar11 = param_9;
  psVar2 = param_7;
  param_5 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_3 = 0x33353536;
  param_4 = 0x35;
  if ((param_7 == (short *)0x0) || (param_8 < 0x10)) goto LAB_00bcba34;
  if (*param_7 != 2) {
    FUN_008ab370();
    return;
  }
  if (((param_9 == 0) || (param_10 == 0)) && ((param_11 == 0 || (param_12 == 0))))
  goto LAB_00bcb9bd;
  if (((byte)param_13 & 6) == 6) {
    FUN_008ab370();
    return;
  }
  if ((param_11 != 0) && (param_12 != 0)) {
    netshort = param_7[1];
    if ((param_13 & 8) == 0) {
      pcVar7 = "udp";
      if ((param_13 & 0x10) == 0) {
        pcVar7 = (char *)0x0;
      }
      psVar8 = getservbyport((uint)netshort,pcVar7);
      if ((psVar8 == (servent *)0x0) || (pcVar7 = psVar8->s_name, pcVar7 == (char *)0x0))
      goto LAB_00bcb8fa;
    }
    else {
LAB_00bcb8fa:
      uVar6 = ntohs(netshort);
      sprintf_s((char *)&param_3,6,"%u",uVar6);
      pcVar7 = (char *)&param_3;
    }
    pcVar12 = pcVar7;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    if (uVar3 <= (uint)((int)pcVar12 - (int)(pcVar7 + 1))) goto LAB_00bcba34;
    func_0x00e87a78(iVar4,uVar3,pcVar7);
  }
  uVar3 = param_10;
  if ((iVar11 == 0) || (param_10 == 0)) goto LAB_00bcba1d;
  in = ((_union_1226 *)(psVar2 + 2))->S_un_b;
  if ((uVar5 & 2) == 0) {
    phVar9 = gethostbyaddr(&stack0x00000000,4,2);
    if ((phVar9 == (hostent *)0x0) || (pcVar7 = phVar9->h_name, pcVar7 == (char *)0x0)) {
      if ((uVar5 & 4) != 0) {
        iVar11 = WSAGetLastError();
        if (iVar11 == 0x2af9) {
LAB_00bcb9bd:
          FUN_008ab370();
          return;
        }
        if (iVar11 == 0x2afa) {
          FUN_008ab370();
          return;
        }
        if (iVar11 != 0x2afb) goto LAB_00bcb9bd;
        goto LAB_00bcba34;
      }
      goto LAB_00bcb9f5;
    }
    if (((uVar5 & 1) != 0) &&
       (puVar10 = (undefined1 *)func_0x008ab0c6(pcVar7,0x2e), puVar10 != (undefined1 *)0x0)) {
      *puVar10 = 0;
    }
  }
  else {
LAB_00bcb9f5:
    pcVar7 = inet_ntoa((in_addr)in);
  }
  pcVar12 = pcVar7;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (uVar3 <= (uint)((int)pcVar12 - (int)(pcVar7 + 1))) {
LAB_00bcba34:
    FUN_008ab370();
    return;
  }
  func_0x00e87a78(iVar11,uVar3,pcVar7);
LAB_00bcba1d:
  FUN_008ab370();
  return;
}



int FUN_00bcc280(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x7fffffff;
  if (param_3 < 0x80000000) {
    uVar2 = param_3;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1,param_2,uVar2);
  if (iVar1 < 1) {
    *param_4 = 0;
    return iVar1;
  }
  *param_4 = iVar1;
  return 1;
}



int FUN_00bcc2d0(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x7fffffff;
  if (param_3 < 0x80000000) {
    uVar2 = param_3;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1,param_2,uVar2);
  if (iVar1 < 1) {
    *param_4 = 0;
    return iVar1;
  }
  *param_4 = iVar1;
  return 1;
}



void FUN_00bce8e0(void)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *in_stack_00000054;
  uint *in_stack_00000058;
  
  func_0x00e87f70();
  *in_stack_00000054 = 0;
  in_stack_00000054[1] = 0;
  in_stack_00000054[2] = 0;
  in_stack_00000054[3] = 0;
  uVar1 = in_stack_00000058[2];
  uVar10 = *in_stack_00000058;
  uVar2 = in_stack_00000058[1];
  uVar11 = in_stack_00000058[3];
  uVar13 = uVar1 >> 1;
  uVar9 = uVar13 | uVar11 << 0x1f;
  uVar3 = uVar10 >> 1 | uVar2 << 0x1f;
  in_stack_00000054[0x20] = uVar10;
  in_stack_00000054[0x21] = uVar2;
  in_stack_00000054[0x22] = uVar1;
  in_stack_00000054[0x23] = uVar11;
  uVar12 = uVar11 >> 1 | uVar10 << 0x1f;
  uVar7 = -(uVar1 & 1) & 0xe1000000 ^ uVar2 >> 1;
  uVar1 = uVar3 >> 1;
  uVar5 = uVar1 | (uVar2 >> 1) << 0x1f;
  in_stack_00000054[0x10] = uVar3;
  in_stack_00000054[0x11] = uVar7;
  in_stack_00000054[0x12] = uVar9;
  in_stack_00000054[0x13] = uVar12;
  uVar7 = uVar7 >> 1;
  uVar2 = uVar9 >> 1 | (uVar11 >> 1) << 0x1f;
  uVar12 = uVar12 >> 1;
  uVar11 = (uVar10 >> 1) << 0x1f | uVar12;
  uVar10 = -(uVar13 & 1) & 0xe1000000 ^ uVar7;
  in_stack_00000054[8] = uVar5;
  in_stack_00000054[9] = uVar10;
  in_stack_00000054[10] = uVar2;
  in_stack_00000054[0xb] = uVar11;
  uVar3 = uVar2 >> 1 | uVar12 << 0x1f;
  uVar12 = uVar1 << 0x1f | uVar11 >> 1;
  uVar5 = uVar5 >> 1 | uVar7 << 0x1f;
  uVar13 = -((uVar13 & 2) >> 1) & 0xe1000000 ^ uVar10 >> 1;
  uVar8 = uVar12 ^ in_stack_00000054[0xb];
  uVar1 = in_stack_00000054[0x10];
  uVar10 = in_stack_00000054[0x11];
  uVar2 = in_stack_00000054[0x12];
  uVar11 = in_stack_00000054[0x13];
  uVar9 = uVar5 ^ in_stack_00000054[8];
  uVar14 = uVar13 ^ in_stack_00000054[9];
  uVar6 = uVar3 ^ in_stack_00000054[10];
  in_stack_00000054[0xf] = uVar8;
  in_stack_00000054[4] = uVar5;
  in_stack_00000054[5] = uVar13;
  in_stack_00000054[6] = uVar3;
  in_stack_00000054[7] = uVar12;
  in_stack_00000054[0xc] = uVar9;
  in_stack_00000054[0xd] = uVar14;
  in_stack_00000054[0xe] = uVar6;
  uVar4 = in_stack_00000054[4] ^ uVar1;
  in_stack_00000054[0x14] = uVar4;
  in_stack_00000054[0x15] = in_stack_00000054[5] ^ uVar10;
  uVar12 = in_stack_00000054[6] ^ uVar2;
  in_stack_00000054[0x16] = uVar12;
  in_stack_00000054[0x17] = in_stack_00000054[7] ^ uVar11;
  in_stack_00000054[0x18] = in_stack_00000054[8] ^ uVar1;
  in_stack_00000054[0x19] = in_stack_00000054[9] ^ uVar10;
  in_stack_00000054[0x1a] = in_stack_00000054[10] ^ uVar2;
  in_stack_00000054[0x1b] = in_stack_00000054[0xb] ^ uVar11;
  uVar13 = in_stack_00000054[0x20];
  uVar3 = in_stack_00000054[0x21];
  uVar5 = in_stack_00000054[0x22];
  uVar7 = in_stack_00000054[0x23];
  in_stack_00000054[0x1c] = uVar9 ^ uVar1;
  in_stack_00000054[0x1d] = uVar14 ^ uVar10;
  in_stack_00000054[0x1f] = uVar8 ^ uVar11;
  in_stack_00000054[0x24] = in_stack_00000054[4] ^ uVar13;
  in_stack_00000054[0x1e] = uVar6 ^ uVar2;
  in_stack_00000054[0x25] = in_stack_00000054[5] ^ uVar3;
  in_stack_00000054[0x26] = in_stack_00000054[6] ^ uVar5;
  in_stack_00000054[0x27] = in_stack_00000054[7] ^ uVar7;
  in_stack_00000054[0x29] = in_stack_00000054[9] ^ uVar3;
  in_stack_00000054[0x28] = in_stack_00000054[8] ^ uVar13;
  in_stack_00000054[0x2b] = in_stack_00000054[0xb] ^ uVar7;
  in_stack_00000054[0x2a] = in_stack_00000054[10] ^ uVar5;
  in_stack_00000054[0x2d] = uVar14 ^ uVar3;
  in_stack_00000054[0x2c] = uVar9 ^ uVar13;
  in_stack_00000054[0x2f] = uVar8 ^ uVar7;
  in_stack_00000054[0x2e] = uVar6 ^ uVar5;
  in_stack_00000054[0x30] = uVar13 ^ in_stack_00000054[0x10];
  in_stack_00000054[0x31] = uVar3 ^ in_stack_00000054[0x11];
  in_stack_00000054[0x32] = uVar5 ^ in_stack_00000054[0x12];
  in_stack_00000054[0x33] = in_stack_00000054[0x13] ^ uVar7;
  in_stack_00000054[0x34] = uVar4 ^ uVar13;
  in_stack_00000054[0x35] = in_stack_00000054[5] ^ uVar10 ^ uVar3;
  in_stack_00000054[0x36] = uVar12 ^ uVar5;
  in_stack_00000054[0x37] = in_stack_00000054[7] ^ uVar11 ^ uVar7;
  in_stack_00000054[0x38] = in_stack_00000054[8] ^ uVar1 ^ uVar13;
  in_stack_00000054[0x39] = in_stack_00000054[9] ^ uVar10 ^ uVar3;
  in_stack_00000054[0x3a] = in_stack_00000054[10] ^ uVar2 ^ uVar5;
  in_stack_00000054[0x3b] = in_stack_00000054[0xb] ^ uVar11 ^ uVar7;
  in_stack_00000054[0x3c] = uVar9 ^ uVar1 ^ uVar13;
  in_stack_00000054[0x3d] = uVar14 ^ uVar10 ^ uVar3;
  in_stack_00000054[0x3e] = uVar6 ^ uVar2 ^ uVar5;
  in_stack_00000054[0x3f] = uVar8 ^ uVar11 ^ uVar7;
  return;
}



void FUN_00bcfd20(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd0250(in_stack_00000010,&stack0x00000000,in_stack_00000018,in_stack_0000001c,
                          in_stack_00000020,in_stack_00000024);
  if (iVar1 != 0) {
    puVar2 = &DAT_01057354;
    if (in_stack_00000014 != (undefined4 *)0x0) {
      puVar2 = in_stack_00000014;
    }
    iVar3 = func_0x00401390(&stack0x00000000,puVar2,8);
    if (iVar3 == 0) {
      FUN_008ab370();
      return;
    }
    func_0x00401320(in_stack_00000018,iVar1);
  }
  FUN_008ab370();
  return;
}



void FUN_00bcfdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 param_11,uint param_12,
                 code *param_13)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  func_0x00e87f70();
  uVar2 = param_12;
  puVar1 = param_10;
  puVar6 = param_9;
  param_6 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (((param_12 & 7) != 0) || (0x7fffffef < param_12 - 0x10)) goto LAB_00bcfef6;
  if (param_12 == 0x10) {
    (*param_13)(param_11,&param_2,param_8);
    *puVar1 = param_4;
    param_1 = param_3;
    puVar1[1] = param_5;
    func_0x00401320(&param_2,0x10);
LAB_00bcfe6a:
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = &DAT_0105735c;
    }
    iVar4 = func_0x00401390(&stack0x00000000,puVar6,4);
    if (iVar4 == 0) {
      uVar5 = CONCAT31(CONCAT21(CONCAT11((undefined1)param_1,param_1._1_1_),param_1._2_1_),
                       param_1._3_1_);
      if ((((uVar2 & 0xfffffff8) - 0x10 < uVar5) && (uVar5 <= (uVar2 & 0xfffffff8) - 8)) &&
         (iVar4 = func_0x00401390((int)puVar1 + uVar5,&DAT_013dee90,(uVar2 - 8) - uVar5), iVar4 == 0
         )) {
        FUN_008ab370();
        return;
      }
    }
  }
  else {
    iVar4 = param_12 - 8;
    iVar3 = func_0x00bd0250(param_8,&stack0x00000000,param_10,param_11,param_12,param_13);
    if (iVar4 == iVar3) goto LAB_00bcfe6a;
  }
  func_0x00401320(puVar1,uVar2);
LAB_00bcfef6:
  FUN_008ab370();
  return;
}



void FUN_00bcff10(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 in_stack_00000010;
  byte bStack00000014;
  byte bStack00000015;
  byte bStack00000016;
  byte bStack00000017;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  code *in_stack_0000003c;
  
  func_0x00e87f70();
  pcVar5 = in_stack_0000003c;
  puVar4 = in_stack_00000030;
  uVar3 = in_stack_00000028;
  in_stack_00000020 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (((in_stack_00000038 & 7) == 0) && (in_stack_00000038 - 0x10 < 0x7ffffff1)) {
    puVar9 = in_stack_00000030 + 2;
    uVar8 = 1;
    func_0x008ab0e6(puVar9,in_stack_00000034,in_stack_00000038);
    puVar6 = &DAT_01057354;
    if (in_stack_0000002c != (undefined4 *)0x0) {
      puVar6 = in_stack_0000002c;
    }
    in_stack_00000010 = *puVar6;
    _bStack00000014 = puVar6[1];
    iVar11 = 6;
    uVar7 = in_stack_00000038;
    do {
      if (uVar7 != 0) {
        iVar10 = (uVar7 - 1 >> 3) + 1;
        puVar6 = puVar9;
        do {
          in_stack_00000018 = *puVar6;
          in_stack_0000001c = puVar6[1];
          (*pcVar5)(&stack0x00000010,&stack0x00000010,uVar3);
          uVar2 = _bStack00000014;
          bVar1 = bStack00000017 ^ (byte)uVar8;
          _bStack00000014 = CONCAT13(bVar1,_bStack00000014);
          if (0xff < uVar8) {
            bStack00000016 = SUB41(uVar2,2);
            bStack00000015 = SUB41(uVar2,1);
            bStack00000015 = bStack00000015 ^ (byte)(uVar8 >> 0x10);
            bStack00000014 = (byte)uVar2;
            _bStack00000014 =
                 CONCAT22(CONCAT11(bVar1,bStack00000016 ^ (byte)(uVar8 >> 8)),
                          CONCAT11(bStack00000015,bStack00000014));
            _bStack00000014 = CONCAT31(_bStack00000015,bStack00000014 ^ (byte)(uVar8 >> 0x18));
          }
          uVar8 = uVar8 + 1;
          *puVar6 = in_stack_00000018;
          puVar6[1] = in_stack_0000001c;
          puVar6 = puVar6 + 2;
          iVar10 = iVar10 + -1;
          uVar7 = in_stack_00000038;
        } while (iVar10 != 0);
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *puVar4 = in_stack_00000010;
    puVar4[1] = _bStack00000014;
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



void FUN_00bd0060(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  size_t _Size;
  int iVar9;
  int iStack00000014;
  undefined3 uStack00000018;
  undefined1 uStack0000001b;
  undefined4 in_stack_0000001c;
  byte bStack00000020;
  byte bStack00000021;
  byte bStack00000022;
  byte bStack00000023;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  uint in_stack_0000002c;
  undefined4 in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 in_stack_00000040;
  uint in_stack_00000044;
  code *in_stack_00000048;
  
  func_0x00e87f70();
  pcVar4 = in_stack_00000048;
  puVar3 = in_stack_0000003c;
  uVar2 = in_stack_00000034;
  in_stack_0000002c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uVar6 = in_stack_00000044 + 7 & 0xfffffff8;
  _Size = uVar6 - in_stack_00000044;
  if ((in_stack_00000044 != 0) && (in_stack_00000044 < 0x80000000)) {
    if (in_stack_00000038 == (undefined4 *)0x0) {
      uVar7 = 0xa65959a6;
    }
    else {
      uVar7 = *in_stack_00000038;
    }
    _Dst = (void *)((int)in_stack_0000003c + in_stack_00000044);
    uStack0000001b = (undefined1)in_stack_00000044;
    uStack00000018 =
         CONCAT12((char)(in_stack_00000044 >> 8),
                  CONCAT11((char)(in_stack_00000044 >> 0x10),(char)(in_stack_00000044 >> 0x18)));
    if (uVar6 == 8) {
      func_0x008ab0e6(in_stack_0000003c + 2,in_stack_00000040,in_stack_00000044);
      puVar3[1] = _uStack00000018;
      *puVar3 = uVar7;
      memset((void *)((int)_Dst + 8),0,_Size);
      (*pcVar4)(puVar3,puVar3,uVar2);
      FUN_008ab370();
      return;
    }
    func_0x008ab0e6(in_stack_0000003c,in_stack_00000040,in_stack_00000044);
    memset(_Dst,0,_Size);
    if (uVar6 - 0x10 < 0x7ffffff1) {
      uVar5 = 1;
      func_0x008ab0e6(puVar3 + 2,puVar3,uVar6);
      _bStack00000020 = _uStack00000018;
      iStack00000014 = 6;
      in_stack_0000001c = uVar7;
      do {
        if (uVar6 != 0) {
          iVar9 = (uVar6 - 1 >> 3) + 1;
          puVar8 = puVar3 + 2;
          do {
            in_stack_00000024 = *puVar8;
            in_stack_00000028 = puVar8[1];
            (*pcVar4)(&stack0x0000001c,&stack0x0000001c,uVar2);
            uVar7 = _bStack00000020;
            bVar1 = bStack00000023 ^ (byte)uVar5;
            _bStack00000020 = CONCAT13(bVar1,_bStack00000020);
            if (0xff < uVar5) {
              bStack00000022 = SUB41(uVar7,2);
              bStack00000021 = SUB41(uVar7,1);
              bStack00000021 = bStack00000021 ^ (byte)(uVar5 >> 0x10);
              bStack00000020 = (byte)uVar7;
              _bStack00000020 =
                   CONCAT22(CONCAT11(bVar1,bStack00000022 ^ (byte)(uVar5 >> 8)),
                            CONCAT11(bStack00000021,bStack00000020));
              _bStack00000020 = CONCAT31(_bStack00000021,bStack00000020 ^ (byte)(uVar5 >> 0x18));
            }
            uVar5 = uVar5 + 1;
            *puVar8 = in_stack_00000024;
            puVar8[1] = in_stack_00000028;
            puVar8 = puVar8 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iStack00000014 = iStack00000014 + -1;
      } while (iStack00000014 != 0);
      *puVar3 = in_stack_0000001c;
      puVar3[1] = _bStack00000020;
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00bd1630(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\stack\\stack.c",0x1bf);
    FUN_00bbc580(param_1,"crypto\\stack\\stack.c",0x1c0);
  }
  return;
}



undefined * FUN_00bd3120(void)

{
  return &DAT_010575ac;
}



void FUN_00bd4770(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0)) {
    piVar1 = (int *)(param_1 + 0x44);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x38),"crypto\\evp\\evp_lib.c",0x35e);
      FUN_00bc7c90(*(undefined4 *)(param_1 + 0x40));
      FUN_00bbc580(param_1,"crypto\\evp\\evp_lib.c",0x361);
      return;
    }
  }
  return;
}



undefined8 __fastcall FUN_00bd4800(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    piVar1 = (int *)(param_3 + 0x44);
    LOCK();
    param_2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return CONCAT44(param_2,1);
}



// WARNING: Removing unreachable block (ram,0x00bd4f32)

void FUN_00bd4c20(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  uint in_stack_00000088;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_00000098;
  undefined4 uVar8;
  
  func_0x00e87f70();
  iVar1 = in_stack_00000098;
  iVar5 = in_stack_00000094;
  in_stack_00000088 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  piVar6 = *(int **)(in_stack_00000094 + 8);
  iVar7 = 0;
  piVar2 = (int *)FUN_00bbc830(0x80,"crypto\\evp\\digest.c",0x3a0);
  if (piVar2 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\digest.c",0x3f2,"evp_md_from_algorithm");
    uVar8 = 0x80006;
LAB_00bd5045:
    func_0x00bc5160(6,uVar8,0);
  }
  else {
    piVar2[0x11] = 1;
    *piVar2 = 0;
    iVar3 = func_0x00bc9710(iVar1,in_stack_00000090,FUN_00bd5620,piVar2);
    if ((iVar3 == 0) || (*piVar2 == -1)) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\digest.c",0x3fa,"evp_md_from_algorithm");
      func_0x00bc5160(6,0xc0103,0);
      if (piVar2[4] != 0) goto LAB_00bd5051;
      piVar6 = piVar2 + 0x11;
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    }
    else {
      piVar2[0xd] = in_stack_00000090;
      iVar3 = func_0x00bc9200(iVar5);
      piVar2[0xe] = iVar3;
      if (iVar3 != 0) {
        piVar2[0xf] = *(int *)(iVar5 + 0xc);
        iVar5 = *piVar6;
        if (iVar5 == 0) {
LAB_00bd4f3d:
          if (piVar2[0x17] == 0) {
LAB_00bd4f47:
            if (piVar2[4] == 0) {
              piVar6 = piVar2 + 0x11;
              LOCK();
              iVar5 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar5 == 1 || iVar5 + -1 < 0) {
                func_0x00bc4f10(piVar2);
              }
            }
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\evp\\digest.c",0x45b,"evp_md_from_algorithm");
            uVar8 = 0xc1;
            goto LAB_00bd5045;
          }
        }
        else {
          piVar6 = piVar6 + 1;
          do {
            switch(iVar5) {
            case 1:
              if (piVar2[0x12] == 0) {
                iVar7 = iVar7 + 1;
                piVar2[0x12] = *piVar6;
              }
              break;
            case 2:
              if (piVar2[0x13] == 0) {
                iVar7 = iVar7 + 1;
                piVar2[0x13] = *piVar6;
              }
              break;
            case 3:
              if (piVar2[0x14] == 0) {
                iVar7 = iVar7 + 1;
                piVar2[0x14] = *piVar6;
              }
              break;
            case 4:
              if (piVar2[0x15] == 0) {
                iVar7 = iVar7 + 1;
                piVar2[0x15] = *piVar6;
              }
              break;
            case 5:
              if (piVar2[0x17] == 0) {
                piVar2[0x17] = *piVar6;
              }
              break;
            case 6:
              if (piVar2[0x18] == 0) {
                iVar7 = iVar7 + 1;
                piVar2[0x18] = *piVar6;
              }
              break;
            case 7:
              if (piVar2[0x19] == 0) {
                piVar2[0x19] = *piVar6;
              }
              break;
            case 8:
              if (piVar2[0x1a] == 0) {
                piVar2[0x1a] = *piVar6;
              }
              break;
            case 9:
              if (piVar2[0x1b] == 0) {
                piVar2[0x1b] = *piVar6;
              }
              break;
            case 10:
              if (piVar2[0x1c] == 0) {
                piVar2[0x1c] = *piVar6;
              }
              break;
            case 0xb:
              if (piVar2[0x1d] == 0) {
                piVar2[0x1d] = *piVar6;
              }
              break;
            case 0xc:
              if (piVar2[0x1e] == 0) {
                piVar2[0x1e] = *piVar6;
              }
              break;
            case 0xd:
              if (piVar2[0x1f] == 0) {
                piVar2[0x1f] = *piVar6;
              }
              break;
            case 0xe:
              if (piVar2[0x16] == 0) {
                iVar7 = iVar7 + 1;
                piVar2[0x16] = *piVar6;
              }
            }
            iVar5 = piVar6[1];
            piVar6 = piVar6 + 2;
          } while (iVar5 != 0);
          if (iVar7 == 0) goto LAB_00bd4f3d;
          if ((iVar7 != 5) && (iVar7 != 6)) goto LAB_00bd4f47;
        }
        piVar2[0x10] = iVar1;
        if (iVar1 != 0) {
          func_0x00bc8620(iVar1);
        }
        param_3 = 0;
        param_2 = 0;
        param_1 = 0;
        puVar4 = (undefined4 *)func_0x00bbfad0(&stack0x00000010,"blocksize",&param_2);
        in_stack_00000024 = *puVar4;
        in_stack_00000028 = puVar4[1];
        in_stack_0000002c = puVar4[2];
        in_stack_00000030 = puVar4[3];
        in_stack_00000034 = puVar4[4];
        puVar4 = (undefined4 *)func_0x00bbfad0(&stack0x00000010,&DAT_0113cdc0,&param_1);
        in_stack_00000038 = *puVar4;
        in_stack_0000003c = puVar4[1];
        in_stack_00000040 = puVar4[2];
        in_stack_00000044 = puVar4[3];
        in_stack_00000048 = puVar4[4];
        puVar4 = (undefined4 *)func_0x00bbfa40(&stack0x00000010,&DAT_0105791c,&param_3);
        in_stack_0000004c = *puVar4;
        in_stack_00000050 = puVar4[1];
        in_stack_00000054 = puVar4[2];
        in_stack_00000058 = puVar4[3];
        in_stack_0000005c = puVar4[4];
        puVar4 = (undefined4 *)func_0x00bbfa40(&stack0x00000010,"algid-absent",&stack0x00000000);
        in_stack_00000060 = *puVar4;
        in_stack_00000064 = puVar4[1];
        in_stack_00000068 = puVar4[2];
        in_stack_0000006c = puVar4[3];
        in_stack_00000070 = puVar4[4];
        puVar4 = (undefined4 *)func_0x00bbfa10(&stack0x00000010);
        in_stack_00000074 = *puVar4;
        in_stack_00000078 = puVar4[1];
        in_stack_0000007c = puVar4[2];
        in_stack_00000080 = puVar4[3];
        in_stack_00000084 = puVar4[4];
        iVar5 = func_0x00bc9fa0(piVar2,&stack0x00000024);
        if (((param_1 < 0x80000000) && (param_2 < 0x80000000)) && (0 < iVar5)) {
          piVar2[10] = param_2;
          piVar2[2] = param_1;
          if (param_3 != 0) {
            piVar2[3] = piVar2[3] | 2;
          }
        }
        else {
          if (piVar2[4] == 0) {
            piVar6 = piVar2 + 0x11;
            LOCK();
            iVar5 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar5 == 1 || iVar5 + -1 < 0) {
              func_0x00bc4f10(piVar2);
            }
          }
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\digest.c",0x464,"evp_md_from_algorithm");
          func_0x00bc5160(6,0xe1,0);
        }
        goto LAB_00bd5051;
      }
      if (piVar2[4] != 0) goto LAB_00bd5051;
      piVar6 = piVar2 + 0x11;
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    }
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      func_0x00bc4f10(piVar2);
    }
  }
LAB_00bd5051:
  FUN_008ab370();
  return;
}



void FUN_00bd5620(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc1f70(param_1,1);
  if ((*param_2 != -1) && (iVar1 != 0)) {
    iVar1 = FUN_00bbba70(iVar1);
    if ((*param_2 != 0) && (*param_2 != iVar1)) {
      *param_2 = -1;
      return;
    }
    *param_2 = iVar1;
  }
  return;
}



bool FUN_00bd6eb0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = param_2;
  piVar1 = param_1;
  iVar7 = 0x74;
  piVar3 = (int *)func_0x00c0daa0(&param_1,0x74);
  if (piVar3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  func_0x00bc67c0(param_1);
  if ((iVar2 != 0) &&
     (((iVar5 == 0x198 || (iVar5 == 0x494)) && (iVar4 = func_0x00bb6310(iVar2), iVar4 != 0)))) {
    iVar4 = func_0x00baf190(iVar4);
    if (iVar4 == 0x494) {
      if (iVar5 == 0x198) {
        iVar7 = 0x494;
      }
    }
    else if (iVar5 == 0x494) {
      iVar7 = 0x198;
    }
  }
  if (piVar1 == (int *)0x0) {
    return false;
  }
  param_1 = (int *)0x0;
  if ((piVar1[5] != 0) || (piVar1[0xf] != 0)) {
    func_0x00bd7d40(piVar1);
  }
  if (((*piVar1 == 0) || (iVar7 != piVar1[1])) || (piVar1[2] == 0)) {
    func_0x00bc67c0(piVar1[3]);
    piVar1[3] = 0;
    func_0x00bc67c0(piVar1[4]);
    piVar1[4] = 0;
    iVar5 = func_0x00c0daa0(&param_1,iVar7);
    if (iVar5 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\p_lib.c",0x61d,"pkey_set_type");
      func_0x00bc5160(6,0x9c,0);
      return false;
    }
    piVar1[2] = iVar5;
    piVar1[0xe] = 0;
    piVar1[1] = iVar7;
    *piVar1 = iVar7;
    piVar1[3] = (int)param_1;
  }
  iVar7 = *piVar1;
  piVar1[5] = iVar2;
  if (iVar7 < 0x199) {
    if (iVar7 == 0x198) {
      if (iVar2 != 0) {
        iVar7 = func_0x00c1b4b0(iVar2);
        goto LAB_00bd700e;
      }
    }
    else {
      if (iVar7 == 6) goto LAB_00bd7004;
      if (iVar7 == 0x1c) {
        if (iVar2 != 0) {
          iVar7 = func_0x00c1a0b0(iVar2);
          goto LAB_00bd700e;
        }
      }
      else {
        if (iVar7 != 0x74) goto LAB_00bd6ffe;
        if (iVar2 != 0) {
          iVar7 = func_0x00c1a590(iVar2);
          goto LAB_00bd700e;
        }
      }
    }
LAB_00bd701c:
    uVar6 = 0;
  }
  else {
    if (iVar7 != 0x390) {
      if (iVar7 == 0x494) goto LAB_00bd7029;
LAB_00bd6ffe:
      piVar1[0xb] = piVar1[0xb] & 0xfffffffe;
      goto LAB_00bd7029;
    }
LAB_00bd7004:
    if (iVar2 == 0) goto LAB_00bd701c;
    iVar7 = func_0x00c1c3b0(iVar2);
LAB_00bd700e:
    if (iVar7 == 0) goto LAB_00bd701c;
    uVar6 = 1;
  }
  piVar1[0xb] = piVar1[0xb] & 0xfffffffeU | uVar6;
LAB_00bd7029:
  if (iVar2 != 0) {
    func_0x00c0fdc0(iVar2);
  }
  return iVar2 != 0;
}



undefined4 FUN_00bd8110(undefined4 param_1,char *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 unaff_EDI;
  int iVar7;
  
  func_0x00e87f70();
  FUN_00bcaeb0();
  pcVar6 = param_2;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar7 = 0;
  if (param_2 != (char *)0x0) {
    iVar7 = func_0x00c0db70(&stack0x00000000,param_2,(int)pcVar6 - (int)(param_2 + 1));
  }
  func_0x00bc67c0(0);
  if (iVar7 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\p_lib.c",0x61d,"pkey_set_type");
    func_0x00bc5160(6,0x9c,0);
  }
  else if (*param_3 == 0) {
    *param_3 = (int)param_2;
  }
  else if (param_3[1] == 0) {
    param_3[1] = (int)param_2;
  }
  iVar7 = func_0x00ba73a0();
  if (iVar7 != 0) {
    iVar5 = *(int *)(iVar7 + 0x244);
    iVar4 = *(int *)(iVar7 + 0x240);
    if (iVar5 != iVar4) {
      do {
        if (*(int *)(iVar7 + 0x40 + iVar4 * 4) != 0) break;
        if ((*(byte *)(iVar7 + 0x140 + iVar4 * 4) & 1) == 0) {
          *(undefined4 *)(iVar7 + 0xc0 + iVar4 * 4) = 0;
          *(undefined4 *)(iVar7 + 0x100 + iVar4 * 4) = 0;
          *(undefined4 *)(iVar7 + 0x140 + iVar4 * 4) = 0;
        }
        else {
          puVar3 = *(undefined1 **)(iVar7 + 0xc0 + iVar4 * 4);
          if (puVar3 != (undefined1 *)0x0) {
            *puVar3 = 0;
            *(undefined4 *)(iVar7 + 0x140 + iVar4 * 4) = 1;
          }
        }
        *(undefined4 *)(iVar7 + 0x40 + iVar4 * 4) = 0;
        *(undefined4 *)(iVar7 + iVar4 * 4) = 0;
        *(undefined4 *)(iVar7 + 0x80 + iVar4 * 4) = 0;
        *(undefined4 *)(iVar7 + 0x1c0 + iVar4 * 4) = 0xffffffff;
        FUN_00bbc580(*(undefined4 *)(iVar7 + 0x180 + iVar4 * 4),
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                     ,0x5b,unaff_EDI);
        *(undefined4 *)(iVar7 + 0x180 + iVar4 * 4) = 0;
        FUN_00bbc580(*(undefined4 *)(iVar7 + 0x200 + iVar4 * 4),
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\crypto\\err\\err_local.h"
                     ,0x5d);
        *(undefined4 *)(iVar7 + 0x200 + iVar4 * 4) = 0;
        if (*(int *)(iVar7 + 0x240) < 1) {
          iVar4 = 0xf;
        }
        else {
          iVar4 = *(int *)(iVar7 + 0x240) + -1;
        }
        *(int *)(iVar7 + 0x240) = iVar4;
        iVar5 = *(int *)(iVar7 + 0x244);
      } while (iVar5 != iVar4);
      if (iVar5 != iVar4) {
        piVar1 = (int *)(iVar7 + 0x40 + iVar4 * 4);
        *piVar1 = *piVar1 + -1;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00bd8330(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    iVar1 = func_0x00bc2b00(param_1);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      iVar1 = func_0x00bc2530(param_1);
      *param_2 = iVar1;
    }
  }
  return;
}



void FUN_00bd8970(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00bd89f0(*(undefined4 *)(param_1 + 0x10),param_2,param_3 | 0x18);
  return;
}



void FUN_00bd8990(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00bd89f0(*(undefined4 *)(param_1 + 0x10),param_2,param_3 & 0xffffffe7);
  return;
}



uint FUN_00bd89b0(undefined4 param_1,int param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = func_0x00be1990(param_2,0xffffffff,0);
  if ((iVar1 == 1) && ((param_3 & 4) == 0)) {
    return ~(*(uint *)(param_2 + 0x84) >> 0xc) & 2 | 1;
  }
  return 3;
}



undefined4 FUN_00bd89f0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_2 + 200);
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] != 0) {
      iVar4 = 0;
      iVar2 = func_0x00bd1830(piVar1[1]);
      if (0 < iVar2) {
        do {
          uVar3 = func_0x00bd1a80(piVar1[1],iVar4);
          iVar2 = func_0x00bc27b0(uVar3);
          if (iVar2 == param_1) {
            return 2;
          }
          if ((iVar2 == 0x38e) && ((param_3 & 0x10) != 0)) {
            return 2;
          }
          iVar4 = iVar4 + 1;
          iVar2 = func_0x00bd1830(piVar1[1]);
        } while (iVar4 < iVar2);
      }
    }
    if (*piVar1 != 0) {
      iVar4 = 0;
      iVar2 = func_0x00bd1830(*piVar1);
      if (0 < iVar2) {
        do {
          uVar3 = func_0x00bd1a80(*piVar1,iVar4);
          iVar2 = func_0x00bc27b0(uVar3);
          if ((iVar2 == param_1) || ((iVar2 == 0x38e && ((param_3 & 0x10) != 0)))) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          iVar2 = func_0x00bd1830(*piVar1);
        } while (iVar4 < iVar2);
      }
      return 2;
    }
  }
  if (((((param_3 & 8) != 0) && (iVar2 = func_0x00be1990(param_2,0xffffffff,0), iVar2 == 1)) &&
      ((param_3 & 4) == 0)) && ((*(uint *)(param_2 + 0x84) & 0x2000) != 0)) {
    return 1;
  }
  return 3;
}



void FUN_00bd8c70(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      FUN_00bde1d0(param_1[1]);
    }
    else if (*param_1 == 2) {
      FUN_00bdb8e0(param_1[1]);
    }
  }
  FUN_00bbc580(param_1,"crypto\\x509\\x509_lu.c",0x213);
  return;
}



void FUN_00bd8da0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_retaddr;
  undefined4 in_stack_00000038;
  uint in_stack_000000f0;
  int *in_stack_000000f8;
  undefined4 in_stack_000000fc;
  
  func_0x00e87f70();
  uVar3 = in_stack_000000fc;
  piVar2 = in_stack_000000f8;
  in_stack_000000f0 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = *in_stack_000000f8;
  if (iVar1 == 0) {
    func_0x00bd1790();
    FUN_008ab370();
    return;
  }
  iVar4 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x4c));
  if (iVar4 == 0) goto LAB_00bd8e63;
  func_0x00bd1a20(*(undefined4 *)(iVar1 + 4));
  param_3 = &stack0x00000010;
  param_2 = 1;
  in_stack_00000038 = uVar3;
  iVar4 = func_0x00bd1610(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000000);
  if (iVar4 < 0) {
    puVar5 = (undefined4 *)FUN_00bbc830(8,"crypto\\x509\\x509_lu.c",0x1e2);
    if (puVar5 == (undefined4 *)0x0) {
      func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
      goto LAB_00bd8e63;
    }
    *puVar5 = 0;
    func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
    iVar4 = func_0x00bd97a0(piVar2,1,uVar3,puVar5);
    FUN_00bd8c70(puVar5);
    if (iVar4 < 1) {
      if (-1 < iVar4) {
        func_0x00bd1790();
      }
      goto LAB_00bd8e63;
    }
    iVar4 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x4c));
    if (iVar4 == 0) goto LAB_00bd8e63;
    func_0x00bd1a20(*(undefined4 *)(iVar1 + 4));
    iVar4 = func_0x00bd99c0(*(undefined4 *)(iVar1 + 4),1,uVar3,&stack0x00000000);
    if (-1 < iVar4) goto LAB_00bd8efe;
    func_0x00bd1790();
  }
  else {
LAB_00bd8efe:
    iVar6 = func_0x00bd1790();
    if ((iVar6 != 0) && (iVar8 = 0, 0 < unaff_retaddr)) {
      do {
        iVar7 = func_0x00bd1a80(*(undefined4 *)(iVar1 + 4),iVar4);
        iVar7 = func_0x00bdea20(iVar6,*(undefined4 *)(iVar7 + 4),1);
        if (iVar7 == 0) {
          func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
          func_0x00bdf360(iVar6);
          goto LAB_00bd8e63;
        }
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar8 < unaff_retaddr);
      func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
      goto LAB_00bd8e63;
    }
  }
  func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
LAB_00bd8e63:
  FUN_008ab370();
  return;
}



int FUN_00bd8f60(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_retaddr;
  
  func_0x00e87f70();
  iVar3 = func_0x00bd1790();
  piVar4 = (int *)FUN_00bbc830(8,"crypto\\x509\\x509_lu.c",0x1e2);
  if (piVar4 != (int *)0x0) {
    *piVar4 = 0;
    iVar1 = *param_2;
    if ((iVar3 != 0) && (iVar5 = func_0x00bd97a0(param_2,2,param_3,piVar4), -1 < iVar5)) {
      if (*piVar4 == 1) {
        FUN_00bde1d0(piVar4[1]);
      }
      else if (*piVar4 == 2) {
        FUN_00bdb8e0(piVar4[1]);
      }
      FUN_00bbc580(piVar4,"crypto\\x509\\x509_lu.c",0x213);
      if (iVar5 != 0) {
        iVar5 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x4c));
        if (iVar5 == 0) {
          FUN_00bd1630(iVar3);
          return 0;
        }
        func_0x00bd1a20(*(undefined4 *)(iVar1 + 4));
        iVar5 = func_0x00bd99c0(*(undefined4 *)(iVar1 + 4),2,param_3,&stack0x00000000);
        if ((-1 < iVar5) && (iVar7 = 0, 0 < unaff_retaddr)) {
          while( true ) {
            iVar6 = func_0x00bd1a80(*(undefined4 *)(iVar1 + 4),iVar5);
            uVar2 = *(undefined4 *)(iVar6 + 4);
            iVar6 = func_0x00bdf340(uVar2);
            if (iVar6 == 0) {
              func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
              func_0x00bd1860(iVar3,FUN_00bdb8e0);
              return 0;
            }
            iVar6 = func_0x00bd18c0(iVar3,uVar2);
            if (iVar6 == 0) break;
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 1;
            if (unaff_retaddr <= iVar7) {
              func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
              return iVar3;
            }
          }
          func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
          FUN_00bdb8e0(uVar2);
          func_0x00bd1860(iVar3,FUN_00bdb8e0);
          return 0;
        }
        func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
      }
      return iVar3;
    }
    if (*piVar4 == 1) {
      FUN_00bde1d0(piVar4[1]);
    }
    else if (*piVar4 == 2) {
      FUN_00bdb8e0(piVar4[1]);
    }
  }
  FUN_00bbc580(piVar4,"crypto\\x509\\x509_lu.c",0x213);
  FUN_00bd1630(iVar3);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00bd92e0)
// WARNING: Removing unreachable block (ram,0x00bd92f7)
// WARNING: Removing unreachable block (ram,0x00bd930f)
// WARNING: Removing unreachable block (ram,0x00bd936f)
// WARNING: Removing unreachable block (ram,0x00bd9329)
// WARNING: Removing unreachable block (ram,0x00bd9330)
// WARNING: Removing unreachable block (ram,0x00bd9353)
// WARNING: Removing unreachable block (ram,0x00bd9359)
// WARNING: Removing unreachable block (ram,0x00bd9379)
// WARNING: Removing unreachable block (ram,0x00bd936a)

int FUN_00bd9140(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x00e87f70();
  piVar2 = (int *)FUN_00bbc830(8,"crypto\\x509\\x509_lu.c",0x1e2);
  if (piVar2 == (int *)0x0) {
    return -1;
  }
  *piVar2 = 0;
  iVar1 = *in_stack_00000018;
  *in_stack_00000014 = 0;
  uVar3 = func_0x00bb6140(in_stack_0000001c);
  iVar4 = func_0x00bd97a0(in_stack_00000018,1,uVar3,piVar2);
  if (iVar4 == 1) {
    iVar4 = (*(code *)in_stack_00000018[9])(in_stack_00000018,in_stack_0000001c,piVar2[1]);
    if ((iVar4 != 0) &&
       (iVar4 = func_0x00bb30a0(in_stack_00000018,piVar2[1],0xffffffff), iVar4 != 0)) {
      *in_stack_00000014 = piVar2[1];
      *piVar2 = 0;
      FUN_00bbc580(piVar2,"crypto\\x509\\x509_lu.c",0x213);
      return 1;
    }
    if (*piVar2 == 1) {
      FUN_00bde1d0(piVar2[1]);
    }
    else if (*piVar2 == 2) {
      FUN_00bdb8e0(piVar2[1]);
    }
    FUN_00bbc580(piVar2,"crypto\\x509\\x509_lu.c",0x213);
    if (iVar1 != 0) {
      iVar5 = 0;
      iVar4 = func_0x00bbb470(*(undefined4 *)(iVar1 + 0x4c));
      if (iVar4 != 0) {
        func_0x00bd1a20(*(undefined4 *)(iVar1 + 4));
        func_0x00bd99c0(*(undefined4 *)(iVar1 + 4),1,uVar3,&stack0x00000000);
        if ((*in_stack_00000014 != 0) && (iVar4 = func_0x00bde550(*in_stack_00000014), iVar4 == 0))
        {
          *in_stack_00000014 = 0;
          iVar5 = -1;
        }
        func_0x00bbb440(*(undefined4 *)(iVar1 + 0x4c));
        return iVar5;
      }
    }
    return 0;
  }
  if (*piVar2 == 1) {
    FUN_00bde1d0(piVar2[1]);
  }
  else if (*piVar2 == 2) {
    FUN_00bdb8e0(piVar2[1]);
  }
  FUN_00bbc580(piVar2,"crypto\\x509\\x509_lu.c",0x213);
  return iVar4;
}



int FUN_00bd9970(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = (int *)*param_1;
  iVar2 = *param_1;
  param_2 = (int *)*param_2;
  iVar1 = iVar2 - *param_2;
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      if (iVar2 == 1) {
        iVar2 = func_0x00bdf190(param_1[1],param_2[1]);
        return iVar2;
      }
      if (iVar2 == 2) {
        iVar2 = func_0x00bde7c0(param_1[1],param_2[1]);
        return iVar2;
      }
    }
  }
  return iVar1;
}



void FUN_00bda250(undefined4 param_1)

{
  func_0x00bbbc70(param_1,"crypto\\x509\\x509_vpm.c",0x1c);
  return;
}



void FUN_00bda270(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\x509\\x509_vpm.c",0x21);
  return;
}



uint FUN_00bda290(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)*param_2;
  pbVar2 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)bVar4 | 1;
}



void FUN_00bda630(undefined4 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 8) != 0)) {
    FUN_00bbc580(param_1,"crypto\\x509\\pcy_tree.c",0x271);
  }
  return;
}



undefined * FUN_00bdb300(void)

{
  return &DAT_01057f64;
}



undefined * FUN_00bdb310(void)

{
  return &DAT_0105802c;
}



void FUN_00bdb320(int param_1,undefined4 param_2)

{
  func_0x00c1ef80(&DAT_0105802c,param_1 + 0x2c,param_1 + 0x34,param_1,0,param_2,
                  *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}



char FUN_00bdb350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int in_stack_0000002c;
  int *in_stack_00000030;
  undefined4 *in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar2 = in_stack_0000002c;
  if (*(int *)(in_stack_0000002c + 0x18) != 0) {
    iVar3 = func_0x00bd1740(*(int *)(in_stack_0000002c + 0x18));
    if (iVar3 == 0) {
      iVar3 = func_0x00bbb470(*(undefined4 *)(iVar2 + 0x84));
      if (iVar3 == 0) {
        return '\0';
      }
      func_0x00bd1a20(*(undefined4 *)(iVar2 + 0x18));
      func_0x00bbb440(*(undefined4 *)(iVar2 + 0x84));
    }
    puVar1 = in_stack_00000034;
    param_1 = *in_stack_00000034;
    param_2 = in_stack_00000034[1];
    param_3 = in_stack_00000034[2];
    param_4 = in_stack_00000034[3];
    iVar3 = func_0x00bd1570(*(undefined4 *)(iVar2 + 0x18),&param_1);
    if (-1 < iVar3) {
      iVar4 = func_0x00bd1830(*(undefined4 *)(iVar2 + 0x18));
      for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
        iVar5 = func_0x00bd1a80(*(undefined4 *)(iVar2 + 0x18),iVar3);
        iVar6 = func_0x00bd1ff0(iVar5,puVar1);
        iVar8 = in_stack_00000038;
        if (iVar6 != 0) {
          return '\0';
        }
        in_stack_0000002c = in_stack_00000038;
        if (*(int *)(iVar5 + 0x18) == 0) {
          if (in_stack_00000038 == 0) {
LAB_00bdb425:
            if (in_stack_00000030 != (int *)0x0) {
              *in_stack_00000030 = iVar5;
            }
            return (*(int *)(iVar5 + 0x1c) == 8) + '\x01';
          }
          uVar7 = func_0x00bb6310(iVar2);
          iVar8 = func_0x00bde860(iVar8,uVar7);
          if (iVar8 == 0) goto LAB_00bdb425;
        }
        else {
          if (in_stack_00000038 == 0) {
            in_stack_0000002c = func_0x00bb6310(iVar2);
          }
          iVar6 = 0;
          iVar8 = func_0x00bd1830(*(undefined4 *)(iVar5 + 0x18));
          if (0 < iVar8) {
            do {
              piVar9 = (int *)func_0x00bd1a80(*(undefined4 *)(iVar5 + 0x18),iVar6);
              if ((*piVar9 == 4) &&
                 (iVar8 = func_0x00bde860(in_stack_0000002c,piVar9[1]), iVar8 == 0))
              goto LAB_00bdb425;
              iVar6 = iVar6 + 1;
              iVar8 = func_0x00bd1830(*(undefined4 *)(iVar5 + 0x18));
            } while (iVar6 < iVar8);
          }
        }
        puVar1 = in_stack_00000034;
      }
    }
  }
  return '\0';
}



undefined4 FUN_00bdb4c0(int param_1,int *param_2)

{
  int iVar1;
  
  if (((*param_2 != 0) && (iVar1 = *(int *)(*param_2 + 0x18), iVar1 != 0)) && (param_1 == 5)) {
    func_0x00bd19c0(iVar1,FUN_00bdb970);
  }
  return 1;
}



undefined4 FUN_00bdb4f0(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar1 = *param_2;
  switch(param_1) {
  case 3:
    if (((*(int *)(iVar1 + 0x7c) != 0) &&
        (pcVar3 = *(code **)(*(int *)(iVar1 + 0x7c) + 8), pcVar3 != (code *)0x0)) &&
       (iVar10 = (*pcVar3)(iVar1), iVar10 == 0)) {
      return 0;
    }
    func_0x00c22ce0(*(undefined4 *)(iVar1 + 0x4c));
    func_0x00c23560(*(undefined4 *)(iVar1 + 0x50));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0x5c));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0x60));
    func_0x00bd1860(*(undefined4 *)(iVar1 + 100),FUN_00be03d0);
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0x8c),"crypto\\x509\\x_crl.c",0x111);
    return 1;
  case 4:
    pcVar3 = *(code **)(*(int *)(iVar1 + 0x7c) + 8);
    if ((pcVar3 != (code *)0x0) && (iVar10 = (*pcVar3)(iVar1), iVar10 == 0)) {
      return 0;
    }
    func_0x00c22ce0(*(undefined4 *)(iVar1 + 0x4c));
    func_0x00c23560(*(undefined4 *)(iVar1 + 0x50));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0x5c));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0x60));
    func_0x00bd1860(*(undefined4 *)(iVar1 + 100),FUN_00be03d0);
  case 1:
    uVar5 = DAT_012b5c1c;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0x807f;
    *(undefined4 *)(iVar1 + 0x7c) = uVar5;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    break;
  case 5:
    uVar5 = func_0x00c22c10(iVar1 + 0x68,0);
    iVar10 = func_0x00bdb070(iVar1,uVar5);
    if (iVar10 == 0) {
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x100000;
    }
    puVar6 = (undefined4 *)func_0x00be0170(iVar1,0x302,&param_2,0);
    *(undefined4 **)(iVar1 + 0x50) = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      if (param_2 != (int *)0xffffffff) goto LAB_00bdb694;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x54);
      uVar11 = uVar2 | 1;
      *(uint *)(iVar1 + 0x54) = uVar11;
      iVar10 = puVar6[1];
      if (0 < iVar10) {
        uVar11 = uVar2 | 5;
        *(uint *)(iVar1 + 0x54) = uVar11;
      }
      bVar4 = 0 < iVar10;
      if (0 < (int)puVar6[2]) {
        bVar4 = bVar4 + 1;
        uVar11 = uVar11 | 8;
        *(uint *)(iVar1 + 0x54) = uVar11;
      }
      if (0 < (int)puVar6[5]) {
        bVar4 = bVar4 + 1;
        uVar11 = uVar11 | 0x10;
        *(uint *)(iVar1 + 0x54) = uVar11;
      }
      if (1 < bVar4) {
        uVar11 = uVar11 | 2;
        *(uint *)(iVar1 + 0x54) = uVar11;
      }
      if (0 < (int)puVar6[4]) {
        uVar11 = uVar11 | 0x20;
        *(uint *)(iVar1 + 0x54) = uVar11;
      }
      if (puVar6[3] != 0) {
        *(uint *)(iVar1 + 0x54) = uVar11 | 0x40;
        if (0 < *(int *)puVar6[3]) {
          *(uint *)(iVar1 + 0x58) = (uint)*(byte *)((int *)puVar6[3])[2];
        }
        if (1 < *(int *)puVar6[3]) {
          *(uint *)(iVar1 + 0x58) =
               *(uint *)(iVar1 + 0x58) | (uint)*(byte *)(((int *)puVar6[3])[2] + 1) << 8;
        }
        *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0x807f;
      }
      uVar5 = *puVar6;
      uVar7 = func_0x00bb6310(iVar1);
      iVar10 = func_0x00c234b0(uVar5,uVar7);
      if (iVar10 == 0) {
LAB_00bdb694:
        *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x80;
      }
    }
    iVar10 = func_0x00be0170(iVar1,0x5a,&param_2,0);
    *(int *)(iVar1 + 0x4c) = iVar10;
    if ((iVar10 == 0) && (param_2 != (int *)0xffffffff)) {
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x80;
    }
    iVar10 = func_0x00be0170(iVar1,0x58,&param_2,0);
    *(int *)(iVar1 + 0x5c) = iVar10;
    if ((iVar10 == 0) && (param_2 != (int *)0xffffffff)) {
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x80;
    }
    iVar10 = func_0x00be0170(iVar1,0x8c,&param_2,0);
    *(int *)(iVar1 + 0x60) = iVar10;
    if (iVar10 == 0) {
      if (param_2 == (int *)0xffffffff) goto LAB_00bdb71b;
    }
    else if (*(int *)(iVar1 + 0x5c) != 0) goto LAB_00bdb71b;
    *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x80;
LAB_00bdb71b:
    uVar5 = *(undefined4 *)(iVar1 + 0x1c);
    iVar12 = 0;
    iVar10 = func_0x00bd1830(uVar5);
    if (0 < iVar10) {
      do {
        uVar7 = func_0x00bd1a80(uVar5,iVar12);
        uVar8 = func_0x00bc36d0(uVar7);
        iVar10 = func_0x00bc27b0(uVar8);
        if (iVar10 == 0x359) {
          *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x1000;
        }
        iVar9 = func_0x00be0240(uVar7);
        if ((((iVar9 != 0) && (iVar10 != 0x302)) && (iVar10 != 0x5a)) && (iVar10 != 0x8c)) {
          *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x200;
          break;
        }
        iVar12 = iVar12 + 1;
        iVar10 = func_0x00bd1830(uVar5);
      } while (iVar12 < iVar10);
    }
    iVar10 = func_0x00bdb990(iVar1);
    if ((iVar10 != 0) &&
       ((pcVar3 = *(code **)(*(int *)(iVar1 + 0x7c) + 4), pcVar3 == (code *)0x0 ||
        (iVar10 = (*pcVar3)(iVar1), iVar10 != 0)))) {
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x100;
      return 1;
    }
    return 0;
  case 0xf:
    iVar10 = *(int *)(param_4 + 0x8c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(param_4 + 0x88);
      FUN_00bbc580(*(undefined4 *)(iVar1 + 0x8c),"crypto\\x509\\x_crl.c",0x20d);
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      if (iVar10 != 0) {
        iVar10 = func_0x00bbbc70(iVar10,"crypto\\x509\\x_crl.c",0x210);
        *(int *)(iVar1 + 0x8c) = iVar10;
        if (iVar10 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



void FUN_00bdb8e0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_010580a0);
  return;
}



undefined * FUN_00bdb940(void)

{
  return &DAT_010580a0;
}



void FUN_00bdb970(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00bfbea0(*param_1,*param_2);
  return;
}



void FUN_00bdbb30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_010580a0);
  return;
}



undefined * FUN_00bdbbc0(void)

{
  return &DAT_01058180;
}



undefined * FUN_00bdc080(void)

{
  return &DAT_01058254;
}



int FUN_00bdc090(void *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10)

{
  void *_Src;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  func_0x00e87f70();
  _Src = (void *)*param_4;
  iVar2 = 0x100000;
  if (param_5 < 0x100001) {
    iVar2 = param_5;
  }
  param_1 = _Src;
  iVar2 = func_0x00c09210(&stack0x00000000,&param_1,iVar2,&DAT_010582b4,param_7,param_8,param_9,
                          param_10);
  piVar3 = param_3;
  if (iVar2 < 1) {
    return iVar2;
  }
  puVar1 = (undefined4 *)*param_3;
  if (puVar1 != (undefined4 *)0x0) {
    func_0x00c1e8a0(puVar1[2]);
    func_0x00bd1860(*puVar1,FUN_00bdc600);
    FUN_00bbc580(puVar1[3],"crypto\\x509\\x_name.c",0x7e);
    FUN_00bbc580(puVar1,"crypto\\x509\\x_name.c",0x7f);
    *piVar3 = 0;
  }
  piVar3 = (int *)FUN_00bbc830(0x14,"crypto\\x509\\x_name.c",0x5c);
  if (piVar3 != (int *)0x0) {
    iVar2 = func_0x00bd1790();
    *piVar3 = iVar2;
    if (iVar2 == 0) {
      uVar6 = 0x8000f;
      uVar4 = 0x61;
    }
    else {
      iVar2 = func_0x00c1eac0();
      piVar3[2] = iVar2;
      if (iVar2 != 0) {
        piVar3[1] = 1;
        iVar2 = func_0x00c1e8f0(piVar3[2],(int)param_1 - (int)_Src);
        if (iVar2 != 0) {
          memcpy(*(void **)(piVar3[2] + 4),_Src,(int)param_1 - (int)_Src);
          iVar5 = 0;
          iVar2 = func_0x00bd1830(0);
          if (0 < iVar2) {
            do {
              uVar4 = func_0x00bd1a80(0,iVar5);
              iVar7 = 0;
              iVar2 = func_0x00bd1830(uVar4);
              if (0 < iVar2) {
                do {
                  iVar2 = func_0x00bd1a80(uVar4,iVar7);
                  *(int *)(iVar2 + 8) = iVar5;
                  iVar2 = func_0x00bd18c0(*piVar3,iVar2);
                  if (iVar2 == 0) goto LAB_00bdc2a2;
                  func_0x00bd1930(uVar4,iVar7,0);
                  iVar7 = iVar7 + 1;
                  iVar2 = func_0x00bd1830(uVar4);
                } while (iVar7 < iVar2);
              }
              iVar5 = iVar5 + 1;
              iVar2 = func_0x00bd1830(0);
            } while (iVar5 < iVar2);
          }
          iVar2 = func_0x00bdc8f0(piVar3);
          if (iVar2 != 0) {
            func_0x00bd1860(0,thunk_FUN_00bd1630);
            piVar3[1] = 0;
            *param_3 = (int)piVar3;
            *param_4 = param_1;
            return iVar2;
          }
LAB_00bdc2a2:
          if (piVar3 == (int *)0x0) goto LAB_00bdc2b4;
        }
        func_0x00c08cb0(piVar3,&DAT_010582f4);
        goto LAB_00bdc2b4;
      }
      uVar6 = 0x80007;
      uVar4 = 0x65;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\x_name.c",uVar4,"x509_name_ex_new");
    func_0x00bc5160(0xd,uVar6,0);
    FUN_00bd1630(*piVar3);
    FUN_00bbc580(piVar3,"crypto\\x509\\x_name.c",0x6f);
  }
LAB_00bdc2b4:
  func_0x00bd1860(0,FUN_00bdc8d0);
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\x_name.c",0xd2,"x509_name_ex_d2i");
  func_0x00bc5160(0xd,0x8010a,0);
  return 0;
}



size_t FUN_00bdc300(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  func_0x00e87f70();
  puVar1 = (undefined4 *)*param_3;
  if (puVar1[1] == 0) {
LAB_00bdc481:
    piVar2 = param_4;
    sVar4 = *(size_t *)puVar1[2];
    if (param_4 != (int *)0x0) {
      memcpy((void *)*param_4,(void *)((size_t *)puVar1[2])[1],sVar4);
      *piVar2 = *piVar2 + sVar4;
    }
    return sVar4;
  }
  iVar5 = 0;
  iVar9 = -1;
  param_3 = (int *)func_0x00bd1790();
  if (param_3 == (int *)0x0) {
LAB_00bdc3e4:
    uVar6 = 0x8000f;
    uVar8 = 0x11a;
  }
  else {
    iVar7 = 0;
    iVar3 = func_0x00bd1830(*puVar1);
    if (0 < iVar3) {
      do {
        iVar3 = func_0x00bd1a80(*puVar1,iVar7);
        if (*(int *)(iVar3 + 8) != iVar9) {
          iVar5 = func_0x00bd1790();
          if (iVar5 == 0) goto LAB_00bdc3e4;
          iVar9 = func_0x00bd18c0(param_3,iVar5);
          if (iVar9 == 0) {
            FUN_00bd1630(iVar5);
            goto LAB_00bdc3e4;
          }
          iVar9 = *(int *)(iVar3 + 8);
        }
        iVar3 = func_0x00bd18c0(iVar5,iVar3);
        if (iVar3 == 0) goto LAB_00bdc3e4;
        iVar7 = iVar7 + 1;
        iVar3 = func_0x00bd1830(*puVar1);
      } while (iVar7 < iVar3);
    }
    sVar4 = func_0x00c0b400(&param_3,0,&DAT_010582b4,0xffffffff,0xffffffff);
    iVar9 = func_0x00c1e8f0(puVar1[2],sVar4);
    if (iVar9 != 0) {
      param_1 = *(undefined4 *)(puVar1[2] + 4);
      func_0x00c0b400(&param_3,&param_1,&DAT_010582b4,0xffffffff,0xffffffff);
      func_0x00bd1860(param_3,thunk_FUN_00bd1630);
      puVar1[1] = 0;
      if ((int)sVar4 < 0) {
        return sVar4;
      }
      iVar9 = func_0x00bdc8f0(puVar1);
      if (iVar9 == 0) {
        return 0xffffffff;
      }
      goto LAB_00bdc481;
    }
    uVar6 = 0x80007;
    uVar8 = 0x10f;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\x_name.c",uVar8,"x509_name_encode");
  func_0x00bc5160(0xd,uVar6,0);
  func_0x00bd1860(param_3,thunk_FUN_00bd1630);
  return 0xffffffff;
}



undefined4 FUN_00bdc4b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00bbc830(0x14,"crypto\\x509\\x_name.c",0x5c);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = func_0x00bd1790();
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    uVar4 = 0x8000f;
    uVar3 = 0x61;
  }
  else {
    iVar2 = func_0x00c1eac0();
    piVar1[2] = iVar2;
    if (iVar2 != 0) {
      piVar1[1] = 1;
      *param_1 = piVar1;
      return 1;
    }
    uVar4 = 0x80007;
    uVar3 = 0x65;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\x_name.c",uVar3,"x509_name_ex_new");
  func_0x00bc5160(0xd,uVar4,0);
  FUN_00bd1630(*piVar1);
  FUN_00bbc580(piVar1,"crypto\\x509\\x_name.c",0x6f);
  return 0;
}



void FUN_00bdc550(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (puVar1 = (undefined4 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    func_0x00c1e8a0(puVar1[2]);
    func_0x00bd1860(*puVar1,FUN_00bdc600);
    FUN_00bbc580(puVar1[3],"crypto\\x509\\x_name.c",0x7e);
    FUN_00bbc580(puVar1,"crypto\\x509\\x_name.c",0x7f);
    *param_1 = 0;
  }
  return;
}



undefined4
FUN_00bdc5a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00c23cb0(param_1,*param_2,param_3,*(undefined4 *)(param_5 + 4));
  uVar2 = 2;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



undefined * FUN_00bdc5d0(void)

{
  return &DAT_01058284;
}



void FUN_00bdc600(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_01058254);
  return;
}



void FUN_00bdc650(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_010582f4);
  return;
}



undefined * FUN_00bdc670(void)

{
  return &DAT_010582f4;
}



void thunk_FUN_00bd1630(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\stack\\stack.c",0x1bf);
    FUN_00bbc580(param_1,"crypto\\stack\\stack.c",0x1c0);
  }
  return;
}



void FUN_00bdc8d0(undefined4 param_1)

{
  func_0x00bd1860(param_1,FUN_00bdc600);
  return;
}



void FUN_00bdcca0(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (puVar1 = (undefined4 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    func_0x00bdbc10(*puVar1);
    thunk_FUN_00bfc170(puVar1[1]);
    func_0x00bd5d50(puVar1[2]);
    FUN_00bbc580(puVar1[4],"crypto\\x509\\x_pubkey.c",0x5e);
    FUN_00bbc580(puVar1,"crypto\\x509\\x_pubkey.c",0x5f);
    *param_1 = 0;
  }
  return;
}



bool FUN_00bdccf0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00bbc830(0x18,"crypto\\x509\\x_pubkey.c",0x74);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  if (*piVar1 == 0) {
    iVar2 = func_0x00bdbc70();
    *piVar1 = iVar2;
    if (iVar2 == 0) goto LAB_00bdcd6b;
  }
  if (piVar1[1] == 0) {
    iVar2 = func_0x00bfc8b0();
    piVar1[1] = iVar2;
    if (iVar2 == 0) goto LAB_00bdcd6b;
  }
  piVar1[3] = param_3;
  FUN_00bbc580(piVar1[4],"crypto\\x509\\x_pubkey.c",0x34);
  piVar1[4] = 0;
  if (param_4 != 0) {
    iVar2 = func_0x00bbbc70(param_4,"crypto\\x509\\x_pubkey.c",0x37);
    piVar1[4] = iVar2;
    if (iVar2 == 0) {
LAB_00bdcd6b:
      func_0x00bdbc10(*piVar1);
      thunk_FUN_00bfc170(piVar1[1]);
      func_0x00bd5d50(piVar1[2]);
      FUN_00bbc580(piVar1[4],"crypto\\x509\\x_pubkey.c",0x5e);
      FUN_00bbc580(piVar1,"crypto\\x509\\x_pubkey.c",0x5f);
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\x_pubkey.c",0x7a,"x509_pubkey_ex_new_ex");
      func_0x00bc5160(0xd,0x8000b,0);
      return false;
    }
  }
  *param_1 = piVar1;
  return piVar1 != (int *)0x0;
}



void FUN_00bdcde0(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint in_stack_00000044;
  int *in_stack_0000004c;
  int *in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined1 *in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  
  func_0x00e87f70();
  iVar6 = in_stack_00000070;
  piVar3 = in_stack_00000050;
  piVar2 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  puVar8 = (undefined1 *)0x0;
  param_2 = in_stack_00000068;
  puVar7 = (undefined1 *)*in_stack_00000050;
  param_3 = 0;
  if (*in_stack_0000004c == 0) {
    piVar4 = (int *)FUN_00bbc830(0x18,"crypto\\x509\\x_pubkey.c",0x74);
    if (piVar4 == (int *)0x0) goto LAB_00bdcf51;
    if (*piVar4 == 0) {
      iVar5 = func_0x00bdbc70();
      *piVar4 = iVar5;
      if (iVar5 != 0) goto LAB_00bdce56;
LAB_00bdcea2:
      func_0x00bdbc10(*piVar4);
      thunk_FUN_00bfc170(piVar4[1]);
      func_0x00bd5d50(piVar4[2]);
      FUN_00bbc580(piVar4[4],"crypto\\x509\\x_pubkey.c",0x5e);
      FUN_00bbc580(piVar4,"crypto\\x509\\x_pubkey.c",0x5f);
      piVar4 = (int *)0x0;
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\x_pubkey.c",0x7a,"x509_pubkey_ex_new_ex");
      func_0x00bc5160(0xd,0x8000b,0);
    }
    else {
LAB_00bdce56:
      if (piVar4[1] == 0) {
        iVar5 = func_0x00bfc8b0();
        piVar4[1] = iVar5;
        if (iVar5 == 0) goto LAB_00bdcea2;
      }
      piVar4[3] = in_stack_0000006c;
      FUN_00bbc580(piVar4[4],"crypto\\x509\\x_pubkey.c",0x34);
      piVar4[4] = 0;
      if (iVar6 != 0) {
        iVar6 = func_0x00bbbc70(iVar6,"crypto\\x509\\x_pubkey.c",0x37);
        piVar4[4] = iVar6;
        if (iVar6 == 0) goto LAB_00bdcea2;
      }
      *piVar2 = (int)piVar4;
    }
    if (piVar4 == (int *)0x0) goto LAB_00bdcf51;
  }
  piVar4 = (int *)*piVar2;
  if (*piVar4 == 0) {
    iVar6 = func_0x00bdbc70();
    *piVar4 = iVar6;
    if (iVar6 != 0) goto LAB_00bdcf16;
LAB_00bdcf27:
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\x_pubkey.c",0x92,"x509_pubkey_ex_d2i_ex");
    func_0x00bc5160(0xd,0x8000b,0);
LAB_00bdcf51:
    FUN_008ab370();
    return;
  }
LAB_00bdcf16:
  if (piVar4[1] == 0) {
    iVar6 = func_0x00bfc8b0();
    piVar4[1] = iVar6;
    if (iVar6 == 0) goto LAB_00bdcf27;
  }
  iVar6 = func_0x00c09210(piVar2,piVar3,in_stack_00000054,&DAT_01058408,in_stack_0000005c,
                          in_stack_00000060,in_stack_00000064,param_2);
  if (iVar6 < 1) goto LAB_00bdd10c;
  iVar6 = *piVar3 - (int)puVar7;
  if (iVar6 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\x_pubkey.c",0x9e,"x509_pubkey_ex_d2i_ex");
    func_0x00bc5160(0xd,0xc0103,0);
    FUN_008ab370();
    return;
  }
  puVar1 = (undefined4 *)*piVar2;
  func_0x00bd5d50(puVar1[2]);
  puVar1[2] = 0;
  FUN_00bcaeb0();
  iVar5 = func_0x00bdddd0(puVar1 + 2,puVar1);
  if (iVar5 == -1) {
LAB_00bdcffc:
    FUN_00bcacf0();
  }
  else if ((iVar5 < 1) && ((*(byte *)(puVar1 + 5) & 1) == 0)) {
    if (in_stack_00000060 != 0) {
      puVar7 = (undefined1 *)func_0x00bbbc30(puVar7,iVar6,"crypto\\x509\\x_pubkey.c",0xc2);
      if (puVar7 == (undefined1 *)0x0) goto LAB_00bdcf51;
      *puVar7 = 0x30;
      puVar8 = puVar7;
    }
    param_2 = puVar7;
    iVar5 = func_0x00bc27c0(&stack0x00000010,0x32,*(undefined4 *)*puVar1,0);
    if (iVar5 < 1) goto LAB_00bdcffc;
    param_3 = func_0x00c026a0(puVar1 + 2,&DAT_010584e4,"SubjectPublicKeyInfo",&stack0x00000010,0x86,
                              puVar1[3],puVar1[4]);
    if (((param_3 == 0) || (iVar5 = func_0x00c267c0(param_3,&param_2,&stack0x00000000), iVar5 == 0))
       || (iVar6 == 0)) goto LAB_00bdd0e4;
    FUN_00bcacf0();
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\x_pubkey.c",0xe0,"x509_pubkey_ex_d2i_ex");
    func_0x00bc5160(0xd,0x72,0);
  }
  else {
LAB_00bdd0e4:
    func_0x00bcad80();
  }
  func_0x00c01b70(param_3);
  FUN_00bbc580(puVar8,"crypto\\x509\\x_pubkey.c",0xea);
LAB_00bdd10c:
  FUN_008ab370();
  return;
}



char * FUN_00bdd120(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  code *pcStack00000008;
  undefined *puStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int *in_stack_0000001c;
  int in_stack_00000020;
  char *in_stack_00000024;
  int in_stack_00000028;
  uint in_stack_0000002c;
  
  puStack0000000c = &DAT_01058408;
  func_0x00e87f70();
  uVar7 = in_stack_0000002c;
  pcVar1 = in_stack_00000024;
  pcStack00000008 = (code *)0x0;
  iVar2 = *(int *)(in_stack_00000024 + 0x10);
  if ((*in_stack_00000024 != '\0') && (*in_stack_0000001c == 0)) {
    return (char *)0x0;
  }
  if (iVar2 != 0) {
    if ((*(byte *)(iVar2 + 4) & 8) == 0) {
      pcStack00000008 = *(code **)(iVar2 + 0x10);
    }
    else {
      pcStack00000008 = *(code **)(iVar2 + 0x18);
    }
  }
  iVar6 = 1;
  switch(*in_stack_00000024) {
  case '\0':
    iVar2 = in_stack_00000028;
    if (*(int *)(in_stack_00000024 + 8) != 0) {
      pcVar1 = (char *)func_0x00c0bca0(in_stack_0000001c,in_stack_00000020,
                                       *(int *)(in_stack_00000024 + 8));
      return pcVar1;
    }
    break;
  case '\x02':
    if (in_stack_00000028 == -1) {
      if ((pcStack00000008 != (code *)0x0) &&
         (iVar2 = (*pcStack00000008)(6,in_stack_0000001c,in_stack_00000024,0), iVar2 == 0)) {
        return (char *)0x0;
      }
      iVar2 = func_0x00c4a160(in_stack_0000001c,pcVar1);
      if ((-1 < iVar2) && (iVar2 < *(int *)(pcVar1 + 0xc))) {
        iVar2 = *(int *)(pcVar1 + 8) + iVar2 * 0x14;
        uVar4 = func_0x00c4a180(in_stack_0000001c,iVar2);
        pcVar1 = (char *)func_0x00c0bca0(uVar4,in_stack_00000020,iVar2,0xffffffff,uVar7);
        return pcVar1;
      }
      if (pcStack00000008 != (code *)0x0) {
        (*pcStack00000008)(7,in_stack_0000001c,pcVar1,0);
        return (char *)0x0;
      }
      return (char *)0x0;
    }
    FUN_00bc4f50();
    uVar4 = 0x7b;
LAB_00c0b498:
    func_0x00bc5050("crypto\\asn1\\tasn_enc.c",uVar4,"ASN1_item_ex_i2d");
    func_0x00bc5160(0xd,0xe6,0);
    return (char *)0xffffffff;
  default:
    return (char *)0x0;
  case '\x04':
    pcVar1 = (char *)(**(code **)(iVar2 + 0x14))
                               (in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                                in_stack_00000028,in_stack_0000002c);
    return pcVar1;
  case '\x05':
    if (in_stack_00000028 != -1) {
      FUN_00bc4f50();
      uVar4 = 0x70;
      goto LAB_00c0b498;
    }
    iVar2 = -1;
    break;
  case '\x06':
    iVar6 = 1;
    if ((in_stack_0000002c & 0x800) != 0) {
      iVar6 = 2;
    }
  case '\x01':
    iVar2 = func_0x00c4a060(&stack0x00000024,in_stack_00000020,in_stack_0000001c,in_stack_00000024);
    if (iVar2 < 0) {
      return (char *)0x0;
    }
    if (0 < iVar2) {
      return in_stack_00000024;
    }
    in_stack_00000024 = (char *)0x0;
    iVar2 = 0x10;
    if (in_stack_00000028 != -1) {
      iVar2 = in_stack_00000028;
    }
    uVar7 = uVar7 & 0xffffff3f;
    if (in_stack_00000028 != -1) {
      uVar7 = in_stack_0000002c;
    }
    if ((pcStack00000008 != (code *)0x0) &&
       (iVar3 = (*pcStack00000008)(6,in_stack_0000001c,pcVar1,0), iVar3 == 0)) {
      return (char *)0x0;
    }
    puStack0000000c = *(undefined **)(pcVar1 + 8);
    iStack00000010 = 0;
    if (0 < *(int *)(pcVar1 + 0xc)) {
      do {
        iVar3 = func_0x00c49e10(*in_stack_0000001c,puStack0000000c,1);
        if (iVar3 == 0) {
          return (char *)0x0;
        }
        uVar4 = func_0x00c4a180(in_stack_0000001c,iVar3);
        iVar3 = func_0x00c0bca0(uVar4,0,iVar3,0xffffffff,uVar7);
        if (iVar3 == -1) {
          return (char *)0xffffffff;
        }
        if (0x7fffffff - (int)in_stack_00000024 < iVar3) {
          return (char *)0xffffffff;
        }
        in_stack_00000024 = (char *)((int)in_stack_00000024 + iVar3);
        iStack00000010 = iStack00000010 + 1;
        puStack0000000c = (undefined *)((int)puStack0000000c + 0x14);
      } while (iStack00000010 < *(int *)(pcVar1 + 0xc));
    }
    pcVar5 = (char *)func_0x00bfc4d0(iVar6,in_stack_00000024,iVar2);
    if ((in_stack_00000020 != 0) && (pcVar5 != (char *)0xffffffff)) {
      func_0x00bfc550(in_stack_00000020,iVar6,in_stack_00000024,iVar2,uVar7);
      iVar2 = *(int *)(pcVar1 + 8);
      iStack00000014 = 0;
      if (0 < *(int *)(pcVar1 + 0xc)) {
        do {
          iVar3 = func_0x00c49e10(*in_stack_0000001c,iVar2,1);
          if (iVar3 == 0) {
            return (char *)0x0;
          }
          uVar4 = func_0x00c4a180(in_stack_0000001c,iVar3);
          func_0x00c0bca0(uVar4,in_stack_00000020,iVar3,0xffffffff,uVar7);
          iStack00000014 = iStack00000014 + 1;
          iVar2 = iVar2 + 0x14;
        } while (iStack00000014 < *(int *)(pcVar1 + 0xc));
      }
      if (iVar6 == 2) {
        func_0x00bfc530(in_stack_00000020);
      }
      if ((pcStack00000008 != (code *)0x0) &&
         (iVar2 = (*pcStack00000008)(7,in_stack_0000001c,pcVar1,0), iVar2 == 0)) {
        return (char *)0x0;
      }
    }
    return pcVar5;
  }
  pcVar1 = (char *)func_0x00c0b920(in_stack_0000001c,in_stack_00000020,in_stack_00000024,iVar2,
                                   in_stack_0000002c);
  return pcVar1;
}



void FUN_00bdd130(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00c25830(param_1,*param_2,param_3,&DAT_01058408,param_5);
  return;
}



undefined * FUN_00bdd2d0(void)

{
  return &DAT_01058448;
}



int FUN_00bdd510(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar4 = 0;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = FUN_00bbba70(iVar2);
    if ((iVar3 == 0x198) || (iVar3 == 0x494)) {
      iVar4 = func_0x00c0d9b0(iVar2);
    }
    func_0x00bd5d50(iVar2);
    if (iVar4 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00c12650(*param_1);
        *param_1 = iVar4;
      }
      return iVar4;
    }
  }
  return 0;
}



int FUN_00bdd770(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = func_0x00c0da10(iVar2);
    func_0x00bd5d50(iVar2);
    if (iVar3 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00bb6040(*param_1);
        *param_1 = iVar3;
      }
      return iVar3;
    }
  }
  return 0;
}



void FUN_00bdd7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_01058448);
  return;
}



void FUN_00bdd940(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01058448);
  return;
}



int FUN_00bdd980(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar4 = 0;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = FUN_00bbba70(iVar2);
    if (iVar3 == 0x1c) {
      iVar4 = func_0x00bd5e40(iVar2);
    }
    func_0x00bd5d50(iVar2);
    if (iVar4 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00c0f7d0(*param_1);
        *param_1 = iVar4;
      }
      return iVar4;
    }
  }
  return 0;
}



int FUN_00bdda00(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar4 = 0;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = FUN_00bbba70(iVar2);
    if (iVar3 == 0x398) {
      iVar4 = func_0x00bd5e40(iVar2);
    }
    func_0x00bd5d50(iVar2);
    if (iVar4 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00c0f7d0(*param_1);
        *param_1 = iVar4;
      }
      return iVar4;
    }
  }
  return 0;
}



int FUN_00bdda80(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 *param_5,
                undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_retaddr;
  
  func_0x00e87f70();
  puVar2 = param_5;
  param_5 = (undefined4 *)*param_5;
  iVar4 = func_0x00bdd5d0(0,&param_5,param_6,0,0,1,FUN_00bdd7e0);
  if (iVar4 != 0) {
    iVar5 = func_0x00bd5ea0(iVar4);
    func_0x00bd5d50(iVar4);
    uVar3 = param_5;
    if (iVar5 != 0) {
      func_0x00c0f870(iVar5,&stack0x00000000,&param_1,&param_2);
      piVar1 = param_4;
      if (((unaff_retaddr != 0) && (param_1 != 0)) && (param_2 != 0)) {
        *puVar2 = uVar3;
        if (param_4 != (int *)0x0) {
          FUN_00c0fc00(*param_4);
          *piVar1 = iVar5;
        }
        return iVar5;
      }
      FUN_00c0fc00(iVar5);
    }
  }
  return 0;
}



int FUN_00bddb40(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = func_0x00bd8770(iVar2);
    func_0x00bd5d50(iVar2);
    if (iVar3 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00c15480(*param_1);
        *param_1 = iVar3;
      }
      return iVar3;
    }
  }
  return 0;
}



int FUN_00bddbb0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar4 = 0;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = FUN_00bbba70(iVar2);
    if (iVar3 == 0x440) {
      iVar4 = func_0x00bd8790(iVar2);
    }
    func_0x00bd5d50(iVar2);
    if (iVar4 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00c15480(*param_1);
        *param_1 = iVar4;
      }
      return iVar4;
    }
  }
  return 0;
}



int FUN_00bddc50(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar4 = 0;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = FUN_00bbba70(iVar2);
    if (iVar3 == 0x40a) {
      iVar4 = func_0x00bd87b0(iVar2);
    }
    func_0x00bd5d50(iVar2);
    if (iVar4 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00c15480(*param_1);
        *param_1 = iVar4;
      }
      return iVar4;
    }
  }
  return 0;
}



int FUN_00bddcd0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  iVar4 = 0;
  iVar2 = func_0x00bdd5d0(0,&param_2,param_3,0,0,1,FUN_00bdd7e0);
  if (iVar2 != 0) {
    iVar3 = FUN_00bbba70(iVar2);
    if (iVar3 == 0x40b) {
      iVar4 = func_0x00bd87d0(iVar2);
    }
    func_0x00bd5d50(iVar2);
    if (iVar4 != 0) {
      *puVar1 = param_2;
      if (param_1 != (int *)0x0) {
        FUN_00c15480(*param_1);
        *param_1 = iVar4;
      }
      return iVar4;
    }
  }
  return 0;
}



undefined * FUN_00bdded0(void)

{
  return &DAT_01058618;
}



undefined4 FUN_00bddee0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  switch(param_1) {
  default:
    return 1;
  case 3:
    func_0x00bca230(3,iVar1,iVar1 + 0x74);
    func_0x00c27150(*(undefined4 *)(iVar1 + 200));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0x94));
    func_0x00c22ce0(*(undefined4 *)(iVar1 + 0x98));
    func_0x00c23470(*(undefined4 *)(iVar1 + 0xa0));
    func_0x00c1e490(*(undefined4 *)(iVar1 + 0x9c));
    FUN_00be03d0(*(undefined4 *)(iVar1 + 0xa4));
    func_0x00be0b00(*(undefined4 *)(iVar1 + 0xa8));
    func_0x00bd1860(*(undefined4 *)(iVar1 + 0xac),FUN_00be6290);
    func_0x00be4f20(*(undefined4 *)(iVar1 + 0xb0));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0xd4));
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0xdc),"crypto\\x509\\x_x509.c",0x62);
    return 1;
  case 4:
    func_0x00bca230(3,iVar1,iVar1 + 0x74);
    func_0x00c27150(*(undefined4 *)(iVar1 + 200));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0x94));
    func_0x00c22ce0(*(undefined4 *)(iVar1 + 0x98));
    func_0x00c23470(*(undefined4 *)(iVar1 + 0xa0));
    func_0x00c1e490(*(undefined4 *)(iVar1 + 0x9c));
    FUN_00be03d0(*(undefined4 *)(iVar1 + 0xa4));
    func_0x00be0b00(*(undefined4 *)(iVar1 + 0xa8));
    func_0x00bd1860(*(undefined4 *)(iVar1 + 0xac),FUN_00be6290);
    func_0x00be4f20(*(undefined4 *)(iVar1 + 0xb0));
    thunk_FUN_00bfc170(*(undefined4 *)(iVar1 + 0xd4));
  case 1:
    *(undefined4 *)(iVar1 + 0xd0) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
    *(undefined4 *)(iVar1 + 0xac) = 0;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xd4) = 0;
    *(undefined4 *)(iVar1 + 200) = 0;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    iVar1 = func_0x00bca490(3,iVar1,iVar1 + 0x74);
    if (iVar1 != 0) {
      return 1;
    }
    break;
  case 0xf:
    iVar2 = param_4[0x37];
    if (iVar1 == 0) {
      return 1;
    }
    *(undefined4 *)(iVar1 + 0xd8) = param_4[0x36];
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0xdc),"crypto\\x509\\x_x509.c",0x96);
    *(undefined4 *)(iVar1 + 0xdc) = 0;
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = func_0x00bbbc70(iVar2,"crypto\\x509\\x_x509.c",0x99);
    *(int *)(iVar1 + 0xdc) = iVar2;
    if (iVar2 != 0) {
      return 1;
    }
    break;
  case 0x10:
    *param_4 = *(undefined4 *)(iVar1 + 0xd8);
    return 1;
  case 0x11:
    *param_4 = *(undefined4 *)(iVar1 + 0xdc);
    return 1;
  }
  return 0;
}



void FUN_00bde1d0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_0105868c);
  return;
}



undefined * FUN_00bde230(void)

{
  return &DAT_0105868c;
}



void FUN_00bde2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_0105868c);
  return;
}



int FUN_00bde300(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  func_0x00e87f70();
  iVar4 = param_4;
  piVar2 = param_3;
  bVar1 = false;
  param_3 = (int *)*param_3;
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    bVar1 = true;
  }
  iVar3 = func_0x00c09060(param_2,&param_3,param_4,&DAT_0105868c);
  if (iVar3 != 0) {
    iVar4 = iVar4 + (*piVar2 - (int)param_3);
    if ((iVar4 < 1) || (iVar4 = func_0x00c27360(iVar3 + 200,&param_3,iVar4), iVar4 != 0)) {
      *piVar2 = (int)param_3;
      return iVar3;
    }
    if ((bVar1) && (func_0x00c08cb0(iVar3,&DAT_0105868c), param_2 != (int *)0x0)) {
      *param_2 = 0;
    }
  }
  return 0;
}



void FUN_00bde3c0(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_0105868c);
  return;
}



undefined * FUN_00be03a0(void)

{
  return &DAT_01058bc4;
}



undefined * FUN_00be03b0(void)

{
  return &DAT_01058ab0;
}



undefined * FUN_00be03c0(void)

{
  return &DAT_01058af4;
}



void FUN_00be03d0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_01058bf4);
  return;
}



undefined * FUN_00be03f0(void)

{
  return &DAT_01058bf4;
}



void FUN_00be0540(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_01058bc4);
  return;
}



undefined * FUN_00be05a0(void)

{
  return &DAT_01058df4;
}



undefined * FUN_00be05b0(void)

{
  return &DAT_01058e38;
}



int * FUN_00be05c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  func_0x00e87f70();
  puVar6 = (undefined4 *)0x0;
  piVar1 = (int *)func_0x00c08650(&DAT_01058e38);
  if (piVar1 == (int *)0x0) {
    uVar7 = 0x8000d;
    uVar4 = 0x9f;
LAB_00be0714:
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_ncons.c",uVar4,"v2i_NAME_CONSTRAINTS");
    func_0x00bc5160(0x22,uVar7,0);
    func_0x00c08cb0(piVar1,&DAT_01058e38);
    func_0x00c08cb0(puVar6,&DAT_01058df4);
    return (int *)0x0;
  }
  iVar8 = 0;
  iVar2 = func_0x00bd1830(in_stack_00000018);
  if (0 < iVar2) {
    do {
      iVar2 = func_0x00bd1a80(in_stack_00000018,iVar8);
      iVar3 = func_0x008ab040(*(undefined4 *)(iVar2 + 4),"permitted",9);
      if ((iVar3 != 0) || (piVar5 = piVar1, *(char *)(*(int *)(iVar2 + 4) + 9) == '\0')) {
        iVar3 = func_0x008ab040(*(undefined4 *)(iVar2 + 4),"excluded",8);
        if ((iVar3 != 0) || (*(char *)(*(int *)(iVar2 + 4) + 8) == '\0')) {
          uVar7 = 0x8f;
          puVar6 = (undefined4 *)0x0;
          uVar4 = 0xab;
          goto LAB_00be0714;
        }
        piVar5 = piVar1 + 1;
      }
      puVar6 = (undefined4 *)func_0x00c08650(&DAT_01058df4);
      if (puVar6 == (undefined4 *)0x0) {
        uVar7 = 0x8000d;
        uVar4 = 0xb1;
        goto LAB_00be0714;
      }
      iVar2 = func_0x00c296b0(*puVar6,in_stack_00000010,in_stack_00000014,&stack0x00000000,1);
      if (iVar2 == 0) {
        uVar7 = 0x80022;
        uVar4 = 0xb5;
        goto LAB_00be0714;
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        iVar2 = func_0x00bd1790();
        *piVar5 = iVar2;
        if (iVar2 != 0) goto LAB_00be06b8;
LAB_00be06e6:
        uVar7 = 0x8000f;
        uVar4 = 0xbb;
        goto LAB_00be0714;
      }
LAB_00be06b8:
      iVar2 = func_0x00bd18c0(iVar2,puVar6);
      if (iVar2 == 0) goto LAB_00be06e6;
      iVar8 = iVar8 + 1;
      iVar2 = func_0x00bd1830(in_stack_00000018);
    } while (iVar8 < iVar2);
  }
  return piVar1;
}



undefined4 FUN_00be0760(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00be0b90(param_1,*param_2,param_3,param_4,"Permitted");
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    func_0x00bab050(param_3,&DAT_0113d23c);
  }
  func_0x00be0b90(param_1,param_2[1],param_3,param_4,"Excluded");
  return 1;
}



uint FUN_00be14e0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 0x84);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0x8c) & 2) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 & 2) == 0) || ((*(byte *)(param_2 + 0x88) & 0x88) != 0)) {
        if ((uVar1 & 8) == 0) {
          return 1;
        }
        return *(uint *)(param_2 + 0x90) >> 7 & 1;
      }
    }
    else {
      iVar2 = func_0x00be1a60(param_2);
      if ((iVar2 != 0) && ((iVar2 != 5 || ((*(byte *)(param_2 + 0x90) & 4) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



bool FUN_00be1550(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 0x84);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0x8c) & 0x11) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0x90) & 0x40) != 0)) {
        if ((uVar1 & 2) == 0) {
          return true;
        }
        return (*(byte *)(param_2 + 0x88) & 0xa8) != 0;
      }
    }
    else {
      iVar2 = func_0x00be1a60(param_2);
      if ((iVar2 != 0) && ((iVar2 != 5 || ((*(byte *)(param_2 + 0x90) & 4) != 0)))) {
        return true;
      }
    }
  }
  return false;
}



undefined4 FUN_00be15c0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x84);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0x8c) & 0x11) != 0)) {
    if (param_3 == 0) {
      if ((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0x90) & 0x40) != 0)) &&
         (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0x88) & 0xa8) != 0)))) {
        uVar3 = 1;
        if (((uVar1 & 2) != 0) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
    else {
      iVar2 = func_0x00be1a60(param_2);
      if ((iVar2 != 0) && ((iVar2 != 5 || ((*(byte *)(param_2 + 0x90) & 4) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



int FUN_00be1640(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x00be2380(param_2,param_3);
  if ((((iVar1 != 0) && (param_3 == 0)) && ((*(byte *)(param_2 + 0x84) & 2) != 0)) &&
     ((*(byte *)(param_2 + 0x88) & 0xc0) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



int FUN_00be1680(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x00be2380(param_2,param_3);
  if ((((iVar1 != 0) && (param_3 == 0)) && ((*(byte *)(param_2 + 0x84) & 2) != 0)) &&
     ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



int FUN_00be16c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = func_0x00be1a60(param_2);
    if (iVar1 == 2) {
      iVar1 = 0;
    }
    return iVar1;
  }
  if (((*(byte *)(param_2 + 0x84) & 2) != 0) && ((*(byte *)(param_2 + 0x88) & 2) == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00be1700(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    uVar1 = func_0x00be1a60(param_2);
    return uVar1;
  }
  if (((((*(uint *)(param_2 + 0x84) & 2) == 0) ||
       (((*(uint *)(param_2 + 0x88) & 0xffffff3f) == 0 && ((*(uint *)(param_2 + 0x88) & 0xc0) != 0))
       )) && ((*(uint *)(param_2 + 0x84) & 4) != 0)) && (*(int *)(param_2 + 0x8c) == 0x40)) {
    iVar2 = func_0x00be01f0(param_2,0x7e,0xffffffff);
    if (-1 < iVar2) {
      uVar1 = func_0x00be01d0(param_2,iVar2);
      iVar2 = func_0x00be0240(uVar1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



uint FUN_00be1780(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    uVar1 = func_0x00be1a60(param_2);
    return uVar1;
  }
  if ((((*(byte *)(param_2 + 0x84) & 2) != 0) && ((char)*(uint *)(param_2 + 0x88) < '\0')) &&
     ((*(uint *)(param_2 + 0x88) & 6) == 0)) {
    iVar2 = func_0x00be01f0(param_2,0x53,0xffffffff);
    if (-1 < iVar2) {
      uVar3 = func_0x00be01d0(param_2,iVar2);
      iVar2 = func_0x00be0240(uVar3);
      if (((iVar2 != 0) && ((*(byte *)(param_2 + 0x84) & 4) != 0)) &&
         ((*(uint *)(param_2 + 0x8c) & 8) != 0)) {
        return (uint)((*(uint *)(param_2 + 0x8c) & 0x101) == 0);
      }
    }
  }
  return 0;
}



undefined4 FUN_00be1800(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = func_0x00be1a60(param_2);
    return uVar1;
  }
  return 1;
}



int FUN_00be1b60(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



void FUN_00be27e0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00bbc580(param_1[1],"crypto\\x509\\v3_utl.c",0x6c);
    FUN_00bbc580(param_1[2],"crypto\\x509\\v3_utl.c",0x6d);
    FUN_00bbc580(*param_1,"crypto\\x509\\v3_utl.c",0x6e);
    FUN_00bbc580(param_1,"crypto\\x509\\v3_utl.c",0x6f);
  }
  return;
}



undefined4 FUN_00be3510(int *param_1,uint param_2,int *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = param_4;
  func_0x00be3f40(&param_1,&param_2,param_4,param_5);
  if (param_2 != uVar1) {
    return 0;
  }
  while (uVar1 = param_2 - 4, 3 < param_2) {
    if (*param_1 != *param_3) goto LAB_00be355b;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    param_2 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_00be355b:
    if ((char)*param_1 != (char)*param_3) {
      return 0;
    }
    if (uVar1 != 0xfffffffd) {
      if (*(char *)((int)param_1 + 1) != *(char *)((int)param_3 + 1)) {
        return 0;
      }
      if (uVar1 != 0xfffffffe) {
        if (*(char *)((int)param_1 + 2) != *(char *)((int)param_3 + 2)) {
          return 0;
        }
        if ((uVar1 != 0xffffffff) && (*(char *)((int)param_1 + 3) != *(char *)((int)param_3 + 3))) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_00be3590(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_2 != param_4) {
    return 0;
  }
  iVar5 = param_2;
  if (param_2 != 0) {
    pcVar4 = (char *)(param_2 + param_3);
    do {
      pcVar4 = pcVar4 + -1;
      iVar5 = iVar5 + -1;
      pcVar1 = pcVar4 + (param_1 - param_3);
      if (pcVar4[param_1 - param_3] == '@') {
        pcVar4 = (char *)(iVar5 + param_3);
LAB_00be35c9:
        iVar2 = FUN_00be3600(pcVar1,param_2 - iVar5,pcVar4,param_2 - iVar5,0);
        if (iVar2 == 0) {
          return 0;
        }
        break;
      }
      if (*pcVar4 == '@') goto LAB_00be35c9;
    } while (iVar5 != 0);
  }
  if (iVar5 == 0) {
    iVar5 = param_2;
  }
  uVar3 = FUN_00be3510(param_1,iVar5,param_3,iVar5,0);
  return uVar3;
}



undefined4 FUN_00be3600(int param_1,int param_2,char *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  iVar2 = param_4;
  func_0x00be3f40(&param_1,&param_2,param_4,param_5);
  if (param_2 != iVar2) {
    return 0;
  }
  if (param_2 != 0) {
    param_1 = param_1 - (int)param_3;
    do {
      cVar3 = param_3[param_1];
      cVar1 = *param_3;
      if (cVar3 == '\0') {
        return 0;
      }
      if (cVar3 != cVar1) {
        cVar4 = cVar3 + ' ';
        if (0x19 < (byte)(cVar3 + 0xbfU)) {
          cVar4 = cVar3;
        }
        cVar3 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar3 = cVar1;
        }
        if (cVar4 != cVar3) {
          return 0;
        }
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}



undefined4
FUN_00be36a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,char *param_5,
            uint param_6,uint param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  func_0x00e87f70();
  if (((1 < param_6) && (*param_5 == '.')) ||
     (iVar3 = func_0x00be4020(param_3,param_4,param_7), iVar3 == 0)) {
    uVar4 = FUN_00be3600(param_3,param_4,param_5,param_6,param_7);
    return uVar4;
  }
  iVar5 = (param_3 - iVar3) + param_4 + -1;
  iVar7 = iVar3 - param_3;
  if ((param_6 < (uint)(iVar5 + iVar7)) ||
     (iVar6 = FUN_00be3600(param_3,iVar7,param_5,iVar7,param_7), iVar6 == 0)) {
    return 0;
  }
  pbVar8 = (byte *)(param_5 + iVar7);
  pbVar9 = (byte *)(param_5 + (param_6 - iVar5));
  iVar5 = FUN_00be3600(pbVar9,iVar5,(char *)(iVar3 + 1),iVar5,param_7);
  if (iVar5 == 0) {
    return 0;
  }
  if ((iVar7 == 0) && (*(char *)(iVar3 + 1) == '.')) {
    if (pbVar8 == pbVar9) {
      return 0;
    }
    if ((param_7 & 8) != 0) {
      bVar2 = true;
      goto LAB_00be3795;
    }
  }
  else if ((3 < param_6) && (iVar3 = func_0x00bbc0f0(param_5,&DAT_01059184,4), iVar3 == 0)) {
    return 0;
  }
  bVar2 = false;
LAB_00be3795:
  if ((pbVar9 != pbVar8 + 1) || (*pbVar8 != 0x2a)) {
    for (; pbVar8 != pbVar9; pbVar8 = pbVar8 + 1) {
      bVar1 = *pbVar8;
      if ((((bVar1 < 0x30) || (0x39 < bVar1)) && ((bVar1 < 0x41 || (0x5a < bVar1)))) &&
         (((bVar1 < 0x61 || (0x7a < bVar1)) && (bVar1 != 0x2d)))) {
        if (!bVar2) {
          return 0;
        }
        if (bVar1 != 0x2e) {
          return 0;
        }
      }
    }
  }
  return 1;
}



int FUN_00be3910(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  if (param_2 == 0) {
    return param_2;
  }
  iVar1 = func_0x00bd21b0(param_2,0);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_utl.c",0xbd,"i2s_ASN1_INTEGER");
    uVar3 = 0x8000d;
  }
  else {
    iVar2 = func_0x00be3060(iVar1);
    if (iVar2 != 0) goto LAB_00be3988;
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_utl.c",0xbf,"i2s_ASN1_INTEGER");
    uVar3 = 0x80022;
  }
  func_0x00bc5160(0x22,uVar3,0);
LAB_00be3988:
  FUN_00bba400(iVar1);
  return iVar2;
}



int FUN_00be3a40(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  func_0x00e87f70();
  iVar2 = *(int *)(param_4 + 0x10);
  if (iVar2 != 0x10) {
    if (param_3 == 0) {
      if (*(int *)(param_4 + 0x14) == -1) {
        *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
        *(int *)(param_4 + 0x14) = iVar2;
        return 1;
      }
      if (*(int *)(param_4 + 0x14) == iVar2) {
        *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
        return 1;
      }
    }
    else if (param_3 < 5) {
      uVar4 = 0;
      while( true ) {
        iVar5 = param_3;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        param_3 = iVar5 + -1;
        iVar3 = func_0x00bbbe00(uVar1);
        if (iVar3 < 0) break;
        uVar4 = uVar4 << 4 | (int)(char)iVar3;
        if (param_3 == 0) {
          *(undefined1 *)(iVar2 + param_4) = (char)(uVar4 >> 8);
          ((undefined1 *)(iVar2 + param_4))[1] = (char)uVar4;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 2;
          return iVar5;
        }
      }
    }
    else if ((iVar2 < 0xd) && (param_2[param_3] == '\0')) {
      iVar2 = func_0x00be39a0(iVar2 + param_4,param_2);
      if (iVar2 != 0) {
        *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 4;
        return 1;
      }
    }
  }
  return 0;
}



undefined * FUN_00be42a0(void)

{
  return &DAT_01059214;
}



undefined * FUN_00be42b0(void)

{
  return &DAT_01059258;
}



undefined * FUN_00be42c0(void)

{
  return &DAT_0105929c;
}



undefined * FUN_00be42d0(void)

{
  return &DAT_010592e0;
}



undefined4
FUN_00be42e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00be5580(param_3,*param_2,param_4,"Autonomous System Numbers");
  if (iVar1 != 0) {
    iVar1 = func_0x00be5580(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



int * FUN_00be4330(void)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  int iStack00000008;
  undefined4 in_stack_00000018;
  undefined4 uVar17;
  
  func_0x00e87f70();
  piVar4 = (int *)func_0x00c08650(&DAT_010592e0);
  if (piVar4 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_asid.c",0x20f,"v2i_ASIdentifiers");
    func_0x00bc5160(0x22,0x80022,0);
    return (int *)0x0;
  }
  iStack00000008 = 0;
  iVar5 = func_0x00bd1830(in_stack_00000018);
  if (iVar5 < 1) {
LAB_00be4696:
    iVar5 = func_0x00be4920(*piVar4);
    if ((iVar5 != 0) && (iVar5 = func_0x00be4920(piVar4[1]), iVar5 != 0)) {
      return piVar4;
    }
LAB_00be4746:
    iVar9 = 0;
    iVar5 = 0;
LAB_00be4748:
    func_0x00c08cb0(piVar4,&DAT_010592e0);
    thunk_FUN_00bfc170(iVar9);
    thunk_FUN_00bfc170(iVar5);
    return (int *)0x0;
  }
LAB_00be43a8:
  iVar9 = 0;
  iVar5 = func_0x00bd1a80(in_stack_00000018,iStack00000008);
  iVar6 = func_0x00be3d90(*(undefined4 *)(iVar5 + 4),&DAT_01059428);
  if (iVar6 != 0) {
    iVar6 = func_0x00be3d90(*(undefined4 *)(iVar5 + 4),&DAT_0105942c);
    if (iVar6 == 0) {
      bVar3 = true;
      goto LAB_00be43e4;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_asid.c",0x21f,"v2i_ASIdentifiers");
    uVar17 = 0x73;
    goto LAB_00be46f9;
  }
  bVar3 = false;
LAB_00be43e4:
  pbVar2 = *(byte **)(iVar5 + 8);
  if (pbVar2 == (byte *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_asid.c",0x225,"v2i_ASIdentifiers");
    uVar17 = 0x74;
LAB_00be473c:
    func_0x00bc5160(0x22,uVar17,0);
    goto LAB_00be4746;
  }
  pcVar13 = "inherit";
  pbVar7 = pbVar2;
  do {
    bVar1 = *pbVar7;
    bVar16 = bVar1 < (byte)*pcVar13;
    if (bVar1 != *pcVar13) {
LAB_00be4416:
      uVar8 = -(uint)bVar16 | 1;
      goto LAB_00be441b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar16 = bVar1 < ((byte *)pcVar13)[1];
    if (bVar1 != ((byte *)pcVar13)[1]) goto LAB_00be4416;
    pbVar7 = pbVar7 + 2;
    pcVar13 = (char *)((byte *)pcVar13 + 2);
  } while (bVar1 != 0);
  uVar8 = 0;
LAB_00be441b:
  if (uVar8 == 0) {
    piVar15 = piVar4;
    if (bVar3) {
      if (bVar3) {
        piVar15 = piVar4 + 1;
        goto LAB_00be4433;
      }
    }
    else {
LAB_00be4433:
      if (*piVar15 == 0) {
        iVar6 = func_0x00c08650(&DAT_0105929c);
        *piVar15 = iVar6;
        if (iVar6 != 0) {
          iVar6 = FUN_00bfc950();
          *(int *)(*piVar15 + 4) = iVar6;
          if (iVar6 != 0) {
            *(undefined4 *)*piVar15 = 0;
            goto LAB_00be4469;
          }
          func_0x00c08cb0((undefined4 *)*piVar15,&DAT_0105929c);
          *piVar15 = 0;
        }
      }
      else {
LAB_00be4469:
        if (*(int *)*piVar15 == 0) goto LAB_00be4678;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_asid.c",0x22f,"v2i_ASIdentifiers");
    uVar17 = 0xa5;
  }
  else {
    iVar6 = func_0x00e87a90(pbVar2,&DAT_01146960);
    pcVar13 = (char *)(*(int *)(iVar5 + 8) + iVar6);
    if (*pcVar13 == '\0') {
      iVar5 = func_0x00be2b20(iVar5,&stack0x00000000);
      if (iVar5 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_asid.c",0x251,"v2i_ASIdentifiers");
        uVar17 = 0x80022;
        goto LAB_00be473c;
      }
      iVar5 = 0;
LAB_00be4574:
      piVar15 = piVar4;
      if (bVar3) {
        if (bVar3) {
          piVar15 = piVar4 + 1;
          goto LAB_00be4593;
        }
LAB_00be4793:
        FUN_00bc4f50();
        uVar17 = 0x266;
LAB_00be47df:
        func_0x00bc5050("crypto\\x509\\v3_asid.c",uVar17,"v2i_ASIdentifiers");
        func_0x00bc5160(0x22,0x80022,0);
        goto LAB_00be4748;
      }
LAB_00be4593:
      if ((int *)*piVar15 == (int *)0x0) {
        iVar6 = func_0x00c08650(&DAT_0105929c);
        *piVar15 = iVar6;
        if (iVar6 != 0) {
          uVar17 = func_0x00bd1760(FUN_00be4890);
          *(undefined4 *)(iVar6 + 4) = uVar17;
          puVar11 = (undefined4 *)*piVar15;
          if (puVar11[1] != 0) {
            *puVar11 = 1;
            goto LAB_00be45df;
          }
          func_0x00c08cb0(puVar11,&DAT_0105929c);
          *piVar15 = 0;
        }
        goto LAB_00be4793;
      }
      if (*(int *)*piVar15 != 1) goto LAB_00be4793;
LAB_00be45df:
      puVar11 = (undefined4 *)func_0x00c08650(&DAT_01059258);
      if (puVar11 == (undefined4 *)0x0) goto LAB_00be4793;
      iVar6 = func_0x00bd18e0(*(undefined4 *)(*piVar15 + 4),1);
      if (iVar6 == 0) {
LAB_00be4772:
        func_0x00c08cb0(puVar11,&DAT_01059258);
        goto LAB_00be4793;
      }
      if (iVar5 == 0) {
        *puVar11 = 0;
        puVar11[1] = iVar9;
      }
      else {
        *puVar11 = 1;
        puVar12 = (undefined4 *)func_0x00c08650(&DAT_01059214);
        puVar11[1] = puVar12;
        if (puVar12 == (undefined4 *)0x0) goto LAB_00be4772;
        thunk_FUN_00bfc170(*puVar12);
        *(int *)puVar11[1] = iVar9;
        thunk_FUN_00bfc170(*(undefined4 *)(puVar11[1] + 4));
        *(int *)(puVar11[1] + 4) = iVar5;
      }
      iVar6 = func_0x00bd18c0(*(undefined4 *)(*piVar15 + 4),puVar11);
      if (iVar6 == 0) goto LAB_00be4772;
LAB_00be4678:
      iStack00000008 = iStack00000008 + 1;
      iVar5 = func_0x00bd1830(in_stack_00000018);
      if (iVar5 <= iStack00000008) goto LAB_00be4696;
      goto LAB_00be43a8;
    }
    iVar9 = func_0x00e87a90(pcVar13,&DAT_01059438);
    if (*(char *)(*(int *)(iVar5 + 8) + iVar9 + iVar6) != '-') {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_asid.c",0x23e,"v2i_ASIdentifiers");
      uVar17 = 0xa2;
      goto LAB_00be46f9;
    }
    iVar14 = iVar9 + iVar6 + 1;
    iVar9 = func_0x00e87a90(*(int *)(iVar5 + 8) + iVar14,&DAT_01059438);
    iVar14 = iVar14 + iVar9;
    iVar9 = func_0x00e87a90(*(int *)(iVar5 + 8) + iVar14,&DAT_01146960);
    if (*(char *)(*(int *)(iVar5 + 8) + iVar9 + iVar14) == '\0') {
      iVar10 = func_0x00bbbc70(*(int *)(iVar5 + 8),"crypto\\x509\\v3_asid.c",0x255);
      if (iVar10 == 0) goto LAB_00be4746;
      *(undefined1 *)(iVar10 + iVar6) = 0;
      iVar9 = func_0x00be3dd0(0,iVar10);
      iVar5 = func_0x00be3dd0(0,iVar14 + iVar10);
      FUN_00bbc580(iVar10,"crypto\\x509\\v3_asid.c",0x25b);
      if ((iVar9 == 0) || (iVar5 == 0)) {
        FUN_00bc4f50();
        uVar17 = 0x25d;
        goto LAB_00be47df;
      }
      iVar6 = func_0x00bd1ff0(iVar9,iVar5);
      if (iVar6 < 1) goto LAB_00be4574;
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_asid.c",0x261,"v2i_ASIdentifiers");
      func_0x00bc5160(0x22,0x74,0);
      goto LAB_00be4748;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_asid.c",0x246,"v2i_ASIdentifiers");
    uVar17 = 0xa3;
  }
LAB_00be46f9:
  func_0x00bc5160(0x22,uVar17,0);
  func_0x00ba6530(4,"name=",*(undefined4 *)(iVar5 + 4),", value=",*(undefined4 *)(iVar5 + 8));
  goto LAB_00be4746;
}



void FUN_00be4890(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1 = (int *)*param_1;
  param_2 = (int *)*param_2;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if (*param_2 == 0) {
      func_0x00bd1ff0(param_1[1],param_2[1]);
      return;
    }
  }
  else if ((iVar1 == 1) && (*param_2 == 1)) {
    iVar1 = func_0x00bd1ff0(*(undefined4 *)param_1[1],*(undefined4 *)param_2[1]);
    if (iVar1 != 0) {
      return;
    }
    func_0x00bd1ff0(*(undefined4 *)(param_1[1] + 4),*(undefined4 *)(param_2[1] + 4));
    return;
  }
  if (iVar1 != 0) {
    func_0x00bd1ff0(*(undefined4 *)param_1[1],(undefined4 *)param_2[1]);
    return;
  }
  func_0x00bd1ff0(param_1[1],*(undefined4 *)param_2[1]);
  return;
}



undefined * FUN_00be5700(void)

{
  return &DAT_0105949c;
}



undefined * FUN_00be5710(void)

{
  return &DAT_010594e0;
}



undefined * FUN_00be5720(void)

{
  return &DAT_01059524;
}



undefined * FUN_00be5730(void)

{
  return &DAT_01059568;
}



undefined * FUN_00be5740(void)

{
  return &DAT_01059598;
}



undefined4 FUN_00be5750(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  
  iVar6 = 0;
  iVar4 = func_0x00bd1830(param_2);
  if (0 < iVar4) {
    do {
      piVar5 = (int *)func_0x00bd1a80(param_2,iVar6);
      if ((((piVar5 == (int *)0x0) || (piVar2 = (int *)*piVar5, piVar2 == (int *)0x0)) ||
          (puVar3 = (undefined1 *)piVar2[2], puVar3 == (undefined1 *)0x0)) || (*piVar2 < 2)) {
        sVar7 = 0;
LAB_00be57de:
        func_0x00bbc8e0(param_3,"%*sUnknown AFI %u",param_4,&DAT_0112e1b4,sVar7);
      }
      else {
        sVar7 = CONCAT11(*puVar3,puVar3[1]);
        if (sVar7 == 1) {
          func_0x00bbc8e0(param_3,"%*sIPv4",param_4,&DAT_0112e1b4);
        }
        else {
          if (sVar7 != 2) goto LAB_00be57de;
          func_0x00bbc8e0(param_3,"%*sIPv6",param_4,&DAT_0112e1b4);
        }
      }
      if (2 < *(int *)*piVar5) {
        uVar1 = *(undefined1 *)(((int *)*piVar5)[2] + 2);
        switch(uVar1) {
        case 1:
          func_0x00bab050(param_3," (Unicast)");
          break;
        case 2:
          func_0x00bab050(param_3," (Multicast)");
          break;
        case 3:
          func_0x00bab050(param_3," (Unicast/Multicast)");
          break;
        case 4:
          func_0x00bab050(param_3,&DAT_010596fc);
          break;
        default:
          func_0x00bbc8e0(param_3," (Unknown SAFI %u)",uVar1);
          break;
        case 0x40:
          func_0x00bab050(param_3," (Tunnel)");
          break;
        case 0x41:
          func_0x00bab050(param_3,&DAT_01059710);
          break;
        case 0x42:
          func_0x00bab050(param_3,&DAT_01059718);
          break;
        case 0x80:
          func_0x00bab050(param_3," (MPLS-labeled VPN)");
        }
      }
      if (*(int *)piVar5[1] == 0) {
        func_0x00bab050(param_3,": inherit\n");
      }
      else if (*(int *)piVar5[1] == 1) {
        func_0x00bab050(param_3,&DAT_0103594c);
        iVar4 = func_0x00be77b0(param_3,param_4 + 2,*(undefined4 *)(piVar5[1] + 4),sVar7);
        if (iVar4 == 0) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = func_0x00bd1830(param_2);
    } while (iVar6 < iVar4);
  }
  return 1;
}



void FUN_00be59d0(byte *param_1,uint *param_2,int param_3,int param_4,int param_5,char *param_6,
                 int param_7,undefined4 param_8,undefined4 param_9,byte *param_10,
                 undefined4 param_11)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  undefined2 uVar12;
  char *pcVar13;
  int iVar14;
  uint *puVar15;
  byte *pbVar16;
  bool bVar17;
  uint in_stack_00000050;
  undefined4 in_stack_00000060;
  undefined4 uVar18;
  
  func_0x00e87f70();
  uVar18 = in_stack_00000060;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_11 = in_stack_00000060;
  iVar5 = func_0x00bd1760(FUN_00be61f0);
  param_3 = iVar5;
  if (iVar5 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_addr.c",0x3b4,"v2i_IPAddrBlocks");
    func_0x00bc5160(0x22,0x8000f,0);
    FUN_008ab370();
    return;
  }
  iVar14 = 0;
  param_7 = 0;
  iVar6 = func_0x00bd1830(uVar18);
  if (0 < iVar6) {
    do {
      iVar5 = func_0x00bd1a80(uVar18,iVar14);
      puVar15 = (uint *)0x0;
      param_2 = (uint *)0x0;
      iVar6 = func_0x00be3d90(*(undefined4 *)(iVar5 + 4),&DAT_01059784);
      if (iVar6 == 0) {
LAB_00be5ab4:
        iVar6 = 1;
        param_6 = "0123456789.";
        param_4 = 4;
      }
      else {
        iVar6 = func_0x00be3d90(*(undefined4 *)(iVar5 + 4),&DAT_0105978c);
        if (iVar6 != 0) {
          iVar6 = func_0x00be3d90(*(undefined4 *)(iVar5 + 4),"IPv4-SAFI");
          if (iVar6 == 0) {
            puVar15 = &param_8;
            param_2 = puVar15;
            goto LAB_00be5ab4;
          }
          iVar6 = func_0x00be3d90(*(undefined4 *)(iVar5 + 4),"IPv6-SAFI");
          if (iVar6 != 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_addr.c",0x3ca,"v2i_IPAddrBlocks");
            func_0x00bc5160(0x22,0x73,&DAT_0112e274,*(undefined4 *)(iVar5 + 4));
            pbVar8 = (byte *)0x0;
            goto LAB_00be61a3;
          }
          puVar15 = &param_8;
          param_2 = puVar15;
        }
        iVar6 = 2;
        param_6 = "0123456789.:abcdefABCDEF";
        param_4 = 0x10;
      }
      if (puVar15 == (uint *)0x0) {
        pbVar8 = (byte *)func_0x00bbbc70(*(undefined4 *)(iVar5 + 8),"crypto\\x509\\v3_addr.c",0x3ed)
        ;
        puVar15 = (uint *)0x0;
      }
      else {
        if (*(int *)(iVar5 + 8) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_addr.c",0x3e0,"v2i_IPAddrBlocks");
          func_0x00bc5160(0x22,0x7c,0);
          pbVar8 = (byte *)0x0;
          goto LAB_00be61a3;
        }
        uVar7 = func_0x00e87983(*(int *)(iVar5 + 8),&param_1,0);
        *param_2 = uVar7;
        iVar14 = func_0x00e87a90(param_1,&DAT_01059438);
        param_1 = param_1 + iVar14;
        if ((0xff < uVar7) || (bVar1 = *param_1, param_1 = param_1 + 1, bVar1 != 0x3a)) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_addr.c",0x3e6,"v2i_IPAddrBlocks");
          func_0x00bc5160(0x22,0xa4,0);
          func_0x00ba6530(4,"name=",*(undefined4 *)(iVar5 + 4),", value=",*(undefined4 *)(iVar5 + 8)
                         );
          pbVar8 = (byte *)0x0;
          goto LAB_00be61a3;
        }
        iVar14 = func_0x00e87a90(param_1,&DAT_01059438);
        param_1 = param_1 + iVar14;
        pbVar8 = (byte *)func_0x00bbbc70(param_1,"crypto\\x509\\v3_addr.c",0x3eb);
        puVar15 = param_2;
      }
      param_10 = pbVar8;
      if (pbVar8 == (byte *)0x0) goto LAB_00be61a3;
      pcVar13 = "inherit";
      pbVar9 = pbVar8;
      do {
        bVar1 = *pbVar9;
        bVar17 = bVar1 < (byte)*pcVar13;
        if (bVar1 != *pcVar13) {
LAB_00be5be0:
          uVar7 = -(uint)bVar17 | 1;
          goto LAB_00be5be5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar17 = bVar1 < ((byte *)pcVar13)[1];
        if (bVar1 != ((byte *)pcVar13)[1]) goto LAB_00be5be0;
        pbVar9 = pbVar9 + 2;
        pcVar13 = (char *)((byte *)pcVar13 + 2);
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_00be5be5:
      if (uVar7 != 0) {
        iVar14 = func_0x00e87a90(pbVar8,param_6);
        iVar10 = func_0x00e87a90(pbVar8 + iVar14,&DAT_01059438);
        bVar1 = pbVar8[iVar14 + iVar10];
        param_5 = iVar14 + iVar10 + 1;
        pbVar8[iVar14] = 0;
        iVar14 = func_0x00be3b20(&stack0x00000030,pbVar8);
        if (iVar14 == param_4) {
          if (bVar1 == 0) {
            iVar5 = func_0x00be69a0(param_3,iVar6,param_2,&stack0x00000030,param_4 * 8);
            if (iVar5 != 0) {
LAB_00be5f24:
              uVar18 = 0x43f;
              goto LAB_00be5f2f;
            }
            FUN_00bc4f50();
            uVar18 = 0x435;
LAB_00be5d66:
            func_0x00bc5050("crypto\\x509\\v3_addr.c",uVar18,"v2i_IPAddrBlocks");
            func_0x00bc5160(0x22,0x80022,0);
            goto LAB_00be61a3;
          }
          if (bVar1 == 0x2d) {
            iVar14 = func_0x00e87a90(pbVar8 + param_5,&DAT_01059438);
            iVar14 = iVar14 + param_5;
            iVar10 = func_0x00e87a90(pbVar8 + iVar14,param_6);
            if ((iVar14 != iVar10 + iVar14) && (pbVar8[iVar10 + iVar14] == 0)) {
              iVar14 = func_0x00be3b20(&stack0x00000040,pbVar8 + iVar14);
              if (iVar14 != param_4) {
                FUN_00bc4f50();
                uVar18 = 0x425;
                goto LAB_00be6116;
              }
              if (iVar6 == 1) {
                uVar7 = 4;
              }
              else if (iVar6 == 2) {
                uVar7 = 0x10;
              }
              else {
                uVar7 = 0;
              }
              pbVar9 = &stack0x00000030;
              pbVar16 = &stack0x00000040;
              while (uVar4 = uVar7 - 4, 3 < uVar7) {
                if (*(int *)pbVar9 != *(int *)pbVar16) goto LAB_00be5e1d;
                pbVar9 = pbVar9 + 4;
                pbVar16 = pbVar16 + 4;
                uVar7 = uVar4;
              }
              iVar14 = 0;
              if (uVar4 != 0xfffffffc) {
LAB_00be5e1d:
                iVar14 = (uint)*pbVar9 - (uint)*pbVar16;
                if (((((iVar14 == 0) && (uVar4 != 0xfffffffd)) &&
                     (iVar14 = (uint)pbVar9[1] - (uint)pbVar16[1], iVar14 == 0)) &&
                    ((uVar4 != 0xfffffffe &&
                     (iVar14 = (uint)pbVar9[2] - (uint)pbVar16[2], iVar14 == 0)))) &&
                   (uVar4 != 0xffffffff)) {
                  iVar14 = (uint)pbVar9[3] - (uint)pbVar16[3];
                }
              }
              if (iVar14 < 1) {
                iVar5 = func_0x00be8050(param_3,iVar6,param_2);
                if (iVar6 == 1) {
                  uVar18 = 4;
                }
                else if (iVar6 == 2) {
                  uVar18 = 0x10;
                }
                else {
                  uVar18 = 0;
                }
                if ((iVar5 != 0) &&
                   (iVar6 = func_0x00be7e30(&param_9,&stack0x00000030,&stack0x00000040,uVar18),
                   uVar18 = param_9, iVar6 != 0)) {
                  iVar5 = func_0x00bd18c0(iVar5,param_9);
                  if (iVar5 != 0) goto LAB_00be5f24;
                  func_0x00c08cb0(uVar18,&DAT_010594e0);
                }
                FUN_00bc4f50();
                func_0x00bc5050("crypto\\x509\\v3_addr.c",0x42f,"v2i_IPAddrBlocks");
                func_0x00bc5160(0x22,0x80022,0);
              }
              else {
                FUN_00bc4f50();
                func_0x00bc5050("crypto\\x509\\v3_addr.c",0x42a,"v2i_IPAddrBlocks");
                func_0x00bc5160(0x22,0x74,0);
                func_0x00ba6530(4,"name=",*(undefined4 *)(iVar5 + 4),", value=",
                                *(undefined4 *)(iVar5 + 8));
              }
              goto LAB_00be61a3;
            }
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_addr.c",0x420,"v2i_IPAddrBlocks");
            uVar18 = 0x74;
          }
          else if (bVar1 == 0x2f) {
            pbVar9 = pbVar8 + param_5;
            iVar14 = func_0x00e87983(pbVar9,&param_1,10);
            if ((((param_1 != pbVar9) && (*param_1 == 0)) && (iVar14 <= param_4 * 8)) &&
               (-1 < iVar14)) {
              iVar5 = func_0x00be69a0(param_3,iVar6,param_2,&stack0x00000030,iVar14);
              if (iVar5 != 0) goto LAB_00be5f24;
              FUN_00bc4f50();
              uVar18 = 0x418;
              goto LAB_00be5d66;
            }
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_addr.c",0x413,"v2i_IPAddrBlocks");
            uVar18 = 0x74;
          }
          else {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_addr.c",0x43a,"v2i_IPAddrBlocks");
            uVar18 = 0x74;
          }
        }
        else {
          FUN_00bc4f50();
          uVar18 = 0x407;
LAB_00be6116:
          func_0x00bc5050("crypto\\x509\\v3_addr.c",uVar18,"v2i_IPAddrBlocks");
          uVar18 = 0xa6;
        }
LAB_00be5c35:
        func_0x00bc5160(0x22,uVar18,0);
        func_0x00ba6530(4,"name=",*(undefined4 *)(iVar5 + 4),", value=",*(undefined4 *)(iVar5 + 8));
        goto LAB_00be61a3;
      }
      iVar6 = func_0x00be7c10(param_3,iVar6,puVar15);
      if ((iVar6 == 0) || (piVar2 = *(int **)(iVar6 + 4), piVar2 == (int *)0x0)) {
LAB_00be5c15:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_addr.c",0x3f8,"v2i_IPAddrBlocks");
        uVar18 = 0xa5;
        goto LAB_00be5c35;
      }
      if (*piVar2 == 1) {
        if (piVar2[1] != 0) goto LAB_00be5c15;
LAB_00be5c64:
        if (piVar2[1] == 0) {
          iVar14 = FUN_00bfc950();
          *(int *)(*(int *)(iVar6 + 4) + 4) = iVar14;
          if (iVar14 == 0) goto LAB_00be5c15;
        }
        **(undefined4 **)(iVar6 + 4) = 0;
      }
      else if ((*piVar2 != 0) || (piVar2[1] == 0)) goto LAB_00be5c64;
      uVar18 = 0x3fc;
LAB_00be5f2f:
      FUN_00bbc580(param_10,"crypto\\x509\\v3_addr.c",uVar18);
      uVar18 = param_11;
      iVar14 = param_7 + 1;
      param_7 = iVar14;
      iVar6 = func_0x00bd1830(param_11);
      iVar5 = param_3;
    } while (iVar14 < iVar6);
  }
  pbVar8 = (byte *)0x0;
  iVar14 = 0;
  iVar6 = func_0x00bd1830(iVar5);
  if (0 < iVar6) {
    do {
      piVar11 = (int *)func_0x00bd1a80(iVar5,iVar14);
      piVar2 = (int *)*piVar11;
      if ((*piVar2 < 2) || (3 < *piVar2)) goto LAB_00be61a3;
      if (*(int *)piVar11[1] == 1) {
        if ((piVar2 == (int *)0x0) ||
           (puVar3 = (undefined1 *)piVar2[2], puVar3 == (undefined1 *)0x0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = CONCAT11(*puVar3,puVar3[1]);
        }
        iVar6 = func_0x00be64c0(((int *)piVar11[1])[1],uVar12);
        if (iVar6 == 0) goto LAB_00be61a3;
      }
      iVar14 = iVar14 + 1;
      iVar6 = func_0x00bd1830(iVar5);
    } while (iVar14 < iVar6);
  }
  func_0x00bd19c0(iVar5,FUN_00be61f0);
  func_0x00bd1a20(iVar5);
  iVar5 = func_0x00be6a30(iVar5);
  if (iVar5 != 0) {
    FUN_008ab370();
    return;
  }
LAB_00be61a3:
  FUN_00bbc580(pbVar8,"crypto\\x509\\v3_addr.c",1099);
  func_0x00bd1860(param_3,FUN_00be6290);
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00be627b)

uint FUN_00be61f0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = **(uint **)*param_1;
  pbVar3 = (byte *)(*(uint **)*param_1)[2];
  uVar1 = **(uint **)*param_2;
  pbVar4 = (byte *)(*(uint **)*param_2)[2];
  uVar5 = uVar6;
  if ((int)uVar1 < (int)uVar6) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar3 != *(int *)pbVar4) goto LAB_00be6236;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 != 0xfffffffc) {
LAB_00be6236:
    bVar7 = *pbVar3 < *pbVar4;
    if ((*pbVar3 != *pbVar4) ||
       ((uVar2 != 0xfffffffd &&
        ((bVar7 = pbVar3[1] < pbVar4[1], pbVar3[1] != pbVar4[1] ||
         ((uVar2 != 0xfffffffe &&
          ((bVar7 = pbVar3[2] < pbVar4[2], pbVar3[2] != pbVar4[2] ||
           ((uVar2 != 0xffffffff && (bVar7 = pbVar3[3] < pbVar4[3], pbVar3[3] != pbVar4[3]))))))))))
       )) {
      uVar6 = uVar6 - uVar1;
      if ((-(uint)bVar7 | 1) != 0) {
        uVar6 = -(uint)bVar7 | 1;
      }
      return uVar6;
    }
  }
  return uVar6 - uVar1;
}



void FUN_00be6290(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_01059568);
  return;
}



void FUN_00be8250(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00be62b0(*param_1,*param_2,4);
  return;
}



void FUN_00be8270(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00be62b0(*param_1,*param_2,0x10);
  return;
}



undefined4 FUN_00be8290(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 == *(int *)(param_3 + 0xc)) {
    uVar1 = func_0x00be83b0(param_1);
    *(int *)(param_1 + 0xc) = iVar2;
    return uVar1;
  }
  iVar2 = func_0x00bba970(param_2,param_3);
  if (0 < iVar2) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = func_0x00be8460(param_1,param_2,param_3);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    return uVar3;
  }
  if (iVar2 < 0) {
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    uVar3 = func_0x00be8460(param_1,param_3,param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    return uVar3;
  }
  func_0x00bbaaf0(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}



undefined4 FUN_00be8320(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != *(int *)(param_3 + 0xc)) {
    uVar1 = func_0x00be83b0(param_1);
    *(int *)(param_1 + 0xc) = iVar2;
    return uVar1;
  }
  iVar2 = func_0x00bba970(param_2,param_3);
  if (0 < iVar2) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = func_0x00be8460(param_1,param_2,param_3);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    return uVar3;
  }
  if (iVar2 < 0) {
    iVar2 = *(int *)(param_3 + 0xc);
    uVar1 = func_0x00be8460(param_1,param_3,param_2);
    *(uint *)(param_1 + 0xc) = (uint)(iVar2 == 0);
    return uVar1;
  }
  func_0x00bbaaf0(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}



undefined4
FUN_00bea980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar4 = 0;
  iVar5 = 0;
  param_1 = 0xffffffff;
  iVar1 = func_0x00bba610(*(undefined4 *)(param_6 + 0x14));
  if (0x4000 < iVar1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x6c,"rsa_ossl_public_encrypt");
    func_0x00bc5160(4,0x69,0);
    return 0xffffffff;
  }
  iVar1 = func_0x00bba970(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 0x18));
  if (iVar1 < 1) {
    FUN_00bc4f50();
    uVar6 = 0x71;
LAB_00bea9fa:
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",uVar6,"rsa_ossl_public_encrypt");
    func_0x00bc5160(4,0x65,0);
    return 0xffffffff;
  }
  iVar1 = func_0x00bba610(*(undefined4 *)(param_6 + 0x14));
  if (0xc00 < iVar1) {
    iVar1 = func_0x00bba610(*(undefined4 *)(param_6 + 0x18));
    if (0x40 < iVar1) {
      FUN_00bc4f50();
      uVar6 = 0x78;
      goto LAB_00bea9fa;
    }
  }
  iVar1 = func_0x00bb5940(*(undefined4 *)(param_6 + 4));
  if (iVar1 != 0) {
    func_0x00bb59e0(iVar1);
    uVar6 = func_0x00bb57f0(iVar1);
    iVar2 = func_0x00bb57f0(iVar1);
    iVar4 = func_0x00bba610(*(undefined4 *)(param_6 + 0x14));
    iVar5 = (int)((iVar4 + 7 >> 0x1f & 7U) + iVar4 + 7) >> 3;
    iVar4 = FUN_00bbc4f0(iVar5,"crypto\\rsa\\rsa_ossl.c",0x83);
    if ((iVar2 != 0) && (iVar4 != 0)) {
      if (param_7 == 1) {
        iVar3 = func_0x00c2d2c0(*(undefined4 *)(param_6 + 4),iVar4,iVar5,param_4,param_3);
      }
      else if (param_7 == 3) {
        iVar3 = func_0x00c2ea20(iVar4,iVar5,param_4,param_3);
      }
      else {
        if (param_7 != 4) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x95,"rsa_ossl_public_encrypt");
          func_0x00bc5160(4,0x76,0);
          goto LAB_00beabf1;
        }
        iVar3 = func_0x00c2e540(*(undefined4 *)(param_6 + 4),iVar4,iVar5,param_4,param_3,0,0,0,0);
      }
      if (0 < iVar3) {
        iVar3 = func_0x00bb9f50(iVar4,iVar5,uVar6);
        if (iVar3 != 0) {
          iVar3 = func_0x00bba970(uVar6,*(undefined4 *)(param_6 + 0x14));
          if (iVar3 < 0) {
            if ((*(byte *)(param_6 + 0x5c) & 2) != 0) {
              iVar3 = func_0x00bf9c10(param_6 + 0x60,*(undefined4 *)(param_6 + 0x74),
                                      *(undefined4 *)(param_6 + 0x14),iVar1);
              if (iVar3 == 0) goto LAB_00beabf1;
            }
            iVar3 = (**(code **)(*(int *)(param_6 + 0xc) + 0x18))
                              (iVar2,uVar6,*(undefined4 *)(param_6 + 0x18),
                               *(undefined4 *)(param_6 + 0x14),iVar1,*(undefined4 *)(param_6 + 0x60)
                              );
            if (iVar3 != 0) {
              param_1 = func_0x00bb9f90(iVar2,param_5,iVar5);
            }
          }
          else {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0xb8,"rsa_ossl_public_encrypt");
            func_0x00bc5160(4,0x84,0);
          }
        }
      }
    }
  }
LAB_00beabf1:
  func_0x00bb56f0(iVar1);
  func_0x00bb5760(iVar1);
  FUN_00bbc6c0(iVar4,iVar5,"crypto\\rsa\\rsa_ossl.c",0xce);
  return param_1;
}



undefined4
FUN_00beac30(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            ,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  iVar5 = param_10;
  param_10 = 0;
  param_5 = 0xffffffff;
  param_2 = 0;
  param_3 = 0;
  param_1 = 0;
  iVar6 = 0;
  iVar1 = func_0x00bb5940(*(undefined4 *)(iVar5 + 4));
  if (iVar1 == 0) goto LAB_00beaffc;
  func_0x00bb59e0(iVar1);
  iVar2 = func_0x00bb57f0(iVar1);
  param_4 = iVar2;
  iVar3 = func_0x00bb57f0(iVar1);
  iVar4 = func_0x00bba610(*(undefined4 *)(iVar5 + 0x14));
  param_10 = (int)(iVar4 + 7 + (iVar4 + 7 >> 0x1f & 7U)) >> 3;
  param_2 = FUN_00bbc4f0(param_10,"crypto\\rsa\\rsa_ossl.c",0x146);
  if ((iVar3 == 0) || (param_2 == 0)) goto LAB_00beaffc;
  if (param_11 == 1) {
    iVar4 = func_0x00c2cdb0(param_2,param_10,param_8,param_7);
  }
  else if (param_11 == 3) {
    iVar4 = func_0x00c2ea20(param_2,param_10,param_8,param_7);
  }
  else {
    if (param_11 != 5) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x155,"rsa_ossl_private_encrypt");
      func_0x00bc5160(4,0x76,0);
      goto LAB_00beaffc;
    }
    iVar4 = func_0x00c2eaf0(param_2,param_10,param_8,param_7);
  }
  if ((iVar4 < 1) || (iVar4 = func_0x00bb9f50(param_2,param_10,iVar2), iVar4 == 0))
  goto LAB_00beaffc;
  iVar4 = func_0x00bba970(iVar2,*(undefined4 *)(iVar5 + 0x14));
  if (-1 < iVar4) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x160,"rsa_ossl_private_encrypt");
    func_0x00bc5160(4,0x84,0);
    goto LAB_00beaffc;
  }
  if (((*(byte *)(iVar5 + 0x5c) & 2) != 0) &&
     (iVar4 = func_0x00bf9c10(iVar5 + 0x60,*(undefined4 *)(iVar5 + 0x74),
                              *(undefined4 *)(iVar5 + 0x14),iVar1), iVar4 == 0)) goto LAB_00beaffc;
  if ((*(byte *)(iVar5 + 0x5c) & 0x80) == 0) {
    iVar6 = func_0x00bec4e0(iVar5,&param_3,iVar1);
    if (iVar6 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x16c,"rsa_ossl_private_encrypt");
      func_0x00bc5160(4,0xc0103,0);
      goto LAB_00beaffc;
    }
    if (param_3 != 0) {
      iVar4 = func_0x00bea280(iVar2,0,iVar6,iVar1);
LAB_00beae9e:
      if (iVar4 == 0) goto LAB_00beaffc;
      goto LAB_00beaea6;
    }
    param_1 = func_0x00bb57f0();
    if (param_1 != 0) {
      iVar4 = func_0x00bea850(iVar6);
      if (iVar4 == 0) goto LAB_00beaffc;
      param_3 = func_0x00bea280(iVar2,param_1,iVar6,iVar1);
      func_0x00bea870(iVar6);
      iVar4 = param_3;
      goto LAB_00beae9e;
    }
    FUN_00bc4f50();
    uVar7 = 0x173;
LAB_00beaef6:
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",uVar7,"rsa_ossl_private_encrypt");
    func_0x00bc5160(4,0x80003,0);
  }
  else {
LAB_00beaea6:
    if ((((*(byte *)(iVar5 + 0x5c) & 0x20) == 0) && (*(int *)(iVar5 + 8) != 1)) &&
       (((*(int *)(iVar5 + 0x20) == 0 ||
         (((*(int *)(iVar5 + 0x24) == 0 || (*(int *)(iVar5 + 0x28) == 0)) ||
          (*(int *)(iVar5 + 0x2c) == 0)))) || (*(int *)(iVar5 + 0x30) == 0)))) {
      iVar2 = func_0x00bba5e0();
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar7 = 0x184;
        goto LAB_00beaef6;
      }
      if (*(int *)(iVar5 + 0x1c) == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x188,"rsa_ossl_private_encrypt");
        func_0x00bc5160(4,0xb3,0);
        FUN_00bba400(iVar2);
        goto LAB_00beaffc;
      }
      func_0x00bbaab0(iVar2,*(int *)(iVar5 + 0x1c),4);
      iVar4 = (**(code **)(*(int *)(iVar5 + 0xc) + 0x18))
                        (iVar3,param_4,iVar2,*(undefined4 *)(iVar5 + 0x14),iVar1,
                         *(undefined4 *)(iVar5 + 0x60));
      if (iVar4 == 0) {
        FUN_00bba400(iVar2);
        goto LAB_00beaffc;
      }
      FUN_00bba400(iVar2);
      iVar2 = param_4;
    }
    else {
      iVar4 = (**(code **)(*(int *)(iVar5 + 0xc) + 0x14))(iVar3,iVar2,iVar5,iVar1);
      if (iVar4 == 0) goto LAB_00beaffc;
    }
    if ((iVar6 == 0) || (iVar6 = func_0x00bec4b0(iVar6,iVar3,param_1,iVar1), iVar6 != 0)) {
      if (param_11 == 5) {
        iVar5 = FUN_00be8320(iVar2,*(undefined4 *)(iVar5 + 0x14),iVar3);
        if (iVar5 == 0) goto LAB_00beaffc;
        iVar5 = func_0x00bba0f0(iVar3,iVar2);
        if (0 < iVar5) {
          iVar3 = iVar2;
        }
      }
      param_5 = func_0x00bb9f90(iVar3,param_9,param_10);
    }
  }
LAB_00beaffc:
  func_0x00bb56f0(iVar1);
  func_0x00bb5760(iVar1);
  FUN_00bbc6c0(param_2,param_10,"crypto\\rsa\\rsa_ossl.c",0x1ae);
  return param_5;
}



size_t FUN_00beb030(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                   void *param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *_Src;
  size_t _Size;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar5 = 0;
  iVar1 = func_0x00bba610(*(undefined4 *)(param_6 + 0x14));
  if (0x4000 < iVar1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x2cb,"rsa_ossl_public_decrypt");
    func_0x00bc5160(4,0x69,0);
    return 0xffffffff;
  }
  iVar1 = func_0x00bba970(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 0x18));
  if (iVar1 < 1) {
    FUN_00bc4f50();
    uVar6 = 0x2d0;
LAB_00beb0a4:
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",uVar6,"rsa_ossl_public_decrypt");
    func_0x00bc5160(4,0x65,0);
    return 0xffffffff;
  }
  iVar1 = func_0x00bba610(*(undefined4 *)(param_6 + 0x14));
  if ((0xc00 < iVar1) && (iVar1 = func_0x00bba610(*(undefined4 *)(param_6 + 0x18)), 0x40 < iVar1)) {
    FUN_00bc4f50();
    uVar6 = 0x2d7;
    goto LAB_00beb0a4;
  }
  iVar1 = func_0x00bb5940(*(undefined4 *)(param_6 + 4));
  if (iVar1 == 0) {
LAB_00beb157:
    _Src = (void *)0x0;
  }
  else {
    func_0x00bb59e0(iVar1);
    uVar6 = func_0x00bb57f0(iVar1);
    iVar2 = func_0x00bb57f0(iVar1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x2e2,"rsa_ossl_public_decrypt");
      func_0x00bc5160(4,0x80003,0);
      goto LAB_00beb157;
    }
    iVar5 = func_0x00bba610(*(undefined4 *)(param_6 + 0x14));
    iVar5 = (int)((iVar5 + 7 >> 0x1f & 7U) + iVar5 + 7) >> 3;
    _Src = (void *)FUN_00bbc4f0(iVar5,"crypto\\rsa\\rsa_ossl.c",0x2e6);
    if (_Src == (void *)0x0) {
LAB_00beb1c0:
      _Size = 0xffffffff;
      goto LAB_00beb348;
    }
    if (iVar5 < param_3) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x2ef,"rsa_ossl_public_decrypt");
      uVar6 = 0x6c;
LAB_00beb1b6:
      func_0x00bc5160(4,uVar6,0);
      goto LAB_00beb1c0;
    }
    iVar3 = func_0x00bb9f50(param_4,param_3,uVar6);
    if (iVar3 == 0) goto LAB_00beb1c0;
    iVar3 = func_0x00bba970(uVar6,*(undefined4 *)(param_6 + 0x14));
    if (-1 < iVar3) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x2f7,"rsa_ossl_public_decrypt");
      uVar6 = 0x84;
      goto LAB_00beb1b6;
    }
    if (((((*(byte *)(param_6 + 0x5c) & 2) != 0) &&
         (iVar3 = func_0x00bf9c10(param_6 + 0x60,*(undefined4 *)(param_6 + 0x74),
                                  *(undefined4 *)(param_6 + 0x14),iVar1), iVar3 == 0)) ||
        (iVar3 = (**(code **)(*(int *)(param_6 + 0xc) + 0x18))
                           (iVar2,uVar6,*(undefined4 *)(param_6 + 0x18),
                            *(undefined4 *)(param_6 + 0x14),iVar1,*(undefined4 *)(param_6 + 0x60)),
        iVar3 == 0)) ||
       (((param_7 == 5 && (puVar4 = (undefined4 *)FUN_00bbba70(iVar2), ((byte)*puVar4 & 0xf) != 0xc)
         ) && (iVar3 = FUN_00be8320(iVar2,*(undefined4 *)(param_6 + 0x14),iVar2), iVar3 == 0))))
    goto LAB_00beb1c0;
    _Size = func_0x00bb9f90(iVar2,_Src,iVar5);
    if (-1 < (int)_Size) {
      if (param_7 == 1) {
        _Size = func_0x00c2ce30(param_5,iVar5,_Src,_Size,iVar5);
      }
      else {
        if (param_7 == 3) {
          memcpy(param_5,_Src,_Size);
          goto LAB_00beb348;
        }
        if (param_7 != 5) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x318,"rsa_ossl_public_decrypt");
          func_0x00bc5160(4,0x76,0);
          _Size = 0xffffffff;
          goto LAB_00beb348;
        }
        _Size = func_0x00c2eb80(param_5,iVar5,_Src,_Size,iVar5);
      }
      if ((int)_Size < 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x31c,"rsa_ossl_public_decrypt");
        func_0x00bc5160(4,0x72,0);
      }
      goto LAB_00beb348;
    }
  }
  _Size = 0xffffffff;
LAB_00beb348:
  func_0x00bb56f0(iVar1);
  func_0x00bb5760(iVar1);
  FUN_00bbc6c0(_Src,iVar5,"crypto\\rsa\\rsa_ossl.c",0x321);
  return _Size;
}



void FUN_00beb380(void)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t _Size;
  int iVar7;
  void *_Src;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  uint in_stack_00000048;
  int in_stack_00000050;
  undefined4 in_stack_00000054;
  void *in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar1 = in_stack_0000005c;
  _Dst = in_stack_00000058;
  in_stack_00000048 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar7 = 0;
  in_stack_00000024 = in_stack_00000050;
  _Src = (void *)0x0;
  in_stack_00000020 = in_stack_00000054;
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
  in_stack_00000034 = 0;
  in_stack_00000010 = 0;
  in_stack_00000038 = 0;
  in_stack_0000003c = 0;
  in_stack_00000040 = 0;
  in_stack_00000044 = 0;
  in_stack_00000014 = 0;
  in_stack_0000001c = 0;
  in_stack_00000018 = in_stack_00000060;
  if (((*(byte *)(in_stack_0000005c + 0x5c) & 0x20) != 0) && (in_stack_00000060 == 1)) {
    in_stack_00000018 = 8;
  }
  iVar2 = func_0x00bb5940(*(undefined4 *)(in_stack_0000005c + 4));
  if (iVar2 == 0) goto LAB_00beb894;
  func_0x00bb59e0(iVar2);
  uVar3 = func_0x00bb57f0(iVar2);
  iVar4 = func_0x00bb57f0(iVar2);
  if (iVar4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x224,"rsa_ossl_private_decrypt");
    func_0x00bc5160(4,0x80003,0);
    goto LAB_00beb894;
  }
  iVar7 = func_0x00bba610(*(undefined4 *)(iVar1 + 0x14));
  iVar7 = (int)((iVar7 + 7 >> 0x1f & 7U) + iVar7 + 7) >> 3;
  _Src = (void *)FUN_00bbc4f0(iVar7,"crypto\\rsa\\rsa_ossl.c",0x228);
  if (_Src == (void *)0x0) goto LAB_00beb894;
  if (iVar7 < in_stack_00000024) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x231,"rsa_ossl_private_decrypt");
    func_0x00bc5160(4,0x6c,0);
    goto LAB_00beb894;
  }
  if (in_stack_00000024 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x236,"rsa_ossl_private_decrypt");
    func_0x00bc5160(4,0x6f,0);
    goto LAB_00beb894;
  }
  iVar5 = func_0x00bb9f50(in_stack_00000020,in_stack_00000024,uVar3);
  if (iVar5 == 0) goto LAB_00beb894;
  iVar5 = func_0x00bba970(uVar3,*(undefined4 *)(iVar1 + 0x14));
  if (-1 < iVar5) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",599,"rsa_ossl_private_decrypt");
    func_0x00bc5160(4,0x84,0);
    goto LAB_00beb894;
  }
  if (((*(byte *)(iVar1 + 0x5c) & 2) != 0) &&
     (iVar5 = func_0x00bf9c10(iVar1 + 0x60,*(undefined4 *)(iVar1 + 0x74),
                              *(undefined4 *)(iVar1 + 0x14),iVar2), iVar5 == 0)) goto LAB_00beb894;
  if ((*(byte *)(iVar1 + 0x5c) & 0x80) == 0) {
    iVar5 = func_0x00bec4e0(iVar1,&stack0x00000010,iVar2);
    in_stack_0000001c = iVar5;
    if (iVar5 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x263,"rsa_ossl_private_decrypt");
      func_0x00bc5160(4,0xc0103,0);
      goto LAB_00beb894;
    }
    if (in_stack_00000010 != 0) {
      iVar5 = func_0x00bea280(uVar3,0,iVar5,iVar2);
LAB_00beb653:
      if (iVar5 == 0) goto LAB_00beb894;
      goto LAB_00beb65b;
    }
    in_stack_00000014 = func_0x00bb57f0();
    if (in_stack_00000014 != 0) {
      iVar6 = func_0x00bea850(iVar5);
      if (iVar6 == 0) goto LAB_00beb894;
      in_stack_00000010 = func_0x00bea280(uVar3,in_stack_00000014,iVar5,iVar2);
      func_0x00bea870(iVar5);
      iVar5 = in_stack_00000010;
      goto LAB_00beb653;
    }
    FUN_00bc4f50();
    uVar3 = 0x26a;
LAB_00beb5e7:
    func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",uVar3,"rsa_ossl_private_decrypt");
    func_0x00bc5160(4,0x80003,0);
  }
  else {
LAB_00beb65b:
    if ((((*(byte *)(iVar1 + 0x5c) & 0x20) == 0) && (*(int *)(iVar1 + 8) != 1)) &&
       (((*(int *)(iVar1 + 0x20) == 0 ||
         (((*(int *)(iVar1 + 0x24) == 0 || (*(int *)(iVar1 + 0x28) == 0)) ||
          (*(int *)(iVar1 + 0x2c) == 0)))) || (*(int *)(iVar1 + 0x30) == 0)))) {
      iVar5 = func_0x00bba5e0();
      if (iVar5 == 0) {
        FUN_00bc4f50();
        uVar3 = 0x27c;
        goto LAB_00beb5e7;
      }
      if (*(int *)(iVar1 + 0x1c) == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x280,"rsa_ossl_private_decrypt");
        func_0x00bc5160(4,0xb3,0);
        FUN_00bba400(iVar5);
        goto LAB_00beb894;
      }
      func_0x00bbaab0(iVar5,*(int *)(iVar1 + 0x1c),4);
      iVar6 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x18))
                        (iVar4,uVar3,iVar5,*(undefined4 *)(iVar1 + 0x14),iVar2,
                         *(undefined4 *)(iVar1 + 0x60));
      if (iVar6 == 0) {
        FUN_00bba400(iVar5);
        goto LAB_00beb894;
      }
      FUN_00bba400(iVar5);
    }
    else {
      iVar5 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x14))(iVar4,uVar3,iVar1,iVar2);
      if (iVar5 == 0) goto LAB_00beb894;
    }
    if ((((in_stack_0000001c == 0) ||
         (iVar5 = func_0x00bec4b0(in_stack_0000001c,iVar4,in_stack_00000014,iVar2), iVar5 != 0)) &&
        ((in_stack_00000018 != 1 ||
         (iVar5 = func_0x00bec1e0(in_stack_00000024,in_stack_00000020,iVar1,_Src,iVar7,
                                  &stack0x00000028), iVar5 != 0)))) &&
       (_Size = func_0x00bb9f90(iVar4,_Src,iVar7), -1 < (int)_Size)) {
      switch(in_stack_00000018) {
      case 1:
        _Size = func_0x00c2d3b0(*(undefined4 *)(iVar1 + 4),_Dst,iVar7,_Src,_Size,iVar7,
                                &stack0x00000028);
        break;
      default:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x2ad,"rsa_ossl_private_decrypt");
        func_0x00bc5160(4,0x76,0);
        goto LAB_00beb894;
      case 3:
        memcpy(_Dst,_Src,_Size);
        break;
      case 4:
        _Size = func_0x00c2de10(_Dst,iVar7,_Src,_Size,iVar7,0,0);
        break;
      case 8:
        _Size = func_0x00c2cfb0(_Dst,iVar7,_Src,_Size,iVar7);
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ossl.c",0x2b6,"rsa_ossl_private_decrypt");
      func_0x00bc5160(4,0x72,0);
      func_0x00ba6f50(0xffffffffU - ((int)_Size >> 0x1f) & 1);
    }
  }
LAB_00beb894:
  func_0x00bb56f0(iVar2);
  func_0x00bb5760(iVar2);
  FUN_00bbc6c0(_Src,iVar7,"crypto\\rsa\\rsa_ossl.c",0x2bd);
  FUN_008ab370();
  return;
}



void FUN_00beb8f0(void)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack0000000c;
  int iStack00000014;
  uint in_stack_0000003c;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  
  func_0x00e87f70();
  uVar5 = in_stack_00000050;
  iVar15 = in_stack_0000004c;
  uVar4 = in_stack_00000048;
  uVar3 = in_stack_00000044;
  in_stack_0000003c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  bVar2 = false;
  iStack00000014 = 0;
  func_0x00bb59e0(in_stack_00000050);
  uVar6 = func_0x00bb57f0(uVar5);
  uVar7 = func_0x00bb57f0(uVar5);
  uVar8 = func_0x00bb57f0(uVar5);
  iVar9 = func_0x00bb57f0(uVar5);
  if ((iVar9 == 0) ||
     ((*(int *)(iVar15 + 8) == 1 &&
      ((iStack00000014 = func_0x00bd1830(*(undefined4 *)(iVar15 + 0x4c)), iStack00000014 < 1 ||
       (3 < iStack00000014)))))) goto LAB_00bebbf4;
  if ((*(byte *)(iVar15 + 0x5c) & 4) != 0) {
    iVar10 = func_0x00bba5e0();
    if (iVar10 == 0) goto LAB_00bebbf4;
    func_0x00bbaab0(iVar10,*(undefined4 *)(iVar15 + 0x20),4);
    iVar11 = func_0x00bf9c10(iVar15 + 100,*(undefined4 *)(iVar15 + 0x74),iVar10,uVar5);
    if (iVar11 != 0) {
      func_0x00bbaab0(iVar10,*(undefined4 *)(iVar15 + 0x24),4);
      iVar11 = func_0x00bf9c10(iVar15 + 0x68,*(undefined4 *)(iVar15 + 0x74),iVar10,uVar5);
      if (iVar11 != 0) {
        iStack0000000c = 0;
        if (0 < iStack00000014) {
          do {
            puVar12 = (undefined4 *)func_0x00bd1a80(*(undefined4 *)(iVar15 + 0x4c),iStack0000000c);
            func_0x00bbaab0(iVar10,*puVar12,4);
            iVar11 = func_0x00bf9c10(puVar12 + 4,*(undefined4 *)(iVar15 + 0x74),iVar10,uVar5);
            if (iVar11 == 0) {
              FUN_00bba400(iVar10);
              goto LAB_00bebbf4;
            }
            iStack0000000c = iStack0000000c + 1;
          } while (iStack0000000c < iStack00000014);
        }
        FUN_00bba400(iVar10);
        if ((*(code **)(*(int *)(iVar15 + 0xc) + 0x18) == FUN_00c2b2a0) && (iStack00000014 == 0)) {
          uVar1 = *(undefined4 *)(iVar15 + 0x20);
          iVar10 = func_0x00bba610(*(undefined4 *)(iVar15 + 0x24));
          iVar11 = func_0x00bba610(uVar1);
          if (iVar10 == iVar11) {
            bVar2 = true;
            goto LAB_00bebaa9;
          }
        }
        bVar2 = false;
        goto LAB_00bebaa9;
      }
    }
    FUN_00bba400(iVar10);
    goto LAB_00bebbf4;
  }
LAB_00bebaa9:
  if (((*(byte *)(iVar15 + 0x5c) & 2) != 0) &&
     (iVar10 = func_0x00bf9c10(iVar15 + 0x60,*(undefined4 *)(iVar15 + 0x74),
                               *(undefined4 *)(iVar15 + 0x14),uVar5), iVar10 == 0))
  goto LAB_00bebbf4;
  if (bVar2) {
    iVar10 = func_0x00bf9d90(uVar8,uVar4,*(undefined4 *)(iVar15 + 0x68),uVar5);
    if (((((iVar10 == 0) ||
          (iVar10 = func_0x00bfa260(uVar8,uVar8,*(undefined4 *)(iVar15 + 0x68),uVar5), iVar10 == 0))
         || ((iVar10 = func_0x00bf9d90(uVar6,uVar4,*(undefined4 *)(iVar15 + 100),uVar5), iVar10 == 0
             || ((iVar10 = func_0x00bfa260(uVar6,uVar6,*(undefined4 *)(iVar15 + 100),uVar5),
                 iVar10 == 0 ||
                 (iVar10 = func_0x00c2bfa0(uVar8,uVar8,*(undefined4 *)(iVar15 + 0x2c),
                                           *(undefined4 *)(iVar15 + 0x24),
                                           *(undefined4 *)(iVar15 + 0x68),uVar6,uVar6,
                                           *(undefined4 *)(iVar15 + 0x28),
                                           *(undefined4 *)(iVar15 + 0x20),
                                           *(undefined4 *)(iVar15 + 100),uVar5), iVar10 == 0))))))
        || (iVar10 = func_0x00be96a0(uVar6,uVar6,uVar8,*(undefined4 *)(iVar15 + 0x20)), iVar10 == 0)
        ) || ((((iVar10 = func_0x00bfa260(uVar6,uVar6,*(undefined4 *)(iVar15 + 100),uVar5),
                iVar10 == 0 ||
                (iVar10 = func_0x00bfa150(uVar6,uVar6,*(undefined4 *)(iVar15 + 0x30),
                                          *(undefined4 *)(iVar15 + 100),uVar5), iVar10 == 0)) ||
               (iVar10 = func_0x00be8570(uVar3,uVar6,*(undefined4 *)(iVar15 + 0x24),uVar5),
               iVar10 == 0)) ||
              (iVar10 = func_0x00be9490(uVar3,uVar3,uVar8,*(undefined4 *)(iVar15 + 0x14)),
              iVar10 == 0)))) goto LAB_00bebbf4;
LAB_00bebff7:
    if ((*(int *)(iVar15 + 0x18) != 0) && (*(int *)(iVar15 + 0x14) != 0)) {
      if (*(code **)(*(int *)(iVar15 + 0xc) + 0x18) == FUN_00c2b2a0) {
        iVar10 = FUN_00c2b2a0(iVar9,uVar3,*(int *)(iVar15 + 0x18),*(int *)(iVar15 + 0x14),uVar5,
                              *(undefined4 *)(iVar15 + 0x60));
      }
      else {
        func_0x00bbaff0(uVar3);
        iVar10 = (**(code **)(*(int *)(iVar15 + 0xc) + 0x18))
                           (iVar9,uVar3,*(undefined4 *)(iVar15 + 0x18),
                            *(undefined4 *)(iVar15 + 0x14),uVar5,*(undefined4 *)(iVar15 + 0x60));
      }
      if ((iVar10 == 0) || (iVar10 = FUN_00be8320(iVar9,iVar9,uVar4), iVar10 == 0))
      goto LAB_00bebbf4;
      iVar10 = func_0x00bba540(iVar9);
      if (iVar10 == 0) {
        iVar10 = func_0x00bb77c0(0,iVar9,iVar9,*(undefined4 *)(iVar15 + 0x14),uVar5);
        if ((iVar10 == 0) ||
           ((iVar10 = func_0x00bba4c0(iVar9), iVar10 != 0 &&
            (iVar10 = FUN_00be8290(iVar9,iVar9,*(undefined4 *)(iVar15 + 0x14)), iVar10 == 0))))
        goto LAB_00bebbf4;
        iVar9 = func_0x00bba540(iVar9);
        if (iVar9 == 0) {
          iVar10 = func_0x00bba5e0();
          if (iVar10 == 0) goto LAB_00bebbf4;
          func_0x00bbaab0(iVar10,*(undefined4 *)(iVar15 + 0x1c),4);
          iVar15 = (**(code **)(*(int *)(iVar15 + 0xc) + 0x18))
                             (uVar3,uVar4,iVar10,*(undefined4 *)(iVar15 + 0x14),uVar5,
                              *(undefined4 *)(iVar15 + 0x60));
          if (iVar15 == 0) goto LAB_00bebc48;
          FUN_00bba400(iVar10);
        }
      }
    }
    func_0x00bbaff0(uVar3);
  }
  else {
    iVar10 = func_0x00bba5e0();
    if (iVar10 == 0) goto LAB_00bebbf4;
    func_0x00bbaab0(iVar10,uVar4,4);
    iVar11 = func_0x00bb77c0(0,uVar6,iVar10,*(undefined4 *)(iVar15 + 0x24),uVar5);
    if ((iVar11 != 0) && (iVar11 = func_0x00bba5e0(), iVar11 != 0)) {
      func_0x00bbaab0(iVar11,*(undefined4 *)(iVar15 + 0x2c),4);
      iVar13 = (**(code **)(*(int *)(iVar15 + 0xc) + 0x18))
                         (uVar8,uVar6,iVar11,*(undefined4 *)(iVar15 + 0x24),uVar5,
                          *(undefined4 *)(iVar15 + 0x68));
      if (iVar13 == 0) {
        FUN_00bba400(iVar10);
        FUN_00bba400(iVar11);
        goto LAB_00bebbf4;
      }
      FUN_00bba400(iVar11);
      iVar11 = func_0x00bb77c0(0,uVar6,iVar10,*(undefined4 *)(iVar15 + 0x20),uVar5);
      if (iVar11 != 0) {
        FUN_00bba400(iVar10);
        iVar10 = func_0x00bba5e0();
        if (iVar10 == 0) goto LAB_00bebbf4;
        func_0x00bbaab0(iVar10,*(undefined4 *)(iVar15 + 0x28),4);
        iVar11 = (**(code **)(*(int *)(iVar15 + 0xc) + 0x18))
                           (uVar3,uVar6,iVar10,*(undefined4 *)(iVar15 + 0x20),uVar5,
                            *(undefined4 *)(iVar15 + 100));
        if (iVar11 != 0) {
          FUN_00bba400(iVar10);
          if (0 < iStack00000014) {
            iVar10 = func_0x00bba5e0();
            iVar11 = func_0x00bba5e0();
            if ((iVar11 == 0) || (iVar10 == 0)) {
LAB_00bec036:
              FUN_00bba400(iVar11);
              FUN_00bba400(iVar10);
              goto LAB_00bebbf4;
            }
            iStack0000000c = 0;
            do {
              iVar13 = func_0x00bb57f0(uVar5);
              *(int *)(&stack0x00000030 + iStack0000000c * 4) = iVar13;
              if (iVar13 == 0) goto LAB_00bec036;
              puVar12 = (undefined4 *)func_0x00bd1a80(*(undefined4 *)(iVar15 + 0x4c),iStack0000000c)
              ;
              func_0x00bbaab0(iVar11,uVar4,4);
              func_0x00bbaab0(iVar10,puVar12[1],4);
              iVar14 = func_0x00bb77c0(0,uVar6,iVar11,*puVar12,uVar5);
              if ((iVar14 == 0) ||
                 (iVar13 = (**(code **)(*(int *)(iVar15 + 0xc) + 0x18))
                                     (iVar13,uVar6,iVar10,*puVar12,uVar5,puVar12[4]), iVar13 == 0))
              goto LAB_00bec036;
              iStack0000000c = iStack0000000c + 1;
            } while (iStack0000000c < iStack00000014);
            FUN_00bba400(iVar11);
            FUN_00bba400(iVar10);
          }
          iVar10 = FUN_00be8320(uVar3,uVar3,uVar8);
          if ((iVar10 == 0) ||
             ((((iVar10 = func_0x00bba4c0(uVar3), iVar10 != 0 &&
                (iVar10 = FUN_00be8290(uVar3,uVar3,*(undefined4 *)(iVar15 + 0x20)), iVar10 == 0)) ||
               (iVar10 = func_0x00be8540(uVar6,uVar3,*(undefined4 *)(iVar15 + 0x30),uVar5),
               iVar10 == 0)) || (iVar10 = func_0x00bba5e0(), iVar10 == 0)))) goto LAB_00bebbf4;
          func_0x00bbaab0(iVar10,uVar6,4);
          iVar11 = func_0x00bb77c0(0,uVar3,iVar10,*(undefined4 *)(iVar15 + 0x20),uVar5);
          if (iVar11 != 0) {
            FUN_00bba400(iVar10);
            iVar10 = func_0x00bba4c0(uVar3);
            if (((iVar10 != 0) &&
                (iVar10 = FUN_00be8290(uVar3,uVar3,*(undefined4 *)(iVar15 + 0x20)), iVar10 == 0)) ||
               ((iVar10 = func_0x00be8540(uVar6,uVar3,*(undefined4 *)(iVar15 + 0x24),uVar5),
                iVar10 == 0 || (iVar10 = FUN_00be8290(uVar3,uVar6,uVar8), iVar10 == 0))))
            goto LAB_00bebbf4;
            if (0 < iStack00000014) {
              iVar10 = func_0x00bba5e0();
              if (iVar10 == 0) goto LAB_00bebbf4;
              iStack0000000c = 0;
              do {
                puVar12 = (undefined4 *)
                          func_0x00bd1a80(*(undefined4 *)(iVar15 + 0x4c),iStack0000000c);
                iVar11 = FUN_00be8320(uVar6,*(undefined4 *)(&stack0x00000030 + iStack0000000c * 4),
                                      uVar3);
                if ((iVar11 == 0) ||
                   (iVar11 = func_0x00be8540(uVar7,uVar6,puVar12[2],uVar5), iVar11 == 0))
                goto LAB_00bebc48;
                func_0x00bbaab0(iVar10,uVar7,4);
                iVar11 = func_0x00bb77c0(0,uVar6,iVar10,*puVar12,uVar5);
                if (((iVar11 == 0) ||
                    (((iVar11 = func_0x00bba4c0(uVar6), iVar11 != 0 &&
                      (iVar11 = FUN_00be8290(uVar6,uVar6,*puVar12), iVar11 == 0)) ||
                     (iVar11 = func_0x00be8540(uVar6,uVar6,puVar12[3],uVar5), iVar11 == 0)))) ||
                   (iVar11 = FUN_00be8290(uVar3,uVar3,uVar6), iVar11 == 0)) goto LAB_00bebc48;
                iStack0000000c = iStack0000000c + 1;
              } while (iStack0000000c < iStack00000014);
              FUN_00bba400(iVar10);
            }
            goto LAB_00bebff7;
          }
        }
      }
    }
LAB_00bebc48:
    FUN_00bba400(iVar10);
  }
LAB_00bebbf4:
  func_0x00bb56f0(uVar5);
  FUN_008ab370();
  return;
}



undefined4 FUN_00bec150(int param_1)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 6;
  return 1;
}



undefined4 FUN_00bec160(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = func_0x00bd1830(*(undefined4 *)(param_1 + 0x4c));
  if (0 < iVar1) {
    do {
      iVar1 = func_0x00bd1a80(*(undefined4 *)(param_1 + 0x4c),iVar2);
      func_0x00bf98b0(*(undefined4 *)(iVar1 + 0x10));
      iVar2 = iVar2 + 1;
      iVar1 = func_0x00bd1830(*(undefined4 *)(param_1 + 0x4c));
    } while (iVar2 < iVar1);
  }
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x60));
  func_0x00bf98b0(*(undefined4 *)(param_1 + 100));
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x68));
  return 1;
}



undefined * FUN_00bec5c0(void)

{
  return &DAT_010599c4;
}



uint FUN_00bec5d0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = func_0x00bb6340();
    *param_2 = iVar1;
    return -(uint)(iVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_00bb6040(*param_2);
    *param_2 = 0;
    return 2;
  }
  if ((param_1 == 5) && (*(int *)(*param_2 + 8) == 1)) {
    iVar1 = func_0x00bee2f0(*param_2);
    return (-(uint)(iVar1 != 1) & 0xfffffffe) + 2;
  }
  return 1;
}



undefined4 FUN_00bec640(int param_1,int *param_2)

{
  if (param_1 == 2) {
    func_0x00bdbc10(*(undefined4 *)(*param_2 + 0x10));
  }
  return 1;
}



undefined4 FUN_00bec660(int param_1,int *param_2)

{
  if (param_1 == 2) {
    func_0x00bdbc10(*(undefined4 *)(*param_2 + 0xc));
  }
  return 1;
}



void FUN_00bec6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_01059ac8);
  return;
}



void FUN_00bec700(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_01059b28);
  return;
}



void FUN_00bec720(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01059ac8);
  return;
}



void FUN_00bec740(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01059b28);
  return;
}



void FUN_00bed370(int param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    FUN_00bbc580(param_1,"crypto\\evp\\pmeth_lib.c",0x1b4);
  }
  return;
}



int FUN_00bee220(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)*param_2)();
  return *(int *)*param_1 - *piVar1;
}



void FUN_00bee2e0(void)

{
  func_0x00c01160(&DAT_013deea8);
  return;
}



void FUN_00bee3f0(undefined4 *param_1)

{
  FUN_00bba080(*param_1);
  FUN_00bba080(param_1[1]);
  FUN_00bba080(param_1[2]);
  FUN_00bba080(param_1[3]);
  FUN_00bbc580(param_1,"crypto\\rsa\\rsa_mp.c",0x13);
  return;
}



void FUN_00bee430(int param_1)

{
  FUN_00bba080(*(undefined4 *)(param_1 + 0xc));
  FUN_00bbc580(param_1,"crypto\\rsa\\rsa_mp.c",0x13);
  return;
}



undefined4 FUN_00bee4d0(uint param_1)

{
  if (DAT_013deeb0 != 0) {
    if ((DAT_013deec0 <= param_1) && (param_1 < DAT_013deec4 + DAT_013deec0)) {
      return 1;
    }
  }
  return 0;
}



void FUN_00bee500(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (DAT_013deeb0 != 0) {
      if ((param_1 < DAT_013deec0) || (DAT_013deec4 + DAT_013deec0 <= param_1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = func_0x00bbb470(DAT_013deeb4);
        if (iVar2 == 0) {
          return;
        }
        iVar2 = func_0x00bee7d0(param_1);
        func_0x00401320(param_1,iVar2);
        DAT_013deeac = DAT_013deeac - iVar2;
        func_0x00beeaa0(param_1);
        func_0x00bbb440(DAT_013deeb4);
        return;
      }
    }
    func_0x00401320(param_1,param_2);
    FUN_00bbc580(param_1,param_3,param_4);
  }
  return;
}



void FUN_00bee5a0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (DAT_013deeb0 != 0) {
      if ((param_1 < DAT_013deec0) || (DAT_013deec4 + DAT_013deec0 <= param_1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = func_0x00bbb470(DAT_013deeb4);
        if (iVar2 == 0) {
          return;
        }
        iVar2 = func_0x00bee7d0(param_1);
        func_0x00401320(param_1,iVar2);
        DAT_013deeac = DAT_013deeac - iVar2;
        func_0x00beeaa0(param_1);
        func_0x00bbb440(DAT_013deeb4);
        return;
      }
    }
    FUN_00bbc580(param_1,param_2,param_3);
  }
  return;
}



int FUN_00bee630(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x6f;
  if (DAT_013deeb0 != 0) {
    iVar1 = func_0x00bbb470(DAT_013deeb4);
    if (iVar1 == 0) {
      uVar3 = 0x8000f;
    }
    else {
      iVar1 = func_0x00beee00(param_1);
      if (iVar1 != 0) {
        iVar2 = func_0x00bee7d0(iVar1);
        DAT_013deeac = DAT_013deeac + iVar2;
        func_0x00bbb440(DAT_013deeb4);
        return iVar1;
      }
      func_0x00bbb440(DAT_013deeb4);
    }
    if ((param_2 != 0) || (param_3 != 0)) {
      FUN_00bc4f50();
      func_0x00bc5050(param_2,param_3,0);
      func_0x00bc5160(0xf,uVar3,0);
    }
    return 0;
  }
  if ((code *)PTR_FUN_012b5b00 == FUN_00bbc4f0) {
    if (param_1 == 0) {
      return 0;
    }
    if (DAT_012b5afc != 0) {
      DAT_012b5afc = 0;
    }
    iVar1 = func_0x008aafe4(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_012b5b00)(param_1,param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) || (param_3 != 0)) {
    FUN_00bc4f50();
    func_0x00bc5050(param_2,param_3,0);
    func_0x00bc5160(0xf,0xc0100,0);
  }
  return 0;
}



void * FUN_00bee720(undefined4 param_1,size_t param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  if (DAT_013deeb0 != 0) {
    uVar3 = 0x6f;
    iVar1 = func_0x00bbb470(DAT_013deeb4);
    if (iVar1 == 0) {
      uVar3 = 0x8000f;
    }
    else {
      pvVar2 = (void *)func_0x00beee00(param_1);
      if (pvVar2 != (void *)0x0) {
        iVar1 = func_0x00bee7d0(pvVar2);
        DAT_013deeac = DAT_013deeac + iVar1;
        func_0x00bbb440(DAT_013deeb4);
        return pvVar2;
      }
      func_0x00bbb440(DAT_013deeb4);
    }
    if ((param_2 != 0) || (param_3 != 0)) {
      FUN_00bc4f50();
      func_0x00bc5050(param_2,param_3,0);
      func_0x00bc5160(0xf,uVar3,0);
    }
    return (void *)0x0;
  }
  func_0x00e87f70();
  if ((code *)PTR_FUN_012b5b00 == FUN_00bbc4f0) {
    if (param_2 == 0) {
      return (void *)0x0;
    }
    if (DAT_012b5afc != 0) {
      DAT_012b5afc = 0;
    }
    pvVar2 = (void *)func_0x008aafe4(param_2);
    if (pvVar2 != (void *)0x0) goto LAB_00bbc898;
  }
  else {
    pvVar2 = (void *)(*(code *)PTR_FUN_012b5b00)(param_2,param_3,param_4);
    if (pvVar2 != (void *)0x0) {
LAB_00bbc898:
      memset(pvVar2,0,param_2);
      return pvVar2;
    }
    if (param_2 == 0) {
      return (void *)0x0;
    }
  }
  if ((param_3 != 0) || (param_4 != 0)) {
    FUN_00bc4f50();
    func_0x00bc5050(param_3,param_4,0);
    func_0x00bc5160(0xf,0xc0100,0);
  }
  return (void *)0x0;
}



void FUN_00bef3b0(void)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  func_0x00e87f70();
  uVar10 = CONCAT44(DAT_01466b7c,DAT_01466b78);
  if (DAT_013def40 == 0) {
    DAT_013def40 = 1;
    DVar4 = GetEnvironmentVariableW(L"OPENSSL_ia32cap",&DAT_013deee0,0x30);
    sVar2 = DAT_013deee0;
    if (DVar4 - 1 < 0x2f) {
      puVar8 = &DAT_013deee0;
      iVar5 = 0;
      if (DAT_013deee0 == 0x7e) {
        iVar5 = 2;
      }
      uVar9 = func_0x00bef500((int)&DAT_013deee0 + iVar5);
      if (sVar2 == 0x7e) {
        uVar10 = func_0x00401000(&DAT_01466b70);
        uVar3 = uVar9 & 0x1000000;
        uVar6 = ~(uint)uVar9 & (uint)uVar10;
        uVar7 = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)uVar10 >> 0x20);
        uVar9 = CONCAT44(uVar7,uVar6);
        sVar2 = DAT_013deee0;
        if (uVar3 != 0) {
          uVar9 = CONCAT44(uVar7,uVar6) & 0xedfff7fdffffffff;
        }
      }
      else {
        sVar2 = DAT_013deee0;
        if (DAT_013deee0 == 0x3a) {
          uVar9 = func_0x00401000(&DAT_01466b70);
          sVar2 = DAT_013deee0;
        }
      }
      while (sVar2 != 0) {
        if (sVar2 == 0x3a) {
          if (puVar8 != (undefined2 *)0x0) {
            sVar2 = puVar8[1];
            iVar5 = 0;
            if (sVar2 == 0x7e) {
              iVar5 = 2;
            }
            uVar10 = func_0x00bef500((int)puVar8 + iVar5 + 2);
            if (sVar2 == 0x7e) {
              DAT_01466b78 = DAT_01466b78 & ~(uint)uVar10;
              DAT_01466b7c = DAT_01466b7c & ~(uint)((ulonglong)uVar10 >> 0x20);
              uVar10 = CONCAT44(DAT_01466b7c,DAT_01466b78);
            }
            goto LAB_00bef4e3;
          }
          break;
        }
        psVar1 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        sVar2 = *psVar1;
      }
      uVar10 = 0;
    }
    else {
      uVar9 = func_0x00401000(&DAT_01466b70);
      uVar10 = CONCAT44(DAT_01466b7c,DAT_01466b78);
    }
LAB_00bef4e3:
    DAT_01466b74 = (undefined4)(uVar9 >> 0x20);
    DAT_01466b70 = (uint)uVar9 | 0x400;
  }
  DAT_01466b7c = (uint)((ulonglong)uVar10 >> 0x20);
  DAT_01466b78 = (uint)uVar10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00befd30(void)

{
  int iVar1;
  
  iVar1 = func_0x00bbb350(&DAT_013deff4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x00befb30(&DAT_013def48);
    if (iVar1 != 0) {
      DAT_013deff8 = 1;
      _DAT_013deffc = 1;
      return;
    }
    func_0x00bbb2e0(&DAT_013deff4);
  }
  _DAT_013deffc = 0;
  return;
}



void FUN_00bf0ea0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    iVar1 = func_0x00bc1f70(param_1,2);
    *param_2 = iVar1;
  }
  return;
}



void FUN_00bf0ec0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    iVar1 = func_0x00bc1f70(param_1,1);
    *param_2 = iVar1;
  }
  return;
}



int FUN_00bf0f10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bb8800(4,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1f70(param_3,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = func_0x00c07780(param_2);
    iVar1 = func_0x00c075f0(uVar2,param_3);
    if (iVar1 == 0) {
      FUN_00bcaeb0();
      uVar3 = func_0x00ba8520(param_2,param_3,0);
      FUN_00ba8550(uVar3);
      func_0x00bcad80();
      iVar1 = func_0x00c075f0(uVar2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = func_0x00c07540(uVar2,iVar1,FUN_00bf0ea0,&stack0x00000000);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 0;
}



int FUN_00bf0fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bb8800(8,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1f70(param_3,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = func_0x00c07780(param_2);
    iVar1 = func_0x00c075f0(uVar2,param_3);
    if (iVar1 == 0) {
      FUN_00bcaeb0();
      uVar3 = func_0x00bd4740(param_2,param_3,0);
      FUN_00bd4770(uVar3);
      func_0x00bcad80();
      iVar1 = func_0x00c075f0(uVar2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = func_0x00c07540(uVar2,iVar1,FUN_00bf0ec0,&stack0x00000000);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bf1630(void)

{
  DAT_013df008 = func_0x00bbb6c0(1,0);
  if (DAT_013df008 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\conf\\conf_mod.c",0x68,"do_init_module_list_lock");
    func_0x00bc5160(0xe,0x8000f,0);
    _DAT_013df018 = 0;
    return;
  }
  _DAT_013df018 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bf1690(void)

{
  func_0x00c3fa40();
  func_0x00c40220();
  _DAT_013df01c = 1;
  return;
}



void FUN_00bf1800(undefined4 *param_1)

{
  func_0x00c05100(*param_1);
  FUN_00bbc580(param_1[1],"crypto\\conf\\conf_mod.c",0x237);
  FUN_00bbc580(param_1,"crypto\\conf\\conf_mod.c",0x238);
  return;
}



void FUN_00bf2340(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0x00bbb320(&DAT_013df024);
  if (puVar1 != (undefined4 *)0x0) {
    func_0x00bf23c0(puVar1);
    FUN_00bd1630(*puVar1);
    FUN_00bbc580(puVar1,"crypto\\async\\async.c",0x19e);
    func_0x00bbb420(&DAT_013df024,0);
  }
  func_0x00c40280();
  uVar2 = func_0x00bbb320(&DAT_013df020);
  iVar3 = func_0x00bbb420(&DAT_013df020,0);
  if (iVar3 != 0) {
    FUN_00bbc580(uVar2,"crypto\\async\\async.c",0x49);
  }
  return;
}



undefined4 FUN_00bf26f0(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = func_0x008ab040(param_1,&DAT_0105a478,param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0xffff;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,&DAT_01040474,param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 1;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,&DAT_0104eed8,param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 2;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,&DAT_010579a8,param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 4;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,&DAT_01056b4c,param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x800;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,&DAT_0105a8d4,param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 8;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,"CIPHERS",param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x40;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,"DIGESTS",param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x80;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,&DAT_0105a8ec,param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x600;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,"PKEY_CRYPTO",param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x200;
      return 1;
    }
    iVar1 = func_0x008ab040(param_1,"PKEY_ASN1",param_2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x400;
      return 1;
    }
  }
  return 0;
}



int FUN_00bf29b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    if (DAT_013df044 != 0) {
      iVar3 = DAT_013df040;
      *param_3 = &DAT_013df030;
      return iVar3;
    }
    iVar1 = func_0x00bf2c60();
    iVar3 = DAT_013df040;
    if (iVar1 != 0) {
      uVar2 = func_0x00bc36d0(iVar1);
      *(undefined4 *)(&DAT_013df030 + iVar3 * 4) = uVar2;
      DAT_013df040 = DAT_013df040 + 1;
    }
    iVar1 = func_0x00bf2bd0();
    iVar3 = DAT_013df040;
    if (iVar1 != 0) {
      uVar2 = func_0x00bc36d0(iVar1);
      *(undefined4 *)(&DAT_013df030 + iVar3 * 4) = uVar2;
      iVar3 = DAT_013df040 + 1;
    }
    DAT_013df040 = iVar3;
    *(undefined4 *)(&DAT_013df030 + iVar3 * 4) = 0;
    DAT_013df044 = 1;
    *param_3 = &DAT_013df030;
    return iVar3;
  }
  if (param_4 != 5) {
    if (param_4 != 0x61) {
      *param_2 = 0;
      return 0;
    }
    uVar2 = func_0x00bf2bd0();
    *param_2 = uVar2;
    return 1;
  }
  uVar2 = func_0x00bf2c60();
  *param_2 = uVar2;
  return 1;
}



undefined4 FUN_00bf2a90(void)

{
  func_0x00bc43b0(DAT_013df048);
  DAT_013df048 = 0;
  func_0x00c42080(DAT_013df028);
  DAT_013df028 = 0;
  func_0x00c42080(DAT_013df02c);
  DAT_013df02c = 0;
  return 1;
}



int FUN_00bf2ae0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    if (param_4 != 0x40) {
      *param_2 = 0;
      return 0;
    }
    uVar2 = func_0x00bf2df0();
    *param_2 = uVar2;
    return 1;
  }
  if (DAT_013df058 != 0) {
    iVar3 = DAT_013df054;
    *param_3 = &DAT_013df04c;
    return iVar3;
  }
  iVar1 = func_0x00bf2df0();
  iVar3 = DAT_013df054;
  if (iVar1 != 0) {
    uVar2 = FUN_00bbba70(iVar1);
    *(undefined4 *)(&DAT_013df04c + iVar3 * 4) = uVar2;
    iVar3 = DAT_013df054 + 1;
  }
  DAT_013df054 = iVar3;
  *(undefined4 *)(&DAT_013df04c + iVar3 * 4) = 0;
  DAT_013df058 = 1;
  *param_3 = &DAT_013df04c;
  return iVar3;
}



undefined4 FUN_00bf2b80(undefined4 param_1,undefined4 param_2)

{
  FILE *_File;
  int iVar1;
  undefined4 uVar2;
  char *_Format;
  
  _Format = "(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n";
  _File = (FILE *)func_0x00e8798f(2,"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n",param_2);
  fprintf(_File,_Format);
  iVar1 = func_0x00bac0a0(param_2,&DAT_01198360);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00c42110(iVar1,0,0,0);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



undefined4 FUN_00bf2cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bc36f0(param_1,param_4,param_3,param_2);
  func_0x00416e80(iVar1 + 0x10);
  return 1;
}



size_t FUN_00bf2d20(undefined4 param_1,void *param_2)

{
  size_t sVar1;
  FILE *_File;
  void *_Dst;
  int iVar2;
  undefined4 uVar3;
  size_t _Size;
  char *_Format;
  
  sVar1 = func_0x00bc3840(param_1);
  _Format = "(TEST_ENG_OPENSSL_RC4) test_init_key() called\n";
  _File = (FILE *)func_0x00e8798f(2);
  fprintf(_File,_Format);
  if ((int)sVar1 < 1) {
    return sVar1;
  }
  _Size = sVar1;
  _Dst = (void *)func_0x00bc36f0(param_1);
  memcpy(_Dst,param_2,_Size);
  iVar2 = func_0x00bc36f0(param_1);
  uVar3 = func_0x00bc36f0(param_1);
  func_0x004171a0(iVar2 + 0x10,sVar1,uVar3);
  return 1;
}



void FUN_00bf2d90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00bb7100(param_2,uVar1);
  return;
}



undefined4 FUN_00bf2db0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  memset(puVar1 + 5,0,0x4c);
  *puVar1 = 0x67452301;
  puVar1[1] = 0xefcdab89;
  puVar1[2] = 0x98badcfe;
  puVar1[3] = 0x10325476;
  puVar1[4] = 0xc3d2e1f0;
  return 1;
}



void FUN_00bf2dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00bb72a0(uVar1);
  return;
}



bool FUN_00bf2ea0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    return false;
  }
  iVar1 = func_0x004014d0(param_1,param_2);
  return param_2 == iVar1;
}



uint FUN_00bf2f70(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  piVar2 = (int *)func_0x00bf32d0(param_1);
  if (piVar2 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\engine\\eng_dyn.c",0x12d,"dynamic_ctrl");
    func_0x00bc5160(0x26,0x70,0);
    return 0;
  }
  if (*piVar2 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\engine\\eng_dyn.c",0x133,"dynamic_ctrl");
    func_0x00bc5160(0x26,100,0);
    return 0;
  }
  switch(param_2) {
  case 200:
    if (param_4 != (char *)0x0) {
      pcVar6 = param_4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 == param_4 + 1) {
        FUN_00bbc580(piVar2[3],"crypto\\engine\\eng_dyn.c",0x13b);
        goto LAB_00bf3033;
      }
    }
    FUN_00bbc580(piVar2[3],"crypto\\engine\\eng_dyn.c",0x13b);
    if (param_4 != (char *)0x0) {
      iVar4 = func_0x00bbbc70(param_4,"crypto\\engine\\eng_dyn.c",0x13d);
      piVar2[3] = iVar4;
      return (uint)(iVar4 != 0);
    }
LAB_00bf3033:
    piVar2[3] = 0;
    return 0;
  case 0xc9:
    piVar2[4] = (uint)(param_3 != 0);
    return 1;
  case 0xca:
    if (param_4 != (char *)0x0) {
      pcVar6 = param_4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 == param_4 + 1) {
        FUN_00bbc580(piVar2[5],"crypto\\engine\\eng_dyn.c",0x148);
        goto LAB_00bf30c3;
      }
    }
    FUN_00bbc580(piVar2[5],"crypto\\engine\\eng_dyn.c",0x148);
    if (param_4 != (char *)0x0) {
      iVar4 = func_0x00bbbc70(param_4,"crypto\\engine\\eng_dyn.c",0x14a);
      piVar2[5] = iVar4;
      return (uint)(iVar4 != 0);
    }
LAB_00bf30c3:
    piVar2[5] = 0;
    return 0;
  case 0xcb:
    if (param_3 < 3) {
      piVar2[6] = param_3;
      return 1;
    }
    FUN_00bc4f50();
    uVar7 = 0x150;
    break;
  case 0xcc:
    if (param_3 < 3) {
      piVar2[9] = param_3;
      return 1;
    }
    FUN_00bc4f50();
    uVar7 = 0x159;
    break;
  case 0xcd:
    if (param_4 != (char *)0x0) {
      pcVar6 = param_4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 != param_4 + 1) {
        iVar4 = func_0x00bbbc70(param_4,"crypto\\engine\\eng_dyn.c",0x165);
        if (iVar4 == 0) {
          return 0;
        }
        iVar5 = func_0x00bd18c0(piVar2[10],iVar4);
        if (iVar5 != 0) {
          return 1;
        }
        FUN_00bbc580(iVar4,"crypto\\engine\\eng_dyn.c",0x169);
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\engine\\eng_dyn.c",0x16a,"dynamic_ctrl");
        func_0x00bc5160(0x26,0x8000f,0);
        return 0;
      }
    }
    FUN_00bc4f50();
    uVar7 = 0x161;
    break;
  case 0xce:
    uVar3 = func_0x00bf3480(param_1,piVar2);
    return uVar3;
  default:
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\engine\\eng_dyn.c",0x172,"dynamic_ctrl");
    func_0x00bc5160(0x26,0x77,0);
    return 0;
  }
  func_0x00bc5050("crypto\\engine\\eng_dyn.c",uVar7,"dynamic_ctrl");
  func_0x00bc5160(0x26,0x8f,0);
  return 0;
}



void FUN_00bf3270(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    func_0x00c05100(*param_2);
    FUN_00bbc580(param_2[3],"crypto\\engine\\eng_dyn.c",0x90);
    FUN_00bbc580(param_2[5],"crypto\\engine\\eng_dyn.c",0x91);
    func_0x00bd1860(param_2[10],FUN_00bf38b0);
    FUN_00bbc580(param_2,"crypto\\engine\\eng_dyn.c",0x93);
  }
  return;
}



void FUN_00bf38b0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\engine\\eng_dyn.c",0x7d);
  return;
}



undefined4 FUN_00bf38d0(undefined1 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (7 < param_2) {
    do {
      uVar1 = func_0x00417d00(param_1,0);
      if ((uVar1 & 0x40) == 0) {
        return 0;
      }
      if ((uVar1 & 0x7c00) != 0) {
        return 0;
      }
      if ((uVar1 & 0x1f) != 0) {
        if ((uVar1 & 0x1f) != 8) {
          return 0;
        }
        param_1 = param_1 + 8;
        iVar2 = iVar2 + -8;
      }
    } while (7 < iVar2);
  }
  while( true ) {
    if (iVar2 < 1) {
      func_0x00401320(&param_2,4);
      return 1;
    }
    uVar1 = func_0x00417d00(&param_2,3);
    if ((uVar1 & 0x40) == 0) break;
    if ((uVar1 & 0x7c00) != 0) {
      return 0;
    }
    if ((uVar1 & 0x1f) != 0) {
      if ((uVar1 & 0x1f) != 1) {
        return 0;
      }
      *param_1 = (undefined1)param_2;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    }
  }
  return 0;
}



undefined4
FUN_00bf3a50(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *_Dst;
  
  func_0x00e87f70();
  iVar4 = func_0x00bc3840(param_2);
  iVar4 = iVar4 * 8;
  uVar5 = func_0x00bc36d0(param_2);
  iVar6 = func_0x00bc3c70(uVar5);
  if (param_3 != (undefined4 *)0x0) {
    iVar7 = func_0x00bc36f0(param_2);
    iVar8 = func_0x00bc36f0(param_2);
    _Dst = (void *)((-iVar7 & 0xfU) + iVar8);
    memset(_Dst,0,0x114);
    if ((iVar6 == 4) || (iVar6 == 5)) {
      uVar11 = *(uint *)((int)_Dst + 0x10) & 0xfffffdff;
    }
    else {
      iVar7 = FUN_00bc39e0(param_2);
      uVar11 = 0;
      if (iVar7 == 0) {
        uVar11 = 0x200;
      }
      uVar11 = uVar11 | *(uint *)((int)_Dst + 0x10) & 0xfffffdff;
    }
    *(uint *)((int)_Dst + 0x10) = uVar11;
    uVar9 = ((int)(iVar4 + -0x80 + (iVar4 + -0x80 >> 0x1f & 0x1fU)) >> 5) + 10;
    uVar10 = ((int)(iVar4 + -0x80 + (iVar4 + -0x80 >> 0x1f & 0x3fU)) >> 6) << 10;
    uVar10 = (uVar10 ^ (uVar9 ^ uVar11) & 0xfffffff0 ^ uVar9) & 0xfffff3ff ^ uVar10;
    *(uint *)((int)_Dst + 0x10) = uVar10;
    if (iVar4 == 0x80) {
      uVar5 = *param_3;
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *(uint *)((int)_Dst + 0x10) = uVar10 & 0xffffff7f;
      *(undefined4 *)((int)_Dst + 0x20) = uVar5;
      *(undefined4 *)((int)_Dst + 0x24) = uVar1;
      *(undefined4 *)((int)_Dst + 0x28) = uVar2;
      *(undefined4 *)((int)_Dst + 0x2c) = uVar3;
      func_0x00417470();
      return 1;
    }
    if ((iVar4 == 0xc0) || (iVar4 == 0x100)) {
      if (((iVar6 == 1) || (iVar6 == 2)) && (param_5 == 0)) {
        func_0x00404a60(param_3,iVar4,(int)_Dst + 0x20);
      }
      else {
        func_0x00404a50(param_3,iVar4,(int)_Dst + 0x20);
      }
      func_0x00417400((int)_Dst + 0x20);
      *(uint *)((int)_Dst + 0x10) = *(uint *)((int)_Dst + 0x10) | 0x80;
      func_0x00417470();
      return 1;
    }
  }
  return 0;
}



int FUN_00bf3bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = func_0x00bc36f0(param_1);
  iVar5 = func_0x00bc36f0(param_1);
  puVar7 = (undefined4 *)((-iVar4 & 0xfU) + iVar5);
  puVar6 = (undefined4 *)func_0x00bc39f0(param_1);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *puVar7 = *puVar6;
  puVar7[1] = uVar1;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  iVar4 = func_0x004176d0(param_2,param_3,puVar7,param_4);
  if (iVar4 != 0) {
    puVar6 = (undefined4 *)func_0x00bc39f0(param_1);
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
  }
  return iVar4;
}



undefined4
FUN_00bf3c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,byte *param_5,
            uint param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  func_0x00e87f70();
  iVar6 = func_0x00bc36f0(param_3);
  iVar7 = func_0x00bc36f0(param_3);
  pbVar8 = (byte *)(iVar7 + (-iVar6 & 0xfU));
  uVar9 = func_0x00bc3930(param_3);
  if (uVar9 != 0) {
    iVar6 = func_0x00bc39f0(param_3);
    if (0xf < uVar9) {
      return 0;
    }
    iVar7 = FUN_00bc39e0(param_3);
    if (iVar7 == 0) {
      do {
        if (param_6 == 0) break;
        bVar5 = *param_5;
        param_6 = param_6 - 1;
        param_5 = param_5 + 1;
        *param_4 = *(byte *)(iVar6 + uVar9) ^ bVar5;
        param_4 = param_4 + 1;
        *(byte *)(iVar6 + uVar9) = bVar5;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x10);
    }
    else {
      do {
        if (param_6 == 0) break;
        param_6 = param_6 - 1;
        bVar5 = *(byte *)(iVar6 + uVar9) ^ *param_5;
        param_5 = param_5 + 1;
        *param_4 = bVar5;
        param_4 = param_4 + 1;
        *(byte *)(iVar6 + uVar9) = bVar5;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x10);
    }
    func_0x00bc3aa0(param_3,uVar9 & 0xf);
  }
  if (param_6 == 0) {
    return 1;
  }
  puVar10 = (undefined4 *)func_0x00bc39f0(param_3);
  uVar2 = puVar10[1];
  uVar3 = puVar10[2];
  uVar4 = puVar10[3];
  uVar9 = param_6 & 0xfffffff0;
  *(undefined4 *)pbVar8 = *puVar10;
  *(undefined4 *)(pbVar8 + 4) = uVar2;
  *(undefined4 *)(pbVar8 + 8) = uVar3;
  *(undefined4 *)(pbVar8 + 0xc) = uVar4;
  if (uVar9 != 0) {
    iVar6 = func_0x004178f0(param_4,param_5,pbVar8,uVar9);
    if (iVar6 == 0) {
      return 0;
    }
    param_6 = param_6 - uVar9;
    if (param_6 == 0) goto LAB_00bf3dd1;
  }
  param_5 = param_5 + uVar9;
  func_0x00bc3aa0(param_3,param_6);
  if ((*(uint *)(pbVar8 + 0x10) & 0x200) == 0) {
    func_0x00417470();
    func_0x00417480(pbVar8,pbVar8,pbVar8);
    func_0x00417470();
    pbVar11 = param_4 + uVar9;
    pbVar12 = pbVar8;
    do {
      bVar5 = *param_5;
      bVar1 = *pbVar12;
      param_5 = param_5 + 1;
      *pbVar11 = bVar5 ^ bVar1;
      *pbVar12 = bVar5 ^ bVar1;
      param_6 = param_6 - 1;
      pbVar11 = pbVar11 + 1;
      pbVar12 = pbVar12 + 1;
    } while (param_6 != 0);
  }
  else {
    *(uint *)(pbVar8 + 0x10) = *(uint *)(pbVar8 + 0x10) & 0xfffffdff;
    func_0x00417470();
    func_0x00417480(pbVar8,pbVar8,pbVar8);
    *(uint *)(pbVar8 + 0x10) = *(uint *)(pbVar8 + 0x10) | 0x200;
    func_0x00417470();
    pbVar11 = param_4 + uVar9;
    pbVar12 = pbVar8;
    do {
      bVar5 = *param_5;
      param_5 = param_5 + 1;
      *pbVar11 = *pbVar12 ^ bVar5;
      *pbVar12 = bVar5;
      param_6 = param_6 - 1;
      pbVar11 = pbVar11 + 1;
      pbVar12 = pbVar12 + 1;
    } while (param_6 != 0);
  }
LAB_00bf3dd1:
  puVar10 = (undefined4 *)func_0x00bc39f0(param_3);
  uVar2 = *(undefined4 *)(pbVar8 + 4);
  uVar3 = *(undefined4 *)(pbVar8 + 8);
  uVar4 = *(undefined4 *)(pbVar8 + 0xc);
  *puVar10 = *(undefined4 *)pbVar8;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  return 1;
}



undefined4 FUN_00bf3e00(undefined4 param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    *param_3 = &DAT_0105ad0c;
    return DAT_012b5df0;
  }
  if (param_4 < 0x389) {
    if (param_4 == 0x388) {
      iVar1 = DAT_013df0dc;
      if (DAT_013df0dc == 0) {
        DAT_013df0dc = func_0x00c420a0(0x388,1,0x10);
        if ((((DAT_013df0dc != 0) && (iVar1 = func_0x00bc4450(DAT_013df0dc,0x10), iVar1 != 0)) &&
            (iVar1 = func_0x00c420d0(DAT_013df0dc,5), iVar1 != 0)) &&
           (((iVar1 = func_0x00bc44d0(DAT_013df0dc,FUN_00bf3a50), iVar1 != 0 &&
             (iVar1 = func_0x00bc4430(DAT_013df0dc,FUN_00bf4d20), iVar1 != 0)) &&
            ((iVar1 = func_0x00c420f0(DAT_013df0dc,0x124), iVar1 != 0 &&
             ((iVar1 = func_0x00bc4490(DAT_013df0dc,FUN_00bc3f60), iVar1 != 0 &&
              (iVar1 = func_0x00bc4410(DAT_013df0dc,FUN_00bc3bc0), iVar1 != 0)))))))) {
          *param_2 = DAT_013df0dc;
          return 1;
        }
        func_0x00c42080(DAT_013df0dc);
        *param_2 = 0;
        DAT_013df0dc = 0;
        return 1;
      }
    }
    else {
      switch(param_4) {
      case 0x1a2:
        iVar1 = DAT_013df0cc;
        if (DAT_013df0cc == 0) {
          DAT_013df0cc = func_0x00c420a0(0x1a2,0x10,0x10);
          if ((((DAT_013df0cc != 0) && (iVar1 = func_0x00bc4450(DAT_013df0cc,0x10), iVar1 != 0)) &&
              (iVar1 = func_0x00c420d0(DAT_013df0cc,1), iVar1 != 0)) &&
             (((iVar1 = func_0x00bc44d0(DAT_013df0cc,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0cc,FUN_00bf4db0), iVar1 != 0)) &&
              ((iVar1 = func_0x00c420f0(DAT_013df0cc,0x124), iVar1 != 0 &&
               ((iVar1 = func_0x00bc4490(DAT_013df0cc,FUN_00bc3f60), iVar1 != 0 &&
                (iVar1 = func_0x00bc4410(DAT_013df0cc,FUN_00bc3bc0), iVar1 != 0)))))))) {
            *param_2 = DAT_013df0cc;
            return 1;
          }
          func_0x00c42080(DAT_013df0cc);
          *param_2 = 0;
          DAT_013df0cc = 0;
          return 1;
        }
        break;
      case 0x1a3:
        iVar1 = DAT_013df0d0;
        if (DAT_013df0d0 == 0) {
          DAT_013df0d0 = func_0x00c420a0(0x1a3,0x10,0x10);
          if ((((DAT_013df0d0 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0d0,0x10), iVar1 != 0)) &&
              (iVar1 = func_0x00c420d0(DAT_013df0d0,2), iVar1 != 0)) &&
             (((iVar1 = func_0x00bc44d0(DAT_013df0d0,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0d0,FUN_00bf3bc0), iVar1 != 0)) &&
              ((iVar1 = func_0x00c420f0(DAT_013df0d0,0x124), iVar1 != 0 &&
               ((iVar1 = func_0x00bc4490(DAT_013df0d0,FUN_00bc3f60), iVar1 != 0 &&
                (iVar1 = func_0x00bc4410(DAT_013df0d0,FUN_00bc3bc0), iVar1 != 0)))))))) {
            *param_2 = DAT_013df0d0;
            return 1;
          }
          func_0x00c42080(DAT_013df0d0);
          *param_2 = 0;
          DAT_013df0d0 = 0;
          return 1;
        }
        break;
      case 0x1a4:
        iVar1 = DAT_013df0d8;
        if (DAT_013df0d8 == 0) {
          DAT_013df0d8 = func_0x00c420a0(0x1a4,1,0x10);
          if (((((DAT_013df0d8 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0d8,0x10), iVar1 != 0)) &&
               (iVar1 = func_0x00c420d0(DAT_013df0d8,4), iVar1 != 0)) &&
              ((iVar1 = func_0x00bc44d0(DAT_013df0d8,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0d8,FUN_00bf4e10), iVar1 != 0)))) &&
             ((iVar1 = func_0x00c420f0(DAT_013df0d8,0x124), iVar1 != 0 &&
              ((iVar1 = func_0x00bc4490(DAT_013df0d8,FUN_00bc3f60), iVar1 != 0 &&
               (iVar1 = func_0x00bc4410(DAT_013df0d8,FUN_00bc3bc0), iVar1 != 0)))))) {
            *param_2 = DAT_013df0d8;
            return 1;
          }
          func_0x00c42080(DAT_013df0d8);
          *param_2 = 0;
          DAT_013df0d8 = 0;
          return 1;
        }
        break;
      case 0x1a5:
        iVar1 = DAT_013df0d4;
        if (DAT_013df0d4 == 0) {
          DAT_013df0d4 = func_0x00c420a0(0x1a5,1,0x10);
          if ((((DAT_013df0d4 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0d4,0x10), iVar1 != 0)) &&
              (iVar1 = func_0x00c420d0(DAT_013df0d4,3), iVar1 != 0)) &&
             (((iVar1 = func_0x00bc44d0(DAT_013df0d4,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0d4,FUN_00bf3c20), iVar1 != 0)) &&
              ((iVar1 = func_0x00c420f0(DAT_013df0d4,0x124), iVar1 != 0 &&
               ((iVar1 = func_0x00bc4490(DAT_013df0d4,FUN_00bc3f60), iVar1 != 0 &&
                (iVar1 = func_0x00bc4410(DAT_013df0d4,FUN_00bc3bc0), iVar1 != 0)))))))) {
            *param_2 = DAT_013df0d4;
            return 1;
          }
          func_0x00c42080(DAT_013df0d4);
          *param_2 = 0;
          DAT_013df0d4 = 0;
          return 1;
        }
        break;
      case 0x1a6:
        iVar1 = DAT_013df0e0;
        if (DAT_013df0e0 == 0) {
          DAT_013df0e0 = func_0x00c420a0(0x1a6,0x10,0x18);
          if ((((DAT_013df0e0 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0e0,0x10), iVar1 != 0)) &&
              (iVar1 = func_0x00c420d0(DAT_013df0e0,1), iVar1 != 0)) &&
             (((iVar1 = func_0x00bc44d0(DAT_013df0e0,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0e0,FUN_00bf4db0), iVar1 != 0)) &&
              ((iVar1 = func_0x00c420f0(DAT_013df0e0,0x124), iVar1 != 0 &&
               ((iVar1 = func_0x00bc4490(DAT_013df0e0,FUN_00bc3f60), iVar1 != 0 &&
                (iVar1 = func_0x00bc4410(DAT_013df0e0,FUN_00bc3bc0), iVar1 != 0)))))))) {
            *param_2 = DAT_013df0e0;
            return 1;
          }
          func_0x00c42080(DAT_013df0e0);
          *param_2 = 0;
          DAT_013df0e0 = 0;
          return 1;
        }
        break;
      case 0x1a7:
        iVar1 = DAT_013df0e4;
        if (DAT_013df0e4 == 0) {
          DAT_013df0e4 = func_0x00c420a0(0x1a7,0x10,0x18);
          if ((((((DAT_013df0e4 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0e4,0x10), iVar1 != 0))
                && (iVar1 = func_0x00c420d0(DAT_013df0e4,2), iVar1 != 0)) &&
               ((iVar1 = func_0x00bc44d0(DAT_013df0e4,FUN_00bf3a50), iVar1 != 0 &&
                (iVar1 = func_0x00bc4430(DAT_013df0e4,FUN_00bf3bc0), iVar1 != 0)))) &&
              (iVar1 = func_0x00c420f0(DAT_013df0e4,0x124), iVar1 != 0)) &&
             ((iVar1 = func_0x00bc4490(DAT_013df0e4,FUN_00bc3f60), iVar1 != 0 &&
              (iVar1 = func_0x00bc4410(DAT_013df0e4,FUN_00bc3bc0), iVar1 != 0)))) {
            *param_2 = DAT_013df0e4;
            return 1;
          }
          func_0x00c42080(DAT_013df0e4);
          *param_2 = 0;
          DAT_013df0e4 = 0;
          return 1;
        }
        break;
      case 0x1a8:
        iVar1 = DAT_013df0ec;
        if (DAT_013df0ec == 0) {
          DAT_013df0ec = func_0x00c420a0(0x1a8,1,0x18);
          if ((((DAT_013df0ec != 0) && (iVar1 = func_0x00bc4450(DAT_013df0ec,0x10), iVar1 != 0)) &&
              (iVar1 = func_0x00c420d0(DAT_013df0ec,4), iVar1 != 0)) &&
             (((iVar1 = func_0x00bc44d0(DAT_013df0ec,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0ec,FUN_00bf4e10), iVar1 != 0)) &&
              ((iVar1 = func_0x00c420f0(DAT_013df0ec,0x124), iVar1 != 0 &&
               ((iVar1 = func_0x00bc4490(DAT_013df0ec,FUN_00bc3f60), iVar1 != 0 &&
                (iVar1 = func_0x00bc4410(DAT_013df0ec,FUN_00bc3bc0), iVar1 != 0)))))))) {
            *param_2 = DAT_013df0ec;
            return 1;
          }
          func_0x00c42080(DAT_013df0ec);
          *param_2 = 0;
          DAT_013df0ec = 0;
          return 1;
        }
        break;
      case 0x1a9:
        iVar1 = DAT_013df0e8;
        if (DAT_013df0e8 == 0) {
          DAT_013df0e8 = func_0x00c420a0(0x1a9,1,0x18);
          if ((((DAT_013df0e8 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0e8,0x10), iVar1 != 0)) &&
              (iVar1 = func_0x00c420d0(DAT_013df0e8,3), iVar1 != 0)) &&
             (((iVar1 = func_0x00bc44d0(DAT_013df0e8,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0e8,FUN_00bf3c20), iVar1 != 0)) &&
              ((iVar1 = func_0x00c420f0(DAT_013df0e8,0x124), iVar1 != 0 &&
               ((iVar1 = func_0x00bc4490(DAT_013df0e8,FUN_00bc3f60), iVar1 != 0 &&
                (iVar1 = func_0x00bc4410(DAT_013df0e8,FUN_00bc3bc0), iVar1 != 0)))))))) {
            *param_2 = DAT_013df0e8;
            return 1;
          }
          func_0x00c42080(DAT_013df0e8);
          *param_2 = 0;
          DAT_013df0e8 = 0;
          return 1;
        }
        break;
      case 0x1aa:
        iVar1 = DAT_013df0f4;
        if (DAT_013df0f4 == 0) {
          DAT_013df0f4 = func_0x00c420a0(0x1aa,0x10,0x20);
          if (((((DAT_013df0f4 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0f4,0x10), iVar1 != 0)) &&
               (iVar1 = func_0x00c420d0(DAT_013df0f4,1), iVar1 != 0)) &&
              ((iVar1 = func_0x00bc44d0(DAT_013df0f4,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0f4,FUN_00bf4db0), iVar1 != 0)))) &&
             ((iVar1 = func_0x00c420f0(DAT_013df0f4,0x124), iVar1 != 0 &&
              ((iVar1 = func_0x00bc4490(DAT_013df0f4,FUN_00bc3f60), iVar1 != 0 &&
               (iVar1 = func_0x00bc4410(DAT_013df0f4,FUN_00bc3bc0), iVar1 != 0)))))) {
            *param_2 = DAT_013df0f4;
            return 1;
          }
          func_0x00c42080(DAT_013df0f4);
          *param_2 = 0;
          DAT_013df0f4 = 0;
          return 1;
        }
        break;
      case 0x1ab:
        iVar1 = DAT_013df0f8;
        if (DAT_013df0f8 == 0) {
          DAT_013df0f8 = func_0x00c420a0(0x1ab,0x10,0x20);
          if (((((DAT_013df0f8 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0f8,0x10), iVar1 != 0)) &&
               (iVar1 = func_0x00c420d0(DAT_013df0f8,2), iVar1 != 0)) &&
              ((iVar1 = func_0x00bc44d0(DAT_013df0f8,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0f8,FUN_00bf3bc0), iVar1 != 0)))) &&
             ((iVar1 = func_0x00c420f0(DAT_013df0f8,0x124), iVar1 != 0 &&
              ((iVar1 = func_0x00bc4490(DAT_013df0f8,FUN_00bc3f60), iVar1 != 0 &&
               (iVar1 = func_0x00bc4410(DAT_013df0f8,FUN_00bc3bc0), iVar1 != 0)))))) {
            *param_2 = DAT_013df0f8;
            return 1;
          }
          func_0x00c42080(DAT_013df0f8);
          *param_2 = 0;
          DAT_013df0f8 = 0;
          return 1;
        }
        break;
      case 0x1ac:
        iVar1 = DAT_013df100;
        if (DAT_013df100 == 0) {
          DAT_013df100 = func_0x00c420a0(0x1ac,1,0x20);
          if ((((DAT_013df100 != 0) && (iVar1 = func_0x00bc4450(DAT_013df100,0x10), iVar1 != 0)) &&
              (iVar1 = func_0x00c420d0(DAT_013df100,4), iVar1 != 0)) &&
             (((iVar1 = func_0x00bc44d0(DAT_013df100,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df100,FUN_00bf4e10), iVar1 != 0)) &&
              ((iVar1 = func_0x00c420f0(DAT_013df100,0x124), iVar1 != 0 &&
               ((iVar1 = func_0x00bc4490(DAT_013df100,FUN_00bc3f60), iVar1 != 0 &&
                (iVar1 = func_0x00bc4410(DAT_013df100,FUN_00bc3bc0), iVar1 != 0)))))))) {
            *param_2 = DAT_013df100;
            return 1;
          }
