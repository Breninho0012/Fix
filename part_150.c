  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cb0f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cb1a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
    if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
    }
    *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2cb3c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
    if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
    }
    *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2cb5e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
    if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
    }
    *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2cb85(void)

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



void Unwind_00f2cb8d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffeff;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x1f0);
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



void Unwind_00f2cbb4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffdff;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x1f0);
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



void Unwind_00f2cbdb(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cbe6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (7 < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2cbf1(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec5443;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x138);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1a0) + 4) + -0x68 + (int)puVar1) =
       std::basic_ofstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1a0) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1a0) + 4) + -0x68 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1a0) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cbfc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffff7ff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
    if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
    }
    *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2cc23(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1ec);
  if (0xf < *(uint *)(unaff_EBP + -0x1d8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1d8));
  }
  *(undefined4 *)(unaff_EBP + -0x1dc) = 0;
  *(undefined4 *)(unaff_EBP + -0x1d8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cc2e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cc39(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cc44(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cc4f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cc5a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cc65(void)

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



void Unwind_00f2cc6d(void)

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



void Unwind_00f2ccb0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x90);
    if (0xf < *(uint *)(unaff_EBP + -0x7c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c));
    }
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2cccc(void)

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



void Unwind_00f2ccd4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xffffffef;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
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



void Unwind_00f2cced(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xffffffdf;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
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



void Unwind_00f2cd06(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cd0e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2cd16(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xffffffbf;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
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



void Unwind_00f2cd2f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xffffff7f;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
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



void Unwind_00f2cd4d(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cd55(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2cd5d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  if (0xf < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cd65(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffd;
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



void Unwind_00f2cd7e(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -100)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cd86(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  if (7 < *(uint *)(unaff_EBP + -100)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2cd8e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffb;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
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



void Unwind_00f2cda7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffff7;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
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



void Unwind_00f2cdc0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cdc8(void)

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



void Unwind_00f2cdd0(void)

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



void Unwind_00f2cdd8(void)

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



void Unwind_00f2ce10(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x21c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x21c) = *(uint *)(unaff_EBP + -0x21c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x250);
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



void Unwind_00f2ce32(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x234);
  if (7 < *(uint *)(unaff_EBP + -0x220)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x220));
  }
  *(undefined4 *)(unaff_EBP + -0x224) = 0;
  *(undefined4 *)(unaff_EBP + -0x220) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2ce3d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x24c);
  if (0xf < *(uint *)(unaff_EBP + -0x238)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x238));
  }
  *(undefined4 *)(unaff_EBP + -0x23c) = 0;
  *(undefined4 *)(unaff_EBP + -0x238) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2ce80(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 8);
  if (0xf < *(uint *)(unaff_EBP + 0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x1c));
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2ce88(void)

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



void Unwind_00f2cec0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 8);
  if (0xf < *(uint *)(unaff_EBP + 0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x1c));
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cec8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (7 < *(uint *)(unaff_EBP + -0x34)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2ced0(void)

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



void Unwind_00f2ced8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cee0(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x70));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f2cee8(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x70),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2cef0(void)

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



void Unwind_00f2cef8(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x70));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f2cf00(void)

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



void Unwind_00f2cf30(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x41c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x41c) = *(uint *)(unaff_EBP + -0x41c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x420);
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



void Unwind_00f2cf90(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x170) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x170) = *(uint *)(unaff_EBP + -0x170) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x174);
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



void Unwind_00f2cfb2(void)

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



void Unwind_00f2cff0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x512c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x512c) = *(uint *)(unaff_EBP + -0x512c) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x514c);
    if (*piVar1 != 0) {
      func_0x004e7c10(*piVar1,piVar1[1],piVar1);
      func_0x004c7ff0(*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    return;
  }
  return;
}



void Unwind_00f2d012(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x5144);
  if (0xf < *(uint *)(unaff_EBP + -0x5130)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5130));
  }
  *(undefined4 *)(unaff_EBP + -0x5134) = 0;
  *(undefined4 *)(unaff_EBP + -0x5130) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d050(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
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



void Unwind_00f2d0a0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x111c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x111c) = *(uint *)(unaff_EBP + -0x111c) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x113c);
    if (*piVar1 != 0) {
      func_0x004e7c10(*piVar1,piVar1[1],piVar1);
      func_0x004c7ff0(*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    return;
  }
  return;
}



