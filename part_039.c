}



undefined4 FUN_00a700f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_External::getSwizzleRenderTarget",0x720);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a70140(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_30;
  if (*(int *)(*(int *)(param_1 + 0x614) + 4) == 0) {
    iVar1 = func_0x00a33e50(*(int *)(param_1 + 0x4c) + 0x1f98);
    uStack_30 = *(undefined4 *)(param_1 + 0x60);
    uStack_2c = *(undefined4 *)(param_1 + 0x54);
    uStack_28 = 1;
    uStack_24 = *(undefined4 *)(iVar1 + 8);
    uStack_20 = 1;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0x28;
    uStack_10 = 0;
    uStack_c = 0;
    iVar1 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&stack0xffffffcc,iVar1,0,
                            param_1 + 0x610);
    if (iVar1 == 1) {
      FUN_008ab370();
      return;
    }
    *(char **)(param_1 + 0x620) = "TexStorage2D.SwizzleTexture";
    *(int *)(param_1 + 0x61c) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x614) + 4),"TexStorage2D.SwizzleTexture",
                    param_1 + 0x34);
  }
  *param_3 = param_1 + 0x610;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a70260(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_30;
  if (*(int *)(*(int *)(param_1 + 0x5a8) + 4) == 0) {
    iVar1 = func_0x00a33e50(*(int *)(param_1 + 0x4c) + 0x1f98);
    uStack_30 = *(undefined4 *)(param_1 + 0x60);
    uStack_2c = *(undefined4 *)(param_1 + 0x54);
    uStack_28 = *(undefined4 *)(param_1 + 100);
    uStack_24 = *(undefined4 *)(iVar1 + 8);
    uStack_20 = 1;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0x28;
    uStack_10 = 0;
    uStack_c = 0;
    iVar1 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&stack0xffffffcc,iVar1,0,
                            param_1 + 0x5a4);
    if (iVar1 == 1) {
      FUN_008ab370();
      return;
    }
    *(char **)(param_1 + 0x5b4) = "TexStorage2DArray.SwizzleTexture";
    *(int *)(param_1 + 0x5b0) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x5a8) + 4),
                    "TexStorage2DArray.SwizzleTexture",param_1 + 0x34);
  }
  *param_3 = param_1 + 0x5a4;
  FUN_008ab370();
  return;
}



undefined4 FUN_00a70380(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisample::getSwizzleTexture",0xf25);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a703d0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisampleArray::getSwizzleTexture",0x1034);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a70420(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_28;
  if (*(int *)(*(int *)(param_1 + 0x5e8) + 4) == 0) {
    iVar1 = func_0x00a33e50(*(int *)(param_1 + 0x4c) + 0x1f98);
    uStack_28 = *(undefined4 *)(param_1 + 0x60);
    uStack_24 = *(undefined4 *)(param_1 + 100);
    uStack_20 = *(undefined4 *)(param_1 + 0x54);
    uStack_1c = *(undefined4 *)(iVar1 + 8);
    uStack_18 = 0;
    uStack_14 = 0x28;
    uStack_10 = 0;
    uStack_c = 0;
    iVar1 = func_0x009df9e0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&stack0xffffffd4,iVar1,0,
                            param_1 + 0x5e4);
    if (iVar1 == 1) {
      FUN_008ab370();
      return;
    }
    *(char **)(param_1 + 0x5f4) = "TexStorage3D.SwizzleTexture";
    *(int *)(param_1 + 0x5f0) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x5e8) + 4),"TexStorage3D.SwizzleTexture",
                    param_1 + 0x34);
  }
  *param_3 = param_1 + 0x5e4;
  FUN_008ab370();
  return;
}



undefined4 FUN_00a70530(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_Buffer::getSwizzleTexture",0x1099);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a70580(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_30;
  if (*(int *)(*(int *)(param_1 + 0x764) + 4) == 0) {
    iVar1 = func_0x00a33e50(*(int *)(param_1 + 0x4c) + 0x1f98);
    uStack_30 = *(undefined4 *)(param_1 + 0x60);
    uStack_2c = *(undefined4 *)(param_1 + 0x54);
    uStack_28 = 6;
    uStack_24 = *(undefined4 *)(iVar1 + 8);
    uStack_20 = 1;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0x28;
    uStack_10 = 0;
    uStack_c = 4;
    iVar1 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&stack0xffffffcc,iVar1,0,
                            param_1 + 0x760);
    if (iVar1 == 1) {
      FUN_008ab370();
      return;
    }
    *(char **)(param_1 + 0x770) = "TexStorageCube.SwizzleTexture";
    *(int *)(param_1 + 0x76c) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x764) + 4),"TexStorageCube.SwizzleTexture",
                    param_1 + 0x34);
  }
  *param_3 = param_1 + 0x760;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a706a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_30;
  if (*(int *)(*(int *)(param_1 + 0x580) + 4) == 0) {
    iVar1 = func_0x00a33e50(*(int *)(param_1 + 0x4c) + 0x1f98);
    uStack_30 = *(undefined4 *)(param_1 + 0x60);
    uStack_2c = *(undefined4 *)(param_1 + 0x54);
    uStack_28 = 1;
    uStack_24 = *(undefined4 *)(iVar1 + 8);
    uStack_20 = 1;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0x28;
    uStack_10 = 0;
    uStack_c = 0;
    iVar1 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&stack0xffffffcc,iVar1,0,
                            param_1 + 0x57c);
    if (iVar1 == 1) {
      FUN_008ab370();
      return;
    }
    *(char **)(param_1 + 0x58c) = "TexStorageEGLImage.SwizzleTexture";
    *(int *)(param_1 + 0x588) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x580) + 4),
                    "TexStorageEGLImage.SwizzleTexture",param_1 + 0x34);
  }
  *param_3 = param_1 + 0x57c;
  FUN_008ab370();
  return;
}



undefined4 FUN_00a707c0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_External::getSwizzleTexture",0x717);
  (*pcVar1)();
  return 1;
}



void __fastcall FUN_00a70ab0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined1 *)(iVar1 + 0x1bc8) = 1;
  *(uint *)(iVar1 + 0x1684) = *(uint *)(iVar1 + 0x1684) | 0x2800;
  return;
}



bool __fastcall FUN_00a70ac0(int param_1)

{
  return (*(byte *)(param_1 + 0x194) & 0x60) != 0;
}



uint __fastcall FUN_00a70ad0(int param_1)

{
  return *(uint *)(param_1 + 0x194) >> 7 & 0xffffff01;
}



undefined4 __thiscall FUN_00a70db0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 0x738);
  do {
    if (*piVar2 != 0) {
      FUN_00466640(param_1);
      iVar1 = func_0x00a5edf0(param_2);
      if (iVar1 == 1) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 0x10);
  if (*(char *)(param_1 + 0x5dc) != '\0') {
    func_0x00a3b410();
  }
  return 0;
}



undefined4 __thiscall FUN_00a70e10(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)**(int **)(param_1 + 0x6cc);
  cVar1 = *(char *)((int)piVar5 + 0xd);
  do {
    if (cVar1 != '\0') {
      iVar4 = *(int *)(param_1 + 0x6cc);
      cVar1 = *(char *)((int)*(int **)(iVar4 + 4) + 0xd);
      piVar5 = *(int **)(iVar4 + 4);
      while (cVar1 == '\0') {
        func_0x009ccd00((int *)(param_1 + 0x6cc),piVar5[2]);
        piVar2 = (int *)*piVar5;
        func_0x008ab812(piVar5,0x20);
        piVar5 = piVar2;
        cVar1 = *(char *)((int)piVar2 + 0xd);
      }
      *(int *)(iVar4 + 4) = iVar4;
      *(int *)iVar4 = iVar4;
      *(int *)(iVar4 + 8) = iVar4;
      *(undefined4 *)(param_1 + 0x6d0) = 0;
      return 0;
    }
    if (piVar5[7] != 0) {
      FUN_00466640(param_1);
      iVar4 = func_0x00a5edf0(param_2);
      if (iVar4 == 1) {
        return 1;
      }
    }
    piVar2 = (int *)piVar5[2];
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar5 = piVar2;
      piVar2 = (int *)*piVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        piVar5 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar3 = (int *)piVar5[1];
      piVar2 = piVar5;
      while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
        cVar1 = *(char *)(piVar5[1] + 0xd);
        piVar3 = (int *)piVar5[1];
        piVar2 = piVar5;
      }
    }
    cVar1 = *(char *)((int)piVar5 + 0xd);
  } while( true );
}



undefined4 __fastcall FUN_00a70f00(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x59c);
  *(undefined4 *)(param_1 + 0x59c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return 0;
}



undefined4 __thiscall FUN_00a70f30(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 0x70c);
  do {
    if (*piVar2 != 0) {
      FUN_00466640(param_1);
      iVar1 = func_0x00a5edf0(param_2);
      if (iVar1 == 1) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 0x10);
  return 0;
}



undefined4 __thiscall FUN_00a70f80(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x888);
  do {
    uVar5 = 0;
    piVar4 = piVar3;
    do {
      if (*piVar4 != 0) {
        FUN_00466640(param_1);
        iVar1 = func_0x00a5edf0(param_2);
        if (iVar1 == 1) {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x10;
    } while (uVar5 < 6);
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x10);
  return 0;
}



undefined4 __fastcall FUN_00a70fe0(int param_1)

{
  if (*(char *)(param_1 + 0x5a0) != '\0') {
    func_0x00a3b410();
  }
  return 0;
}



void __fastcall FUN_00a71000(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x34;
  if (*(int *)(*(int *)(param_1 + 0x578) + 4) != 0) {
    *(int *)(param_1 + 0x580) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),*(undefined4 *)(param_1 + 0x584),
                    iVar1);
  }
  if (*(int *)(*(int *)(param_1 + 0x5e4) + 4) != 0) {
    *(int *)(param_1 + 0x5ec) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x5e4) + 4),*(undefined4 *)(param_1 + 0x5f0),
                    iVar1);
  }
  if (*(int *)(*(int *)(param_1 + 0x614) + 4) != 0) {
    *(int *)(param_1 + 0x61c) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x614) + 4),*(undefined4 *)(param_1 + 0x620),
                    iVar1);
  }
  return;
}



void __fastcall FUN_00a71080(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x34;
  if (*(int *)(*(int *)(param_1 + 0x580) + 4) != 0) {
    *(int *)(param_1 + 0x588) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x580) + 4),*(undefined4 *)(param_1 + 0x58c),
                    iVar1);
  }
  if (*(int *)(*(int *)(param_1 + 0x5a8) + 4) != 0) {
    *(int *)(param_1 + 0x5b0) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x5a8) + 4),*(undefined4 *)(param_1 + 0x5b4),
                    iVar1);
  }
  return;
}



void __fastcall FUN_00a710e0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x578) + 4) != 0) {
    *(int *)(param_1 + 0x580) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),*(undefined4 *)(param_1 + 0x584),
                    param_1 + 0x34);
  }
  return;
}



void __fastcall FUN_00a71110(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x34;
  if (*(int *)(*(int *)(param_1 + 0x5c0) + 4) != 0) {
    *(int *)(param_1 + 0x5c8) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x5c0) + 4),*(undefined4 *)(param_1 + 0x5cc),
                    iVar1);
  }
  if (*(int *)(*(int *)(param_1 + 0x5e8) + 4) != 0) {
    *(int *)(param_1 + 0x5f0) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x5e8) + 4),*(undefined4 *)(param_1 + 0x5f4),
                    iVar1);
  }
  return;
}



void __fastcall FUN_00a71170(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x34;
  if (*(int *)(*(int *)(param_1 + 0x578) + 4) != 0) {
    *(int *)(param_1 + 0x580) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),*(undefined4 *)(param_1 + 0x584),
                    iVar1);
  }
  if (*(int *)(*(int *)(param_1 + 0x720) + 4) != 0) {
    *(int *)(param_1 + 0x728) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x720) + 4),*(undefined4 *)(param_1 + 0x72c),
                    iVar1);
  }
  if (*(int *)(*(int *)(param_1 + 0x764) + 4) != 0) {
    *(int *)(param_1 + 0x76c) = iVar1;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x764) + 4),*(undefined4 *)(param_1 + 0x770),
                    iVar1);
  }
  return;
}



void __fastcall FUN_00a711f0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x580) + 4) != 0) {
    *(int *)(param_1 + 0x588) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x580) + 4),*(undefined4 *)(param_1 + 0x58c),
                    param_1 + 0x34);
  }
  return;
}



undefined4 __thiscall FUN_00a71220(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((*(uint *)(param_3 + 4) < 0x10) &&
      (iVar1 = *(int *)(param_1 + 0x738 + *(uint *)(param_3 + 4) * 4), iVar1 != 0)) &&
     (iVar1 != param_4)) {
    FUN_00466640(param_1);
    iVar1 = func_0x00a5edf0(param_2);
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a71270(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5214d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar6 = (int *)(param_1 + 0x6cc);
  iVar7 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(param_3 + 8);
  iStack_20 = *(int *)(param_3 + 0xc);
  iStack_28 = iVar7;
  iStack_24 = iVar2;
  iStack_18 = param_1;
  iStack_14 = iStack_20;
  func_0x00a65b10(&uStack_34,&iStack_28,uVar4);
  if (*(char *)(iStack_2c + 0xd) != '\0') goto LAB_00a713f6;
  iVar1 = *(int *)(iStack_2c + 0x10);
  bVar10 = SBORROW4(iVar7,iVar1);
  bVar9 = iVar7 - iVar1 < 0;
  if (iVar7 == iVar1) {
    iVar7 = *(int *)(iStack_2c + 0x14);
    bVar10 = SBORROW4(iVar2,iVar7);
    bVar9 = iVar2 - iVar7 < 0;
    if (iVar2 == iVar7) {
      bVar10 = SBORROW4(iStack_14,*(int *)(iStack_2c + 0x18));
      bVar9 = iStack_14 - *(int *)(iStack_2c + 0x18) < 0;
    }
  }
  if ((bVar10 != bVar9) || (iStack_2c == *piVar6)) goto LAB_00a713f6;
  piVar5 = (int *)func_0x00a67410(&iStack_28);
  if (*piVar5 == 0) goto LAB_00a713f6;
  piVar5 = (int *)func_0x00a67410(&iStack_28);
  if (*piVar5 == param_4) goto LAB_00a713f6;
  func_0x00a67410(&iStack_28);
  FUN_00466640(iStack_18);
  func_0x00a65b10(&uStack_34,&iStack_28);
  if (*(char *)(iStack_2c + 0xd) == '\0') {
    iVar7 = *(int *)(iStack_2c + 0x10);
    bVar10 = SBORROW4(iStack_28,iVar7);
    bVar9 = iStack_28 - iVar7 < 0;
    if (iStack_28 == iVar7) {
      iVar7 = *(int *)(iStack_2c + 0x14);
      bVar10 = SBORROW4(iStack_24,iVar7);
      bVar9 = iStack_24 - iVar7 < 0;
      if (iStack_24 == iVar7) {
        bVar10 = SBORROW4(iStack_20,*(int *)(iStack_2c + 0x18));
        bVar9 = iStack_20 - *(int *)(iStack_2c + 0x18) < 0;
      }
    }
    if (bVar10 != bVar9) goto LAB_00a7136c;
  }
  else {
LAB_00a7136c:
    if (*(int *)(param_1 + 0x6d0) == 0x7ffffff) {
      func_0x0048d790();
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return uVar8;
    }
    iVar7 = *piVar6;
    uStack_8 = 0;
    iStack_18 = 0;
    piStack_1c = piVar6;
    piVar6 = (int *)func_0x008ab47d(0x20);
    uStack_8 = 0xffffffff;
    *(ulonglong *)(piVar6 + 4) = CONCAT44(iStack_24,iStack_28);
    piVar6[6] = iStack_20;
    piVar6[7] = 0;
    *piVar6 = iVar7;
    piVar6[1] = iVar7;
    piVar6[2] = iVar7;
    *(undefined2 *)(piVar6 + 3) = 0;
    func_0x008b95c0(uStack_34,uStack_30,piVar6);
  }
  iVar7 = func_0x00a5edf0(param_2);
  if (iVar7 == 1) {
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
LAB_00a713f6:
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a71420(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((*(uint *)(param_3 + 4) < 0x10) &&
      (iVar1 = *(int *)(param_1 + 0x70c + *(uint *)(param_3 + 4) * 4), iVar1 != 0)) &&
     (iVar1 != param_4)) {
    FUN_00466640(param_1);
    iVar1 = func_0x00a5edf0(param_2);
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a71470(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_3 + 4);
  uVar2 = FUN_004b5b20();
  if ((((uVar1 < 0x10) && (uVar2 < 6)) &&
      (iVar3 = *(int *)(param_1 + 0x888 + (uVar2 * 0x10 + uVar1) * 4), iVar3 != 0)) &&
     (iVar3 != param_4)) {
    FUN_00466640(param_1);
    iVar3 = func_0x00a5edf0(param_2);
    if (iVar3 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a714d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x5a4) != 0) && (*(int *)(param_1 + 0x5a4) != param_4)) {
    FUN_00466640(param_1);
    iVar1 = func_0x00a5edf0(param_2);
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a71510(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 400) != 0) && (*(int *)(*(int *)(param_1 + 400) + 8) == param_2)) {
    func_0x00a71570(0);
    func_0x00953460(1);
  }
  return 0;
}



undefined4 __thiscall FUN_00a715d0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_EDI;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_4 [4];
  
  iStack_24 = param_1[100];
  if (((iStack_24 != 0) && (*(int *)(iStack_24 + 0x28) != 0)) &&
     (*(char *)(iStack_24 + 0x24) != '\0')) {
    pcVar1 = *(code **)(*param_1 + 0x50);
    puStack_20 = auStack_4;
    iStack_24 = iStack_24 + 4;
    _guard_check_icall(param_2);
    iVar3 = (*pcVar1)();
    if (iVar3 != 1) {
      pcVar1 = *(code **)(*param_1 + 0x50);
      _guard_check_icall(param_2,param_1[100] + 0x14,&stack0xffffffec);
      iVar3 = (*pcVar1)();
      if (iVar3 != 1) {
        iStack_24 = 0;
        piVar2 = *(int **)(param_1[0x13] + 0x1fd0);
        iVar3 = FUN_00a6ebf0(param_2,&iStack_24);
        if (iVar3 != 1) {
          pcVar1 = *(code **)(*piVar2 + 0xe4);
          _guard_check_icall(piVar2,*(undefined4 *)(param_1[0x15e] + 4),unaff_EDI,
                             *(undefined4 *)(*(int *)(iStack_24 + 4) + 4),puStack_20,
                             *(undefined4 *)(param_1[0x162] + 8));
          (*pcVar1)();
          *(undefined1 *)(param_1[100] + 0x24) = 0;
          func_0x00953460(1);
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}



void __thiscall
FUN_00a716e0(int *param_1,int param_2,int param_3,code *param_4,int *param_5,undefined4 param_6,
            undefined4 *param_7,int param_8)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  byte bVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  code *pcStack_80;
  char cStack_7c;
  int *piStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_6c;
  undefined *puStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  code *pcStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int iStack_28;
  char cStack_21;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_64 = 0xffffffff;
  puStack_68 = &DAT_00f5217d;
  iStack_6c = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&iStack_60;
  *unaff_FS_OFFSET = (int)&iStack_6c;
  iStack_2c = param_3;
  pcStack_34 = param_4;
  uStack_40 = param_6;
  puStack_30 = param_7;
  iStack_74 = param_8;
  iStack_28 = param_2;
  piStack_78 = param_5;
  pcVar5 = *(code **)(*param_1 + 0x40);
  piStack_70 = param_1;
  _guard_check_icall(param_2,uStack_8);
  iVar3 = (*pcVar5)();
  if (iVar3 != 1) {
    func_0x00a70c60(*(undefined4 *)(iStack_2c + 4));
    iStack_60 = 0;
    pcVar5 = *(code **)(*param_1 + 0x54);
    _guard_check_icall(iStack_28,&iStack_60);
    iVar3 = (*pcVar5)();
    if (iVar3 != 1) {
      uStack_5c = 0;
      pcVar5 = *(code **)(*param_1 + 0x50);
      _guard_check_icall(iStack_28,iStack_2c,&uStack_5c);
      iVar3 = (*pcVar5)();
      if (iVar3 != 1) {
        uStack_4c = func_0x00946bf0(*(undefined4 *)(pcStack_34 + 0x10),uStack_40);
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        bVar7 = (byte)*(undefined4 *)(iStack_2c + 4);
        iStack_84 = param_1[0x19] >> (bVar7 & 0x1f);
        if (iStack_84 < 1) {
          iStack_84 = 1;
        }
        iStack_88 = param_1[0x18] >> (bVar7 & 0x1f);
        if (iStack_88 < 1) {
          iStack_88 = 1;
        }
        iStack_8c = param_1[0x17] >> (bVar7 & 0x1f);
        if (iStack_8c < 1) {
          iStack_8c = 1;
        }
        if ((param_5 == (int *)0x0) || (cVar2 = func_0x00953a60(&uStack_98), cVar2 != '\0')) {
          cStack_21 = '\x01';
          iStack_48 = *(int *)(iStack_28 + 0x1d14);
          if (param_5 == (int *)0x0) {
            cStack_21 = '\x01';
            iStack_28 = *(int *)(pcStack_34 + 8);
            iStack_38 = *(int *)(pcStack_34 + 4);
            iStack_50 = *(int *)(pcStack_34 + 0xc);
          }
          else {
            iStack_28 = param_5[4];
            iStack_38 = param_5[3];
            iStack_50 = param_5[5];
          }
        }
        else {
          iStack_38 = param_5[3];
          iStack_48 = *(int *)(iStack_28 + 0x1d14);
          iStack_28 = param_5[4];
          iStack_50 = param_5[5];
          cStack_21 = '\0';
        }
        iStack_3c = 0;
        cVar2 = func_0x0094abf0(uStack_40,iStack_38,*puStack_30,puStack_30[1],&iStack_3c);
        if (cVar2 == '\0') {
          uVar8 = 0x318;
        }
        else {
          puStack_44 = (undefined4 *)0x0;
          cVar2 = func_0x0094a8b0(iStack_28,puStack_30[4],iStack_3c,&puStack_44);
          if (cVar2 == '\0') {
            uVar8 = 0x31b;
          }
          else {
            iStack_58 = 0;
            uVar8 = func_0x00967db0();
            cVar2 = func_0x0094ad20(uStack_40,iStack_3c,puStack_44,puStack_30,uVar8,&iStack_58);
            if (cVar2 != '\0') {
              iVar3 = func_0x00a329e0(*(undefined4 *)(pcStack_34 + 0x10),param_1[0x13] + 0x1f98);
              piVar4 = (int *)func_0x00a74c80(*(undefined4 *)(iVar3 + 8));
              iStack_2c = *piVar4 * iStack_38;
              iStack_54 = 0;
              puStack_30 = (undefined4 *)(iStack_2c * iStack_28);
              pcStack_34 = (code *)((int)puStack_30 * iStack_50);
              pcVar5 = (code *)func_0x00a33e40();
              _guard_check_icall(&pcStack_80,uStack_40);
              (*pcVar5)();
              if (cStack_7c == '\0') {
                iStack_38 = iStack_58 + iStack_74;
                iStack_2c = iStack_3c;
                puStack_30 = puStack_44;
              }
              else {
                iVar3 = func_0x009e6030(iStack_48,pcStack_34,&iStack_54);
                puVar1 = puStack_44;
                if (iVar3 == 1) goto LAB_00a718cf;
                iVar3 = iStack_74 + iStack_58;
                pcStack_34 = pcStack_80;
                uVar8 = *(undefined4 *)(iStack_54 + 4);
                iStack_48 = iStack_3c;
                uVar6 = func_0x0092a5f0(auStack_a8);
                pcVar5 = pcStack_34;
                uStack_64 = 0;
                _guard_check_icall(uVar6,iStack_38,iStack_28,iStack_50,iVar3,iStack_48,puVar1,uVar8,
                                   iStack_2c,puStack_30);
                (*pcVar5)();
                uStack_64 = 0xffffffff;
                func_0x009ae580();
                iStack_38 = *(int *)(iStack_54 + 4);
                param_5 = piStack_78;
                param_1 = piStack_70;
              }
              pcVar5 = *(code **)(**(int **)(param_1[0x13] + 0x1fd0) + 0xc0);
              if (cStack_21 == '\0') {
                iStack_20 = *param_5;
                iStack_14 = param_5[3] + iStack_20;
                iStack_1c = param_5[1];
                iStack_10 = param_5[4] + iStack_1c;
                iStack_18 = param_5[2];
                iStack_c = param_5[5] + iStack_18;
                piVar4 = &iStack_20;
              }
              else {
                piVar4 = (int *)0x0;
              }
              _guard_check_icall(*(int **)(param_1[0x13] + 0x1fd0),
                                 *(undefined4 *)(*(int *)(iStack_60 + 4) + 4),uStack_5c,piVar4,
                                 iStack_38,iStack_2c,puStack_30);
              (*pcVar5)();
              goto LAB_00a718cf;
            }
            uVar8 = 799;
          }
        }
        func_0x0098f180(0x502,"Integer overflow.",
                        "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                        ,"rx::TextureStorage11::setData",uVar8);
      }
    }
  }
LAB_00a718cf:
  *unaff_FS_OFFSET = iStack_6c;
  FUN_008ab370();
  return;
}



byte __fastcall FUN_00a71b50(int param_1)

{
  return *(byte *)(param_1 + 0x198) & 1;
}



undefined4 __thiscall FUN_00a71dc0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if ((param_3 != '\0') && (1 < *(uint *)(param_1 + 0x54))) {
    if ((*(char *)(param_1 + 0x60c) == '\0') && (*(int *)(*(int *)(param_1 + 0x578) + 4) != 0)) {
      iVar3 = func_0x00a6b610(param_2,1);
      if (iVar3 == 1) {
        return 1;
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x1fd0);
      pcVar2 = *(code **)(*piVar1 + 0xb8);
      _guard_check_icall(piVar1,*(undefined4 *)(*(int *)(param_1 + 0x5e4) + 4),0,0,0,0,
                         *(undefined4 *)(*(int *)(param_1 + 0x578) + 4),0,0);
      (*pcVar2)();
    }
    *(undefined1 *)(param_1 + 0x60c) = 1;
    return 0;
  }
  if ((*(char *)(param_1 + 0x60c) != '\0') && (*(int *)(*(int *)(param_1 + 0x5e4) + 4) != 0)) {
    iVar3 = func_0x00a6b610(param_2,*(undefined4 *)(param_1 + 0x54));
    if (iVar3 == 1) {
      return 1;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x1fd0);
    pcVar2 = *(code **)(*piVar1 + 0xb8);
    _guard_check_icall(piVar1,*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),0,0,0,0,
                       *(undefined4 *)(*(int *)(param_1 + 0x5e4) + 4),0,0);
    (*pcVar2)();
  }
  *(undefined1 *)(param_1 + 0x60c) = 0;
  return 0;
}



undefined4 __thiscall FUN_00a71ec0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if ((param_3 != '\0') && (1 < *(uint *)(param_1 + 0x54))) {
    if ((*(char *)(param_1 + 0x75c) == '\0') && (*(int *)(*(int *)(param_1 + 0x578) + 4) != 0)) {
      iVar3 = func_0x00a6b7b0(param_2,1);
      if (iVar3 == 1) {
        return 1;
      }
      iVar3 = 0;
      piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x1fd0);
      do {
        pcVar2 = *(code **)(*piVar1 + 0xb8);
        _guard_check_icall(piVar1,*(undefined4 *)(*(int *)(param_1 + 0x720) + 4),iVar3,0,0,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x578) + 4),
                           *(int *)(param_1 + 0x54) * iVar3,0);
        (*pcVar2)();
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    *(undefined1 *)(param_1 + 0x75c) = 1;
    return 0;
  }
  if ((*(char *)(param_1 + 0x75c) != '\0') && (*(int *)(*(int *)(param_1 + 0x720) + 4) != 0)) {
    iVar3 = func_0x00a6b7b0(param_2,*(undefined4 *)(param_1 + 0x54));
    if (iVar3 == 1) {
      return 1;
    }
    iVar3 = 0;
    piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x1fd0);
    do {
      pcVar2 = *(code **)(*piVar1 + 0xb8);
      _guard_check_icall(piVar1,*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),
                         *(int *)(param_1 + 0x54) * iVar3,0,0,0,
                         *(undefined4 *)(*(int *)(param_1 + 0x720) + 4),iVar3,0);
      (*pcVar2)();
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  *(undefined1 *)(param_1 + 0x75c) = 0;
  return 0;
}



