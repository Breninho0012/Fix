  
  puVar1 = (undefined4 *)(unaff_EBP + -100);
  if (0xf < *(uint *)(unaff_EBP + -0x50)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x50));
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd078(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd080(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4c);
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x38));
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd088(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
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
  return;
}



void Unwind_00ecd090(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
  if (0xf < *(uint *)(unaff_EBP + -0xa4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa4));
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd09b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4c);
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x38));
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd0a3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd0ab(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -100);
  if (0xf < *(uint *)(unaff_EBP + -0x50)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x50));
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd0b3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
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
  return;
}



void Unwind_00ecd0e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x005bf1a0(unaff_EBP + -0x24);
    func_0x004aaee0(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00ecd120(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -200) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -200) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd160(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x50) + 4) + -8 + iVar2 + -0x48) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x50) + 4);
  *(int *)(iVar1 + -0xc + iVar2 + -0x48) = iVar1 + -8;
  return;
}



void Unwind_00ecd16b(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar1 + -0x4c) = std::basic_stringbuf<>::vftable;
  uStack_8 = 0;
  if ((*(byte *)(iVar1 + -0x10) & 1) != 0) {
    if (**(int **)(iVar1 + -0x2c) == 0) {
      iVar3 = **(int **)(iVar1 + -0x20) + **(int **)(iVar1 + -0x30);
    }
    else {
      iVar3 = **(int **)(iVar1 + -0x1c) + **(int **)(iVar1 + -0x2c);
    }
    func_0x0046aa00(**(int **)(iVar1 + -0x40),iVar3 - **(int **)(iVar1 + -0x40),uVar2);
  }
  **(undefined4 **)(iVar1 + -0x40) = 0;
  **(undefined4 **)(iVar1 + -0x30) = 0;
  **(undefined4 **)(iVar1 + -0x20) = 0;
  **(undefined4 **)(iVar1 + -0x3c) = 0;
  **(undefined4 **)(iVar1 + -0x2c) = 0;
  **(undefined4 **)(iVar1 + -0x1c) = 0;
  *(uint *)(iVar1 + -0x10) = *(uint *)(iVar1 + -0x10) & 0xfffffffe;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd176(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd1a0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145d9ec != 0) {
    func_0x0046ac90(iRam0145d9ec,iRam0145d9f4 - iRam0145d9ec >> 2,uVar1);
    iRam0145d9ec = 0;
    uRam0145d9f0 = 0;
    iRam0145d9f4 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145d9e4,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd1d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xe4) = *(uint *)(unaff_EBP + -0xe4) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd1f2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe4) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xe4) = *(uint *)(unaff_EBP + -0xe4) & 0xfffffffb;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd214(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xe4) = *(uint *)(unaff_EBP + -0xe4) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd236(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd23e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x100);
  if (0xf < *(uint *)(unaff_EBP + -0xec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xec));
  }
  *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd249(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x100);
  if (0xf < *(uint *)(unaff_EBP + -0xec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xec));
  }
  *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd254(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecd183;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd25f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe4) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xe4) = *(uint *)(unaff_EBP + -0xe4) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x100);
    if (0xf < *(uint *)(unaff_EBP + -0xec)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xec));
    }
    *(undefined4 *)(unaff_EBP + -0xf0) = 0;
    *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00ecd2b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  uint auStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  uint auStack_30 [6];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f36c33;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *piVar4 = (int)UIWidget::vftable;
  iStack_8 = 0x1b;
  if (*(char *)((int)piVar4 + 0x6f) == '\0') {
    auStack_30[4] = 0;
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    piStack_18 = piVar4;
    func_0x0046bc40("widget \'%s\' was not explicitly destroyed. Source: \'%s\'. Parent ID: \'%s\'."
                    ,0x48,uStack_14);
    iStack_8._0_1_ = 0x1c;
    uVar5 = func_0x005c0170(piVar4 + 4,piVar4 + 10,piVar4 + 0x21);
    iStack_8._0_1_ = 0x1d;
    FUN_005ee340(2,uVar5);
    iStack_8._0_1_ = 0x1c;
    if (0xf < uStack_34) {
      func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    iStack_8 = CONCAT31(iStack_8._1_3_,0x1b);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
  }
  _DAT_0145f154 = _DAT_0145f154 + 1;
  piStack_18 = piVar4;
  func_0x008766e0(&piStack_18);
  iStack_8._0_1_ = 0x1a;
  func_0x00618eb0();
  iStack_8._0_1_ = 0x19;
  if (piVar4[0xe0] != 0) {
    func_0x0085ebb0(piVar4[0xe0]);
    func_0x0085e810(piVar4[0xe0],(piVar4[0xe2] - piVar4[0xe0]) / 0x28);
    piVar4[0xe0] = 0;
    piVar4[0xe1] = 0;
    piVar4[0xe2] = 0;
  }
  iStack_8._0_1_ = 0x18;
  if (piVar4[0xdd] != 0) {
    func_0x0085efb0(piVar4[0xdd]);
    func_0x005a88e0(piVar4[0xdd],piVar4[0xdf] - piVar4[0xdd] >> 5);
    piVar4[0xdd] = 0;
    piVar4[0xde] = 0;
    piVar4[0xdf] = 0;
  }
  iStack_8._0_1_ = 0x17;
  piVar1 = piVar4 + 0xd7;
  if (0xf < (uint)piVar4[0xdc]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xdc]);
  }
  piVar4[0xdb] = 0;
  piVar4[0xdc] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0x16;
  iVar2 = piVar4[0xd3];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd5] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd3] = 0;
    piVar4[0xd4] = 0;
    piVar4[0xd5] = 0;
  }
  iStack_8._0_1_ = 0x15;
  iVar2 = piVar4[0xd0];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd2] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd0] = 0;
    piVar4[0xd1] = 0;
    piVar4[0xd2] = 0;
  }
  iStack_8._0_1_ = 0x14;
  piStack_18 = (int *)piVar4[0xcf];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0x13;
  if (0xf < (uint)piVar4[0xc9]) {
    func_0x0046b1f0(piVar4 + 0xc4,piVar4[0xc4],piVar4[0xc9]);
  }
  piVar4[200] = 0;
  piVar4[0xc9] = 0xf;
  *(undefined1 *)(piVar4 + 0xc4) = 0;
  iStack_8._0_1_ = 0x12;
  if (0xf < (uint)piVar4[0xc3]) {
    func_0x0046b1f0(piVar4 + 0xbe,piVar4[0xbe],piVar4[0xc3]);
  }
  piVar4[0xc2] = 0;
  piVar4[0xc3] = 0xf;
  *(undefined1 *)(piVar4 + 0xbe) = 0;
  iStack_8._0_1_ = 0x11;
  if (0xf < (uint)piVar4[0xb8]) {
    func_0x0046b1f0(piVar4 + 0xb3,piVar4[0xb3],piVar4[0xb8]);
  }
  piVar4[0xb7] = 0;
  piVar4[0xb8] = 0xf;
  *(undefined1 *)(piVar4 + 0xb3) = 0;
  iStack_8._0_1_ = 0x10;
  if (0xf < (uint)piVar4[0x9f]) {
    func_0x0046b1f0(piVar4 + 0x9a,piVar4[0x9a],piVar4[0x9f]);
  }
  piVar4[0x9e] = 0;
  piVar4[0x9f] = 0xf;
  *(undefined1 *)(piVar4 + 0x9a) = 0;
  iStack_8._0_1_ = 0xf;
  piStack_18 = (int *)piVar4[0x99];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0xe;
  piVar1 = piVar4 + 0x91;
  if (0xf < (uint)piVar4[0x96]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x96]);
  }
  piVar4[0x95] = 0;
  piVar4[0x96] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xd;
  func_0x00618eb0();
  iStack_8._0_1_ = 0xc;
  piVar1 = piVar4 + 0x5d;
  if (0xf < (uint)piVar4[0x62]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x62]);
  }
  piVar4[0x61] = 0;
  piVar4[0x62] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xb;
  piStack_18 = (int *)piVar4[0x50];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 10;
  piStack_18 = (int *)piVar4[0x41];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 9;
  piStack_18 = (int *)piVar4[0x36];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 8;
  piStack_18 = (int *)piVar4[0x34];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar1 = piVar4 + 0x31;
  iStack_8._0_1_ = 7;
  piStack_18 = piVar1;
  func_0x0085ec30(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  iStack_8._0_1_ = 6;
  func_0x00792a10();
  iVar2 = piVar4[0x2c];
  piVar4[0x2c] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 5;
  func_0x00792a10();
  iVar2 = piVar4[0x27];
  piVar4[0x27] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 4;
  piVar1 = piVar4 + 0x21;
  if (0xf < (uint)piVar4[0x26]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x26]);
  }
  piVar4[0x25] = 0;
  piVar4[0x26] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 3;
  piStack_18 = (int *)piVar4[0x20];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 2;
  piStack_18 = (int *)piVar4[0x1e];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 1;
  piVar1 = piVar4 + 10;
  if (0xf < (uint)piVar4[0xf]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xf]);
  }
  piVar4[0xe] = 0;
  piVar4[0xf] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar1 = piVar4 + 4;
  if (0xf < (uint)piVar4[9]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[9]);
  }
  piVar4[8] = 0;
  piVar4[9] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00ecd2b8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x3a4);
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
  return;
}



