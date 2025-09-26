

void FUN_004b5630(undefined4 param_1)

{
  func_0x004a55c0(0xb,param_1);
  return;
}



void FUN_004b5650(undefined4 param_1)

{
  func_0x004a55c0(1,param_1);
  return;
}



void __fastcall FUN_004b5670(int param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb6002;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(char **)(param_1 + 0x1c8);
  pcVar3 = pcVar1;
  if (pcVar1 != pcVar1 + (uint)*(byte *)(param_1 + 0x1cc) * 6) {
    while (*pcVar3 != '\x01') {
      pcVar3 = pcVar3 + 6;
      if (pcVar3 == pcVar1 + (uint)*(byte *)(param_1 + 0x1cc) * 6) {
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
    }
    uVar7 = *(byte *)(param_1 + 0x1cc) - 1;
    uVar4 = (uint)((ulonglong)uVar7 * 6);
    if ((int)((ulonglong)uVar7 * 6 >> 0x20) != 0) {
      uVar4 = 0xffffffff;
    }
    iVar5 = uVar4 + 4;
    if (0xfffffffb < uVar4) {
      iVar5 = -1;
    }
    puVar6 = (uint *)func_0x008ab843(iVar5,uVar2);
    uStack_8 = 0;
    *puVar6 = uVar7;
    puVar6 = puVar6 + 1;
    func_0x008ab84c(puVar6,6,uVar7,FUN_004a52a0,FUN_00469e70);
    uStack_8 = 0xffffffff;
    func_0x004a60e0(puVar6);
    func_0x004a60e0((int)puVar6 + ((int)pcVar3 - (int)pcVar1 >> 1) * 2);
    iVar5 = *(int *)(param_1 + 0x1c8);
    if (iVar5 != 0) {
      func_0x008ab4ad(iVar5,6,*(undefined4 *)(iVar5 + -4),FUN_00469e70);
      func_0x008ab383((int *)(iVar5 + -4),*(int *)(iVar5 + -4) * 6 + 4);
    }
    *(char *)(param_1 + 0x1cc) = *(char *)(param_1 + 0x1cc) + -1;
    *(uint **)(param_1 + 0x1c8) = puVar6;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004b57c0(void)

{
  func_0x004a92c0(0x81,&stack0x00000004);
  return;
}



void FUN_004b57e0(void)

{
  func_0x004a92c0(0x82,&stack0x00000004);
  return;
}



undefined4 FUN_004b5800(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004a54d0(param_1,0xd,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_004b5860(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004a54d0(param_1,0xb,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_004b58c0(int param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x1cc);
  uVar5 = 0;
  if (bVar1 != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x1c8) + uVar5 * 6) == -0x7e) {
        uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c8) + uVar5 * 6 + 1);
        goto LAB_004b58fd;
      }
      bVar4 = (char)uVar5 + 1;
      uVar5 = (uint)bVar4;
    } while (bVar4 < bVar1);
  }
  uVar5 = 0;
  if (bVar1 != 0) {
LAB_004b58fd:
    uVar3 = 0;
    do {
      if (*(char *)(*(int *)(param_1 + 0x1c8) + uVar3 * 6) == -0x7f) {
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x1c8) + uVar3 * 6 + 1);
        param_2[1] = uVar5;
        *param_2 = (uint)uVar2;
        return;
      }
      bVar4 = (char)uVar3 + 1;
      uVar3 = (uint)bVar4;
    } while (bVar4 < bVar1);
  }
  param_2[1] = uVar5;
  *param_2 = 0;
  return;
}



undefined4 FUN_004b5950(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb6051;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_24 = 0;
  uStack_2c = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0046bc40(&DAT_0113d23c,1,uVar1);
  iStack_14 = 1;
  func_0x004a54d0(auStack_54,1);
  iStack_14._0_1_ = 2;
  func_0x0083cbe0(&uStack_3c);
  uStack_24 = 1;
  iStack_14._0_1_ = 1;
  if (0xf < uStack_40) {
    func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
  }
  uStack_44 = 0;
  uStack_40 = 0xf;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if (0xf < uStack_28) {
    func_0x0046b1f0(&uStack_3c,uStack_3c,uStack_28);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return param_1;
}



void __thiscall FUN_004b5a60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  return;
}



float10 __fastcall FUN_004b5a80(int param_1)