undefined4 FUN_00a72010(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_EGLImage::useLevelZeroWorkaroundTexture",0x7c5);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a72060(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int aiStack_c [3];
  
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_2 + 8);
  iStack_18 = iVar2;
  iStack_14 = iVar4;
  iStack_10 = iVar3;
  func_0x00a65b10(aiStack_c,&iStack_18);
  if (*(char *)(aiStack_c[0] + 0xd) == '\0') {
    iVar1 = *(int *)(aiStack_c[0] + 0x10);
    bVar6 = SBORROW4(iVar2,iVar1);
    bVar5 = iVar2 - iVar1 < 0;
    if (iVar2 == iVar1) {
      iVar2 = *(int *)(aiStack_c[0] + 0x14);
      bVar6 = SBORROW4(iVar4,iVar2);
      bVar5 = iVar4 - iVar2 < 0;
      if (iVar4 == iVar2) {
        bVar6 = SBORROW4(iVar3,*(int *)(aiStack_c[0] + 0x18));
        bVar5 = iVar3 - *(int *)(aiStack_c[0] + 0x18) < 0;
      }
    }
    if ((bVar6 == bVar5) && (aiStack_c[0] != *(int *)(param_1 + 0x6cc))) {
      func_0x00a67410(&stack0xffffffe0);
    }
  }
  return;
}



void FUN_00a720d0(void)

{
  FUN_004b5b20();
  return;
}



undefined4 * __thiscall FUN_00a72190(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::VertexBuffer11::vftable;
  FUN_00a31c20(uVar1);
  func_0x00b514f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00a72200(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_c [12];
  
  iVar3 = func_0x009e8470(param_2,**(undefined4 **)(param_1 + 0x14),0,4,0,auStack_c);
  if (iVar3 == 1) {
    return 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1fd0);
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  _guard_check_icall(piVar1,**(undefined4 **)(param_1 + 0x14),0);
  (*pcVar2)();
  return 0;
}



void __fastcall FUN_00a72260(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1fd0);
    pcVar2 = *(code **)(*piVar1 + 0x3c);
    _guard_check_icall(piVar1,**(undefined4 **)(param_1 + 0x14),0);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



void __thiscall FUN_00a722a0(int param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  char *pcVar5;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50ce0;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (**(int **)(param_1 + 0x14) != 0) {
    puVar3 = (undefined4 *)func_0x008ab47d(8,aiStack_2c[6]);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    piVar1 = *(int **)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x14) = puVar3;
    if (piVar1 != (int *)0x0) {
      uStack_8 = 0;
      if (*piVar1 != 0) {
        if (piVar1[1] != 0) {
          func_0x00a32410(1,*piVar1);
        }
        pcVar2 = *(code **)(*(int *)*piVar1 + 8);
        _guard_check_icall((int *)*piVar1);
        (*pcVar2)();
      }
      uStack_8 = 0xffffffff;
      func_0x008ab812(piVar1,8);
    }
  }
  func_0x00b51de0();
  if (param_3 != 0) {
    aiStack_2c[0] = param_3;
    aiStack_2c[1] = 2;
    aiStack_2c[2] = 1;
    aiStack_2c[3] = 0x10000;
    aiStack_2c[4] = 0;
    aiStack_2c[5] = 0;
    iVar4 = func_0x00a306d0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,*(undefined4 *)(param_1 + 0xc),
                            aiStack_2c,0,param_1 + 0x10);
    if (iVar4 == 1) goto LAB_00a723eb;
    if (param_4 == '\0') {
      *(char **)(param_1 + 0x1c) = "VertexBuffer11(static)";
      pcVar5 = "VertexBuffer11(static)";
    }
    else {
      *(char **)(param_1 + 0x1c) = "VertexBuffer11(dynamic)";
      pcVar5 = "VertexBuffer11(dynamic)";
    }
    func_0x00a2fa40(**(undefined4 **)(param_1 + 0x14),pcVar5,*(undefined4 *)(param_1 + 0x18));
  }
  *(int *)(param_1 + 0x20) = param_3;
  *(char *)(param_1 + 0x24) = param_4;
LAB_00a723eb:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a72410(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((uint)param_1[8] < param_3) {
    pcVar1 = *(code **)*param_1;
    _guard_check_icall(param_2,param_3,*(undefined1 *)(param_1 + 9));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 0;
}



undefined4 __thiscall
FUN_00a72450(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,int param_8,int param_9,int param_10)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 auStack_c [3];
  
  iVar2 = func_0x00994760(param_3,param_4);
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar3 = func_0x009e8470(param_2,**(undefined4 **)(param_1 + 0x14),0,5,0,auStack_c);
    if (iVar3 == 1) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x28) = auStack_c[0];
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((param_8 == 0) || (*(int *)(param_4 + 4) == 0)) {
    param_10 = param_10 + iVar2 * param_6;
  }
  uVar4 = func_0x009498d0(param_3,param_5);
  iVar5 = func_0x00a74db0(uVar4,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1f98));
  pcVar1 = *(code **)(iVar5 + 8);
  _guard_check_icall(param_10,iVar2,param_7,iVar3 + param_9);
  (*pcVar1)();
  return 0;
}