void Unwind_00ecd2c6(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x3c0);
  if (0xf < *(uint *)(iVar1 + 0x3d4)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x3d4));
  }
  *(undefined4 *)(iVar1 + 0x3d0) = 0;
  *(undefined4 *)(iVar1 + 0x3d4) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ecd2d4(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x3d8);
  if (0xf < *(uint *)(iVar1 + 0x3ec)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x3ec));
  }
  *(undefined4 *)(iVar1 + 1000) = 0;
  *(undefined4 *)(iVar1 + 0x3ec) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ecd2e2(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x3f8);
  if (0xf < *(uint *)(iVar1 + 0x40c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x40c));
  }
  *(undefined4 *)(iVar1 + 0x408) = 0;
  *(undefined4 *)(iVar1 + 0x40c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00ecd320(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  uint auStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  uint auStack_30 [6];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f36c33;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *piVar4 = (int)UIWidget::vftable;
  iStack_8 = 0x1b;
  if (*(char *)((int)piVar4 + 0x6f) == '\0') {
    auStack_30[4] = 0;
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    piStack_18 = piVar4;
    func_0x0046bc40("widget \'%s\' was not explicitly destroyed. Source: \'%s\'. Parent ID: \'%s\'."
                    ,0x48,uStack_14);
    iStack_8._0_1_ = 0x1c;
    uVar5 = func_0x005c0170(piVar4 + 4,piVar4 + 10,piVar4 + 0x21);
    iStack_8._0_1_ = 0x1d;
    FUN_005ee340(2,uVar5);
    iStack_8._0_1_ = 0x1c;
    if (0xf < uStack_34) {
      func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    iStack_8 = CONCAT31(iStack_8._1_3_,0x1b);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
  }
  _DAT_0145f154 = _DAT_0145f154 + 1;
  piStack_18 = piVar4;
  func_0x008766e0(&piStack_18);
  iStack_8._0_1_ = 0x1a;
  func_0x00618eb0();
  iStack_8._0_1_ = 0x19;
  if (piVar4[0xe0] != 0) {
    func_0x0085ebb0(piVar4[0xe0]);
    func_0x0085e810(piVar4[0xe0],(piVar4[0xe2] - piVar4[0xe0]) / 0x28);
    piVar4[0xe0] = 0;
    piVar4[0xe1] = 0;
    piVar4[0xe2] = 0;
  }
  iStack_8._0_1_ = 0x18;
  if (piVar4[0xdd] != 0) {
    func_0x0085efb0(piVar4[0xdd]);
    func_0x005a88e0(piVar4[0xdd],piVar4[0xdf] - piVar4[0xdd] >> 5);
    piVar4[0xdd] = 0;
    piVar4[0xde] = 0;
    piVar4[0xdf] = 0;
  }
  iStack_8._0_1_ = 0x17;
  piVar1 = piVar4 + 0xd7;
  if (0xf < (uint)piVar4[0xdc]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xdc]);
  }
  piVar4[0xdb] = 0;
  piVar4[0xdc] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0x16;
  iVar2 = piVar4[0xd3];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd5] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd3] = 0;
    piVar4[0xd4] = 0;
    piVar4[0xd5] = 0;
  }
  iStack_8._0_1_ = 0x15;
  iVar2 = piVar4[0xd0];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd2] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd0] = 0;
    piVar4[0xd1] = 0;
    piVar4[0xd2] = 0;
  }
  iStack_8._0_1_ = 0x14;
  piStack_18 = (int *)piVar4[0xcf];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0x13;
  if (0xf < (uint)piVar4[0xc9]) {
    func_0x0046b1f0(piVar4 + 0xc4,piVar4[0xc4],piVar4[0xc9]);
  }
  piVar4[200] = 0;
  piVar4[0xc9] = 0xf;
  *(undefined1 *)(piVar4 + 0xc4) = 0;
  iStack_8._0_1_ = 0x12;
  if (0xf < (uint)piVar4[0xc3]) {
    func_0x0046b1f0(piVar4 + 0xbe,piVar4[0xbe],piVar4[0xc3]);
  }
  piVar4[0xc2] = 0;
  piVar4[0xc3] = 0xf;
  *(undefined1 *)(piVar4 + 0xbe) = 0;
  iStack_8._0_1_ = 0x11;
  if (0xf < (uint)piVar4[0xb8]) {
    func_0x0046b1f0(piVar4 + 0xb3,piVar4[0xb3],piVar4[0xb8]);
  }
  piVar4[0xb7] = 0;
  piVar4[0xb8] = 0xf;
  *(undefined1 *)(piVar4 + 0xb3) = 0;
  iStack_8._0_1_ = 0x10;
  if (0xf < (uint)piVar4[0x9f]) {
    func_0x0046b1f0(piVar4 + 0x9a,piVar4[0x9a],piVar4[0x9f]);
  }
  piVar4[0x9e] = 0;
  piVar4[0x9f] = 0xf;
  *(undefined1 *)(piVar4 + 0x9a) = 0;
  iStack_8._0_1_ = 0xf;
  piStack_18 = (int *)piVar4[0x99];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0xe;
  piVar1 = piVar4 + 0x91;
  if (0xf < (uint)piVar4[0x96]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x96]);
  }
  piVar4[0x95] = 0;
  piVar4[0x96] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xd;
  func_0x00618eb0();
  iStack_8._0_1_ = 0xc;
  piVar1 = piVar4 + 0x5d;
  if (0xf < (uint)piVar4[0x62]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x62]);
  }
  piVar4[0x61] = 0;
  piVar4[0x62] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xb;
  piStack_18 = (int *)piVar4[0x50];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 10;
  piStack_18 = (int *)piVar4[0x41];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 9;
  piStack_18 = (int *)piVar4[0x36];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 8;
  piStack_18 = (int *)piVar4[0x34];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar1 = piVar4 + 0x31;
  iStack_8._0_1_ = 7;
  piStack_18 = piVar1;
  func_0x0085ec30(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  iStack_8._0_1_ = 6;
  func_0x00792a10();
  iVar2 = piVar4[0x2c];
  piVar4[0x2c] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 5;
  func_0x00792a10();
  iVar2 = piVar4[0x27];
  piVar4[0x27] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 4;
  piVar1 = piVar4 + 0x21;
  if (0xf < (uint)piVar4[0x26]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x26]);
  }
  piVar4[0x25] = 0;
  piVar4[0x26] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 3;
  piStack_18 = (int *)piVar4[0x20];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 2;
  piStack_18 = (int *)piVar4[0x1e];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 1;
  piVar1 = piVar4 + 10;
  if (0xf < (uint)piVar4[0xf]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xf]);
  }
  piVar4[0xe] = 0;
  piVar4[0xf] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar1 = piVar4 + 4;
  if (0xf < (uint)piVar4[9]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[9]);
  }
  piVar4[8] = 0;
  piVar4[9] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00ecd328(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x3a4);
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
  return;
}