void Unwind_00f2d0c2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1134);
  if (0xf < *(uint *)(unaff_EBP + -0x1120)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1120));
  }
  *(undefined4 *)(unaff_EBP + -0x1124) = 0;
  *(undefined4 *)(unaff_EBP + -0x1120) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d100(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x154) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x154) = *(uint *)(unaff_EBP + -0x154) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x164);
    if (*piVar1 != 0) {
      func_0x004e7c10(*piVar1,piVar1[1],piVar1);
      func_0x004c7ff0(*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    return;
  }
  return;
}



void Unwind_00f2d122(void)

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



void Unwind_00f2d12a(void)

{
  func_0x008ab391(&DAT_01463bb0);
  return;
}



void Unwind_00f2d136(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1c4);
  if (0xf < *(uint *)(unaff_EBP + -0x1b0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1b0));
  }
  *(undefined4 *)(unaff_EBP + -0x1b4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1b0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d141(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1ac);
  if (0xf < *(uint *)(unaff_EBP + -0x198)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x198));
  }
  *(undefined4 *)(unaff_EBP + -0x19c) = 0;
  *(undefined4 *)(unaff_EBP + -0x198) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d14c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x194);
  if (0xf < *(uint *)(unaff_EBP + -0x180)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x180));
  }
  *(undefined4 *)(unaff_EBP + -0x184) = 0;
  *(undefined4 *)(unaff_EBP + -0x180) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d157(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(unaff_EBP + -0x1c4,0x18,4,FUN_00469ba0);
  return;
}



void Unwind_00f2d1a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d1a8(void)

{
  func_0x008ab391(&DAT_01463bc0);
  return;
}



void Unwind_00f2d1b4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa0);
  if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8c));
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d1bf(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(unaff_EBP + -0xa0,0x18,2,FUN_00469ba0);
  return;
}



void Unwind_00f2d210(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x1c);
    if (*piVar1 != 0) {
      func_0x004e7c10(*piVar1,piVar1[1],piVar1);
      func_0x004c7ff0(*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    return;
  }
  return;
}



void Unwind_00f2d260(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x24);
  if (7 < *(uint *)(unaff_EBP + -0x10)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2d290(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d298(void)

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
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d2d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d2d8(void)

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
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d310(void)

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



void Unwind_00f2d318(void)

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



void Unwind_00f2d350(void)

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



void Unwind_00f2d390(void)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint3 uVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2c679;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar5 = iStack_8._1_3_;
  iStack_8._0_1_ = 6;
  iStack_8._1_3_ = 0;
  piVar2 = *(int **)(iVar4 + 300);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 0x108)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 300) = 0;
    uVar5 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar5;
  iStack_8._0_1_ = 5;
  piVar2 = *(int **)(iVar4 + 0x104);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 0xe0)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0x104) = 0;
  }
  iStack_8._0_1_ = 4;
  piVar2 = *(int **)(iVar4 + 0xdc);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 0xb8)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0xdc) = 0;
  }
  iStack_8._0_1_ = 3;
  puVar1 = (undefined4 *)(iVar4 + 0x70);
  if (0xf < *(uint *)(iVar4 + 0x84)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar4 + 0x84));
  }
  *(undefined4 *)(iVar4 + 0x80) = 0;
  *(undefined4 *)(iVar4 + 0x84) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 2;
  func_0x00499750();
  iStack_8._0_1_ = 1;
  func_0x00499750();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0058da40();
  iStack_8 = 0xffffffff;
  func_0x00814f10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d398(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x130);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x138) - iVar1 >> 2);
    *(int *)(iVar2 + 0x130) = 0;
    *(undefined4 *)(iVar2 + 0x134) = 0;
    *(undefined4 *)(iVar2 + 0x138) = 0;
  }
  return;
}