void FUN_00a72930(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *param_1;
      param_1 = (int *)((int)param_1 + param_2);
      *(float *)(param_4 + uVar2 * 4) = (float)iVar1 * 1.5258789e-05;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void FUN_00a72980(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *param_1;
      param_1 = (int *)((int)param_1 + param_2);
      *(float *)(param_4 + uVar2 * 8) = (float)iVar1 * 1.5258789e-05;
      *(undefined4 *)(param_4 + 4 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void FUN_00a729d0(int *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      *(float *)(param_4 + uVar2 * 8) = (float)*param_1 * 1.5258789e-05;
      piVar1 = param_1 + 1;
      param_1 = (int *)((int)param_1 + param_2);
      *(float *)(param_4 + 4 + uVar2 * 8) = (float)*piVar1 * 1.5258789e-05;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void FUN_00a72a30(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    piVar1 = (int *)(param_1 + 8);
    do {
      pfVar2[-2] = (float)piVar1[-2] * 1.5258789e-05;
      pfVar2[-1] = (float)piVar1[-1] * 1.5258789e-05;
      *pfVar2 = (float)*piVar1 * 1.5258789e-05;
      pfVar2 = pfVar2 + 3;
      param_3 = param_3 + -1;
      piVar1 = (int *)((int)piVar1 + param_2);
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a72aa0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar3 = (float *)(param_4 + 8);
    piVar2 = (int *)(param_1 + 8);
    do {
      pfVar3[-2] = (float)piVar2[-2] * 1.5258789e-05;
      pfVar3[-1] = (float)piVar2[-1] * 1.5258789e-05;
      *pfVar3 = (float)*piVar2 * 1.5258789e-05;
      piVar1 = piVar2 + 1;
      piVar2 = (int *)((int)piVar2 + param_2);
      pfVar3[1] = (float)*piVar1 * 1.5258789e-05;
      pfVar3 = pfVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a72b20(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + param_2;
      *(short *)(param_4 + uVar2 * 4) = (short)cVar1;
      *(undefined2 *)(param_4 + 2 + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void FUN_00a72b60(char *param_1,int param_2,uint param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      *(short *)(param_4 + uVar2 * 4) = (short)*param_1;
      pcVar1 = param_1 + 1;
      param_1 = param_1 + param_2;
      *(short *)(param_4 + 2 + uVar2 * 4) = (short)*pcVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void FUN_00a72ba0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  short *psVar2;
  char *pcVar3;
  
  if (param_3 != 0) {
    pcVar3 = (char *)(param_1 + 2);
    psVar2 = (short *)(param_4 + 4);
    do {
      psVar2[-2] = (short)pcVar3[-2];
      psVar2[-1] = (short)pcVar3[-1];
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + param_2;
      *psVar2 = (short)cVar1;
      psVar2[1] = 1;
      param_3 = param_3 + -1;
      psVar2 = psVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a72bf0(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  short *psVar3;
  
  if (param_3 != 0) {
    pcVar2 = (char *)(param_1 + 2);
    psVar3 = (short *)(param_4 + 4);
    do {
      psVar3[-2] = (short)pcVar2[-2];
      psVar3[-1] = (short)pcVar2[-1];
      *psVar3 = (short)*pcVar2;
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + param_2;
      psVar3[1] = (short)*pcVar1;
      param_3 = param_3 + -1;
      psVar3 = psVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a72c40(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      cVar1 = *param_1;
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      param_1 = param_1 + param_2;
      *(ushort *)(param_4 + uVar3 * 4) = uVar2;
      *(undefined2 *)(param_4 + 2 + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}



void FUN_00a72ca0(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      cVar1 = *param_1;
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      *(ushort *)(param_4 + uVar3 * 4) = uVar2;
      cVar1 = param_1[1];
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (ushort)(cVar1 >> 6 & 1) | (uVar2 << 7 | uVar2) * 2;
      }
      param_1 = param_1 + param_2;
      *(ushort *)(param_4 + 2 + uVar3 * 4) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}



void FUN_00a72d30(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  char *pcVar4;
  
  if (param_3 != 0) {
    puVar3 = (ushort *)(param_4 + 4);
    pcVar4 = (char *)(param_1 + 2);
    do {
      cVar1 = pcVar4[-2];
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      puVar3[-2] = uVar2;
      cVar1 = pcVar4[-1];
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      puVar3[-1] = uVar2;
      cVar1 = *pcVar4;
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      *puVar3 = uVar2;
      pcVar4 = pcVar4 + param_2;
      puVar3[1] = 0x7fff;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a72e10(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  char *pcVar4;
  
  if (param_3 != 0) {
    puVar3 = (ushort *)(param_4 + 4);
    pcVar4 = (char *)(param_1 + 2);
    do {
      cVar1 = pcVar4[-2];
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      puVar3[-2] = uVar2;
      cVar1 = pcVar4[-1];
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      puVar3[-1] = uVar2;
      cVar1 = *pcVar4;
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      *puVar3 = uVar2;
      cVar1 = pcVar4[1];
      uVar2 = (ushort)cVar1;
      if (cVar1 < '\x01') {
        uVar2 = uVar2 << 8;
      }
      else {
        uVar2 = (uVar2 << 7 | uVar2) * 2 | (ushort)(cVar1 >> 6 & 1);
      }
      puVar3[1] = uVar2;
      pcVar4 = pcVar4 + param_2;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a72f10(undefined1 *param_1,int param_2,uint param_3,void *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 != 1) {
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + param_2;
        *(undefined1 *)((int)param_4 + uVar2) = uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3);
    }
    return;
  }
  memcpy(param_4,param_1,param_3);
  return;
}



void FUN_00a72f60(undefined2 *param_1,int param_2,uint param_3,void *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (param_2 != 2) {
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        uVar1 = *param_1;
        param_1 = (undefined2 *)((int)param_1 + param_2);
        *(undefined2 *)((int)param_4 + uVar2 * 2) = uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3);
    }
    return;
  }
  memcpy(param_4,param_1,param_3 * 2);
  return;
}



void FUN_00a72fb0(undefined2 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = (undefined2 *)((int)param_1 + param_2);
      *(undefined1 *)(param_4 + 1) = *(undefined1 *)puVar1;
      *(undefined1 *)((int)param_4 + 3) = 1;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a72ff0(undefined2 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = (undefined2 *)((int)param_1 + param_2);
      *(undefined1 *)(param_4 + 1) = *(undefined1 *)puVar1;
      *(undefined1 *)((int)param_4 + 3) = 0x7f;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a73030(undefined4 *param_1,int param_2,uint param_3,void *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 != 4) {
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        uVar1 = *param_1;
        param_1 = (undefined4 *)((int)param_1 + param_2);
        *(undefined4 *)((int)param_4 + uVar2 * 4) = uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3);
    }
    return;
  }
  memcpy(param_4,param_1,param_3 << 2);
  return;
}



void FUN_00a73080(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)(param_4 + 3);
    do {
      puVar1[-3] = *param_1;
      param_1 = param_1 + param_2;
      *(undefined2 *)(puVar1 + -2) = 0;
      *puVar1 = 1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a730c0(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)(param_4 + 3);
    do {
      puVar1[-3] = *param_1;
      param_1 = param_1 + param_2;
      *(undefined2 *)(puVar1 + -2) = 0;
      *puVar1 = 0xff;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a73100(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = param_4 + 3;
    do {
      *(undefined2 *)(iVar1 + -3) = *param_1;
      param_1 = (undefined2 *)((int)param_1 + param_2);
      *(undefined2 *)(iVar1 + -1) = 0x100;
      param_3 = param_3 + -1;
      iVar1 = iVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a73140(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = param_4 + 3;
    do {
      *(undefined2 *)(iVar1 + -3) = *param_1;
      param_1 = (undefined2 *)((int)param_1 + param_2);
      *(undefined2 *)(iVar1 + -1) = 0xff00;
      param_3 = param_3 + -1;
      iVar1 = iVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a73180(undefined2 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = (undefined2 *)((int)param_1 + param_2);
      *(undefined1 *)(param_4 + 1) = *(undefined1 *)puVar1;
      *(undefined1 *)((int)param_4 + 3) = 0xff;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void __thiscall
FUN_00a731c0(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,void *param_5)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 != 2) {
    uVar2 = 0;
    if (param_4 != 0) {
      do {
        puVar1 = param_2;
        if (((uint)param_2 & 1) != 0) {
          _Src = (void *)((int)param_2 + 1U & 0xfffffffe);
          _Size = (int)_Src - (int)param_2;
          if (_Size != 0) {
            memcpy(&uStack_4,param_2,_Size);
          }
          memcpy((void *)((int)&uStack_4 + _Size),_Src,2 - _Size);
          puVar1 = &uStack_4;
        }
        param_2 = (undefined4 *)((int)param_2 + param_3);
        *(undefined2 *)((int)param_5 + uVar2 * 2) = *(undefined2 *)puVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_4);
    }
    return;
  }
  memcpy(param_5,param_2,param_4 * 2);
  return;
}



void __thiscall
FUN_00a73260(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  size_t _Size;
  void *_Src;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      puVar1 = param_2;
      if (((uint)param_2 & 1) != 0) {
        _Src = (void *)((int)param_2 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&uStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&uStack_4 + _Size),_Src,2 - _Size);
        puVar1 = &uStack_4;
      }
      param_2 = (undefined4 *)((int)param_2 + param_3);
      *(undefined2 *)(param_5 + uVar2 * 4) = *(undefined2 *)puVar1;
      *(undefined2 *)(param_5 + 2 + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void __thiscall
FUN_00a732e0(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,void *param_5)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 != 4) {
    uVar2 = 0;
    if (param_4 != 0) {
      do {
        puVar1 = param_2;
        if (((uint)param_2 & 1) != 0) {
          _Src = (void *)((int)param_2 + 1U & 0xfffffffe);
          _Size = (int)_Src - (int)param_2;
          if (_Size != 0) {
            memcpy(&uStack_4,param_2,_Size);
          }
          memcpy((void *)((int)&uStack_4 + _Size),_Src,4 - _Size);
          puVar1 = &uStack_4;
        }
        param_2 = (undefined4 *)((int)param_2 + param_3);
        *(undefined4 *)((int)param_5 + uVar2 * 4) = *puVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_4);
    }
    return;
  }
  memcpy(param_5,param_2,param_4 << 2);
  return;
}



void FUN_00a73370(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  int iStack_10;
  undefined4 auStack_c [2];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_10;
  iStack_10 = param_2;
  if (param_3 != 0) {
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_c,param_1,_Size);
        }
        memcpy((void *)((int)auStack_c + _Size),_Src,6 - _Size);
        puVar1 = auStack_c;
      }
      param_1 = (undefined4 *)((int)param_1 + iStack_10);
      *param_4 = *puVar1;
      *(undefined2 *)(param_4 + 1) = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((int)param_4 + 6) = 1;
      param_4 = param_4 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a73420(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  int iStack_10;
  undefined4 auStack_c [2];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_10;
  iStack_10 = param_2;
  if (param_3 != 0) {
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_c,param_1,_Size);
        }
        memcpy((void *)((int)auStack_c + _Size),_Src,6 - _Size);
        puVar1 = auStack_c;
      }
      param_1 = (undefined4 *)((int)param_1 + iStack_10);
      *param_4 = *puVar1;
      *(undefined2 *)(param_4 + 1) = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((int)param_4 + 6) = 0x7fff;
      param_4 = param_4 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a734d0(undefined4 *param_1,int param_2,uint param_3,void *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *_Src;
  uint uVar3;
  size_t _Size;
  void *pvStack_14;
  int iStack_10;
  undefined4 auStack_c [2];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&pvStack_14;
  iStack_10 = param_2;
  pvStack_14 = param_4;
  if (param_2 != 8) {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        puVar2 = param_1;
        if (((uint)param_1 & 1) != 0) {
          _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
          _Size = (int)_Src - (int)param_1;
          if (_Size != 0) {
            memcpy(auStack_c,param_1,_Size);
          }
          memcpy((void *)((int)auStack_c + _Size),_Src,8 - _Size);
          puVar2 = auStack_c;
          param_4 = pvStack_14;
        }
        uVar1 = puVar2[1];
        param_1 = (undefined4 *)((int)param_1 + iStack_10);
        *(undefined4 *)((int)param_4 + uVar3 * 8) = *puVar2;
        *(undefined4 *)((int)param_4 + uVar3 * 8 + 4) = uVar1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
    FUN_008ab370();
    return;
  }
  memcpy(param_4,param_1,param_3 << 3);
  FUN_008ab370();
  return;
}



void FUN_00a735a0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  int iStack_10;
  undefined4 auStack_c [2];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_10;
  iStack_10 = param_2;
  if (param_3 != 0) {
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_c,param_1,_Size);
        }
        memcpy((void *)((int)auStack_c + _Size),_Src,6 - _Size);
        puVar1 = auStack_c;
      }
      param_1 = (undefined4 *)((int)param_1 + iStack_10);
      *param_4 = *puVar1;
      *(undefined2 *)(param_4 + 1) = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((int)param_4 + 6) = 0x3c00;
      param_4 = param_4 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a73650(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  int iStack_10;
  undefined4 auStack_c [2];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_10;
  iStack_10 = param_2;
  if (param_3 != 0) {
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_c,param_1,_Size);
        }
        memcpy((void *)((int)auStack_c + _Size),_Src,6 - _Size);
        puVar1 = auStack_c;
      }
      param_1 = (undefined4 *)((int)param_1 + iStack_10);
      *param_4 = *puVar1;
      *(undefined2 *)(param_4 + 1) = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((int)param_4 + 6) = 0xffff;
      param_4 = param_4 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00a73700(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,void *param_5)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 != 4) {
    uVar2 = 0;
    if (param_4 != 0) {
      do {
        puVar1 = param_2;
        if (((uint)param_2 & 3) != 0) {
          _Src = (void *)((int)param_2 + 3U & 0xfffffffc);
          _Size = (int)_Src - (int)param_2;
          if (_Size != 0) {
            memcpy(&uStack_4,param_2,_Size);
          }
          memcpy((void *)((int)&uStack_4 + _Size),_Src,4 - _Size);
          puVar1 = &uStack_4;
        }
        param_2 = (undefined4 *)((int)param_2 + param_3);
        *(undefined4 *)((int)param_5 + uVar2 * 4) = *puVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_4);
    }
    return;
  }
  memcpy(param_5,param_2,param_4 << 2);
  return;
}



void FUN_00a73790(undefined4 *param_1,int param_2,uint param_3,void *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *_Src;
  uint uVar3;
  size_t _Size;
  undefined4 auStack_8 [2];
  
  if (param_2 != 8) {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        puVar2 = param_1;
        if (((uint)param_1 & 3) != 0) {
          _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
          _Size = (int)_Src - (int)param_1;
          if (_Size != 0) {
            memcpy(auStack_8,param_1,_Size);
          }
          memcpy((void *)((int)auStack_8 + _Size),_Src,8 - _Size);
          puVar2 = auStack_8;
        }
        uVar1 = puVar2[1];
        param_1 = (undefined4 *)((int)param_1 + param_2);
        *(undefined4 *)((int)param_4 + uVar3 * 8) = *puVar2;
        *(undefined4 *)((int)param_4 + uVar3 * 8 + 4) = uVar1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
    return;
  }
  memcpy(param_4,param_1,param_3 << 3);
  return;
}



void FUN_00a73840(undefined8 *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  size_t _Size;
  int iStack_18;
  int iStack_14;
  undefined8 uStack_10;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_18;
  iStack_14 = param_2;
  if (param_2 != 0xc) {
    iStack_18 = param_3;
    if (param_3 != 0) {
      do {
        puVar1 = param_1;
        if (((uint)param_1 & 3) != 0) {
          _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
          _Size = (int)_Src - (int)param_1;
          if (_Size != 0) {
            memcpy(&uStack_10,param_1,_Size);
          }
          memcpy((void *)((int)&uStack_10 + _Size),_Src,0xc - _Size);
          puVar1 = &uStack_10;
        }
        param_1 = (undefined8 *)((int)param_1 + iStack_14);
        *param_4 = *puVar1;
        *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar1 + 1);
        param_4 = (undefined8 *)((int)param_4 + 0xc);
        iStack_18 = iStack_18 + -1;
      } while (iStack_18 != 0);
      iStack_18 = 0;
    }
    FUN_008ab370();
    return;
  }
  memcpy(param_4,param_1,param_3 * 0xc);
  FUN_008ab370();
  return;
}



void FUN_00a73910(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *_Src;
  size_t _Size;
  int iStack_1c;
  int iStack_18;
  undefined4 auStack_14 [4];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_1c;
  iStack_18 = param_2;
  if (param_2 != 0x10) {
    iStack_1c = param_3;
    if (param_3 != 0) {
      do {
        puVar4 = param_1;
        if (((uint)param_1 & 3) != 0) {
          _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
          _Size = (int)_Src - (int)param_1;
          if (_Size != 0) {
            memcpy(auStack_14,param_1,_Size);
          }
          memcpy((void *)((int)auStack_14 + _Size),_Src,0x10 - _Size);
          puVar4 = auStack_14;
        }
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        param_1 = (undefined4 *)((int)param_1 + iStack_18);
        *param_4 = *puVar4;
        param_4[1] = uVar1;
        param_4[2] = uVar2;
        param_4[3] = uVar3;
        param_4 = param_4 + 4;
        iStack_1c = iStack_1c + -1;
      } while (iStack_1c != 0);
      iStack_1c = 0;
    }
    FUN_008ab370();
    return;
  }
  memcpy(param_4,param_1,param_3 << 4);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00a739d0(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      puVar1 = param_2;
      if (((uint)param_2 & 3) != 0) {
        _Src = (void *)((int)param_2 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&uStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&uStack_4 + _Size),_Src,4 - _Size);
        puVar1 = &uStack_4;
      }
      param_2 = (undefined4 *)((int)param_2 + param_3);
      *(undefined4 *)(param_5 + uVar2 * 8) = *puVar1;
      *(undefined4 *)(param_5 + 4 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void FUN_00a73a50(undefined4 *param_1,int param_2,uint param_3,void *param_4)

{
  undefined4 uVar1;
  void *_Src;
  undefined4 *puVar2;
  uint uVar3;
  size_t _Size;
  undefined4 auStack_10 [3];
  
  if (param_2 != 8) {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        puVar2 = param_1;
        if (((uint)param_1 & 3) != 0) {
          _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
          _Size = (int)_Src - (int)param_1;
          if (_Size != 0) {
            memcpy(auStack_10,param_1,_Size);
          }
          memcpy((void *)((int)auStack_10 + _Size),_Src,8 - _Size);
          puVar2 = auStack_10;
        }
        uVar1 = puVar2[1];
        param_1 = (undefined4 *)((int)param_1 + param_2);
        *(undefined4 *)((int)param_4 + uVar3 * 8) = *puVar2;
        *(undefined4 *)((int)param_4 + uVar3 * 8 + 4) = uVar1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
    return;
  }
  memcpy(param_4,param_1,param_3 << 3);
  return;
}



void __thiscall
FUN_00a73b00(undefined4 param_1,ushort *param_2,int param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      puVar1 = param_2;
      if (((uint)param_2 & 1) != 0) {
        _Src = (void *)((int)param_2 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&uStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&uStack_4 + _Size),_Src,2 - _Size);
        puVar1 = (ushort *)&uStack_4;
      }
      param_2 = (ushort *)((int)param_2 + param_3);
      *(float *)(param_5 + uVar2 * 8) = (float)*puVar1 / 65535.0;
      *(undefined4 *)(param_5 + 4 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void __thiscall
FUN_00a73b90(undefined4 param_1,ushort *param_2,int param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      puVar1 = param_2;
      if (((uint)param_2 & 1) != 0) {
        _Src = (void *)((int)param_2 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&uStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&uStack_4 + _Size),_Src,2 - _Size);
        puVar1 = (ushort *)&uStack_4;
      }
      param_2 = (ushort *)((int)param_2 + param_3);
      *(float *)(param_5 + uVar2 * 8) = (float)*puVar1;
      *(undefined4 *)(param_5 + 4 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void __thiscall
FUN_00a73c10(undefined4 param_1,ushort *param_2,int param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  uint uVar2;
  size_t _Size;
  void *_Src;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      puVar1 = param_2;
      if (((uint)param_2 & 1) != 0) {
        _Src = (void *)((int)param_2 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&uStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&uStack_4 + _Size),_Src,4 - _Size);
        puVar1 = (ushort *)&uStack_4;
      }
      param_2 = (ushort *)((int)param_2 + param_3);
      *(float *)(param_5 + uVar2 * 8) = (float)*puVar1 / 65535.0;
      *(float *)(param_5 + 4 + uVar2 * 8) = (float)puVar1[1] / 65535.0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void __thiscall
FUN_00a73cc0(undefined4 param_1,ushort *param_2,int param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  uint uVar2;
  size_t _Size;
  void *_Src;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      puVar1 = param_2;
      if (((uint)param_2 & 1) != 0) {
        _Src = (void *)((int)param_2 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&uStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&uStack_4 + _Size),_Src,4 - _Size);
        puVar1 = (ushort *)&uStack_4;
      }
      param_2 = (ushort *)((int)param_2 + param_3);
      *(float *)(param_5 + uVar2 * 8) = (float)*puVar1;
      *(float *)(param_5 + 4 + uVar2 * 8) = (float)puVar1[1];
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void FUN_00a73d50(ushort *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  float *pfVar2;
  size_t _Size;
  void *_Src;
  int iStack_10;
  ushort auStack_c [4];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_10;
  iStack_10 = param_2;
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_c,param_1,_Size);
        }
        memcpy((void *)((int)auStack_c + _Size),_Src,6 - _Size);
        puVar1 = auStack_c;
      }
      param_1 = (ushort *)((int)param_1 + iStack_10);
      pfVar2[-2] = (float)*puVar1 / 65535.0;
      pfVar2[-1] = (float)puVar1[1] / 65535.0;
      *pfVar2 = (float)puVar1[2] / 65535.0;
      pfVar2 = pfVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a73e30(ushort *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  float *pfVar2;
  size_t _Size;
  void *_Src;
  int iStack_10;
  ushort auStack_c [4];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_10;
  iStack_10 = param_2;
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_c,param_1,_Size);
        }
        memcpy((void *)((int)auStack_c + _Size),_Src,6 - _Size);
        puVar1 = auStack_c;
      }
      param_1 = (ushort *)((int)param_1 + iStack_10);
      pfVar2[-2] = (float)*puVar1;
      pfVar2[-1] = (float)puVar1[1];
      *pfVar2 = (float)puVar1[2];
      pfVar2 = pfVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a73ef0(ushort *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  size_t _Size;
  void *_Src;
  float *pfStack_1c;
  int iStack_18;
  ushort auStack_14 [4];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&pfStack_1c;
  iStack_18 = param_2;
  if (param_3 != 0) {
    pfStack_1c = (float *)(param_4 + 8);
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_14,param_1,_Size);
        }
        memcpy((void *)((int)auStack_14 + _Size),_Src,8 - _Size);
        puVar1 = auStack_14;
      }
      param_1 = (ushort *)((int)param_1 + iStack_18);
      pfStack_1c[-2] = (float)*puVar1 / 65535.0;
      pfStack_1c[-1] = (float)puVar1[1] / 65535.0;
      *pfStack_1c = (float)puVar1[2] / 65535.0;
      pfStack_1c[1] = (float)puVar1[3] / 65535.0;
      pfStack_1c = pfStack_1c + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a74000(ushort *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  size_t _Size;
  void *_Src;
  float *pfStack_1c;
  int iStack_18;
  ushort auStack_14 [4];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&pfStack_1c;
  iStack_18 = param_2;
  if (param_3 != 0) {
    pfStack_1c = (float *)(param_4 + 8);
    do {
      puVar1 = param_1;
      if (((uint)param_1 & 1) != 0) {
        _Src = (void *)((int)param_1 + 1U & 0xfffffffe);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(auStack_14,param_1,_Size);
        }
        memcpy((void *)((int)auStack_14 + _Size),_Src,8 - _Size);
        puVar1 = auStack_14;
      }
      param_1 = (ushort *)((int)param_1 + iStack_18);
      pfStack_1c[-2] = (float)*puVar1;
      pfStack_1c[-1] = (float)puVar1[1];
      *pfStack_1c = (float)puVar1[2];
      pfStack_1c[1] = (float)puVar1[3];
      pfStack_1c = pfStack_1c + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a740e0(int param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  float fVar3;
  int iStack_4;
  
  iStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      piVar1 = param_2;
      if (((uint)param_2 & 3) != 0) {
        _Src = (void *)((int)param_2 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&iStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&iStack_4 + _Size),_Src,4 - _Size);
        piVar1 = &iStack_4;
      }
      param_2 = (int *)((int)param_2 + param_3);
      fVar3 = (float)*piVar1 * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      *(float *)(param_5 + uVar2 * 4) = fVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void FUN_00a74170(int *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  size_t _Size;
  void *_Src;
  float fVar2;
  uint uStack_14;
  int aiStack_10 [3];
  
  uStack_14 = 0;
  if (param_3 != 0) {
    do {
      piVar1 = param_1;
      if (((uint)param_1 & 3) != 0) {
        _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(aiStack_10,param_1,_Size);
        }
        memcpy((void *)((int)aiStack_10 + _Size),_Src,8 - _Size);
        piVar1 = aiStack_10;
      }
      param_1 = (int *)((int)param_1 + param_2);
      fVar2 = (float)*piVar1 * 4.656613e-10;
      if (fVar2 <= -1.0) {
        fVar2 = -1.0;
      }
      *(float *)(param_4 + uStack_14 * 8) = fVar2;
      fVar2 = (float)piVar1[1] * 4.656613e-10;
      if (fVar2 <= -1.0) {
        fVar2 = -1.0;
      }
      *(float *)(param_4 + 4 + uStack_14 * 8) = fVar2;
      uStack_14 = uStack_14 + 1;
    } while (uStack_14 < param_3);
  }
  return;
}



void FUN_00a74240(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  float *pfVar2;
  size_t _Size;
  void *_Src;
  float fVar3;
  int iStack_14;
  int aiStack_10 [3];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_14;
  iStack_14 = param_2;
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    do {
      piVar1 = param_1;
      if (((uint)param_1 & 3) != 0) {
        _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(aiStack_10,param_1,_Size);
        }
        memcpy((void *)((int)aiStack_10 + _Size),_Src,0xc - _Size);
        piVar1 = aiStack_10;
      }
      param_1 = (int *)((int)param_1 + iStack_14);
      fVar3 = (float)*piVar1 * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      pfVar2[-2] = fVar3;
      fVar3 = (float)piVar1[1] * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      pfVar2[-1] = fVar3;
      fVar3 = (float)piVar1[2] * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      *pfVar2 = fVar3;
      pfVar2 = pfVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a74340(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  float *pfVar2;
  size_t _Size;
  void *_Src;
  float fVar3;
  int iStack_18;
  int aiStack_14 [4];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_18;
  iStack_18 = param_2;
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    do {
      piVar1 = param_1;
      if (((uint)param_1 & 3) != 0) {
        _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(aiStack_14,param_1,_Size);
        }
        memcpy((void *)((int)aiStack_14 + _Size),_Src,0x10 - _Size);
        piVar1 = aiStack_14;
      }
      param_1 = (int *)((int)param_1 + iStack_18);
      fVar3 = (float)*piVar1 * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      pfVar2[-2] = fVar3;
      fVar3 = (float)piVar1[1] * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      pfVar2[-1] = fVar3;
      fVar3 = (float)piVar1[2] * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      *pfVar2 = fVar3;
      fVar3 = (float)piVar1[3] * 4.656613e-10;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      pfVar2[1] = fVar3;
      pfVar2 = pfVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a74450(int param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  size_t _Size;
  void *_Src;
  int iStack_4;
  
  iStack_4 = param_1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      piVar1 = param_2;
      if (((uint)param_2 & 3) != 0) {
        _Src = (void *)((int)param_2 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_2;
        if (_Size != 0) {
          memcpy(&iStack_4,param_2,_Size);
        }
        memcpy((void *)((int)&iStack_4 + _Size),_Src,4 - _Size);
        piVar1 = &iStack_4;
      }
      param_2 = (int *)((int)param_2 + param_3);
      *(float *)(param_5 + uVar2 * 4) =
           (float)((double)*piVar1 + (double)(&DAT_011a2c10)[-(*piVar1 >> 0x1f)]) * 2.3283064e-10;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



void FUN_00a744f0(int *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  size_t _Size;
  void *_Src;
  uint uStack_14;
  int aiStack_10 [3];
  
  uStack_14 = 0;
  if (param_3 != 0) {
    do {
      piVar1 = param_1;
      if (((uint)param_1 & 3) != 0) {
        _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(aiStack_10,param_1,_Size);
        }
        memcpy((void *)((int)aiStack_10 + _Size),_Src,8 - _Size);
        piVar1 = aiStack_10;
      }
      param_1 = (int *)((int)param_1 + param_2);
      *(float *)(param_4 + uStack_14 * 8) =
           (float)((double)*piVar1 + (double)(&DAT_011a2c10)[-(*piVar1 >> 0x1f)]) * 2.3283064e-10;
      *(float *)(param_4 + 4 + uStack_14 * 8) =
           (float)((double)piVar1[1] + (double)(&DAT_011a2c10)[-(piVar1[1] >> 0x1f)]) *
           2.3283064e-10;
      uStack_14 = uStack_14 + 1;
    } while (uStack_14 < param_3);
  }
  return;
}



void FUN_00a745d0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  float *pfVar2;
  size_t _Size;
  void *_Src;
  int iStack_14;
  int aiStack_10 [3];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_14;
  iStack_14 = param_2;
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    do {
      piVar1 = param_1;
      if (((uint)param_1 & 3) != 0) {
        _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(aiStack_10,param_1,_Size);
        }
        memcpy((void *)((int)aiStack_10 + _Size),_Src,0xc - _Size);
        piVar1 = aiStack_10;
      }
      param_1 = (int *)((int)param_1 + iStack_14);
      pfVar2[-2] = (float)((double)*piVar1 + (double)(&DAT_011a2c10)[-(*piVar1 >> 0x1f)]) *
                   2.3283064e-10;
      pfVar2[-1] = (float)((double)piVar1[1] + (double)(&DAT_011a2c10)[-(piVar1[1] >> 0x1f)]) *
                   2.3283064e-10;
      *pfVar2 = (float)((double)piVar1[2] + (double)(&DAT_011a2c10)[-(piVar1[2] >> 0x1f)]) *
                2.3283064e-10;
      pfVar2 = pfVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a746e0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  float *pfVar2;
  size_t _Size;
  void *_Src;
  int iStack_18;
  int aiStack_14 [4];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_18;
  iStack_18 = param_2;
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    do {
      piVar1 = param_1;
      if (((uint)param_1 & 3) != 0) {
        _Src = (void *)((int)param_1 + 3U & 0xfffffffc);
        _Size = (int)_Src - (int)param_1;
        if (_Size != 0) {
          memcpy(aiStack_14,param_1,_Size);
        }
        memcpy((void *)((int)aiStack_14 + _Size),_Src,0x10 - _Size);
        piVar1 = aiStack_14;
      }
      param_1 = (int *)((int)param_1 + iStack_18);
      pfVar2[-2] = (float)((double)*piVar1 + (double)(&DAT_011a2c10)[-(*piVar1 >> 0x1f)]) *
                   2.3283064e-10;
      pfVar2[-1] = (float)((double)piVar1[1] + (double)(&DAT_011a2c10)[-(piVar1[1] >> 0x1f)]) *
                   2.3283064e-10;
      *pfVar2 = (float)((double)piVar1[2] + (double)(&DAT_011a2c10)[-(piVar1[2] >> 0x1f)]) *
                2.3283064e-10;
      pfVar2[1] = (float)((double)piVar1[3] + (double)(&DAT_011a2c10)[-(piVar1[3] >> 0x1f)]) *
                  2.3283064e-10;
      pfVar2 = pfVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_008ab370();
  return;
}



void FUN_00a74820(uint *param_1,undefined4 param_2,int param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  if (param_3 != 0) {
    uVar1 = *param_1;
    fVar4 = (float)(uVar1 & 0x3ff) + 0.0;
    if ((uVar1 & 0x200) != 0) {
      fVar4 = (float)(int)(uVar1 & 0x3ff | 0xfffffc00);
    }
    fVar2 = -511.0;
    if (-511.0 <= fVar4) {
      fVar2 = fVar4;
    }
    uVar3 = uVar1 >> 10 & 0x3ff;
    *param_4 = (fVar2 - -511.0) / 511.0 - 1.0;
    fVar4 = (float)uVar3 + 0.0;
    if ((uVar1 >> 10 & 0x200) != 0) {
      fVar4 = (float)(int)(uVar3 | 0xfffffc00);
    }
    fVar2 = -511.0;
    if (-511.0 <= fVar4) {
      fVar2 = fVar4;
    }
    uVar3 = uVar1 >> 0x14 & 0x3ff;
    param_4[1] = (fVar2 - -511.0) / 511.0 - 1.0;
    fVar4 = (float)uVar3 + 0.0;
    if ((uVar1 >> 0x14 & 0x200) != 0) {
      fVar4 = (float)(int)(uVar3 | 0xfffffc00);
    }
    fVar2 = -511.0;
    if (-511.0 <= fVar4) {
      fVar2 = fVar4;
    }
    param_4[2] = (fVar2 - -511.0) / 511.0 - 1.0;
                    // WARNING: Could not recover jumptable at 0x00a7495a. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_00a74984)[uVar1 >> 0x1e])();
    return;
  }
  return;
}



void FUN_00a749a0(uint *param_1,undefined4 param_2,int param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_3 != 0) {
    uVar1 = *param_1;
    uVar3 = (ushort)uVar1 & 0x3ff;
    uVar2 = uVar3 | 0xfc00;
    if ((uVar1 & 0x200) == 0) {
      uVar2 = uVar3;
    }
    uVar3 = (ushort)(uVar1 >> 10) & 0x3ff;
    *param_4 = uVar2;
    uVar2 = uVar3 | 0xfc00;
    if ((uVar1 >> 10 & 0x200) == 0) {
      uVar2 = uVar3;
    }
    uVar3 = (ushort)(uVar1 >> 0x14) & 0x3ff;
    param_4[1] = uVar2;
    uVar2 = uVar3 | 0xfc00;
    if ((uVar1 >> 0x14 & 0x200) == 0) {
      uVar2 = uVar3;
    }
    param_4[2] = uVar2;
                    // WARNING: Could not recover jumptable at 0x00a74a34. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_00a74a70)[uVar1 >> 0x1e])();
    return;
  }
  return;
}



void FUN_00a74a80(uint *param_1,undefined4 param_2,int param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if (param_3 != 0) {
    uVar1 = *param_1;
    fVar3 = (float)(uVar1 & 0x3ff) + 0.0;
    if ((uVar1 & 0x200) != 0) {
      fVar3 = (float)(int)(uVar1 & 0x3ff | 0xfffffc00);
    }
    *param_4 = fVar3;
    uVar2 = uVar1 >> 10 & 0x3ff;
    fVar3 = (float)uVar2 + 0.0;
    if ((uVar1 >> 10 & 0x200) != 0) {
      fVar3 = (float)(int)(uVar2 | 0xfffffc00);
    }
    param_4[1] = fVar3;
    uVar2 = uVar1 >> 0x14 & 0x3ff;
    fVar3 = (float)uVar2 + 0.0;
    if ((uVar1 >> 0x14 & 0x200) != 0) {
      fVar3 = (float)(int)(uVar2 | 0xfffffc00);
    }
    param_4[2] = fVar3;
                    // WARNING: Could not recover jumptable at 0x00a74b61. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_00a74ba0)[uVar1 >> 0x1e])();
    return;
  }
  return;
}



void FUN_00a74bb0(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    pfVar2 = (float *)(param_4 + 8);
    do {
      uVar1 = *param_1;
      param_1 = (uint *)((int)param_1 + param_2);
      pfVar2[-2] = (float)(uVar1 & 0x3ff) + 0.0;
      pfVar2[-1] = (float)(uVar1 >> 10 & 0x3ff) + 0.0;
      *pfVar2 = (float)(uVar1 >> 0x14 & 0x3ff) + 0.0;
      pfVar2[1] = (float)(uVar1 >> 0x1e) + 0.0;
      pfVar2 = pfVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



undefined4 * __thiscall FUN_00a75a90(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::NativeWindow11Win32::vftable;
  piVar1 = (int *)param_1[4];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[5] = 0;
  }
  func_0x00b51e20();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00a75b70(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    _guard_check_icall(piVar1);
    (*pcVar2)();
  }
  return;
}



void __thiscall
FUN_00a75b90(int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 param_7,int param_8)

{
  code *pcVar1;
  int *piVar2;
  HMODULE hModule;
  int iVar3;
  FARPROC pFVar4;
  code *unaff_EBX;
  undefined4 *unaff_EBP;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  int *piStack_a0;
  undefined4 uVar5;
  undefined4 uStack_84;
  undefined4 uStack_80;
  FARPROC pFStack_7c;
  int iStack_78;
  int *piStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
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
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_84;
  piStack_74 = param_2;
  iStack_78 = param_8;
  if ((((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) && (param_8 != 0)) &&
     ((param_5 != 0 && (param_6 != 0)))) {
    if (*(char *)(param_1 + 8) == '\0') {
      pFVar4 = (FARPROC)func_0x00a759e0();
      pFStack_7c = pFVar4;
      if (pFVar4 == (FARPROC)0x0) {
        uStack_60 = param_4;
        iStack_6c = param_6;
        uStack_44 = *(undefined4 *)(param_1 + 4);
        uStack_54 = param_7;
        iStack_70 = param_5;
        uStack_48 = 1;
        pcVar1 = *(code **)(*param_3 + 0x28);
        piStack_a0 = piStack_74;
        uStack_58 = 0;
        uStack_5c = 0;
        uStack_68 = 0;
        uStack_64 = 1;
        uStack_4c = 0x70;
        uStack_38 = 0;
        uStack_50 = 0;
        uStack_40 = 1;
        uStack_3c = 0;
        _guard_check_icall(param_3);
        iVar3 = (*pcVar1)();
        if (-1 < iVar3) {
          pcVar1 = *(code **)(*param_3 + 0x20);
          piStack_a0 = param_3;
          _guard_check_icall();
          (*pcVar1)();
        }
      }
      else {
        iStack_30 = param_6;
        uStack_24 = param_7;
        uStack_2c = param_4;
        iStack_34 = param_5;
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_1c = 0x70;
        uStack_18 = 1;
        uStack_14 = 0;
        uStack_10 = 1;
        iStack_c = 0;
        uStack_8 = 0;
        uStack_80 = 0;
        pcVar1 = *(code **)(*(int *)pFVar4 + 0x3c);
        uVar5 = 0;
        piStack_a0 = (int *)0x0;
        _guard_check_icall(pFVar4,piStack_74,*(undefined4 *)(param_1 + 4),&iStack_34);
        iVar3 = (*pcVar1)();
        if (-1 < iVar3) {
          pcVar1 = *(code **)(*(int *)pFVar4 + 0x20);
          _guard_check_icall(pFVar4,*(undefined4 *)(param_1 + 4),2);
          (*pcVar1)();
          *unaff_EDI = uVar5;
        }
        func_0x009dc9c0(&stack0xffffff68);
      }
    }
    else {
      hModule = GetModuleHandleA("dcomp.dll");
      if (hModule != (HMODULE)0x0) {
        piStack_a0 = (int *)0xa75c25;
        pFStack_7c = GetProcAddress(hModule,"DCompositionCreateDevice");
        if (pFStack_7c != (FARPROC)0x0) {
          if (*(int *)(param_1 + 0xc) == 0) {
            uStack_84 = 0;
            pcVar1 = *(code **)*param_2;
            piStack_a0 = param_2;
            _guard_check_icall();
            iVar3 = (*pcVar1)();
            if (iVar3 < 0) {
              if (unaff_ESI != (int *)0x0) {
                pcVar1 = *(code **)(*unaff_ESI + 8);
                _guard_check_icall(unaff_ESI);
                (*pcVar1)();
              }
              unaff_ESI = (int *)0x0;
            }
            _guard_check_icall(unaff_ESI,&DAT_00ff42b8,param_1 + 0xc);
            iVar3 = (*unaff_EBX)();
            func_0x009dc9c0(&stack0xffffff64);
            if (iVar3 < 0) goto LAB_00a75fb7;
          }
          if (*(int *)(param_1 + 0x10) == 0) {
            piStack_a0 = *(int **)(param_1 + 4);
            pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x18);
            _guard_check_icall(*(int **)(param_1 + 0xc));
            iVar3 = (*pcVar1)();
            if (iVar3 < 0) goto LAB_00a75fb7;
          }
          if (*(int *)(param_1 + 0x14) == 0) {
            pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x1c);
            piStack_a0 = (int *)0xa75cfc;
            _guard_check_icall();
            piStack_a0 = (int *)0xa75cfe;
            iVar3 = (*pcVar1)();
            if (iVar3 < 0) goto LAB_00a75fb7;
          }
          pFStack_7c = (FARPROC)func_0x00a759e0();
          iStack_34 = param_5;
          iStack_30 = param_6;
          uStack_2c = param_4;
          uStack_28 = 0;
          uStack_24 = 1;
          uStack_20 = 0;
          uStack_1c = 0x70;
          iStack_c = (uint)(*(char *)(param_1 + 9) == '\0') * 2 + 1;
          uStack_18 = 2;
          uStack_14 = 0;
          uStack_10 = 3;
          uStack_8 = 0;
          uStack_80 = 0;
          pcVar1 = *(code **)(*(int *)pFStack_7c + 0x60);
          piStack_a0 = &iStack_34;
          _guard_check_icall(pFStack_7c,piStack_74);
          iVar3 = (*pcVar1)();
          if (-1 < iVar3) {
            *unaff_EBP = unaff_EDI;
          }
          piVar2 = *(int **)(param_1 + 0x14);
          pcVar1 = *(code **)(*piVar2 + 0x3c);
          _guard_check_icall(piVar2,unaff_EDI);
          (*pcVar1)();
          pcVar1 = *(code **)(**(int **)(param_1 + 0x10) + 0xc);
          _guard_check_icall(*(int **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
          (*pcVar1)();
          func_0x009dc9c0(&piStack_a0);
        }
      }
    }
  }
LAB_00a75fb7:
  FUN_008ab370();
  return;
}



bool __thiscall FUN_00a75fe0(int param_1,LPRECT param_2)

{
  BOOL BVar1;
  
  BVar1 = GetClientRect(*(HWND *)(param_1 + 4),param_2);
  return BVar1 == 1;
}



bool __fastcall FUN_00a76000(int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 4));
  return BVar1 == 1;
}



undefined4 * __thiscall FUN_00a76290(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f52290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::CompositorNativeWindow11::vftable;
  piVar1 = (int *)param_1[0x10];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  piVar1 = (int *)param_1[0xf];
  uStack_8 = 1;
  if (piVar1 != (int *)0x0) {
    param_1[0xf] = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  piVar1 = (int *)param_1[0xe];
  uStack_8 = 2;
  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  piVar1 = (int *)param_1[0xd];
  uStack_8 = 3;
  if (piVar1 != (int *)0x0) {
    param_1[0xd] = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  uStack_8 = 4;
  if (*(char *)((int)param_1 + 0x29) != '\0') {
    pcVar2 = (code *)param_1[9];
    _guard_check_icall();
    (*pcVar2)();
  }
  if ((HMODULE)param_1[0xc] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[0xc]);
    param_1[0xc] = 0;
  }
  if ((HMODULE)param_1[0xb] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[0xb]);
    param_1[0xb] = 0;
  }
  func_0x00b51e20();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall
FUN_00a76710(int param_1,code *param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,int *param_8)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *unaff_FS_OFFSET;
  int *piStack_64;
  int *piStack_60;
  code *pcStack_5c;
  int *piStack_58;
  int *piStack_54;
  code *pcStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5235d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_5c = param_2;
  piStack_48 = param_8;
  iStack_4c = param_1;
  uStack_14 = uVar4;
  if ((((param_2 != (code *)0x0) && (param_3 != (undefined4 *)0x0)) && (param_8 != (int *)0x0)) &&
     ((param_5 != 0 && (param_6 != 0)))) {
    piStack_64 = (int *)0x0;
    pcVar7 = *(code **)**(undefined4 **)(param_1 + 0x34);
    uStack_8._0_1_ = 1;
    uStack_8._1_3_ = 0;
    _guard_check_icall(*(undefined4 **)(param_1 + 0x34),&DAT_00fbc534,&piStack_64,uVar4);
    iVar5 = (*pcVar7)();
    if (-1 < iVar5) {
      piStack_58 = (int *)0x0;
      pcVar7 = *(code **)(*piStack_64 + 0x18);
      uStack_8._0_1_ = 4;
      _guard_check_icall(piStack_64,&piStack_58);
      iVar5 = (*pcVar7)();
      if (-1 < iVar5) {
        piStack_60 = (int *)0x0;
        pcVar7 = *(code **)*piStack_58;
        uStack_8._0_1_ = 9;
        _guard_check_icall(piStack_58,&DAT_00ff4510,&piStack_60,uVar4);
        iVar5 = (*pcVar7)();
        if (-1 < iVar5) {
          uStack_8 = CONCAT31(uStack_8._1_3_,0xe);
          pcStack_50 = (code *)0x0;
          pcVar7 = *(code **)*param_3;
          _guard_check_icall(param_3,&DAT_00fc3a20,&pcStack_50);
          iVar5 = (*pcVar7)();
          pcVar7 = pcStack_50;
          if (iVar5 < 0) {
            if (pcStack_50 != (code *)0x0) {
              pcVar7 = *(code **)(*(int *)pcStack_50 + 8);
              _guard_check_icall(pcStack_50);
              (*pcVar7)();
            }
            pcVar7 = (code *)0x0;
          }
          iVar5 = iStack_4c;
          iStack_44 = param_5;
          iStack_40 = param_6;
          uStack_3c = param_4;
          uStack_38 = 0;
          uStack_34 = 1;
          uStack_30 = 0;
          uStack_2c = 0x70;
          iStack_1c = (uint)(*(char *)(iStack_4c + 8) == '\0') * 2 + 1;
          uStack_28 = 2;
          uStack_24 = 0;
          uStack_20 = 3;
          uStack_18 = 0x40;
          piStack_54 = (int *)0x0;
          pcVar1 = *(code **)(*(int *)pcVar7 + 0x60);
          uStack_8._0_1_ = 0x10;
          _guard_check_icall(pcVar7,pcStack_5c,&iStack_44,0,&piStack_54);
          iVar6 = (*pcVar1)();
          if (-1 < iVar6) {
            uStack_8._0_1_ = 0x12;
            pcVar1 = *(code **)*piStack_54;
            _guard_check_icall(piStack_54,&DAT_00ff4520,piStack_48);
            (*pcVar1)();
          }
          piVar3 = piStack_60;
          pcStack_5c = *(code **)(*piStack_60 + 0x10);
          piStack_48 = (int *)(iVar5 + 0x3c);
          piVar2 = (int *)*piStack_48;
          uStack_8._0_1_ = 0x13;
          if (piVar2 != (int *)0x0) {
            *piStack_48 = 0;
            pcVar1 = *(code **)(*piVar2 + 8);
            _guard_check_icall(piVar2);
            (*pcVar1)();
          }
          pcVar1 = pcStack_5c;
          uStack_8._0_1_ = 0x10;
          _guard_check_icall(piVar3,piStack_54,piStack_48);
          iVar5 = (*pcVar1)();
          piVar2 = piStack_58;
          if (-1 < iVar5) {
            pcStack_5c = *(code **)(*piStack_58 + 0x60);
            piStack_48 = (int *)(iStack_4c + 0x40);
            piVar3 = (int *)*piStack_48;
            uStack_8._0_1_ = 0x19;
            if (piVar3 != (int *)0x0) {
              *piStack_48 = 0;
              pcVar1 = *(code **)(*piVar3 + 8);
              _guard_check_icall(piVar3);
              (*pcVar1)();
            }
            pcVar1 = pcStack_5c;
            uStack_8._0_1_ = 0x10;
            _guard_check_icall(piVar2,*(undefined4 *)(iStack_4c + 0x3c),piStack_48);
            iVar5 = (*pcVar1)();
            if (-1 < iVar5) {
              piVar2 = (int *)(iStack_4c + 0x38);
              piStack_48 = *(int **)(iStack_4c + 0x40);
              pcStack_50 = *(code **)*piStack_48;
              piVar3 = (int *)*piVar2;
              uStack_8._0_1_ = 0x20;
              if (piVar3 != (int *)0x0) {
                *piVar2 = 0;
                pcVar1 = *(code **)(*piVar3 + 8);
                _guard_check_icall(piVar3);
                (*pcVar1)();
              }
              iVar5 = iStack_4c;
              uStack_8._0_1_ = 0x1f;
              _guard_check_icall(piStack_48,&DAT_00fbc524,piVar2);
              iVar6 = (*pcStack_50)();
              uStack_8._0_1_ = 0x10;
              if (-1 < iVar6) {
                pcVar1 = *(code **)(**(int **)(iVar5 + 0x34) + 0x1c);
                _guard_check_icall(*(int **)(iVar5 + 0x34),*(undefined4 *)(iStack_4c + 0x38));
                (*pcVar1)();
              }
            }
          }
          piVar2 = piStack_54;
          uStack_8._0_1_ = 0x2b;
          if (piStack_54 != (int *)0x0) {
            piStack_54 = (int *)0x0;
            pcVar1 = *(code **)(*piVar2 + 8);
            _guard_check_icall(piVar2);
            (*pcVar1)();
          }
          uStack_8._0_1_ = 0x2c;
          if (pcVar7 != (code *)0x0) {
            pcVar1 = *(code **)(*(int *)pcVar7 + 8);
            _guard_check_icall(pcVar7);
            (*pcVar1)();
          }
        }
        piVar2 = piStack_60;
        uStack_8._0_1_ = 0x2d;
        if (piStack_60 != (int *)0x0) {
          piStack_60 = (int *)0x0;
          pcVar7 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar7)();
        }
      }
      piVar2 = piStack_58;
      uStack_8 = CONCAT31(uStack_8._1_3_,0x2e);
      if (piStack_58 != (int *)0x0) {
        piStack_58 = (int *)0x0;
        pcVar7 = *(code **)(*piVar2 + 8);
        _guard_check_icall(piVar2);
        (*pcVar7)();
      }
    }
    piVar2 = piStack_64;
    uStack_8 = 0x2f;
    if (piStack_64 != (int *)0x0) {
      piStack_64 = (int *)0x0;
      pcVar7 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar7)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a76af0(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  float fStack_2c;
  float fStack_28;
  int *piStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f5239d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_24 = (int *)0x0;
  pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x34);
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  _guard_check_icall(*(undefined4 **)(param_1 + 0x34),&DAT_00fbc3d8,&piStack_24,uStack_14);
  (*pcVar1)();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  pcVar1 = *(code **)(*piStack_24 + 0x8c);
  _guard_check_icall(piStack_24,&fStack_2c);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    pcVar1 = *(code **)(*piStack_24 + 0x50);
    _guard_check_icall(piStack_24,&fStack_20);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      *param_2 = (int)fStack_20;
      param_2[2] = (int)fStack_2c + (int)fStack_20;
      param_2[1] = (int)fStack_1c;
      param_2[3] = (int)fStack_28 + (int)fStack_1c;
    }
  }
  piVar2 = piStack_24;
  iStack_8 = 5;
  if (piStack_24 != (int *)0x0) {
    piStack_24 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00a773f0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::VertexDataManager::vftable;
  func_0x00a77240();
  func_0x00b51480();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



void __thiscall
FUN_00a78690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined8 uStack_8;
  
  FUN_009b1460(param_2,param_3,param_4,param_5);
  uStack_8 = 0;
  func_0x00e879d7(param_1 + 4,&param_5,0x100,&uStack_8);
  func_0x00e878d5(0,param_1 + 4);
  return;
}



void FUN_00a786e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_009b1530(param_1,param_2,param_3);
  func_0x00e878db();
  return;
}



bool FUN_00a78700(void)

{
  int iVar1;
  
  iVar1 = func_0x00e878e7();
  return iVar1 != 0;
}



void __thiscall FUN_00a78710(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uStack_8;
  
  FUN_009b1790(param_2,param_3);
  uStack_8 = 0;
  func_0x00e879d7(param_1 + 4,&param_3,0x100,&uStack_8);
  func_0x00e878e1(0,param_1 + 4);
  return;
}



undefined4 * __thiscall FUN_00a78830(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -9;
  *puVar1 = rx::Context9::vftable;
  *param_1 = rx::Context9::vftable;
  func_0x006336f0();
  func_0x0095c650();
  *puVar1 = rx::ContextD3D::vftable;
  *param_1 = rx::d3d::Context::vftable;
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x1a8);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_00a78840(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Context9::vftable;
  param_1[9] = rx::Context9::vftable;
  func_0x006336f0();
  func_0x0095c650();
  *param_1 = rx::ContextD3D::vftable;
  param_1[9] = rx::d3d::Context::vftable;
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1a8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a788a0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::VertexArrayImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a788d0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::VertexArrayImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a78900(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48cc4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x68,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b51e60(param_2,*(undefined4 *)(param_1 + 0x28));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00a78980(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cb04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(8,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b50540(0x8b48,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00a789f0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50624;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0xc,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b52190(*(undefined4 *)(param_1 + 0x28));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a78a60(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c47;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x80,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a7ed70(param_2,*(undefined4 *)(param_1 + 0x28));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a78ae0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50667;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x530,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a1d6f0(param_2,*(undefined4 *)(param_1 + 0x28));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a78b60(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48d04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b523f0(*(undefined4 *)(param_1 + 0x28),param_2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a78be0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f506a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x40,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b505d0(param_2,*(undefined4 *)(param_1 + 0x28));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a78c60(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49cd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x74,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b3a8f0(param_2,*(undefined4 *)(param_1 + 0x28));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a78ce0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52528;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  switch(*param_2) {
  case 0:
  case 9:
    iVar2 = func_0x008ab47d(0x9c,uVar1);
    uStack_8 = 0;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40300(param_2,*(undefined4 *)(param_1 + 0x28));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 5:
    iVar2 = func_0x008ab47d(0x58,uVar1);
    uStack_8 = 2;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40840(param_2,*(undefined4 *)(param_1 + 0x28));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 7:
    iVar2 = func_0x008ab47d(0x1d8,uVar1);
    uStack_8 = 1;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40700(param_2,*(undefined4 *)(param_1 + 0x28));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __thiscall FUN_00a78e10(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008ab47d(0x18,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    puVar1[2] = 0;
    *puVar1 = rx::VertexArray9::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



undefined4 __fastcall FUN_00a78e50(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::dispatchCompute",0x1e0);
  (*pcVar1)();
  return 1;
}



undefined4 __fastcall FUN_00a78e90(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::dispatchComputeIndirect",0x1e6);
  (*pcVar1)();
  return 1;
}



void FUN_00a78ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x009f0b80(param_1,param_2,param_3,param_4,0);
  return;
}



undefined4 __fastcall FUN_00a78ef0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::drawArraysIndirect",0x113);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a78f30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_retaddr;
  undefined4 uVar4;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uStack_4 = CONCAT31((int3)((uint)iVar3 >> 8),
                      *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x14f4) + 0xec) + 0x13c));
  func_0x00a29520();
  cVar1 = func_0x009eb8a0(param_3,param_5,uStack_4);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = func_0x009f4000(param_2,param_3);
  if ((iVar2 != 1) &&
     (iVar2 = func_0x00a77b00(param_2,unaff_EBX,uStack_4,iVar3 + 0x314c,unaff_retaddr), iVar2 != 1))
  {
    uVar4 = *(undefined4 *)(param_2 + 0x14f4);
    iVar3 = func_0x00a7b440(param_2,*(undefined4 *)(iVar3 + 0x159c),iVar3 + 0x314c,uVar4,param_5,
                            unaff_retaddr,iVar3 + 0x1b40);
    if ((iVar3 != 1) &&
       ((iVar3 = func_0x009ebe80(param_2), iVar3 != 1 &&
        (iVar3 = func_0x009ebcf0(param_2,param_3), iVar3 != 1)))) {
      cVar1 = func_0x009dc100(param_2 + 8,param_3);
      if ((cVar1 == '\0') &&
         (iVar3 = func_0x009ef3a0(param_2,param_3,uVar4,param_5,unaff_retaddr), iVar3 == 1)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}



undefined4 __fastcall FUN_00a78f40(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::drawArraysInstancedBaseInstance",0xbc);
  (*pcVar1)();
  return 1;
}



void FUN_00a78f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x009f0c90(param_1,param_2,param_3,param_4,param_5,0);
  return;
}



undefined4 __fastcall FUN_00a78fb0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::drawElementsBaseVertex",0xd0);
  (*pcVar1)();
  return 1;
}



undefined4 __fastcall FUN_00a78ff0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::drawElementsIndirect",0x11c);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a79030(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  uStack_4 = CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x28) >> 8),
                      *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x14f4) + 0xec) + 0x13c));
  func_0x00a29520();
  uVar3 = param_3;
  cVar1 = func_0x009eb8a0(param_3,param_4,uStack_4);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = func_0x009f4000(param_2,param_3);
  if (((iVar2 != 1) && (iVar2 = func_0x009ebe80(param_2), iVar2 != 1)) &&
     (iVar2 = func_0x009ebcf0(param_2,param_3), iVar2 != 1)) {
    cVar1 = func_0x009dc100(param_2 + 8,param_3);
    if ((cVar1 == '\0') &&
       (iVar2 = func_0x009ef4f0(param_2,param_3,uVar3,param_4,uStack_4,unaff_EDI), iVar2 == 1)) {
      return 1;
    }
    return 0;
  }
  return 1;
}



undefined4 __fastcall FUN_00a79040(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::drawElementsInstancedBaseVertex",0xe6);
  (*pcVar1)();
  return 1;
}



undefined4 __fastcall FUN_00a79080(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::drawElementsInstancedBaseVertexBaseInstance",0xf3);
  (*pcVar1)();
  return 1;
}



void FUN_00a790c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x009f0c90(param_1,param_2,param_5,param_6,param_7,0);
  return;
}



undefined4 __fastcall FUN_00a790f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::drawRangeElementsBaseVertex",0x10b);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a79130(int param_1,int *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  int *unaff_ESI;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  piVar3 = *(int **)(param_1 + 0x28);
  iVar5 = func_0x009eb810();
  if (iVar5 == 1) {
    return 1;
  }
  iVar5 = param_2[0x745];
  iStack_24 = 1;
  pcVar1 = *(code **)(*unaff_ESI + 0x18);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  if (iVar6 < 0) {
    pcVar1 = *(code **)(*(int *)(iVar5 + 0x24) + 4);
    _guard_check_icall(iVar6,"Failed to issue event query",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                       ,"rx::Renderer9::finish",0x296);
    (*pcVar1)();
    return 1;
  }
  pcVar1 = *(code **)(*param_2 + 0x1c);
  _guard_check_icall(param_2,0,0,1);
  iVar6 = (*pcVar1)();
  if (iVar6 < 0) {
    puVar2 = (undefined4 *)piVar3[0x73f];
    if ((uint)((int)puVar2 - piVar3[0x73e] >> 2) < 0x3e9) {
      if (puVar2 != (undefined4 *)piVar3[0x740]) {
        *puVar2 = unaff_EBX;
        piVar3[0x73f] = piVar3[0x73f] + 4;
        uVar8 = 0x29e;
        goto LAB_009f051e;
      }
      func_0x008c0640(puVar2,auStack_28);
    }
    else if (unaff_EBX != (int *)0x0) {
      pcVar1 = *(code **)(*unaff_EBX + 8);
      _guard_check_icall(unaff_EBX);
      (*pcVar1)();
      uVar8 = 0x29e;
      goto LAB_009f051e;
    }
    uVar8 = 0x29e;
  }
  else {
    uVar7 = 0;
    do {
      if (iVar6 != 1) {
        puVar2 = (undefined4 *)piVar3[0x73f];
        if ((uint)((int)puVar2 - piVar3[0x73e] >> 2) < 0x3e9) {
          if (puVar2 != (undefined4 *)piVar3[0x740]) {
            *puVar2 = unaff_EBX;
            piVar3[0x73f] = piVar3[0x73f] + 4;
            return 0;
          }
          func_0x008c0640(puVar2,&iStack_24);
        }
        else if (unaff_EBX != (int *)0x0) {
          pcVar1 = *(code **)(*unaff_EBX + 8);
          _guard_check_icall(unaff_EBX);
          (*pcVar1)();
          return 0;
        }
        return 0;
      }
      do {
        do {
          func_0x0093ea60();
          pcVar1 = *(code **)(*unaff_EBX + 0x1c);
          _guard_check_icall(unaff_EBX,0,0,1);
          iVar6 = (*pcVar1)();
          uVar7 = uVar7 + 1;
          if (iVar6 != 1) {
            if (iVar6 < 0) goto LAB_009f04b0;
            goto LAB_009f0506;
          }
        } while (uVar7 != (uVar7 / 10) * 10);
        pcVar1 = *(code **)(*piVar3 + 0xd4);
        _guard_check_icall();
        cVar4 = (*pcVar1)();
      } while (cVar4 == '\0');
      iVar6 = -0x7789f798;
LAB_009f04b0:
      puVar2 = (undefined4 *)piVar3[0x73f];
      if ((uint)((int)puVar2 - piVar3[0x73e] >> 2) < 0x3e9) {
        if (puVar2 == (undefined4 *)piVar3[0x740]) {
          func_0x008c0640(puVar2,auStack_28);
        }
        else {
          *puVar2 = unaff_EBX;
          piVar3[0x73f] = piVar3[0x73f] + 4;
        }
      }
      else if (unaff_EBX != (int *)0x0) {
        pcVar1 = *(code **)(*unaff_EBX + 8);
        _guard_check_icall(unaff_EBX);
        (*pcVar1)();
      }
LAB_009f0506:
    } while (-1 < iVar6);
    uVar8 = 0x2ba;
    iVar5 = iStack_24;
  }
LAB_009f051e:
  pcVar1 = *(code **)(*(int *)(iVar5 + 0x24) + 4);
  _guard_check_icall(iVar6,"Failed to get event query data",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                     ,"rx::Renderer9::finish",uVar8);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a79140(int param_1,int *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_EBX;
  int *unaff_EDI;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = func_0x009eb810();
  if (iVar4 == 1) {
    return 1;
  }
  iVar4 = param_2[0x745];
  uStack_20 = 1;
  pcVar1 = *(code **)(*unaff_EDI + 0x18);
  _guard_check_icall();
  iVar5 = (*pcVar1)();
  if (iVar5 < 0) {
    pcVar1 = *(code **)(*(int *)(iVar4 + 0x24) + 4);
    _guard_check_icall(iVar5,"Failed to issue event query",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                       ,"rx::Renderer9::flush",0x284);
    (*pcVar1)();
    return 1;
  }
  pcVar1 = *(code **)(*param_2 + 0x1c);
  _guard_check_icall(param_2,0,0,1);
  iVar5 = (*pcVar1)();
  puVar2 = *(undefined4 **)(iVar3 + 0x1cfc);
  if ((uint)((int)puVar2 - *(int *)(iVar3 + 0x1cf8) >> 2) < 0x3e9) {
    if (puVar2 == *(undefined4 **)(iVar3 + 0x1d00)) {
      func_0x008c0640(puVar2,auStack_24);
    }
    else {
      *puVar2 = unaff_EBX;
      *(int *)(iVar3 + 0x1cfc) = *(int *)(iVar3 + 0x1cfc) + 4;
    }
  }
  else if (unaff_EBX != (int *)0x0) {
    pcVar1 = *(code **)(*unaff_EBX + 8);
    _guard_check_icall(unaff_EBX);
    (*pcVar1)();
  }
  if (iVar5 < 0) {
    pcVar1 = *(code **)(*(int *)(iVar4 + 0x24) + 4);
    _guard_check_icall(iVar5,"Failed to get event query data",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                       ,"rx::Renderer9::flush",0x289);
    (*pcVar1)();
    return 1;
  }
  return 0;
}



undefined1 __fastcall FUN_00a79150(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x157c);
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x157c) = 0;
  return uVar1;
}



undefined4 __fastcall FUN_00a791a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = func_0x009dbea0(param_1);
  func_0x009551a0(uVar1);
  return unaff_retaddr;
}



int * __fastcall FUN_00a791c0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return piVar2 + 0x498;
}



int __fastcall FUN_00a791d0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return (int)piVar2 + 0x1336;
}



bool __fastcall FUN_00a791e0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return *(char *)((int)piVar2 + 0x1323) != '\0';
}



int * __fastcall FUN_00a791f0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return piVar2 + 0xe0;
}



char __fastcall FUN_00a79200(int param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(char *)((int)piVar2 + 0x157d) != '\0') {
    pcVar1 = *(code **)(*piVar2 + 0xd8);
    _guard_check_icall();
    cVar3 = (*pcVar1)();
    return (-(cVar3 != '\0') & 0xfdU) + 3;
  }
  pcVar1 = *(code **)(*piVar2 + 0xd4);
  _guard_check_icall();
  cVar3 = (*pcVar1)();
  if (cVar3 != '\0') {
    *(undefined1 *)((int)piVar2 + 0x157d) = 1;
    func_0x0092bf10();
    return '\x03';
  }
  return '\0';
}



undefined8 FUN_00a79210(void)

{
  return 0;
}



// WARNING: Instruction at (ram,0x00a79328) overlaps instruction at (ram,0x00a79327)
// 
// WARNING: Control flow encountered bad instruction data

void __thiscall
FUN_00a79220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  unkbyte10 *pVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int *extraout_ECX;
  byte extraout_DL;
  int iVar10;
  int *unaff_FS_OFFSET;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined1 auStack_e4 [160];
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52568;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = param_3;
  uStack_38 = param_4;
  uStack_34 = param_5;
  switch(param_2) {
  case 0x88760827:
  case 0x88760868:
  case 0x88760870:
  case 0x88760874:
    func_0x009dc0e0(uStack_14);
  }
  uStack_3c = func_0x009dbba0(param_2);
  func_0x004687a0(1);
  uStack_8 = 0;
  pVar4 = (unkbyte10 *)func_0x0046b6e0(auStack_e4,"Internal D3D9 error: ");
  piVar5 = (int *)func_0x009529d0(auStack_44,param_2);
  iVar2 = piVar5[1];
  if (*piVar5 != 0) {
    func_0x0046b6e0(pVar4,*piVar5);
  }
  uVar6 = func_0x0091fdc0(pVar4,iVar2,&DAT_00f9ad64,0x30);
  uVar6 = func_0x0046b6e0(uVar6,&DAT_0112e170,uStack_30);
  func_0x0046b6e0(uVar6);
  iVar2 = *(int *)(param_1 + -0xc);
  puVar7 = (undefined4 *)func_0x00468740(aiStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar6 = uStack_34;
  if (0xf < (uint)puVar7[5]) {
    puVar7 = (undefined4 *)*puVar7;
  }
  while( true ) {
    func_0x008d1aa0(uStack_3c,puVar7,uStack_38,uVar6,param_6);
    if (uStack_18 < 0x10) goto LAB_00a79366;
    uVar9 = uStack_18 + 1;
    iVar10 = aiStack_2c[0];
    if (uVar9 < 0x1000) break;
    iVar10 = *(int *)(aiStack_2c[0] + -4);
    uVar9 = uStack_18 + 0x24;
    uVar8 = (aiStack_2c[0] - iVar10) - 4;
    cVar13 = SBORROW4(uVar8,0x1f);
    cVar12 = (aiStack_2c[0] - iVar10) + -0x23 < 0;
    bVar11 = uVar8 == 0x1f;
    if (uVar8 < 0x20) break;
    puVar7 = (undefined4 *)func_0x008aaf66();
    if (!bVar11 && cVar13 == cVar12) {
      pcVar1 = (char *)(iVar2 + 0xa796);
      cVar12 = (char)puVar7;
      *pcVar1 = *pcVar1 + cVar12;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *(char *)extraout_ECX = (char)*extraout_ECX + cVar12;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      *(char *)extraout_ECX = (char)*extraout_ECX + cVar12;
      *extraout_ECX = *extraout_ECX + (int)puVar7;
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (!bVar11) {
      *(byte *)(puVar7 + -6) = *(byte *)(puVar7 + -6) | extraout_DL;
      from_bcd(*pVar4);
      *(int *)((int)pVar4 + 0x458df477) = *(int *)((int)pVar4 + 0x458df477) + -1;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  func_0x008ab812(iVar10,uVar9);
LAB_00a79366:
  func_0x004673c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a793f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x28) + 0x3158) + 0xc);
  _guard_check_icall(0,param_3);
  (*pcVar1)();
  return 0;
}



undefined4 __fastcall FUN_00a794a0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::memoryBarrier",0x1ec);
  (*pcVar1)();
  return 1;
}



undefined4 __fastcall FUN_00a794e0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::memoryBarrierByRegion",0x1f2);
  (*pcVar1)();
  return 1;
}



void __thiscall
FUN_00a79520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  func_0x0095d160(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void __thiscall
FUN_00a79540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x0095df20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



undefined4 __fastcall FUN_00a79570(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::multiDrawArraysInstancedBaseInstance",0x167);
  (*pcVar1)();
  return 1;
}



void __thiscall
FUN_00a795b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x0095e420(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



undefined4 FUN_00a795e0(void)

{
  return 1;
}



void __thiscall
FUN_00a795f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  func_0x0095f9a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



undefined4 __fastcall FUN_00a79620(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Context9.cpp"
                     ,"rx::Context9::multiDrawElementsInstancedBaseVertexBaseInstance",0x176);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a79660(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3e590;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = (int *)(param_1 + 0x18c);
  if ((int *)(param_1 + 0x2c) != piVar2) {
    piVar6 = (int *)(param_1 + 0x84);
    do {
      if (piVar6 + -0x16 != piVar6) {
        piVar5 = piVar6 + -0x15;
        do {
          uStack_8 = 0xffffffff;
          if (*piVar5 != 0) {
            FUN_008e0840(param_2);
            piVar3 = (int *)*piVar5;
            *piVar5 = 0;
            uStack_8 = 0;
            if (piVar3 != (int *)0x0) {
              piVar1 = piVar3 + 1;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                pcVar4 = *(code **)*piVar3;
                _guard_check_icall(param_2);
                (*pcVar4)();
                pcVar4 = *(code **)(*piVar3 + 4);
                _guard_check_icall(1);
                (*pcVar4)();
              }
            }
          }
          piVar3 = piVar5 + 1;
          piVar5 = piVar5 + 2;
        } while (piVar3 != piVar6);
      }
      bVar7 = piVar6 != piVar2;
      piVar6 = piVar6 + 0x16;
    } while (bVar7);
  }
  uStack_8 = 0xffffffff;
  if (*piVar2 != 0) {
    FUN_00968860(param_2);
    *piVar2 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_00a79670(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1cb4) = 0x1fffff;
  iVar4 = *(int *)(param_1 + 0x28);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49d94;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar4 + 0x1dac) == 0) {
    iVar2 = func_0x008ab47d(0x30,uVar1);
    uStack_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = func_0x00a77010(iVar4);
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x1dac) = uVar3;
    iVar4 = func_0x00a77ae0(param_2);
    if (iVar4 == 1) {
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00a79690(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1a0) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x194) +
                      (*(int *)(param_1 + 0x19c) + -1 + *(int *)(param_1 + 0x1a0) &
                      *(int *)(param_1 + 0x198) - 1U) * 4);
    if (0xf < (uint)piVar2[5]) {
      piVar2 = (int *)*piVar2;
    }
    func_0x00634c10();
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x28) + 0x3158) + 8);
    _guard_check_icall(0,piVar2,0x469);
    (*pcVar1)();
  }
  return 0;
}