void Unwind_00ecd336(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x3c0);
  if (0xf < *(uint *)(iVar1 + 0x3d4)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x3d4));
  }
  *(undefined4 *)(iVar1 + 0x3d0) = 0;
  *(undefined4 *)(iVar1 + 0x3d4) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ecd344(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x3d8);
  if (0xf < *(uint *)(iVar1 + 0x3ec)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x3ec));
  }
  *(undefined4 *)(iVar1 + 1000) = 0;
  *(undefined4 *)(iVar1 + 0x3ec) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ecd352(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x3f8);
  if (0xf < *(uint *)(iVar1 + 0x40c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x40c));
  }
  *(undefined4 *)(iVar1 + 0x408) = 0;
  *(undefined4 *)(iVar1 + 0x40c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ecd390(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xbc) + 4);
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
  return;
}



void Unwind_00ecd39b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x118);
  if (0xf < *(uint *)(unaff_EBP + -0x104)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
  }
  *(undefined4 *)(unaff_EBP + -0x108) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd3a6(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xbc) + 4);
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
  return;
}



void Unwind_00ecd3b1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x118);
  if (0xf < *(uint *)(unaff_EBP + -0x104)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
  }
  *(undefined4 *)(unaff_EBP + -0x108) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd3bc(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xbc) + 4);
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
  return;
}



uint Unwind_00ecd3c7(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0xb0) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0xb0) = *(uint *)(unaff_EBP + -0xb0) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0xcc);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00ecd3e9(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0xb0) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0xb0) = *(uint *)(unaff_EBP + -0xb0) & 0xfffffffd;
  piVar5 = *(int **)(unaff_EBP + -0xbc);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ecd40b(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecd183;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd416(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x118);
  if (0xf < *(uint *)(unaff_EBP + -0x104)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
  }
  *(undefined4 *)(unaff_EBP + -0x108) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd421(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xe4) + 4);
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
  return;
}



void Unwind_00ecd460(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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
  return;
}



void Unwind_00ecd468(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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
  return;
}



void Unwind_00ecd470(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd4a0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00ecd4a8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd4c1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x58);
    if (0xf < *(uint *)(unaff_EBP + -0x44)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd4da(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x70);
    if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd4f3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x88);
    if (0xf < *(uint *)(unaff_EBP + -0x74)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74));
    }
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd50f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0xa0);
    if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8c));
    }
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd52b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
    if (0xf < *(uint *)(unaff_EBP + -0xa4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa4));
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd547(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x100);
  if (0xf < *(uint *)(unaff_EBP + -0xec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xec));
  }
  *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd552(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
    if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
    }
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
    *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd56e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0xe8);
    if (0xf < *(uint *)(unaff_EBP + -0xd4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd4));
    }
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
    *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd5c0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x50);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar2 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar2 = std::ios_base::vftable;
    func_0x00e706cb(puVar2,uVar1,puVar2);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ecd5dc(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00ecd5e7(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  iVar1 = (*(undefined4 **)(unaff_EBP + -0x18))[0xd];
  **(undefined4 **)(unaff_EBP + -0x18) = std::basic_streambuf<>::vftable;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(iVar1 + 4) + 8);
      _guard_check_icall();
      puVar3 = (undefined4 *)(*pcVar2)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar3;
        _guard_check_icall(1);
        (*pcVar2)();
      }
    }
    func_0x008ab812(iVar1,8);
  }
  return;
}



void Unwind_00ecd5ef(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar1 + 4) = std::basic_stringbuf<>::vftable;
  uStack_8 = 0;
  if ((*(byte *)(iVar1 + 0x40) & 1) != 0) {
    if (**(int **)(iVar1 + 0x24) == 0) {
      iVar3 = **(int **)(iVar1 + 0x30) + **(int **)(iVar1 + 0x20);
    }
    else {
      iVar3 = **(int **)(iVar1 + 0x34) + **(int **)(iVar1 + 0x24);
    }
    func_0x0046aa00(**(int **)(iVar1 + 0x10),iVar3 - **(int **)(iVar1 + 0x10),uVar2);
  }
  **(undefined4 **)(iVar1 + 0x10) = 0;
  **(undefined4 **)(iVar1 + 0x20) = 0;
  **(undefined4 **)(iVar1 + 0x30) = 0;
  **(undefined4 **)(iVar1 + 0x14) = 0;
  **(undefined4 **)(iVar1 + 0x24) = 0;
  **(undefined4 **)(iVar1 + 0x34) = 0;
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xfffffffe;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd620(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x34) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x34));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd628(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x38) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00ecd641(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x34) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x34));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd670(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145da0c != 0) {
    func_0x0046ac90(iRam0145da0c,iRam0145da14 - iRam0145da0c >> 2,uVar1);
    iRam0145da0c = 0;
    uRam0145da10 = 0;
    iRam0145da14 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145da04,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00ecd6a0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  uint auStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  uint auStack_30 [6];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f36c33;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *piVar4 = (int)UIWidget::vftable;
  iStack_8 = 0x1b;
  if (*(char *)((int)piVar4 + 0x6f) == '\0') {
    auStack_30[4] = 0;
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    piStack_18 = piVar4;
    func_0x0046bc40("widget \'%s\' was not explicitly destroyed. Source: \'%s\'. Parent ID: \'%s\'."
                    ,0x48,uStack_14);
    iStack_8._0_1_ = 0x1c;
    uVar5 = func_0x005c0170(piVar4 + 4,piVar4 + 10,piVar4 + 0x21);
    iStack_8._0_1_ = 0x1d;
    FUN_005ee340(2,uVar5);
    iStack_8._0_1_ = 0x1c;
    if (0xf < uStack_34) {
      func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    iStack_8 = CONCAT31(iStack_8._1_3_,0x1b);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
  }
  _DAT_0145f154 = _DAT_0145f154 + 1;
  piStack_18 = piVar4;
  func_0x008766e0(&piStack_18);
  iStack_8._0_1_ = 0x1a;
  func_0x00618eb0();
  iStack_8._0_1_ = 0x19;
  if (piVar4[0xe0] != 0) {
    func_0x0085ebb0(piVar4[0xe0]);
    func_0x0085e810(piVar4[0xe0],(piVar4[0xe2] - piVar4[0xe0]) / 0x28);
    piVar4[0xe0] = 0;
    piVar4[0xe1] = 0;
    piVar4[0xe2] = 0;
  }
  iStack_8._0_1_ = 0x18;
  if (piVar4[0xdd] != 0) {
    func_0x0085efb0(piVar4[0xdd]);
    func_0x005a88e0(piVar4[0xdd],piVar4[0xdf] - piVar4[0xdd] >> 5);
    piVar4[0xdd] = 0;
    piVar4[0xde] = 0;
    piVar4[0xdf] = 0;
  }
  iStack_8._0_1_ = 0x17;
  piVar1 = piVar4 + 0xd7;
  if (0xf < (uint)piVar4[0xdc]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xdc]);
  }
  piVar4[0xdb] = 0;
  piVar4[0xdc] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0x16;
  iVar2 = piVar4[0xd3];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd5] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd3] = 0;
    piVar4[0xd4] = 0;
    piVar4[0xd5] = 0;
  }
  iStack_8._0_1_ = 0x15;
  iVar2 = piVar4[0xd0];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd2] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd0] = 0;
    piVar4[0xd1] = 0;
    piVar4[0xd2] = 0;
  }
  iStack_8._0_1_ = 0x14;
  piStack_18 = (int *)piVar4[0xcf];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0x13;
  if (0xf < (uint)piVar4[0xc9]) {
    func_0x0046b1f0(piVar4 + 0xc4,piVar4[0xc4],piVar4[0xc9]);
  }
  piVar4[200] = 0;
  piVar4[0xc9] = 0xf;
  *(undefined1 *)(piVar4 + 0xc4) = 0;
  iStack_8._0_1_ = 0x12;
  if (0xf < (uint)piVar4[0xc3]) {
    func_0x0046b1f0(piVar4 + 0xbe,piVar4[0xbe],piVar4[0xc3]);
  }
  piVar4[0xc2] = 0;
  piVar4[0xc3] = 0xf;
  *(undefined1 *)(piVar4 + 0xbe) = 0;
  iStack_8._0_1_ = 0x11;
  if (0xf < (uint)piVar4[0xb8]) {
    func_0x0046b1f0(piVar4 + 0xb3,piVar4[0xb3],piVar4[0xb8]);
  }
  piVar4[0xb7] = 0;
  piVar4[0xb8] = 0xf;
  *(undefined1 *)(piVar4 + 0xb3) = 0;
  iStack_8._0_1_ = 0x10;
  if (0xf < (uint)piVar4[0x9f]) {
    func_0x0046b1f0(piVar4 + 0x9a,piVar4[0x9a],piVar4[0x9f]);
  }
  piVar4[0x9e] = 0;
  piVar4[0x9f] = 0xf;
  *(undefined1 *)(piVar4 + 0x9a) = 0;
  iStack_8._0_1_ = 0xf;
  piStack_18 = (int *)piVar4[0x99];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0xe;
  piVar1 = piVar4 + 0x91;
  if (0xf < (uint)piVar4[0x96]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x96]);
  }
  piVar4[0x95] = 0;
  piVar4[0x96] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xd;
  func_0x00618eb0();
  iStack_8._0_1_ = 0xc;
  piVar1 = piVar4 + 0x5d;
  if (0xf < (uint)piVar4[0x62]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x62]);
  }
  piVar4[0x61] = 0;
  piVar4[0x62] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xb;
  piStack_18 = (int *)piVar4[0x50];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 10;
  piStack_18 = (int *)piVar4[0x41];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 9;
  piStack_18 = (int *)piVar4[0x36];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 8;
  piStack_18 = (int *)piVar4[0x34];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar1 = piVar4 + 0x31;
  iStack_8._0_1_ = 7;
  piStack_18 = piVar1;
  func_0x0085ec30(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  iStack_8._0_1_ = 6;
  func_0x00792a10();
  iVar2 = piVar4[0x2c];
  piVar4[0x2c] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 5;
  func_0x00792a10();
  iVar2 = piVar4[0x27];
  piVar4[0x27] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 4;
  piVar1 = piVar4 + 0x21;
  if (0xf < (uint)piVar4[0x26]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x26]);
  }
  piVar4[0x25] = 0;
  piVar4[0x26] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 3;
  piStack_18 = (int *)piVar4[0x20];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 2;
  piStack_18 = (int *)piVar4[0x1e];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 1;
  piVar1 = piVar4 + 10;
  if (0xf < (uint)piVar4[0xf]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xf]);
  }
  piVar4[0xe] = 0;
  piVar4[0xf] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar1 = piVar4 + 4;
  if (0xf < (uint)piVar4[9]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[9]);
  }
  piVar4[8] = 0;
  piVar4[9] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00ecd6a8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x3a8);
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
  return;
}