void Unwind_00f2d3d0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x00814f90(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d3d8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2c6ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00814f10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d3e3(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x0058dac0(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x10);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d3eb(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2c6dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0058da40(uVar2,iVar1 + 0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d3f6(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x0049a500(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d3fe(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eb1a3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00499750(uVar2,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d409(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x0049a500(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d411(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eb1a3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00499750(uVar2,iVar1 + 0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d41c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2d427(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ed1290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 0x70);
  if (0xf < *(uint *)(iVar2 + 0x84)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x84),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d432(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x30);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2d43a(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xdc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xb8),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xdc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d448(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x34);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2d450(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0x104);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xe0),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x104) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d45e(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x38);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2d466(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 300);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x108),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 300) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d4a0(void)

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



void Unwind_00f2d4a8(void)

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



void Unwind_00f2d4b0(void)

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



void Unwind_00f2d4e0(void)

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



void Unwind_00f2d4e8(void)

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



void Unwind_00f2d4f0(void)

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



void Unwind_00f2d530(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d538(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x80));
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d543(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x80));
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d54e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x80));
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d559(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x80));
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d564(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
  if (0xf < *(uint *)(unaff_EBP + -0x9c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9c));
  }
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d56f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x80));
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d57a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
  if (0xf < *(uint *)(unaff_EBP + -0x9c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9c));
  }
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d5c0(void)

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



void Unwind_00f2d5c8(void)

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



void Unwind_00f2d600(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x5c));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f2d608(void)

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



void Unwind_00f2d610(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x5c),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d618(void)

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



void Unwind_00f2d620(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x5c));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f2d650(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d658(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d660(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uVar4;
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (uint *)func_0x0046ede0(auStack_1c,uVar2);
  uVar4 = func_0x00e87ec0(*puVar3 - *(uint *)(unaff_EBP + -0x18),
                          (puVar3[1] - *(int *)(unaff_EBP + -0x14)) -
                          (uint)(*puVar3 < *(uint *)(unaff_EBP + -0x18)),1000,0);
  **(undefined8 **)(unaff_EBP + -0x24) = uVar4;
  puVar3 = *(uint **)(unaff_EBP + -0x24);
  uVar1 = *(uint *)(unaff_EBP + -0x20);
  uVar2 = *puVar3;
  *puVar3 = *puVar3 - uVar1;
  puVar3[1] = (puVar3[1] - *(int *)(unaff_EBP + -0x1c)) - (uint)(uVar2 < uVar1);
  func_0x00873e90(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d668(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x80);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0xa4));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  return;
}



void Unwind_00f2d673(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x80);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0xa4),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d67e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d686(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x80);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0xa4));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  return;
}



void Unwind_00f2d6c0(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x80));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  return;
}



void Unwind_00f2d6c8(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x80),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d6d0(void)

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



void Unwind_00f2d6d8(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x80));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  return;
}



void Unwind_00f2d710(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x24);
  if (7 < *(uint *)(unaff_EBP + -0x10)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f2d740(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x28);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(unaff_EBP + -0x20) - iVar1);
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f2d748(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(unaff_EBP + -0x14) - iVar1);
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f2d780(void)

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



void Unwind_00f2d788(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d790(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x58);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x7c));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  return;
}



void Unwind_00f2d798(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d7a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x4c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d7a8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d7b3(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x58);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x7c),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d7bb(void)

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



void Unwind_00f2d7c3(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x58);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x7c));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  return;
}



void Unwind_00f2d7cb(void)

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



void Unwind_00f2d800(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x5c));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f2d808(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x5c),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d810(void)

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



void Unwind_00f2d818(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x5c));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f2d850(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x58);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d858(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
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



void Unwind_00f2d860(void)

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



void Unwind_00f2d868(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d870(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x5c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d878(void)

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



void Unwind_00f2d880(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x58);
  if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 != 0)) {
    func_0x0046ac90(iVar2,piVar1[2] - iVar2 >> 2);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}



void Unwind_00f2d888(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x14) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f2d8c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x30);
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



void Unwind_00f2d8d9(void)

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



void Unwind_00f2d910(void)

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