void __thiscall FUN_00a79700(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3da0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar3 = *(code **)(*(int *)(*(int *)(param_1 + 0x28) + 0x3158) + 4);
  _guard_check_icall(0,0x4ce,param_3,param_3,uVar5);
  (*pcVar3)();
  pcVar6 = param_3;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  func_0x0046bc40(param_3,(int)pcVar6 - (int)(param_3 + 1));
  uStack_8 = 0;
  if (*(uint *)(param_1 + 0x198) <= *(int *)(param_1 + 0x1a0) + 1U) {
    func_0x0069d830(1);
  }
  *(uint *)(param_1 + 0x19c) = *(uint *)(param_1 + 0x19c) & *(int *)(param_1 + 0x198) - 1U;
  uVar5 = *(int *)(param_1 + 0x1a0) + *(int *)(param_1 + 0x19c);
  iVar1 = (*(int *)(param_1 + 0x198) - 1U & uVar5) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x194)) == 0) {
    uVar7 = func_0x008ab47d(0x18);
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x194)) = uVar7;
  }
  puVar4 = *(undefined4 **)
            (*(int *)(param_1 + 0x194) + (*(int *)(param_1 + 0x198) - 1U & uVar5) * 4);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a79830(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a7adf0(*(undefined4 *)(param_1 + 0x10),param_3);
  return 0;
}