void Unwind_00ecd6b6(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
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
  return;
}



void Unwind_00ecd6be(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00ecd6f0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  uint auStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  uint auStack_30 [6];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f36c33;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *piVar4 = (int)UIWidget::vftable;
  iStack_8 = 0x1b;
  if (*(char *)((int)piVar4 + 0x6f) == '\0') {
    auStack_30[4] = 0;
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    piStack_18 = piVar4;
    func_0x0046bc40("widget \'%s\' was not explicitly destroyed. Source: \'%s\'. Parent ID: \'%s\'."
                    ,0x48,uStack_14);
    iStack_8._0_1_ = 0x1c;
    uVar5 = func_0x005c0170(piVar4 + 4,piVar4 + 10,piVar4 + 0x21);
    iStack_8._0_1_ = 0x1d;
    FUN_005ee340(2,uVar5);
    iStack_8._0_1_ = 0x1c;
    if (0xf < uStack_34) {
      func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    iStack_8 = CONCAT31(iStack_8._1_3_,0x1b);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
  }
  _DAT_0145f154 = _DAT_0145f154 + 1;
  piStack_18 = piVar4;
  func_0x008766e0(&piStack_18);
  iStack_8._0_1_ = 0x1a;
  func_0x00618eb0();
  iStack_8._0_1_ = 0x19;
  if (piVar4[0xe0] != 0) {
    func_0x0085ebb0(piVar4[0xe0]);
    func_0x0085e810(piVar4[0xe0],(piVar4[0xe2] - piVar4[0xe0]) / 0x28);
    piVar4[0xe0] = 0;
    piVar4[0xe1] = 0;
    piVar4[0xe2] = 0;
  }
  iStack_8._0_1_ = 0x18;
  if (piVar4[0xdd] != 0) {
    func_0x0085efb0(piVar4[0xdd]);
    func_0x005a88e0(piVar4[0xdd],piVar4[0xdf] - piVar4[0xdd] >> 5);
    piVar4[0xdd] = 0;
    piVar4[0xde] = 0;
    piVar4[0xdf] = 0;
  }
  iStack_8._0_1_ = 0x17;
  piVar1 = piVar4 + 0xd7;
  if (0xf < (uint)piVar4[0xdc]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xdc]);
  }
  piVar4[0xdb] = 0;
  piVar4[0xdc] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0x16;
  iVar2 = piVar4[0xd3];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd5] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd3] = 0;
    piVar4[0xd4] = 0;
    piVar4[0xd5] = 0;
  }
  iStack_8._0_1_ = 0x15;
  iVar2 = piVar4[0xd0];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd2] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd0] = 0;
    piVar4[0xd1] = 0;
    piVar4[0xd2] = 0;
  }
  iStack_8._0_1_ = 0x14;
  piStack_18 = (int *)piVar4[0xcf];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0x13;
  if (0xf < (uint)piVar4[0xc9]) {
    func_0x0046b1f0(piVar4 + 0xc4,piVar4[0xc4],piVar4[0xc9]);
  }
  piVar4[200] = 0;
  piVar4[0xc9] = 0xf;
  *(undefined1 *)(piVar4 + 0xc4) = 0;
  iStack_8._0_1_ = 0x12;
  if (0xf < (uint)piVar4[0xc3]) {
    func_0x0046b1f0(piVar4 + 0xbe,piVar4[0xbe],piVar4[0xc3]);
  }
  piVar4[0xc2] = 0;
  piVar4[0xc3] = 0xf;
  *(undefined1 *)(piVar4 + 0xbe) = 0;
  iStack_8._0_1_ = 0x11;
  if (0xf < (uint)piVar4[0xb8]) {
    func_0x0046b1f0(piVar4 + 0xb3,piVar4[0xb3],piVar4[0xb8]);
  }
  piVar4[0xb7] = 0;
  piVar4[0xb8] = 0xf;
  *(undefined1 *)(piVar4 + 0xb3) = 0;
  iStack_8._0_1_ = 0x10;
  if (0xf < (uint)piVar4[0x9f]) {
    func_0x0046b1f0(piVar4 + 0x9a,piVar4[0x9a],piVar4[0x9f]);
  }
  piVar4[0x9e] = 0;
  piVar4[0x9f] = 0xf;
  *(undefined1 *)(piVar4 + 0x9a) = 0;
  iStack_8._0_1_ = 0xf;
  piStack_18 = (int *)piVar4[0x99];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0xe;
  piVar1 = piVar4 + 0x91;
  if (0xf < (uint)piVar4[0x96]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x96]);
  }
  piVar4[0x95] = 0;
  piVar4[0x96] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xd;
  func_0x00618eb0();
  iStack_8._0_1_ = 0xc;
  piVar1 = piVar4 + 0x5d;
  if (0xf < (uint)piVar4[0x62]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x62]);
  }
  piVar4[0x61] = 0;
  piVar4[0x62] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xb;
  piStack_18 = (int *)piVar4[0x50];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 10;
  piStack_18 = (int *)piVar4[0x41];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 9;
  piStack_18 = (int *)piVar4[0x36];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 8;
  piStack_18 = (int *)piVar4[0x34];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar1 = piVar4 + 0x31;
  iStack_8._0_1_ = 7;
  piStack_18 = piVar1;
  func_0x0085ec30(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  iStack_8._0_1_ = 6;
  func_0x00792a10();
  iVar2 = piVar4[0x2c];
  piVar4[0x2c] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 5;
  func_0x00792a10();
  iVar2 = piVar4[0x27];
  piVar4[0x27] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 4;
  piVar1 = piVar4 + 0x21;
  if (0xf < (uint)piVar4[0x26]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x26]);
  }
  piVar4[0x25] = 0;
  piVar4[0x26] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 3;
  piStack_18 = (int *)piVar4[0x20];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 2;
  piStack_18 = (int *)piVar4[0x1e];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 1;
  piVar1 = piVar4 + 10;
  if (0xf < (uint)piVar4[0xf]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xf]);
  }
  piVar4[0xe] = 0;
  piVar4[0xf] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar1 = piVar4 + 4;
  if (0xf < (uint)piVar4[9]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[9]);
  }
  piVar4[8] = 0;
  piVar4[9] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00ecd6f8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3a8);
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
  return;
}