{
  return (float10)*(float *)(param_1 + 0x19c);
}



bool __fastcall FUN_004b5a90(int param_1)

{
  return *(int *)(param_1 + 400) != 0;
}



bool __thiscall FUN_004b5aa0(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 400) & param_2) == param_2;
}



void __thiscall FUN_004b5ac0(int param_1,int *param_2)

{
  *param_2 = *(int *)(param_1 + 0x1dc) + *(int *)(param_1 + 0x1d4) + 1;
  param_2[1] = *(int *)(param_1 + 0x1d0) + 1 + *(int *)(param_1 + 0x1d8);
  return;
}



void __thiscall FUN_004b5af0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1b4);
  *param_2 = *(undefined8 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



undefined4 __fastcall FUN_004b5b10(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined4 __fastcall FUN_004b5b20(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



undefined1 __fastcall FUN_004b5b30(undefined1 *param_1)

{
  return *param_1;
}



void __thiscall FUN_004b5b40(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b9) = param_2;
  return;
}



void __thiscall FUN_004b5b50(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b8) = param_2;
  return;
}



void FUN_004b5b60(void)

{
  FUN_005d4a70(0);
  return;
}



void __thiscall FUN_004b5b70(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3bb) = param_2;
  return;
}



void __thiscall FUN_004b5b80(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3bc) = param_2;
  return;
}



void __thiscall FUN_004b5b90(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x3a8) = *param_2;
  *(undefined4 *)(param_1 + 0x3ac) = param_2[1];
  *(undefined4 *)(param_1 + 0x3b0) = param_2[2];
  *(undefined4 *)(param_1 + 0x3b4) = param_2[3];
  return;
}



undefined4 __fastcall FUN_004b5bc0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x3a0) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x3a0) + 0xc);
    _guard_check_icall();
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 0;
}



undefined2 __fastcall FUN_004b5bf0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x3a0);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  pcVar2 = *(code **)(*piVar1 + 0x40);
  _guard_check_icall();
  iVar3 = (*pcVar2)();
  if ((5 < (uint)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2)) &&
     (*(int *)(*(int *)(iVar3 + 0x18) + 0x14) != 0)) {
    return (short)piVar1[0xd];
  }
  return 1;
}



ushort __fastcall FUN_004b5c40(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x3a0);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  pcVar1 = *(code **)(*piVar2 + 0x40);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if (((uint)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2) < 0xc) ||
     (*(int *)(*(int *)(iVar3 + 0x18) + 0x2c) == 0)) {
    pcVar1 = *(code **)(*piVar2 + 0x40);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    if (((uint)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2) < 0xb) ||
       (*(int *)(*(int *)(iVar3 + 0x18) + 0x28) == 0)) {
      return (ushort)(DAT_0145d0fc < 0x35c);
    }
  }
  return *(ushort *)(piVar2 + 0xd);
}



undefined2 __fastcall FUN_004b5c60(int param_1)

{
  if (*(int *)(param_1 + 0x3a0) != 0) {
    return *(undefined2 *)(*(int *)(param_1 + 0x3a0) + 0x34);
  }
  return 0;
}



void __thiscall FUN_004b5c80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x3a4) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x3a4) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x3a0);
  param_2[1] = *(undefined4 *)(param_1 + 0x3a4);
  *unaff_FS_OFFSET = iVar2;
  return;
}



undefined1 __fastcall FUN_004b5d00(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3b8);
}



undefined1 __fastcall FUN_004b5d10(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3b9);
}



void __thiscall FUN_004b5d20(undefined4 param_1,undefined4 param_2)

{
  func_0x004683d0(param_2,param_1);
  return;
}



void __thiscall FUN_004b5d40(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  return;
}