undefined4 __thiscall FUN_00a79850(int param_1,undefined4 param_2,void *param_3,void *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_8 [8];
  
  puVar2 = (undefined4 *)func_0x009dbe00(auStack_8);
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x10) = *puVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  memset(param_3,0,0x40);
  memset(param_4,0,0x40);
  return 0;
}



undefined4 * __thiscall FUN_00a7bae0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::IndexDataManager::vftable;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[3];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[2];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a7edf0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Framebuffer9::vftable;
  func_0x00b44940();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall
FUN_00a7ee20(int param_1,int *param_2,undefined4 param_3,int param_4,int *param_5,char param_6,
            char param_7,char param_8,undefined4 param_9,int param_10)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *unaff_EBX;
  int *unaff_ESI;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int iStack_6c;
  int *piStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&piStack_78;
  uStack_58 = param_3;
  iStack_6c = param_4;
  piStack_78 = param_5;
  uStack_44 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x159c);
  piStack_48 = param_2;
  iStack_28 = param_10;
  iStack_2c = param_1;
  func_0x009f0200();
  iStack_40 = param_2[0x745];
  if (param_6 == '\0') {
LAB_00a7f242:
    if ((param_7 == '\0') && (param_8 == '\0')) {
LAB_00a7f36d:
      FUN_008ab370();
      return;
    }
    iVar4 = func_0x0098d4a0();
    iStack_64 = 0;
    iVar4 = func_0x00968fa0(param_2,*(undefined4 *)(iVar4 + 4),iVar4 + 8,0,&iStack_64);
    if (iVar4 == 1) goto LAB_00a7f21c;
    iVar4 = func_0x0098d4c0();
    cVar3 = func_0x009694d0();
    if (cVar3 == '\0') {
      pcVar1 = *(code **)(**(int **)(iVar4 + 0x18) + 0xc);
      _guard_check_icall(iVar4 + 8);
      uVar5 = (*pcVar1)();
    }
    else {
      uVar5 = func_0x00969210();
    }
    iVar4 = func_0x00968fa0(uStack_60,*(undefined4 *)(iVar4 + 4),iVar4 + 8,uVar5,&stack0xffffff80);
    if (iVar4 == 1) goto LAB_00a7f21c;
    pcVar1 = *(code **)(*unaff_EBX + 0x24);
    _guard_check_icall();
    piVar7 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(_DAT_00000000 + 0x24);
    _guard_check_icall();
    piVar8 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piStack_5c + 0x88);
    _guard_check_icall(piStack_5c,piVar7,0,piVar8,0,0);
    iVar4 = (*pcVar1)();
    if (piVar7 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar7 + 8);
      _guard_check_icall(piVar7);
      (*pcVar1)();
    }
    if (piVar8 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar8 + 8);
      _guard_check_icall(piVar8);
      (*pcVar1)();
    }
    if (-1 < iVar4) goto LAB_00a7f36d;
    uVar5 = 0x17f;
  }
  else {
    iVar4 = func_0x0098d400(0);
    iStack_64 = 0;
    piVar7 = &iStack_64;
    iVar4 = func_0x00968fa0(param_2,*(undefined4 *)(iVar4 + 4),iVar4 + 8,0);
    if (iVar4 == 1) goto LAB_00a7f21c;
    iVar4 = func_0x0098d420(0);
    piStack_78 = (int *)0x0;
    cVar3 = func_0x009694d0();
    if (cVar3 == '\0') {
      pcVar1 = *(code **)(**(int **)(iVar4 + 0x18) + 0xc);
      _guard_check_icall(iVar4 + 8);
      uVar5 = (*pcVar1)();
    }
    else {
      uVar5 = func_0x00969210();
    }
    iVar4 = func_0x00968fa0(param_2,*(undefined4 *)(iVar4 + 4),iVar4 + 8,uVar5,&piStack_78);
    if (iVar4 == 1) goto LAB_00a7f21c;
    pcVar1 = *(code **)(*piStack_78 + 0x24);
    _guard_check_icall();
    piStack_48 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piStack_74 + 0x24);
    _guard_check_icall();
    piStack_4c = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piStack_78 + 8);
    _guard_check_icall();
    iStack_50 = (*pcVar1)();
    pcVar1 = *(code **)(*piStack_78 + 4);
    _guard_check_icall();
    unaff_EBX = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piStack_74 + 8);
    _guard_check_icall();
    piVar6 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piStack_74 + 4);
    _guard_check_icall();
    iStack_64 = (*pcVar1)();
    piVar2 = piStack_48;
    piVar8 = piStack_4c;
    iStack_2c = *piStack_70;
    iStack_28 = piStack_70[1];
    piStack_24 = (int *)(piStack_70[2] + iStack_2c);
    iStack_6c = piStack_70[3] + iStack_28;
    iStack_3c = *unaff_ESI;
    iStack_38 = unaff_ESI[1];
    iStack_34 = unaff_ESI[2] + iStack_3c;
    piStack_70 = (int *)(unaff_ESI[3] + iStack_38);
    piStack_30 = piStack_70;
    iStack_20 = iStack_6c;
    if (piVar7 != (int *)0x0) {
      if (iStack_3c < *piVar7) {
        iStack_2c = (*piVar7 - iStack_3c) + iStack_2c;
        iStack_3c = *piVar7;
      }
      iVar4 = piVar7[1];
      if (iStack_38 < iVar4) {
        iStack_28 = iStack_28 + (iVar4 - iStack_38);
        iStack_38 = iVar4;
      }
      iVar9 = *piVar7 + piVar7[2];
      if (iVar9 < iStack_34) {
        iStack_54 = (piVar7[2] - iStack_34) + *piVar7;
        piStack_24 = (int *)((int)piStack_24 + iStack_54);
        iStack_34 = iVar9;
      }
      piStack_68 = (int *)(piVar7[3] + iVar4);
      if ((int)piStack_68 < (int)piStack_70) {
        iStack_20 = (int)piStack_68 + (iStack_6c - (int)piStack_70);
        piStack_30 = piStack_68;
      }
    }
    if (iStack_3c < 0) {
      iStack_2c = iStack_2c - iStack_3c;
      iStack_3c = 0;
    }
    if (iStack_64 < iStack_34) {
      piStack_24 = (int *)((int)piStack_24 + (iStack_64 - iStack_34));
      iStack_34 = iStack_64;
    }
    if (iStack_38 < 0) {
      iStack_28 = iStack_28 - iStack_38;
      iStack_38 = 0;
    }
    if ((int)piVar6 < (int)piStack_30) {
      iStack_20 = (int)piVar6 + (iStack_20 - (int)piStack_30);
      piStack_30 = piVar6;
    }
    iVar4 = iStack_20;
    if (iStack_2c < 0) {
      iStack_3c = iStack_3c - iStack_2c;
      iStack_2c = 0;
    }
    if ((int)unaff_EBX < (int)piStack_24) {
      iStack_34 = (int)unaff_EBX + (iStack_34 - (int)piStack_24);
      piStack_24 = unaff_EBX;
    }
    if (iStack_28 < 0) {
      iStack_38 = iStack_38 - iStack_28;
      iStack_28 = 0;
    }
    if (iStack_50 < iStack_20) {
      iStack_20 = iStack_50;
      piStack_30 = (int *)((int)piStack_30 + (iStack_50 - iVar4));
    }
    pcVar1 = *(code **)(*piStack_5c + 0x88);
    _guard_check_icall(piStack_5c,piStack_48,&iStack_2c,piStack_4c,&iStack_3c,0);
    iVar4 = (*pcVar1)();
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
    }
    if (piVar8 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar8 + 8);
      _guard_check_icall(piVar8);
      (*pcVar1)();
    }
    param_2 = piStack_48;
    if (-1 < iVar4) goto LAB_00a7f242;
    uVar5 = 0x15d;
  }
  pcVar1 = *(code **)(*(int *)(iStack_40 + 0x24) + 4);
  _guard_check_icall(iVar4,"Internal blit failed.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Framebuffer9.cpp"
                     ,"rx::Framebuffer9::blitImpl",uVar5);
  (*pcVar1)();
LAB_00a7f21c:
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a7f390(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = func_0x009eb990(param_2,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x7c));
  if (iVar2 == 1) {
    return 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x14d4);
  uVar4 = *(undefined4 *)(param_2 + 0x14d8);
  iVar2 = func_0x008eca10();
  uVar3 = 1;
  func_0x009f3db0(param_2 + 0x14c4,uVar1,uVar4,4,*(undefined4 *)(iVar2 + 4),1);
  func_0x009f3ca0(param_2 + 0x13c0,*(undefined1 *)(param_2 + 0x13bc));
  func_0x009ec7b0(uVar3,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x7c));
  return 0;
}



undefined4 FUN_00a7f450(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Framebuffer9.cpp"
                     ,"rx::Framebuffer9::discard",0x27);
  (*pcVar1)();
  return 1;
}



void FUN_00a7f490(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_4 [4];
  
  iVar2 = func_0x0098d900();
  pcVar1 = *(code **)(**(int **)(iVar2 + 0x18) + 8);
  _guard_check_icall(auStack_4,*(undefined4 *)(iVar2 + 4));
  (*pcVar1)();
  iVar2 = func_0x00a86250(*(undefined4 *)(iVar2 + 0x10));
  iVar2 = func_0x00a85390(*(undefined4 *)(iVar2 + 4));
  func_0x00946ea0(*(undefined4 *)(&DAT_01290450 + *(int *)(iVar2 + 0x28) * 0x54));
  return;
}



undefined4 FUN_00a7f4f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Framebuffer9.cpp"
                     ,"rx::Framebuffer9::getSamplePosition",0x193);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a7f540(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Framebuffer9.cpp"
                     ,"rx::Framebuffer9::invalidate",0x2f);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a7f580(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Framebuffer9.cpp"
                     ,"rx::Framebuffer9::invalidateSub",0x38);
  (*pcVar1)();
  return 1;
}



void FUN_00a7f5c0(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 *puStack_c0;
  undefined1 auStack_9c [12];
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  int *piStack_80;
  int *piStack_7c;
  int iStack_78;
  int *piStack_74;
  int *piStack_70;
  int iStack_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  int iStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_9c;
  uStack_48 = param_2;
  uStack_58 = param_3;
  iStack_54 = param_4;
  piStack_60 = (int *)param_6;
  iStack_44 = param_1;
  iStack_64 = param_8;
  func_0x0098d420();
  piStack_60 = (int *)0x0;
  iVar3 = func_0x00968fa0();
  if (iVar3 == 1) {
    FUN_008ab370();
    return;
  }
  pcVar1 = *(code **)(*piStack_74 + 0x24);
  puStack_c0 = (undefined1 *)0xa7f675;
  _guard_check_icall();
  puStack_c0 = (undefined1 *)0xa7f679;
  piVar4 = (int *)(*pcVar1)();
  puStack_c0 = auStack_4c;
  pcVar1 = *(code **)(*piVar4 + 0x30);
  piStack_68 = piVar4;
  _guard_check_icall(piVar4);
  (*pcVar1)();
  iStack_64 = *(int *)(iStack_64 + 0x1d14);
  if (iStack_44 == 0) {
    piVar4 = *(int **)(*(int *)(iStack_6c + 0x4c) + 0x159c);
    uStack_5c = 0;
    piVar5 = piStack_68;
    piStack_60 = piVar4;
    if (((((((char)piStack_80[6] == '\0') && (*piStack_80 < 5)) &&
          (cVar2 = func_0x009f1880(), piVar5 = piStack_68, cVar2 != '\0')) &&
         ((*piStack_68 == 0 && (piStack_68[1] == 0)))) &&
        ((piStack_68[2] == iStack_3c &&
         (((undefined1 *)piStack_68[3] == puStack_38 && (iStack_54 == 0x15)))))) &&
       ((iStack_78 == 0x80e1 && (piStack_74 == (int *)0x1401)))) {
      uStack_58 = CONCAT13(1,(undefined3)uStack_58);
      pcVar1 = *(code **)(*piVar4 + 0x90);
      _guard_check_icall(piStack_60,iStack_3c,puStack_38,0x15,2,&uStack_5c,&uStack_84);
      iVar3 = (*pcVar1)();
      piVar4 = piStack_60;
      if (iVar3 < 0) goto LAB_00a7f78d;
    }
    else {
LAB_00a7f78d:
      uStack_58 = uStack_58 & 0xffffff;
      pcVar1 = *(code **)(*piVar4 + 0x90);
      _guard_check_icall(piStack_60,iStack_3c,puStack_38,iStack_54,2,&uStack_5c,0);
      iVar3 = (*pcVar1)();
      if (iVar3 < 0) {
        pcVar1 = *(code **)(*piStack_70 + 8);
        _guard_check_icall(piStack_70);
        (*pcVar1)();
        uVar7 = 0x90;
        pcVar6 = "Failed to allocate internal texture for ReadPixels.";
        goto LAB_00a7f965;
      }
    }
    pcVar1 = *(code **)(*piStack_60 + 0x80);
    _guard_check_icall(piStack_60,piStack_70,uStack_5c);
    iStack_6c = (*pcVar1)();
    pcVar1 = *(code **)(*piStack_7c + 8);
    _guard_check_icall(piStack_7c);
    (*pcVar1)();
    if (-1 < iStack_64) {
      if (uStack_5c._3_1_ == '\0') {
        puStack_30 = (undefined1 *)*piVar5;
        if ((int)puStack_30 < 1) {
          puStack_38 = (undefined1 *)0x0;
        }
        else {
          puStack_38 = puStack_30;
          if ((int)puStack_40 < (int)puStack_30) {
            puStack_38 = puStack_40;
          }
        }
        iStack_34 = piVar5[1];
        if (iStack_34 < 1) {
          iStack_34 = 0;
        }
        else if (iStack_3c < iStack_34) {
          iStack_34 = iStack_3c;
        }
        puStack_30 = puStack_30 + piVar5[2];
        if ((int)puStack_30 < 1) {
          puStack_30 = (undefined1 *)0x0;
        }
        else if ((int)puStack_40 < (int)puStack_30) {
          puStack_30 = puStack_40;
        }
        iStack_2c = piVar5[3] + piVar5[1];
        if (iStack_2c < 1) {
          iStack_2c = 0;
        }
        else if (iStack_3c < iStack_2c) {
          iStack_2c = iStack_3c;
        }
        pcVar1 = *(code **)(*piStack_60 + 0x34);
        _guard_check_icall(piStack_60,&piStack_90,&puStack_38,0x10);
        iVar3 = (*pcVar1)();
        if (iVar3 < 0) {
          if (piStack_60 != (int *)0x0) {
            pcVar1 = *(code **)(*piStack_60 + 8);
            _guard_check_icall(piStack_60);
            (*pcVar1)();
            piStack_60 = (int *)0x0;
          }
          uVar7 = 0xbd;
          pcVar6 = "Failed to lock internal render target.";
          goto LAB_00a7f965;
        }
        piStack_70 = piStack_90;
        iVar3 = func_0x00a85390(uStack_58);
        func_0x00940070(piStack_7c,iStack_78);
        func_0x0095c580();
        puStack_c0 = puStack_40;
        func_0x0095cc40(uStack_84,piStack_80);
        func_0x0095feb0(&puStack_c0,&DAT_01290448 + *(int *)(iVar3 + 0x28) * 0x54,iStack_78,
                        uStack_8c,piStack_90);
        pcVar1 = *(code **)(*piStack_68 + 0x38);
        _guard_check_icall(piStack_68);
        (*pcVar1)();
      }
      if (piStack_60 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_60 + 8);
        _guard_check_icall(piStack_60);
        (*pcVar1)();
      }
      goto LAB_00a7fa67;
    }
    if (piStack_60 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_60 + 8);
      _guard_check_icall(piStack_60);
      (*pcVar1)();
      piStack_60 = (int *)0x0;
    }
    switch(iStack_64) {
    case -0x7789f7d9:
    case -0x7789f798:
    case -0x7789f790:
    case -0x7789f78c:
      func_0x009dc0e0();
    }
    uVar7 = 0xa6;
    pcVar6 = "Failed to read internal render target data.";
  }
  else {
    pcVar1 = *(code **)(*piVar4 + 8);
    _guard_check_icall(piVar4);
    (*pcVar1)();
    uVar7 = 0x6d;
    pcVar6 = "ReadPixels is unimplemented for multisampled framebuffer attachments.";
  }
LAB_00a7f965:
  pcVar1 = *(code **)(piStack_68[9] + 4);
  _guard_check_icall(0x8007000e,pcVar6,
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Framebuffer9.cpp"
                     ,"rx::Framebuffer9::readPixelsImpl",uVar7);
  (*pcVar1)();