int * Unwind_00ecd730(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed7cfb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x14);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar6 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x1c);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ecd738(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x28);
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
  return;
}



uint Unwind_00ecd770(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x30) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x44) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ecd789(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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
  return;
}



void Unwind_00ecd791(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x38);
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
  return;
}



void Unwind_00ecd7d0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00ecd7d8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd7f1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x58);
    if (0xf < *(uint *)(unaff_EBP + -0x44)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd80a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x70);
    if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd823(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x88);
    if (0xf < *(uint *)(unaff_EBP + -0x74)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74));
    }
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecd870(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecd8a0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x238);
  return;
}



uint Unwind_00ecd8b2(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ecd8cb(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
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
  return;
}



void Unwind_00ecd8d3(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
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
  return;
}



int * Unwind_00ecd900(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ecd90b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x14);
  if (0xf < *(uint *)(iVar1 + 0x28)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x28));
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ecd916(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar1 != (int *)0x0) {
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
  return;
}



void Unwind_00ecd940(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145da2c != 0) {
    func_0x0046ac90(iRam0145da2c,iRam0145da34 - iRam0145da2c >> 2,uVar1);
    iRam0145da2c = 0;
    uRam0145da30 = 0;
    iRam0145da34 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145da24,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecd970(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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
  return;
}



void Unwind_00ecd978(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
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
  return;
}



void Unwind_00ecd980(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
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
  return;
}



void Unwind_00ecd9c0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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
  return;
}



uint Unwind_00ecd9c8(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00ecd9e1(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ecda20(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x24),0x44);
  return;
}



void Unwind_00ecda2f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecda37(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
  if (piVar1 != (int *)0x0) {
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
  return;
}



int * Unwind_00ecda3f(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ecda4a(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x28);
  puVar2 = (undefined4 *)(iVar1 + 0x14);
  if (0xf < *(uint *)(iVar1 + 0x28)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x28));
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



int Unwind_00ecda55(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00ecd923;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(iVar5 + 0x14);
  if (0xf < *(uint *)(iVar5 + 0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar5 + 0x28),uVar6);
  }
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iVar7 = iVar5 + 4;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar2 = piVar3 + 2;
    iVar5 = *piVar2;
    iVar7 = *piVar2;
    *piVar2 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      iVar7 = (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



uint Unwind_00ecda5d(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x30) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x4c) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ecda76(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x28);
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
  return;
}



void Unwind_00ecda7e(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
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
  return;
}



void Unwind_00ecdab0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x24);
  return;
}



void Unwind_00ecdabf(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
  if (piVar1 != (int *)0x0) {
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
  return;
}



int * Unwind_00ecdac7(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ecdacf(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)(iVar1 + 8);
  if (*piVar2 != 0) {
    func_0x00485920(*piVar2);
    func_0x0046e710(*piVar2,*(int *)(iVar1 + 0x10) - *piVar2 >> 3);
    *piVar2 = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}



uint Unwind_00ecdada(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ecdaf3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
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
  return;
}



void Unwind_00ecdafb(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
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
  return;
}



void Unwind_00ecdb30(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x18,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecdb38(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x2c) + 4);
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
  return;
}



void Unwind_00ecdb40(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x2c) + 0xc);
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
  return;
}



int * Unwind_00ecdb4b(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar7 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar7;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0xc);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar7 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar5 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      piVar7 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar7;
}