undefined4 __thiscall FUN_004b5d70(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b8 [52];
  undefined4 auStack_84 [5];
  uint uStack_70;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb60d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x3a0) == 0) {
    uVar2 = func_0x0058ac20(uVar1);
    uStack_8 = 2;
    uVar1 = 2;
  }
  else {
    uVar2 = FUN_004b4360(auStack_b8);
    uStack_8 = 1;
    uVar1 = 1;
  }
  uStack_18 = uVar1;
  func_0x004b5f40(uVar2);
  uVar3 = uVar1 | 4;
  if ((uVar1 & 2) != 0) {
    uVar3 = uVar1 & 0xfffffffd | 4;
    uStack_8 = 1;
    if (0xf < uStack_20) {
      uStack_18 = uVar3;
      func_0x0046b1f0(auStack_34,auStack_34[0],uStack_20);
    }
    uStack_24 = 0;
    uStack_20 = 0xf;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
  }
  if ((uVar3 & 1) != 0) {
    uStack_18 = uVar3 & 0xfffffffe;
    uStack_8 = 0;
    if (0xf < uStack_70) {
      func_0x0046b1f0(auStack_84,auStack_84[0],uStack_70);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



bool __fastcall FUN_004b5e90(int param_1)

{
  return 0.0 < *(float *)(param_1 + 0x3b0);
}



void __thiscall FUN_004b5eb0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3a8) = param_2;
  return;
}



void __thiscall FUN_004b5ec0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3ac) = param_2;
  return;
}



undefined4 __fastcall FUN_004b5ed0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3ac);
}



void __thiscall FUN_004b5ee0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3b0) = param_2;
  return;
}



float10 __fastcall FUN_004b5f00(int param_1)

{
  return (float10)*(float *)(param_1 + 0x3b0);
}



void __thiscall FUN_004b5f10(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3a9) = param_2;
  return;
}



undefined1 __fastcall FUN_004b5f20(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3a9);
}



void __thiscall FUN_004b5f30(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3aa) = param_2;
  return;
}



void __thiscall FUN_004b6020(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x408) = param_2;
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  return;
}



void __thiscall FUN_004b6040(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((undefined4 *)(param_1 + 0x3ec) != param_2) {
    puVar1 = param_2 + 4;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    func_0x0046a660(param_2,*puVar1);
  }
  return;
}



void __thiscall FUN_004b6070(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x404) = param_2;
  return;
}



int __fastcall FUN_004b6080(int param_1)

{
  return (*(int *)(param_1 + 0x414) - *(int *)(param_1 + 0x410) >> 2) * -0x41041041;
}



void __thiscall FUN_004b60a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *(undefined1 *)(iVar1 + 0x130) = 1;
  func_0x004683d0(param_2);
  *(undefined1 *)(iVar1 + 0x80) = 1;
  return;
}



void __thiscall FUN_004b60d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *(undefined1 *)(iVar1 + 0x130) = 0;
  *(undefined4 *)(iVar1 + 0x68) = *param_2;
  *(undefined4 *)(iVar1 + 0x6c) = param_2[1];
  *(undefined2 *)(iVar1 + 0x70) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)(iVar1 + 0x80) = 1;
  return;
}



void __thiscall FUN_004b6110(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3cc) = param_2;
  return;
}



void __thiscall FUN_004b6120(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3d0) = param_2;
  return;
}



void __thiscall FUN_004b6130(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *(undefined1 *)(iVar1 + 0x81) = param_2;
  *(undefined1 *)(iVar1 + 0x80) = 1;
  return;
}



void __thiscall FUN_004b6150(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined1 *)(iVar1 + 0x80) = 1;
  return;
}



void __fastcall FUN_004b6170(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x80) = 1;
  return;
}



void __thiscall FUN_004b6190(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *(undefined4 *)(iVar1 + 0x1fc) = param_2;
  *(undefined1 *)(iVar1 + 0x80) = 1;
  return;
}



void __thiscall FUN_004b61b0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x83) = param_2;
  return;
}



void __thiscall FUN_004b61d0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x84) = param_2;
  return;
}



void __thiscall FUN_004b61f0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x85) = param_2;
  return;
}



void __thiscall FUN_004b6210(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x86) = param_2;
  return;
}



void __thiscall FUN_004b6230(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x200) = param_2;
  return;
}



void __thiscall FUN_004b6250(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x87) = param_2;
  return;
}



void __thiscall FUN_004b6270(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x88) = param_2;
  return;
}



void __thiscall FUN_004b6290(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *(undefined1 *)(iVar1 + 0x82) = param_2;
  *(undefined1 *)(iVar1 + 0x80) = 1;
  return;
}



void __thiscall FUN_004b62b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x3a4) + 0x204) = param_2;
  return;
}



void __thiscall FUN_004b62d0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3c9) = param_2;
  func_0x005d6cf0();
  return;
}



void __thiscall FUN_004b62f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x3a4) + 0x2c) = param_2;
  return;
}