LAB_00a7fa67:
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_00a7fae0(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar3 = FUN_00b45730(param_2,param_3,param_4,param_5);
  if (iVar3 == 1) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  uVar7 = *param_4;
  do {
    if (uVar7 == 0) {
      return 0;
    }
    uVar1 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    iStack_4 = 0;
    switch(uVar1) {
    case 8:
    case 9:
      iStack_4 = func_0x0098d4c0();
      uStack_8 = 0;
      if (iStack_4 != 0) {
        uVar6 = func_0x00969210();
        iVar5 = func_0x00968fa0(param_2,*(undefined4 *)(iStack_4 + 4),iStack_4 + 8,uVar6,&uStack_8);
        if (iVar5 == 1) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x7c) = uStack_8;
      uVar7 = uVar7 & ~(1 << (uVar1 & 0x1f));
      break;
    default:
      if (uVar1 < 8) {
        if ((*(int *)(iVar3 + 0x20c) != 0) && (uVar4 = func_0x0098da20(), uVar4 == uVar1)) {
          iVar5 = func_0x0098d900();
          uStack_8 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x00969210();
            iVar5 = func_0x00968fa0(param_2,*(undefined4 *)(iVar5 + 4),iVar5 + 8,uVar6,&uStack_8);
            if (iVar5 == 1) {
              return 1;
            }
          }
          *(undefined4 *)(param_1 + 0x50) = uStack_8;
        }
        iVar5 = func_0x0098d420(uVar1);
        uStack_8 = 0;
        if (iVar5 == 0) {
LAB_00a7fc80:
          bVar2 = false;
          *(undefined4 *)(param_1 + 0x54 + uVar1 * 4) = uStack_8;
        }
        else {
          uVar6 = func_0x00969210();
          iVar5 = func_0x00968fa0(param_2,*(undefined4 *)(iVar5 + 4),iVar5 + 8,uVar6,&uStack_8);
          if (iVar5 != 1) goto LAB_00a7fc80;
          bVar2 = true;
        }
        if (bVar2) {
          return 1;
        }
      }
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      uVar7 = uVar7 & ~(1 << (uVar1 & 0x1f));
      break;
    case 0x15:
      iStack_4 = func_0x0098d900();
      uStack_8 = 0;
      if (iStack_4 != 0) {
        uVar6 = func_0x00969210();
        iVar5 = func_0x00968fa0(param_2,*(undefined4 *)(iStack_4 + 4),iStack_4 + 8,uVar6,&uStack_8);
        if (iVar5 == 1) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x50) = uStack_8;
      uVar7 = uVar7 & ~(1 << (uVar1 & 0x1f));
    }
  } while( true );
}



undefined4 * __thiscall FUN_00a7fd20(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::Image9::vftable;
  piVar1 = (int *)param_1[9];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[9] = 0;
  }
  *param_1 = rx::ImageD3D::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00a80420(int param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar2;
  undefined4 uStack_4;
  
  iVar1 = func_0x0098d9d0();
  uStack_4 = 0;
  iVar2 = iVar1 + 8;
  iVar1 = func_0x00968fa0(param_1,*(undefined4 *)(iVar1 + 4),iVar2,0,&uStack_4);
  if (iVar1 == 1) {
    return;
  }
  func_0x00a80480(*(undefined4 *)(param_1 + 0x1d14),unaff_EDI,unaff_ESI,iVar2);
  return;
}



void __thiscall FUN_00a810e0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = 0;
  pcVar1 = *(code **)(*param_4 + 0x24);
  _guard_check_icall(param_2,param_3,0,&uStack_20);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return;
  }
  uStack_18 = *(undefined4 *)(param_1 + 4);
  uStack_14 = *(undefined4 *)(param_1 + 8);
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x00a80480(*(undefined4 *)(param_2 + 0x1d14),&stack0xffffffd4,&uStack_20,unaff_EDI);
  return;
}



undefined4 FUN_00a81180(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uStack_8;
  
  iVar2 = func_0x00a81410(param_1[0x745]);
  if (iVar2 != 1) {
    uVar4 = *(undefined4 *)(param_2 + 4);
    pcVar1 = *(code **)(*param_1 + 0x4c);
    piVar3 = (int *)func_0x00967be0();
    puVar5 = &stack0xfffffff4;
    _guard_check_icall(param_1,piVar3,uVar4,1,puVar5);
    iVar2 = (*pcVar1)();
    if (iVar2 != 1) {
      uVar4 = func_0x00a81230(param_1[0x745],puVar5,uStack_8);
      if (piVar3 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar3 + 8);
        _guard_check_icall(piVar3);
        (*pcVar1)();
      }
      return uVar4;
    }
  }
  return 1;
}



undefined4 __fastcall FUN_00a81870(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x24) == 0) &&
     (iVar1 = func_0x00a86250(*(undefined4 *)(param_1 + 0x10)), *(int *)(iVar1 + 8) == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x16) == '\0') {
    return 0;
  }
  return 1;
}



void __thiscall FUN_00a818a0(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [16];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5283d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *(undefined4 *)(param_2 + 0x1d14);
  piStack_30 = param_3;
  uStack_40 = param_4;
  uStack_3c = uVar1;
  iStack_38 = param_1;
  iStack_28 = func_0x00946ea0(*(undefined4 *)(param_1 + 0x10),uStack_14);
  uStack_2c = 0;
  cVar5 = func_0x0094abf0(0x1401,param_3[3],1,0,&uStack_2c);
  if (cVar5 == '\0') {
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Image9.cpp"
                    ,"rx::Image9::loadCompressedData",0x20f);
  }
  else {
    uStack_34 = 0;
    cVar5 = func_0x0094a8b0(param_3[4],0,uStack_2c,&uStack_34);
    if (cVar5 == '\0') {
      func_0x0098f180(0x502,"Integer overflow.",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Image9.cpp"
                      ,"rx::Image9::loadCompressedData",0x213);
    }
    else {
      iStack_28 = func_0x00a86250(*(undefined4 *)(param_1 + 0x10));
      iStack_24 = *param_3;
      iStack_20 = param_3[1];
      iStack_1c = param_3[3] + iStack_24;
      iStack_18 = param_3[4] + iStack_20;
      iVar6 = func_0x00a81c40(uVar1,&uStack_4c,&iStack_24);
      uVar4 = uStack_2c;
      uVar1 = uStack_34;
      if (iVar6 != 1) {
        pcStack_44 = *(code **)(iStack_28 + 0xc);
        iVar6 = param_3[5];
        iStack_28 = piStack_30[3];
        piStack_30 = (int *)piStack_30[4];
        uVar7 = func_0x00a79160(auStack_5c);
        pcVar3 = pcStack_44;
        uStack_8 = 0;
        _guard_check_icall(uVar7,iStack_28,piStack_30,iVar6,uStack_40,uVar4,uVar1,uStack_48,
                           uStack_4c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        func_0x009ae580();
        piVar2 = *(int **)(iStack_38 + 0x24);
        if (piVar2 != (int *)0x0) {
          pcVar3 = *(code **)(*piVar2 + 0x38);
          _guard_check_icall(piVar2);
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00a81a70(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  code *pcStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5287d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_28 = *(int *)(param_2 + 0x1d14);
  piStack_30 = param_3;
  uStack_38 = param_6;
  iStack_3c = param_1;
  func_0x00946ea0(*(undefined4 *)(param_1 + 0x10),uStack_14);
  uStack_34 = 0;
  cVar5 = func_0x0094abf0(param_5,param_3[3],*param_4,param_4[1],&uStack_34);
  if (cVar5 == '\0') {
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Image9.cpp"
                    ,"rx::Image9::loadData",0x1ed);
  }
  else {
    pcStack_2c = (code *)func_0x00a86250(*(undefined4 *)(param_1 + 0x10));
    iStack_24 = *param_3;
    iStack_20 = param_3[1];
    iStack_1c = param_3[3] + iStack_24;
    iStack_18 = param_3[4] + iStack_20;
    iVar6 = func_0x00a81410(iStack_28);
    if (iVar6 != 1) {
      piVar1 = *(int **)(param_1 + 0x24);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 0x34);
        _guard_check_icall(piVar1,&uStack_44,&iStack_24,0);
        iVar6 = (*pcVar2)();
        if (iVar6 < 0) {
          pcVar2 = *(code **)(*(int *)(iStack_28 + 0x24) + 4);
          _guard_check_icall(iVar6,"Failed to lock image surface",
                             "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Image9.cpp"
                             ,"rx::Image9::lock",0x144);
          (*pcVar2)();
          goto LAB_00a81b0d;
        }
        *(undefined1 *)(param_1 + 0x16) = 1;
      }
      uVar4 = uStack_34;
      iVar6 = param_3[5];
      pcStack_2c = *(code **)(pcStack_2c + 0xc);
      iVar3 = piStack_30[4];
      piStack_30 = (int *)piStack_30[3];
      uVar7 = func_0x00a79160(auStack_54);
      pcVar2 = pcStack_2c;
      uStack_8 = 0;
      _guard_check_icall(uVar7,piStack_30,iVar3,iVar6,uStack_38,uVar4,0,uStack_40,uStack_44,0);
      (*pcVar2)();
      uStack_8 = 0xffffffff;
      func_0x009ae580();
      piVar1 = *(int **)(iStack_3c + 0x24);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 0x38);
        _guard_check_icall(piVar1);
        (*pcVar2)();
      }
    }
  }
LAB_00a81b0d:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_00a81cc0(int param_1,undefined1 param_2,int param_3,int *param_4,char param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  if ((((*(int *)(param_1 + 4) == *param_4) && (*(int *)(param_1 + 8) == param_4[1])) &&
      (*(int *)(param_1 + 0xc) == param_4[2])) &&
     ((*(int *)(param_1 + 0x10) == param_3 && (param_5 == '\0')))) {
    return 0;
  }
  *(int *)(param_1 + 4) = *param_4;
  *(int *)(param_1 + 8) = param_4[1];
  *(int *)(param_1 + 0xc) = param_4[2];
  *(undefined1 *)(param_1 + 0x15) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  puVar3 = (undefined4 *)func_0x00a86250(param_3);
  *(undefined4 *)(param_1 + 0x20) = *puVar3;
  *(bool *)(param_1 + 0x14) = puVar3[1] != 0;
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(bool *)(param_1 + 0x16) = puVar3[2] != 0;
  return 1;
}



void FUN_00a81d60(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  pcVar1 = *(code **)(*param_2 + 0x4c);
  puVar3 = &uStack_4;
  _guard_check_icall(param_1,0,param_3,0,puVar3);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return;
  }
  func_0x00a81dc0(*(undefined4 *)(param_1 + 0x1d14),puVar3);
  return;
}



void FUN_00a81e80(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  pcVar1 = *(code **)(*param_2 + 0x4c);
  uVar2 = func_0x0093cee0(param_3);
  puVar4 = &uStack_4;
  _guard_check_icall(param_1,uVar2,param_4,0,puVar4);
  iVar3 = (*pcVar1)();
  if (iVar3 == 1) {
    return;
  }
  func_0x00a81dc0(*(undefined4 *)(param_1 + 0x1d14),puVar4);
  return;
}



undefined4 * __thiscall FUN_00a81f30(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::IndexBuffer9::vftable;
  piVar1 = (int *)param_1[3];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[3] = 0;
  }
  func_0x00a5f180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00a81fc0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_4;
  
  iVar1 = *(int *)(param_2 + 0x1d14);
  pcVar2 = *(code **)(**(int **)(param_1 + 0xc) + 0x2c);
  iStack_4 = param_1;
  _guard_check_icall(*(int **)(param_1 + 0xc),0,1,&iStack_4,0x2000);
  iVar3 = (*pcVar2)();
  if (iVar3 < 0) {
    uVar5 = 0x84;
    pcVar4 = "Failed to lock internal index buffer";
  }
  else {
    pcVar2 = *(code **)(**(int **)(param_1 + 0xc) + 0x30);
    _guard_check_icall(*(int **)(param_1 + 0xc));
    iVar3 = (*pcVar2)();
    if (-1 < iVar3) {
      return 0;
    }
    uVar5 = 0x87;
    pcVar4 = "Failed to unlock internal index buffer";
  }
  pcVar2 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
  _guard_check_icall(iVar3,pcVar4,
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\IndexBuffer9.cpp"
                     ,"rx::IndexBuffer9::discard",uVar5);
  (*pcVar2)();
  return 1;
}



undefined4 __thiscall FUN_00a82060(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  func_0x00a5f490();
  if (param_3 != 0) {
    uVar3 = 0;
    if ((param_4 == 1) || (param_4 == 0)) {
      uVar3 = 0x65;
    }
    else if (param_4 == 2) {
      uVar3 = 0x66;
    }
    iVar4 = func_0x009eea40(param_3,(uint)param_5 * 0x200 + 8,uVar3,(undefined4 *)(param_1 + 0xc));
    if (iVar4 < 0) {
      pcVar2 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
      _guard_check_icall(iVar4,"Failed to allocate internal index buffer",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\IndexBuffer9.cpp"
                         ,"rx::IndexBuffer9::initialize",0x40);
      (*pcVar2)();
      return 1;
    }
  }
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_4;
  *(byte *)(param_1 + 0x18) = param_5;
  return 0;
}



undefined4 __thiscall
FUN_00a82120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_4;
  
  uVar3 = 0;
  puStack_4 = (undefined4 *)0x0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar3 = 0x1000;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x2c);
  ppuVar4 = &puStack_4;
  _guard_check_icall(*(int **)(param_1 + 0xc),param_3,param_4,ppuVar4,uVar3);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    pcVar1 = *(code **)(ppuVar4[0x745][9] + 4);
    _guard_check_icall(iVar2,"Failed to lock internal index buffer",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\IndexBuffer9.cpp"
                       ,"rx::IndexBuffer9::mapBuffer",0x55);
    (*pcVar1)();
    return 1;
  }
  *puStack_4 = param_3;
  return 0;
}



undefined4 __thiscall FUN_00a821b0(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((param_3 <= (uint)param_1[4]) && (param_4 == param_1[5])) {
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 4);
  _guard_check_icall(param_2,param_3,param_4,(char)param_1[6]);
  uVar2 = (*pcVar1)();
  return uVar2;
}



undefined4 __fastcall FUN_00a821f0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x30);
  _guard_check_icall(*(int **)(param_1 + 0xc));
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    pcVar1 = *(code **)(*(int *)(*(int *)(unaff_retaddr + 0x1d14) + 0x24) + 4);
    _guard_check_icall(iVar2,"Failed to unlock internal index buffer",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\IndexBuffer9.cpp"
                       ,"rx::IndexBuffer9::unmapBuffer",0x5f);
    (*pcVar1)();
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00a82270(undefined4 param_1,byte param_2)

{
  func_0x00b51e20();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a82390(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::RenderTarget9::vftable;
  func_0x00b51200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a823c0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::RenderTarget9::vftable;
  func_0x00b51200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a823f0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureRenderTarget9::vftable;
  piVar1 = (int *)param_1[8];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[8] = 0;
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[10] = 0;
  }
  *param_1 = rx::RenderTarget9::vftable;
  func_0x00b51200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __fastcall FUN_00a824a0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  puVar3 = (undefined4 *)func_0x00a86250(uVar2);
  return *puVar3;
}



undefined4 __fastcall FUN_00a824d0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c);
}



undefined4 __fastcall FUN_00a824e0(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  }
  return *(undefined4 *)(*(int *)(param_1 + 8) + 4);
}



void __fastcall FUN_00a82500(int param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x28);
    _guard_check_icall();
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x24);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00a82540(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(piVar1);
    (*pcVar2)();
    return *(undefined4 *)(param_1 + 0x28);
  }
  return 0;
}



undefined4 __fastcall FUN_00a82570(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    return 0;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x2c);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  return uVar2;
}



undefined4 __fastcall FUN_00a825a0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x18);
}



undefined4 * __thiscall FUN_00a82610(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::ShaderExecutable9::vftable;
  piVar1 = (int *)param_1[0xb];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[0xb] = 0;
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[10] = 0;
  }
  func_0x00a61080();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a82780(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::SwapChain9::vftable;
  func_0x00a82b40(uVar1);
  func_0x00a82380();
  func_0x00a82380();
  func_0x00b512c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __fastcall FUN_00a82800(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(piVar1);
    (*pcVar2)();
    return *(undefined4 *)(param_1 + 0x34);
  }
  return 0;
}



undefined4 __fastcall FUN_00a82830(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(piVar1);
    (*pcVar2)();
    return *(undefined4 *)(param_1 + 0x38);
  }
  return 0;
}



undefined4 __fastcall FUN_00a82860(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(piVar1);
    (*pcVar2)();
    return *(undefined4 *)(param_1 + 0x30);
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

void FUN_00a82890(void)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_d0;
  undefined **appuStack_cc [14];
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined ***pppuStack_34;
  undefined4 uStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5296f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_34 = appuStack_cc;
  uStack_30 = 0;
  appuStack_cc[0] = (undefined **)&DAT_01141e20;
  func_0x0046a560(uStack_14);
  uStack_8 = 2;
  uStack_30 = 2;
  *(undefined ***)((int)appuStack_cc + (int)appuStack_cc[0][1]) = std::basic_ostream<>::vftable;
  *(undefined **)((int)&iStack_d0 + (int)appuStack_cc[0][1]) = appuStack_cc[0][1] + -8;
  func_0x0046b070(appuStack_cc + 1,0);
  uStack_8 = 4;
  *(undefined ***)((int)appuStack_cc + (int)appuStack_cc[0][1]) =
       std::basic_ostringstream<>::vftable;
  *(undefined **)((int)&iStack_d0 + (int)appuStack_cc[0][1]) = appuStack_cc[0][1] + -0x50;
  appuStack_cc[1] = std::basic_streambuf<>::vftable;
  appuStack_cc[2] = (undefined **)0x0;
  appuStack_cc[3] = (undefined **)0x0;
  appuStack_cc[4] = (undefined **)0x0;
  appuStack_cc[5] = (undefined **)0x0;
  appuStack_cc[6] = (undefined **)0x0;
  appuStack_cc[7] = (undefined **)0x0;
  appuStack_cc[8] = (undefined **)0x0;
  appuStack_cc[9] = (undefined **)0x0;
  appuStack_cc[10] = (undefined **)0x0;
  appuStack_cc[0xb] = (undefined **)0x0;
  appuStack_cc[0xc] = (undefined **)0x0;
  appuStack_cc[0xd] = (undefined **)0x0;
  iStack_94 = func_0x008ab47d(8);
  if (iStack_94 == 0) {
    iStack_94 = 0;
  }
  else {
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    uVar2 = func_0x00e70415(1);
    *(undefined4 *)(iStack_94 + 4) = uVar2;
  }
  func_0x0046adc0();
  appuStack_cc[1] = std::basic_stringbuf<>::vftable;
  uStack_90 = 0;
  uStack_8c = 4;
  uStack_8 = 6;
  func_0x0046a470(aiStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  func_0x0091ffd0(0x300d,0x300d,aiStack_2c);
  if (0xf < uStack_18) {
    uVar3 = uStack_18 + 1;
    iVar4 = aiStack_2c[0];
    if (0xfff < uVar3) {
      iVar4 = *(int *)(aiStack_2c[0] + -4);
      uVar3 = uStack_18 + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00a82a80(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_38 [56];
  
  piVar4 = *(int **)(param_1 + 0x28);
  if ((piVar4 != (int *)0x0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x159c), piVar1 != (int *)0x0)) {
    pcVar2 = *(code **)(*piVar4 + 0x24);
    _guard_check_icall(piVar4,auStack_38);
    (*pcVar2)();
    pcVar2 = *(code **)(*piVar1 + 0x34);
    _guard_check_icall(piVar1,&stack0xffffffc0,&stack0xffffffbc);
    iVar3 = (*pcVar2)();
    if (-1 < iVar3) {
      piVar1 = *(int **)(param_1 + 0x28);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 8);
        _guard_check_icall(piVar1);
        (*pcVar2)();
      }
      piVar1 = (int *)(param_1 + 0x2c);
      *(int **)(param_1 + 0x28) = piVar4;
      piVar4 = (int *)*piVar1;
      if (piVar4 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar4 + 8);
        _guard_check_icall(piVar4);
        (*pcVar2)();
        *piVar1 = 0;
      }
      pcVar2 = *(code **)(**(int **)(param_1 + 0x28) + 0x14);
      _guard_check_icall(*(int **)(param_1 + 0x28),0,0,piVar1);
      (*pcVar2)();
    }
  }
  return;
}



void __thiscall
FUN_00a82bf0(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  HWND pHVar8;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  HWND pHStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  uint uStack_30;
  HWND pHStack_2c;
  HWND pHStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f529f9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = 0;
  piStack_34 = *(int **)(*(int *)(param_1 + 0x14) + 0x159c);
  if (piStack_34 == (int *)0x0) goto LAB_00a832f7;
  pcVar1 = *(code **)(*piStack_34 + 0x14);
  _guard_check_icall(piStack_34,uStack_14);
  (*pcVar1)();
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x34);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  pHStack_2c = (HWND)func_0x00a86250(*(undefined4 *)(param_1 + 4));
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar3 == (undefined4 *)0x0) {
    pHStack_28 = (HWND)0x0;
    if ((*(int *)(*(int *)(param_1 + 0x24) + 4) == 0) && (cVar4 = func_0x009f1880(), cVar4 != '\0'))
    {
      pHStack_28 = (HWND)(param_1 + 0xc);
    }
    pcVar1 = *(code **)(*piStack_34 + 0x5c);
    _guard_check_icall(piStack_34,param_3,param_4,1,1,pHStack_2c->unused,0,param_1 + 0x38,pHStack_28
                      );
    pHStack_28 = (HWND)(*pcVar1)();
    if (-1 < (int)pHStack_28) goto LAB_00a82cf9;
    cVar4 = func_0x00952a70(3);
    if (cVar4 != '\0') {
      iVar5 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\SwapChain9.cpp"
                              ,"rx::SwapChain9::reset",0x8b,3);
      uStack_8 = 0;
      uStack_30 = 1;
      uVar6 = func_0x0046b6e0(iVar5 + 0x10,"Could not create offscreen texture, ");
      uVar7 = func_0x009529d0(&uStack_1c,pHStack_28);
      func_0x009b9220(uVar6,uVar7);
    }
    uStack_8 = 0xffffffff;
    if ((uStack_30 & 1) != 0) {
      func_0x00952760();
    }
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x2c);
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x34);
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x30);
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x38);
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    pHVar8 = pHStack_28;
    if (*(int *)(*(int *)(param_1 + 0x24) + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
LAB_00a8311e:
    func_0x00a79420(pHVar8);
  }
  else {
    pcVar1 = *(code **)*puVar3;
    _guard_check_icall(puVar3,&DAT_00fbdeb0,param_1 + 0x38);
    (*pcVar1)();
LAB_00a82cf9:
    pHStack_28 = *(HWND *)(param_1 + 0x30);
    pcVar1 = *(code **)(**(int **)(param_1 + 0x38) + 0x48);
    _guard_check_icall(*(int **)(param_1 + 0x38),0,(undefined4 *)(param_1 + 0x30));
    (*pcVar1)();
    if (pHStack_28 != (HWND)0x0) {
      uStack_1c = *(uint *)(param_1 + 0x18);
      if ((int)param_3 < (int)*(uint *)(param_1 + 0x18)) {
        uStack_1c = param_3;
      }
      uStack_24 = 0;
      iStack_18 = *(int *)(param_1 + 0x1c);
      if (param_4 < *(int *)(param_1 + 0x1c)) {
        iStack_18 = param_4;
      }
      uStack_20 = 0;
      func_0x009f0200();
      pcVar1 = *(code **)(*piStack_34 + 0x88);
      _guard_check_icall(piStack_34,pHStack_28,&uStack_24,*(undefined4 *)(param_1 + 0x30),&uStack_24
                         ,0);
      (*pcVar1)();
      pcVar1 = *(code **)(pHStack_28->unused + 8);
      _guard_check_icall(pHStack_28);
      (*pcVar1)();
    }
    iStack_18 = func_0x00a86250(*(undefined4 *)(param_1 + 8));
    pHStack_28 = *(HWND *)(*(int *)(param_1 + 0x24) + 4);
    if ((pHStack_28 != (HWND)0x0) && (*(int *)(*(int *)(param_1 + 0x14) + 0x1590) != 4)) {
      uStack_48 = *(undefined4 *)(iStack_18 + 4);
      uStack_40 = 0;
      uStack_64 = 1;
      uStack_4c = 0;
      iStack_68 = pHStack_2c[1].unused;
      uStack_44 = 0;
      uStack_5c = 0;
      uStack_60 = 0;
      switch(param_5) {
      case 0:
        uStack_3c = 0x80000000;
        break;
      case 1:
        uStack_3c = 1;
        break;
      case 2:
        uStack_3c = 2;
        break;
      case 3:
        uStack_3c = 4;
        break;
      case 4:
        uStack_3c = 8;
        break;
      default:
        uStack_3c = 0;
      }
      uStack_70 = param_3;
      uStack_58 = 1;
      uStack_50 = 1;
      iStack_6c = param_4;
      pHStack_54 = pHStack_28;
      iVar5 = func_0x009f18c0();
      if (iVar5 == 0x8086) {
        uStack_70 = uStack_70 + 0x3f & 0xffffffc0;
      }
      pcVar1 = *(code **)(*piStack_34 + 0x34);
      _guard_check_icall(piStack_34,&uStack_70,param_1 + 0x28);
      pHStack_2c = (HWND)(*pcVar1)();
      if ((int)pHStack_2c < 0) {
        cVar4 = func_0x00952a70(3);
        if (cVar4 != '\0') {
          iVar5 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\SwapChain9.cpp"
                                  ,"rx::SwapChain9::reset",0xe1,3);
          uStack_8 = 3;
          uStack_30 = 2;
          uVar6 = func_0x0046b6e0(iVar5 + 0x10,
                                  "Could not create additional swap chains or offscreen surfaces, ")
          ;
          uVar7 = func_0x009529d0(&uStack_1c,pHStack_2c);
          func_0x009b9220(uVar6,uVar7);
        }
        uStack_8 = 0xffffffff;
        if ((uStack_30 & 2) != 0) {
          func_0x00952760();
        }
        piVar2 = *(int **)(param_1 + 0x28);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x2c);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x34);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x30);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x38);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
        pHVar8 = pHStack_2c;
        if (*(int *)(*(int *)(param_1 + 0x24) + 4) != 0) {
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        goto LAB_00a8311e;
      }
      pcVar1 = *(code **)(**(int **)(param_1 + 0x28) + 0x14);
      _guard_check_icall(*(int **)(param_1 + 0x28),0,0,param_1 + 0x2c);
      (*pcVar1)();
      InvalidateRect(pHStack_28,(RECT *)0x0,0);
    }
    if (*(int *)(param_1 + 8) != 0) {
      pcVar1 = *(code **)(*piStack_34 + 0x74);
      _guard_check_icall(piStack_34,param_3,param_4,*(undefined4 *)(iStack_18 + 4),0,0,0,
                         param_1 + 0x34,0);
      pHStack_2c = (HWND)(*pcVar1)();
      if ((int)pHStack_2c < 0) {
        cVar4 = func_0x00952a70(3);
        if (cVar4 != '\0') {
          iVar5 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\SwapChain9.cpp"
                                  ,"rx::SwapChain9::reset",0xff,3);
          uStack_8 = 4;
          uStack_30 = 4;
          uVar6 = func_0x0046b6e0(iVar5 + 0x10,
                                  "Could not create depthstencil surface for new swap chain, ");
          uVar7 = func_0x009529d0(auStack_38,pHStack_2c);
          func_0x009b9220(uVar6,uVar7);
        }
        uStack_8 = 0xffffffff;
        if ((uStack_30 & 4) != 0) {
          func_0x00952760();
        }
        piVar2 = *(int **)(param_1 + 0x28);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x2c);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x34);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x30);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x38);
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x24) + 4) != 0) {
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        func_0x00a79420(pHStack_2c);
        goto LAB_00a832f7;
      }
    }
    *(uint *)(param_1 + 0x18) = param_3;
    *(int *)(param_1 + 0x1c) = param_4;
    *(undefined4 *)(param_1 + 0x20) = param_5;
  }