void Unwind_00ecdb53(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecdb9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x005d8390(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecdb5b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x18,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecdb90(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 != 0) {
    func_0x008ab812(iVar1,0x18,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ecdbc0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ecdbc8(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar2 = (int *)(iVar1 + 8);
  if (*piVar2 != 0) {
    func_0x00485920(*piVar2);
    func_0x0046e710(*piVar2,*(int *)(iVar1 + 0x10) - *piVar2 >> 3);
    *piVar2 = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}



void Unwind_00ecdbd3(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar1 != (int *)0x0) {
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
  return;
}



int Unwind_00ecdc00(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ecd923;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(iVar5 + 0x14);
  if (0xf < *(uint *)(iVar5 + 0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar5 + 0x28),uVar6);
  }
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iVar7 = iVar5 + 4;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar2 = piVar3 + 2;
    iVar5 = *piVar2;
    iVar7 = *piVar2;
    *piVar2 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      iVar7 = (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void Unwind_00ecdc30(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piStack_14 = (int *)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *piStack_14;
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    if (*(uint *)(iVar1 + 8) < *(uint *)(iVar1 + 0x1c) >> 3) {
      func_0x005d8190(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puVar2 = *(undefined4 **)(iVar1 + 4);
    *(undefined4 *)puVar2[1] = 0;
    puVar2 = (undefined4 *)*puVar2;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      func_0x005d8390(uVar4);
      func_0x008ab812(puVar2,0x18);
      puVar2 = puVar3;
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    piStack_14 = *(int **)(iVar1 + 4);
    func_0x0046c050(&piStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecdc60(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x38);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 4) = *(undefined4 *)(unaff_EBP + -0x3c);
  return;
}



void Unwind_00ecdc90(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
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
  return;
}



void Unwind_00ecdc98(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc);
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
  return;
}



void Unwind_00ecdcd0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
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
  return;
}



void Unwind_00ecdcd8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
  if (piVar1 != (int *)0x0) {
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
  return;
}



int * Unwind_00ecdce0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



undefined4 * Unwind_00ecdceb(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f202a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = LuaObject::vftable;
  uStack_8 = 0;
  iVar2 = puVar5[3];
  if (iVar2 != -1) {
    if ((-1 < iVar2) && (DAT_0145e9f0 != 0)) {
      func_0x00d69b70(DAT_0145e9f0,0xffffd8f0,iVar2,uVar6);
    }
    puVar5[3] = 0xffffffff;
  }
  puVar7 = puVar5 + 1;
  uStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00ecdcf3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x1c);
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
  return;
}



undefined4 * Unwind_00ecdd20(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f202a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = LuaObject::vftable;
  uStack_8 = 0;
  iVar2 = puVar5[3];
  if (iVar2 != -1) {
    if ((-1 < iVar2) && (DAT_0145e9f0 != 0)) {
      func_0x00d69b70(DAT_0145e9f0,0xffffd8f0,iVar2,uVar6);
    }
    puVar5[3] = 0xffffffff;
  }
  puVar7 = puVar5 + 1;
  uStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00ecdd28(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x1c);
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
  return;
}



void Unwind_00ecdd60(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145da4c != 0) {
    func_0x0046ac90(iRam0145da4c,iRam0145da54 - iRam0145da4c >> 2,uVar1);
    iRam0145da4c = 0;
    uRam0145da50 = 0;
    iRam0145da54 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145da44,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecdd90(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
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
  return;
}



void Unwind_00ecdd98(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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
  return;
}



void Unwind_00ecdda0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ecdd38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(iVar3 + 0x1c);
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
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecdda8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x005d8390(uVar3);
    func_0x008ab812(puVar1,0x18);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecddb3(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00ecddbe(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ecdebb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecddc6(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ecde83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x2c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x34) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecde00(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ecdd38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(iVar3 + 0x1c);
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
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecde08(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ecde83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x2c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x34) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecde13(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ecdebb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecde1b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x005d8390(uVar3);
    func_0x008ab812(puVar1,0x18);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecde26(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00ecde60(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ecdebb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecde68(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x005d8390(uVar3);
    func_0x008ab812(puVar1,0x18);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecde73(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00ecdea0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x005d8390(uVar3);
    func_0x008ab812(puVar1,0x18);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecdeab(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00ecdee0(void)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ecde36;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar3 = iStack_8._1_3_;
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  iVar1 = *(int *)(iVar2 + 0x2c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x34) - iVar1 >> 2,uVar4);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    uVar3 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar3;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x005d96c0();
  iStack_8 = 0xffffffff;
  func_0x005d8590();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00ecdf10(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  uint auStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  uint auStack_30 [6];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f36c33;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *piVar4 = (int)UIWidget::vftable;
  iStack_8 = 0x1b;
  if (*(char *)((int)piVar4 + 0x6f) == '\0') {
    auStack_30[4] = 0;
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    piStack_18 = piVar4;
    func_0x0046bc40("widget \'%s\' was not explicitly destroyed. Source: \'%s\'. Parent ID: \'%s\'."
                    ,0x48,uStack_14);
    iStack_8._0_1_ = 0x1c;
    uVar5 = func_0x005c0170(piVar4 + 4,piVar4 + 10,piVar4 + 0x21);
    iStack_8._0_1_ = 0x1d;
    FUN_005ee340(2,uVar5);
    iStack_8._0_1_ = 0x1c;
    if (0xf < uStack_34) {
      func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    iStack_8 = CONCAT31(iStack_8._1_3_,0x1b);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
  }
  _DAT_0145f154 = _DAT_0145f154 + 1;
  piStack_18 = piVar4;
  func_0x008766e0(&piStack_18);
  iStack_8._0_1_ = 0x1a;
  func_0x00618eb0();
  iStack_8._0_1_ = 0x19;
  if (piVar4[0xe0] != 0) {
    func_0x0085ebb0(piVar4[0xe0]);
    func_0x0085e810(piVar4[0xe0],(piVar4[0xe2] - piVar4[0xe0]) / 0x28);
    piVar4[0xe0] = 0;
    piVar4[0xe1] = 0;
    piVar4[0xe2] = 0;
  }
  iStack_8._0_1_ = 0x18;
  if (piVar4[0xdd] != 0) {
    func_0x0085efb0(piVar4[0xdd]);
    func_0x005a88e0(piVar4[0xdd],piVar4[0xdf] - piVar4[0xdd] >> 5);
    piVar4[0xdd] = 0;
    piVar4[0xde] = 0;
    piVar4[0xdf] = 0;
  }
  iStack_8._0_1_ = 0x17;
  piVar1 = piVar4 + 0xd7;
  if (0xf < (uint)piVar4[0xdc]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xdc]);
  }
  piVar4[0xdb] = 0;
  piVar4[0xdc] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0x16;
  iVar2 = piVar4[0xd3];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd5] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd3] = 0;
    piVar4[0xd4] = 0;
    piVar4[0xd5] = 0;
  }
  iStack_8._0_1_ = 0x15;
  iVar2 = piVar4[0xd0];
  if (iVar2 != 0) {
    func_0x0046ab40(iVar2,(piVar4[0xd2] - iVar2 >> 2) * -0x33333333);
    piVar4[0xd0] = 0;
    piVar4[0xd1] = 0;
    piVar4[0xd2] = 0;
  }
  iStack_8._0_1_ = 0x14;
  piStack_18 = (int *)piVar4[0xcf];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0x13;
  if (0xf < (uint)piVar4[0xc9]) {
    func_0x0046b1f0(piVar4 + 0xc4,piVar4[0xc4],piVar4[0xc9]);
  }
  piVar4[200] = 0;
  piVar4[0xc9] = 0xf;
  *(undefined1 *)(piVar4 + 0xc4) = 0;
  iStack_8._0_1_ = 0x12;
  if (0xf < (uint)piVar4[0xc3]) {
    func_0x0046b1f0(piVar4 + 0xbe,piVar4[0xbe],piVar4[0xc3]);
  }
  piVar4[0xc2] = 0;
  piVar4[0xc3] = 0xf;
  *(undefined1 *)(piVar4 + 0xbe) = 0;
  iStack_8._0_1_ = 0x11;
  if (0xf < (uint)piVar4[0xb8]) {
    func_0x0046b1f0(piVar4 + 0xb3,piVar4[0xb3],piVar4[0xb8]);
  }
  piVar4[0xb7] = 0;
  piVar4[0xb8] = 0xf;
  *(undefined1 *)(piVar4 + 0xb3) = 0;
  iStack_8._0_1_ = 0x10;
  if (0xf < (uint)piVar4[0x9f]) {
    func_0x0046b1f0(piVar4 + 0x9a,piVar4[0x9a],piVar4[0x9f]);
  }
  piVar4[0x9e] = 0;
  piVar4[0x9f] = 0xf;
  *(undefined1 *)(piVar4 + 0x9a) = 0;
  iStack_8._0_1_ = 0xf;
  piStack_18 = (int *)piVar4[0x99];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 0xe;
  piVar1 = piVar4 + 0x91;
  if (0xf < (uint)piVar4[0x96]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x96]);
  }
  piVar4[0x95] = 0;
  piVar4[0x96] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xd;
  func_0x00618eb0();
  iStack_8._0_1_ = 0xc;
  piVar1 = piVar4 + 0x5d;
  if (0xf < (uint)piVar4[0x62]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x62]);
  }
  piVar4[0x61] = 0;
  piVar4[0x62] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 0xb;
  piStack_18 = (int *)piVar4[0x50];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 10;
  piStack_18 = (int *)piVar4[0x41];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 9;
  piStack_18 = (int *)piVar4[0x36];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 8;
  piStack_18 = (int *)piVar4[0x34];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar1 = piVar4 + 0x31;
  iStack_8._0_1_ = 7;
  piStack_18 = piVar1;
  func_0x0085ec30(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  iStack_8._0_1_ = 6;
  func_0x00792a10();
  iVar2 = piVar4[0x2c];
  piVar4[0x2c] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 5;
  func_0x00792a10();
  iVar2 = piVar4[0x27];
  piVar4[0x27] = 0;
  func_0x008ab812(iVar2,8);
  iStack_8._0_1_ = 4;
  piVar1 = piVar4 + 0x21;
  if (0xf < (uint)piVar4[0x26]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0x26]);
  }
  piVar4[0x25] = 0;
  piVar4[0x26] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8._0_1_ = 3;
  piStack_18 = (int *)piVar4[0x20];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 2;
  piStack_18 = (int *)piVar4[0x1e];
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8._0_1_ = 1;
  piVar1 = piVar4 + 10;
  if (0xf < (uint)piVar4[0xf]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[0xf]);
  }
  piVar4[0xe] = 0;
  piVar4[0xf] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar1 = piVar4 + 4;
  if (0xf < (uint)piVar4[9]) {
    func_0x0046b1f0(piVar1,*piVar1,piVar4[9]);
  }
  piVar4[8] = 0;
  piVar4[9] = 0xf;
  *(undefined1 *)piVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00ecdf40(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x28);
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
  return;
}



void Unwind_00ecdf48(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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
  return;
}



void Unwind_00ecdf50(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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
  return;
}



void Unwind_00ecdf80(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00ecdf88(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecdfa1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x58);
    if (0xf < *(uint *)(unaff_EBP + -0x44)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecdfba(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x70);
    if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece000(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x4c);
  return;
}



void Unwind_00ece00f(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
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
  return;
}



void Unwind_00ece017(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x28) + 4);
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
  return;
}



void Unwind_00ece01f(void)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ecde36;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar3 = iStack_8._1_3_;
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  iVar1 = *(int *)(iVar2 + 0x2c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x34) - iVar1 >> 2,uVar4);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    uVar3 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar3;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x005d96c0();
  iStack_8 = 0xffffffff;
  func_0x005d8590();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00ece027(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x18) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x24) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ece040(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
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
  return;
}



void Unwind_00ece048(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  if (piVar1 != (int *)0x0) {
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
  return;
}



void Unwind_00ece080(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145da6c != 0) {
    func_0x0046ac90(iRam0145da6c,iRam0145da74 - iRam0145da6c >> 2,uVar1);
    iRam0145da6c = 0;
    uRam0145da70 = 0;
    iRam0145da74 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145da64,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ece0b0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed7cfb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x24);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar6 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x2c);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ece0f0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00ece0f8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece140(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145da8c != 0) {
    func_0x0046ac90(iRam0145da8c,iRam0145da94 - iRam0145da8c >> 2,uVar1);
    iRam0145da8c = 0;
    uRam0145da90 = 0;
    iRam0145da94 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145da84,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece170(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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
  return;
}



void Unwind_00ece178(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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
  return;
}



uint Unwind_00ece180(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x20) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x2c);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00ece199(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x20) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffd;
  piVar5 = *(int **)(unaff_EBP + -0x24);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ece1e0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00ece1e8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x44);
    if (0xf < *(uint *)(unaff_EBP + -0x30)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece201(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece21a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x74);
    if (0xf < *(uint *)(unaff_EBP + -0x60)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
    }
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece270(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece278(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece280(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  if (0xf < *(uint *)(unaff_EBP + -0x58)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x58));
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece288(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece290(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40));
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece298(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x38);
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
  return;
}



void Unwind_00ece2a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc0);
  if (0xf < *(uint *)(unaff_EBP + -0xac)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xac));
  }
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece2ab(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40));
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece2b3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece2bb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  if (0xf < *(uint *)(unaff_EBP + -0x58)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x58));
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece2c3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x38);
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
  return;
}