int FUN_004b6310(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb6145;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar7 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar7 = (undefined4 *)*param_1;
  }
  cVar5 = func_0x0046cf20(puVar7,param_1[4],&DAT_0112e1b4,0,uVar6);
  if (cVar5 == '\0') {
    puVar7 = (undefined4 *)func_0x0062b230(&uStack_1c,param_1);
  }
  else {
    uStack_1c = 0;
    piStack_18 = (int *)0x0;
    puVar7 = &uStack_1c;
  }
  uStack_8 = (uint)(cVar5 == '\0');
  iVar8 = func_0x0046ffa0(puVar7);
  piVar4 = piStack_18;
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_18 + 1;
    iVar2 = *piVar1;
    iVar8 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      iVar8 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar8 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar8;
}



undefined4 __fastcall FUN_004b6400(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x81));
}



undefined4 __fastcall FUN_004b6410(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x83));
}



undefined4 __fastcall FUN_004b6420(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x84));
}



undefined4 __fastcall FUN_004b6430(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x85));
}



undefined4 __fastcall FUN_004b6440(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x86));
}



undefined4 __fastcall FUN_004b6450(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x200));
}



undefined4 __fastcall FUN_004b6460(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x87));
}



undefined4 __fastcall FUN_004b6470(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x82));
}



undefined1 __fastcall FUN_004b6480(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3c8);
}



undefined1 __fastcall FUN_004b6490(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3c9);
}



void __thiscall FUN_004b64a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  *param_2 = *(undefined4 *)(iVar1 + 0x40);
  param_2[1] = *(undefined4 *)(iVar1 + 0x44);
  return;
}



undefined4 * __thiscall FUN_004b64c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar3 = *(int *)(param_1 + 0x3a4);
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(iVar3 + 0x1f8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(iVar3 + 0x1f8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(iVar3 + 500);
  param_2[1] = *(undefined4 *)(iVar3 + 0x1f8);
  *unaff_FS_OFFSET = iVar2;
  return param_2;
}



undefined4 __fastcall FUN_004b6560(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x3a4) + 0x1fc);
}



undefined4 FUN_004b6570(undefined4 param_1)

{
  func_0x005844e0(param_1);
  return param_1;
}



undefined4 __fastcall FUN_004b6590(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3cc);
}



undefined4 __fastcall FUN_004b65a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3d0);
}



undefined4 __fastcall FUN_004b65b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3a0);
}



float10 __fastcall FUN_004b65c0(int param_1)

{
  return (float10)*(float *)(*(int *)(param_1 + 0x3a4) + 0x204);
}



void __thiscall FUN_004b65d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_10 [12];
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  if (iVar1 != 0) {
    if ((undefined4 *)(iVar1 + 0x8c) != param_2) {
      puVar2 = param_2 + 4;
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      func_0x0046a660(param_2,*puVar2);
    }
    if (*(int *)(iVar1 + 0x9c) != 0) {
      puVar2 = (undefined4 *)func_0x005844e0(auStack_10);
      *(undefined4 *)(iVar1 + 0xa4) = *puVar2;
      *(undefined4 *)(iVar1 + 0xa8) = puVar2[1];
      *(undefined2 *)(iVar1 + 0xac) = *(undefined2 *)(puVar2 + 2);
    }
  }
  return;
}



undefined4 * __thiscall FUN_004b6640(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb6207;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x3a4) != 0) {
    uStack_8 = 1;
    func_0x00469da0(*(int *)(param_1 + 0x3a4) + 0x8c);
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  func_0x0046bc40(&DAT_0112e1b4,0,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __fastcall FUN_004b6710(int param_1)

{
  FUN_005d8b60(*(int *)(param_1 + 0x3c0) + 1);
  return;
}



void __fastcall FUN_004b6720(int param_1)

{
  FUN_005d8b60(*(int *)(param_1 + 0x3c0) + -1);
  return;
}



void __thiscall FUN_004b6730(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c4) = param_2;
  return;
}



void __thiscall FUN_004b6740(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c8) = param_2;
  return;
}



void __thiscall FUN_004b6750(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x3b8);
  *param_2 = *(undefined8 *)(param_1 + 0x3b0);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



undefined4 __fastcall FUN_004b6770(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c4);
}



