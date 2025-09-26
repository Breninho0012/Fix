    if (0xf < uStack_28) {
      uVar3 = uStack_28 + 1;
      iVar5 = aiStack_3c[0];
      if (0xfff < uVar3) {
        iVar5 = *(int *)(aiStack_3c[0] + -4);
        uVar3 = uStack_28 + 0x24;
        if (0x1f < (aiStack_3c[0] - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar3);
    }
    func_0x005d3940();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



bool __fastcall FUN_00a0c040(int param_1)

{
  return *(int *)(param_1 + 100) != 0;
}



void __thiscall
FUN_00a0c050(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e0 [152];
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c940;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_28 = param_2;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x3c) + 0x3c);
  iStack_2c = param_1;
  _guard_check_icall(uStack_14);
  (*pcVar1)();
  func_0x00a0c4a0(&iStack_20,0);
  if (iStack_20 == 0x3000) {
    func_0x008a4620();
    piStack_28 = *(int **)(iStack_2c + 100);
    if (*(char *)(iStack_2c + 0x5c) == '\0') {
      iStack_18 = *(int *)(iStack_2c + 0x84) - param_5;
      iStack_20 = iStack_18 - param_7;
      iStack_1c = param_6 + param_4;
      iStack_24 = param_4;
      piStack_38 = &iStack_24;
      uStack_3c = 1;
      uStack_34 = 0;
      uStack_30 = 0;
      pcVar1 = *(code **)(*piStack_28 + 0x58);
      _guard_check_icall(piStack_28,*(undefined4 *)(iStack_2c + 0x88),0,&uStack_3c);
      piStack_28 = (int *)(*pcVar1)();
    }
    else {
      pcVar1 = *(code **)(*piStack_28 + 0x20);
      _guard_check_icall(piStack_28,*(undefined4 *)(iStack_2c + 0x88),0);
      piStack_28 = (int *)(*pcVar1)();
      *(undefined1 *)(iStack_2c + 0x5c) = 0;
    }
    func_0x00a0c4a0(&iStack_20,1);
    if (iStack_20 == 0x3000) {
      func_0x008a4620();
      if ((int)piStack_28 < 0) {
        func_0x005d5720(1);
        uStack_8 = 0;
        func_0x0046b6e0(auStack_e0,"Failed to present swap chain, ");
        piVar3 = (int *)func_0x009529d0(auStack_48,piStack_28);
        iVar2 = piVar3[1];
        if (*piVar3 != 0) {
          func_0x0046b6e0(auStack_e0,*piVar3);
        }
        func_0x0091fdc0(auStack_e0,iVar2,&DAT_00f9ad64,0x30);
        func_0x009b9260(param_2);
        func_0x005d3940();
      }
      else {
        func_0x00a0b4a0(param_2);
      }
    }
    else {
      *param_2 = iStack_20;
      param_2[1] = iStack_1c;
      param_2[2] = iStack_18;
    }
  }
  else {
    param_2[1] = iStack_1c;
    *param_2 = iStack_20;
    param_2[2] = iStack_18;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00a0c250(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 * __thiscall FUN_00a0c2a0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_15c [152];
  undefined4 uStack_c4;
  undefined1 auStack_bc [152];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c70b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0xb4);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x48),1,param_1 + 0x7c,uVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    uStack_c4 = 0x3003;
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_bc,"Failed to unlock D3D object, ");
    DVar4 = GetLastError();
    piVar5 = (int *)func_0x009529b0(auStack_1c,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_bc,*piVar5);
    }
    func_0x009baba0(auStack_bc,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0xa8);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x7c));
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    func_0x005d5720(1);
    uStack_8 = 1;
    func_0x0046b6e0(auStack_15c,"Failed to unregister D3D object, ");
    DVar4 = GetLastError();
    piVar5 = (int *)func_0x009529b0(auStack_24,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_15c,*piVar5);
    }
    func_0x009baba0(auStack_15c,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00a0c6b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



int * __thiscall FUN_00a0c6c0(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c0 [152];
  undefined1 auStack_28 [12];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c9c0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x3c) + 0x3c);
  _guard_check_icall(uVar2);
  (*pcVar1)();
  func_0x00a0c4a0(&iStack_1c,0);
  if (iStack_1c == 0x3000) {
    func_0x008a4620();
    pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
    _guard_check_icall(*(int **)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x88),0);
    iVar3 = (*pcVar1)();
    *(undefined1 *)(param_1 + 0x5c) = 0;
    func_0x00a0c4a0(&iStack_1c,1);
    if (iStack_1c == 0x3000) {
      func_0x008a4620();
      if (iVar3 < 0) {
        func_0x005d5720(1);
        uStack_8 = 0;
        func_0x0046b6e0(auStack_c0,"Failed to present swap chain, ");
        piVar4 = (int *)func_0x009529d0(auStack_28,iVar3);
        iVar3 = piVar4[1];
        if (*piVar4 != 0) {
          func_0x0046b6e0(auStack_c0,*piVar4);
        }
        func_0x0091fdc0(auStack_c0,iVar3,&DAT_00f9ad64,0x30);
        func_0x009b9260(param_2);
        func_0x005d3940();
      }
      else {
        func_0x00a0b4a0(param_2);
      }
      *unaff_FS_OFFSET = iStack_10;
      return param_2;
    }
  }
  *param_2 = iStack_1c;
  param_2[1] = iStack_18;
  param_2[2] = iStack_14;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00a0c8b0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::PbufferSurfaceWGL::vftable;
  pcVar1 = *(code **)(param_1[0x16] + 0x80);
  uStack_8 = 0;
  _guard_check_icall(param_1[0x14],param_1[0x15],uVar2);
  (*pcVar1)();
  param_1[0x15] = 0;
  pcVar1 = *(code **)(param_1[0x16] + 0x84);
  _guard_check_icall(param_1[0x14]);
  (*pcVar1)();
  param_1[0x14] = 0;
  *param_1 = rx::SurfaceWGL::vftable;
  func_0x00ad7340();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall
FUN_00a0c960(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [152];
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c9f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x58) + 0x8c);
  uVar3 = 0;
  if (param_5 == 0x3084) {
    uVar3 = 0x2085;
  }
  _guard_check_icall(*(undefined4 *)(param_1 + 0x50),uVar3,uVar2);
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    DVar5 = GetLastError();
    func_0x005d5720(1);
    uStack_8 = 2;
    func_0x0046b6e0(auStack_b4,"Failed to bind native wgl pbuffer, ");
    piVar6 = (int *)func_0x009529b0(auStack_1c,DVar5 & 0xffff);
    iVar4 = piVar6[1];
    if (*piVar6 != 0) {
      func_0x0046b6e0(auStack_b4,*piVar6);
    }
    func_0x009baba0(auStack_b4,iVar4,&DAT_00f9ad64,0x30);
    func_0x009f4a40(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00a0ca90(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  char *pcVar6;
  undefined1 auStack_184 [152];
  undefined4 uStack_ec;
  undefined1 auStack_e4 [152];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4ca36;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_3c = param_2;
  puStack_38 = param_2;
  uStack_34 = 0x2033;
  uStack_30 = (uint)(*(char *)(param_1 + 0x3c) != '\0');
  uStack_2c = 0x2072;
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0x305c) {
    uStack_28 = 0x2077;
  }
  else if (iVar2 == 0x305d) {
    uStack_28 = 0x2075;
  }
  else if (iVar2 == 0x305e) {
    uStack_28 = 0x2076;
  }
  else {
    uStack_28 = 0;
  }
  uStack_24 = 0x2073;
  if (*(int *)(param_1 + 0x44) == 0x305c) {
    uStack_20 = 0x2077;
  }
  else if (*(int *)(param_1 + 0x44) == 0x305f) {
    uStack_20 = 0x207a;
  }
  else {
    uStack_20 = 0;
  }
  uStack_1c = 0;
  uStack_18 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x58) + 0x78);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48),
                     *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),&uStack_34,
                     uStack_14);
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    uStack_ec = 0x3003;
    func_0x005d5720(1);
    uStack_8 = 4;
    pcVar6 = "Failed to create a native WGL pbuffer, ";
LAB_00a0ccdc:
    func_0x0046b6e0(auStack_e4,pcVar6);
    piVar5 = (int *)func_0x009529b0(auStack_40,DVar3 & 0xffff);
    iVar2 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_e4,*piVar5);
    }
    func_0x009baba0(auStack_e4,iVar2,&DAT_00f9ad64,0x30);
    func_0x009b9260(puStack_38);
  }
  else {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x58) + 0x88);
    _guard_check_icall(iVar2,0x2034,param_1 + 0x34);
    iVar2 = (*pcVar1)();
    if (iVar2 != 1) {
LAB_00a0ccb1:
      DVar3 = GetLastError();
      uStack_ec = 0x3003;
      func_0x005d5720(1);
      uStack_8 = 5;
      pcVar6 = "Failed to query the WGL pbuffer\'s dimensions, ";
      goto LAB_00a0ccdc;
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 0x58) + 0x88);
    _guard_check_icall(*(undefined4 *)(param_1 + 0x50),0x2035,param_1 + 0x38);
    iVar2 = (*pcVar1)();
    if (iVar2 != 1) goto LAB_00a0ccb1;
    pcVar1 = *(code **)(*(int *)(param_1 + 0x58) + 0x7c);
    _guard_check_icall(*(undefined4 *)(param_1 + 0x50));
    iVar2 = (*pcVar1)();
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 != 0) {
      *puStack_38 = 0x3000;
      puStack_38[1] = 0;
      puStack_38[2] = 0;
      goto LAB_00a0cd44;
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 0x58) + 0x84);
    _guard_check_icall(*(undefined4 *)(param_1 + 0x50));
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x50) = 0;
    DVar3 = GetLastError();
    func_0x005d5720(1);
    uStack_8 = 6;
    func_0x0046b6e0(auStack_184,"Failed to get the WGL pbuffer handle, ");
    puVar4 = (undefined4 *)func_0x009529b0(auStack_4c,DVar3 & 0xffff);
    func_0x00a096d0(*puVar4,puVar4[1]);
    func_0x009b9260(puStack_38);
  }
  func_0x005d3940();
LAB_00a0cd44:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00a0cd70(undefined4 *param_1)