void Unwind_00ece300(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = DAT_012bbf90;
  *(undefined4 *)DAT_012bbf90[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x10,uVar3);
    puVar2 = puVar1;
  }
  func_0x008ab812(DAT_012bbf90,0x10,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece330(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = DAT_012bbf90;
  *(undefined4 *)DAT_012bbf90[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x10,uVar3);
    puVar2 = puVar1;
  }
  func_0x008ab812(DAT_012bbf90,0x10,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece360(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc0) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece36b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xc4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xc4) = *(uint *)(unaff_EBP + -0xc4) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -200);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece38d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xc4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xc4) = *(uint *)(unaff_EBP + -0xc4) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -200);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece3e0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece3e8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec524d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x10,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece3f0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece420(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::codecvt_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece428(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece430(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00ece460(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x24);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece468(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x24);
    puStack_c = &DAT_00ec419d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (7 < (uint)puVar1[5]) {
      func_0x005895e0(puVar1,*puVar1,puVar1[5],uVar2);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ece4b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ece4bb(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x30));
  }
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ece4c6(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x34);
  if (0xf < *(uint *)(iVar1 + 0x48)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x48));
  }
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ece4d1(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x4c);
  if (0xf < *(uint *)(iVar1 + 0x60)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x60));
  }
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ece4dc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 100);
  if (0xf < *(uint *)(iVar1 + 0x78)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x78));
  }
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ece510(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece518(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece531(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece560(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabf35;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x28) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x24,uVar1,(undefined4 *)(unaff_EBP + -0x28));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece590(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece5c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::codecvt<>::vftable;
  *puVar2 = std::codecvt_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece5c8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::codecvt_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece5d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece5d8(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00ece610(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00ece618(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x34);
  return;
}



void Unwind_00ece627(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = std::_Facet_base::vftable;
  return;
}



void Unwind_00ece62f(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece637(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::codecvt_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece63f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eabd0f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 6;
  func_0x00e7055f(unaff_EBP + -0x50,uVar1);
  iStack_8._0_1_ = 5;
  if (*(void **)(unaff_EBP + -0x24) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iStack_8._0_1_ = 4;
  if (*(void **)(unaff_EBP + -0x2c) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iStack_8._0_1_ = 3;
  if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  iStack_8._0_1_ = 2;
  if (*(void **)(unaff_EBP + -0x3c) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  iStack_8._0_1_ = 1;
  if (*(void **)(unaff_EBP + -0x44) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (*(void **)(unaff_EBP + -0x4c) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  iStack_8 = 0xffffffff;
  func_0x00e6ffe4();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece647(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::codecvt<>::vftable;
  *puVar2 = std::codecvt_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ece64f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00ece657(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffe;
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x58) + 4);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00ece6a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x248);
  if (7 < *(uint *)(unaff_EBP + -0x234)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x234));
  }
  *(undefined4 *)(unaff_EBP + -0x238) = 0;
  *(undefined4 *)(unaff_EBP + -0x234) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece6ab(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x248);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x234)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x234),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x238) = 0;
  *(undefined4 *)(unaff_EBP + -0x234) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece6b6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x250);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece6c1(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x24c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24c) = *(uint *)(unaff_EBP + -0x24c) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x26c);
    puStack_c = &DAT_00ec419d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (7 < (uint)puVar1[5]) {
      func_0x005895e0(puVar1,*puVar1,puVar1[5],uVar2);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ece6e3(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x268);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x254)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x254),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -600) = 0;
  *(undefined4 *)(unaff_EBP + -0x254) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece6ee(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x230);
  if (7 < *(uint *)(unaff_EBP + -0x21c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x21c));
  }
  *(undefined4 *)(unaff_EBP + -0x220) = 0;
  *(undefined4 *)(unaff_EBP + -0x21c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece6f9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x26c);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece704(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x268);
  if (7 < *(uint *)(unaff_EBP + -0x254)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x254));
  }
  *(undefined4 *)(unaff_EBP + -600) = 0;
  *(undefined4 *)(unaff_EBP + -0x254) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece70f(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x24c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24c) = *(uint *)(unaff_EBP + -0x24c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x26c);
    puStack_c = &DAT_00ec419d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (7 < (uint)puVar1[5]) {
      func_0x005895e0(puVar1,*puVar1,puVar1[5],uVar2);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ece731(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x248);
  if (7 < *(uint *)(unaff_EBP + -0x234)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x234));
  }
  *(undefined4 *)(unaff_EBP + -0x238) = 0;
  *(undefined4 *)(unaff_EBP + -0x234) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece770(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x11c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x11c) = *(uint *)(unaff_EBP + -0x11c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x120);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece7d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  CloseHandle((HANDLE)*puVar1);
  CloseHandle((HANDLE)puVar1[1]);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece7d8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0x14);
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
  return;
}