LAB_00a832f7:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a83330(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 8);
  _guard_check_icall(param_2,param_3,param_4,param_1[8]);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00a83360(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piStack_1d4;
  int *piStack_1d0;
  undefined4 *puStack_1cc;
  int *piStack_1c8;
  undefined4 uStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  int *piStack_160;
  float fStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  int *piStack_150;
  float fStack_14c;
  float fStack_148;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  int iStack_11c;
  int iStack_118;
  int *piStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_98;
  int *piStack_94;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_98;
  iStack_98 = param_1;
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x159c);
    uStack_ac = 0;
    uStack_b0 = 7;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_b8 = 0xa833c3;
    piStack_b4 = piVar1;
    piStack_94 = piVar1;
    _guard_check_icall();
    uStack_b8 = 0xa833c5;
    (*pcVar2)();
    uStack_b8 = 3;
    uStack_bc = 8;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_c4 = 0xa833da;
    piStack_c0 = piVar1;
    _guard_check_icall();
    uStack_c4 = 0xa833dc;
    (*pcVar2)();
    uStack_c4 = 0;
    uStack_c8 = 0xf;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_d0 = 0xa833f1;
    piStack_cc = piVar1;
    _guard_check_icall();
    uStack_d0 = 0xa833f3;
    (*pcVar2)();
    uStack_d0 = 0;
    uStack_d4 = 0x1b;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_dc = 0xa83408;
    piStack_d8 = piVar1;
    _guard_check_icall();
    uStack_dc = 0xa8340a;
    (*pcVar2)();
    uStack_dc = 1;
    uStack_e0 = 0x16;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_e8 = 0xa8341f;
    piStack_e4 = piVar1;
    _guard_check_icall();
    uStack_e8 = 0xa83421;
    (*pcVar2)();
    uStack_e8 = 0;
    uStack_ec = 0x34;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_f4 = 0xa83436;
    piStack_f0 = piVar1;
    _guard_check_icall();
    uStack_f4 = 0xa83438;
    (*pcVar2)();
    uStack_f4 = 0;
    uStack_f8 = 0x98;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_100 = 0xa83450;
    piStack_fc = piVar1;
    _guard_check_icall();
    uStack_100 = 0xa83452;
    (*pcVar2)();
    uStack_100 = 0xf;
    uStack_104 = 0xa8;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_10c = 0xa8346a;
    piStack_108 = piVar1;
    _guard_check_icall();
    uStack_10c = 0xa8346c;
    (*pcVar2)();
    uStack_10c = 0;
    uStack_110 = 0xc2;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    iStack_118 = 0xa83484;
    piStack_114 = piVar1;
    _guard_check_icall();
    iStack_118 = 0xa83486;
    (*pcVar2)();
    iStack_118 = 0;
    iStack_11c = 0xae;
    pcVar2 = *(code **)(*piVar1 + 0xe4);
    uStack_124 = 0xa8349e;
    piStack_120 = piVar1;
    _guard_check_icall();
    uStack_124 = 0xa834a0;
    (*pcVar2)();
    uStack_124 = 0;
    pcVar2 = *(code **)(*piVar1 + 0x1ac);
    uStack_12c = 0xa834b3;
    piStack_128 = piVar1;
    _guard_check_icall();
    uStack_12c = 0xa834b5;
    (*pcVar2)();
    uStack_12c = 0;
    pcVar2 = *(code **)(*piVar1 + 0x170);
    fStack_134 = 1.5447298e-38;
    piStack_130 = piVar1;
    _guard_check_icall();
    fStack_134 = 1.54473e-38;
    (*pcVar2)();
    fStack_134 = *(float *)(param_1 + 0x2c);
    uStack_138 = 0;
    pcVar2 = *(code **)(*piVar1 + 0x94);
    piStack_140 = (int *)0xa834e0;
    piStack_13c = piVar1;
    _guard_check_icall();
    piStack_140 = (int *)0xa834e2;
    (*pcVar2)();
    piStack_140 = (int *)0x0;
    pcVar2 = *(code **)(*piVar1 + 0x9c);
    fStack_148 = 1.5447361e-38;
    piStack_144 = piVar1;
    _guard_check_icall();
    fStack_148 = 1.5447364e-38;
    (*pcVar2)();
    fStack_148 = *(float *)(param_1 + 0x38);
    fStack_14c = 0.0;
    pcVar2 = *(code **)(*piVar1 + 0x104);
    uStack_154 = 0xa8350d;
    piStack_150 = piVar1;
    _guard_check_icall();
    uStack_154 = 0xa8350f;
    (*pcVar2)();
    uStack_154 = 2;
    piStack_158 = (int *)0x1;
    fStack_15c = 0.0;
    pcVar2 = *(code **)(*piVar1 + 0x10c);
    fStack_164 = 1.544743e-38;
    piStack_160 = piVar1;
    _guard_check_icall();
    fStack_164 = 1.5447432e-38;
    (*pcVar2)();
    fStack_164 = 2.8026e-45;
    uStack_168 = 2;
    uStack_16c = 0;
    pcVar2 = *(code **)(*piVar1 + 0x10c);
    fStack_174 = 1.5447464e-38;
    piStack_170 = piVar1;
    _guard_check_icall();
    fStack_174 = 1.5447467e-38;
    (*pcVar2)();
    fStack_174 = 1.4013e-45;
    fStack_178 = 1.4013e-45;
    fStack_17c = 1.4013e-45;
    pcVar2 = *(code **)(*piVar1 + 0x10c);
    uStack_184 = 0xa83558;
    piStack_180 = piVar1;
    _guard_check_icall();
    uStack_184 = 0xa8355a;
    (*pcVar2)();
    uStack_184 = 1;
    fStack_188 = 7.00649e-45;
    fStack_18c = 0.0;
    pcVar2 = *(code **)(*piVar1 + 0x114);
    uStack_194 = 0xa83571;
    piStack_190 = piVar1;
    _guard_check_icall();
    uStack_194 = 0xa83573;
    (*pcVar2)();
    uStack_194 = 1;
    uStack_198 = 6;
    pcVar2 = *(code **)(*piVar1 + 0x114);
    uStack_19c = 0;
    uStack_1a4 = 0xa8358a;
    piStack_1a0 = piVar1;
    _guard_check_icall();
    uStack_1a4 = 0xa8358c;
    (*pcVar2)();
    uStack_1a4 = 3;
    uStack_1a8 = 1;
    uStack_1ac = 0;
    pcVar2 = *(code **)(*piVar1 + 0x114);
    uStack_1b4 = 0xa835a3;
    piStack_1b0 = piVar1;
    _guard_check_icall();
    uStack_1b4 = 0xa835a5;
    (*pcVar2)();
    uStack_1b4 = 3;
    fStack_1b8 = 2.8026e-45;
    piStack_1bc = (int *)0x0;
    pcVar2 = *(code **)(*piVar1 + 0x114);
    uStack_1c4 = 0xa835bc;
    piStack_1c0 = piVar1;
    _guard_check_icall();
    uStack_1c4 = 0xa835be;
    (*pcVar2)();
    uStack_1c4 = 0x104;
    pcVar2 = *(code **)(*piVar1 + 0x164);
    puStack_1cc = (undefined4 *)0xa835d4;
    piStack_1c8 = piVar1;
    _guard_check_icall();
    puStack_1cc = (undefined4 *)0xa835d6;
    (*pcVar2)();
    uVar5 = 0;
    do {
      puStack_1cc = (undefined4 *)0x1;
      pcVar2 = *(code **)(*piVar1 + 0x198);
      piStack_1d4 = piVar1;
      piStack_1d0 = (int *)uVar5;
      _guard_check_icall();
      (*pcVar2)();
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    uStack_194 = *(undefined4 *)(param_1 + 0x18);
    puStack_1cc = &uStack_19c;
    piStack_190 = *(int **)(param_1 + 0x1c);
    uStack_19c = 0;
    uStack_198 = 0;
    fStack_18c = 0.0;
    fStack_188 = 1.0;
    pcVar2 = *(code **)(*piVar1 + 0xbc);
    piStack_1d4 = (int *)0xa83638;
    piStack_1d0 = piVar1;
    _guard_check_icall();
    piStack_1d4 = (int *)0xa8363a;
    (*pcVar2)();
    piVar1 = piStack_114;
    iVar3 = iStack_11c;
    iVar4 = *(int *)(param_1 + 0x1c) - iStack_11c;
    iVar6 = iStack_118 + (int)piStack_120;
    uStack_184 = 0;
    piStack_180 = (int *)0x3f800000;
    uStack_16c = 0;
    uStack_168 = 0x3f800000;
    uStack_154 = 0;
    piStack_150 = (int *)0x3f800000;
    piStack_13c = (int *)0x0;
    uStack_138 = 0x3f800000;
    fStack_1b8 = (float)(int)piStack_120 / (float)piStack_1c0[6];
    fStack_18c = (float)(int)piStack_120 - 0.5;
    fStack_164 = (float)iVar6;
    fStack_188 = (float)(iVar4 - (int)piStack_114) - 0.5;
    piStack_158 = (int *)((float)iVar4 - 0.5);
    fStack_174 = fStack_164 - 0.5;
    fStack_164 = fStack_164 / (float)piStack_1c0[6];
    fStack_178 = (float)*(int *)(param_1 + 0x1c);
    fStack_148 = (float)iStack_11c / fStack_178;
    fStack_178 = (float)((int)piStack_114 + iStack_11c) / fStack_178;
    piStack_1d4 = (int *)0xa837a0;
    fStack_17c = fStack_1b8;
    piStack_170 = (int *)fStack_188;
    piStack_160 = (int *)fStack_178;
    fStack_15c = fStack_174;
    fStack_14c = fStack_164;
    piStack_144 = (int *)fStack_18c;
    piStack_140 = piStack_158;
    fStack_134 = fStack_1b8;
    piStack_130 = (int *)fStack_148;
    func_0x009f3df0();
    piStack_1d4 = (int *)0x18;
    iVar4 = 6;
    pcVar2 = *(code **)(*piStack_1bc + 0x14c);
    _guard_check_icall(piStack_1bc,6,2,&fStack_18c);
    (*pcVar2)();
    func_0x009f0200();
    pcVar2 = *(code **)(*piStack_1d0 + 0x104);
    _guard_check_icall(piStack_1d0,0,0);
    (*pcVar2)();
    piStack_1d4 = piStack_140;
    piStack_1c8 = (int *)(*(int *)(iVar4 + 0x1c) - iVar3);
    piStack_1d0 = (int *)((int)piStack_1c8 - (int)piVar1);
    pcVar2 = *(code **)(**(int **)(iVar4 + 0x28) + 0xc);
    puStack_1cc = (undefined4 *)iVar6;
    _guard_check_icall(*(int **)(iVar4 + 0x28),&piStack_1d4,&piStack_1d4,0,0,0);
    iVar3 = (*pcVar2)();
    func_0x009f3050();
    if ((((iVar3 != -0x7789fe84) && (iVar3 != -0x7ff8fff2)) && (iVar3 != -0x7789f7d9)) &&
       (((iVar3 != -0x7789f78d && (iVar3 != -0x7789f78e)) && (iVar3 < 0)))) {
      func_0x009dc0e0();
    }
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00a83e00(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TextureStorage9::vftable;
  func_0x00a672e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x70);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a83e30(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f41cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureStorage9_2D::vftable;
  piVar1 = (int *)param_1[0x1c];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar4);
    (*pcVar2)();
    param_1[0x1c] = 0;
  }
  piVar1 = (int *)param_1[0x1e];
  for (piVar7 = (int *)param_1[0x1d]; piVar7 != piVar1; piVar7 = piVar7 + 1) {
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)*piVar7;
      _guard_check_icall(1,uVar4);
      (*pcVar2)();
    }
  }
  iVar3 = param_1[0x1d];
  if (iVar3 != 0) {
    uVar4 = param_1[0x1f] - iVar3 & 0xfffffffc;
    iVar5 = iVar3;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        puVar6 = (undefined4 *)(*pcVar2)();
        return puVar6;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  *param_1 = rx::TextureStorage9::vftable;
  func_0x00a672e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a83f50(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f41cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureStorage9_Cube::vftable;
  piVar3 = (int *)param_1[0x1c];
  uStack_8 = 0;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 8);
    _guard_check_icall(piVar3,uVar2);
    (*pcVar1)();
    param_1[0x1c] = 0;
  }
  piVar3 = param_1 + 0x1d;
  iStack_14 = 6;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      pcVar1 = (code *)**(undefined4 **)*piVar3;
      _guard_check_icall(1,uVar2);
      (*pcVar1)();
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iStack_14 = iStack_14 + -1;
  } while (iStack_14 != 0);
  *param_1 = rx::TextureStorage9::vftable;
  func_0x00a672e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x8c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a84020(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TextureStorage9::vftable;
  func_0x00a672e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a84050(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52b65;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_1 + 0x1c);
  _guard_check_icall(uVar3);
  iVar4 = (*pcVar1)();
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      piStack_18 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0x4c);
      uStack_8 = 0;
      _guard_check_icall(param_2,0,iVar7,0,&piStack_18);
      iVar5 = (*pcVar1)();
      if (iVar5 == 1) goto LAB_00a841ce;
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*param_3 + 0x4c);
      uStack_8._0_1_ = 3;
      _guard_check_icall(param_2,0,iVar7,1,&piStack_14);
      iVar5 = (*pcVar1)();
      if (iVar5 == 1) {
LAB_00a841ac:
        piVar2 = piStack_14;
        uStack_8 = CONCAT31(uStack_8._1_3_,7);
        if (piStack_14 != (int *)0x0) {
          piStack_14 = (int *)0x0;
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
        }
LAB_00a841ce:
        piVar2 = piStack_18;
        uStack_8 = 8;
        if (piStack_18 != (int *)0x0) {
          piStack_18 = (int *)0x0;
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
        }
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      pcVar1 = *(code **)(*param_1 + 0x14);
      _guard_check_icall();
      uVar6 = (*pcVar1)();
      iVar5 = func_0x009ee0e0(param_2,piStack_14,piStack_18,uVar6);
      piVar2 = piStack_14;
      if (iVar5 == 1) goto LAB_00a841ac;
      uStack_8 = CONCAT31(uStack_8._1_3_,9);
      if (piStack_14 != (int *)0x0) {
        piStack_14 = (int *)0x0;
        pcVar1 = *(code **)(*piVar2 + 8);
        _guard_check_icall(piVar2);
        (*pcVar1)();
      }
      piVar2 = piStack_18;
      uStack_8 = 10;
      if (piStack_18 != (int *)0x0) {
        piStack_18 = (int *)0x0;
        pcVar1 = *(code **)(*piVar2 + 8);
        _guard_check_icall(piVar2);
        (*pcVar1)();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a84210(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52ba5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_1 + 0x1c);
  _guard_check_icall(uVar4);
  iVar5 = (*pcVar1)();
  cVar3 = '\a';
  do {
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        piStack_18 = (int *)0x0;
        pcVar1 = *(code **)(*param_1 + 0x4c);
        uStack_8 = 0;
        _guard_check_icall(param_2,cVar3,iVar8,0,&piStack_18);
        iVar6 = (*pcVar1)();
        if (iVar6 == 1) goto LAB_00a843b6;
        piStack_14 = (int *)0x0;
        pcVar1 = *(code **)(*param_3 + 0x4c);
        uStack_8._0_1_ = 3;
        _guard_check_icall(param_2,cVar3,iVar8,1,&piStack_14);
        iVar6 = (*pcVar1)();
        if (iVar6 == 1) {
LAB_00a84394:
          piVar2 = piStack_14;
          uStack_8 = CONCAT31(uStack_8._1_3_,7);
          if (piStack_14 != (int *)0x0) {
            piStack_14 = (int *)0x0;
            pcVar1 = *(code **)(*piVar2 + 8);
            _guard_check_icall(piVar2);
            (*pcVar1)();
          }
LAB_00a843b6:
          piVar2 = piStack_18;
          uStack_8 = 8;
          if (piStack_18 != (int *)0x0) {
            piStack_18 = (int *)0x0;
            pcVar1 = *(code **)(*piVar2 + 8);
            _guard_check_icall(piVar2);
            (*pcVar1)();
          }
          *unaff_FS_OFFSET = iStack_10;
          return 1;
        }
        pcVar1 = *(code **)(*param_1 + 0x14);
        _guard_check_icall();
        uVar7 = (*pcVar1)();
        iVar6 = func_0x009ee0e0(param_2,piStack_14,piStack_18,uVar7);
        piVar2 = piStack_14;
        if (iVar6 == 1) goto LAB_00a84394;
        uStack_8 = CONCAT31(uStack_8._1_3_,9);
        if (piStack_14 != (int *)0x0) {
          piStack_14 = (int *)0x0;
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
        }
        piVar2 = piStack_18;
        uStack_8 = 10;
        if (piStack_18 != (int *)0x0) {
          piStack_18 = (int *)0x0;
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
    }
    cVar3 = cVar3 + '\x01';
    if (cVar3 == '\r') {
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  } while( true );
}



undefined4 __thiscall FUN_00a84400(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int **ppiVar8;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52bdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = (int *)0x0;
  pcVar1 = *(code **)(*param_3 + 0x50);
  ppiVar8 = &piStack_18;
  iVar7 = param_2;
  _guard_check_icall(param_2,ppiVar8,uVar4);
  iVar5 = (*pcVar1)();
  piVar3 = piStack_18;
  if (iVar5 == 1) {
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  piStack_14 = (int *)0x0;
  pcVar1 = *(code **)(*piStack_18 + 0x48);
  uStack_8 = 0;
  pcVar2 = *(code **)(*param_3 + 8);
  _guard_check_icall(iVar7,ppiVar8,uVar4);
  uVar6 = (*pcVar2)();
  _guard_check_icall(piVar3,uVar6,&piStack_14);
  iVar7 = (*pcVar1)();
  if (iVar7 < 0) {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
    _guard_check_icall(iVar7,"Failed to get the surface from a texture",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                       ,"rx::TextureStorage9_EGLImage::copyToStorage",0x180);
    (*pcVar1)();
  }
  else {
    piStack_1c = (int *)0x0;
    iVar7 = func_0x009f45e0(param_2,&piStack_1c);
    if (iVar7 != 1) {
      iVar7 = *(int *)(param_1 + 0x6c);
      pcVar1 = *(code **)(*piStack_1c + 0x24);
      _guard_check_icall();
      uVar6 = (*pcVar1)();
      iVar7 = func_0x009ee0e0(param_2,piStack_14,uVar6,iVar7 == 1);
      if (iVar7 != 1) {
        pcVar1 = *(code **)(*param_3 + 8);
        _guard_check_icall();
        iVar7 = (*pcVar1)();
        if (iVar7 != 0) {
          pcVar1 = *(code **)(*piVar3 + 0x54);
          _guard_check_icall(piVar3,0);
          (*pcVar1)();
        }
        uVar6 = 0;
        goto LAB_00a844e2;
      }
    }
  }
  uVar6 = 1;
LAB_00a844e2:
  piVar3 = piStack_14;
  uStack_8 = 5;
  if (piStack_14 != (int *)0x0) {
    piStack_14 = (int *)0x0;
    pcVar1 = *(code **)(*piVar3 + 8);
    _guard_check_icall(piVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



undefined4 __thiscall
FUN_00a845b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  *param_5 = *(undefined4 *)(*(int *)(param_1 + 0x74) + *(int *)(param_3 + 4) * 4);
  return 0;
}



undefined4 __thiscall FUN_00a845d0(int param_1)

{
  int iVar1;
  undefined4 *in_stack_00000010;
  
  iVar1 = FUN_004b5b20();
  *in_stack_00000010 = *(undefined4 *)(param_1 + 0x74 + iVar1 * 4);
  return 0;
}



undefined4 FUN_00a845f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                     ,"rx::TextureStorage9_EGLImage::findRenderTarget",0x14c);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a84640(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f52c15;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = (int *)0x0;
  pcVar1 = *(code **)(*param_1 + 0x4c);
  uStack_8 = 0;
  _guard_check_icall(param_2,0,*(undefined4 *)(param_3 + 4),0,&piStack_18,uVar3);
  iVar4 = (*pcVar1)();
  if (iVar4 == 1) {
    uVar5 = 1;
  }
  else {
    piStack_14 = (int *)0x0;
    pcVar1 = *(code **)(*param_1 + 0x4c);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    _guard_check_icall(param_2,0,*(undefined4 *)(param_4 + 4),1,&piStack_14);
    iVar4 = (*pcVar1)();
    if (iVar4 == 1) {
      uVar5 = 1;
    }
    else {
      uVar5 = func_0x009ec740(*(undefined4 *)(param_2 + 0x1d14),piStack_18,piStack_14);
    }
    piVar2 = piStack_14;
    uStack_8 = CONCAT31(uStack_8._1_3_,7);
    if (piStack_14 != (int *)0x0) {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
    }
  }
  piVar2 = piStack_18;
  uStack_8 = 8;
  if (piStack_18 != (int *)0x0) {
    piStack_18 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar5;
}



undefined4 __thiscall FUN_00a84750(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f52c15;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = (int *)0x0;
  pcVar1 = *(code **)(*param_1 + 0x4c);
  uStack_8 = 0;
  uVar6 = *(undefined4 *)(param_3 + 4);
  uVar4 = func_0x00967be0(uVar3);
  _guard_check_icall(param_2,uVar4,uVar6,0,&piStack_18);
  iVar5 = (*pcVar1)();
  if (iVar5 == 1) {
    uVar6 = 1;
  }
  else {
    piStack_14 = (int *)0x0;
    pcVar1 = *(code **)(*param_1 + 0x4c);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    uVar6 = *(undefined4 *)(param_4 + 4);
    uVar4 = func_0x00967be0();
    _guard_check_icall(param_2,uVar4,uVar6,1,&piStack_14);
    iVar5 = (*pcVar1)();
    if (iVar5 == 1) {
      uVar6 = 1;
    }
    else {
      uVar6 = func_0x009ec740(*(undefined4 *)(param_2 + 0x1d14),piStack_18,piStack_14);
    }
    piVar2 = piStack_14;
    uStack_8 = CONCAT31(uStack_8._1_3_,7);
    if (piStack_14 != (int *)0x0) {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
    }
  }
  piVar2 = piStack_18;
  uStack_8 = 8;
  if (piStack_18 != (int *)0x0) {
    piStack_18 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



undefined4 FUN_00a84870(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                     ,"rx::TextureStorage9_EGLImage::generateMipmap",0x16d);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a848c0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x54) != 0)) &&
     (*(int *)(param_1 + 0x58) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x159c);
    pcVar2 = *(code **)(*piVar1 + 0x5c);
    _guard_check_icall(piVar1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c),
                       (undefined4 *)(param_1 + 0x70),0);
    iVar3 = (*pcVar2)();
    if (iVar3 < 0) {
      pcVar2 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
      _guard_check_icall(iVar3,"Failed to create 2D storage texture",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                         ,"rx::TextureStorage9_2D::getBaseTexture",0x104);
      (*pcVar2)();
      return 1;
    }
  }
  *param_3 = *(undefined4 *)(param_1 + 0x70);
  return 0;
}



undefined4 __thiscall FUN_00a84960(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x54) != 0)) &&
     (*(int *)(param_1 + 0x58) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x159c);
    pcVar2 = *(code **)(*piVar1 + 100);
    _guard_check_icall(piVar1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50),
                       *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 0x6c),(undefined4 *)(param_1 + 0x70),0);
    iVar3 = (*pcVar2)();
    if (iVar3 < 0) {
      pcVar2 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
      _guard_check_icall(iVar3,"Failed to create cube storage texture",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                         ,"rx::TextureStorage9_Cube::getBaseTexture",0x21f);
      (*pcVar2)();
      return 1;
    }
  }
  *param_3 = *(undefined4 *)(param_1 + 0x70);
  return 0;
}