{
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void FUN_00a0cd90(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 * __thiscall FUN_00a0cdc0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [152];
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c9f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x58) + 0x90);
  uVar3 = 0;
  if (param_4 == 0x3084) {
    uVar3 = 0x2085;
  }
  _guard_check_icall(*(undefined4 *)(param_1 + 0x50),uVar3,uVar2);
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    DVar5 = GetLastError();
    func_0x005d5720(1);
    uStack_8 = 2;
    func_0x0046b6e0(auStack_b4,"Failed to unbind native wgl pbuffer, ");
    piVar6 = (int *)func_0x009529b0(auStack_1c,DVar5 & 0xffff);
    iVar4 = piVar6[1];
    if (*piVar6 != 0) {
      func_0x0046b6e0(auStack_b4,*piVar6);
    }
    func_0x009baba0(auStack_b4,iVar4,&DAT_00f9ad64,0x30);
    func_0x009f4a40(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00a0cf60(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::WindowSurfaceWGL::vftable;
  ReleaseDC((HWND)param_1[0xe],(HDC)param_1[0xf]);
  param_1[0xf] = 0;
  *param_1 = rx::SurfaceWGL::vftable;
  func_0x00ad7340();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  return param_1;
}



void __fastcall FUN_00a0cfb0(int param_1)

{
  BOOL BVar1;
  tagRECT tStack_14;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&tStack_14;
  BVar1 = GetClientRect(*(HWND *)(param_1 + 0x38),&tStack_14);
  if (BVar1 == 0) {
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_00a0d000(int param_1)

{
  BOOL BVar1;
  tagRECT tStack_14;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&tStack_14;
  BVar1 = GetClientRect(*(HWND *)(param_1 + 0x38),&tStack_14);
  if (BVar1 == 0) {
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a0d050(int param_1,undefined4 *param_2)

{
  uint uVar1;
  HDC hdc;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_180 [152];
  undefined4 uStack_e8;
  undefined1 auStack_e0 [156];
  undefined1 auStack_44 [4];
  undefined4 *puStack_40;
  tagPIXELFORMATDESCRIPTOR tStack_3c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4cac1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_40 = param_2;
  uStack_14 = uVar1;
  hdc = GetDC(*(HWND *)(param_1 + 0x38));
  *(HDC *)(param_1 + 0x3c) = hdc;
  if (hdc == (HDC)0x0) {
    uStack_e8 = 0x300b;
    func_0x005d5720(1,uVar1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_e0,"Failed to get the device context from the native window, ");
    DVar2 = GetLastError();
    piVar3 = (int *)func_0x009529b0(auStack_44,DVar2);
    iVar4 = piVar3[1];
    if (*piVar3 != 0) {
      func_0x0046b6e0(auStack_e0,*piVar3);
    }
    func_0x009baba0(auStack_e0,iVar4,&DAT_00f9ad64,0x30);
    func_0x00a0aeb0(param_2);
    func_0x005d3940();
    goto LAB_00a0d330;
  }
  iVar4 = GetPixelFormat(hdc);
  if (iVar4 == 0) {
    tStack_3c.nSize = 0;
    tStack_3c.nVersion = 0;
    tStack_3c.dwFlags = 0;
    tStack_3c.iPixelType = '\0';
    tStack_3c.cColorBits = '\0';
    tStack_3c.cRedBits = '\0';
    tStack_3c.cRedShift = '\0';
    tStack_3c.cGreenBits = '\0';
    tStack_3c.cGreenShift = '\0';
    tStack_3c.cBlueBits = '\0';
    tStack_3c.cBlueShift = '\0';
    tStack_3c.cAlphaBits = '\0';
    tStack_3c.cAlphaShift = '\0';
    tStack_3c.cAccumBits = '\0';
    tStack_3c.cAccumRedBits = '\0';
    tStack_3c.cAccumGreenBits = '\0';
    tStack_3c.cAccumBlueBits = '\0';
    tStack_3c.cAccumAlphaBits = '\0';
    tStack_3c.cDepthBits = '\0';
    tStack_3c.cStencilBits = '\0';
    tStack_3c.cAuxBuffers = '\0';
    tStack_3c.iLayerType = '\0';
    tStack_3c.bReserved = '\0';
    tStack_3c.dwLayerMask = 0;
    tStack_3c.dwVisibleMask = 0;
    tStack_3c.dwDamageMask = 0;
    iVar4 = DescribePixelFormat(*(HDC *)(param_1 + 0x3c),*(int *)(param_1 + 0x34),0x28,&tStack_3c);
    if (iVar4 == 0) {
      uStack_e8 = 0x300b;
      func_0x005d5720(1,uVar1);
      uStack_8 = 1;
      func_0x0046b6e0(auStack_e0,"Failed to DescribePixelFormat, ");
      DVar2 = GetLastError();
      piVar3 = (int *)func_0x009529b0(auStack_44,DVar2);
      iVar4 = piVar3[1];
      if (*piVar3 != 0) {
        func_0x0046b6e0(auStack_e0,*piVar3);
      }
      func_0x009baba0(auStack_e0,iVar4,&DAT_00f9ad64,0x30);
      func_0x00a0aeb0(param_2);
      func_0x005d3940();
      goto LAB_00a0d330;
    }
    BVar5 = SetPixelFormat(*(HDC *)(param_1 + 0x3c),*(int *)(param_1 + 0x34),&tStack_3c);
    if (BVar5 == 0) {
      uStack_e8 = 0x3001;
      func_0x005d5720(1,uVar1);
      uStack_8 = 2;
      func_0x0046b6e0(auStack_e0,"Failed to set the pixel format on the device context, ");
      DVar2 = GetLastError();
      piVar3 = (int *)func_0x009529b0(auStack_44,DVar2);
      iVar4 = piVar3[1];
      if (*piVar3 != 0) {
        func_0x0046b6e0(auStack_e0,*piVar3);
      }
      func_0x009baba0(auStack_e0,iVar4,&DAT_00f9ad64,0x30);
      func_0x00926940(param_2);
      func_0x005d3940();
      goto LAB_00a0d330;
    }
  }
  else if (iVar4 != *(int *)(param_1 + 0x34)) {
    func_0x005d5720(1,uVar1);
    uStack_8 = 3;
    func_0x0046b6e0(auStack_180,"Pixel format of the NativeWindow and NativeDisplayType must match."
                   );
    func_0x00926940(param_2);
    func_0x005d3940();
    goto LAB_00a0d330;
  }
  iVar4 = func_0x00a0d860(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34),0x2007,
                          *(undefined4 *)(param_1 + 0x40));
  if ((iVar4 == 0x2028) || (uVar6 = 0x3094, iVar4 != 0x2029)) {
    uVar6 = 0x3095;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_00a0d330:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a0d350(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0x74);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  return;
}



void __thiscall FUN_00a0d370(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_cc [156];
  undefined4 *puStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4cb08;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_30 = param_2;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0x38);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x3c),uStack_14);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_cc,"Failed to swap buffers on the child window.");
    func_0x0046a470(aiStack_2c);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x0091ffd0(0x300e,0x300e,aiStack_2c);
    if (0xf < uStack_18) {
      uVar3 = uStack_18 + 1;
      iVar2 = aiStack_2c[0];
      if (0xfff < uVar3) {
        iVar2 = *(int *)(aiStack_2c[0] + -4);
        uVar3 = uStack_18 + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar2) - 4U) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(iVar2,uVar3);
    }
    func_0x005d3940();
  }
  else {
    *param_2 = 0x3000;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_00a0d8b0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x009226e0(uVar1);
  uStack_8 = 2;
  func_0x00922cb0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a0d920(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x009226e0(uVar1);
  uStack_8 = 2;
  func_0x00922cb0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00a0d990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int aiStack_c8 [20];
  undefined **appuStack_78 [18];
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  iStack_28 = 0xffffffff;
  puStack_2c = &DAT_00f4cc08;
  iStack_30 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_24;
  *unaff_FS_OFFSET = (int)&iStack_30;
  func_0x005d5720(1,uStack_8);
  iStack_28 = 0;
  func_0x0046b6e0(aiStack_c8,"FPS: ");
  func_0x0083cd60(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  func_0x0046a470(aiStack_20);
  iStack_28._0_1_ = 1;
  func_0x00a0fd20(param_1,param_2,aiStack_20,param_3,param_5);
  iStack_28 = (uint)iStack_28._1_3_ << 8;
  if (0xf < uStack_c) {
    uVar2 = uStack_c + 1;
    iVar3 = aiStack_20[0];
    if (0xfff < uVar2) {
      iVar3 = *(int *)(aiStack_20[0] + -4);
      uVar2 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar2);
  }
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -8;
  iStack_28 = 2;
  appuStack_78[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_78);
  *unaff_FS_OFFSET = iStack_30;
  FUN_008ab370();
  return;
}



void FUN_00a0db00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int aiStack_c8 [20];
  undefined **appuStack_78 [18];
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  iStack_28 = 0xffffffff;
  puStack_2c = &DAT_00f4cc08;
  iStack_30 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_24;
  *unaff_FS_OFFSET = (int)&iStack_30;
  func_0x005d5720(1,uStack_8);
  iStack_28 = 0;
  func_0x0046b6e0(aiStack_c8,"Last VVL Message: ");
  piVar2 = (int *)(param_1 + 0x34);
  if (0xf < *(uint *)(param_1 + 0x48)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x0046cb10(aiStack_c8,piVar2,*(undefined4 *)(param_1 + 0x44));
  func_0x0046a470(aiStack_20);
  iStack_28._0_1_ = 1;
  func_0x00a0fd20(param_1,param_2,aiStack_20,param_3,param_5);
  iStack_28 = (uint)iStack_28._1_3_ << 8;
  if (0xf < uStack_c) {
    uVar3 = uStack_c + 1;
    iVar4 = aiStack_20[0];
    if (0xfff < uVar3) {
      iVar4 = *(int *)(aiStack_20[0] + -4);
      uVar3 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -8;
  iStack_28 = 2;
  appuStack_78[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_78);
  *unaff_FS_OFFSET = iStack_30;
  FUN_008ab370();
  return;
}



void FUN_00a0dc80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int aiStack_c8 [20];
  undefined **appuStack_78 [18];
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  iStack_28 = 0xffffffff;
  puStack_2c = &DAT_00f4cc08;
  iStack_30 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_24;
  *unaff_FS_OFFSET = (int)&iStack_30;
  func_0x005d5720(1,uStack_8);
  iStack_28 = 0;
  func_0x0046b6e0(aiStack_c8,"VVL Message Count: ");
  func_0x0083cd60(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  func_0x0046a470(aiStack_20);
  iStack_28._0_1_ = 1;
  func_0x00a0fd20(param_1,param_2,aiStack_20,param_3,param_5);
  iStack_28 = (uint)iStack_28._1_3_ << 8;
  if (0xf < uStack_c) {
    uVar2 = uStack_c + 1;
    iVar3 = aiStack_20[0];
    if (0xfff < uVar2) {
      iVar3 = *(int *)(aiStack_20[0] + -4);
      uVar2 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar2);
  }
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -8;
  iStack_28 = 2;
  appuStack_78[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_78);
  *unaff_FS_OFFSET = iStack_30;
  FUN_008ab370();
  return;
}



void FUN_00a0ddf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0de20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0de50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f9a0(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0de80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0deb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0dee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0df10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0df40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0df70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0dfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0dfd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  double in_XMM0_Qa;
  int *piVar7;
  char *pcVar8;
  int aiStack_f4 [20];
  undefined **appuStack_a4 [18];
  double dStack_5c;
  char cStack_50;
  uint auStack_4c [2];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_34;
  int *piStack_30;
  int aiStack_2c [2];
  undefined1 auStack_24 [12];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4cd38;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_40 = param_2;
  uStack_44 = param_1;
  uStack_3c = param_3;
  func_0x005d5720(1,uStack_14);
  iStack_8 = 0;
  func_0x008abeb0();
  dStack_5c = in_XMM0_Qa / 1000.0;
  piVar7 = aiStack_f4;
  pcVar8 = "DS Cache Key Size: ";
  piVar2 = (int *)func_0x0046b6e0();
  *(uint *)(*(int *)(*piVar2 + 4) + 0x14 + (int)piVar2) =
       *(uint *)(*(int *)(*piVar2 + 4) + 0x14 + (int)piVar2) & 0xffffefff | 0x2000;
  piStack_30 = piVar2;
  puVar3 = (undefined4 *)func_0x00e73e7c(auStack_24,1,0,piVar7,pcVar8);
  pcVar1 = (code *)*puVar3;
  _guard_check_icall(*(int *)(*piVar2 + 4) + (int)piVar2,puVar3[2],puVar3[3]);
  (*pcVar1)();
  uVar6 = 0;
  func_0x0046a2c0(piVar2);
  iStack_8._0_1_ = 1;
  if (cStack_50 != '\0') {
    piVar7 = *(int **)(*(int *)(*(int *)(*piVar2 + 4) + 0x30 + (int)piVar2) + 4);
    pcVar1 = *(code **)(*piVar7 + 4);
    piStack_34 = piVar7;
    _guard_check_icall();
    (*pcVar1)();
    iStack_8._0_1_ = 2;
    piStack_34 = (int *)func_0x00485b10();
    iStack_8._0_1_ = 1;
    if (piVar7 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar7 + 8);
      _guard_check_icall();
      puVar3 = (undefined4 *)(*pcVar1)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar1 = *(code **)*puVar3;
        _guard_check_icall();
        (*pcVar1)();
      }
    }
    piVar2 = piStack_30;
    iVar4 = *(int *)(*piStack_30 + 4) + (int)piStack_30;
    piStack_30 = (int *)CONCAT31(piStack_30._1_3_,
                                 *(undefined1 *)(*(int *)(*piStack_30 + 4) + 0x40 + (int)piStack_30)
                                );
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    pcVar1 = *(code **)(*piStack_34 + 0x14);
    _guard_check_icall(auStack_4c,auStack_4c[0],*(undefined4 *)(iVar4 + 0x38),iVar4,piStack_30,
                       dStack_5c);
    (*pcVar1)();
    uVar6 = 0;
    if ((char)auStack_4c[0] != '\0') {
      uVar6 = 4;
    }
  }
  uVar5 = 4;
  if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38) != 0) {
    uVar5 = 0;
  }
  func_0x00464710(uVar5 | *(uint *)(*(int *)(*piVar2 + 4) + 0xc + (int)piVar2) | uVar6,0);
  iStack_8._0_1_ = 0;
  func_0x0046a240();
  func_0x0046b6e0(piVar2,&DAT_00fc4178);
  func_0x0046a470(aiStack_2c);
  iStack_8._0_1_ = 3;
  func_0x00a0fd20(uStack_44,uStack_40,aiStack_2c,uStack_3c,param_5);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < uStack_18) {
    uVar6 = uStack_18 + 1;
    iVar4 = aiStack_2c[0];
    if (0xfff < uVar6) {
      iVar4 = *(int *)(aiStack_2c[0] + -4);
      uVar6 = uStack_18 + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  *(undefined ***)((int)aiStack_f4 + *(int *)(aiStack_f4[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_f4 + *(int *)(aiStack_f4[0] + 4) + -4) = *(int *)(aiStack_f4[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_f4 + *(int *)(aiStack_f4[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_f4 + *(int *)(aiStack_f4[0] + 4) + -4) = *(int *)(aiStack_f4[0] + 4) + -8;
  iStack_8 = 4;
  appuStack_a4[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_a4);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00a0e2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0e2d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0e300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0e330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)appuStack_2c;
  appuStack_2c[0] = std::_Func_impl_no_alloc<>::vftable;
  func_0x00a0f780(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00a0e360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int aiStack_c8 [20];
  undefined **appuStack_78 [18];
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  iStack_28 = 0xffffffff;
  puStack_2c = &DAT_00f4cc08;
  iStack_30 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_24;
  *unaff_FS_OFFSET = (int)&iStack_30;
  func_0x005d5720(1,uStack_8);
  iStack_28 = 0;
  func_0x0046b6e0(aiStack_c8,"Total Pipeline Cache Miss Time: ");
  func_0x0083cd60(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  func_0x0046b6e0(aiStack_c8,&DAT_00fc422c);
  func_0x0046a470(aiStack_20);
  iStack_28._0_1_ = 1;
  func_0x00a0fd20(param_1,param_2,aiStack_20,param_3,param_5);
  iStack_28 = (uint)iStack_28._1_3_ << 8;
  if (0xf < uStack_c) {
    uVar2 = uStack_c + 1;
    iVar3 = aiStack_20[0];
    if (0xfff < uVar2) {
      iVar3 = *(int *)(aiStack_20[0] + -4);
      uVar2 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar2);
  }
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -8;
  iStack_28 = 2;
  appuStack_78[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_78);
  *unaff_FS_OFFSET = iStack_30;
  FUN_008ab370();
  return;
}



void FUN_00a0e4e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int aiStack_c8 [20];
  undefined **appuStack_78 [18];
  int iStack_30;
  undefined *puStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  iStack_28 = 0xffffffff;
  puStack_2c = &DAT_00f4cc08;
  iStack_30 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_24;
  *unaff_FS_OFFSET = (int)&iStack_30;
  func_0x005d5720(1,uStack_8);
  iStack_28 = 0;
  func_0x0046b6e0(aiStack_c8,"Total Pipeline Cache Hit Time: ");
  func_0x0083cd60(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  func_0x0046b6e0(aiStack_c8,&DAT_00fc422c);
  func_0x0046a470(aiStack_20);
  iStack_28._0_1_ = 1;
  func_0x00a0fd20(param_1,param_2,aiStack_20,param_3,param_5);
  iStack_28 = (uint)iStack_28._1_3_ << 8;
  if (0xf < uStack_c) {
    uVar2 = uStack_c + 1;
    iVar3 = aiStack_20[0];
    if (0xfff < uVar2) {
      iVar3 = *(int *)(aiStack_20[0] + -4);
      uVar2 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar2);
  }
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_c8 + *(int *)(aiStack_c8[0] + 4) + -4) = *(int *)(aiStack_c8[0] + 4) + -8;
  iStack_28 = 2;
  appuStack_78[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_78);
  *unaff_FS_OFFSET = iStack_30;
  FUN_008ab370();
  return;
}



void FUN_00a0fec0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0fed0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0fee0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0fef0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff00(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff10(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff20(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff30(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff40(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff50(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff60(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff70(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff80(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00a0ff90(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



undefined4 __thiscall
FUN_00a0ffa0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0e6f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a0ffd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0e7f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10000(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0e8f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10030(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0e9f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10060(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0eaf0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10090(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0ebf0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a100c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = *param_4;
  func_0x00a0ecf0(param_2,*param_3,uVar1,*param_5,param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a100f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0eef0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10120(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0eff0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10150(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0f0f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10180(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0f1f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a101b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0f2f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a101e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0f3f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



undefined4 __thiscall
FUN_00a10210(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  func_0x00a0f4f0(param_2,*param_3,uVar1,*param_4,param_4[1],param_1);
  return uVar1;
}



TypeDescriptor * FUN_00a10240(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a10250(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a10260(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a10270(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a10280(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a10290(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a102a0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a102b0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a102c0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a102d0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a102e0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a102f0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a10300(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00a10310(void)

{
  return &<>::RTTI_Type_Descriptor;
}



undefined4 * __thiscall FUN_00a11650(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -5;
  if (param_1[1] != 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = sh::TIntermAggregateBase::vftable;
  *puVar1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(puVar1,0x24);
  }
  return puVar1;
}



undefined4 __thiscall FUN_00a11660(undefined4 param_1,byte param_2)

{
  func_0x00a111c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x8e0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a11690(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermAggregateBase::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a116c0(undefined4 *param_1,byte param_2)

{
  if (param_1[6] != 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  param_1[5] = sh::TIntermAggregateBase::vftable;
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x24);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a11710(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a11740(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = sh::TShHandleBase::vftable;
  func_0x00ad78e0(0,uVar1);
  func_0x00ad77a0();
  func_0x00ad7580();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __fastcall FUN_00a13780(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4d160;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar1);
  iVar2 = func_0x00ad7620(0x24);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00ae0520(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



uint FUN_00a156a0(uint *param_1)

{
  return *param_1 >> 1 & 0xffffff01 | param_1[1] << 0x1f;
}



int __fastcall FUN_00a15f50(int param_1)

{
  uint uVar1;
  
  func_0x007d9ca0((undefined4 *)(param_1 + 0x918),*(undefined4 *)(*(int *)(param_1 + 0x918) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x918),0x28);
  func_0x00993430();
  func_0x007d9ca0((undefined4 *)(param_1 + 0x908),*(undefined4 *)(*(int *)(param_1 + 0x908) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x908),0x28);
  func_0x00775520((undefined4 *)(param_1 + 0x8f8),*(undefined4 *)(*(int *)(param_1 + 0x8f8) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x8f8),0x2c);
  func_0x009246b0((undefined4 *)(param_1 + 0x8f0),*(undefined4 *)(*(int *)(param_1 + 0x8f0) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x8f0),0x2c);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x8e8) + 4);
  func_0x00775520((undefined4 *)(param_1 + 0x8e8));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x8e8),0x2c);
  func_0x00775520((undefined4 *)(param_1 + 0x8e0),*(undefined4 *)(*(int *)(param_1 + 0x8e0) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x8e0),0x2c);
  func_0x00a111c0();
  if ((uVar1 & 1) != 0) {
    func_0x008ab812(param_1,0x920);
  }
  return param_1;
}



undefined1 FUN_00a161f0(void)

{
  return 1;
}



void __thiscall FUN_00a16310(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f4d580;
  iStack_1c = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  iVar9 = func_0x00a13880(uVar8);
  if (*(int *)(iVar9 + 0x38) == 0) {
    uStack_234 = 1;
  }
  else {
    uStack_234 = *(undefined4 *)(iVar9 + 0x1c);
  }
  if (*(int *)(iVar9 + 0x34) == 0) {
    uStack_230 = 0;
  }
  else {
    uStack_230 = *(undefined4 *)(iVar9 + 0xf8);
  }
  cVar7 = func_0x00b35360(param_1,param_2);
  if ((((((cVar7 != '\0') &&
         (cVar7 = func_0x00b1c910(param_1,param_2,7,param_1 + 800), cVar7 != '\0')) &&
        (cVar7 = func_0x00b1d340(param_1,param_2,7,param_1 + 800), cVar7 != '\0')) &&
       (((cVar7 = func_0x00b39a40(param_1,param_2,param_1 + 800), cVar7 != '\0' &&
         (cVar7 = func_0x00b39140(param_1,param_2), cVar7 != '\0')) &&
        ((*(int *)(param_1 + 0x7e8) < 0x136 ||
         ((cVar7 = func_0x00b35640(param_1,param_2,param_1 + 800), cVar7 != '\0' &&
          (cVar7 = func_0x00b35a00(param_1,param_2,param_1 + 800), cVar7 != '\0')))))))) &&
      (((cVar7 = func_0x00b397b0(param_1,param_2,param_1 + 800), cVar7 != '\0' &&
        ((cVar7 = func_0x00b394e0(param_1,param_2), cVar7 != '\0' &&
         (cVar7 = func_0x00b35df0(param_1,param_2,param_1 + 800), cVar7 != '\0')))) &&
       ((((cVar7 = func_0x00a156c0(param_3), cVar7 != '\0' ||
          (cVar7 = func_0x00b15950(param_1,param_2,param_1 + 800,param_4), cVar7 != '\0')) &&
         (((*(int *)(param_1 + 0xc4) != 0x8b48 || (*(int *)(param_1 + 0xbc) != 0x8b31)) ||
          (cVar7 = func_0x00b37ed0(param_1,param_2,param_1 + 800), cVar7 != '\0')))) &&
        ((cVar7 = func_0x00b367c0(param_1,param_2), cVar7 != '\0' &&
         (cVar7 = func_0x00b3a130(param_1,param_2), cVar7 != '\0')))))))) &&
     ((((*param_3 & 0x80000) == 0 ||
       (cVar7 = func_0x00b369d0(param_1,param_2,param_1 + 800), cVar7 != '\0')) &&
      (((((*param_3 & 0x400000) == 0 ||
         (cVar7 = func_0x00b34eb0(param_1,param_2,param_1 + 800,*(undefined4 *)(param_1 + 0x7e8)),
         cVar7 != '\0')) &&
        (((*param_3 & 0x1000000) == 0 ||
         ((*(int *)(param_1 + 0xbc) != 0x8b31 ||
          (cVar7 = func_0x00b38e30(param_1,param_2), cVar7 != '\0')))))) &&
       ((*(int *)(param_1 + 0x7e8) < 0x136 ||
        ((cVar7 = func_0x00b38350(param_1,param_2,param_1 + 800), cVar7 != '\0' &&
         (cVar7 = func_0x00b379c0(param_1,param_2,param_1 + 800,*(undefined4 *)(param_1 + 0x7e8)),
         cVar7 != '\0')))))))))) {
    iVar9 = *(int *)(param_1 + 0x910);
    cVar7 = *(char *)((int)*(int **)(iVar9 + 4) + 0xd);
    piVar1 = *(int **)(iVar9 + 4);
    while (cVar7 == '\0') {
      func_0x009924e0(param_1 + 0x910,piVar1[2]);
      piVar13 = (int *)*piVar1;
      func_0x008ab812(piVar1,0x18);
      piVar1 = piVar13;
      cVar7 = *(char *)((int)piVar13 + 0xd);
    }
    *(int *)(iVar9 + 4) = iVar9;
    *(int *)iVar9 = iVar9;
    *(int *)(iVar9 + 8) = iVar9;
    *(undefined4 *)(param_1 + 0x914) = 0;
    func_0x007f3b10();
    if (((*(int *)(param_1 + 0x7e8) != 300) || ((param_3[1] & 0x4000) == 0)) ||
       (cVar7 = func_0x00b37020(param_2,param_1 + 0x910,param_1 + 0x918), cVar7 != '\0')) {
      uVar3 = *(undefined1 *)(param_1 + 0x86c);
      uVar2 = *(undefined8 *)(param_1 + 0x870);
      uVar12 = *(undefined4 *)(param_1 + 0x878);
      uVar4 = *(undefined4 *)(param_1 + 0xc4);
      uVar10 = func_0x00a138c0();
      uVar11 = func_0x00a13870();
      func_0x00b28c80(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0),
                      *(undefined4 *)(param_1 + 0x7e8),uVar11,uVar10,uVar4,uStack_234,uStack_230,
                      param_1 + 0x4c,param_3,uVar2,uVar12,param_1 + 800,param_4,param_1 + 0x910,
                      param_1 + 0x94,uVar3);
      uStack_14 = 0;
      func_0x00b2df40(param_2,param_1 + 0x834);
      uVar12 = func_0x00b2c330();
      func_0x00a15e10(uVar12);
      uVar12 = func_0x00b2c340();
      func_0x00a15e10(uVar12);
      piVar13 = (int *)func_0x00b2c350();
      piVar1 = (int *)(param_1 + 0x8f0);
      if (piVar1 != piVar13) {
        iVar9 = *piVar1;
        func_0x009246b0(piVar1,*(undefined4 *)(iVar9 + 4));
        *(int *)(iVar9 + 4) = iVar9;
        *(int *)iVar9 = iVar9;
        *(int *)(iVar9 + 8) = iVar9;
        piVar1 = (int *)(param_1 + 0x8f0);
        *(undefined4 *)(param_1 + 0x8f4) = 0;
        uVar12 = func_0x00a15970(*(undefined4 *)(*piVar13 + 4),*piVar1);
        *(undefined4 *)(*piVar1 + 4) = uVar12;
        *(int *)(param_1 + 0x8f4) = piVar13[1];
        iVar9 = *piVar1;
        piVar13 = *(int **)(iVar9 + 4);
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          cVar7 = *(char *)(*piVar13 + 0xd);
          piVar5 = (int *)*piVar13;
          while (cVar7 == '\0') {
            cVar7 = *(char *)(*piVar5 + 0xd);
            piVar13 = piVar5;
            piVar5 = (int *)*piVar5;
          }
          *(int **)*piVar1 = piVar13;
          iVar9 = *(int *)(*(int *)(*piVar1 + 4) + 8);
          cVar7 = *(char *)(iVar9 + 0xd);
          iVar6 = *(int *)(*piVar1 + 4);
          while (cVar7 == '\0') {
            cVar7 = *(char *)(*(int *)(iVar9 + 8) + 0xd);
            iVar6 = iVar9;
            iVar9 = *(int *)(iVar9 + 8);
          }
          *(int *)(*piVar1 + 8) = iVar6;
        }
        else {
          *(int *)iVar9 = iVar9;
          *(int *)(*piVar1 + 8) = *piVar1;
        }
      }
      uVar12 = func_0x00b2c360();
      func_0x00a15e10(uVar12);
      uVar12 = func_0x00b2c320();
      *(undefined4 *)(param_1 + 0x900) = uVar12;
      uVar12 = func_0x00b2c310();
      *(undefined4 *)(param_1 + 0x904) = uVar12;
      piVar13 = (int *)func_0x00b2c370();
      piVar1 = (int *)(param_1 + 0x908);
      if (piVar1 != piVar13) {
        iVar9 = *piVar1;
        func_0x007d9ca0(piVar1,*(undefined4 *)(iVar9 + 4));
        *(int *)(iVar9 + 4) = iVar9;
        *(int *)iVar9 = iVar9;
        *(int *)(iVar9 + 8) = iVar9;
        *(undefined4 *)(param_1 + 0x90c) = 0;
        uVar12 = func_0x00a15a60(*(undefined4 *)(*piVar13 + 4),*piVar1);
        *(undefined4 *)(*piVar1 + 4) = uVar12;
        *(int *)(param_1 + 0x90c) = piVar13[1];
        iVar9 = *piVar1;
        piVar13 = *(int **)(iVar9 + 4);
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          cVar7 = *(char *)(*piVar13 + 0xd);
          piVar5 = (int *)*piVar13;
          while (cVar7 == '\0') {
            cVar7 = *(char *)(*piVar5 + 0xd);
            piVar13 = piVar5;
            piVar5 = (int *)*piVar5;
          }
          *(int **)*piVar1 = piVar13;
          iVar9 = *(int *)(*(int *)(*piVar1 + 4) + 8);
          cVar7 = *(char *)(iVar9 + 0xd);
          iVar6 = *(int *)(*piVar1 + 4);
          while (cVar7 == '\0') {
            cVar7 = *(char *)(*(int *)(iVar9 + 8) + 0xd);
            iVar6 = iVar9;
            iVar9 = *(int *)(iVar9 + 8);
          }
          *(int *)(*piVar1 + 8) = iVar6;
          func_0x00b29510();
          goto LAB_00a16977;
        }
        *(int *)iVar9 = iVar9;
        *(int *)(*piVar1 + 8) = *piVar1;
      }
      func_0x00b29510();
    }
  }
LAB_00a16977:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00a189b0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::ShaderVariableVisitor::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a189e0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::BlockEncoderVisitor::vftable;
  func_0x00a18940();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a18a10(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::BlockEncoderVisitor::vftable;
  func_0x00a18940();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a18a40(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::ShaderVariableVisitor::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a18a70(undefined4 param_1,byte param_2)

{
  func_0x00a18940();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



void __thiscall
FUN_00a190b0(int param_1,undefined4 param_2,int *param_3,undefined1 param_4,uint param_5,
            uint param_6)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_3 == param_3[1]) {
    cVar3 = func_0x0093e360(param_2);
    if (cVar3 == '\0') {
      uVar4 = *(uint *)(param_1 + 4);
      uVar5 = func_0x0093ee80(param_2);
      iVar6 = uVar4 + uVar5;
      if (((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar4,uVar5) != 0) {
        iVar6 = -1;
      }
      *(int *)(param_1 + 4) = iVar6;
      return;
    }
    iVar6 = func_0x0093e6f0(param_2,param_4);
    if (param_6 < 0x80000000) {
      lVar1 = func_0x00e87d70(iVar6,iVar6 >> 0x1f,param_6,0);
      goto LAB_00a19117;
    }
  }
  else {
    uVar4 = func_0x0093ddd0(param_3);
    if (param_5 < 0x80000000) {
      lVar1 = (ulonglong)uVar4 * (ulonglong)param_5;
LAB_00a19117:
      iVar6 = (int)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) == 0) {
        bVar2 = true;
        goto LAB_00a1912c;
      }
    }
  }
  iVar6 = 0;
  bVar2 = false;
LAB_00a1912c:
  if ((bVar2) && (uVar4 = iVar6 + *(uint *)(param_1 + 4), *(uint *)(param_1 + 4) <= uVar4)) {
    bVar2 = true;
  }
  else {
    uVar4 = 0;
    bVar2 = false;
  }
  if (!bVar2) {
    uVar4 = 0xffffffff;
  }
  *(uint *)(param_1 + 4) = uVar4;
  return;
}



void __thiscall FUN_00a192e0(int param_1,undefined4 *param_2,undefined4 *param_3,byte *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  int *unaff_FS_OFFSET;
  bool bVar17;
  undefined4 *puStack_34;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f4d8d5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar11 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  cVar10 = func_0x0093e3b0(*param_2,uVar11);
  if (cVar10 == '\0') {
    piVar14 = *(int **)(param_1 + 0x3c);
    uStack_28 = 0;
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar1 = param_3[4];
    puVar2 = (undefined4 *)*piVar14;
    puStack_34 = (undefined4 *)puVar2[1];
    puStack_2c = puVar2;
    if (*(char *)((int)puStack_34 + 0xd) == '\0') {
      uVar11 = *(uint *)(param_4 + 0x10);
      puVar16 = puStack_34;
      do {
        puStack_34 = puVar16;
        pbVar12 = (byte *)(puStack_34 + 4);
        pbVar15 = param_4;
        if (0xf < *(uint *)(param_4 + 0x14)) {
          pbVar15 = *(byte **)param_4;
        }
        uVar3 = puStack_34[8];
        if (0xf < (uint)puStack_34[9]) {
          pbVar12 = *(byte **)pbVar12;
        }
        uVar13 = uVar3;
        if (uVar11 < uVar3) {
          uVar13 = uVar11;
        }
        while (uVar9 = uVar13 - 4, 3 < uVar13) {
          if (*(int *)pbVar12 != *(int *)pbVar15) goto LAB_00a193b6;
          pbVar12 = pbVar12 + 4;
          pbVar15 = pbVar15 + 4;
          uVar13 = uVar9;
        }
        if (uVar9 == 0xfffffffc) {
LAB_00a193ea:
          uVar13 = 0;
        }
        else {
LAB_00a193b6:
          bVar17 = *pbVar12 < *pbVar15;
          if ((*pbVar12 == *pbVar15) &&
             ((uVar9 == 0xfffffffd ||
              ((bVar17 = pbVar12[1] < pbVar15[1], pbVar12[1] == pbVar15[1] &&
               ((uVar9 == 0xfffffffe ||
                ((bVar17 = pbVar12[2] < pbVar15[2], pbVar12[2] == pbVar15[2] &&
                 ((uVar9 == 0xffffffff ||
                  (bVar17 = pbVar12[3] < pbVar15[3], pbVar12[3] == pbVar15[3]))))))))))))
          goto LAB_00a193ea;
          uVar13 = -(uint)bVar17 | 1;
        }
        if (uVar13 == 0) {
          if (uVar3 < uVar11) goto LAB_00a19443;
LAB_00a193f2:
          uStack_28 = 1;
          puVar16 = (undefined4 *)*puStack_34;
          puStack_2c = puStack_34;
        }
        else {
          if (-1 < (int)uVar13) goto LAB_00a193f2;
LAB_00a19443:
          puVar16 = (undefined4 *)puStack_34[2];
          uStack_28 = 0;
        }
      } while (*(char *)((int)puVar16 + 0xd) == '\0');
    }
    if ((*(char *)((int)puStack_2c + 0xd) != '\0') ||
       (cVar10 = func_0x0056edb0(param_4,puStack_2c + 4), cVar10 != '\0')) {
      if (piVar14[1] == 0x4444444) {
        func_0x0048d790();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_14 = 0;
      piVar14 = (int *)func_0x008ab47d(0x3c);
      uStack_14 = 1;
      func_0x00469da0(param_4);
      piVar14[0xb] = 0;
      piVar14[0xc] = 0;
      piVar14[0xd] = 0;
      piVar14[0xe] = 0;
      piVar14[10] = -1;
      piVar14[0xb] = -1;
      piVar14[0xc] = -1;
      *(undefined1 *)(piVar14 + 0xd) = 0;
      piVar14[0xe] = -1;
      *piVar14 = (int)puVar2;
      piVar14[1] = (int)puVar2;
      piVar14[2] = (int)puVar2;
      *(undefined2 *)(piVar14 + 3) = 0;
      puStack_2c = (undefined4 *)func_0x008b95c0(puStack_34,uStack_28,piVar14);
    }
    puStack_2c[10] = uVar5;
    puStack_2c[0xb] = uVar6;
    puStack_2c[0xc] = uVar7;
    puStack_2c[0xd] = uVar8;
    puStack_2c[0xe] = uVar1;
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00a19510(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x14);
  _guard_check_icall(param_2);
  uVar2 = (*pcVar1)();
  func_0x00a19190(uVar2);
  return;
}



void __thiscall FUN_00a19540(int param_1,int param_2)

{
  int *piVar1;
  int iStack_4;
  
  if ((*(int *)(param_2 + 0xb0) == -1) && (*(int *)(param_2 + 0x48) == *(int *)(param_2 + 0x4c))) {
    iStack_4 = param_1;
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
      func_0x0056eba0(*(int *)(param_1 + 8),param_2 + 8);
    }
    else {
      func_0x00469da0();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
    }
    if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) {
      func_0x0056eba0(*(int *)(param_1 + 0x14),param_2 + 0x20);
    }
    else {
      func_0x00469da0();
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
    }
  }
  if (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x3c)) {
    iStack_4 = 0;
  }
  else {
    iStack_4 = *(int *)(*(int *)(param_2 + 0x3c) + -4);
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != *(int **)(param_1 + 0x24)) {
    *piVar1 = iStack_4;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
    return;
  }
  func_0x006a1a20(piVar1,&iStack_4);
  return;
}



void __thiscall FUN_00a195e0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_2 + 0xb0) == -1)) {
    if (param_3 == 0) {
      if (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x3c)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x3c) + -4);
      }
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      uVar1 = func_0x009c42c0();
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      *(undefined1 *)(param_1 + 0x30) = 0;
      FUN_00a19650(param_2,0);
      return;
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  FUN_00a19650(param_2,param_3);
  return;
}



void __thiscall FUN_00a19650(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [164];
  char cStack_4c;
  uint auStack_48 [2];
  int *piStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  int *piStack_30;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4d928;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_3c = param_3;
  func_0x00a10440(auStack_100,uStack_14);
  uStack_8 = 0;
  piVar2 = (int *)func_0x0046b6e0(auStack_f0,&DAT_0119cad0);
  piStack_34 = (int *)0x0;
  piStack_40 = piVar2;
  func_0x0046a2c0(piVar2);
  uStack_8._0_1_ = 1;
  if (cStack_4c != '\0') {
    piStack_34 = *(int **)(*(int *)(*(int *)(*piVar2 + 4) + 0x30 + (int)piVar2) + 4);
    pcVar1 = *(code **)(*piStack_34 + 4);
    piStack_30 = piStack_34;
    _guard_check_icall();
    (*pcVar1)();
    uStack_8._0_1_ = 2;
    piStack_34 = (int *)func_0x00485b10(auStack_38);
    uStack_8._0_1_ = 1;
    if (piStack_30 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_30 + 8);
      _guard_check_icall();
      piStack_30 = (int *)(*pcVar1)();
      if (piStack_30 != (int *)0x0) {
        pcVar1 = *(code **)*piStack_30;
        _guard_check_icall(1);
        (*pcVar1)();
      }
    }
    iVar3 = (int)piStack_40 + *(int *)(*piStack_40 + 4);
    piStack_30 = (int *)CONCAT31(piStack_30._1_3_,*(undefined1 *)(iVar3 + 0x40));
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    pcVar1 = *(code **)(*piStack_34 + 0x20);
    _guard_check_icall(auStack_48,auStack_48[0],*(undefined4 *)(iVar3 + 0x38),iVar3,piStack_30,
                       uStack_3c);
    (*pcVar1)();
    piStack_34 = (int *)0x0;
    piVar2 = piStack_40;
    if ((char)auStack_48[0] != '\0') {
      piStack_34 = (int *)0x4;
    }
  }
  uStack_3c = 0;
  uVar5 = 4;
  if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38) != 0) {
    uVar5 = 0;
  }
  func_0x00464710(uVar5 | *(uint *)(*(int *)(*piVar2 + 4) + 0xc + (int)piVar2) | (uint)piStack_34,0)
  ;
  uStack_8._0_1_ = 0;
  func_0x0046a240();
  func_0x0046b6e0(piVar2,&DAT_0112e28c);
  func_0x00468740(auStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    func_0x0056eba0(*(int *)(param_1 + 8),auStack_2c);
  }
  else {
    func_0x00469da0(auStack_2c);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) {
    func_0x0056eba0(*(int *)(param_1 + 0x14),auStack_2c);
  }
  else {
    func_0x00469da0(auStack_2c);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
  }
  if (0xf < uStack_18) {
    uVar4 = uStack_18 + 1;
    uVar5 = auStack_2c[0];
    if (0xfff < uVar4) {
      uVar5 = *(uint *)(auStack_2c[0] - 4);
      uVar4 = uStack_18 + 0x24;
      if (0x1f < (auStack_2c[0] - uVar5) - 4) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(uVar5,uVar4);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  func_0x004673c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a198a0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    func_0x0056eba0(*(int *)(param_1 + 8),param_2 + 8);
  }
  else {
    func_0x00469da0();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    func_0x00469da0();
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
    return;
  }
  func_0x0056eba0(*(int *)(param_1 + 0x14),param_2 + 0x20);
  return;
}



void __thiscall FUN_00a19900(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4d975;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar3 = func_0x00a19f40(param_2,param_3,aiStack_2c[6]);
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) * iVar3;
  }
  aiStack_2c[4] = 1;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0x2e;
  puVar1 = *(undefined4 **)(param_1 + 8);
  uStack_8 = 0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xc)) {
    func_0x005aedd0(puVar1,aiStack_2c);
  }
  else {
    aiStack_2c[0] = 0;
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0xf00000001;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
  }
  uStack_8 = 0xffffffff;
  if (0xf < (uint)aiStack_2c[5]) {
    uVar4 = aiStack_2c[5] + 1;
    iVar3 = aiStack_2c[0];
    if (0xfff < uVar4) {
      iVar3 = *(int *)(aiStack_2c[0] + -4);
      uVar4 = aiStack_2c[5] + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar3) - 4U) goto LAB_00a19aa3;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  aiStack_2c[4] = 1;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0x2e;
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  uStack_8 = 1;
  if (puVar1 == *(undefined4 **)(param_1 + 0x18)) {
    func_0x005aedd0(puVar1,aiStack_2c);
  }
  else {
    aiStack_2c[0] = 0;
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0xf00000001;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
  }
  uStack_8 = 0xffffffff;
  if (0xf < (uint)aiStack_2c[5]) {
    uVar4 = aiStack_2c[5] + 1;
    iVar3 = aiStack_2c[0];
    if (0xfff < uVar4) {
      iVar3 = *(int *)(aiStack_2c[0] + -4);
      uVar4 = aiStack_2c[5] + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar3) - 4U) {
LAB_00a19aa3:
        uStack_8 = 0xffffffff;
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x34) + 4);
  _guard_check_icall(param_2);
  (*pcVar2)();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00a19ab0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f4d9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_2c[4] = 1;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0x2e;
  puVar1 = *(undefined4 **)(param_1 + 8);
  uStack_8 = 0;
  aiStack_2c[6] = uVar3;
  if (puVar1 == *(undefined4 **)(param_1 + 0xc)) {
    func_0x005aedd0(puVar1,aiStack_2c,uVar3);
  }
  else {
    aiStack_2c[0] = 0;
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0xf00000001;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
  }
  uStack_8 = 0xffffffff;
  if (0xf < (uint)aiStack_2c[5]) {
    uVar4 = aiStack_2c[5] + 1;
    iVar5 = aiStack_2c[0];
    if (0xfff < uVar4) {
      iVar5 = *(int *)(aiStack_2c[0] + -4);
      uVar4 = aiStack_2c[5] + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar5) - 4U) goto LAB_00a19c10;
    }
    func_0x008ab812(iVar5,uVar4);
  }
  aiStack_2c[4] = 1;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0x2e;
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  uStack_8 = 1;
  if (puVar1 == *(undefined4 **)(param_1 + 0x18)) {
    func_0x005aedd0(puVar1,aiStack_2c,uVar3);
  }
  else {
    aiStack_2c[0] = 0;
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0xf00000001;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
  }
  if (0xf < (uint)aiStack_2c[5]) {
    uVar3 = aiStack_2c[5] + 1;
    iVar5 = aiStack_2c[0];
    if (0xfff < uVar3) {
      iVar5 = *(int *)(aiStack_2c[0] + -4);
      uVar3 = aiStack_2c[5] + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar5) - 4U) {
LAB_00a19c10:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a19c20(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 0xb0) == -1) && (*(int *)(param_2 + 0x48) == *(int *)(param_2 + 0x4c))) {
    func_0x00a1a150();
    func_0x00a1a150();
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -4;
  return;
}



void __thiscall FUN_00a19c50(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_2 + 0xb0) == -1)) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)(param_1 + 0x30) = 1;
  }
  func_0x00a1a150();
  func_0x00a1a150();
  return;
}



void FUN_00a19c90(void)

{
  func_0x00a1a150();
  func_0x00a1a150();
  return;
}



void FUN_00a19cb0(void)

{
  func_0x00a1a150();
  func_0x00a1a150();
  return;
}



void __thiscall FUN_00a19cd0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  pcVar1 = *(code **)(**(int **)(param_1 + 0x34) + 8);
  _guard_check_icall(param_2);
  (*pcVar1)();
  func_0x00a1a150();
  func_0x00a1a150();
  return;
}



undefined4 FUN_00a19d10(void)

{
  return 4;
}



int FUN_00a19d20(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4d9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1[0x12] != param_1[0x13]) {
    ppuStack_18 = sh::_anon_50191DE7::BaseAlignmentVisitor::vftable;
    iStack_14 = 0;
    uStack_8 = 0;
    func_0x009cc800(param_1 + 0x12,0,&ppuStack_18);
    *unaff_FS_OFFSET = iStack_10;
    return iStack_14;
  }
  uVar2 = *param_1;
  if (*(char *)(param_1 + 0x21) == '\0') {
    uVar2 = func_0x0093eb10(uVar2,uVar1);
  }
  iVar3 = func_0x0093ec40(uVar2);
  if (iVar3 == 3) {
    iVar3 = 4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_00a19dd0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int unaff_EDI;
  int *unaff_retaddr;
  undefined4 *puStack_4;
  
  cVar2 = func_0x0093e360(param_2);
  if (cVar2 == '\0') {
    if (*param_3 == param_3[1]) {
      iVar3 = func_0x0093ee80();
      param_4 = param_2;
      if (iVar3 == 3) {
        iVar3 = 4;
      }
    }
    else {
      param_4 = 0;
      pcVar1 = *(code **)(*param_1 + 0x18);
      _guard_check_icall(param_2);
      iVar3 = (*pcVar1)();
      pcVar1 = *(code **)(*param_1 + 0x18);
      _guard_check_icall(param_2,0);
      unaff_EDI = (*pcVar1)();
    }
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x18);
    _guard_check_icall(param_2);
    iVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*param_1 + 0x18);
    _guard_check_icall(param_2,param_2);
    (*pcVar1)();
    if (_DAT_00000000 != _DAT_00000004) {
      iVar3 = func_0x0093e6f0(param_2,puStack_4);
      pcVar1 = *(code **)(*param_1 + 0x18);
      _guard_check_icall(param_2,puStack_4);
      iVar4 = (*pcVar1)();
      unaff_EDI = iVar4 * iVar3;
      iVar3 = unaff_EBP;
    }
  }
  func_0x00a19190(iVar3);
  *unaff_retaddr = unaff_EDI;
  *puStack_4 = param_4;
  return;
}



void FUN_00a19ef0(void)

{
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  
  *in_stack_00000010 = 0;
  *in_stack_00000014 = 0;
  return;
}



undefined4 FUN_00a1a110(void)

{
  return 4;
}



int FUN_00a1a120(undefined4 param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    param_1 = func_0x0093eb10(param_1);
  }
  iVar1 = func_0x0093ec40(param_1);
  if (iVar1 == 3) {
    iVar1 = 4;
  }
  return iVar1;
}



void __thiscall
FUN_00a1a1b0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f4da6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_2c = 0;
  puStack_28 = (undefined4 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  uStack_8 = 0;
  piStack_20 = param_1;
  if (param_2[0xe] != param_2[0xf]) {
    piStack_14 = (int *)func_0x009c42d0(0,uVar3);
    if (puStack_28 == puStack_24) {
      func_0x006a1a20(puStack_28,&piStack_14);
    }
    else {
      *puStack_28 = piStack_14;
      puStack_28 = puStack_28 + 1;
    }
  }
  piStack_14 = (int *)param_1[0xd];
  uVar1 = *param_2;
  pcVar2 = *(code **)(*piStack_14 + 0xc);
  _guard_check_icall(uVar1,&iStack_2c,param_3,&iStack_18,&iStack_1c);
  (*pcVar2)();
  iStack_40 = piStack_14[1] << 2;
  iStack_3c = iStack_18 * 4;
  iStack_38 = iStack_1c * 4;
  uStack_34 = (undefined1)param_3;
  pcVar2 = *(code **)(*piStack_14 + 0x10);
  _guard_check_icall(uVar1,&iStack_2c,param_3,iStack_18,iStack_1c);
  (*pcVar2)();
  if ((char)piStack_20[0xc] == '\0') {
    *(undefined1 *)(piStack_20 + 0xc) = 1;
    piStack_20[0xb] = piStack_20[0xb] * iStack_3c;
  }
  iStack_30 = piStack_20[0xb];
  pcVar2 = *(code **)(*piStack_20 + 0x34);
  _guard_check_icall(param_2,&iStack_40,param_4,param_5);
  (*pcVar2)();
  if (iStack_2c != 0) {
    uVar3 = (int)puStack_24 - iStack_2c & 0xfffffffc;
    iVar4 = iStack_2c;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iStack_2c + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iStack_2c - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00a1a330(int *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int aiStack_44 [5];
  uint uStack_30;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f462b5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_2 + 0xb0) == -1) {
    if (param_1[2] == param_1[3]) {
      func_0x0056eba0(param_1[2],param_2 + 8,uStack_14);
    }
    else {
      func_0x00469da0();
      param_1[2] = param_1[2] + 0x18;
    }
    if (param_1[5] == param_1[6]) {
      func_0x0056eba0(param_1[5],param_2 + 0x20);
    }
    else {
      func_0x00469da0();
      param_1[5] = param_1[5] + 0x18;
    }
  }
  func_0x00a18a90(aiStack_44,param_1 + 1);
  uStack_8 = 0;
  func_0x00a18a90(auStack_2c,param_1 + 4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (*(int *)(param_2 + 0xb0) == -1) {
    func_0x00a1a150();
    func_0x00a1a150();
  }
  pcVar1 = *(code **)(*param_1 + 0x2c);
  _guard_check_icall(param_2,aiStack_44,auStack_2c,param_1 + 7);
  (*pcVar1)();
  if (0xf < uStack_18) {
    uVar2 = uStack_18 + 1;
    uVar3 = auStack_2c[0];
    if (0xfff < uVar2) {
      uVar3 = *(uint *)(auStack_2c[0] - 4);
      uVar2 = uStack_18 + 0x24;
      if (0x1f < (auStack_2c[0] - uVar3) - 4) goto LAB_00a1a49b;
    }
    func_0x008ab812(uVar3,uVar2);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  if (0xf < uStack_30) {
    uVar3 = uStack_30 + 1;
    iVar4 = aiStack_44[0];
    if (0xfff < uVar3) {
      iVar4 = *(int *)(aiStack_44[0] + -4);
      uVar3 = uStack_30 + 0x24;
      if (0x1f < (aiStack_44[0] - iVar4) - 4U) {
LAB_00a1a49b:
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a1a4b0(int param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (param_3 == '\0') {
    uVar1 = func_0x0093eb10(uVar1);
  }
  uVar2 = func_0x0093ec40(uVar1);
  if (uVar2 == 3) {
    uVar2 = 4;
  }
  uVar3 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) < uVar2) {
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 4) = uVar3;
  return;
}



void __thiscall FUN_00a1a4f0(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int aiStack_44 [5];
  uint uStack_30;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f462b5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_2 + 0xb0) == -1) {
    if (param_1[2] == param_1[3]) {
      func_0x0056eba0(param_1[2],param_2 + 8,uStack_14);
    }
    else {
      func_0x00469da0();
      param_1[2] = param_1[2] + 0x18;
    }
    if (param_1[5] == param_1[6]) {
      func_0x0056eba0(param_1[5],param_2 + 0x20);
    }
    else {
      func_0x00469da0();
      param_1[5] = param_1[5] + 0x18;
    }
  }
  func_0x00a18a90(aiStack_44,param_1 + 1);
  uStack_8 = 0;
  func_0x00a18a90(auStack_2c,param_1 + 4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (*(int *)(param_2 + 0xb0) == -1) {
    func_0x00a1a150();
    func_0x00a1a150();
  }
  pcVar1 = *(code **)(*param_1 + 0x30);
  _guard_check_icall(param_2,param_3,aiStack_44,auStack_2c,param_1 + 7);
  (*pcVar1)();
  if (0xf < uStack_18) {
    uVar2 = uStack_18 + 1;
    uVar3 = auStack_2c[0];
    if (0xfff < uVar2) {
      uVar3 = *(uint *)(auStack_2c[0] - 4);
      uVar2 = uStack_18 + 0x24;
      if (0x1f < (auStack_2c[0] - uVar3) - 4) goto LAB_00a1a65e;
    }
    func_0x008ab812(uVar3,uVar2);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  if (0xf < uStack_30) {
    uVar3 = uStack_30 + 1;
    iVar4 = aiStack_44[0];
    if (0xfff < uVar3) {
      iVar4 = *(int *)(aiStack_44[0] + -4);
      uVar3 = uStack_30 + 0x24;
      if (0x1f < (aiStack_44[0] - iVar4) - 4U) {
LAB_00a1a65e:
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * __fastcall FUN_00a1cf20(int *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = func_0x008ab47d(0x18);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  *param_1 = iVar1;
  return param_1;
}



void __fastcall FUN_00a1df70(undefined4 param_1)

{
  func_0x00a15b30(param_1);
  return;
}



void __fastcall FUN_00a1e570(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 != 0) {
    func_0x00a1a9d0(*param_1,param_1[1],param_1);
    iVar1 = *param_1;
    uVar4 = param_1[2] - iVar1 & 0xffffffe0;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void __fastcall FUN_00a1eeb0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 8);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  param_1[3] = iVar2;
  return;
}



int __thiscall FUN_00a1eed0(int param_1,byte param_2)

{
  func_0x00a1e710();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -4,0x44);
  }
  return param_1 + -4;
}



int __thiscall FUN_00a1eee0(int param_1,byte param_2)

{
  func_0x00a1e710();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -4,0x48);
  }
  return param_1 + -4;
}



int __thiscall FUN_00a1eef0(int param_1,byte param_2)

{
  func_0x00952cf0();
  func_0x00a1e710();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -4,0x50);
  }
  return param_1 + -4;
}



undefined4 * __thiscall FUN_00a1ef00(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1ef30(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1ef60(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1ef90(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1efc0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1eff0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *param_1 = rx::LinkEvent::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1f090(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::CustomBlockLayoutEncoderFactory::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a1f0c0(undefined4 param_1,byte param_2)

{
  func_0x00a1e710();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a1f0e0(undefined4 param_1,byte param_2)

{
  func_0x00a1e710();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1f100(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 8,8,3,FUN_00468340,uVar5);
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *param_1 = rx::LinkEvent::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a1f230(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::LinkEvent::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1f260(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::LinkEvent::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1f290(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *param_1 = rx::LinkEvent::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a1f330(undefined4 param_1,byte param_2)

{
  func_0x00952cf0();
  func_0x00a1e710();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a1f360(undefined4 param_1,byte param_2)

{
  func_0x00a1e820();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x530);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a1f390(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ProgramImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a1f3c0(undefined4 param_1,byte param_2)

{
  func_0x00a18930();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



void __thiscall FUN_00a21160(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_20 [8];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e254;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x009cce50(auStack_20,param_4,uVar1);
  if (*(char *)(iStack_18 + 0xd) == '\0') {
    piVar3 = (int *)(iStack_18 + 0x10);
    if (0xf < *(uint *)(iStack_18 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    puVar5 = param_4;
    if (0xf < (uint)param_4[5]) {
      puVar5 = (undefined4 *)*param_4;
    }
    iVar2 = func_0x004a6430(puVar5,param_4[4],piVar3,*(undefined4 *)(iStack_18 + 0x20));
    if ((-1 < iVar2) && (iStack_18 != **(int **)(param_1 + 0x40))) {
      iVar2 = *(int *)(iStack_18 + 0x28);
      goto LAB_00a21223;
    }
  }
  iStack_14 = func_0x008ab47d(0x70);
  uStack_8 = 0;
  if (iStack_14 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_0x00a1cfc0(*param_2,*(undefined1 *)(param_1 + 0x3d),param_4,param_2 + 0xe,1);
  }
  uStack_8 = 0xffffffff;
  piVar3 = (int *)func_0x00a1edb0(param_4);
  *piVar3 = iVar2;
LAB_00a21223:
  uVar4 = func_0x00a18b50(param_3);
  *(undefined4 *)(iVar2 + 0x60) = uVar4;
  uVar4 = func_0x00a18b40(param_3);
  *(undefined4 *)(iVar2 + 0x44 + (uint)*(byte *)(param_1 + 0x3c) * 4) = uVar4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00a22530(int param_1,undefined4 param_2,int param_3,void *param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_3 * 0xc);
  iVar5 = piVar1[1];
  iVar6 = iVar5 * 0xe8 + *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xa4) + 0x3c4);
  iVar7 = *piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 0x408) + iVar5 * 4);
  if (*(char *)(*piVar1 + 0x30) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*piVar1 + 0x28) * iVar7;
    }
    iVar5 = piVar1[0x19];
    if (iVar5 == piVar1[0x1a]) {
      uVar4 = 0;
      do {
        iVar5 = piVar1[uVar4 + 10];
        if (iVar5 != 0) break;
        bVar2 = (char)uVar4 + 1;
        uVar4 = (uint)bVar2;
      } while (bVar2 != 6);
    }
    _Src = (void *)(iVar7 + iVar5);
  }
  else {
    _Src = (void *)(piVar1[0x19] + iVar7 * 4);
  }
  cVar3 = func_0x0093e360(*(undefined4 *)(iVar6 + 8));
  if (cVar3 != '\0') {
    func_0x0095cc70(*(undefined4 *)(iVar6 + 8),param_4,_Src,1);
    return;
  }
  memcpy(param_4,_Src,*(size_t *)(*(int *)(iVar6 + 0xbc) + 0x2c));
  return;
}



void __thiscall FUN_00a225f0(int param_1,undefined4 param_2,int param_3,void *param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_3 * 0xc);
  iVar5 = piVar1[1];
  iVar6 = iVar5 * 0xe8 + *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xa4) + 0x3c4);
  iVar7 = *piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 0x408) + iVar5 * 4);
  if (*(char *)(*piVar1 + 0x30) == '\0') {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*piVar1 + 0x28) * iVar7;
    }
    iVar5 = piVar1[0x19];
    if (iVar5 == piVar1[0x1a]) {
      uVar4 = 0;
      do {
        iVar5 = piVar1[uVar4 + 10];
        if (iVar5 != 0) break;
        bVar2 = (char)uVar4 + 1;
        uVar4 = (uint)bVar2;
      } while (bVar2 != 6);
    }
    _Src = (void *)(iVar7 + iVar5);
  }
  else {
    _Src = (void *)(piVar1[0x19] + iVar7 * 4);
  }
  cVar3 = func_0x0093e360(*(undefined4 *)(iVar6 + 8));
  if (cVar3 != '\0') {
    _guard_check_icall(*(undefined4 *)(iVar6 + 8),param_4,_Src,1);
    return;
  }
  memcpy(param_4,_Src,*(size_t *)(*(int *)(iVar6 + 0xbc) + 0x2c));
  return;
}



void __thiscall FUN_00a229d0(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x14) = param_2;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  func_0x0046a660(param_3,(int)pcVar2 - (int)(param_3 + 1));
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(char **)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  return;
}



bool __fastcall FUN_00a234f0(int param_1)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x10) + 8);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  return cVar2 == '\0';
}



undefined4 __fastcall FUN_00a23510(int param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x20);
  while( true ) {
    if (puVar3 == (undefined4 *)(param_1 + 0x38)) {
      return 0;
    }
    pcVar1 = *(code **)(*(int *)*puVar3 + 8);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') break;
    puVar3 = puVar3 + 2;
  }
  return 1;
}



bool __fastcall FUN_00a23550(int param_1)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 8);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  return cVar2 == '\0';
}



// WARNING: Type propagation algorithm not settling

void __thiscall
FUN_00a23580(int param_1,undefined **param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *******pppppppuVar13;
  char *pcVar14;
  undefined **ppuVar15;
  int iVar16;
  undefined ***pppuVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int *unaff_FS_OFFSET;
  undefined **appuStack_9e0 [14];
  int iStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined **appuStack_990 [18];
  int aiStack_948 [4];
  undefined8 uStack_938;
  uint uStack_930;
  undefined4 *puStack_92c;
  undefined4 uStack_928;
  char *pcStack_924;
  char *pcStack_920;
  undefined **ppuStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined ***pppuStack_910;
  undefined **ppuStack_90c;
  undefined **ppuStack_908;
  int iStack_904;
  undefined **ppuStack_900;
  undefined1 *puStack_8fc;
  int iStack_8f8;
  undefined ***pppuStack_8f4;
  undefined ***pppuStack_8f0;
  int *piStack_8ec;
  int iStack_8e8;
  undefined **ppuStack_8e4;
  undefined ***pppuStack_8e0;
  int iStack_8dc;
  undefined1 auStack_8d8 [2160];
  undefined4 uStack_68;
  uint auStack_64 [4];
  undefined4 uStack_54;
  uint uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 *******apppppppuStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e5fd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  ppuStack_8e4 = param_2;
  ppuStack_91c = param_2;
  iStack_8dc = param_3;
  uStack_914 = param_4;
  uStack_918 = param_5;
  uStack_930 = 0;
  puStack_8fc = (undefined1 *)0x0;
  iStack_8e8 = param_1;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de40c) &&
     (func_0x008ab40d(&DAT_013de40c,uStack_14), DAT_013de40c == -1)) {
    uStack_8 = 0;
    uVar7 = func_0x0093d430("gpu.angle");
    DAT_013de408 = (char *)func_0x009b9170(uVar7);
    func_0x008ab3bc(&DAT_013de40c);
  }
  pcVar14 = DAT_013de408;
  puStack_92c = (undefined4 *)0x0;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  if (*DAT_013de408 != '\0') {
    uVar7 = func_0x0093d430();
    func_0x009b90e0(uVar7,0x42,pcVar14,"ProgramD3D::link",0,0,0,0,0,0,0);
    pcVar14 = DAT_013de408;
    uStack_928 = func_0x0093d430();
    puStack_92c = &uStack_928;
    pcStack_924 = pcVar14;
    pcStack_920 = "ProgramD3D::link";
  }
  iStack_8f8 = iStack_8dc + 8;
  func_0x00a26ca0();
  iVar8 = func_0x009817b0(5);
  if (iVar8 == 0) {
    ppuStack_908 = (undefined **)&DAT_00fc5681;
    uStack_938 = 0;
    aiStack_948[0] = 0;
    aiStack_948[1] = 0;
    aiStack_948[2] = 0;
    aiStack_948[3] = 0;
    ppuStack_90c = (undefined **)&DAT_00fc567c;
    do {
      ppuStack_900 = (undefined **)CONCAT31(ppuStack_900._1_3_,*(undefined1 *)ppuStack_90c);
      ppuVar15 = ppuStack_900;
      ppuStack_8e4 = (undefined **)func_0x009817b0(ppuStack_900);
      if (ppuStack_8e4 != (undefined **)0x0) {
        iVar10 = func_0x009817b0(ppuVar15);
        iVar8 = iStack_8f8;
        pppuVar17 = (undefined ***)((uint)ppuStack_900 & 0xff);
        pppuStack_910 = pppuVar17;
        aiStack_948[(int)pppuVar17] = *(int *)(iVar10 + 0x104);
        pppuVar1 = *(undefined ****)(iVar8 + 0x178 + (int)pppuVar17 * 4);
        iStack_904 = (int)pppuVar17 * 0xc;
        piStack_8ec = (int *)(iStack_904 + 0x158 + param_1);
        pppuStack_8e0 = (undefined ***)piStack_8ec[1];
        pppuStack_8f4 = (undefined ***)*piStack_8ec;
        pppuStack_8f0 = (undefined ***)(((int)pppuStack_8e0 - (int)pppuStack_8f4) / 0xc);
        if (pppuStack_8f0 <= pppuVar1) {
          if (pppuVar1 <= pppuStack_8f0) goto LAB_00a239f3;
          pppuVar17 = (undefined ***)((piStack_8ec[2] - (int)pppuStack_8f4) / 0xc);
          if (pppuVar1 <= pppuVar17) {
            pppuStack_8f4 =
                 (undefined ***)
                 func_0x00a1c030(pppuStack_8e0,(int)pppuVar1 - (int)pppuStack_8f0,piStack_8ec);
            goto LAB_00a239ea;
          }
          if (pppuVar1 < (undefined ***)0x15555556) {
            if ((undefined ***)(0x15555555 - ((uint)pppuVar17 >> 1)) < pppuVar17) {
              pppuStack_8f4 = (undefined ***)0x15555555;
            }
            else {
              pppuStack_8f4 = (undefined ***)(((uint)pppuVar17 >> 1) + (int)pppuVar17);
              if (pppuStack_8f4 < pppuVar1) {
                pppuStack_8f4 = pppuVar1;
              }
            }
            pppuStack_8e0 = pppuStack_8f4;
            pppuStack_8e0 = (undefined ***)func_0x009714c0(piStack_8ec,&pppuStack_8e0);
            iVar8 = (int)pppuVar1 - (int)pppuStack_8f0;
            if (iVar8 != 0) {
              pppuVar17 = pppuStack_8e0 + (int)pppuStack_8f0 * 3 + 2;
              do {
                *(undefined1 *)(pppuVar17 + -2) = 0;
                pppuVar17[-1] = (undefined **)0x0;
                *(undefined1 *)pppuVar17 = 0;
                iVar8 = iVar8 + -1;
                pppuVar17 = pppuVar17 + 3;
              } while (iVar8 != 0);
            }
            func_0x008ab0e6(pppuStack_8e0,*piStack_8ec,piStack_8ec[1] - *piStack_8ec);
            func_0x00975300(pppuStack_8e0,pppuVar1,pppuStack_8f4);
            goto LAB_00a239f3;
          }
          func_0x0046e700();
LAB_00a2464d:
          func_0x0046e700();
          uVar6 = (undefined1)uStack_8;
          goto LAB_00a24652;
        }
        pppuStack_8f4 = pppuStack_8f4 + (int)pppuVar1 * 3;
LAB_00a239ea:
        piStack_8ec[1] = (int)pppuStack_8f4;
LAB_00a239f3:
        piVar21 = (int *)(param_1 + iStack_904 + 0x1d4);
        pppuVar1 = *(undefined ****)(iStack_8f8 + 0x2b4);
        iVar8 = *piVar21;
        pppuStack_8f4 = (undefined ***)(piVar21[1] - iVar8 >> 3);
        if (pppuVar1 < pppuStack_8f4) {
          iVar8 = iVar8 + (int)pppuVar1 * 8;
LAB_00a23aee:
          piVar21[1] = iVar8;
        }
        else if (pppuStack_8f4 < pppuVar1) {
          pppuVar17 = (undefined ***)(piVar21[2] - iVar8 >> 3);
          if (pppuVar1 <= pppuVar17) {
            iVar8 = func_0x00a1bf90(piVar21[1],(int)pppuVar1 - (int)pppuStack_8f4,piVar21);
            goto LAB_00a23aee;
          }
          if (&DAT_1fffffff < pppuVar1) goto LAB_00a2464d;
          if ((undefined ***)(0x1fffffff - ((uint)pppuVar17 >> 1)) < pppuVar17) {
            pppuStack_8f0 = (undefined ***)&DAT_1fffffff;
          }
          else {
            pppuStack_8f0 = (undefined ***)(((uint)pppuVar17 >> 1) + (int)pppuVar17);
            if (pppuStack_8f0 < pppuVar1) {
              pppuStack_8f0 = pppuVar1;
            }
          }
          pppuStack_8e0 = pppuStack_8f0;
          pppuStack_8e0 = (undefined ***)func_0x009cc840(piVar21,&pppuStack_8e0);
          pppuVar17 = pppuStack_8e0 + (int)pppuStack_8f4 * 2;
          for (iVar8 = (int)pppuVar1 - (int)pppuStack_8f4; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)pppuVar17 = 0;
            pppuVar17[1] = (undefined **)0x0;
            pppuVar17 = pppuVar17 + 2;
          }
          func_0x008ab0e6(pppuStack_8e0,*piVar21,piVar21[1] - *piVar21);
          func_0x00a1fbe0(pppuStack_8e0,pppuVar1,pppuStack_8f0);
        }
        piVar21 = (int *)(iStack_8e8 + 0x21c + iStack_904);
        pppuVar1 = *(undefined ****)(iStack_8f8 + 0x2b4);
        iVar8 = *piVar21;
        pppuStack_8f4 = (undefined ***)(piVar21[1] - iVar8 >> 3);
        if (pppuVar1 < pppuStack_8f4) {
          iVar8 = iVar8 + (int)pppuVar1 * 8;
LAB_00a23bee:
          piVar21[1] = iVar8;
        }
        else if (pppuStack_8f4 < pppuVar1) {
          pppuVar17 = (undefined ***)(piVar21[2] - iVar8 >> 3);
          if (pppuVar1 <= pppuVar17) {
            iVar8 = func_0x00a1bf90(piVar21[1],(int)pppuVar1 - (int)pppuStack_8f4,piVar21);
            goto LAB_00a23bee;
          }
          if (&DAT_1fffffff < pppuVar1) goto LAB_00a2464d;
          if ((undefined ***)(0x1fffffff - ((uint)pppuVar17 >> 1)) < pppuVar17) {
            pppuStack_8f0 = (undefined ***)&DAT_1fffffff;
          }
          else {
            pppuStack_8f0 = (undefined ***)(((uint)pppuVar17 >> 1) + (int)pppuVar17);
            if (pppuStack_8f0 < pppuVar1) {
              pppuStack_8f0 = pppuVar1;
            }
          }
          pppuStack_8e0 = pppuStack_8f0;
          pppuStack_8e0 = (undefined ***)func_0x009cc840(piVar21,&pppuStack_8e0);
          pppuVar17 = pppuStack_8e0 + (int)pppuStack_8f4 * 2;
          for (iVar8 = (int)pppuVar1 - (int)pppuStack_8f4; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)pppuVar17 = 0;
            pppuVar17[1] = (undefined **)0x0;
            pppuVar17 = pppuVar17 + 2;
          }
          func_0x008ab0e6(pppuStack_8e0,*piVar21,piVar21[1] - *piVar21);
          func_0x00a1fbe0(pppuStack_8e0,pppuVar1,pppuStack_8f0);
        }
        param_1 = iStack_8e8;
        pppuVar1 = pppuStack_910;
        func_0x00b3c2e0(iStack_8e8 + (int)pppuStack_910 * 3 + 0x100);
        *(byte *)(param_1 + 0x524) =
             *(byte *)(param_1 + 0x524) | (byte)(1 << ((uint)pppuVar1 & 0x1f));
        pppuStack_910 = (undefined ***)func_0x00b3c5c0();
        if (pppuStack_910[1] != (undefined **)0x0) {
          appuStack_9e0[0] = (undefined **)&DAT_01141e20;
          func_0x0046a560();
          uStack_930 = (uint)puStack_8fc | 4;
          uStack_8 = CONCAT31(uStack_8._1_3_,4);
          puStack_8fc = (undefined1 *)uStack_930;
          *(undefined ***)((int)appuStack_9e0 + (int)appuStack_9e0[0][1]) =
               std::basic_ostream<>::vftable;
          *(undefined **)(&stack0xfffff61c + (int)appuStack_9e0[0][1]) = appuStack_9e0[0][1] + -8;
          func_0x0046b070(appuStack_9e0 + 1,0);
          uStack_8 = 6;
          *(undefined ***)((int)appuStack_9e0 + (int)appuStack_9e0[0][1]) =
               std::basic_ostringstream<>::vftable;
          *(undefined **)(&stack0xfffff61c + (int)appuStack_9e0[0][1]) = appuStack_9e0[0][1] + -0x50
          ;
          appuStack_9e0[1] = std::basic_streambuf<>::vftable;
          appuStack_9e0[2] = (undefined **)0x0;
          appuStack_9e0[3] = (undefined **)0x0;
          appuStack_9e0[4] = (undefined **)0x0;
          appuStack_9e0[5] = (undefined **)0x0;
          appuStack_9e0[6] = (undefined **)0x0;
          appuStack_9e0[7] = (undefined **)0x0;
          appuStack_9e0[8] = (undefined **)0x0;
          appuStack_9e0[9] = (undefined **)0x0;
          appuStack_9e0[10] = (undefined **)0x0;
          appuStack_9e0[0xb] = (undefined **)0x0;
          appuStack_9e0[0xc] = (undefined **)0x0;
          appuStack_9e0[0xd] = (undefined **)0x0;
          iVar8 = func_0x008ab47d(8);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            uStack_8 = CONCAT31(uStack_8._1_3_,7);
            uVar7 = func_0x00e70415(1);
            *(undefined4 *)(iVar8 + 4) = uVar7;
          }
          iStack_9a8 = iVar8;
          func_0x0046adc0();
          appuStack_9e0[1] = std::basic_stringbuf<>::vftable;
          uStack_9a4 = 0;
          uStack_9a0 = 4;
          uStack_8 = CONCAT31(uStack_8._1_3_,8);
          uVar7 = func_0x0046b6e0(appuStack_9e0,
                                  "You could get a better shader compiling performance if you re-write"
                                  ," the uniform block(s)\n[ ");
          func_0x0046b6e0(uVar7);
          piVar21 = (int *)**pppuStack_910;
          cVar5 = *(char *)((int)piVar21 + 0xd);
          while (cVar5 == '\0') {
            piVar11 = piVar21 + 4;
            if (0xf < (uint)piVar21[9]) {
              piVar11 = (int *)*piVar11;
            }
            uVar7 = func_0x0046cb10(appuStack_9e0,piVar11,piVar21[8]);
            func_0x0046b6e0(uVar7,&DAT_0113c2f0);
            piVar11 = (int *)piVar21[2];
            if (*(char *)((int)piVar11 + 0xd) == '\0') {
              cVar5 = *(char *)(*piVar11 + 0xd);
              piVar21 = piVar11;
              piVar11 = (int *)*piVar11;
              while (cVar5 == '\0') {
                cVar5 = *(char *)(*piVar11 + 0xd);
                piVar21 = piVar11;
                piVar11 = (int *)*piVar11;
              }
            }
            else {
              cVar5 = *(char *)(piVar21[1] + 0xd);
              piVar4 = (int *)piVar21[1];
              piVar11 = piVar21;
              while ((piVar21 = piVar4, cVar5 == '\0' && (piVar11 == (int *)piVar21[2]))) {
                cVar5 = *(char *)(piVar21[1] + 0xd);
                piVar4 = (int *)piVar21[1];
                piVar11 = piVar21;
              }
            }
            cVar5 = *(char *)((int)piVar21 + 0xd);
          }
          uVar7 = func_0x0046b6e0(appuStack_9e0,"]\nin the ");
          uVar12 = func_0x0096cbb0(ppuStack_900);
          uVar7 = func_0x0046b6e0(uVar7,uVar12," shader.\n");
          func_0x0046b6e0(uVar7);
          func_0x0046b6e0(appuStack_9e0,
                          "You could get more details from https://chromium.googlesource.com/angle/angle/+/refs/heads/main/src/libANGLE/renderer/d3d/d3d11/UniformBlockToStructuredBufferTranslation.md\n"
                         );
          func_0x0046a470(apppppppuStack_2c);
          puStack_8fc = (undefined1 *)((uint)puStack_8fc | 2);
          pppppppuVar13 = apppppppuStack_2c;
          if (0xf < uStack_18) {
            pppppppuVar13 = apppppppuStack_2c[0];
          }
          uStack_8._0_1_ = 9;
          func_0x00921dd0(0x9147,pppppppuVar13,&DAT_013de410);
          uStack_8._0_1_ = 8;
          uVar6 = (undefined1)uStack_8;
          uStack_8._0_1_ = 8;
          if (0xf < uStack_18) {
            uVar18 = uStack_18 + 1;
            pppppppuVar13 = apppppppuStack_2c[0];
            if (0xfff < uVar18) {
              pppppppuVar13 = (undefined4 *******)apppppppuStack_2c[0][-1];
              uVar18 = uStack_18 + 0x24;
              if (0x1f < (uint)((int)apppppppuStack_2c[0] + (-4 - (int)pppppppuVar13)))
              goto LAB_00a24652;
            }
            func_0x008ab812(pppppppuVar13,uVar18);
          }
          *(undefined ***)((int)appuStack_9e0 + (int)appuStack_9e0[0][1]) =
               std::basic_ostringstream<>::vftable;
          *(undefined **)(&stack0xfffff61c + (int)appuStack_9e0[0][1]) = appuStack_9e0[0][1] + -0x50
          ;
          func_0x00469040();
          *(undefined ***)((int)appuStack_9e0 + (int)appuStack_9e0[0][1]) =
               std::basic_ostream<>::vftable;
          *(undefined **)(&stack0xfffff61c + (int)appuStack_9e0[0][1]) = appuStack_9e0[0][1] + -8;
          uStack_8._0_1_ = 10;
          appuStack_990[0] = std::ios_base::vftable;
          func_0x00e706cb(appuStack_990);
          uStack_8._0_1_ = 1;
        }
        puVar9 = (undefined4 *)func_0x0096f260(iStack_8dc);
        ppuStack_8e4 = (undefined **)puVar9[1];
        ppuVar15 = (undefined **)*puVar9;
        if (ppuVar15 != ppuStack_8e4) {
          do {
            cVar5 = func_0x0093e2e0(*ppuVar15);
            if ((cVar5 != '\0') && (cVar5 = func_0x0093e290(*ppuVar15), cVar5 != '\0')) {
              param_1 = param_1 + iStack_904;
              if (*(int *)(param_1 + 0x4a8) == *(int *)(param_1 + 0x4ac)) {
                func_0x0096a6e0(*(int *)(param_1 + 0x4a8),ppuVar15);
                param_1 = iStack_8e8;
              }
              else {
                func_0x009c34c0();
                *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + 0xb4;
                param_1 = iStack_8e8;
              }
            }
            ppuVar15 = ppuVar15 + 0x2d;
          } while (ppuVar15 != ppuStack_8e4);
        }
      }
      ppuStack_90c = (undefined **)((int)ppuStack_90c + 1);
    } while (ppuStack_90c != (undefined **)&DAT_00fc5681);
    pcVar14 = (char *)func_0x009dbf40();
    if (((*pcVar14 == '\0') || ((int)uStack_938 == 0)) || (*(char *)((int)uStack_938 + 0xf) == '\0')
       ) {
      piStack_8ec = (int *)func_0x009cbf90(0);
      ppuStack_8e4 = (undefined **)FUN_005db210();
      piVar21 = *(int **)(param_1 + 8);
      pcVar2 = *(code **)(*piVar21 + 0x54);
      _guard_check_icall();
      uStack_68 = (*pcVar2)();
      pcVar2 = *(code **)(*piVar21 + 0x38);
      _guard_check_icall(auStack_64);
      (*pcVar2)();
      uStack_8._0_1_ = 0xc;
      iVar8 = func_0x009dbe40();
      uStack_4c = *(undefined1 *)(iVar8 + 0x60);
      uStack_4b = (undefined1)piVar21[2];
      pcVar2 = *(code **)(*piVar21 + 0x104);
      _guard_check_icall();
      uStack_4a = (*pcVar2)();
      piVar21 = piStack_8ec;
      uStack_48 = (undefined2)aiStack_948[0];
      uStack_46 = (undefined2)((uint)aiStack_948[0] >> 0x10);
      uStack_44 = aiStack_948[1];
      uStack_40 = aiStack_948[2];
      uStack_3c = aiStack_948[3];
      ppuStack_30 = ppuStack_8e4;
      iStack_38 = (int)uStack_938;
      uStack_34 = uStack_938._4_4_;
      uStack_8._0_1_ = 0xd;
      func_0x00b3ce40(&uStack_68,piStack_8ec);
      iVar8 = iStack_8e8;
      uStack_8._0_1_ = 0xe;
      func_0x00b3f680(iStack_8dc,iStack_8dc + 0x28,*(undefined4 *)(iStack_8e8 + 4),&uStack_68,
                      piVar21,auStack_8d8,iStack_8e8 + 0x70);
      if ((aiStack_948[0] == 0) || (*(char *)(aiStack_948[0] + 0x11) == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(iVar8 + 0x13c) = uVar6;
      func_0x00b427b0(iStack_8f8,*(undefined4 *)(iVar8 + 4),&uStack_68,iVar8 + 0x118);
      if ((iStack_38 == 0) || (*(char *)(iStack_38 + 0x14) == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(iVar8 + 0x112) = uVar6;
      iVar10 = CONCAT22(uStack_46,uStack_48);
      if ((iVar10 == 0) || (*(char *)(iVar10 + 0x16) == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(iVar8 + 0x114) = uVar6;
      if ((iStack_38 == 0) || (*(char *)(iStack_38 + 0x17) == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(iVar8 + 0x115) = uVar6;
      if ((iVar10 == 0) || (*(char *)(iVar10 + 0x15) == '\0')) {
        *(undefined1 *)(iVar8 + 0x113) = 0;
        ppuStack_908 = (undefined **)&DAT_00fc5681;
      }
      else {
        *(undefined1 *)(iVar8 + 0x113) = 1;
      }
      puStack_8fc = (undefined1 *)(iVar8 + 0x113);
      ppuVar15 = (undefined **)&DAT_00fc5681;
      iVar10 = *(int *)(iVar8 + 4) + 0x24;
      ppuStack_900 = (undefined **)&DAT_00fc567c;
      iStack_904 = iVar10;
LAB_00a24210:
      iVar16 = *(int *)(iVar10 + (uint)*(byte *)ppuStack_900 * 4);
      if (iVar16 != 0) {
        cVar5 = *(char *)(iVar16 + 0x120);
        if (cVar5 == '\0') {
          piVar21 = (int *)func_0x0096e930(iStack_8dc);
          for (iVar10 = *piVar21; iVar10 != piVar21[1]; iVar10 = iVar10 + 0xb4) {
            if (*(int *)(iVar10 + 0xa8) == 3) goto LAB_00a243d8;
          }
LAB_00a24267:
          cVar5 = '\0';
        }
        else {
          if (cVar5 != '\x03') {
            if (cVar5 != '\x04') goto LAB_00a2427d;
            piVar21 = (int *)func_0x0096e8f0(iStack_8dc);
            for (iVar10 = *piVar21; iVar10 != piVar21[1]; iVar10 = iVar10 + 0xb4) {
              if (*(int *)(iVar10 + 0xa8) == 3) goto LAB_00a243d8;
            }
            goto LAB_00a24267;
          }
          piVar21 = (int *)func_0x0096e8f0(iStack_8dc);
          for (iVar10 = *piVar21; iVar10 != piVar21[1]; iVar10 = iVar10 + 0xb4) {
            if (*(int *)(iVar10 + 0xa8) == 3) goto LAB_00a243df;
          }
          uVar7 = func_0x0096e930(iStack_8dc);
          cVar5 = func_0x00a1fa00(uVar7);
        }
        goto LAB_00a24269;
      }
      goto LAB_00a2427d;
    }
    func_0x00970f90(&ppuStack_8e4,"The current renderer doesn\'t support gl_FrontFacing");
    func_0x008c2b20();
    ppuStack_8e4 = (undefined **)func_0x008ab47d(8);
    if (ppuStack_8e4 == (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
    }
    else {
      *ppuStack_8e4 = (undefined *)rx::LinkEventDone::vftable;
      ppuStack_8e4[1] = (undefined *)0x2;
      ppuVar15 = ppuStack_8e4;
    }
    *ppuStack_91c = (undefined *)ppuVar15;
    uStack_8 = 0xb;
  }
  else {
    func_0x00a27170(*(undefined4 *)(iStack_8f8 + 0x18c));
    func_0x00a27080(*(undefined4 *)(iStack_8f8 + 0x2b4));
    func_0x00a27080(*(undefined4 *)(iStack_8f8 + 0x2b4));
    *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | 0x20;
    ppuStack_90c = rx::_anon_493F72AE::HLSLBlockLayoutEncoderFactory::vftable;
    pppuStack_8f0 = &ppuStack_90c;
    uStack_8._0_1_ = 2;
    func_0x009d4d80(iStack_8dc,*(undefined4 *)(param_1 + 4),uStack_914);
    func_0x00a22ed0();
    func_0x00a22b80(iStack_8dc);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    puVar9 = (undefined4 *)func_0x0096f260(iStack_8dc);
    ppuStack_90c = (undefined **)puVar9[1];
    ppuVar15 = (undefined **)*puVar9;
    if (ppuVar15 != ppuStack_90c) {
      do {
        cVar5 = func_0x0093e2e0(*ppuVar15);
        if ((cVar5 != '\0') && (cVar5 = func_0x0093e290(*ppuVar15), cVar5 != '\0')) {
          if (*(int *)(param_1 + 0x4e4) == *(int *)(param_1 + 0x4e8)) {
            func_0x0096a6e0(*(int *)(param_1 + 0x4e4),ppuVar15);
            param_1 = iStack_8e8;
          }
          else {
            func_0x009c34c0();
            *(int *)(param_1 + 0x4e4) = *(int *)(param_1 + 0x4e4) + 0xb4;
            param_1 = iStack_8e8;
          }
        }
        ppuVar15 = ppuVar15 + 0x2d;
      } while (ppuVar15 != ppuStack_90c);
    }
    iVar8 = iStack_8dc;
    func_0x00a20d10(iStack_8dc);
    func_0x00a20280(ppuStack_91c,iVar8,uStack_918);
    uStack_8 = 3;
  }
  if ((puStack_92c == (undefined4 *)0x0) || (pcVar14 = (char *)puStack_92c[1], *pcVar14 == '\0'))
  goto LAB_00a245e1;
  uVar7 = puStack_92c[2];
  uVar12 = *puStack_92c;
LAB_00a245d9:
  func_0x009b90e0(uVar12,0x45,pcVar14,uVar7,0,0,0,0,0,0,0);
LAB_00a245e1:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
LAB_00a243d8:
  cVar5 = '\x01';
LAB_00a24269:
  iVar10 = iStack_904;
  ppuVar15 = ppuStack_908;
  if (cVar5 != '\0') {
LAB_00a243df:
    uVar6 = 1;
    goto LAB_00a2429c;
  }
LAB_00a2427d:
  ppuStack_900 = (undefined **)((int)ppuStack_900 + 1);
  if (ppuStack_900 == ppuVar15) goto code_r0x00a2428e;
  goto LAB_00a24210;
code_r0x00a2428e:
  puStack_8fc = (undefined1 *)(iVar8 + 0x113);
  uVar6 = 0;
LAB_00a2429c:
  *(undefined1 *)(iVar8 + 0x13d) = uVar6;
  pcVar2 = *(code **)(**(int **)(iVar8 + 8) + 0x54);
  _guard_check_icall();
  iVar10 = (*pcVar2)();
  iVar8 = iStack_8e8;
  if (3 < iVar10) {
    puVar9 = (undefined4 *)
             func_0x00b3e5f0(apppppppuStack_2c,piStack_8ec,auStack_8d8,*puStack_8fc,
                             CONCAT22(uStack_48,CONCAT11(uStack_49,uStack_4a)));
    if ((undefined4 *)(iVar8 + 0x124) != puVar9) {
      FUN_00469ba0();
      uVar7 = puVar9[1];
      uVar12 = puVar9[2];
      uVar3 = puVar9[3];
      *(undefined4 *)(iVar8 + 0x124) = *puVar9;
      *(undefined4 *)(iVar8 + 0x128) = uVar7;
      *(undefined4 *)(iVar8 + 300) = uVar12;
      *(undefined4 *)(iVar8 + 0x130) = uVar3;
      *(undefined8 *)(iVar8 + 0x134) = *(undefined8 *)(puVar9 + 4);
      puVar9[4] = 0;
      puVar9[5] = 0xf;
      *(undefined1 *)puVar9 = 0;
    }
    if (0xf < uStack_18) {
      uVar18 = uStack_18 + 1;
      pppppppuVar13 = apppppppuStack_2c[0];
      if (0xfff < uVar18) {
        pppppppuVar13 = (undefined4 *******)apppppppuStack_2c[0][-1];
        uVar18 = uStack_18 + 0x24;
        uVar6 = (undefined1)uStack_8;
        if (0x1f < (uint)((int)apppppppuStack_2c[0] + (-4 - (int)pppppppuVar13))) {
LAB_00a24652:
          uStack_8._0_1_ = uVar6;
          func_0x008aaf66();
          goto LAB_00a24657;
        }
      }
      func_0x008ab812(pppppppuVar13,uVar18);
    }
  }
  iVar10 = func_0x009817b0(0);
  if (iVar10 != 0) {
    iVar10 = 0;
    puVar9 = (undefined4 *)func_0x0096e740(iStack_8dc);
    ppuStack_8e4 = (undefined **)puVar9[1];
    ppuStack_908 = (undefined **)*puVar9;
    if (ppuStack_908 != ppuStack_8e4) {
      do {
        iVar16 = func_0x0093f170(*ppuStack_908);
        iVar8 = func_0x009818c0(ppuStack_908 + 2);
        if (0 < iVar16) {
          iVar8 = iVar8 << 2;
          iVar20 = iVar10;
          do {
            iVar8 = iVar8 + 4;
            iVar10 = iVar20 + 1;
            *(int *)(iStack_8e8 + 0x304 + iVar8) = iVar20;
            iVar16 = iVar16 + -1;
            iVar20 = iVar10;
          } while (iVar16 != 0);
        }
        ppuStack_908 = ppuStack_908 + 0x2d;
        iVar8 = iStack_8e8;
      } while (ppuStack_908 != ppuStack_8e4);
    }
  }
  iVar10 = iStack_8dc;
  func_0x00a20d10(iStack_8dc);
  func_0x00a21290(piStack_8ec,auStack_8d8);
  ppuStack_8e4 = rx::_anon_493F72AE::HLSLBlockLayoutEncoderFactory::vftable;
  pppuStack_910 = &ppuStack_8e4;
  uStack_8._0_1_ = 0x13;
  func_0x009d4d80(iVar10,*(undefined4 *)(iVar8 + 4),uStack_914);
  func_0x00a22ed0();
  func_0x00a22b80(iVar10);
  uStack_8 = CONCAT31(uStack_8._1_3_,0xe);
  iVar16 = func_0x009817b0(0);
  if (iVar16 != 0) {
    uVar7 = func_0x009817b0(0,iVar8 + 1000);
    func_0x00a1f6b0(iStack_8dc,uVar7);
    func_0x00a22360(*(undefined4 *)(iVar8 + 8),iVar8 + 1000,iVar8 + 0x3dc);
    func_0x00a29440();
    iVar10 = iStack_8dc;
  }
  func_0x00a205e0(ppuStack_91c,iVar10,uStack_918);
  func_0x00b3cee0();
  uStack_8._0_1_ = 1;
  if (0xf < uStack_50) {
    uVar19 = uStack_50 + 1;
    uVar18 = auStack_64[0];
    if (0xfff < uVar19) {
      uVar18 = *(uint *)(auStack_64[0] - 4);
      uVar19 = uStack_50 + 0x24;
      if (0x1f < (auStack_64[0] - uVar18) - 4) {
LAB_00a24657:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(uVar18,uVar19);
  }
  uStack_54 = 0;
  uStack_50 = 0xf;
  auStack_64[0] = auStack_64[0] & 0xffffff00;
  uStack_8 = 0x14;
  if ((puStack_92c == (undefined4 *)0x0) || (pcVar14 = (char *)puStack_92c[1], *pcVar14 == '\0'))
  goto LAB_00a245e1;
  uVar7 = puStack_92c[2];
  uVar12 = *puStack_92c;
  goto LAB_00a245d9;
}



// WARNING: Removing unreachable block (ram,0x00a25931)

void __thiscall
FUN_00a24660(int param_1,byte *param_2,undefined4 param_3,char *param_4,int *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  int iStack_1b8;
  int iStack_1a8;
  byte *pbStack_1a4;
  byte *pbStack_1a0;
  byte *pbStack_198;
  int *piStack_194;
  undefined2 uStack_190;
  byte abStack_18e [2];
  undefined2 uStack_18c;
  byte abStack_18a [2];
  byte *pbStack_188;
  byte *pbStack_184;
  byte *pbStack_180;
  byte *pbStack_17c;
  byte *pbStack_178;
  byte *pbStack_174;
  byte *pbStack_170;
  int iStack_16c;
  byte *pbStack_168;
  byte *pbStack_164;
  bool bStack_15d;
  byte *pbStack_15c;
  undefined1 auStack_158 [180];
  int aiStack_a4 [5];
  undefined4 auStack_90 [4];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 auStack_70 [4];
  undefined8 uStack_60;
  undefined4 auStack_58 [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_40 [6];
  int *piStack_28;
  int iStack_24;
  byte *pbStack_20;
  byte *pbStack_1c;
  byte *pbStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e6bb;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pbStack_174 = param_2;
  pbStack_188 = param_2;
  piStack_194 = param_5;
  iStack_16c = param_1;
  func_0x00a26ca0(uStack_14);
  aiStack_40[4] = 0;
  aiStack_40[0] = 0;
  aiStack_40[1] = 0;
  aiStack_40[2] = 0;
  aiStack_40[3] = 0;
  func_0x0096f540(aiStack_40,0x14);
  pbStack_15c = *(byte **)(param_1 + 8);
  pcVar1 = *(code **)(*(int *)pbStack_15c + 0x3c);
  _guard_check_icall(aiStack_a4);
  (*pcVar1)();
  piVar3 = piStack_194;
  piVar7 = aiStack_a4;
  uVar10 = 0x10;
  piVar9 = aiStack_40;
  do {
    if (*piVar7 != *piVar9) {
      uStack_8 = 0;
      func_0x008c9cf0();
      pbStack_174 = (byte *)*piVar3;
      func_0x0046b6e0(pbStack_174 + 0x10,"Invalid program binary, device configuration has changed."
                     );
      goto LAB_00a25e5f;
    }
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
    bVar13 = 3 < uVar10;
    uVar10 = uVar10 - 4;
  } while (bVar13);
  pbStack_164 = (byte *)0x0;
  func_0x0096bcc0(&pbStack_164);
  piVar9 = piStack_194;
  if (pbStack_164 == (byte *)0x0) {
    pbVar11 = (byte *)(iStack_16c + 0x308);
    pbStack_15c = (byte *)(iStack_16c + 0x348);
    if (pbVar11 != pbStack_15c) {
      do {
        pbStack_164 = (byte *)0x0;
        func_0x0096bcc0(&pbStack_164);
        *(byte **)pbVar11 = pbStack_164;
        pbVar11 = pbVar11 + 4;
      } while (pbVar11 != pbStack_15c);
    }
    bStack_15d = false;
    do {
      pbStack_180 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_180);
      pbStack_198 = (byte *)(uint)bStack_15d;
      pbStack_170 = (byte *)0x0;
      if (pbStack_180 != (byte *)0x0) {
        piVar9 = (int *)(iStack_16c + ((int)pbStack_198 * 3 + 0x56) * 4);
        do {
          pbStack_164 = (byte *)0x0;
          func_0x0096bcc0(&pbStack_164);
          pbVar11 = pbStack_164;
          pbStack_164 = (byte *)0x0;
          iStack_1a8 = CONCAT31(iStack_1a8._1_3_,0 < (int)pbVar11);
          func_0x0096bcc0(&pbStack_164);
          pbStack_1a4 = pbStack_164;
          pbStack_164 = (byte *)0x0;
          func_0x0096bcc0(&pbStack_164);
          pbVar11 = (byte *)piVar9[1];
          pbStack_1a0 = (byte *)CONCAT31(pbStack_1a0._1_3_,pbStack_164._0_1_);
          pbStack_164 = pbVar11;
          if (pbVar11 == (byte *)piVar9[2]) {
            pbStack_168 = (byte *)(((int)pbVar11 - *piVar9) / 0xc);
            if (pbStack_168 == (byte *)0x15555555) {
              func_0x0046e700();
              goto LAB_00a25e92;
            }
            pbStack_184 = pbStack_168 + 1;
            uVar10 = (piVar9[2] - *piVar9) / 0xc;
            if (0x15555555 - (uVar10 >> 1) < uVar10) {
              pbStack_17c = (byte *)0x15555555;
            }
            else {
              pbStack_17c = (byte *)((uVar10 >> 1) + uVar10);
              if (pbStack_17c < pbStack_184) {
                pbStack_17c = pbStack_184;
              }
            }
            pbStack_15c = pbStack_17c;
            pbStack_178 = (byte *)func_0x009714c0(piVar9,&pbStack_15c);
            pbStack_20 = pbStack_17c;
            pbStack_1c = pbStack_178 + (int)pbStack_168 * 0xc;
            pbStack_15c = pbStack_1c + 0xc;
            *(int *)pbStack_1c = iStack_1a8;
            *(byte **)(pbStack_1c + 4) = pbStack_1a4;
            *(byte **)(pbStack_1c + 8) = pbStack_1a0;
            iVar6 = *piVar9;
            piStack_28 = piVar9;
            pbStack_18 = pbStack_15c;
            if (pbStack_164 == (byte *)piVar9[1]) {
              func_0x008ab0e6(pbStack_178,iVar6,piVar9[1] - iVar6);
            }
            else {
              func_0x008ab0e6(pbStack_178,iVar6,(int)pbStack_164 - iVar6);
              pbStack_1c = pbStack_178;
              func_0x008ab0e6(pbStack_15c,pbStack_164,piVar9[1] - (int)pbStack_164);
            }
            iStack_24 = 0;
            func_0x00975300(pbStack_178,pbStack_184,pbStack_17c);
            func_0x009748c0();
          }
          else {
            *(int *)pbVar11 = iStack_1a8;
            *(byte **)(pbVar11 + 4) = pbStack_1a4;
            *(byte **)(pbVar11 + 8) = pbStack_1a0;
            piVar9[1] = piVar9[1] + 0xc;
          }
          pbStack_170 = pbStack_170 + 1;
        } while (pbStack_170 < pbStack_180);
      }
      pbVar11 = pbStack_198;
      pbStack_170 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_170);
      pbStack_184 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_184);
      *(byte **)(iStack_16c + 0x1a0 + (int)pbVar11 * 8) = pbStack_170;
      bStack_15d = (bool)(bStack_15d + 1);
      *(byte **)(iStack_16c + 0x1a4 + (int)pbVar11 * 8) = pbStack_184;
    } while (bStack_15d != true);
    pbStack_15c = (byte *)&uStack_18c;
    uStack_18c = 0x405;
    bStack_15d = true;
    while( true ) {
      pbStack_164 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_164);
      pbStack_168 = (byte *)0x0;
      if (pbStack_164 != (byte *)0x0) {
        piVar9 = (int *)(iStack_16c + (bStack_15d + 0x27) * 0xc);
        do {
          pbStack_170 = (byte *)0x0;
          func_0x0096bcc0(&pbStack_170);
          pbStack_180 = (byte *)0x0;
          iStack_1b8 = CONCAT31(iStack_1b8._1_3_,0 < (int)pbStack_170);
          func_0x0096bcc0(&pbStack_180);
          pbStack_170 = (byte *)piVar9[1];
          if (pbStack_170 == (byte *)piVar9[2]) {
            pbStack_174 = (byte *)((int)pbStack_170 - *piVar9 >> 3);
            if (pbStack_174 == &DAT_1fffffff) goto LAB_00a25e92;
            pbStack_184 = pbStack_174 + 1;
            uVar10 = piVar9[2] - *piVar9 >> 3;
            if (0x1fffffff - (uVar10 >> 1) < uVar10) {
              pbStack_198 = &DAT_1fffffff;
            }
            else {
              pbStack_198 = (byte *)(uVar10 + (uVar10 >> 1));
              if (pbStack_198 < pbStack_184) {
                pbStack_198 = pbStack_184;
              }
            }
            pbStack_17c = pbStack_198;
            pbStack_178 = (byte *)func_0x009cc840(piVar9,&pbStack_198);
            pbStack_1c = pbStack_178 + (int)pbStack_174 * 8;
            pbStack_174 = pbStack_1c + 8;
            pbStack_20 = pbStack_17c;
            *(byte **)(pbStack_1c + 4) = pbStack_180;
            *(int *)pbStack_1c = iStack_1b8;
            iVar6 = *piVar9;
            piStack_28 = piVar9;
            pbStack_18 = pbStack_174;
            if (pbStack_170 == (byte *)piVar9[1]) {
              func_0x008ab0e6(pbStack_178,iVar6,piVar9[1] - iVar6);
            }
            else {
              func_0x008ab0e6(pbStack_178,iVar6,(int)pbStack_170 - iVar6);
              pbStack_1c = pbStack_178;
              func_0x008ab0e6(pbStack_174,pbStack_170,piVar9[1] - (int)pbStack_170);
            }
            iStack_24 = 0;
            func_0x00a1fbe0(pbStack_178,pbStack_184,pbStack_17c);
            func_0x00a1ecc0();
          }
          else {
            *(int *)pbStack_170 = iStack_1b8;
            *(byte **)(pbStack_170 + 4) = pbStack_180;
            piVar9[1] = piVar9[1] + 8;
          }
          pbStack_168 = pbStack_168 + 1;
        } while (pbStack_168 < pbStack_164);
      }
      pbStack_17c = (byte *)0x0;
      func_0x0096bcc0(&pbStack_17c);
      pbStack_184 = (byte *)0x0;
      if (pbStack_17c != (byte *)0x0) {
        piVar9 = (int *)(iStack_16c + (bStack_15d + 0x2d) * 0xc);
        do {
          pbStack_168 = (byte *)0x0;
          func_0x0096bcc0(&pbStack_168);
          pbStack_164 = (byte *)0x0;
          pbStack_1a4 = (byte *)CONCAT31(pbStack_1a4._1_3_,0 < (int)pbStack_168);
          func_0x0096bcc0(&pbStack_164);
          pbStack_168 = (byte *)piVar9[1];
          if (pbStack_168 == (byte *)piVar9[2]) {
            pbStack_198 = (byte *)((int)pbStack_168 - *piVar9 >> 3);
            if (pbStack_198 == &DAT_1fffffff) goto LAB_00a25e92;
            pbStack_170 = pbStack_198 + 1;
            uVar10 = piVar9[2] - *piVar9 >> 3;
            if (0x1fffffff - (uVar10 >> 1) < uVar10) {
              pbStack_180 = &DAT_1fffffff;
            }
            else {
              pbStack_180 = (byte *)(uVar10 + (uVar10 >> 1));
              if (pbStack_180 < pbStack_170) {
                pbStack_180 = pbStack_170;
              }
            }
            pbStack_174 = pbStack_180;
            pbStack_178 = (byte *)func_0x009cc840(piVar9,&pbStack_174);
            pbStack_1c = pbStack_178 + (int)pbStack_198 * 8;
            pbStack_174 = pbStack_1c + 8;
            pbStack_20 = pbStack_180;
            *(byte **)(pbStack_1c + 4) = pbStack_164;
            *(byte **)pbStack_1c = pbStack_1a4;
            iVar6 = *piVar9;
            piStack_28 = piVar9;
            pbStack_18 = pbStack_174;
            if (pbStack_168 == (byte *)piVar9[1]) {
              func_0x008ab0e6(pbStack_178,iVar6,piVar9[1] - iVar6);
            }
            else {
              func_0x008ab0e6(pbStack_178,iVar6,(int)pbStack_168 - iVar6);
              pbStack_1c = pbStack_178;
              func_0x008ab0e6(pbStack_174,pbStack_168,piVar9[1] - (int)pbStack_168);
            }
            iStack_24 = 0;
            func_0x00a1fbe0(pbStack_178,pbStack_170,pbStack_180);
            func_0x00a1ecc0();
          }
          else {
            *(byte **)pbStack_168 = pbStack_1a4;
            *(byte **)(pbStack_168 + 4) = pbStack_164;
            piVar9[1] = piVar9[1] + 8;
          }
          pbStack_184 = pbStack_184 + 1;
        } while (pbStack_184 < pbStack_17c);
      }
      pbStack_168 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_168);
      pbStack_170 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_170);
      pbStack_184 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_184);
      pbStack_164 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_164);
      pbVar11 = pbStack_168;
      uVar10 = (uint)bStack_15d;
      pbStack_168 = (byte *)0x0;
      *(byte **)(iStack_16c + 0x264 + uVar10 * 8) = pbVar11;
      *(byte **)(iStack_16c + 0x268 + uVar10 * 8) = pbStack_170;
      *(byte **)(iStack_16c + 0x294 + uVar10 * 8) = pbStack_184;
      *(byte **)(iStack_16c + 0x298 + uVar10 * 8) = pbStack_164;
      func_0x0096bcc0(&pbStack_168);
      pbStack_170 = (byte *)0x0;
      func_0x0096bcc0(&pbStack_170);
      *(byte **)(iStack_16c + 0x2c4 + uVar10 * 8) = pbStack_168;
      *(byte **)(iStack_16c + 0x2c8 + uVar10 * 8) = pbStack_170;
      pbStack_15c = pbStack_15c + 1;
      if (pbStack_15c == abStack_18a) break;
      bStack_15d = (bool)*pbStack_15c;
    }
    pbStack_15c = (byte *)0x0;
    func_0x0096bcc0(&pbStack_15c);
    if (*param_4 == '\0') {
      pbStack_170 = pbStack_15c;
      iVar6 = iStack_16c;
      while (pbStack_170 != (byte *)0x0) {
        func_0x00a1cf60();
        pbStack_168 = &DAT_00000006;
        piVar9 = aiStack_40 + 5;
        do {
          pbStack_15c = (byte *)0x0;
          func_0x0096bcc0(&pbStack_15c);
          iVar6 = iStack_16c;
          pbStack_168 = pbStack_168 + -1;
          *piVar9 = (int)pbStack_15c;
          piVar9 = piVar9 + 1;
        } while (pbStack_168 != (byte *)0x0);
        puVar5 = *(undefined4 **)(iStack_16c + 0x434);
        if (puVar5 == *(undefined4 **)(iStack_16c + 0x438)) {
          func_0x00a1ac00(puVar5,aiStack_40 + 5);
        }
        else {
          *puVar5 = aiStack_40[5];
          puVar5[1] = piStack_28;
          puVar5[2] = iStack_24;
          puVar5[3] = pbStack_20;
          puVar5[4] = pbStack_1c;
          puVar5[5] = pbStack_18;
          *(int *)(iStack_16c + 0x434) = *(int *)(iStack_16c + 0x434) + 0x18;
        }
        pbStack_170 = pbStack_170 + -1;
      }
      pbStack_168 = (byte *)&uStack_190;
      uStack_190 = 0x405;
      pbStack_170 = (byte *)0x0;
      do {
        bStack_15d = (bool)*pbStack_168;
        pbStack_15c = (byte *)0x0;
        func_0x0096bcc0(&pbStack_15c);
        if (*param_4 != '\0') goto LAB_00a24fd4;
        if (pbStack_15c != (byte *)0x0) {
          iVar6 = iVar6 + (bStack_15d + 99) * 0xc;
          do {
            func_0x009c37e0();
            uStack_8 = 2;
            func_0x0097e8b0(param_4,auStack_158);
            if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
              func_0x0096a6e0(*(int *)(iVar6 + 4),auStack_158);
            }
            else {
              func_0x009c34c0();
              *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 0xb4;
            }
            uStack_8 = 0xffffffff;
            FUN_009c38e0();
            pbStack_15c = pbStack_15c + -1;
          } while (pbStack_15c != (byte *)0x0);
        }
        pbStack_168 = pbStack_168 + 1;
        iVar6 = iStack_16c;
      } while (pbStack_168 != abStack_18e);
      uVar10 = 0;
      do {
        pbStack_15c = (byte *)0x0;
        func_0x0096bcc0(&pbStack_15c);
        *(byte **)(uVar10 + 0x484 + iStack_16c) = pbStack_15c;
        uVar10 = uVar10 + 4;
      } while (uVar10 < 0x20);
      pbStack_15c = (byte *)0x0;
      func_0x0096bcc0(&pbStack_15c);
      if (*param_4 == '\0') {
        pbStack_180 = (byte *)(*(int *)(*(int *)(iStack_16c + 4) + 0xa4) + 0x3c4);
        pbStack_164 = pbStack_15c;
        if (pbStack_15c != (byte *)0x0) {
          pbStack_184 = (byte *)0x0;
          do {
            pbVar11 = pbStack_184;
            iVar6 = *(int *)pbStack_180;
            pbStack_178 = (byte *)func_0x008ab47d(0x70);
            uStack_8 = 3;
            if (pbStack_178 == (byte *)0x0) {
              pbStack_170 = (byte *)0x0;
            }
            else {
              pbStack_170 = (byte *)func_0x00a1cfc0(*(undefined4 *)(pbVar11 + iVar6 + 8),0,
                                                    pbVar11 + iVar6 + 0x10,pbVar11 + iVar6 + 0x40,
                                                    *(int *)(pbVar11 + iVar6 + 0xc0) == -1);
            }
            pbVar11 = pbStack_170;
            uStack_8 = 0xffffffff;
            pbStack_15c = (byte *)0x0;
            pbStack_198 = pbStack_170;
            func_0x0096bcc0(&pbStack_15c);
            pbVar11[0x40] = (byte)pbStack_15c;
            pbStack_174 = pbVar11 + 0x44;
            pbStack_168 = &DAT_00000006;
            iVar6 = 0;
            do {
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              pbStack_168 = pbStack_168 + -1;
              *(byte **)(pbStack_174 + iVar6) = pbStack_15c;
              iVar6 = iVar6 + 4;
            } while (pbStack_168 != (byte *)0x0);
            pbStack_15c = (byte *)0x0;
            func_0x0096bcc0(&pbStack_15c);
            pbVar12 = pbStack_15c;
            pbVar11 = pbStack_170;
            pbStack_15c = (byte *)0x0;
            *(byte **)(pbStack_170 + 0x5c) = pbVar12;
            func_0x0096bcc0(&pbStack_15c);
            *(byte **)(pbVar11 + 0x60) = pbStack_15c;
            puVar5 = *(undefined4 **)(iStack_16c + 0x40c);
            if (puVar5 == *(undefined4 **)(iStack_16c + 0x410)) {
              func_0x008c0640(puVar5,&pbStack_198);
            }
            else {
              *puVar5 = pbVar11;
              *(int *)(iStack_16c + 0x40c) = *(int *)(iStack_16c + 0x40c) + 4;
            }
            pbStack_184 = pbStack_184 + 0xe8;
            pbStack_164 = pbStack_164 + -1;
          } while (pbStack_164 != (byte *)0x0);
          pbStack_164 = (byte *)0x0;
        }
        iVar6 = iStack_16c;
        pbStack_15c = (byte *)0x0;
        func_0x0096bcc0(&pbStack_15c);
        pbVar11 = pbStack_15c;
        if (*param_4 == '\0') {
          while (pbStack_170 = pbVar11, pbStack_170 != (byte *)0x0) {
            func_0x00a1d0e0();
            pbStack_164 = (byte *)&uStack_78;
            pbStack_168 = &DAT_00000006;
            puVar5 = auStack_70;
            do {
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              puVar5[-8] = pbStack_15c;
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              bVar13 = 0 < (int)pbStack_15c;
              pbStack_15c = (byte *)0x0;
              *pbStack_164 = bVar13;
              func_0x0096bcc0(&pbStack_15c);
              *puVar5 = pbStack_15c;
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              iVar6 = iStack_16c;
              pbStack_164 = pbStack_164 + 1;
              pbStack_168 = pbStack_168 + -1;
              puVar5[6] = pbStack_15c;
              puVar5 = puVar5 + 1;
            } while (pbStack_168 != (byte *)0x0);
            puVar5 = *(undefined4 **)(iStack_16c + 0x428);
            if (puVar5 == *(undefined4 **)(iStack_16c + 0x42c)) {
              func_0x00a1af60(puVar5,auStack_90);
            }
            else {
              puVar5[6] = uStack_78;
              *puVar5 = auStack_90[0];
              puVar5[1] = auStack_90[1];
              puVar5[2] = auStack_90[2];
              puVar5[3] = auStack_90[3];
              *(undefined2 *)(puVar5 + 7) = uStack_74;
              *(undefined8 *)(puVar5 + 4) = uStack_80;
              puVar5[8] = auStack_70[0];
              puVar5[9] = auStack_70[1];
              puVar5[10] = auStack_70[2];
              puVar5[0xb] = auStack_70[3];
              *(undefined8 *)(puVar5 + 0xc) = uStack_60;
              puVar5[0xe] = auStack_58[0];
              puVar5[0xf] = auStack_58[1];
              puVar5[0x10] = auStack_58[2];
              puVar5[0x11] = auStack_58[3];
              puVar5[0x12] = uStack_48;
              puVar5[0x13] = uStack_44;
              *(int *)(iStack_16c + 0x428) = *(int *)(iStack_16c + 0x428) + 0x50;
            }
            pbVar11 = pbStack_170 + -1;
          }
          pbStack_17c = (byte *)0x0;
          func_0x0096bcc0(&pbStack_17c);
          pbVar11 = pbStack_17c;
          pbStack_198 = *(byte **)(iVar6 + 0x400);
          pbStack_174 = *(byte **)(iVar6 + 0x3fc);
          pbStack_170 = pbStack_17c;
          pbStack_180 = (byte *)(((int)pbStack_198 - (int)pbStack_174) / 0x24);
          if (pbStack_17c < pbStack_180) {
            pbVar11 = pbStack_174 + (int)pbStack_17c * 0x24;
            func_0x00a1a8c0(pbVar11,*(undefined4 *)(iStack_16c + 0x400),iStack_16c + 0x3fc);
            *(byte **)(iStack_16c + 0x400) = pbVar11;
            pbVar11 = pbStack_17c;
          }
          else if (pbStack_180 < pbStack_17c) {
            pbVar12 = (byte *)((*(int *)(iStack_16c + 0x404) - *(int *)(iStack_16c + 0x3fc)) / 0x24)
            ;
            if (pbVar12 < pbStack_17c) {
              if ((byte *)0x71c71c7 < pbStack_17c) goto LAB_00a25e97;
              if ((byte *)(0x71c71c7 - ((uint)pbVar12 >> 1)) < pbVar12) {
                pbStack_174 = (byte *)0x71c71c7;
              }
              else {
                pbStack_174 = pbVar12 + ((uint)pbVar12 >> 1);
                if (pbVar12 + ((uint)pbVar12 >> 1) < pbStack_17c) {
                  pbStack_174 = pbStack_17c;
                }
              }
              pbStack_164 = pbStack_174;
              iVar6 = func_0x00a1a7a0(iStack_16c + 0x3fc,&pbStack_174);
              piStack_28 = (int *)(iStack_16c + 0x3fc);
              pbStack_1c = (byte *)(iVar6 + (int)pbStack_180 * 0x24);
              pbStack_20 = pbStack_164;
              uStack_8 = 4;
              iStack_24 = iVar6;
              pbStack_18 = (byte *)func_0x00a1bf30(pbStack_1c,(int)pbStack_17c - (int)pbStack_180,
                                                   piStack_28);
              func_0x00a1bc10(*(undefined4 *)(iStack_16c + 0x3fc),
                              *(undefined4 *)(iStack_16c + 0x400),iVar6,
                              (undefined4 *)(iStack_16c + 0x3fc));
              iStack_24 = 0;
              func_0x00a1fb50(iVar6,pbStack_17c,pbStack_164);
              uStack_8 = 0xffffffff;
              func_0x00a1ec60();
              pbVar11 = pbStack_17c;
            }
            else {
              uVar4 = func_0x00a1bf30(pbStack_198,(int)pbStack_17c - (int)pbStack_180,
                                      iStack_16c + 0x3fc);
              *(undefined4 *)(iStack_16c + 0x400) = uVar4;
            }
          }
          if (pbVar11 != (byte *)0x0) {
            pbStack_168 = (byte *)0x0;
            do {
              pbVar11 = pbStack_168;
              iVar6 = *(int *)(iStack_16c + 0x3fc);
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              pbVar12 = pbStack_15c;
              if (*param_4 == '\0') {
                pbVar8 = pbStack_15c + *(int *)(param_4 + 4);
                bVar13 = pbVar8 < pbStack_15c;
                pbStack_15c = pbVar8;
                if (bVar13) {
                  pbStack_15c = (byte *)0x0;
                }
                bStack_15d = !bVar13;
                pbStack_1a0 = pbStack_15c;
                if ((bStack_15d) && (pbVar8 <= *(byte **)(param_4 + 0xc))) {
                  func_0x0046a660(*(int *)(param_4 + 8) + *(int *)(param_4 + 4),pbVar12);
                  *(byte **)(param_4 + 4) = pbStack_15c;
                }
                else {
                  *param_4 = '\x01';
                }
              }
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              *(byte **)(pbVar11 + iVar6 + 0x18) = pbStack_15c;
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              *(byte **)(pbVar11 + iVar6 + 0x1c) = pbStack_15c;
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              *(byte **)(pbVar11 + iVar6 + 0x20) = pbStack_15c;
              pbStack_168 = pbStack_168 + 0x24;
              pbStack_170 = pbStack_170 + -1;
            } while (pbStack_170 != (byte *)0x0);
          }
          pbStack_170 = &DAT_00000006;
          pbStack_178 = (byte *)0x0;
          pbStack_168 = (byte *)0x0;
          do {
            pbVar11 = pbStack_178;
            pbStack_15c = (byte *)0x0;
            pbStack_174 = pbStack_168 + iStack_16c + 0x70;
            func_0x0096bcc0(&pbStack_15c);
            pbVar12 = pbStack_15c;
            if (*param_4 == '\0') {
              pbVar8 = pbStack_15c + *(int *)(param_4 + 4);
              bVar13 = pbVar8 < pbStack_15c;
              pbStack_15c = pbVar8;
              if (bVar13) {
                pbStack_15c = (byte *)0x0;
              }
              bStack_15d = !bVar13;
              pbStack_198 = pbStack_15c;
              if ((bStack_15d) && (pbVar8 <= *(byte **)(param_4 + 0xc))) {
                func_0x0046a660(*(int *)(param_4 + 8) + *(int *)(param_4 + 4),pbVar12);
                *(byte **)(param_4 + 4) = pbStack_15c;
              }
              else {
                *param_4 = '\x01';
              }
            }
            pbStack_1a4 = (byte *)CONCAT31(pbStack_1a4._1_3_,1);
            uVar10 = *(int *)(param_4 + 4) + 3;
            if ((uVar10 < 3) || (*(uint *)(param_4 + 0xc) < uVar10)) {
              *param_4 = '\x01';
            }
            else {
              memcpy(pbVar11 + iStack_16c + 0x100,
                     (void *)(*(int *)(param_4 + 8) + *(int *)(param_4 + 4)),3);
              if (uVar10 < 3) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(uint *)(param_4 + 4) = uVar10;
            }
            pbStack_178 = pbStack_178 + 3;
            pbStack_168 = pbStack_168 + 0x18;
            pbStack_170 = pbStack_170 + -1;
          } while (pbStack_170 != (byte *)0x0);
          pbStack_15c = (byte *)0x0;
          func_0x0096bcc0(&pbStack_15c);
          iVar6 = iStack_16c;
          bVar13 = 0 < (int)pbStack_15c;
          pbStack_15c = (byte *)0x0;
          *(bool *)(iStack_16c + 0x112) = bVar13;
          func_0x0096bcc0(&pbStack_15c);
          pbVar11 = pbStack_15c;
          pbStack_15c = (byte *)0x0;
          *(bool *)(iVar6 + 0x113) = 0 < (int)pbVar11;
          func_0x0096bcc0(&pbStack_15c);
          pbVar11 = pbStack_15c;
          pbStack_15c = (byte *)0x0;
          *(bool *)(iVar6 + 0x114) = 0 < (int)pbVar11;
          func_0x0096bcc0(&pbStack_15c);
          pbVar11 = pbStack_15c;
          pbStack_15c = (byte *)0x0;
          *(bool *)(iVar6 + 0x115) = 0 < (int)pbVar11;
          func_0x0096bcc0(&pbStack_15c);
          pbVar11 = pbStack_15c;
          pbStack_15c = (byte *)0x0;
          *(bool *)(iVar6 + 0x13c) = 0 < (int)pbVar11;
          func_0x0096bcc0(&pbStack_15c);
          pbStack_178 = (byte *)0x0;
          *(bool *)(iVar6 + 0x13d) = 0 < (int)pbStack_15c;
          func_0x0096bcc0(&pbStack_178);
          pbStack_198 = *(byte **)(iVar6 + 0x11c);
          pbVar11 = (byte *)(iVar6 + 0x118);
          pbStack_15c = (byte *)(((int)pbStack_198 - *(int *)pbVar11) / 0x3c);
          pbStack_168 = pbStack_178;
          pbStack_17c = pbVar11;
          if (pbStack_178 < pbStack_15c) {
            iVar6 = *(int *)pbVar11 + (int)pbStack_178 * 0x3c;
            func_0x00a1a920(iVar6,pbStack_198,pbVar11);
            *(int *)(pbStack_17c + 4) = iVar6;
            pbVar11 = pbStack_17c;
          }
          else if (pbStack_15c < pbStack_178) {
            if ((byte *)((*(int *)(iVar6 + 0x120) - *(int *)pbVar11) / 0x3c) < pbStack_178) {
              func_0x00a1b9c0(pbStack_178,&bStack_15d);
            }
            else {
              uVar4 = func_0x00a1bfc0(*(undefined4 *)(iVar6 + 0x11c),
                                      (int)pbStack_178 - (int)pbStack_15c,pbVar11);
              *(undefined4 *)(iVar6 + 0x11c) = uVar4;
            }
          }
          if (pbStack_178 != (byte *)0x0) {
            pbStack_178 = (byte *)0x0;
            do {
              pbVar12 = pbStack_178 + *(int *)pbVar11;
              pbStack_15c = (byte *)0x0;
              func_0x0096bcc0(&pbStack_15c);
              pbVar11 = pbStack_178;
              *(byte **)pbVar12 = pbStack_15c;
              pbStack_15c = (byte *)0x0;
              pbStack_174 = pbStack_178 + *(int *)pbStack_17c + 4;
              func_0x0096bcc0(&pbStack_15c);
              pbVar12 = pbStack_15c;
              if (*param_4 == '\0') {
                pbVar8 = pbStack_15c + *(int *)(param_4 + 4);
                bVar13 = pbVar8 < pbStack_15c;
                pbStack_15c = pbVar8;
                if (bVar13) {
                  pbStack_15c = (byte *)0x0;
                }
                bStack_15d = !bVar13;
                pbStack_1a0 = pbStack_15c;
                if ((bStack_15d) && (pbVar8 <= *(byte **)(param_4 + 0xc))) {
                  func_0x0046a660(*(int *)(param_4 + 8) + *(int *)(param_4 + 4),pbVar12);
                  *(byte **)(param_4 + 4) = pbStack_15c;
                }
                else {
                  *param_4 = '\x01';
                }
              }
              pbStack_15c = (byte *)0x0;
              pbStack_174 = pbVar11 + *(int *)pbStack_17c + 0x1c;
              func_0x0096bcc0(&pbStack_15c);
              pbVar12 = pbStack_15c;
              if (*param_4 == '\0') {
                pbVar8 = pbStack_15c + *(int *)(param_4 + 4);
                bVar13 = pbVar8 < pbStack_15c;
                pbStack_15c = pbVar8;
                if (bVar13) {
                  pbStack_15c = (byte *)0x0;
                }
                bStack_15d = !bVar13;
                pbStack_1a0 = pbStack_15c;
                if ((bStack_15d) && (pbVar8 <= *(byte **)(param_4 + 0xc))) {
                  func_0x0046a660(*(int *)(param_4 + 8) + *(int *)(param_4 + 4),pbVar12);
                  *(byte **)(param_4 + 4) = pbStack_15c;
                }
                else {
                  *param_4 = '\x01';
                }
              }
              pbStack_15c = (byte *)0x0;
              iVar6 = *(int *)pbStack_17c;
              func_0x0096bcc0(&pbStack_15c);
              pbVar12 = pbStack_178;
              *(byte **)(pbVar11 + iVar6 + 0x34) = pbStack_15c;
              pbStack_15c = (byte *)0x0;
              iVar6 = *(int *)pbStack_17c;
              func_0x0096bcc0(&pbStack_15c);
              *(byte **)(pbVar12 + iVar6 + 0x38) = pbStack_15c;
              pbStack_178 = pbStack_178 + 0x3c;
              pbStack_168 = pbStack_168 + -1;
              pbVar11 = pbStack_17c;
            } while (pbStack_168 != (byte *)0x0);
          }
          func_0x0096f5d0(iStack_16c + 0x124);
          puVar5 = (undefined4 *)func_0x008d1840(&pbStack_1a4);
          uStack_8 = 5;
          pbStack_174 = (byte *)func_0x008ab47d(0x14);
          uStack_8 = CONCAT31(uStack_8._1_3_,6);
          if (pbStack_174 == (byte *)0x0) {
            iVar6 = 0;
          }
          else {
            uVar4 = *puVar5;
            uVar2 = puVar5[1];
            *puVar5 = 0;
            puVar5[1] = 0;
            iVar6 = func_0x00a1d560(param_3,uVar4,uVar2,iStack_16c,param_4,piStack_194);
          }
          pbStack_174 = (byte *)0x0;
          *(int *)pbStack_188 = iVar6;
          func_0x00a1e190();
          pbVar11 = pbStack_1a0;
          if (pbStack_1a0 != (byte *)0x0) {
            LOCK();
            iVar6 = *(int *)(pbStack_1a0 + 4) + -1;
            *(int *)(pbStack_1a0 + 4) = iVar6;
            UNLOCK();
            if (iVar6 == 0) {
              pcVar1 = (code *)**(undefined4 **)pbStack_1a0;
              _guard_check_icall();
              (*pcVar1)();
              LOCK();
              pbVar12 = pbVar11 + 8;
              iVar6 = *(int *)pbVar12 + -1;
              *(int *)pbVar12 = iVar6;
              UNLOCK();
              if (iVar6 == 0) {
                pcVar1 = *(code **)(*(int *)pbVar11 + 4);
                _guard_check_icall();
                (*pcVar1)();
              }
            }
          }
          goto LAB_00a25e70;
        }
      }
    }
LAB_00a24fd4:
    func_0x00970f90(&pbStack_174,"Invalid program binary.");
  }
  else {
    uStack_8 = 1;
    func_0x008c9cf0();
    func_0x0046b6e0(*piVar9 + 0x10,"Mismatched compilation flags.");
  }
LAB_00a25e5f:
  func_0x008c2b20();
  pbStack_188[0] = 0;
  pbStack_188[1] = 0;
  pbStack_188[2] = 0;
  pbStack_188[3] = 0;
LAB_00a25e70:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
LAB_00a25e92:
  func_0x0046e700();
LAB_00a25e97:
  func_0x0046e700();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00a26c20(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e844;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x10,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b3a650(0,0,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00a27280(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e889;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de3dc) {
    func_0x008ab40d(&DAT_013de3dc,uVar2);
    if (DAT_013de3dc == -1) {
      uStack_8 = 0;
      uVar3 = func_0x0093d430("gpu.angle");
      DAT_013de3d8 = (char *)func_0x009b9170(uVar3);
      func_0x008ab3bc(&DAT_013de3dc);
    }
  }
  pcVar1 = DAT_013de3d8;
  puStack_24 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de3d8 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar1,"ProgramD3D::GetComputeExecutableTask::run",0,0,0,0,0,0,0);
    pcVar1 = DAT_013de3d8;
    uStack_20 = func_0x0093d430();
    puStack_24 = &uStack_20;
    pcStack_1c = pcVar1;
    pcStack_18 = "ProgramD3D::GetComputeExecutableTask::run";
  }
  func_0x00a1f470(*(int *)(param_1 + 8) + 0x4e0,*(int *)(param_1 + 8) + 0x514);
  func_0x00a28e10();
  iStack_14 = 0;
  iVar4 = func_0x00a216d0(*(undefined4 *)(param_1 + 0x40),-(uint)(param_1 != 0) & param_1 + 4U,
                          &iStack_14,param_1 + 0x10);
  if (iVar4 == 1) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
    if (iStack_14 != 0) {
      uVar3 = 0;
    }
  }
  uStack_8 = 3;
  if ((puStack_24 != (undefined4 *)0x0) && (*(char *)puStack_24[1] != '\0')) {
    func_0x009b90e0(*puStack_24,0x45,(char *)puStack_24[1],puStack_24[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar3;
}



undefined4 __fastcall FUN_00a27410(int param_1)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e8c9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de3d4) &&
     (func_0x008ab40d(&DAT_013de3d4,uVar4), DAT_013de3d4 == -1)) {
    uStack_8 = 0;
    uVar5 = func_0x0093d430("gpu.angle");
    DAT_013de3d0 = (char *)func_0x009b9170(uVar5);
    func_0x008ab3bc(&DAT_013de3d4);
  }
  pcVar2 = DAT_013de3d0;
  puStack_28 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de3d0 != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar2,"ProgramD3D::GetGeometryExecutableTask::run",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de3d0;
    uStack_24 = func_0x0093d430();
    puStack_28 = &uStack_24;
    pcStack_20 = pcVar2;
    pcStack_1c = "ProgramD3D::GetGeometryExecutableTask::run";
  }
  iStack_18 = *(int *)(param_1 + 8);
  puStack_14 = (undefined4 *)(iStack_18 + 8);
  if (*(char *)(iStack_18 + 0x113) == '\0') {
LAB_00a274ef:
    if (*(char *)(iStack_18 + 0x13c) != '\0') {
      pcVar1 = *(code **)(*(int *)*puStack_14 + 0x54);
      _guard_check_icall();
      iVar6 = (*pcVar1)();
      if ((3 < iVar6) && (iVar6 = func_0x009dbe40(), *(char *)(iVar6 + 0x60) == '\0'))
      goto LAB_00a27520;
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)*puStack_14 + 0x104);
    _guard_check_icall();
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') goto LAB_00a274ef;
LAB_00a27520:
    iVar6 = func_0x00a21bc0(-(uint)(param_1 != 0) & param_1 + 4U,*(undefined4 *)(param_1 + 0x44),0,
                            param_1 + 0x14,param_1 + 0x10);
    if (iVar6 == 1) {
      uVar5 = 1;
      goto LAB_00a27555;
    }
  }
  uVar5 = 0;