void Unwind_00f2d918(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x44);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d950(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x18,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d958(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec297d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x18,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d960(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2d9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x18,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d968(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec297d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x18,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d970(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x18,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d9a0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ec297d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar1 + 4) != 0) {
    func_0x008ab812(*(int *)(iVar1 + 4),0x18,uVar2,iVar1,iVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d9a8(void)

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



void Unwind_00f2d9e0(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2d9e8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2d9f0(void)

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
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2da20(void)

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



void Unwind_00f2da50(void)

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



int * Unwind_00f2da58(void)

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



void Unwind_00f2da60(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcb8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634700(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f2da6b(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int extraout_EAX;
  int iVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar5 = *(int **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edce96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 1;
  iVar7 = *piVar5;
  func_0x0062f760(piVar5 + 1,uVar6);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  piVar4 = piVar5 + 6;
  if (*(int **)(iVar7 + 0x40) == piVar5 + 1) {
    *(int *)(iVar7 + 0x40) = *piVar4;
  }
  piVar1 = piVar5 + 7;
  if (piVar5[7] != 0) {
    *(int *)(*piVar1 + 0x14) = *piVar4;
  }
  if (*piVar4 != 0) {
    *(int *)(*piVar4 + 0x18) = *piVar1;
  }
  *piVar4 = 0;
  *piVar1 = 0;
  iStack_8._0_1_ = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar7 = extraout_EAX;
  if (piVar5[0x15] != 0) {
    pcVar3 = *(code **)piVar5[0x14];
    _guard_check_icall(piVar5 + 0x11);
    iVar7 = (*pcVar3)();
  }
  iStack_8 = 0xffffffff;
  piVar4 = (int *)piVar5[4];
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar5 = piVar4 + 1;
    iVar2 = *piVar5;
    iVar7 = *piVar5;
    *piVar5 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar7 = (*pcVar3)();
      LOCK();
      piVar5 = piVar4 + 2;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar7 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void Unwind_00f2da73(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcd3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2da7b(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcab5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2da86(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edca7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006345f0(uVar2,iVar1 + 0xb8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2da94(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0xe4);
  if (0xf < *(uint *)(iVar1 + 0xf8)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0xf8));
  }
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2daa2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004a5fa0(uVar2);
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x10100),0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dab0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x10138);
  if (0xf < *(uint *)(iVar1 + 0x1014c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x1014c));
  }
  *(undefined4 *)(iVar1 + 0x10148) = 0;
  *(undefined4 *)(iVar1 + 0x1014c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2dae0(void)

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
  piVar1 = *(int **)(unaff_EBP + 0x5c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0x38),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x5c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dae8(void)

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
  piVar1 = *(int **)(unaff_EBP + 0x34);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0x10),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2daf0(void)

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



int * Unwind_00f2daf8(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f2db00(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcb8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634700(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f2db0b(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int extraout_EAX;
  int iVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar5 = *(int **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edce96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 1;
  iVar7 = *piVar5;
  func_0x0062f760(piVar5 + 1,uVar6);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  piVar4 = piVar5 + 6;
  if (*(int **)(iVar7 + 0x40) == piVar5 + 1) {
    *(int *)(iVar7 + 0x40) = *piVar4;
  }
  piVar1 = piVar5 + 7;
  if (piVar5[7] != 0) {
    *(int *)(*piVar1 + 0x14) = *piVar4;
  }
  if (*piVar4 != 0) {
    *(int *)(*piVar4 + 0x18) = *piVar1;
  }
  *piVar4 = 0;
  *piVar1 = 0;
  iStack_8._0_1_ = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar7 = extraout_EAX;
  if (piVar5[0x15] != 0) {
    pcVar3 = *(code **)piVar5[0x14];
    _guard_check_icall(piVar5 + 0x11);
    iVar7 = (*pcVar3)();
  }
  iStack_8 = 0xffffffff;
  piVar4 = (int *)piVar5[4];
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar5 = piVar4 + 1;
    iVar2 = *piVar5;
    iVar7 = *piVar5;
    *piVar5 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar7 = (*pcVar3)();
      LOCK();
      piVar5 = piVar4 + 2;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar7 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void Unwind_00f2db13(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcd3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db1b(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcab5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db26(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x1c);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2db2e(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xe4);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xc0),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xe4) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db3c(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x20);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2db44(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0x10c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xe8),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x10c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db52(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00821940(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db5a(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x110);
  puStack_c = &DAT_00f2dbdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00821940(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db68(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0049a600(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db70(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1011c);
  puStack_c = &DAT_00eb18ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0049a600(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db7e(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0049a600(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db86(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x10124);
  puStack_c = &DAT_00eb18ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0049a600(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2db94(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x34);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0x10));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
  }
  return;
}



void Unwind_00f2db9c(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x5c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0x38));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x5c) = 0;
  }
  return;
}



void Unwind_00f2dbd0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00821940(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00f2dc00(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00edb948;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  for (piVar1 = *(int **)(_DAT_0145ebc8 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  LOCK();
  DAT_0145ca7c = DAT_0145ca7c + -1;
  UNLOCK();
  if (DAT_0145ca7c == 0) {
    WSACleanup();
  }
  uStack_8 = 0xffffffff;
  func_0x004664f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2dc0a(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcb5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar4 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar4;
  uStack_8 = 0;
  if (DAT_0145ebdc != '\0') {
    LOCK();
    piVar1 = (int *)(*(int *)((DAT_0145ebd8 & 0xfffffffc) + 8) + 0x18);
    iVar2 = *piVar1;
    piVar4 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      piVar4 = (int *)func_0x0062e210(uVar3,&DAT_0145ebd4);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar4;
}



void Unwind_00f2dc14(void)

{
  if (DAT_0145ebe8 != 0) {
                    // WARNING: Could not recover jumptable at 0x005e0856. Too many branches
                    // WARNING: Treating indirect jump as call
    terminate();
    return;
  }
  return;
}



void Unwind_00f2dc1e(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008217a0(uVar1);
  func_0x008ab812(DAT_0145ebf0,0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dc28(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008217a0(uVar1);
  func_0x008ab812(DAT_0145ebf8,0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00f2dc60(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00edb948;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  for (piVar1 = *(int **)(_DAT_0145ebc8 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  LOCK();
  DAT_0145ca7c = DAT_0145ca7c + -1;
  UNLOCK();
  if (DAT_0145ca7c == 0) {
    WSACleanup();
  }
  uStack_8 = 0xffffffff;
  func_0x004664f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2dc6a(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcb5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar4 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar4;
  uStack_8 = 0;
  if (DAT_0145ebdc != '\0') {
    LOCK();
    piVar1 = (int *)(*(int *)((DAT_0145ebd8 & 0xfffffffc) + 8) + 0x18);
    iVar2 = *piVar1;
    piVar4 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      piVar4 = (int *)func_0x0062e210(uVar3,&DAT_0145ebd4);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar4;
}



void Unwind_00f2dc74(void)

{
  if (DAT_0145ebe8 != 0) {
                    // WARNING: Could not recover jumptable at 0x005e0856. Too many branches
                    // WARNING: Treating indirect jump as call
    terminate();
    return;
  }
  return;
}



void Unwind_00f2dc7e(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008217a0(uVar1);
  func_0x008ab812(DAT_0145ebf0,0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dc88(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008217a0(uVar1);
  func_0x008ab812(DAT_0145ebf8,0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dc92(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



uint Unwind_00f2dcc0(void)

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
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



uint Unwind_00f2dcd9(void)

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
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2dd20(void)

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



void Unwind_00f2dd28(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x28) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x50);
    if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2dd41(void)

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



void Unwind_00f2dd49(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2dd51(void)

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
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dd59(void)

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
  
  puStack_c = &DAT_00f2e2dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((*(int *)(unaff_EBP + -0x2c) != 0) &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x2c) + 0xc), piVar1 != (int *)0x0)) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall(uVar4);
      (*pcVar2)();
    }
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dd61(void)

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
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dda0(void)

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



void Unwind_00f2dda8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2ddf0(void)

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
  piVar1 = *(int **)(unaff_EBP + 0x58);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0x34),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x58) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2ddf8(void)

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
  piVar1 = *(int **)(unaff_EBP + 0x30);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0xc),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2de00(void)

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



void Unwind_00f2de08(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
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



void Unwind_00f2de10(void)

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
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2de18(void)

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
  
  puStack_c = &DAT_00f2e2dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((*(int *)(unaff_EBP + -0x28) != 0) &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x28) + 0xc), piVar1 != (int *)0x0)) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall(uVar4);
      (*pcVar2)();
    }
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2de20(void)

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
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2de28(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x30);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0xc));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
  }
  return;
}



void Unwind_00f2de30(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x58);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 0x34));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x58) = 0;
  }
  return;
}



void Unwind_00f2de70(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x10);
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



void Unwind_00f2de78(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
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



void Unwind_00f2de80(void)

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



void Unwind_00f2de88(void)

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



void Unwind_00f2dec0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x58);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00775520(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dec8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x58);
    puStack_c = &DAT_00f1ee5d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00775520(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
    func_0x008ab812(*piVar1,0x2c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



uint Unwind_00f2dee1(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x34) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffd;
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



void Unwind_00f2defa(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x54);
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2df13(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x54);
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2df2c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xffffffef;
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



void Unwind_00f2df48(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xffffffdf;
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



void Unwind_00f2df61(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xffffffbf;
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



void Unwind_00f2dfb0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00533600(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2dfb8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x5c);
    puStack_c = &DAT_00ebd3dd;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00533600(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
    func_0x008ab812(*piVar1,0x40);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



uint Unwind_00f2dfd1(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x34) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffd;
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



void Unwind_00f2dfea(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xbc);
  if (0xf < *(uint *)(unaff_EBP + -0xa8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa8));
  }
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2dff5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffb;
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



void Unwind_00f2e00e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffff7;
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



void Unwind_00f2e027(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0xa4);
    if (0xf < *(uint *)(unaff_EBP + -0x90)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x90));
    }
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2e043(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xffffffdf;
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



void Unwind_00f2e05c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
    if (0xf < *(uint *)(unaff_EBP + -0x78)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x78));
    }
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



uint Unwind_00f2e0b0(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x1c) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2e100(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x40,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e108(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec0d6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x40,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e110(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec0cf5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x004ea6a0(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x40);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e118(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec0d6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x40,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e120(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x40,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f2e150(void)

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



void Unwind_00f2e190(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x10160);
  return;
}



uint Unwind_00f2e1a2(void)

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



void Unwind_00f2e1bb(void)

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



void Unwind_00f2e1c3(void)

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



void Unwind_00f2e1f0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x24),0x10150);
  return;
}



void Unwind_00f2e202(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2e20a(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3,uVar4);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e212(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2e21a(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x30);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3,uVar4);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f2e222(void)

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
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x28) + 4);
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



void Unwind_00f2e23b(void)

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



void Unwind_00f2e270(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e278(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f1f3ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c,uVar1,unaff_EBP + -0x18,unaff_EBP + -0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e280(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x34);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2e288(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x34);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5],uVar2);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e290(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f1f37d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 0x10);
    uStack_8 = 0;
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x24),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0xf;
    *(undefined1 *)puVar3 = 0;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e298(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f1f3ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c,uVar1,unaff_EBP + -0x18,unaff_EBP + -0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e2a0(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e2d0(void)

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
    func_0x008ab812(iVar1,0x10,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2e320(void)

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



void Unwind_00f2e328(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcb8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634700(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e333(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcab5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e33e(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xe4);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xc0),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xe4) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e34c(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0x10c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xe8),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x10c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e35a(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x110);
  puStack_c = &DAT_00f2dbdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00821940(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e368(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x1011c);
  puStack_c = &DAT_00eb18ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0049a600(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e376(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x10124);
  puStack_c = &DAT_00eb18ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0049a600(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e384(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0049a600(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e38c(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0049a600(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e394(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00821940(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e39c(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2e3a4(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f2e3ac(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcd3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f2e3b4(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int extraout_EAX;
  int iVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar5 = *(int **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edce96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 1;
  iVar7 = *piVar5;
  func_0x0062f760(piVar5 + 1,uVar6);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  piVar4 = piVar5 + 6;
  if (*(int **)(iVar7 + 0x40) == piVar5 + 1) {
    *(int *)(iVar7 + 0x40) = *piVar4;
  }
  piVar1 = piVar5 + 7;
  if (piVar5[7] != 0) {
    *(int *)(*piVar1 + 0x14) = *piVar4;
  }
  if (*piVar4 != 0) {
    *(int *)(*piVar4 + 0x18) = *piVar1;
  }
  *piVar4 = 0;
  *piVar1 = 0;
  iStack_8._0_1_ = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar7 = extraout_EAX;
  if (piVar5[0x15] != 0) {
    pcVar3 = *(code **)piVar5[0x14];
    _guard_check_icall(piVar5 + 0x11);
    iVar7 = (*pcVar3)();
  }
  iStack_8 = 0xffffffff;
  piVar4 = (int *)piVar5[4];
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar5 = piVar4 + 1;
    iVar2 = *piVar5;
    iVar7 = *piVar5;
    *piVar5 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar7 = (*pcVar3)();
      LOCK();
      piVar5 = piVar4 + 2;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar7 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void Unwind_00f2e3bc(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edcd9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if ((char)piVar2[4] != '\0') {
    func_0x006364a0(*piVar2 + 0x14,piVar2 + 5,0xffffffff,uVar3);
    *(undefined1 *)(piVar2 + 4) = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (piVar2[0xe] != 0) {
    pcVar1 = *(code **)piVar2[0xd];
    _guard_check_icall(piVar2 + 10);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x004694a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e3c4(void)

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



int * Unwind_00f2e3f0(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f2e3f8(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcb8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634700(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e403(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcab5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e40e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edca7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006345f0(uVar2,iVar1 + 0xb8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e41c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0xe4);
  if (0xf < *(uint *)(iVar1 + 0xf8)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0xf8));
  }
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2e42a(void)

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
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004a5fa0(uVar2);
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x10100),0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e438(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x10138);
  if (0xf < *(uint *)(iVar1 + 0x1014c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x1014c));
  }
  *(undefined4 *)(iVar1 + 0x10148) = 0;
  *(undefined4 *)(iVar1 + 0x1014c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



int Unwind_00f2e446(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edcd0b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar6 = func_0x0057fe40(uVar5);
  uStack_8 = uStack_8 & 0xffffff00;
  if (*(int *)(iVar4 + 0x1c) != 0) {
    pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x18);
    _guard_check_icall(iVar4 + 0xc);
    iVar6 = (*pcVar2)();
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar4 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar4 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar2 = *(code **)*piVar3;
      _guard_check_icall();
      iVar6 = (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void Unwind_00f2e44e(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcd3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f2e456(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int extraout_EAX;
  int iVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar5 = *(int **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edce96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 1;
  iVar7 = *piVar5;
  func_0x0062f760(piVar5 + 1,uVar6);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  piVar4 = piVar5 + 6;
  if (*(int **)(iVar7 + 0x40) == piVar5 + 1) {
    *(int *)(iVar7 + 0x40) = *piVar4;
  }
  piVar1 = piVar5 + 7;
  if (piVar5[7] != 0) {
    *(int *)(*piVar1 + 0x14) = *piVar4;
  }
  if (*piVar4 != 0) {
    *(int *)(*piVar4 + 0x18) = *piVar1;
  }
  *piVar4 = 0;
  *piVar1 = 0;
  iStack_8._0_1_ = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar7 = extraout_EAX;
  if (piVar5[0x15] != 0) {
    pcVar3 = *(code **)piVar5[0x14];
    _guard_check_icall(piVar5 + 0x11);
    iVar7 = (*pcVar3)();
  }
  iStack_8 = 0xffffffff;
  piVar4 = (int *)piVar5[4];
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar5 = piVar4 + 1;
    iVar2 = *piVar5;
    iVar7 = *piVar5;
    *piVar5 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar7 = (*pcVar3)();
      LOCK();
      piVar5 = piVar4 + 2;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar7 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void Unwind_00f2e45e(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00edcd9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if ((char)piVar2[4] != '\0') {
    func_0x006364a0(*piVar2 + 0x14,piVar2 + 5,0xffffffff,uVar3);
    *(undefined1 *)(piVar2 + 4) = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (piVar2[0xe] != 0) {
    pcVar1 = *(code **)piVar2[0xd];
    _guard_check_icall(piVar2 + 10);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x004694a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e466(void)

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



void Unwind_00f2e490(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00f2e4c0(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x20));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e4c8(void)

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



void Unwind_00f2e4d0(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x20));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e500(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x128) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x128) = *(uint *)(unaff_EBP + -0x128) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x13c);
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



void Unwind_00f2e590(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x128) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x128) = *(uint *)(unaff_EBP + -0x128) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x13c);
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



void Unwind_00f2e5b2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x128) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x128) = *(uint *)(unaff_EBP + -0x128) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x13c);
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



void Unwind_00f2e610(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00826ca0(&DAT_0145e054,*(undefined4 *)(DAT_0145e054 + 4),uVar1);
  func_0x008ab812(DAT_0145e054,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e640(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00821940(&DAT_0145de98,*(undefined4 *)(DAT_0145de98 + 4),uVar1);
  func_0x008ab812(DAT_0145de98,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f2e670(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x1c) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2e689(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x34);
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



int * Unwind_00f2e691(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x34);
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



void Unwind_00f2e699(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e6a1(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e6a9(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e6b1(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffb;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00f2e6ca(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffff7;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00f2e6e3(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



int * Unwind_00f2e6eb(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xffffffef;
    puStack_c = &DAT_00ee11d5;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    piVar6 = &iStack_10;
    *unaff_FS_OFFSET = (int)piVar6;
    uStack_8 = 0xffffffff;
    piVar3 = *(int **)(unaff_EBP + -0x28);
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
  return (int *)0x0;
}



void Unwind_00f2e704(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x3c) + 4);
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



int * Unwind_00f2e70c(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x28);
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



int * Unwind_00f2e714(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x28);
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



void Unwind_00f2e71c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x20) + 4);
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



void Unwind_00f2e724(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e72c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x34);
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



void Unwind_00f2e760(void)

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



void Unwind_00f2e768(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x34);
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



int * Unwind_00f2e770(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x34);
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



void Unwind_00f2e778(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e780(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e788(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e790(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00f2e7a9(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffb;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00f2e7c2(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



int * Unwind_00f2e7ca(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffff7;
    puStack_c = &DAT_00ee11d5;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    piVar6 = &iStack_10;
    *unaff_FS_OFFSET = (int)piVar6;
    uStack_8 = 0xffffffff;
    piVar3 = *(int **)(unaff_EBP + -0x28);
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
  return (int *)0x0;
}



void Unwind_00f2e7e3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x3c) + 4);
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



int * Unwind_00f2e7eb(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x28);
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



int * Unwind_00f2e7f3(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x28);
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



void Unwind_00f2e7fb(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x20) + 4);
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



void Unwind_00f2e803(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f2e80b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x34);
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



void Unwind_00f2e840(void)

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



void Unwind_00f2e84b(void)

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



void Unwind_00f2e86d(void)

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



void Unwind_00f2e8c0(void)

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



void Unwind_00f2e8c8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puStack_c = &DAT_00edf728;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x0052b260(uVar1,unaff_EBP + -0x44,unaff_EBP + -0x44);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f2e8e1(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x20) + 4);
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



int * Unwind_00f2e8e9(void)

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
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int * Unwind_00f2e8f4(void)

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
  puStack_c = &DAT_00ebc668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int * Unwind_00f2e8fc(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ebc668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00f2e907(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,unaff_EBP + -0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e90f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,unaff_EBP + -0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2e917(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ebc668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int * Unwind_00f2e922(void)

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
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00f2e92d(void)

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



void Unwind_00f2e960(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edca7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006345f0(uVar1,unaff_EBP + -0xd0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e96b(void)

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



void Unwind_00f2e973(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x74);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e97b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x74);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f2e983(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00edcd0b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar6 = func_0x0057fe40(uVar5);
  uStack_8 = uStack_8 & 0xffffff00;
  if (*(int *)(unaff_EBP + -0xb4) != 0) {
    pcVar3 = (code *)**(undefined4 **)(unaff_EBP + -0xb8);
    _guard_check_icall(unaff_EBP + -0xc4);
    iVar6 = (*pcVar3)();
  }
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(unaff_EBP + -200);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



uint Unwind_00f2e98e(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x84) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x84) = *(uint *)(unaff_EBP + -0x84) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00f2e9ad(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x88);
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



int * Unwind_00f2e9b8(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x88);
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



void Unwind_00f2e9c3(void)

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



void Unwind_00f2e9ce(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa8);
  if (0xf < *(uint *)(unaff_EBP + -0x94)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x94));
  }
  *(undefined4 *)(unaff_EBP + -0x98) = 0;
  *(undefined4 *)(unaff_EBP + -0x94) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2e9d9(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0aab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2e9e1(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x88);
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



int * Unwind_00f2ea20(void)

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
  puStack_c = &DAT_00ee2665;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x10);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00f2ea2b(void)

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



int Unwind_00f2ea33(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int extraout_EAX;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edce96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 1;
  iVar6 = *(int *)(unaff_EBP + -0xf8);
  func_0x0062f760(unaff_EBP + -0xf4,uVar5);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x28));
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  piVar1 = (int *)(unaff_EBP + -0xe0);
  if (*(int *)(iVar6 + 0x40) == unaff_EBP + -0xf4) {
    *(int *)(iVar6 + 0x40) = *piVar1;
  }
  piVar2 = (int *)(unaff_EBP + -0xdc);
  if (*(int *)(unaff_EBP + -0xdc) != 0) {
    *(int *)(*piVar2 + 0x14) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 0x18) = *piVar2;
  }
  *piVar1 = 0;
  *piVar2 = 0;
  iStack_8._0_1_ = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x28));
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar6 = extraout_EAX;
  if (*(int *)(unaff_EBP + -0xa4) != 0) {
    pcVar4 = (code *)**(undefined4 **)(unaff_EBP + -0xa8);
    _guard_check_icall(unaff_EBP + -0xb4);
    iVar6 = (*pcVar4)();
  }
  iStack_8 = 0xffffffff;
  piVar1 = *(int **)(unaff_EBP + -0xe8);
  if (piVar1 != (int *)0x0) {