void Unwind_00ece840(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (DAT_0145daa0 != 0) {
    uVar3 = DAT_0145daa8 - DAT_0145daa0 & 0xfffffffc;
    iVar2 = DAT_0145daa0;
    if (0xfff < uVar3) {
      iVar2 = *(int *)(DAT_0145daa0 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (DAT_0145daa0 - iVar2) - 4U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(iVar2,uVar3,uVar1);
    DAT_0145daa0 = 0;
    DAT_0145daa4 = 0;
    DAT_0145daa8 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece870(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x54));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00ece878(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x54),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece880(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece8b0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x40) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00ece8b8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  if (7 < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ece8c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  if (0xf < *(uint *)(unaff_EBP + -100)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece8c8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffb;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      func_0x008ab812(*(int *)(unaff_EBP + -0x14),8);
    }
    return;
  }
  return;
}



void Unwind_00ece8e1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
                    // WARNING: Could not recover jumptable at 0x005e0856. Too many branches
                    // WARNING: Treating indirect jump as call
    terminate();
    return;
  }
  return;
}



void Unwind_00ece8e9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece8f1(void)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = unaff_EBP + -0x18;
  puStack_c = &DAT_00ec524d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((*(int *)(unaff_EBP + -0x14) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) != 0)) {
    terminate(uVar1,iVar2,iVar2);
    iVar2 = extraout_ECX;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 4) != 0) {
    func_0x008ab812(*(int *)(iVar2 + 4),0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece8f9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ece901(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece909(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  if (0xf < *(uint *)(unaff_EBP + -100)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece911(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x60);
    if (0xf < *(uint *)(unaff_EBP + -0x4c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
    }
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ece92a(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x40);
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
  return;
}



void Unwind_00ece932(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      func_0x008ab812(*(int *)(unaff_EBP + -0x14),4);
    }
    return;
  }
  return;
}



void Unwind_00ece94b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
                    // WARNING: Could not recover jumptable at 0x005e0856. Too many branches
                    // WARNING: Treating indirect jump as call
    terminate();
    return;
  }
  return;
}



void Unwind_00ece980(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece988(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x24);
  if (0xf < *(uint *)(unaff_EBP + -0x10)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece9c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ece9c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecea00(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecea08(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  BOOL BVar6;
  DWORD DVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int *piVar8;
  DWORD DStack_1c;
  undefined **ppuStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffe;
  piVar1 = (int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ece7e8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  DStack_1c = 0;
  ppuStack_18 = &PTR_vftable_012bc290;
  piVar8 = piVar1;
  if ((((*(char *)(unaff_EBP + -0x1c) == '\0') || (*(char *)(unaff_EBP + -0x1b) != '\0')) ||
      (**(int **)(unaff_EBP + -0x24) != 0x103)) ||
     (cVar5 = func_0x005dc280(&DStack_1c,uStack_14), cVar5 == '\0')) goto LAB_005dc206;
  DVar7 = DStack_1c;
  if (((*piVar1 == 0) || (*piVar1 == -1)) ||
     (cVar5 = func_0x005dc280(&DStack_1c), DVar7 = DStack_1c, cVar5 == '\0')) {
LAB_005dc1fe:
    if (DVar7 != 0) goto LAB_005dc206;
  }
  else {
    if (DStack_1c != 0) goto LAB_005dc206;
    BVar6 = TerminateProcess((HANDLE)*piVar1,1);
    if (BVar6 == 0) {
      DVar7 = GetLastError();
      ppuStack_18 = &PTR_vftable_012bc290;
      goto LAB_005dc1fe;
    }
    CloseHandle((HANDLE)*piVar1);
    *piVar1 = -1;
  }
  *(undefined1 *)(unaff_EBP + -0x1b) = 1;
LAB_005dc206:
  uStack_8 = uStack_8 & 0xffffff00;
  piVar2 = *(int **)(unaff_EBP + -0x20);
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
  uStack_8 = 0xffffffff;
  CloseHandle((HANDLE)*piVar1);
  CloseHandle(*(HANDLE *)(unaff_EBP + -0x30));
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(piVar8);
  return;
}



void Unwind_00ecea21(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  BOOL BVar6;
  DWORD DVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int *piVar8;
  DWORD DStack_1c;
  undefined **ppuStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ece7e8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  DStack_1c = 0;
  ppuStack_18 = &PTR_vftable_012bc290;
  piVar8 = piVar1;
  if ((((*(char *)(unaff_EBP + -0x1c) == '\0') || (*(char *)(unaff_EBP + -0x1b) != '\0')) ||
      (**(int **)(unaff_EBP + -0x24) != 0x103)) ||
     (cVar5 = func_0x005dc280(&DStack_1c,uStack_14), cVar5 == '\0')) goto LAB_005dc206;
  DVar7 = DStack_1c;
  if (((*piVar1 == 0) || (*piVar1 == -1)) ||
     (cVar5 = func_0x005dc280(&DStack_1c), DVar7 = DStack_1c, cVar5 == '\0')) {
LAB_005dc1fe:
    if (DVar7 != 0) goto LAB_005dc206;
  }
  else {
    if (DStack_1c != 0) goto LAB_005dc206;
    BVar6 = TerminateProcess((HANDLE)*piVar1,1);
    if (BVar6 == 0) {
      DVar7 = GetLastError();
      ppuStack_18 = &PTR_vftable_012bc290;
      goto LAB_005dc1fe;
    }
    CloseHandle((HANDLE)*piVar1);
    *piVar1 = -1;
  }
  *(undefined1 *)(unaff_EBP + -0x1b) = 1;
LAB_005dc206:
  uStack_8 = uStack_8 & 0xffffff00;
  piVar2 = *(int **)(unaff_EBP + -0x20);
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
  uStack_8 = 0xffffffff;
  CloseHandle((HANDLE)*piVar1);
  CloseHandle(*(HANDLE *)(unaff_EBP + -0x30));
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(piVar8);
  return;
}



void Unwind_00ecea29(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ecea60(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00ecea68(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00ecea70(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x34);
  return;
}



void Unwind_00ecea7f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    puStack_c = &DAT_00eabd0f;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iStack_8 = 6;
    func_0x00e7055f(unaff_EBP + -0x58,uVar1);
    iStack_8._0_1_ = 5;
    if (*(void **)(unaff_EBP + -0x2c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    iStack_8._0_1_ = 4;
    if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iStack_8._0_1_ = 3;
    if (*(void **)(unaff_EBP + -0x3c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x3c));
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    iStack_8._0_1_ = 2;
    if (*(void **)(unaff_EBP + -0x44) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    iStack_8._0_1_ = 1;
    if (*(void **)(unaff_EBP + -0x4c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x4c));
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (*(void **)(unaff_EBP + -0x54) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x54));
    }
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    iStack_8 = 0xffffffff;
    func_0x00e6ffe4();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ecea98(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x20) = std::_Facet_base::vftable;
  return;
}



void Unwind_00eceaa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x20);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eceaa8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x20);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::codecvt_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eceab0(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x14);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00eceaf0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x10);
  return;
}



uint Unwind_00eceaff(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eceb70(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::exception_detail::clone_base::vftable;
  return;
}



void Unwind_00eceb78(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eabf35;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 8,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eceb83(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x18) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x1c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x1c) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eceb8e(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eceb99(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eceba1(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eceba9(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecebb1(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecebe0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::exception_detail::clone_base::vftable;
  return;
}



void Unwind_00ecebe8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecebf0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eabf35;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 8,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecebfb(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x18) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x1c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x1c) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecec30(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x30);
  return;
}



void Unwind_00ecec3f(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x10) + 8);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00ecec70(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::exception_detail::clone_base::vftable;
  return;
}



void Unwind_00ecec78(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecec80(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eabf35;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 8,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecec8b(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ecec96(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x18) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x1c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x1c) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ececd0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
    if (7 < (uint)puVar1[5]) {
      func_0x005895e0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ecece9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
    if (7 < (uint)puVar1[5]) {
      func_0x005895e0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eced30(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x108);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00eced3e(void)