undefined4 __fastcall FUN_004b6780(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c8);
}



undefined4 __fastcall FUN_004b6790(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c0);
}



float10 __fastcall FUN_004b67a0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x3bc);
}



float10 __fastcall FUN_004b67b0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x3a0);
}



undefined4 __fastcall FUN_004b67c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3a8);
}



void FUN_004b67d0(void)

{
  FUN_005da360(0);
  return;
}



void __thiscall
FUN_004b67e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x3ac) = param_2;
  *(undefined4 *)(param_1 + 0x3b0) = param_3;
  *(undefined4 *)(param_1 + 0x3b4) = param_4;
  *(undefined4 *)(param_1 + 0x3b8) = param_5;
  return;
}



bool __fastcall FUN_004b6800(int param_1)

{
  return *(int *)(param_1 + 0x3a0) != 0;
}



void __thiscall FUN_004b6810(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x3a4);
  *param_2 = *(undefined4 *)(param_1 + 0x3a0);
  param_2[1] = uVar1;
  return;
}



void __thiscall FUN_004b6830(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x3ac) = *param_2;
  *(undefined4 *)(param_1 + 0x3b0) = param_2[1];
  *(undefined4 *)(param_1 + 0x3b4) = param_2[2];
  *(undefined4 *)(param_1 + 0x3b8) = param_2[3];
  return;
}



void __thiscall FUN_004b6860(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x3b0);
  uVar2 = *(undefined4 *)(param_1 + 0x3b4);
  uVar3 = *(undefined4 *)(param_1 + 0x3b8);
  *param_2 = *(undefined4 *)(param_1 + 0x3ac);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}



void __fastcall FUN_004c7ec0(int *param_1)