LAB_00a27555:
  uStack_8 = 3;
  if ((puStack_28 != (undefined4 *)0x0) && (*(char *)puStack_28[1] != '\0')) {
    func_0x009b90e0(*puStack_28,0x45,(char *)puStack_28[1],puStack_28[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar5;
}



undefined4 __fastcall FUN_00a275f0(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e909;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de3cc) {
    func_0x008ab40d(&DAT_013de3cc,uVar2);
    if (DAT_013de3cc == -1) {
      uStack_8 = 0;
      uVar3 = func_0x0093d430("gpu.angle");
      DAT_013de3c8 = (char *)func_0x009b9170(uVar3);
      func_0x008ab3bc(&DAT_013de3cc);
    }
  }
  pcVar1 = DAT_013de3c8;
  puStack_20 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de3c8 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar1,"ProgramD3D::GetPixelExecutableTask::run",0,0,0,0,0,0,0);
    pcVar1 = DAT_013de3c8;
    uStack_1c = func_0x0093d430();
    puStack_20 = &uStack_1c;
    pcStack_18 = pcVar1;
    pcStack_14 = "ProgramD3D::GetPixelExecutableTask::run";
  }
  iVar4 = func_0x009817b0(4);
  if (iVar4 != 0) {
    func_0x00a1f8b0(*(int *)(param_1 + 8) + 0x118,*(int *)(param_1 + 8) + 0x2f4);
    func_0x00a29360();
    func_0x00a1f470(*(int *)(param_1 + 8) + 0x4d4,*(int *)(param_1 + 8) + 0x50c);
    func_0x00a29360();
    iVar4 = func_0x00a21f10(-(uint)(param_1 != 0) & param_1 + 4U,param_1 + 0x14,param_1 + 0x10);
    if (iVar4 == 1) {
      uVar3 = 1;
      goto LAB_00a2770a;
    }
  }
  uVar3 = 0;