undefined4 FUN_00a84a00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_retaddr;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar2 = func_0x009f45e0(param_1,&uStack_4);
  if (iVar2 == 1) {
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x1c);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *unaff_retaddr = uVar3;
  return 0;
}



int __fastcall FUN_00a84a50(int param_1)

{
  return *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c);
}



undefined4 __thiscall
FUN_00a84a60(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52c54;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1[0x1d] + *(int *)(param_3 + 4) * 4) == 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    _guard_check_icall(uVar3);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0x50);
      _guard_check_icall(param_2,&piStack_14);
      iVar4 = (*pcVar1)();
      if (iVar4 != 1) {
        uStack_18 = 0;
        pcVar1 = *(code **)(*param_1 + 0x4c);
        _guard_check_icall(param_2,0,*(undefined4 *)(param_3 + 4),0,&uStack_18);
        iVar4 = (*pcVar1)();
        if (iVar4 != 1) {
          iVar4 = param_1[0x13] + *(int *)(param_3 + 4);
          bVar8 = (byte)iVar4;
          uVar3 = (uint)param_1[0x15] >> (bVar8 & 0x1f);
          if (uVar3 == 0) {
            uVar3 = 1;
          }
          uVar5 = (uint)param_1[0x16] >> (bVar8 & 0x1f);
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          pcVar1 = *(code **)(*piStack_14 + 4);
          _guard_check_icall(piStack_14);
          (*pcVar1)();
          iVar6 = func_0x008ab47d(0x2c);
          uStack_8 = 0;
          if (iVar6 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = func_0x00a822c0(piStack_14,iVar4,uStack_18,param_1[0x17],uVar3,uVar5,1,0);
          }
          *(undefined4 *)(param_1[0x1d] + *(int *)(param_3 + 4) * 4) = uVar7;
          goto LAB_00a84b8c;
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
  }
LAB_00a84b8c:
  *param_5 = *(undefined4 *)(param_1[0x1d] + *(int *)(param_3 + 4) * 4);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a84bd0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52c94;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = FUN_004b5b20(uVar4);
  if (param_1[iVar5 + 0x1d] == 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    _guard_check_icall();
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0x50);
      _guard_check_icall(param_2,&piStack_14);
      iVar6 = (*pcVar1)();
      if (iVar6 != 1) {
        uStack_18 = 0;
        pcVar1 = *(code **)(*param_1 + 0x4c);
        iVar6 = *(int *)(param_3 + 4);
        iVar2 = param_1[0x13];
        uVar7 = func_0x00967be0();
        _guard_check_icall(param_2,uVar7,iVar6 + iVar2,0,&uStack_18);
        iVar6 = (*pcVar1)();
        if (iVar6 != 1) {
          pcVar1 = *(code **)(*piStack_14 + 4);
          _guard_check_icall(piStack_14);
          (*pcVar1)();
          iVar6 = func_0x008ab47d(0x2c);
          uStack_8 = 0;
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = func_0x00a822c0(piStack_14,param_1[0x13] + *(int *)(param_3 + 4),uStack_18,
                                    param_1[0x17],param_1[0x15],param_1[0x16],1,0);
          }
          param_1[iVar5 + 0x1d] = iVar6;
          goto LAB_00a84ce6;
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
  }
LAB_00a84ce6:
  *param_5 = param_1[iVar5 + 0x1d];
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void FUN_00a84d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x009f45e0(param_1,param_4);
  return;
}



undefined4 __thiscall FUN_00a84d40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_ESI;
  int *piVar5;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  pcVar1 = *(code **)(*param_1 + 0x50);
  _guard_check_icall(param_2,&uStack_4);
  iVar3 = (*pcVar1)();
  if (iVar3 == 1) {
    return 1;
  }
  pcVar1 = *(code **)(*unaff_ESI + 0x48);
  iVar3 = param_1[0x13] + param_2;
  piVar5 = unaff_ESI;
  _guard_check_icall(unaff_ESI,iVar3,param_4);
  iVar4 = (*pcVar1)();
  if (iVar4 < 0) {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
    _guard_check_icall(iVar4,"Failed to get the surface from a texture",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                       ,"rx::TextureStorage9_2D::getSurfaceLevel",0xb0);
    (*pcVar1)();
    return 1;
  }
  if (param_1[0x13] + unaff_EBP != 0) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    _guard_check_icall(piVar5,iVar3,param_4);
    cVar2 = (*pcVar1)();
    if ((cVar2 != '\0') && ((char)uStack_4 != '\0')) {
      pcVar1 = *(code **)(*unaff_ESI + 0x54);
      _guard_check_icall(unaff_ESI,0);
      (*pcVar1)();
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00a84eed)

undefined4 __thiscall
FUN_00a84e20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  int in_stack_00001d0c;
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  _guard_check_icall(param_2);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return 1;
  }
  iVar3 = func_0x00a7df40(unaff_retaddr);
  pcVar1 = *(code **)(*unaff_EDI + 0x48);
  iVar2 = iVar3;
  _guard_check_icall(unaff_EDI,iVar3,param_2,param_4);
  iVar4 = (*pcVar1)();
  if (iVar4 < 0) {
    pcVar1 = *(code **)(*(int *)(in_stack_00001d0c + 0x24) + 4);
    _guard_check_icall(iVar4,"Failed to get the surface from a texture",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                       ,"rx::TextureStorage9_Cube::getSurfaceLevel",0x1c5);
    (*pcVar1)();
    return 1;
  }
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    _guard_check_icall(unaff_EDI,iVar2,param_2,param_4);
    (*pcVar1)();
  }
  return 0;
}



undefined4 FUN_00a84f10(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar2 = func_0x009f45e0(param_1,&uStack_4);
  if (iVar2 == 1) {
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x24);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *param_3 = uVar3;
  return 0;
}



bool __fastcall FUN_00a84f60(int param_1)

{
  return *(int *)(param_1 + 0x6c) == 1;
}



bool __fastcall FUN_00a84f70(int param_1)

{
  return (*(byte *)(param_1 + 0x68) & 3) != 0;
}



undefined4 FUN_00a84f80(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\TextureStorage9.cpp"
                     ,"rx::TextureStorage9::setData",0x67);
  (*pcVar1)();
  return 1;
}



undefined4 * __thiscall FUN_00a85000(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::VertexBuffer9::vftable;
  piVar1 = (int *)param_1[4];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[4] = 0;
  }
  func_0x00b514f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00a85090(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_4;
  
  iVar1 = *(int *)(param_2 + 0x1d14);
  pcVar2 = *(code **)(**(int **)(param_1 + 0x10) + 0x2c);
  iStack_4 = param_1;
  _guard_check_icall(*(int **)(param_1 + 0x10),0,1,&iStack_4,0x2000);
  iVar3 = (*pcVar2)();
  if (iVar3 < 0) {
    uVar5 = 0x8d;
    pcVar4 = "Failed to lock internal vertex buffer for discarding";
  }
  else {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x10) + 0x30);
    _guard_check_icall(*(int **)(param_1 + 0x10));
    iVar3 = (*pcVar2)();
    if (-1 < iVar3) {
      return 0;
    }
    uVar5 = 0x90;
    pcVar4 = "Failed to unlock internal vertex buffer for discarding";
  }
  pcVar2 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
  _guard_check_icall(iVar3,pcVar4,
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\VertexBuffer9.cpp"
                     ,"rx::VertexBuffer9::discard",uVar5);
  (*pcVar2)();
  return 1;
}



undefined4 __thiscall FUN_00a85130(int param_1,int param_2,int param_3,byte param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  func_0x00b51de0();
  if (param_3 != 0) {
    iVar3 = func_0x009ef2c0(param_3,(uint)param_4 * 0x200 + 8,(undefined4 *)(param_1 + 0x10));
    if (iVar3 < 0) {
      pcVar2 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
      _guard_check_icall(iVar3,"Failed to allocate internal vertex buffer",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\VertexBuffer9.cpp"
                         ,"rx::VertexBuffer9::initialize",0x34);
      (*pcVar2)();
      return 1;
    }
  }
  *(int *)(param_1 + 0x14) = param_3;
  *(byte *)(param_1 + 0x18) = param_4;
  return 0;
}



undefined4 __thiscall FUN_00a851d0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((uint)param_1[5] < param_3) {
    pcVar1 = *(code **)*param_1;
    _guard_check_icall(param_2,param_3,*(undefined1 *)(param_1 + 6));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 0;
}



undefined4 __thiscall
FUN_00a85210(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  void **_Dst;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  void *_Src;
  undefined4 unaff_EDI;
  int iStack_2c;
  int iStack_28;
  void **ppvStack_24;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppvStack_24 = (void **)param_4;
  iStack_28 = param_3;
  iStack_2c = 0xa85226;
  iVar2 = func_0x00994760();
  uStack_4 = *(undefined4 *)(*(int *)(param_3 + 4) + 0x3c);
  uStack_8 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    uStack_8 = 0x1000;
  }
  pvStack_c = (void *)0x0;
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x14);
  ppvStack_24 = &pvStack_c;
  iStack_28 = 0;
  iStack_2c = param_8;
  _guard_check_icall(param_2,param_3,param_4,param_7);
  iVar3 = (*pcVar1)();
  _Dst = ppvStack_24;
  if (iVar3 != 1) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x10) + 0x2c);
    _guard_check_icall(*(int **)(param_1 + 0x10),param_2,iStack_28,&iStack_2c);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      if ((unaff_EBX == 0) || (_Src = pvStack_c, ppvStack_24[1] == (void *)0x0)) {
        _Src = (void *)((int)pvStack_c + iVar2 * unaff_ESI);
      }
      uVar4 = func_0x009498d0(iStack_28,unaff_EDI);
      uVar4 = func_0x009f0d80(uVar4);
      pbVar5 = (byte *)func_0x00a86370(uVar4);
      if (((*pbVar5 & 1) == 0) && (iVar2 == param_4)) {
        memcpy(_Dst,_Src,iVar2 * unaff_EBP);
      }
      else {
        pcVar1 = *(code **)(pbVar5 + 8);
        _guard_check_icall(_Src,iVar2,unaff_EBP,_Dst);
        (*pcVar1)();
      }
      pcVar1 = *(code **)(**(int **)(param_1 + 0x10) + 0x30);
      _guard_check_icall(*(int **)(param_1 + 0x10));
      (*pcVar1)();
      return 0;
    }
    pcVar1 = *(code **)(*(int *)(*(int *)(iStack_2c + 0x1d14) + 0x24) + 4);
    _guard_check_icall(iVar3,"Failed to lock internal vertex buffer",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\VertexBuffer9.cpp"
                       ,"rx::VertexBuffer9::storeVertexAttributes",0x55);
    (*pcVar1)();
  }
  return 1;
}



void FUN_00a85540(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,
                 int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  void *_Dst;
  
  uVar1 = param_3 + 3U >> 2;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        _Src = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,_Src,(param_2 + 3U >> 2) << 3);
          _Src = (void *)((int)_Src + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      param_5 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00a855d0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,
                 int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  void *_Dst;
  
  uVar1 = param_3 + 3U >> 2;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        _Src = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,_Src,(param_2 + 3U >> 2) << 4);
          _Src = (void *)((int)_Src + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      param_5 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00a85660(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 int param_6,int param_7,undefined4 *param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_4;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        puVar3 = param_5;
        puVar5 = param_8;
        do {
          puVar1 = puVar5;
          puVar2 = puVar3;
          iVar4 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar2 + 1);
              *(undefined2 *)((int)puVar1 + 6) = 0x3c00;
              iVar4 = iVar4 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined4 *)((int)puVar2 + 6);
            } while (iVar4 != 0);
          }
          puVar3 = (undefined4 *)((int)puVar3 + param_6);
          puVar5 = (undefined4 *)((int)puVar5 + param_9);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = (undefined4 *)((int)param_8 + param_10);
      param_5 = (undefined4 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00a85710(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iStack_4;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        iVar3 = param_8;
        iVar4 = param_5;
        do {
          uVar6 = 0;
          if (3 < param_2) {
            iVar5 = (param_2 - 4 >> 2) + 1;
            uVar6 = iVar5 * 4;
            puVar1 = (undefined8 *)(iVar3 + 0x10);
            puVar2 = (undefined8 *)(iVar4 + 0x18);
            do {
              puVar1[-2] = puVar2[-3];
              *(undefined4 *)(puVar1 + -1) = *(undefined4 *)(puVar2 + -2);
              *(undefined4 *)((int)puVar1 + -4) = 0x3f800000;
              *puVar1 = *(undefined8 *)((int)puVar2 + -0xc);
              *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((int)puVar2 + -4);
              *(undefined4 *)((int)puVar1 + 0xc) = 0x3f800000;
              puVar1[2] = *puVar2;
              *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar2 + 1);
              *(undefined4 *)((int)puVar1 + 0x1c) = 0x3f800000;
              puVar1[4] = *(undefined8 *)((int)puVar2 + 0xc);
              *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((int)puVar2 + 0x14);
              *(undefined4 *)((int)puVar1 + 0x2c) = 0x3f800000;
              iVar5 = iVar5 + -1;
              puVar1 = puVar1 + 8;
              puVar2 = puVar2 + 6;
            } while (iVar5 != 0);
          }
          if (uVar6 < param_2) {
            iVar5 = param_2 - uVar6;
            puVar1 = (undefined8 *)(uVar6 * 0x10 + iVar3);
            puVar2 = (undefined8 *)(uVar6 * 0xc + iVar4);
            do {
              *puVar1 = *puVar2;
              *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
              *(undefined4 *)((int)puVar1 + 0xc) = 0x3f800000;
              iVar5 = iVar5 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined8 *)((int)puVar2 + 0xc);
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + param_6;
          iVar3 = iVar3 + param_9;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00a85860(undefined4 param_1,size_t param_2,int param_3,int param_4,void *param_5,
                 size_t param_6,int param_7,void *param_8,size_t param_9,int param_10)

{
  size_t _Size;
  int iVar1;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size = param_2 * param_3;
  if ((_Size - param_7 == 0) && (_Size - param_10 == 0)) {
    memcpy(param_8,param_5,_Size * param_4);
    return;
  }
  if ((param_2 == param_6) && (param_2 == param_9)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,param_2);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



void FUN_00a85960(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,
                 size_t param_6,int param_7,void *param_8,size_t param_9,int param_10)

{
  size_t _Size;
  size_t _Size_00;
  int iVar1;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size = param_2 * 2;
  _Size_00 = _Size * param_3;
  if ((_Size_00 - param_7 == 0) && (_Size_00 - param_10 == 0)) {
    memcpy(param_8,param_5,_Size_00 * param_4);
    return;
  }
  if ((_Size == param_6) && (_Size == param_9)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size_00);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,_Size);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



void FUN_00a85a60(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,
                 int param_7,void *param_8,int param_9,int param_10)

{
  size_t _Size;
  size_t _Size_00;
  int iVar1;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size = param_2 * 4;
  _Size_00 = _Size * param_3;
  if ((_Size_00 - param_7 == 0) && (_Size_00 - param_10 == 0)) {
    memcpy(param_8,param_5,_Size_00 * param_4);
    return;
  }
  if ((_Size - param_6 == 0) && (_Size - param_9 == 0)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size_00);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,_Size);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



void FUN_00a85b60(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,
                 int param_7,void *param_8,int param_9,int param_10)

{
  size_t _Size;
  size_t _Size_00;
  int iVar1;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size = param_2 * 8;
  _Size_00 = _Size * param_3;
  if ((_Size_00 - param_7 == 0) && (_Size_00 - param_10 == 0)) {
    memcpy(param_8,param_5,_Size_00 * param_4);
    return;
  }
  if ((_Size - param_6 == 0) && (_Size - param_9 == 0)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size_00);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,_Size);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



void FUN_00a85c60(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,
                 size_t param_6,int param_7,void *param_8,size_t param_9,int param_10)

{
  size_t _Size;
  int iVar1;
  size_t _Size_00;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size_00 = param_2 * 0x10;
  _Size = _Size_00 * param_3;
  if ((_Size - param_7 == 0) && (_Size - param_10 == 0)) {
    memcpy(param_8,param_5,_Size * param_4);
    return;
  }
  if ((_Size_00 == param_6) && (_Size_00 == param_9)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,_Size_00);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



undefined4 * __fastcall FUN_00a85d60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x11;
  param_1[4] = 0;
  return param_1;
}



void FUN_00a87ac0(char *param_1,int param_2,int param_3,short *param_4)

{
  char cVar1;
  
  if (param_3 != 0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + param_2;
      *param_4 = (short)cVar1;
      param_4[1] = 0;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87b00(char *param_1,int param_2,int param_3,short *param_4)

{
  char *pcVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = (short)*param_1;
      pcVar1 = param_1 + 1;
      param_1 = param_1 + param_2;
      param_4[1] = (short)*pcVar1;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87b40(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  short *psVar2;
  char *pcVar3;
  
  if (param_3 != 0) {
    pcVar3 = (char *)(param_1 + 2);
    psVar2 = (short *)(param_4 + 4);
    do {
      psVar2[-2] = (short)pcVar3[-2];
      psVar2[-1] = (short)pcVar3[-1];
      *psVar2 = (short)*pcVar3;
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + param_2;
      psVar2[1] = (short)*pcVar1;
      param_3 = param_3 + -1;
      psVar2 = psVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87b90(char *param_1,int param_2,uint param_3,float *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcStack_c;
  
  uVar4 = 0;
  if (3 < param_3) {
    pcVar5 = param_1 + param_2 * 3;
    iVar3 = (param_3 - 4 >> 2) + 1;
    uVar4 = iVar3 * 4;
    iVar7 = param_2 * 4;
    pcVar6 = param_1;
    pcStack_c = param_1 + param_2 * 2;
    do {
      *param_4 = ((float)(int)*pcVar6 + (float)(int)*pcVar6 + 1.0) * 0.003921569;
      pcVar1 = pcVar6 + param_2;
      pcVar6 = pcVar6 + iVar7;
      param_4[1] = ((float)(int)*pcVar1 + (float)(int)*pcVar1 + 1.0) * 0.003921569;
      param_4[2] = ((float)(int)*pcStack_c + (float)(int)*pcStack_c + 1.0) * 0.003921569;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + iVar7;
      param_4[3] = ((float)(int)cVar2 + (float)(int)cVar2 + 1.0) * 0.003921569;
      param_4 = param_4 + 4;
      iVar3 = iVar3 + -1;
      pcStack_c = pcStack_c + iVar7;
    } while (iVar3 != 0);
  }
  if (uVar4 < param_3) {
    param_1 = param_1 + uVar4 * param_2;
    iVar7 = param_3 - uVar4;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + param_2;
      *param_4 = ((float)(int)cVar2 + (float)(int)cVar2 + 1.0) * 0.003921569;
      param_4 = param_4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



void FUN_00a87cc0(char *param_1,int param_2,int param_3,float *param_4)

{
  char *pcVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = ((float)(int)*param_1 + (float)(int)*param_1 + 1.0) * 0.003921569;
      pcVar1 = param_1 + 1;
      param_1 = param_1 + param_2;
      param_4[1] = ((float)(int)*pcVar1 + (float)(int)*pcVar1 + 1.0) * 0.003921569;
      param_4 = param_4 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87d30(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar3 = (float *)(param_4 + 8);
    pcVar2 = (char *)(param_1 + 2);
    do {
      pfVar3[-2] = ((float)(int)pcVar2[-2] + (float)(int)pcVar2[-2] + 1.0) * 0.003921569;
      pfVar3[-1] = ((float)(int)pcVar2[-1] + (float)(int)pcVar2[-1] + 1.0) * 0.003921569;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + param_2;
      *pfVar3 = ((float)(int)cVar1 + (float)(int)cVar1 + 1.0) * 0.003921569;
      pfVar3 = pfVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87dc0(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar3 = (float *)(param_4 + 8);
    pcVar2 = (char *)(param_1 + 2);
    do {
      pfVar3[-2] = ((float)(int)pcVar2[-2] + (float)(int)pcVar2[-2] + 1.0) * 0.003921569;
      pfVar3[-1] = ((float)(int)pcVar2[-1] + (float)(int)pcVar2[-1] + 1.0) * 0.003921569;
      *pfVar3 = ((float)(int)*pcVar2 + (float)(int)*pcVar2 + 1.0) * 0.003921569;
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + param_2;
      pfVar3[1] = ((float)(int)*pcVar1 + (float)(int)*pcVar1 + 1.0) * 0.003921569;
      pfVar3 = pfVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87e70(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = param_4 + 2;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + param_2;
      *(undefined1 *)(iVar2 + -2) = uVar1;
      *(undefined2 *)(iVar2 + -1) = 0;
      *(undefined1 *)(iVar2 + 1) = 1;
      param_3 = param_3 + -1;
      iVar2 = iVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87eb0(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined2 *)(param_4 + 2);
    do {
      *(undefined1 *)(puVar2 + -1) = *param_1;
      puVar1 = param_1 + 1;
      param_1 = param_1 + param_2;
      *(undefined1 *)((int)puVar2 + -1) = *puVar1;
      *puVar2 = 0x100;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87ef0(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined1 *)(param_1 + 2);
    puVar2 = (undefined1 *)(param_4 + 2);
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      uVar1 = *puVar3;
      puVar3 = puVar3 + param_2;
      *puVar2 = uVar1;
      puVar2[1] = 1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87f40(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined1 *)(param_1 + 2);
    puVar2 = (undefined1 *)(param_4 + 2);
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + param_2;
      puVar2[1] = *puVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87f90(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = param_4 + 2;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + param_2;
      *(undefined1 *)(iVar2 + -2) = uVar1;
      *(undefined2 *)(iVar2 + -1) = 0;
      *(undefined1 *)(iVar2 + 1) = 0xff;
      param_3 = param_3 + -1;
      iVar2 = iVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a87fd0(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined2 *)(param_4 + 2);
    do {
      *(undefined1 *)(puVar2 + -1) = *param_1;
      puVar1 = param_1 + 1;
      param_1 = param_1 + param_2;
      *(undefined1 *)((int)puVar2 + -1) = *puVar1;
      *puVar2 = 0xff00;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88010(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined1 *)(param_1 + 2);
    puVar2 = (undefined1 *)(param_4 + 2);
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      uVar1 = *puVar3;
      puVar3 = puVar3 + param_2;
      *puVar2 = uVar1;
      puVar2[1] = 0xff;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88060(byte *param_1,int param_2,uint param_3,float *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbStack_8;
  
  uVar3 = 0;
  if (3 < param_3) {
    pbVar6 = param_1 + param_2 * 3;
    iVar5 = (param_3 - 4 >> 2) + 1;
    iVar7 = param_2 * 4;
    uVar3 = iVar5 * 4;
    pbVar4 = param_1;
    pbStack_8 = param_1 + param_2 * 2;
    do {
      *param_4 = (float)*pbVar4 / 255.0;
      pbVar1 = pbVar4 + param_2;
      pbVar4 = pbVar4 + iVar7;