{
  if (*param_1 != 0) {
    func_0x004e7c10(*param_1,param_1[1],param_1);
    func_0x004c7ff0(*param_1,(param_1[2] - *param_1 >> 3) * -0x55555555);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



int __fastcall FUN_004e7c50(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}



undefined4 * __thiscall FUN_004e7f20(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3e0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e7f50(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x430);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e7f80(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3b8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e7fb0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3e0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e7fe0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,1000);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e8010(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e8040(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3d0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e8070(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x440);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e80a0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e80d0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x60);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e8100(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xe8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004e8130(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<class_Town>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __thiscall FUN_004ea570(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb9f25;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = Thing::vftable;
  _DAT_0145f164 = _DAT_0145f164 + 1;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_004ea5f0(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb9f6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(param_1 + 0x3a4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar4);
      (*pcVar2)();
      LOCK();
      iVar3 = piVar1[2] + -1;
      piVar1[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00851fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3b8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_004ea760(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb9fec;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0xc,uVar2);
  *puVar3 = stdext::packed_any::placeholder::vftable;
  *puVar3 = stdext::packed_any::holder<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = uVar1;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_004ea7d0(void)

{
  return &TypeDescriptor_012c976c;
}



undefined4 * __thiscall FUN_004ea840(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb463d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::packed_any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0052b830(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead35b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  uStack_8 = 0;
  *param_1 = stdext::exception::vftable;
  func_0x00469da0(param_2 + 0xc);
  uStack_8 = 2;
  *param_1 = LuaException::vftable;
  func_0x00469da0(param_2 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __thiscall FUN_0052ca10(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb9f25;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = Thing::vftable;
  _DAT_0145f164 = _DAT_0145f164 + 1;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x70);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



TypeDescriptor * FUN_005304d0(void)

{
  return &TypeDescriptor_012e1c30;
}



undefined4 __thiscall FUN_005304e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebd6f7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00530570(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00530590(void)

{
  return &TypeDescriptor_012ccfd0;
}



undefined4 __thiscall
FUN_005305a0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebd6f7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00530630(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00530650(void)

{
  return &TypeDescriptor_012ed414;
}



void __thiscall FUN_00530660(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00530680(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_005306a0(void)

{
  return &TypeDescriptor_012f52ec;
}



void __thiscall FUN_005306b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005306e0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00530700(void)

{
  return &TypeDescriptor_012e0324;
}



undefined4 __thiscall FUN_00530710(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3);
  (*pcVar1)();
  return param_2;
}



void __thiscall FUN_00530740(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00533750(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_1>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00533760(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7650(&uStack_1c);
  uStack_8 = 0;
  func_0x005635a0(&uStack_1c);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00533870(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00533890(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_2>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005338a0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c76b0(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00533a30(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00533a50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_3>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00533a60(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c77f0(&uStack_1c);
  uStack_8 = 0;
  func_0x00471a90();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00533b70(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00533b90(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_4>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00533ba0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7850(&uStack_1c);
  uStack_8 = 0;
  func_0x004719c0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00533cb0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00533cd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_5>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00533ce0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c78b0(&uStack_1c);
  uStack_8 = 0;
  func_0x004719c0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00533df0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00533e10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_6>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00533e20(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7910(&uStack_1c);
  uStack_8 = 0;
  func_0x00471a90();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00533f30(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00533f50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_7>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00533f60(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7970(&uStack_1c);
  uStack_8 = 0;
  func_0x004719c0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00534070(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534090(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_8>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005340a0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c79d0(&uStack_1c);
  uStack_8 = 0;
  func_0x004719c0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005341b0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_005341d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_9>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005341e0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7a30(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00534370(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534390(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_10>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005343a0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7a90(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00534530(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534550(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_11>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00534560(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7af0(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005346f0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534710(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_12>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00534720(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7b50(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005348b0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_005348d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_13>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005348e0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7bb0(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00534a70(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534a90(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_14>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00534aa0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7c10(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00534c30(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534c50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_15>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00534c60(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7c70(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00534df0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534e10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_16>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00534e20(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7cd0(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00534fb0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00534fd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_17>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00534fe0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7d30(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00535170(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_00535190(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`public:_void___thiscall_Client::registerLuaFunctions(void)'::`2'::<lambda_18>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005351a0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x004c7d90(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00535330(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00535350(int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebdcd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(param_1 + 8),uVar3);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_005353f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00535400(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [16];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x005302f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,&uStack_1c);
  (*pcVar2)();
  func_0x005661a0(auStack_2c);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00535560(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



void __thiscall FUN_00535610(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00535660(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Color_(__thiscall_UIGrid::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00535670(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_3 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_00535700(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00535720(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00535730(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_2c = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x00530390();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_2c;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00535890(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00535940(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGrid::*)(class_Color_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00535950(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_3);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005359e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00535a00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00535a10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x005302f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00535b70(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00535c20(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_UIGrid::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00535c30(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall();
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00535cc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00535ce0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00535cf0(undefined4 *param_1)

{
  func_0x0052a350(*param_1);
  return;
}



undefined4 * __fastcall FUN_00535d10(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00535dc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGrid::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00535dd0(int param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00535e60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00535e80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00535e90(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_24 [4];
  undefined8 *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  puStack_20 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x005302f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_24;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  puStack_20 = (undefined8 *)func_0x0077db30();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00535ff0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005360a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TSize<int>_(__thiscall_UIGrid::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005360b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005360d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005360e0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdf1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_24 = 0xffffffff;
  uStack_20 = 0xffffffff;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x00530230();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_24;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00536240(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005362f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGrid::*)(class_TSize<int>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00536300(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00536320(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00536330(undefined4 *param_1)

{
  func_0x00529c40(*param_1);
  return;
}



undefined4 * __fastcall FUN_00536350(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00536400(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(unsigned_int,bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00536410(int param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,*param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005364b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005364d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005364e0(undefined4 *param_1)

{
  func_0x00529790(*param_1);
  return;
}



undefined4 * __fastcall FUN_00536500(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005365b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(unsigned_int,class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005365c0(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00536650(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00536670(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00536680(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdf7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 3) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 3) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x00530160();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_30;
  puVar7 = &uStack_20;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7,puVar8);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7,puVar8);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005367e0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00536890(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(unsigned_int,class_Color_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005368a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005368c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005368d0(undefined4 *param_1)

{
  func_0x00529250(*param_1);
  return;
}



undefined4 * __fastcall FUN_005368f0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005369a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(unsigned_int,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005369b0(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,*param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00536a50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00536a70(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00536a80(undefined4 *param_1)

{
  func_0x00528ed0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00536aa0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00536b50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00536b60(int param_1,int *param_2,undefined1 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00536bf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00536c10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00536c20(undefined4 *param_1)

{
  func_0x00528a40(*param_1);
  return;
}



undefined4 * __fastcall FUN_00536c40(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00536cf0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00536d00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00536d20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00536d30(undefined4 *param_1)

{
  func_0x005286d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00536d50(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00536e00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00536e10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00536e30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00536e40(undefined4 *param_1)

{
  func_0x00528320(*param_1);
  return;
}



undefined4 * __fastcall FUN_00536e60(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00536f10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(unsigned_int,int,bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00536f20(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,undefined1 *param_5)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,*param_4,*param_5);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00536fc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00536fe0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00536ff0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x005300c0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x00471ec0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00537140(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005371f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_UIGraph::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537200(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00537220(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537230(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x005300c0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00537380(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00537430(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIGraph::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537440(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00537460(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00537470(undefined4 *param_1)

{
  func_0x00527bc0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00537490(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00537540(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(float_(__thiscall_UIProgressRect::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537550(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  code *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe01d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcStack_14 = *(code **)(param_1 + 8);
    _guard_check_icall();
    (*pcStack_14)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_2c,0xffffffff);
  func_0x00e87d2e(auStack_68,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005375e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00537600(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00537610(undefined4 *param_1)

{
  func_0x00527850(*param_1);
  return;
}



undefined4 * __fastcall FUN_00537630(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005376e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIProgressRect::*)(float))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005376f0(int param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00537790(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005377b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005377c0(undefined4 *param_1)

{
  func_0x005273f0(*param_1);
  return;
}



undefined4 * __fastcall FUN_005377e0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00537890(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMinimap::*)(class_std::shared_ptr<>_const&,class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005378a0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_3,param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00537930(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00537950(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00537960(undefined4 *param_1)

{
  func_0x00526f70(*param_1);
  return;
}



undefined4 * __fastcall FUN_00537980(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00537a30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMinimap::*)(class_std::shared_ptr<>_const&,enum_Fw::AnchorEdge,class_Position_const&,enum_Fw::AnchorEdge))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00537a40(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 *param_6)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_3,*param_4,param_5,*param_6);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00537ae0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00537b00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537b10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fdf0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x004b2400();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00537c70(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00537d20(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(float_(__thiscall_UIMinimap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537d30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00537d50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537d60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fdf0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00537ec0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00537f70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_UIMinimap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537f80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00537fa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00537fb0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [12];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe06d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fdf0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_28;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00538110(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005381c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_UIMinimap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005381d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005381f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538200(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe0cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_28 = 0xffff;
  uStack_20 = 0xff;
  uStack_24 = 0xffff;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052ff40();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_28;
  puVar7 = &uStack_1c;
  puVar6 = auStack_38;
  _guard_check_icall(puVar6,puVar7,puVar8);
  (*pcVar2)();
  func_0x0077d7d0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00538370(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00538420(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TRect<int>_(__thiscall_UIMinimap::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00538430(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_3 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2,param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_005384d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005384f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538500(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe12d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x00530000();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_24;
  puVar7 = &uStack_1c;
  puVar6 = auStack_30;
  _guard_check_icall(puVar6,puVar7,puVar8);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00538670(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00538720(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_UIMinimap::*)(class_TPoint<int>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538730(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00538750(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538760(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined8 uStack_24;
  undefined1 auStack_1c [4];
  undefined8 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe18d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_30 = 0xffff;
  uStack_28 = 0xff;
  puStack_18 = &uStack_24;
  uStack_2c = 0xffff;
  uStack_24 = 0;
  uStack_8 = 2;
  func_0x0052ff40();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_30;
  puVar7 = &uStack_24;
  puVar6 = auStack_1c;
  _guard_check_icall(puVar6,puVar7,puVar8);
  (*pcVar2)();
  puStack_18 = (undefined8 *)func_0x0077dad0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_24._4_4_;
  if (uStack_24._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_24._4_4_[1] + -1;
    uStack_24._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_24._4_4_;
      _guard_check_icall(puVar6,puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005388d0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00538980(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TPoint<int>_(__thiscall_UIMinimap::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538990(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005389b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005389c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe1ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_28 = 0xffff;
  uStack_20 = 0xff;
  uStack_24 = 0xffff;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052ff40();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_28;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00538b20(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00538bd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMinimap::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538be0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00538c00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538c10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe24d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fe90();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_20;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00538d60(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00538e10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMinimap::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538e20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00538e40(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00538e50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe24d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 2) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fe90();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_20;
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7,puVar8);
  uVar4 = (*pcVar2)();
  func_0x00d66630(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00538fc0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00539070(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_UIMinimap::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539080(int param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00539110(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00539130(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539140(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fdf0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66630(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005392a0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00539350(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_UIMinimap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539360(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00539380(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00539390(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe2b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fbd0();
  func_0x00564c60(appuStack_34,&uStack_1c);
  uStack_8._0_1_ = 3;
  pppuVar6 = appuStack_34;
  if (0xf < uStack_20) {
    pppuVar6 = (undefined4 ***)appuStack_34[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar6,uStack_24);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_20) {
    func_0x0046b1f0(appuStack_34,appuStack_34[0],uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  appuStack_34[0] = (undefined4 **)((uint)appuStack_34[0] & 0xffffff00);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00539510(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_005395c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_005395d0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebe36a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 3;
  func_0x007767b0(auStack_2c,0xffffffff);
  func_0x00e87d2e(auStack_68,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_005396e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00539700(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539710(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fbd0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x004b2400();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00539870(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00539920(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(float_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539930(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00539950(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539960(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fbd0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00539ac0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00539b70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539b80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00539ba0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00539bb0(undefined4 *param_1)

{
  func_0x00525550(*param_1);
  return;
}



undefined4 * __fastcall FUN_00539bd0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00539c80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Tile>_(__thiscall_UIMap::*)(class_TPoint<int>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00539c90(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebe41a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2,param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 3;
  func_0x007767b0(auStack_2c,0xffffffff);
  func_0x00e87d2e(auStack_68,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_00539da0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00539dc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00539dd0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_2c [4];
  undefined8 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe46d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_24 = 0;
  puStack_28 = &uStack_1c;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fd30();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_24;
  puVar7 = &uStack_1c;
  puVar6 = auStack_2c;
  _guard_check_icall(puVar6,puVar7,puVar8);
  (*pcVar2)();
  puStack_28 = (undefined8 *)func_0x0077dad0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00539f40(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00539ff0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TPoint<int>_(__thiscall_UIMap::*)(class_TPoint<int>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053a000(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053a020(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053a030(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe12d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fd30();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_24;
  puVar7 = &uStack_1c;
  puVar6 = auStack_30;
  _guard_check_icall(puVar6,puVar7,puVar8);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0053a1a0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053a250(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_UIMap::*)(class_TPoint<int>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053a260(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053a280(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053a290(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [12];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe06d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fbd0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_28;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0053a3f0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053a4a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053a4b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053a4d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_0053a4e0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053a590(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(enum_Otc::DrawFlags_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053a5a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053a5c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0053a5d0(undefined4 *param_1)

{
  func_0x00524b00(*param_1);
  return;
}



undefined4 * __fastcall FUN_0053a5f0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053a6a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_0053a6b0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebe41a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 3;
  func_0x007767b0(auStack_2c,0xffffffff);
  func_0x00e87d2e(auStack_68,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_0053a7c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053a7e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053a7f0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_24 [4];
  undefined8 *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  puStack_20 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fbd0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_24;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  puStack_20 = (undefined8 *)func_0x0077db30();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0053a950(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053aa00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TSize<int>_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053aa10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053aa30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0053aa40(undefined4 *param_1)

{
  func_0x005244b0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0053aa60(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053ab10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMap::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053ab20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053ab40(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0053ab50(undefined4 *param_1)

{
  func_0x00524140(*param_1);
  return;
}



undefined4 * __fastcall FUN_0053ab70(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053ac20(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMap::*)(float))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053ac30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053ac50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0053ac60(undefined4 *param_1)

{
  func_0x00523d40(*param_1);
  return;
}



undefined4 * __fastcall FUN_0053ac80(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053ad30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMap::*)(enum_Otc::DrawFlags))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053ad40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053ad60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053ad70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdf1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_24 = 0xffffffff;
  uStack_20 = 0xffffffff;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fc70();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_24;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0053aed0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053af80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMap::*)(class_TSize<int>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053af90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053afb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053afc0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052fbd0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0053b110(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053b1c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMap::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053b1d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053b1f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0053b200(undefined4 *param_1)

{
  func_0x00523640(*param_1);
  return;
}



undefined4 * __fastcall FUN_0053b220(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_0053b2d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIMap::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053b2e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0053b300(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0053b310(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