LAB_00a2770a:
  uStack_8 = 4;
  if ((puStack_20 != (undefined4 *)0x0) && (*(char *)puStack_20[1] != '\0')) {
    func_0x009b90e0(*puStack_20,0x45,(char *)puStack_20[1],puStack_20[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar3;
}



bool __fastcall FUN_00a277a0(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e949;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de3c4) {
    func_0x008ab40d(&DAT_013de3c4,uVar2);
    if (DAT_013de3c4 == -1) {
      uStack_8 = 0;
      uVar3 = func_0x0093d430("gpu.angle");
      DAT_013de3c0 = (char *)func_0x009b9170(uVar3);
      func_0x008ab3bc(&DAT_013de3c4);
    }
  }
  pcVar1 = DAT_013de3c0;
  puStack_20 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de3c0 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar1,"ProgramD3D::GetVertexExecutableTask::run",0,0,0,0,0,0,0);
    pcVar1 = DAT_013de3c0;
    uStack_1c = func_0x0093d430();
    puStack_20 = &uStack_1c;
    pcStack_18 = pcVar1;
    pcStack_14 = "ProgramD3D::GetVertexExecutableTask::run";
  }
  iVar4 = func_0x00a22700(-(uint)(param_1 != 0) & param_1 + 4U,param_1 + 0x14,param_1 + 0x10);
  uStack_8 = 3;
  if ((puStack_20 != (undefined4 *)0x0) && (*(char *)puStack_20[1] != '\0')) {
    func_0x009b90e0(*puStack_20,0x45,(char *)puStack_20[1],puStack_20[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4 == 1;
}



undefined4 __fastcall FUN_00a27900(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  undefined1 auStack_14 [4];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e989;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de3bc) {
    func_0x008ab40d(&DAT_013de3bc,uVar2);
    if (DAT_013de3bc == -1) {
      uStack_8 = 0;
      uVar3 = func_0x0093d430("gpu.angle");
      DAT_013de3b8 = (char *)func_0x009b9170(uVar3);
      func_0x008ab3bc(&DAT_013de3bc);
    }
  }
  pcVar1 = DAT_013de3b8;
  puStack_24 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de3b8 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar1,"ProgramD3D::LoadBinaryTask::run",0,0,0,0,0,0,0);
    pcVar1 = DAT_013de3b8;
    uStack_20 = func_0x0093d430();
    puStack_24 = &uStack_20;
    pcStack_1c = pcVar1;
    pcStack_18 = "ProgramD3D::LoadBinaryTask::run";
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    func_0x00970f90(auStack_14,"Failed to copy program binary data to local buffer.");
    func_0x008c2b20();
    uVar3 = 2;
  }
  else {
    uStack_2c = *(undefined4 *)(param_1 + 0x4c);
    uStack_28 = *(undefined4 *)(param_1 + 0x48);
    auStack_34[0] = 0;
    uStack_30 = 0;
    uVar3 = func_0x00a25ea0(-(uint)(param_1 != 0) & param_1 + 4U,auStack_34,param_1 + 0x10);
  }
  uStack_8 = 3;
  if ((puStack_24 != (undefined4 *)0x0) && (*(char *)puStack_24[1] != '\0')) {
    func_0x009b90e0(*puStack_24,0x45,(char *)puStack_24[1],puStack_24[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar3;
}



void __thiscall FUN_00a27a90(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *unaff_FS_OFFSET;
  int iStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  int *piStack_48;
  undefined4 *puStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  undefined4 *puStack_2c;
  undefined1 auStack_28 [20];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e9c5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x3c);
  iStack_3c = param_1;
  _guard_check_icall(auStack_28,uStack_14);
  (*pcVar1)();
  func_0x0096bea0(auStack_28,0x14);
  func_0x0096bec0(0);
  puVar9 = (undefined4 *)(iStack_3c + 0x348);
  for (puVar14 = (undefined4 *)(iStack_3c + 0x308); puVar14 != puVar9; puVar14 = puVar14 + 1) {
    func_0x0096bec0(*puVar14);
  }
  piStack_30 = (int *)(iStack_3c + 0x1a0);
  uStack_40 = uStack_40 & 0xffffff00;
  iStack_38 = iStack_3c + 0x158;
  iVar16 = iStack_3c + 0x1a4;
  puStack_34 = (undefined4 *)0x0;
  do {
    uVar15 = uStack_40;
    func_0x00974900(uStack_40);
    uVar4 = func_0x00a28df0();
    func_0x0096bec0(uVar4);
    uVar12 = 0;
    func_0x00974900(uVar15);
    iVar5 = func_0x00a28df0();
    if (iVar5 != 0) {
      do {
        func_0x00974900(uVar15);
        puVar6 = (undefined1 *)func_0x00a1eea0(uVar12);
        func_0x00970f30(*puVar6);
        func_0x00974900(uVar15);
        iVar5 = func_0x00a1eea0(uVar12);
        func_0x0096bec0(*(undefined4 *)(iVar5 + 4));
        func_0x00974900(uVar15);
        iVar5 = func_0x00a1eea0(uVar12);
        func_0x00970f30(*(undefined1 *)(iVar5 + 8));
        uVar12 = uVar12 + 1;
        func_0x00974900(uVar15);
        uVar7 = func_0x00a28df0();
      } while (uVar12 < uVar7);
    }
    puVar9 = puStack_34;
    func_0x0096bec0(*(undefined4 *)((int)piStack_30 + (int)puStack_34));
    func_0x0096bec0(*(undefined4 *)(iVar16 + (int)puVar9));
    cVar3 = (char)uStack_40 + '\x01';
    puStack_34 = (undefined4 *)((int)puVar9 + 8);
    uStack_40 = CONCAT31(uStack_40._1_3_,cVar3);
  } while (cVar3 != '\x06');
  piStack_30 = (int *)&uStack_4c;
  uStack_4c = 0x405;
  iStack_38 = iStack_3c + 0x21c;
  iVar16 = iStack_3c + 0x264;
  uStack_40 = iStack_3c + 0x1d4;
  iVar5 = iStack_3c + 0x268;
  iVar11 = iStack_3c + 0x294;
  iStack_54 = iStack_3c + 0x298;
  puStack_44 = (undefined4 *)(iStack_3c + 0x2c4);
  puStack_2c = (undefined4 *)(iStack_3c + 0x2c8);
  do {
    puStack_34 = (undefined4 *)CONCAT31(puStack_34._1_3_,*(undefined1 *)piStack_30);
    puVar9 = puStack_34;
    piVar8 = (int *)func_0x00974900(puStack_34);
    func_0x0096bec0(piVar8[1] - *piVar8 >> 3);
    uVar15 = 0;
    piVar8 = (int *)func_0x00974900(puVar9);
    if (piVar8[1] - *piVar8 >> 3 != 0) {
      do {
        piVar8 = (int *)func_0x00974900(puVar9);
        func_0x00970f30(*(undefined1 *)(*piVar8 + uVar15 * 8));
        piVar8 = (int *)func_0x00974900(puVar9);
        func_0x0096bec0(*(undefined4 *)(*piVar8 + 4 + uVar15 * 8));
        uVar15 = uVar15 + 1;
        piVar8 = (int *)func_0x00974900(puVar9);
      } while (uVar15 < (uint)(piVar8[1] - *piVar8 >> 3));
    }
    piVar8 = (int *)func_0x00974900(puVar9);
    func_0x0096bec0(piVar8[1] - *piVar8 >> 3);
    uVar15 = 0;
    piVar8 = (int *)func_0x00974900(puVar9);
    if (piVar8[1] - *piVar8 >> 3 != 0) {
      do {
        piVar8 = (int *)func_0x00974900(puVar9);
        func_0x00970f30(*(undefined1 *)(*piVar8 + uVar15 * 8));
        piVar8 = (int *)func_0x00974900(puVar9);
        func_0x0096bec0(*(undefined4 *)(*piVar8 + 4 + uVar15 * 8));
        uVar15 = uVar15 + 1;
        piVar8 = (int *)func_0x00974900(puVar9);
      } while (uVar15 < (uint)(piVar8[1] - *piVar8 >> 3));
    }
    uVar15 = (uint)puStack_34 & 0xff;
    func_0x0096bec0(*(undefined4 *)(iVar16 + uVar15 * 8));
    func_0x0096bec0(*(undefined4 *)(iVar5 + uVar15 * 8));
    func_0x0096bec0(*(undefined4 *)(iVar11 + uVar15 * 8));
    func_0x0096bec0(*(undefined4 *)(iStack_54 + uVar15 * 8));
    func_0x0096bec0(*(undefined4 *)((int)puStack_44 + uVar15 * 8));
    func_0x0096bec0(puStack_2c[uVar15 * 2]);
    iVar17 = iStack_3c;
    piStack_30 = (int *)((int)piStack_30 + 1);
  } while (piStack_30 != (int *)&uStack_4a);
  uVar4 = func_0x00a28db0();
  func_0x0096bec0(uVar4);
  puVar9 = *(undefined4 **)(iVar17 + 0x430);
  puStack_2c = *(undefined4 **)(iVar17 + 0x434);
  if (puVar9 != *(undefined4 **)(iVar17 + 0x434)) {
    do {
      iVar16 = 6;
      do {
        func_0x0096bee0(*puVar9);
        puVar9 = puVar9 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      iVar17 = iStack_3c;
    } while (puVar9 != puStack_2c);
  }
  piStack_30 = (int *)&uStack_50;
  uStack_50 = 0x405;
  puStack_34 = (undefined4 *)(iVar17 + 0x4a4);
  do {
    puStack_2c = (undefined4 *)CONCAT31(puStack_2c._1_3_,*(undefined1 *)piStack_30);
    puVar9 = puStack_2c;
    func_0x00974900(puStack_2c);
    uVar4 = func_0x0091baf0();
    func_0x0096bec0(uVar4);
    piVar8 = (int *)func_0x00974900(puVar9);
    iVar16 = piVar8[1];
    iVar5 = *piVar8;
    puStack_44 = (undefined4 *)iVar16;
    iVar11 = iStack_3c;
    for (; iStack_3c = iVar11, iVar5 != iVar16; iVar5 = iVar5 + 0xb4) {
      func_0x0097fbc0(param_3,iVar5);
      iVar11 = iStack_3c;
    }
    piStack_30 = (int *)((int)piStack_30 + 1);
  } while (piStack_30 != (int *)&uStack_4e);
  uVar15 = 0;
  do {
    func_0x0096bec0(*(undefined4 *)(uVar15 + 0x484 + iVar11));
    uVar15 = uVar15 + 4;
  } while (uVar15 < 0x20);
  func_0x0096bec0(*(int *)(iVar11 + 0x40c) - *(int *)(iVar11 + 0x408) >> 2);
  puStack_2c = *(undefined4 **)(iVar11 + 0x40c);
  puStack_34 = *(undefined4 **)(iVar11 + 0x408);
  if (puStack_34 != puStack_2c) {
    do {
      piStack_30 = (int *)*puStack_34;
      func_0x00970f30(*(undefined1 *)((int)piStack_30 + 0x40));
      iVar5 = 0;
      iVar16 = 6;
      do {
        func_0x0096bee0(*(undefined4 *)(iVar5 + 0x44 + (int)piStack_30));
        piVar8 = piStack_30;
        iVar5 = iVar5 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      func_0x0096bec0(*(undefined4 *)((int)piStack_30 + 0x5c));
      func_0x0096bec0(*(undefined4 *)((int)piVar8 + 0x60));
      puStack_34 = puStack_34 + 1;
      iVar11 = iStack_3c;
    } while (puStack_34 != puStack_2c);
  }
  uVar4 = func_0x00a28dd0();
  func_0x0096bec0(uVar4);
  puStack_44 = *(undefined4 **)(iVar11 + 0x428);
  iVar16 = *(int *)(iVar11 + 0x424);
  if ((undefined4 *)iVar16 != puStack_44) {
    do {
      iVar5 = 0;
      piStack_30 = (int *)0x6;
      do {
        func_0x0096bee0(*(undefined4 *)(iVar16 + iVar5 * 4));
        puStack_2c = (undefined4 *)(uint)(*(char *)(iVar5 + 0x18 + iVar16) != '\0');
        func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
        func_0x0096bec0(*(undefined4 *)(iVar16 + 0x20 + iVar5 * 4));
        func_0x0096bec0(*(undefined4 *)(iVar16 + 0x38 + iVar5 * 4));
        piStack_30 = (int *)((int)piStack_30 + -1);
        iVar5 = iVar5 + 1;
      } while (piStack_30 != (int *)0x0);
      iVar16 = iVar16 + 0x50;
      piStack_30 = (int *)0x0;
    } while ((undefined4 *)iVar16 != puStack_44);
  }
  iVar11 = iStack_3c;
  uVar4 = func_0x009e9c50();
  func_0x0096bec0(uVar4);
  iVar16 = *(int *)(iVar11 + 0x400);
  iVar5 = *(int *)(iVar11 + 0x3fc);
  for (; iVar5 != iVar16; iVar5 = iVar5 + 0x24) {
    func_0x00970f50(iVar5);
    func_0x0096bec0(*(undefined4 *)(iVar5 + 0x18));
    puStack_2c = *(undefined4 **)(iVar5 + 0x1c);
    func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
    func_0x0096bec0(*(undefined4 *)(iVar5 + 0x20));
    iVar11 = iStack_3c;
  }
  iStack_54 = iVar11 + 0x70;
  piStack_30 = (int *)0x0;
  puStack_44 = (undefined4 *)(iVar11 + 0x100);
  iVar16 = 0;
  puStack_34 = (undefined4 *)0x6;
  do {
    puStack_2c = *(undefined4 **)(iVar16 + 0x10 + iStack_54);
    piVar13 = (int *)(iVar16 + iStack_54);
    func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
    piVar8 = piVar13 + 4;
    if (0xf < (uint)piVar13[5]) {
      piVar13 = (int *)*piVar13;
    }
    func_0x0096a850(*(undefined4 *)(param_3 + 4),piVar13,*piVar8);
    piVar8 = piStack_30;
    func_0x0096a850(*(undefined4 *)(param_3 + 4),(int)puStack_44 + (int)piStack_30,3);
    iVar5 = iStack_3c;
    piStack_30 = (int *)((int)piVar8 + 3);
    iVar16 = iVar16 + 0x18;
    puStack_34 = (undefined4 *)((int)puStack_34 + -1);
  } while (puStack_34 != (undefined4 *)0x0);
  puStack_2c = (undefined4 *)(uint)(*(char *)(iStack_3c + 0x112) != '\0');
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  puStack_2c = (undefined4 *)(uint)(*(char *)(iVar5 + 0x113) != '\0');
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  puStack_2c = (undefined4 *)(uint)(*(char *)(iVar5 + 0x114) != '\0');
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  puStack_2c = (undefined4 *)(uint)(*(char *)(iVar5 + 0x115) != '\0');
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  puStack_2c = (undefined4 *)(uint)(*(char *)(iVar5 + 0x13c) != '\0');
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  puStack_2c = (undefined4 *)(uint)(*(char *)(iVar5 + 0x13d) != '\0');
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  puStack_2c = (undefined4 *)((*(int *)(iVar5 + 0x11c) - *(int *)(iVar5 + 0x118)) / 0x3c);
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  iStack_38 = *(int *)(iVar5 + 0x118);
  puStack_34 = (undefined4 *)0x0;
  iVar11 = *(int *)(iVar5 + 0x11c) - iStack_38;
  iVar16 = iVar11 >> 0x1f;
  if (iVar11 / 0x3c + iVar16 != iVar16) {
    uStack_40 = 0;
    do {
      uVar15 = uStack_40;
      puStack_2c = *(undefined4 **)(uStack_40 + iStack_38);
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      puVar14 = (undefined4 *)(uVar15 + iStack_38 + 4);
      puStack_2c = (undefined4 *)puVar14[4];
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      puVar9 = puVar14 + 4;
      if (0xf < (uint)puVar14[5]) {
        puVar14 = (undefined4 *)*puVar14;
      }
      func_0x0096a850(*(undefined4 *)(param_3 + 4),puVar14,*puVar9);
      puVar14 = (undefined4 *)(iStack_38 + uStack_40 + 0x1c);
      puStack_2c = (undefined4 *)puVar14[4];
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      puVar9 = puVar14 + 4;
      if (0xf < (uint)puVar14[5]) {
        puVar14 = (undefined4 *)*puVar14;
      }
      func_0x0096a850(*(undefined4 *)(param_3 + 4),puVar14,*puVar9);
      uVar15 = uStack_40;
      puStack_2c = *(undefined4 **)(uStack_40 + 0x34 + iStack_38);
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      puStack_2c = *(undefined4 **)(uVar15 + 0x38 + iStack_38);
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      iStack_38 = *(int *)(iVar5 + 0x118);
      uStack_40 = uVar15 + 0x3c;
      puStack_34 = (undefined4 *)((int)puStack_34 + 1);
    } while (puStack_34 < (uint)((*(int *)(iVar5 + 0x11c) - iStack_38) / 0x3c));
  }
  puStack_2c = *(undefined4 **)(iVar5 + 0x134);
  piVar8 = (int *)(iVar5 + 0x124);
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  if (0xf < *(uint *)(iVar5 + 0x138)) {
    piVar8 = (int *)*piVar8;
  }
  func_0x0096a850(*(undefined4 *)(param_3 + 4),piVar8,*(undefined4 *)(iVar5 + 0x134));
  puStack_2c = (undefined4 *)(*(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2);
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  iVar16 = *(int *)(iVar5 + 0x10);
  piStack_30 = (int *)0x0;
  if (*(int *)(iVar5 + 0x14) - iVar16 >> 2 != 0) {
    do {
      piVar8 = *(int **)(iVar16 + (int)piStack_30 * 4);
      puStack_2c = (undefined4 *)(piVar8[1] - *piVar8 >> 2);
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      uVar15 = 0;
      iVar16 = *piVar8;
      if (piVar8[1] - iVar16 >> 2 != 0) {
        do {
          puStack_2c = *(undefined4 **)(iVar16 + uVar15 * 4);
          func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
          uVar15 = uVar15 + 1;
          iVar16 = *piVar8;
        } while (uVar15 < (uint)(piVar8[1] - iVar16 >> 2));
      }
      puVar9 = (undefined4 *)func_0x00a61250();
      puStack_2c = puVar9;
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      uVar4 = FUN_004b5b10();
      func_0x0096a850(*(undefined4 *)(param_3 + 4),uVar4,puVar9);
      piStack_30 = (int *)((int)piStack_30 + 1);
      iVar16 = *(int *)(iStack_3c + 0x10);
      iVar5 = iStack_3c;
    } while (piStack_30 < (uint)(*(int *)(iStack_3c + 0x14) - iVar16 >> 2));
  }
  puStack_2c = (undefined4 *)(*(int *)(iVar5 + 0x20) - *(int *)(iVar5 + 0x1c) >> 2);
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  iVar16 = *(int *)(iVar5 + 0x1c);
  piStack_30 = (int *)0x0;
  if (*(int *)(iVar5 + 0x20) - iVar16 >> 2 != 0) {
    do {
      piVar8 = *(int **)(iVar16 + (int)piStack_30 * 4);
      puStack_2c = (undefined4 *)(piVar8[1] - *piVar8 >> 2);
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      uVar15 = 0;
      iVar16 = *piVar8;
      if (piVar8[1] - iVar16 >> 2 != 0) {
        do {
          puStack_2c = *(undefined4 **)(iVar16 + uVar15 * 4);
          func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
          uVar15 = uVar15 + 1;
          iVar16 = *piVar8;
        } while (uVar15 < (uint)(piVar8[1] - iVar16 >> 2));
      }
      puVar9 = (undefined4 *)func_0x00a61250();
      puStack_2c = puVar9;
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      uVar4 = FUN_004b5b10();
      func_0x0096a850(*(undefined4 *)(param_3 + 4),uVar4,puVar9);
      piStack_30 = (int *)((int)piStack_30 + 1);
      iVar16 = *(int *)(iStack_3c + 0x1c);
      iVar5 = iStack_3c;
    } while (piStack_30 < (int *)(*(int *)(iStack_3c + 0x20) - iVar16 >> 2));
  }
  iVar16 = iStack_3c;
  for (piVar8 = (int *)(iVar5 + 0x28); iStack_3c = iVar16, piVar8 != (int *)(iVar5 + 100);
      piVar8 = piVar8 + 1) {
    if (*piVar8 == 0) {
      ppuVar10 = &puStack_2c;
      puStack_2c = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x4;
    }
    else {
      puStack_44 = (undefined4 *)func_0x00a61250();
      puStack_2c = puStack_44;
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      ppuVar10 = (undefined4 **)FUN_004b5b10();
      puVar9 = puStack_44;
    }
    func_0x0096a850(*(undefined4 *)(param_3 + 4),ppuVar10,puVar9);
    iVar16 = iStack_3c;
  }
  puStack_2c = (undefined4 *)(*(int *)(iVar16 + 0x68) - *(int *)(iVar16 + 100) >> 2);
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  iVar5 = *(int *)(iVar16 + 100);
  puStack_34 = (undefined4 *)0x0;
  if (*(int *)(iVar16 + 0x68) - iVar5 >> 2 != 0) {
    do {
      piVar8 = *(int **)(iVar5 + (int)puStack_34 * 4);
      piStack_48 = (int *)0x0;
      puStack_44 = (undefined4 *)0x0;
      piStack_30 = piVar8;
      piStack_48 = (int *)func_0x008ab47d(0x18);
      *piStack_48 = (int)piStack_48;
      piStack_48[1] = (int)piStack_48;
      piStack_48[2] = (int)piStack_48;
      *(undefined2 *)(piStack_48 + 3) = 0x101;
      uStack_8 = 0;
      iVar5 = func_0x00a1a800(*(undefined4 *)(*piVar8 + 4),piStack_48);
      piStack_48[1] = iVar5;
      puStack_44 = (undefined4 *)piVar8[1];
      piVar8 = (int *)piStack_48[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar3 = *(char *)(*piVar8 + 0xd);
        piVar13 = (int *)*piVar8;
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*piVar13 + 0xd);
          piVar8 = piVar13;
          piVar13 = (int *)*piVar13;
        }
        *piStack_48 = (int)piVar8;
        iVar5 = *(int *)(piStack_48[1] + 8);
        cVar3 = *(char *)(iVar5 + 0xd);
        iVar11 = piStack_48[1];
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
          iVar11 = iVar5;
          iVar5 = *(int *)(iVar5 + 8);
        }
        piStack_48[2] = iVar11;
      }
      else {
        *piStack_48 = (int)piStack_48;
        piStack_48[2] = (int)piStack_48;
      }
      uStack_8 = 1;
      puStack_2c = puStack_44;
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      piVar8 = (int *)*piStack_48;
      cVar3 = *(char *)((int)piVar8 + 0xd);
      while (cVar3 == '\0') {
        puStack_2c = (undefined4 *)piVar8[4];
        func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
        puStack_2c = (undefined4 *)(uint)*(byte *)(piVar8 + 5);
        func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
        piVar13 = (int *)piVar8[2];
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          cVar3 = *(char *)(*piVar13 + 0xd);
          piVar8 = piVar13;
          piVar13 = (int *)*piVar13;
          while (cVar3 == '\0') {
            cVar3 = *(char *)(*piVar13 + 0xd);
            piVar8 = piVar13;
            piVar13 = (int *)*piVar13;
          }
        }
        else {
          cVar3 = *(char *)(piVar8[1] + 0xd);
          piVar2 = (int *)piVar8[1];
          piVar13 = piVar8;
          while ((piVar8 = piVar2, cVar3 == '\0' && (piVar13 == (int *)piVar8[2]))) {
            cVar3 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar13 = piVar8;
          }
        }
        cVar3 = *(char *)((int)piVar8 + 0xd);
      }
      puVar9 = (undefined4 *)func_0x00a61250();
      puStack_2c = puVar9;
      func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
      uVar4 = FUN_004b5b10();
      func_0x0096a850(*(undefined4 *)(param_3 + 4),uVar4,puVar9);
      uStack_8 = 0xffffffff;
      func_0x00a15b30(&piStack_48);
      iVar5 = *(int *)(iVar16 + 100);
      puStack_34 = (undefined4 *)((int)puStack_34 + 1);
    } while (puStack_34 < (uint)(*(int *)(iVar16 + 0x68) - iVar5 >> 2));
  }
  puStack_2c = *(undefined4 **)(iVar16 + 0x518);
  func_0x0096a850(*(undefined4 *)(param_3 + 4),&puStack_2c,4);
  piStack_30 = (int *)**(int **)(iVar16 + 0x514);
  cVar3 = *(char *)((int)piStack_30 + 0xd);
  while (cVar3 == '\0') {
    iStack_54 = *(int *)((int)piStack_30 + 0x10);
    func_0x0096a850(*(undefined4 *)(param_3 + 4),&iStack_54,4);
    func_0x00499be0();
    cVar3 = *(char *)((int)piStack_30 + 0xd);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00a28720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cd20(param_1,param_2,param_3,0x1406);
  return;
}



void FUN_00a28740(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cae0(param_1,param_2,param_3,0x1404);
  return;
}



void FUN_00a28760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cc00(param_1,param_2,param_3,0x1405);
  return;
}



void FUN_00a28780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cd20(param_1,param_2,param_3,0x8b50);
  return;
}



void FUN_00a287a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cae0(param_1,param_2,param_3,0x8b53);
  return;
}



void FUN_00a287c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cc00(param_1,param_2,param_3,0x8dc6);
  return;
}



void FUN_00a287e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cd20(param_1,param_2,param_3,0x8b51);
  return;
}



void FUN_00a28800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cae0(param_1,param_2,param_3,0x8b54);
  return;
}



void FUN_00a28820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cc00(param_1,param_2,param_3,0x8dc7);
  return;
}



void FUN_00a28840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cd20(param_1,param_2,param_3,0x8b52);
  return;
}



void FUN_00a28860(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cae0(param_1,param_2,param_3,0x8b55);
  return;
}



void FUN_00a28880(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a1cc00(param_1,param_2,param_3,0x8dc8);
  return;
}



void __thiscall
FUN_00a288a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x00960210(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a28930(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x00960340(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a289c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x009604c0(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a28a50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x009607f0(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a28ae0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x00960690(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a28b70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x009609d0(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a28c00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x00960df0(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a28c90(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x00960c10(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall
FUN_00a28d20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + param_2 * 0xc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x408) + puVar1[1] * 4);
  uVar2 = *puVar1;
  uVar3 = func_0x0093ddd0(iVar6 + 0x1c);
  piVar5 = (int *)(iVar6 + 0x28);
  uVar4 = 0;
  iVar6 = 6;
  do {
    if (*piVar5 != 0) {
      func_0x00960d00(uVar2,uVar3,param_3,param_4,param_5,*piVar5);
      *(byte *)(param_1 + 0x524) = *(byte *)(param_1 + 0x524) | (byte)(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void __thiscall FUN_00a29af0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_20 [8];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4e254;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x009cce50(auStack_20,param_3,uVar1);
  if (*(char *)(iStack_18 + 0xd) == '\0') {
    piVar2 = (int *)(iStack_18 + 0x10);
    if (0xf < *(uint *)(iStack_18 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    puVar5 = param_3;
    if (0xf < (uint)param_3[5]) {
      puVar5 = (undefined4 *)*param_3;
    }
    iVar3 = func_0x004a6430(puVar5,param_3[4],piVar2,*(undefined4 *)(iStack_18 + 0x20));
    if ((-1 < iVar3) && (iStack_18 != **(int **)(param_1 + 0x40))) goto LAB_00a29bae;
  }
  iStack_14 = func_0x008ab47d(0x70);
  uStack_8 = 0;
  if (iStack_14 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = func_0x00a1cfc0(*param_2,*(undefined1 *)(param_1 + 0x3d),param_3,param_2 + 0xe,1);
  }
  uStack_8 = 0xffffffff;
  puVar5 = (undefined4 *)func_0x00a1edb0(param_3);
  *puVar5 = uVar4;
LAB_00a29bae:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __fastcall FUN_00a29bd0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  char *pcStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4ea34;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  iStack_14 = param_1;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de3ec) {
    func_0x008ab40d(&DAT_013de3ec,uVar5);
    if (DAT_013de3ec == -1) {
      uStack_8 = 0;
      uVar6 = func_0x0093d430("gpu.angle");
      DAT_013de3e8 = (char *)func_0x009b9170(uVar6);
      func_0x008ab3bc(&DAT_013de3ec);
    }
  }
  pcVar4 = DAT_013de3e8;
  puStack_2c = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de3e8 != '\0') {
    uVar6 = func_0x0093d430();
    func_0x009b90e0(uVar6,0x42,pcVar4,"ProgramD3D::ComputeProgramLinkEvent::wait",0,0,0,0,0,0,0);
    pcVar4 = DAT_013de3e8;
    uStack_28 = func_0x0093d430();
    puStack_2c = &uStack_28;
    pcStack_24 = pcVar4;
    pcStack_20 = "ProgramD3D::ComputeProgramLinkEvent::wait";
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x10) + 4);
  _guard_check_icall();
  (*pcVar1)();
  iStack_1c = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iStack_1c != 0) {
    piVar2 = *(int **)(iStack_14 + 4);
    uStack_8._0_1_ = 2;
    if (*piVar2 == 0) {
      iStack_14 = func_0x008ab47d(0xb0);
      uStack_8._0_1_ = 3;
      if (iStack_14 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = func_0x004687a0(1);
      }
      piVar3 = (int *)*piVar2;
      uStack_8._0_1_ = 2;
      *piVar2 = iVar7;
      if (piVar3 != (int *)0x0) {
        pcVar1 = (code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3);
        _guard_check_icall(1);
        (*pcVar1)();
      }
    }
    iStack_14 = *piVar2;
    uStack_18 = 1;
    func_0x0046b6e0(iStack_14 + 0x10,"Failed to create D3D compute shader.");
    func_0x008c2b20();
  }
  iVar7 = iStack_1c;
  uStack_8 = 4;
  if ((puStack_2c != (undefined4 *)0x0) && (*(char *)puStack_2c[1] != '\0')) {
    func_0x009b90e0(*puStack_2c,0x45,(char *)puStack_2c[1],puStack_2c[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void __thiscall FUN_00a29dc0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char ****ppppcVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  char *pcStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  int *piStack_38;
  int *piStack_34;
  char ***pppcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4eb4d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_44 = 0;
  uStack_3c = param_2;
  iStack_48 = param_1;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de3e4) &&
     (func_0x008ab40d(&DAT_013de3e4,uStack_14), DAT_013de3e4 == -1)) {
    uStack_8 = 0;
    uVar7 = func_0x0093d430("gpu.angle");
    DAT_013de3e0 = (char *)func_0x009b9170(uVar7);
    func_0x008ab3bc(&DAT_013de3e4);
  }
  pcVar4 = DAT_013de3e0;
  puStack_5c = (undefined4 *)0x0;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  if (*DAT_013de3e0 != '\0') {
    uVar7 = func_0x0093d430();
    func_0x009b90e0(uVar7,0x42,pcVar4,"ProgramD3D::GraphicsProgramLinkEvent::wait",0,0,0,0,0,0,0);
    pcVar4 = DAT_013de3e0;
    uStack_58 = func_0x0093d430();
    puStack_5c = &uStack_58;
    pcStack_54 = pcVar4;
    pcStack_50 = "ProgramD3D::GraphicsProgramLinkEvent::wait";
  }
  piStack_38 = (int *)(param_1 + 0x20);
  piStack_34 = (int *)(param_1 + 0x38);
  if (piStack_38 != piStack_34) {
    do {
      pcVar2 = *(code **)(*(int *)*piStack_38 + 4);
      _guard_check_icall();
      (*pcVar2)();
      piStack_38 = piStack_38 + 2;
      param_1 = iStack_48;
    } while (piStack_38 != piStack_34);
  }
  iStack_40 = *(int *)(param_1 + 8);
  cVar6 = func_0x00981330();
  if (cVar6 == '\0') {
    piStack_38 = *(int **)(param_1 + 4);
    piVar8 = (int *)func_0x0097ac50(&pppcStack_30);
    uStack_8._0_1_ = 3;
    if (*piStack_38 == 0) {
      piStack_34 = piVar8;
      iStack_4c = func_0x008ab47d(0xb0);
      uStack_8._0_1_ = 4;
      if (iStack_4c == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = func_0x004687a0(1);
      }
      uStack_8._0_1_ = 3;
      piVar3 = (int *)*piStack_38;
      *piStack_38 = iVar9;
      if (piVar3 != (int *)0x0) {
        pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3);
        _guard_check_icall(1);
        (*pcVar2)();
        piVar8 = piStack_34;
        param_1 = iStack_48;
      }
    }
    piStack_34 = (int *)*piStack_38;
    puVar1 = piVar8 + 4;
    uStack_44 = 1;
    if (0xf < (uint)piVar8[5]) {
      piVar8 = (int *)*piVar8;
    }
    func_0x0046cb10(piStack_34 + 4,piVar8,*puVar1);
    uStack_44 = 0;
    func_0x008c2b20();
    uStack_8._0_1_ = 1;
    uVar5 = (undefined1)uStack_8;
    uStack_8._0_1_ = 1;
    if (uStack_1c < 0x10) goto LAB_00a29faa;
    uVar11 = uStack_1c + 1;
    ppppcVar10 = (char ****)pppcStack_30;
    if (uVar11 < 0x1000) {
LAB_00a29fa0:
      func_0x008ab812(ppppcVar10,uVar11);
      goto LAB_00a29faa;
    }
    ppppcVar10 = (char ****)pppcStack_30[-1];
    uVar11 = uStack_1c + 0x24;
    if ((char *)((int)pppcStack_30 + (-4 - (int)ppppcVar10)) < (char *)0x20) goto LAB_00a29fa0;
    uStack_8._0_1_ = uVar5;
    func_0x008aaf66();
LAB_00a2a53f:
    func_0x008aaf66();
LAB_00a2a544:
    func_0x008aaf66();
LAB_00a2a549:
    func_0x008aaf66();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_00a29faa:
  if (*(int *)(iStack_40 + 0xc) != 1) {
    iStack_40 = *(int *)(param_1 + 0x10);
    cVar6 = func_0x00981330();
    if (cVar6 == '\0') {
      piStack_38 = *(int **)(param_1 + 4);
      piVar8 = (int *)func_0x0097ac50(&pppcStack_30);
      uStack_8._0_1_ = 7;
      uVar5 = (undefined1)uStack_8;
      uStack_8._0_1_ = 7;
      if (*piStack_38 == 0) {
        piStack_34 = piVar8;
        iStack_4c = func_0x008ab47d(0xb0);
        uStack_8._0_1_ = 8;
        if (iStack_4c == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = func_0x004687a0(1);
        }
        uStack_8._0_1_ = 7;
        piVar3 = (int *)*piStack_38;
        *piStack_38 = iVar9;
        uVar5 = (undefined1)uStack_8;
        if (piVar3 != (int *)0x0) {
          pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3);
          _guard_check_icall(1);
          (*pcVar2)();
          piVar8 = piStack_34;
          param_1 = iStack_48;
          uVar5 = (undefined1)uStack_8;
        }
      }
      uStack_8._0_1_ = uVar5;
      piStack_34 = (int *)*piStack_38;
      puVar1 = piVar8 + 4;
      uStack_44 = 2;
      if (0xf < (uint)piVar8[5]) {
        piVar8 = (int *)*piVar8;
      }
      func_0x0046cb10(piStack_34 + 4,piVar8,*puVar1);
      uStack_44 = 0;
      func_0x008c2b20();
      uStack_8._0_1_ = 1;
      if (0xf < uStack_1c) {
        uVar11 = uStack_1c + 1;
        ppppcVar10 = (char ****)pppcStack_30;
        if (0xfff < uVar11) {
          ppppcVar10 = (char ****)pppcStack_30[-1];
          uVar11 = uStack_1c + 0x24;
          if ((char *)0x1f < (char *)((int)pppcStack_30 + (-4 - (int)ppppcVar10)))
          goto LAB_00a2a53f;
        }
        func_0x008ab812(ppppcVar10,uVar11);
      }
    }
    if (*(int *)(iStack_40 + 0xc) != 1) {
      iStack_40 = *(int *)(param_1 + 0x18);
      cVar6 = func_0x00981330();
      if (cVar6 == '\0') {
        piStack_38 = *(int **)(param_1 + 4);
        piVar8 = (int *)func_0x0097ac50(&pppcStack_30);
        uStack_8._0_1_ = 0xb;
        uVar5 = (undefined1)uStack_8;
        uStack_8._0_1_ = 0xb;
        if (*piStack_38 == 0) {
          piStack_34 = piVar8;
          iStack_4c = func_0x008ab47d(0xb0);
          uStack_8._0_1_ = 0xc;
          if (iStack_4c == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = func_0x004687a0(1);
          }
          uStack_8._0_1_ = 0xb;
          piVar3 = (int *)*piStack_38;
          *piStack_38 = iVar9;
          uVar5 = (undefined1)uStack_8;
          if (piVar3 != (int *)0x0) {
            pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3);
            _guard_check_icall(1);
            (*pcVar2)();
            piVar8 = piStack_34;
            param_1 = iStack_48;
            uVar5 = (undefined1)uStack_8;
          }
        }
        uStack_8._0_1_ = uVar5;
        piStack_34 = (int *)*piStack_38;
        puVar1 = piVar8 + 4;
        uStack_44 = 4;
        if (0xf < (uint)piVar8[5]) {
          piVar8 = (int *)*piVar8;
        }
        func_0x0046cb10(piStack_34 + 4,piVar8,*puVar1);
        uStack_44 = 0;
        func_0x008c2b20();
        uStack_8._0_1_ = 1;
        if (0xf < uStack_1c) {
          uVar11 = uStack_1c + 1;
          ppppcVar10 = (char ****)pppcStack_30;
          if (0xfff < uVar11) {
            ppppcVar10 = (char ****)pppcStack_30[-1];
            uVar11 = uStack_1c + 0x24;
            if ((char *)0x1f < (char *)((int)pppcStack_30 + (-4 - (int)ppppcVar10)))
            goto LAB_00a2a544;
          }
          func_0x008ab812(ppppcVar10,uVar11);
        }
      }
      if (*(int *)(iStack_40 + 0xc) != 1) {
        if (((*(int *)(*(int *)(param_1 + 8) + 0xc) != 2) &&
            (*(int *)(*(int *)(param_1 + 0x10) + 0xc) != 2)) &&
           (*(int *)(*(int *)(param_1 + 0x18) + 0xc) != 2)) {
          piStack_38 = *(int **)(*(int *)(param_1 + 0x10) + 0x14);
          iStack_40 = *(int *)(*(int *)(param_1 + 8) + 0x14);
          piStack_34 = *(int **)(*(int *)(param_1 + 0x18) + 0x14);
          if ((*(char *)(param_1 + 0x38) != '\0') && (piStack_34 != (int *)0x0)) {
            uStack_3c = 0x1f;
            pppcStack_30 = (char ***)0x0;
            uStack_2c = 0;
            uStack_28 = 0;
            uStack_24 = 0;
            pppcStack_30 = (char ***)func_0x0046cf00(&pppcStack_30,&uStack_3c);
            uStack_20 = 0x1a;
            uStack_1c = uStack_3c;
            *pppcStack_30 = (char **)0x47202f2f;
            ((char ****)pppcStack_30)[1] = (char ***)0x454d4f45;
            ((char ****)pppcStack_30)[2] = (char ***)0x20595254;
            ((char ****)pppcStack_30)[3] = (char ***)0x44414853;
            ((char ****)pppcStack_30)[4] = (char ***)0x42205245;
            ((char ****)pppcStack_30)[5] = (char ***)0x4e494745;
            *(undefined2 *)((char ****)pppcStack_30 + 6) = 0xa0a;
            *(char *)((int)pppcStack_30 + 0x1a) = '\0';
            uStack_8._0_1_ = 0xf;
            ppppcVar10 = &pppcStack_30;
            if (0xf < uStack_3c) {
              ppppcVar10 = (char ****)pppcStack_30;
            }
            func_0x0046a880(ppppcVar10,0x1a);
            uStack_8._0_1_ = 1;
            if (0xf < uStack_1c) {
              uVar11 = uStack_1c + 1;
              ppppcVar10 = (char ****)pppcStack_30;
              if (0xfff < uVar11) {
                ppppcVar10 = (char ****)pppcStack_30[-1];
                uVar11 = uStack_1c + 0x24;
                if ((char *)0x1f < (char *)((int)pppcStack_30 + (-4 - (int)ppppcVar10)))
                goto LAB_00a2a549;
              }
              func_0x008ab812(ppppcVar10,uVar11);
            }
            uVar7 = FUN_006b2e30();
            func_0x00a1fc80(uVar7);
            uStack_3c = 0x1f;
            pppcStack_30 = (char ***)0x0;
            uStack_2c = 0;
            uStack_28 = 0;
            uStack_24 = 0;
            pppcStack_30 = (char ***)func_0x0046cf00(&pppcStack_30,&uStack_3c);
            uStack_20 = 0x17;
            uStack_1c = uStack_3c;
            *pppcStack_30 = (char **)0x4f45470a;
            ((char ****)pppcStack_30)[1] = (char ***)0x5254454d;
            ((char ****)pppcStack_30)[2] = (char ***)0x48532059;
            ((char ****)pppcStack_30)[3] = (char ***)0x52454441;
            ((char ****)pppcStack_30)[4] = (char ***)0x444e4520;
            *(undefined2 *)((char ****)pppcStack_30 + 5) = 0xa0a;
            *(char *)((int)pppcStack_30 + 0x16) = '\n';
            *(char *)((int)pppcStack_30 + 0x17) = '\0';
            uStack_8._0_1_ = 0x10;
            ppppcVar10 = &pppcStack_30;
            if (0xf < uStack_3c) {
              ppppcVar10 = (char ****)pppcStack_30;
            }
            func_0x0046a880(ppppcVar10,0x17);
            uStack_8._0_1_ = 1;
            param_1 = iStack_48;
            if (0xf < uStack_1c) {
              uVar11 = uStack_1c + 1;
              ppppcVar10 = (char ****)pppcStack_30;
              if (0xfff < uVar11) {
                ppppcVar10 = (char ****)pppcStack_30[-1];
                uVar11 = uStack_1c + 0x24;
                if ((char *)0x1f < (char *)((int)pppcStack_30 + (-4 - (int)ppppcVar10)))
                goto LAB_00a2a549;
              }
              func_0x008ab812(ppppcVar10,uVar11);
              param_1 = iStack_48;
            }
          }
          if (iStack_40 != 0) {
            uVar7 = FUN_006b2e30();
            func_0x00a1fc80(uVar7);
          }
          if (piStack_38 != (int *)0x0) {
            uVar7 = FUN_006b2e30();
            func_0x00a1fc80(uVar7);
          }
          if (((iStack_40 == 0) || (piStack_38 == (int *)0x0)) ||
             ((*(char *)(param_1 + 0x38) != '\0' && (piStack_34 == (int *)0x0)))) {
            piVar8 = *(int **)(param_1 + 4);
            uStack_8._0_1_ = 0x11;
            uVar5 = (undefined1)uStack_8;
            uStack_8._0_1_ = 0x11;
            if (*piVar8 == 0) {
              piStack_34 = piVar8;
              iStack_4c = func_0x008ab47d(0xb0);
              uStack_8._0_1_ = 0x12;
              if (iStack_4c == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = func_0x004687a0(1);
              }
              piVar3 = (int *)*piVar8;
              uStack_8._0_1_ = 0x11;
              *piVar8 = iVar9;
              uVar5 = (undefined1)uStack_8;
              if (piVar3 != (int *)0x0) {
                pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3);
                _guard_check_icall(1);
                (*pcVar2)();
                piVar8 = piStack_34;
                uVar5 = (undefined1)uStack_8;
              }
            }
            uStack_8._0_1_ = uVar5;
            piStack_34 = (int *)*piVar8;
            uStack_44 = 8;
            func_0x0046b6e0(piStack_34 + 4,"Failed to create D3D Shaders");
            func_0x008c2b20();
          }
        }
        goto LAB_00a2a49f;
      }
    }
  }
  pcVar2 = *(code **)(*(int *)(-(uint)(*(int *)(uStack_3c + 0x1d14) != 0) &
                              *(int *)(uStack_3c + 0x1d14) + 0x24U) + 4);
  piVar8 = (int *)(iStack_40 + 0x1c);
  if (0xf < *(uint *)(iStack_40 + 0x30)) {
    piVar8 = (int *)*piVar8;
  }
  _guard_check_icall(*(undefined4 *)(iStack_40 + 0x18),piVar8,*(undefined4 *)(iStack_40 + 0x34),
                     *(undefined4 *)(iStack_40 + 0x38),*(undefined4 *)(iStack_40 + 0x3c));
  (*pcVar2)();
LAB_00a2a49f:
  uStack_8 = 0x13;
  if ((puStack_5c != (undefined4 *)0x0) && (*(char *)puStack_5c[1] != '\0')) {
    func_0x009b90e0(*puStack_5c,0x45,(char *)puStack_5c[1],puStack_5c[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_00a2a550(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined4 __thiscall FUN_00a2a560(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 4);
  _guard_check_icall();
  (*pcVar1)();
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0xc) != 1) {
    return 0;
  }
  pcVar1 = *(code **)(*(int *)(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                              *(int *)(param_2 + 0x1d14) + 0x24U) + 4);
  piVar3 = (int *)(iVar2 + 0x1c);
  if (0xf < *(uint *)(iVar2 + 0x30)) {
    piVar3 = (int *)*piVar3;
  }
  _guard_check_icall(*(undefined4 *)(iVar2 + 0x18),piVar3,*(undefined4 *)(iVar2 + 0x34),
                     *(undefined4 *)(iVar2 + 0x38),*(undefined4 *)(iVar2 + 0x3c));
  (*pcVar1)();
  return 1;
}



void FUN_00a2b680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  FUN_009b1460(param_1,param_2,param_3,param_4);
  if (param_1 != 0) {
    piVar3 = (int *)func_0x009e5b10();
    uStack_c = param_4;
    if ((*piVar3 != 0) &&
       (lVar2 = *(longlong *)(piVar3 + 0x82), lVar4 = func_0x009db0d0(), lVar4 == lVar2)) {
      uStack_8 = 0;
      func_0x00e879d7(piVar3 + 1,&uStack_c,0x100,&uStack_8);
      pcVar1 = *(code **)(*(int *)*piVar3 + 0xc);
      _guard_check_icall((int *)*piVar3,piVar3 + 1);
      (*pcVar1)();
    }
  }
  return;
}



void FUN_00a2b790(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  
  FUN_009b1530(param_1,param_2,param_3);
  if (((param_1 != 0) && (piVar3 = (int *)func_0x009e5b10(), *piVar3 != 0)) &&
     (lVar2 = *(longlong *)(piVar3 + 0x82), lVar4 = func_0x009db0d0(), lVar4 == lVar2)) {
    pcVar1 = *(code **)(*(int *)*piVar3 + 0x10);
    _guard_check_icall((int *)*piVar3);
    (*pcVar1)();
  }
  return;
}



bool FUN_00a2b830(int param_1)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return false;
  }
  piVar3 = (int *)func_0x009e5b10();
  if ((*piVar3 != 0) &&
     (lVar2 = *(longlong *)(piVar3 + 0x82), lVar5 = func_0x009db0d0(), lVar5 == lVar2)) {
    pcVar1 = *(code **)(*(int *)*piVar3 + 0x18);
    _guard_check_icall((int *)*piVar3);
    iVar4 = (*pcVar1)();
    return iVar4 != 0;
  }
  return false;
}



void FUN_00a2bab0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  FUN_009b1790(param_1,param_2);
  if (param_1 != 0) {
    piVar3 = (int *)func_0x009e5b10();
    uStack_c = param_2;
    if ((*piVar3 != 0) &&
       (lVar2 = *(longlong *)(piVar3 + 0x82), lVar4 = func_0x009db0d0(), lVar4 == lVar2)) {
      uStack_8 = 0;
      func_0x00e879d7(piVar3 + 1,&uStack_c,0x100,&uStack_8);
      pcVar1 = *(code **)(*(int *)*piVar3 + 0x14);
      _guard_check_icall((int *)*piVar3,piVar3 + 1);
      (*pcVar1)();
    }
  }
  return;
}



undefined4 * __thiscall FUN_00a2c690(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<6>::vftable;
  func_0x00a2c260();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a2c6c0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<0>::vftable;
  func_0x00a2c180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a2c6f0(undefined4 param_1,byte param_2)

{
  func_0x00a2c180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a2c710(undefined4 param_1,byte param_2)

{
  func_0x00a2c260();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a2c730(undefined4 param_1,byte param_2)

{
  func_0x00a2c340();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a2c750(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<0>::vftable;
  func_0x00a2c180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x120);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a2c780(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<6>::vftable;
  func_0x00a2c260();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a2c7b0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TextureHelper11::vftable;
  func_0x00a2c340();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a2ff50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x11c);
  if (**(int **)(param_1 + 8) == 0) {
    iVar2 = func_0x00a305e0(param_2,param_3,param_1 + 0x14,0,param_1 + 4);
    if (iVar2 == 1) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    func_0x00a2fa40(**(undefined4 **)(param_1 + 8),uVar1,*(undefined4 *)(param_1 + 0xc));
  }
  return 0;
}



undefined4 __thiscall FUN_00a2ffb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  if (**(int **)(param_1 + 8) == 0) {
    iVar2 = func_0x00a30bf0(param_2,param_3,param_1 + 0x14,param_1 + 0x1c,param_1 + 4);
    if (iVar2 == 1) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    func_0x00a2fa40(**(undefined4 **)(param_1 + 8),uVar1,*(undefined4 *)(param_1 + 0xc));
  }
  return 0;
}



void __fastcall FUN_00a31c20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a31ec0(param_1[1]);
  }
  return;
}



undefined4 * __thiscall FUN_00a32130(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a31ec0(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a32180(undefined4 param_1,byte param_2)

{
  func_0x00a31cf0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a321a0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a31f80(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a321f0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a32010(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a32010(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a32240(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a320a0(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a320a0(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a32290(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a31ec0(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a322e0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a31f80(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a32330(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (iVar1 != 0) {
    func_0x00a320a0(iVar1);
  }
  if (param_1[1] != 0) {
    func_0x00a320a0(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



void FUN_00a325b0(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_3 != 0) {
    do {
      puVar2 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          iVar1 = param_1;
          puVar4 = puVar2;
          if (param_1 != 0) {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = 0x1000000;
              puVar4 = puVar4 + 1;
            }
          }
          iVar3 = iVar3 + -1;
          puVar2 = (undefined4 *)((int)puVar2 + param_5);
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a32620(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_3 != 0) {
    do {
      puVar2 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          iVar1 = param_1;
          puVar4 = puVar2;
          if (param_1 != 0) {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = 0x7f000000;
              puVar4 = puVar4 + 1;
            }
          }
          iVar3 = iVar3 + -1;
          puVar2 = (undefined4 *)((int)puVar2 + param_5);
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a32690(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_3 != 0) {
    do {
      puVar2 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          iVar1 = param_1;
          puVar4 = puVar2;
          if (param_1 != 0) {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = 0xff000000;
              puVar4 = puVar4 + 1;
            }
          }
          iVar3 = iVar3 + -1;
          puVar2 = (undefined4 *)((int)puVar2 + param_5);
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a32700(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    do {
      puVar1 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          if (param_1 != 0) {
            *puVar1 = 0;
            puVar1[1] = 0x10000;
            puVar4 = puVar1;
            puVar5 = puVar1 + 2;
            for (uVar2 = param_1 * 8 - 8U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          puVar1 = (undefined4 *)((int)puVar1 + param_5);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a32790(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    do {
      puVar1 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          if (param_1 != 0) {
            *puVar1 = 0;
            puVar1[1] = 0x3c000000;
            puVar4 = puVar1;
            puVar5 = puVar1 + 2;
            for (uVar2 = param_1 * 8 - 8U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          puVar1 = (undefined4 *)((int)puVar1 + param_5);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a32820(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    do {
      puVar1 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          if (param_1 != 0) {
            *puVar1 = 0;
            puVar1[1] = 0x7fff0000;
            puVar4 = puVar1;
            puVar5 = puVar1 + 2;
            for (uVar2 = param_1 * 8 - 8U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          puVar1 = (undefined4 *)((int)puVar1 + param_5);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a328b0(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    do {
      puVar1 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          if (param_1 != 0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 1;
            puVar4 = puVar1;
            puVar5 = puVar1 + 4;
            for (uVar2 = param_1 * 0x10 - 0xdU >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          puVar1 = (undefined4 *)((int)puVar1 + param_5);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a32940(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    do {
      puVar1 = param_4;
      iVar3 = param_2;
      if (param_2 != 0) {
        do {
          if (param_1 != 0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0x3f800000;
            puVar4 = puVar1;
            puVar5 = puVar1 + 4;
            for (uVar2 = param_1 * 0x10 - 0xdU >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          puVar1 = (undefined4 *)((int)puVar1 + param_5);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_4 = (undefined4 *)((int)param_4 + param_6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



undefined4 * __thiscall FUN_00a357d0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::base::MRUCacheBase<>::vftable;
  func_0x00a352a0();
  func_0x00a355e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a35810(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::base::MRUCacheBase<>::vftable;
  func_0x00a35330();
  func_0x00a35630();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a35850(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::base::MRUCacheBase<>::vftable;
  func_0x00a353c0();
  func_0x00a35680();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a35890(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::base::MRUCacheBase<>::vftable;
  func_0x00a35450();
  func_0x00a356d0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a358d0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::RenderStateCache::vftable;
  param_1[0x25] = angle::base::MRUCacheBase<>::vftable;
  func_0x00a35450();
  func_0x00a356d0();
  param_1[0x19] = angle::base::MRUCacheBase<>::vftable;
  func_0x00a35330();
  func_0x00a35630();
  param_1[0xd] = angle::base::MRUCacheBase<>::vftable;
  func_0x00a353c0();
  func_0x00a35680();
  param_1[1] = angle::base::MRUCacheBase<>::vftable;
  func_0x00a352a0();
  func_0x00a355e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc4);
  }
  return param_1;
}



undefined4 * __fastcall FUN_00a37e10(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = rx::Resource11Base<>::vftable;
  puVar1 = (undefined4 *)func_0x008ab47d(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  param_1[1] = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = rx::Resource11<>::vftable;
  return param_1;
}



undefined4 * __fastcall FUN_00a37e60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



void __fastcall FUN_00a38a20(int *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar3 = ((param_1[2] - iVar1) / 0x44) * 0x44;
    iVar4 = iVar1;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



undefined4 __fastcall FUN_00a40210(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab84c(param_1,4,0x10,FUN_008c12d0,FUN_0046c770,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00a408c0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(param_1,4,0x10,FUN_0046c770,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00a409e0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -0xd;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = rx::TextureD3D::vftable;
  *param_1 = rx::TextureD3D::vftable;
  FUN_00953180(uVar1);
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x58);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_00a409f0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -0xd;
  puStack_c = &DAT_00f489a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = rx::TextureD3D_2D::vftable;
  *param_1 = rx::TextureD3D_2D::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 10,4,0x10,FUN_0046c770,uVar1);
  *puVar2 = rx::TextureD3D::vftable;
  *param_1 = rx::TextureD3D::vftable;
  FUN_00953180();
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x9c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_00a40a00(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -0xd;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = rx::TextureD3D::vftable;
  *param_1 = rx::TextureD3D::vftable;
  FUN_00953180(uVar1);
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0xd8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_00a40a10(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -0xd;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = rx::TextureD3D::vftable;
  *param_1 = rx::TextureD3D::vftable;
  FUN_00953180(uVar1);
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x5c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_00a40a20(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -0xd;
  puStack_c = &DAT_00f489a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = rx::TextureD3D_3D::vftable;
  *param_1 = rx::TextureD3D_3D::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 9,4,0x10,FUN_0046c770,uVar1);
  *puVar2 = rx::TextureD3D::vftable;
  *param_1 = rx::TextureD3D::vftable;
  FUN_00953180();
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_00a40a30(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -0xd;
  puStack_c = &DAT_00f489a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = rx::TextureD3D_Cube::vftable;
  *param_1 = rx::TextureD3D_Cube::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 9,0x40,6,FUN_00a408c0,uVar1);
  *puVar2 = rx::TextureD3D::vftable;
  *param_1 = rx::TextureD3D::vftable;
  FUN_00953180();
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x1d8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_00a40a40(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureD3D::vftable;
  param_1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180(uVar1);
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a40ac0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f489a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureD3D_2D::vftable;
  param_1[0xd] = rx::TextureD3D_2D::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x17,4,0x10,FUN_0046c770,uVar1);
  *param_1 = rx::TextureD3D::vftable;
  param_1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180();
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x9c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a40b60(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureD3D::vftable;
  param_1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180(uVar1);
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a40be0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureD3D::vftable;
  param_1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180(uVar1);
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a40c60(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f489a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureD3D_3D::vftable;
  param_1[0xd] = rx::TextureD3D_3D::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x16,4,0x10,FUN_0046c770,uVar1);
  *param_1 = rx::TextureD3D::vftable;
  param_1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180();
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a40d00(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f489a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureD3D_Cube::vftable;
  param_1[0xd] = rx::TextureD3D_Cube::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x16,0x40,6,FUN_00a408c0,uVar1);
  *param_1 = rx::TextureD3D::vftable;
  param_1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180();
  func_0x00953200();
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1d8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a40da0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::bindTexImage",0xfce);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a40df0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_24 = 0xa40e04;
  puVar2 = (undefined4 *)FUN_004b4680();
  uVar5 = *puVar2;
  uStack_24 = 0xa40e0d;
  uVar3 = func_0x0092f1f0();
  uStack_24 = 0xa40e16;
  uStack_c = func_0x0092f480();
  uStack_24 = 1;
  uStack_4 = 1;
  uStack_8 = uVar3;
  iVar4 = func_0x00a46ea0(param_2,0,uVar5,&uStack_c);
  if (iVar4 != 1) {
    uStack_24 = 0;
    iVar4 = func_0x00a47910(param_2,&uStack_24);
    if (iVar4 != 1) {
      iVar4 = *(int *)(param_1 + 0x30);
      pcVar1 = *(code **)(**(int **)(param_1 + 0x38) + 0xa4);
      uVar5 = FUN_004b24c0();
      _guard_check_icall(uVar5,iVar4 + 0xb8);
      uVar5 = (*pcVar1)();
      *(undefined4 *)(param_1 + 0x40) = uVar5;
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 0x3c) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x16) = 0;
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00a40ec0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_2DArray::bindTexImage",0xe20);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a40f10(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_3D::bindTexImage",0xb37);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a40f60(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::bindTexImage",0x118d);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a40fb0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Cube::bindTexImage",0x877);
  (*pcVar1)();
  return 1;
}



bool __thiscall FUN_00a41110(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  uint uStack_24;
  
  uStack_24 = (uint)*(byte *)(param_3 + 0x6c);
  uVar3 = func_0x0093d180();
  uStack_24 = 0;
  piVar4 = (int *)func_0x008df7e0(uVar3);
  uVar6 = 0;
  uVar1 = *(undefined4 *)(*piVar4 + 8);
  func_0x008df840(uVar3,0);
  uStack_24 = func_0x008dff30(uVar3,0);
  iVar5 = func_0x00a46ea0(unaff_EBX,0,uVar1,&uStack_24,0);
  if (iVar5 != 1) {
    pcVar2 = *(code **)(*param_1 + 200);
    _guard_check_icall(unaff_EBX,0);
    iVar5 = (*pcVar2)();
    if (iVar5 != 1) {
      pcVar2 = *(code **)(*(int *)param_1[0xe] + 0x70);
      _guard_check_icall(unaff_EBX,uVar6,0,param_1[0x10],0);
      iVar5 = (*pcVar2)();
      return iVar5 == 1;
    }
  }
  return true;
}



undefined4 FUN_00a411f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::copyImage",0xfbd);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a41240(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  int iStack_5c;
  int iStack_40;
  int aiStack_3c [6];
  int *piStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_c;
  
  iStack_5c = 0x1401;
  piStack_60 = (int *)param_5;
  uStack_64 = 0xa41257;
  iVar3 = func_0x00946bf0();
  piStack_24 = (int *)0x1;
  aiStack_3c[4] = param_4[2];
  aiStack_3c[5] = param_4[3];
  piStack_60 = aiStack_3c + 4;
  iStack_5c = 0;
  uStack_64 = *(undefined4 *)(iVar3 + 8);
  uStack_68 = *(undefined4 *)(param_3 + 4);
  uStack_6c = param_2;
  iVar3 = func_0x00a46ea0();
  if (iVar3 == 1) {
    return 1;
  }
  iVar3 = func_0x0098d9d0();
  pcVar1 = *(code **)(**(int **)(iVar3 + 0x18) + 4);
  _guard_check_icall(&stack0xffffffa8,iVar3 + 8);
  (*pcVar1)();
  if (((((*param_4 < 0) || (param_4[1] < 0)) || ((int)piStack_60 < param_4[2] + *param_4)) ||
      (iStack_5c < param_4[3] + param_4[1])) &&
     ((*(char *)(iStack_18 + 0x1345) != '\0' || (*(char *)(iStack_18 + 0x18ad) != '\0')))) {
    pcVar1 = *(code **)(*param_1 + 8);
    _guard_check_icall(iStack_18,0,iStack_14);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
  }
  aiStack_3c[4] = 0;
  aiStack_3c[5] = 0;
  aiStack_3c[0] = 0;
  aiStack_3c[1] = 0;
  aiStack_3c[2] = 0;
  aiStack_3c[3] = 0;
  piStack_24 = piStack_60;
  iStack_20 = iStack_5c;
  cVar2 = func_0x00953b30(param_4,aiStack_3c + 4,aiStack_3c);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = func_0x00a41000(iStack_14);
  if ((cVar2 == '\0') || (iVar3 = func_0x009dbe40(), *(char *)(iVar3 + 0x48) != '\0')) {
    pcVar1 = *(code **)(*(int *)param_1[*(int *)(iStack_14 + 4) + 0x17] + 0x2c);
    _guard_check_icall(uStack_1c,&stack0xffffffa8,&iStack_40,uStack_c);
    iVar3 = (*pcVar1)();
    if (iVar3 != 1) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      return 0;
    }
  }
  else {
    uStack_68 = CONCAT22(uStack_68._2_2_,1);
    iVar3 = func_0x00a44460(iStack_18,uStack_68);
    if (iVar3 != 1) {
      if (iStack_40 == 0) {
        return 0;
      }
      if (aiStack_3c[0] == 0) {
        return 0;
      }
      cVar2 = func_0x00a46b50(*(undefined4 *)(iStack_14 + 4));
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = func_0x00a4abb0(iStack_18,*(undefined4 *)(iStack_14 + 4));
      if (iVar3 != 1) {
        pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x5c);
        _guard_check_icall(aiStack_3c[3],iStack_20,&stack0xffffffac,piStack_24,&uStack_6c,
                           param_1[0x10],*(undefined4 *)(iStack_14 + 4));
        iVar3 = (*pcVar1)();
        if (iVar3 != 1) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_00a41490(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_2DArray::copyImage",0xd36);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a414e0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_3D::copyImage",0xa71);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a41530(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::copyImage",0x117d);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a41580(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  int iStack_60;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_10;
  
  iStack_60 = 0xa41594;
  iVar4 = FUN_004b5b20();
  iStack_60 = 0x1401;
  piStack_64 = (int *)param_5;
  uStack_68 = 0xa415a8;
  iVar5 = func_0x00946bf0();
  uStack_30 = 1;
  iStack_38 = param_4[2];
  iStack_34 = param_4[3];
  iStack_60 = 0;
  piStack_64 = &iStack_38;
  uStack_68 = *(undefined4 *)(iVar5 + 8);
  uStack_6c = *(undefined4 *)(param_3 + 4);
  iVar5 = func_0x00a47570(param_2);
  if (iVar5 == 1) {
    return 1;
  }
  iVar5 = func_0x0098d9d0();
  iVar6 = iVar5 + 8;
  pcVar1 = *(code **)(**(int **)(iVar5 + 0x18) + 4);
  _guard_check_icall(&stack0xffffffa4,iVar6);
  (*pcVar1)();
  if (((((*param_4 < 0) || (param_4[1] < 0)) || ((int)piStack_64 < param_4[2] + *param_4)) ||
      (iStack_60 < param_4[3] + param_4[1])) &&
     ((*(char *)(iStack_1c + 0x1345) != '\0' || (*(char *)(iStack_1c + 0x18ad) != '\0')))) {
    pcVar1 = *(code **)(*param_1 + 8);
    _guard_check_icall(iStack_1c,0,iStack_18);
    iVar5 = (*pcVar1)();
    if (iVar5 == 1) {
      return 1;
    }
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  piStack_28 = piStack_64;
  iStack_24 = iStack_60;
  cVar3 = func_0x00953b30(param_4,&uStack_30,&uStack_40);
  if (cVar3 == '\0') {
    return 0;
  }
  uStack_44 = 0;
  cVar3 = func_0x00a41000(iStack_18);
  if ((cVar3 == '\0') || (iVar5 = func_0x009dbe40(), *(char *)(iVar5 + 0x48) != '\0')) {
    pcVar1 = *(code **)(*(int *)param_1[iVar4 * 0x10 + *(int *)(iStack_18 + 4) + 0x16] + 0x2c);
    _guard_check_icall(uStack_20,&stack0xffffffb0,&uStack_44,uStack_10);
    iVar4 = (*pcVar1)();
    if (iVar4 != 1) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      func_0x00953460(2);
      return 0;
    }
  }
  else {
    uStack_6c = CONCAT22(uStack_6c._2_2_,1);
    iVar4 = func_0x00a44460(iStack_1c,uStack_6c);
    if (iVar4 != 1) {
      if ((int)piStack_64 < 1) {
        return 0;
      }
      cVar3 = func_0x00a46950(iVar6,*(undefined4 *)(iStack_18 + 4));
      if (cVar3 == '\0') {
        return 0;
      }
      iVar4 = func_0x00a4aac0(iStack_1c,iVar6,*(undefined4 *)(iStack_18 + 4));
      if (iVar4 != 1) {
        uVar2 = *(undefined4 *)(iStack_18 + 4);
        pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x60);
        uVar7 = func_0x00967be0();
        _guard_check_icall(uStack_3c,uStack_2c,&iStack_60,uStack_30,&uStack_6c,param_1[0x10],uVar7,
                           uVar2);
        iVar4 = (*pcVar1)();
        if (iVar4 != 1) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_00a417f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::copySubImage",0xfc7);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a41840(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_retaddr;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar3 = func_0x0098d9d0();
  pcVar7 = *(code **)(**(int **)(iVar3 + 0x18) + 4);
  _guard_check_icall(auStack_2c,iVar3 + 8);
  (*pcVar7)();
  uStack_10 = uStack_34;
  uStack_c = uStack_30;
  uStack_18 = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  cVar2 = func_0x00953b30(param_3,&uStack_18,&iStack_28);
  if (cVar2 == '\0') {
    return 0;
  }
  uStack_38 = 0;
  iStack_40 = (*param_2 - *param_3) + iStack_28;
  iStack_3c = (param_2[1] - param_3[1]) + iStack_24;
  cVar2 = func_0x00a41000(unaff_retaddr);
  if ((cVar2 == '\0') || (iVar3 = func_0x009dbe40(), *(char *)(iVar3 + 0x48) != '\0')) {
    pcVar7 = *(code **)(*(int *)param_1[*(int *)(unaff_retaddr + 4) + 0x17] + 0x2c);
    _guard_check_icall(uStack_8,auStack_44,auStack_2c,param_6);
    iVar3 = (*pcVar7)();
    if (iVar3 == 1) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    func_0x00953460(2);
    return 0;
  }
  iVar3 = func_0x00a44460(uStack_8,1);
  if (iVar3 == 1) {
    return 1;
  }
  cVar2 = func_0x00a46b50(*(undefined4 *)(unaff_retaddr + 4));
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = func_0x00a4abb0(uStack_8,*(undefined4 *)(unaff_retaddr + 4));
  if (iVar3 == 1) {
    return 1;
  }
  pcVar7 = *(code **)(*(int *)param_1[0xe] + 0x5c);
  uVar6 = *(undefined4 *)(unaff_retaddr + 4);
  iVar3 = param_1[0x10];
  if ((uint)param_1[0x15] < 0x10) {
    iVar5 = *param_1;
    pcVar1 = *(code **)(iVar5 + 0xa8);
    _guard_check_icall(&uStack_30,param_1[0x15],0);
    uVar4 = (*pcVar1)();
    pcVar1 = *(code **)(iVar5 + 0x98);
    _guard_check_icall(uVar4);
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      uVar4 = *(undefined4 *)(iVar5 + 0x10);
      goto LAB_00a419ad;
    }
  }
  uVar4 = 0;
LAB_00a419ad:
  uVar4 = func_0x00946f70(uVar4);
  _guard_check_icall(uStack_8,uStack_c,&iStack_40,uVar4,&stack0xffffffa8,iVar3,uVar6);
  iVar3 = (*pcVar7)();
  if (iVar3 == 1) {
    return 1;
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall
FUN_00a41a50(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_retaddr;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 *puStack_58;
  int iStack_54;
  int iStack_38;
  int aiStack_34 [3];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iStack_54 = 0xa41a64;
  iVar3 = func_0x0098d9d0();
  iStack_54 = iVar3 + 8;
  puStack_58 = auStack_1c;
  pcVar7 = *(code **)(**(int **)(iVar3 + 0x18) + 4);
  _guard_check_icall();
  (*pcVar7)();
  aiStack_34[2] = uStack_24;
  uStack_28 = uStack_20;
  aiStack_34[0] = 0;
  iStack_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  aiStack_34[1] = 0;
  cVar2 = func_0x00953b30(param_3,aiStack_34,&iStack_18);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = (*param_2 - *param_3) + iStack_18;
  iVar4 = (param_2[1] - param_3[1]) + iStack_14;
  iStack_38 = param_2[2];
  cVar2 = func_0x00a41000(unaff_retaddr);
  if (cVar2 == '\0') {
    aiStack_34[1] = 0;
    pcVar7 = *(code **)(**(int **)(*(int *)(param_1 + 0x98 + *(int *)(unaff_retaddr + 4) * 4) +
                                  iVar4 * 4) + 0x2c);
    aiStack_34[0] = iVar3;
    _guard_check_icall(uStack_8,&iStack_38,auStack_1c,param_6);
    iVar3 = (*pcVar7)();
    if (iVar3 != 1) {
      *(undefined1 *)(param_1 + 0x3c) = 1;
      func_0x00953460(2);
      return 0;
    }
  }
  else {
    iVar3 = func_0x00a44460(uStack_8,1);
    if (iVar3 != 1) {
      cVar2 = func_0x00a46b50(*(undefined4 *)(unaff_retaddr + 4));
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = func_0x00a4ac90(uStack_8,*(undefined4 *)(unaff_retaddr + 4));
      if (iVar3 != 1) {
        uVar1 = *(undefined4 *)(unaff_retaddr + 4);
        pcVar7 = *(code **)(**(int **)(param_1 + 0x38) + 0x68);
        uVar6 = *(undefined4 *)(param_1 + 0x40);
        iVar3 = *(int *)(param_1 + 0x54);
        if ((iVar3 < 0x10) && (0 < *(int *)(param_1 + 0x58 + iVar3 * 4))) {
          uVar5 = *(undefined4 *)(**(int **)(param_1 + 0x98 + iVar3 * 4) + 0x10);
        }
        else {
          uVar5 = 0;
        }
        uVar5 = func_0x00946f70(uVar5);
        _guard_check_icall(uStack_8,uStack_c,aiStack_34 + 1,uVar5,&puStack_58,uVar6,uVar1);
        iVar3 = (*pcVar7)();
        if (iVar3 != 1) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a41c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int unaff_retaddr;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  iVar3 = func_0x0098d9d0();
  pcVar1 = *(code **)(**(int **)(iVar3 + 0x18) + 4);
  _guard_check_icall(auStack_2c,iVar3 + 8);
  (*pcVar1)();
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_24 = 0;
  cVar2 = func_0x00953b30(param_3,&uStack_28,&uStack_18);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (cVar2 = func_0x00a46890(*(undefined4 *)(unaff_retaddr + 4)), cVar2 != '\0')) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x58 + *(int *)(unaff_retaddr + 4) * 4) + 0x28);
    _guard_check_icall(uStack_4,unaff_retaddr,*(undefined4 *)(param_1 + 0x40));
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x58 + *(int *)(unaff_retaddr + 4) * 4) + 0x2c);
  _guard_check_icall(uStack_4,&stack0xffffffc0,&uStack_18);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    func_0x00953460(2);
    if (param_4._3_1_ == '\0') {
      return 0;
    }
    iVar3 = func_0x00a4adf0(uStack_18,*(undefined4 *)(unaff_retaddr + 4));
    if (iVar3 != 1) {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00a41d90(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::copySubImage",0x1187);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a41de0(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  int iStack_60;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iStack_60 = 0xa41df4;
  iVar4 = func_0x0098d9d0();
  iStack_60 = iVar4 + 8;
  pcVar9 = *(code **)(**(int **)(iVar4 + 0x18) + 4);
  _guard_check_icall(auStack_2c);
  (*pcVar9)();
  uStack_10 = uStack_34;
  uStack_c = uStack_30;
  uStack_18 = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  cVar2 = func_0x00953b30(param_3,&uStack_18,&iStack_28);
  if (cVar2 == '\0') {
    return 0;
  }
  uStack_38 = 0;
  iStack_40 = (*param_2 - *param_3) + iStack_28;
  iStack_3c = (param_2[1] - param_3[1]) + iStack_24;
  iVar4 = FUN_004b5b20();
  cVar2 = func_0x00a41000(unaff_retaddr);
  if ((cVar2 == '\0') || (iVar5 = func_0x009dbe40(), *(char *)(iVar5 + 0x48) != '\0')) {
    pcVar9 = *(code **)(*(int *)param_1[iVar4 * 0x10 + *(int *)(unaff_retaddr + 4) + 0x16] + 0x2c);
    _guard_check_icall(uStack_8,auStack_44,auStack_2c,param_6);
    iVar4 = (*pcVar9)();
    if (iVar4 == 1) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    func_0x00953460(2);
    return 0;
  }
  iVar5 = func_0x00a44460(uStack_8,1);
  if (iVar5 == 1) {
    return 1;
  }
  cVar2 = func_0x00a46950(iVar4,*(undefined4 *)(unaff_retaddr + 4));
  if (cVar2 == '\0') {
    return 0;
  }
  iVar4 = func_0x00a4aac0(uStack_8,iVar4,*(undefined4 *)(unaff_retaddr + 4));
  if (iVar4 == 1) {
    return 1;
  }
  pcVar9 = *(code **)(*(int *)param_1[0xe] + 0x60);
  uVar7 = *(undefined4 *)(unaff_retaddr + 4);
  bVar3 = func_0x00967be0();
  uVar8 = (uint)bVar3;
  iVar4 = param_1[0x10];
  if ((uint)param_1[0x15] < 0x10) {
    iVar5 = *param_1;
    pcVar1 = *(code **)(iVar5 + 0xa8);
    _guard_check_icall(&uStack_38,param_1[0x15],0);
    uVar6 = (*pcVar1)();
    pcVar1 = *(code **)(iVar5 + 0x98);
    _guard_check_icall(uVar6);
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      uVar6 = *(undefined4 *)(iVar5 + 0x10);
      goto LAB_00a41f63;
    }
  }
  uVar6 = 0;
LAB_00a41f63:
  uVar6 = func_0x00946f70(uVar6);
  _guard_check_icall(uStack_8,uStack_14,auStack_48,uVar6,&iStack_60,iVar4,uVar8,uVar7);
  iVar4 = (*pcVar9)();
  if (iVar4 == 1) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall
FUN_00a42010(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  int in_stack_00000024;
  undefined4 *puStack_4c;
  int **ppiStack_48;
  undefined4 *puStack_44;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  if ((int)param_3[1] < 0x10) {
    puStack_44 = *(undefined4 **)(param_1[param_3[1] + 0x17] + 0x10);
  }
  else {
    puStack_44 = (undefined4 *)0x0;
  }
  ppiStack_48 = (int **)0xa4203a;
  piStack_30 = param_1;
  iVar3 = func_0x00946ea0();
  if (*(int *)(iVar3 + 0x58) != 0x8c40) {
    puStack_44 = param_3;
    ppiStack_48 = (int **)0xa42057;
    cVar2 = func_0x00a41000();
    if (cVar2 != '\0') {
      uStack_2c = CONCAT22(uStack_2c._2_2_,1);
      puStack_44 = (undefined4 *)uStack_2c;
      ppiStack_48 = (int **)param_2;
      puStack_4c = (undefined4 *)0xa42074;
      iVar3 = func_0x00a44460();
      if (iVar3 == 1) {
        return 1;
      }
      puStack_4c = (undefined4 *)param_3[1];
      iVar3 = func_0x00a4abb0(param_2);
      if (iVar3 != 1) {
        if ((int)param_3[1] < 0x10) {
          uVar4 = *(undefined4 *)(param_1[param_3[1] + 0x17] + 0x10);
        }
        else {
          uVar4 = 0;
        }
        iVar3 = func_0x00946ea0(uVar4);
        uVar4 = *(undefined4 *)(iStack_8 + 4);
        pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x6c);
        uVar5 = func_0x00967be0();
        _guard_check_icall(uStack_c,param_6,unaff_retaddr,0,param_2,*(undefined4 *)(iVar3 + 0x4c),
                           *(undefined4 *)(iVar3 + 0x50),uStack_4,*(undefined4 *)(unaff_EDI + 0x40),
                           uVar5,uVar4,param_3,param_4,param_5);
        iVar3 = (*pcVar1)();
        if (iVar3 != 1) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
  }
  puStack_44 = (undefined4 *)param_5;
  ppiStack_48 = (int **)auStack_28;
  puStack_4c = (undefined4 *)0xa42126;
  func_0x00967750();
  piVar7 = *(int **)(in_stack_00000024 + 0x140);
  pcVar1 = *(code **)(*piVar7 + 0x98);
  puStack_44 = (undefined4 *)auStack_28;
  ppiStack_48 = (int **)0xa42148;
  _guard_check_icall();
  ppiStack_48 = (int **)0xa4214c;
  piVar6 = (int *)(*pcVar1)();
  piStack_30 = (int *)piVar7[0x10];
  if (piStack_30 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_30 + 0xc);
    ppiStack_48 = (int **)0xa42168;
    _guard_check_icall();
    ppiStack_48 = (int **)0xa4216e;
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      ppiStack_48 = (int **)piVar7[0x10];
      pcVar1 = *(code **)(*piVar6 + 0x28);
      puStack_4c = &uStack_2c;
      _guard_check_icall(unaff_retaddr);
      iVar3 = (*pcVar1)();
      if (iVar3 == 1) {
        return 1;
      }
      *(undefined1 *)(piVar7 + 0xf) = 1;
    }
  }
  *(undefined1 *)((int)piVar6 + 0x16) = 0;
  ppiStack_48 = &piStack_30;
  piStack_30 = (int *)0x0;
  puStack_4c = param_3;
  iVar3 = func_0x00a44e50(unaff_retaddr);
  if (iVar3 != 1) {
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x9c);
    _guard_check_icall(uStack_c,unaff_ESI,unaff_EDI,param_2,uStack_4,param_3,param_4,param_5);
    iVar3 = (*pcVar1)();
    if (iVar3 != 1) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      ppiStack_48 = (int **)*puStack_24;
      puStack_44 = (undefined4 *)puStack_24[1];
      if (param_1[0x10] != 0) {
        pcVar1 = *(code **)(*param_1 + 0x98);
        _guard_check_icall(param_3);
        piVar7 = (int *)(*pcVar1)();
        pcVar1 = *(code **)(*piVar7 + 0x24);
        _guard_check_icall(piStack_30,param_1[0x10],param_3,&puStack_4c);
        iVar3 = (*pcVar1)();
        if (iVar3 == 1) {
          return 1;
        }
        *(undefined1 *)((int)piVar7 + 0x16) = 0;
      }
      return 0;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a422a0(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            int param_10)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 unaff_EBP;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined1 *puVar9;
  int *piStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piStack_64 = param_6 + 5;
  func_0x00967810(auStack_60,*(undefined4 *)(param_3 + 4),param_4[2],param_6[5] - param_4[2]);
  if ((iStack_5c < 0x10) && (0 < param_1[iStack_5c + 0x16])) {
    uVar4 = *(undefined4 *)(*(int *)param_1[iStack_5c + 0x26] + 0x10);
  }
  else {
    uVar4 = 0;
  }
  iVar3 = func_0x00946ea0(uVar4);
  if ((*(int *)(iVar3 + 0x58) != 0x8c40) && (cVar2 = func_0x00a41000(auStack_60), cVar2 != '\0')) {
    iVar3 = func_0x00a44460(param_2,1);
    if ((iVar3 != 1) && (iVar3 = func_0x00a4ac90(param_2,piStack_64), iVar3 != 1)) {
      uVar4 = func_0x00a44fc0(param_1);
      iVar3 = func_0x00946ea0(uVar4);
      uVar4 = *(undefined4 *)(iStack_c + 4);
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x6c);
      uVar5 = func_0x00967be0();
      _guard_check_icall(uStack_10,param_5,uStack_4,1,unaff_retaddr,*(undefined4 *)(iVar3 + 0x4c),
                         *(undefined4 *)(iVar3 + 0x50),uStack_8,*(undefined4 *)(unaff_EDI + 0x40),
                         uVar5,uVar4,param_2,param_3,param_4);
      iVar3 = (*pcVar1)();
      if (iVar3 != 1) {
        return 0;
      }
    }
    return 1;
  }
  iVar3 = 0;
  if (0 < (int)param_6[5]) {
    do {
      func_0x009677b0(auStack_50,param_5,param_6[2] + iVar3);
      func_0x009677b0(auStack_40,*(undefined4 *)(param_3 + 4),param_4[2] + iVar3);
      uStack_30 = *param_6;
      uStack_2c = param_6[1];
      uStack_24 = param_6[3];
      uStack_20 = param_6[4];
      uStack_28 = 0;
      uStack_1c = 1;
      piVar8 = *(int **)(param_10 + 0x140);
      pcVar1 = *(code **)(*piVar8 + 0x98);
      puVar9 = auStack_50;
      _guard_check_icall(puVar9);
      piVar6 = (int *)(*pcVar1)();
      if ((int *)piVar8[0x10] != (int *)0x0) {
        pcVar1 = *(code **)(*(int *)piVar8[0x10] + 0xc);
        _guard_check_icall(puVar9);
        cVar2 = (*pcVar1)();
        if (cVar2 != '\0') {
          pcVar1 = *(code **)(*piVar6 + 0x28);
          _guard_check_icall(unaff_retaddr,auStack_54,piVar8[0x10]);
