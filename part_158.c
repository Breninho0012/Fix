  }
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a0c9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0xf8);
    if (0xf < *(uint *)(unaff_EBP + -0xe4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xe4));
    }
    *(undefined4 *)(unaff_EBP + -0xe8) = 0;
    *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3a0eb(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x88);
  if (iVar1 != 0) {
    func_0x004aaee0(iVar1,(*(int *)(unaff_EBP + -0x80) - iVar1 >> 2) * -0x55555555);
    *(int *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  return;
}



void Unwind_00f3a130(void)

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



void Unwind_00f3a138(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
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



void Unwind_00f3a140(void)

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



void Unwind_00f3a148(void)

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



void Unwind_00f3a150(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  if (0xf < *(uint *)(unaff_EBP + -100)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a15b(void)

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



void Unwind_00f3a190(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x0085ebb0(unaff_EBP + -0x30);
    func_0x0085e810(*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  }
  return;
}



void Unwind_00f3a198(void)

{
  int unaff_EBP;
  
  func_0x0085ebb0(unaff_EBP + -0x1c);
  return;
}



void Unwind_00f3a1a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3a1e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x0085efb0(unaff_EBP + -0x24);
    func_0x005a88e0(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00f3a220(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3a250(void)

{
  int unaff_EBP;
  
  func_0x0085ebb0(unaff_EBP + -0x1c);
  return;
}



void Unwind_00f3a290(void)

{
  int unaff_EBP;
  
  func_0x0085efb0(unaff_EBP + -0x1c);
  return;
}



void Unwind_00f3a2d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a300(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -200) & 1) != 0) {
    *(uint *)(unaff_EBP + -200) = *(uint *)(unaff_EBP + -200) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar1 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar1 = std::ios_base::vftable;
    func_0x00e706cb(puVar1,uVar2,puVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f3a31f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc4) + 4) + -0x20 + unaff_EBP + -0xa4) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc4) + 4);
  *(int *)(iVar2 + -0x24 + unaff_EBP + -0xa4) = iVar2 + -0x20;
  iVar2 = unaff_EBP + -0xac;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb4) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xb4) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc4) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xc4) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f3a32a(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -0xac) = std::basic_stringbuf<>::vftable;
  uStack_8 = 0;
  if ((*(byte *)(unaff_EBP + -0x70) & 1) != 0) {
    if (**(int **)(unaff_EBP + -0x8c) == 0) {
      iVar2 = **(int **)(unaff_EBP + -0x80) + **(int **)(unaff_EBP + -0x90);
    }
    else {
      iVar2 = **(int **)(unaff_EBP + -0x7c) + **(int **)(unaff_EBP + -0x8c);
    }
    func_0x0046aa00(**(int **)(unaff_EBP + -0xa0),iVar2 - **(int **)(unaff_EBP + -0xa0),uVar1);
  }
  **(undefined4 **)(unaff_EBP + -0xa0) = 0;
  **(undefined4 **)(unaff_EBP + -0x90) = 0;
  **(undefined4 **)(unaff_EBP + -0x80) = 0;
  **(undefined4 **)(unaff_EBP + -0x9c) = 0;
  **(undefined4 **)(unaff_EBP + -0x8c) = 0;
  **(undefined4 **)(unaff_EBP + -0x7c) = 0;
  *(uint *)(unaff_EBP + -0x70) = *(uint *)(unaff_EBP + -0x70) & 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a335(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc4) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc4) + 4);
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



void Unwind_00f3a370(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc4) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc4) + 4);
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



void Unwind_00f3a37b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -200) & 2) != 0) {
    *(uint *)(unaff_EBP + -200) = *(uint *)(unaff_EBP + -200) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xcc);
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



void Unwind_00f3a39d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -200) & 1) != 0) {
    *(uint *)(unaff_EBP + -200) = *(uint *)(unaff_EBP + -200) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xcc);
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



void Unwind_00f3a3f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
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



void Unwind_00f3a430(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x28) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
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



void Unwind_00f3a470(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
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



void Unwind_00f3a4b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xac) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xac) = *(uint *)(unaff_EBP + -0xac) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xb0);
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



void Unwind_00f3a4d2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xac) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xac) = *(uint *)(unaff_EBP + -0xac) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xb0);
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



void Unwind_00f3a530(void)

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



void Unwind_00f3a538(void)

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



void Unwind_00f3a570(void)

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



void Unwind_00f3a57b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xb4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xb4) = *(uint *)(unaff_EBP + -0xb4) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xb8);
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



void Unwind_00f3a5d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xf8);
  if (0xf < *(uint *)(unaff_EBP + -0xe4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xe4));
  }
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a5db(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xe0);
  if (0xf < *(uint *)(unaff_EBP + -0xcc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xcc));
  }
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a5e6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x8c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x8c) = *(uint *)(unaff_EBP + -0x8c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -200);
    if (0xf < *(uint *)(unaff_EBP + -0xb4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb4));
    }
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
    *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3a608(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x8c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x8c) = *(uint *)(unaff_EBP + -0x8c) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
    if (0xf < *(uint *)(unaff_EBP + -0x9c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9c));
    }
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
    *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3a62a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x8c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x8c) = *(uint *)(unaff_EBP + -0x8c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x98);
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



void Unwind_00f3a680(void)

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



void Unwind_00f3a688(void)

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



void Unwind_00f3a690(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x68);
  if (0xf < *(uint *)(unaff_EBP + -0x54)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x54));
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a698(void)

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



void Unwind_00f3a6a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x6c);
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



void Unwind_00f3a6f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  if (0xf < *(uint *)(unaff_EBP + -0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a6f8(void)

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



void Unwind_00f3a700(void)

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



void Unwind_00f3a708(void)

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



void Unwind_00f3a710(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x7c);
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



void Unwind_00f3a760(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xb0);
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



void Unwind_00f3a7c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xb4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xb4) = *(uint *)(unaff_EBP + -0xb4) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xc0);
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



void Unwind_00f3a820(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
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



void Unwind_00f3a860(void)

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



void Unwind_00f3a868(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -100);
    if (0xf < *(uint *)(unaff_EBP + -0x50)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x50));
    }
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3a8b0(void)

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
  func_0x00870ad0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a8b8(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x10);
  puStack_c = &DAT_00f3a94d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00870ad0(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a8c3(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = *(int *)(iVar2 + 0x28);
  if (iVar6 != 0) {
    do {
      iVar6 = iVar6 + -1;
      *(int *)(iVar2 + 0x28) = iVar6;
    } while (iVar6 != 0);
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  if (*(int *)(iVar2 + 0x1c) != 0) {
    iVar6 = *(int *)(iVar2 + 0x20);
    while (0 < iVar6) {
      iVar6 = iVar6 + -1;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x1c) + iVar6 * 4);
      if (iVar4 != 0) {
        func_0x008ab812(iVar4,0x10,uVar3);
      }
    }
    iVar6 = *(int *)(iVar2 + 0x1c);
    uVar5 = *(int *)(iVar2 + 0x20) * 4;
    iVar4 = iVar6;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar6 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar6 - iVar4) - 4U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(iVar4,uVar5,uVar3);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(iVar2 + 0x18) = 0;
  func_0x008ab812(uVar1,8,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a8ce(void)

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



void Unwind_00f3a8d6(void)

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



void Unwind_00f3a8de(void)

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



void Unwind_00f3a8e6(void)

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



void Unwind_00f3a8ee(void)

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



void Unwind_00f3a8f6(void)

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



void Unwind_00f3a8fe(void)

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



void Unwind_00f3a906(void)

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



void Unwind_00f3a90e(void)

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



void Unwind_00f3a940(void)

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
  func_0x00870ad0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a970(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3a94d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00870ad0(&DAT_0145efd0,*(undefined4 *)(DAT_0145efd0 + 4),uVar1);
  func_0x008ab812(DAT_0145efd0,0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00f3a97a(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (_DAT_0145efe8 != 0) {
    do {
      _DAT_0145efe8 = _DAT_0145efe8 + -1;
    } while (_DAT_0145efe8 != 0);
    _DAT_0145efe4 = 0;
    _DAT_0145efe8 = 0;
  }
  iVar5 = _DAT_0145efe0;
  if (_DAT_0145efdc != 0) {
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      iVar1 = *(int *)(_DAT_0145efdc + iVar5 * 4);
      if (iVar1 != 0) {
        func_0x008ab812(iVar1,0x10,uVar3);
      }
    }
    uVar4 = _DAT_0145efe0 * 4;
    iVar5 = _DAT_0145efdc;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(_DAT_0145efdc + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (_DAT_0145efdc - iVar5) - 4U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(iVar5,uVar4,uVar3);
    _DAT_0145efdc = 0;
    _DAT_0145efe0 = 0;
  }
  uVar2 = _DAT_0145efd8;
  _DAT_0145efd8 = 0;
  func_0x008ab812(uVar2,8,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a984(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00870ad0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a9b0(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x44,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a9b8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3aa6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x44,uVar1,unaff_EBP + -0x1c,unaff_EBP + -0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a9c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x30);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a9c8(void)

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



void Unwind_00f3a9d0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puVar3 = (undefined4 *)(iVar1 + 0x18);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x2c),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a9db(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f3aab0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = puVar2 + 6;
  uStack_8 = 0;
  if (0xf < (uint)puVar2[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0xb],uVar3);
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar2[5]) {
    func_0x0046b1f0(puVar2,*puVar2,puVar2[5],uVar3);
  }
  puVar2[4] = 0;
  puVar2[5] = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a9e3(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3aa35;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x00870b50(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x44);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a9eb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3aa6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x44,uVar1,unaff_EBP + -0x1c,unaff_EBP + -0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a9f3(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x44,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3aa20(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f3aa6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar1 + 4) != 0) {
    func_0x008ab812(*(int *)(iVar1 + 4),0x44,uVar2,iVar1,iVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3aa28(void)

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
    func_0x008ab812(iVar1,0x44,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3aa60(void)

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
    func_0x008ab812(iVar1,0x44,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3aa90(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3aa98(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x18);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x2c),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3aaa3(void)

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



void Unwind_00f3aad0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x78) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x78) = *(uint *)(unaff_EBP + -0x78) & 0xfffffffe;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x90);
    puStack_c = &DAT_00ec972d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x005b5ee0(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f3aaec(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x24);
  if (*piVar1 != 0) {
    func_0x0085efb0(*piVar1);
    func_0x005a88e0(*piVar1,*(int *)(unaff_EBP + -0x1c) - *piVar1 >> 5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f3aaf4(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x88) != 0) {
    func_0x005a88e0(*(int *)(unaff_EBP + -0x88),*(undefined4 *)(unaff_EBP + -0x84));
  }
  return;
}



void Unwind_00f3aaff(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3ab07(void)

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



void Unwind_00f3ab0f(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x50),0x24,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ab17(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x94);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3ab25(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec9ad8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x50);
  if (iVar2 != 0) {
    uStack_8 = 0;
    puVar1 = (undefined4 *)(iVar2 + 0xc);
    if (0xf < *(uint *)(iVar2 + 0x20)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x20),uVar3);
    }
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x50),0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ab60(void)

{
  int unaff_EBP;
  
  func_0x0085efb0(unaff_EBP + -0x1c);
  return;
}



void Unwind_00f3ab68(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3aba0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3aba8(void)

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



void Unwind_00f3abe0(void)

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
  if (iRam0145f1ac != 0) {
    func_0x0046ac90(iRam0145f1ac,iRam0145f1b4 - iRam0145f1ac >> 2,uVar1);
    iRam0145f1ac = 0;
    uRam0145f1b0 = 0;
    iRam0145f1b4 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145f1a4,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ac10(void)

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
    func_0x00877890(uVar3);
    func_0x008ab812(puVar1,0x48);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x48);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ac1b(void)

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



void Unwind_00f3ac26(void)

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
  puStack_c = &DAT_00f3adfb;
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
  func_0x008769d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ac2e(void)

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
  puStack_c = &DAT_00f3ad33;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x008769d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ac36(void)

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
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0xc,uVar3);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0xc,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ac70(void)

{
  func_0x008ab4ad(&DAT_0145eff8,0x30,7,FUN_00873cf0);
  return;
}



void Unwind_00f3ac84(void)

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
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x004ea500(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x14);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ac8c(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3adbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00876880(uVar1,&DAT_0145f148);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3acc0(void)

{
  func_0x008ab4ad(&DAT_0145eff8,0x30,7,FUN_00873cf0);
  return;
}



void Unwind_00f3acd4(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3adbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00876880(uVar1,&DAT_0145f148);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3acde(void)

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
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x004ea500(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x14);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ad10(void)

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
  puStack_c = &DAT_00f3adfb;
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
  func_0x008769d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ad18(void)

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
    func_0x00877890(uVar3);
    func_0x008ab812(puVar1,0x48);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x48);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ad23(void)

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



void Unwind_00f3ad50(void)

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
  puStack_c = &DAT_00f3ad33;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x008769d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ad58(void)

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
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0xc,uVar3);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0xc,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ad63(void)

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
  puStack_c = &DAT_00f3adfb;
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
  func_0x008769d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ad6b(void)

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
    func_0x00877890(uVar3);
    func_0x008ab812(puVar1,0x48);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x48);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ad76(void)

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



void Unwind_00f3adb0(void)

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
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x004ea500(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x14);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ade0(void)

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
    func_0x00877890(uVar3);
    func_0x008ab812(puVar1,0x48);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x48);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3adeb(void)

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



void Unwind_00f3ae20(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f3ae28(void)

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



void Unwind_00f3ae30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ae38(void)

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



void Unwind_00f3ae40(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0xc,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ae48(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec290d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0xc,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ae50(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0xc,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ae80(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 8);
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x1c));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3ae8b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3aec0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x118));
  return;
}



void Unwind_00f3aecb(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x0049a500(piVar1,piVar4[2],uVar5);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3aed3(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb1a3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00499750(uVar1,unaff_EBP + -0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3aedb(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x84);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xec) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xec) + 4);
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



void Unwind_00f3aee6(void)

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



void Unwind_00f3aeee(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xf0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xf0) = *(uint *)(unaff_EBP + -0xf0) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x150);
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



void Unwind_00f3af10(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x0049a500(piVar1,piVar4[2],uVar5);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3af18(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x0049a500(piVar1,piVar4[2],uVar5);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3af20(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xf0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xf0) = *(uint *)(unaff_EBP + -0xf0) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x150);
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



void Unwind_00f3af80(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f3afb0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x108));
  return;
}



void Unwind_00f3afbb(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd8) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd8) + 4);
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



void Unwind_00f3afc6(void)

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



void Unwind_00f3afce(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xdc) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xdc) = *(uint *)(unaff_EBP + -0xdc) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x130);
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



void Unwind_00f3aff0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xdc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xdc) = *(uint *)(unaff_EBP + -0xdc) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x130);
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



void Unwind_00f3b050(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x14,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b058(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb583d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x14,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b060(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecb755;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x14,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b068(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb583d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x14,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b070(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x14,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b0a0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x28) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab880;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    func_0x00792a10(uVar2);
    uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    func_0x008ab812(uVar1,8);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f3b0b9(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x28) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffd;
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab880;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    func_0x00792a10(uVar2);
    uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    func_0x008ab812(uVar1,8);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f3b0d2(void)

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



int Unwind_00f3b0da(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b168;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar6 = func_0x00876660(uVar5);
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x40);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      iVar6 = (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void Unwind_00f3b0e2(void)

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
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x48),0x1c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b0ea(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -100) + 4);
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



void Unwind_00f3b0f2(void)

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
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -100) + 0xc);
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
    func_0x00875530(uVar3);
    func_0x008ab812(puVar1,0x1c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b0fd(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb124d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x00875530(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x48),0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b105(void)

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
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x48),0x1c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b10d(void)

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



void Unwind_00f3b115(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x00875530(uVar3);
    func_0x008ab812(puVar1,0x1c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*(int *)(unaff_EBP + -0x38),0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b150(void)

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



void Unwind_00f3b158(void)

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
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xc);
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
    func_0x00875530(uVar3);
    func_0x008ab812(puVar1,0x1c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b190(void)

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



void Unwind_00f3b198(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3b1e0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x48);
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



int Unwind_00f3b1e8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b168;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar6 = func_0x00876660(uVar5);
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x48);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      iVar6 = (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void Unwind_00f3b1f0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008777e0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b1f8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f3b3dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x008777e0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b200(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f3b3dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x008777e0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b208(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x100) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0x168);
    if (0xf < *(uint *)(unaff_EBP + -0x154)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x154));
    }
    *(undefined4 *)(unaff_EBP + -0x158) = 0;
    *(undefined4 *)(unaff_EBP + -0x154) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



uint Unwind_00f3b22f(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x100) & 0x40;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xffffffbf;
  piVar5 = *(int **)(unaff_EBP + -0x134);
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



void Unwind_00f3b251(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x100) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x120);
    if (0xf < *(uint *)(unaff_EBP + -0x10c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10c));
    }
    *(undefined4 *)(unaff_EBP + -0x110) = 0;
    *(undefined4 *)(unaff_EBP + -0x10c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



uint Unwind_00f3b273(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x100) & 0x20;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xffffffdf;
  piVar5 = *(int **)(unaff_EBP + -0x13c);
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



void Unwind_00f3b295(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xfc) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xfc) + 4);
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



void Unwind_00f3b2a0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x28);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00877720(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b2a8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00f3b40d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00877720(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b2b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x100) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x124);
    puStack_c = &DAT_00eac66d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (0xf < *(uint *)(unaff_EBP + -0x110)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x110),uVar2);
    }
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
    *(undefined4 *)(unaff_EBP + -0x110) = 0xf;
    *(undefined1 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f3b2d2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x124);
  if (0xf < *(uint *)(unaff_EBP + -0x110)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x110));
  }
  *(undefined4 *)(unaff_EBP + -0x114) = 0;
  *(undefined4 *)(unaff_EBP + -0x110) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b2dd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x124);
  if (0xf < *(uint *)(unaff_EBP + -0x110)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x110));
  }
  *(undefined4 *)(unaff_EBP + -0x114) = 0;
  *(undefined4 *)(unaff_EBP + -0x110) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b2e8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00877720(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b2f0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00f3b40d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00877720(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b2f8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x100) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x124);
    puStack_c = &DAT_00eac66d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (0xf < *(uint *)(unaff_EBP + -0x110)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x110),uVar2);
    }
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
    *(undefined4 *)(unaff_EBP + -0x110) = 0xf;
    *(undefined1 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f3b31a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x124);
  if (0xf < *(uint *)(unaff_EBP + -0x110)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x110));
  }
  *(undefined4 *)(unaff_EBP + -0x114) = 0;
  *(undefined4 *)(unaff_EBP + -0x110) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b325(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x124);
  if (0xf < *(uint *)(unaff_EBP + -0x110)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x110));
  }
  *(undefined4 *)(unaff_EBP + -0x114) = 0;
  *(undefined4 *)(unaff_EBP + -0x110) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b330(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x100) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x16c);
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



void Unwind_00f3b352(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x100) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x100) = *(uint *)(unaff_EBP + -0x100) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x16c);
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



void Unwind_00f3b374(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00877720(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b37c(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x28);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00877720(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b384(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x38);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008777e0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b38c(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008777e0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b3d0(void)

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
  func_0x008777e0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b400(void)

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
  func_0x00877720(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b430(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008777e0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b490(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x48,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b498(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b4a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b4ab(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ed1290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 0x28);
  if (0xf < *(uint *)(iVar2 + 0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x3c),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b4b6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x00877890(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b4be(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x48,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b4f0(void)

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



void Unwind_00f3b4f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb2ebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b500(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb2e25;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b508(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb2ebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b510(void)

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



void Unwind_00f3b540(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b548(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1,unaff_EBP + -0x20,unaff_EBP + -0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b550(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b558(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x28);
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



void Unwind_00f3b563(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b748;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 0x14);
    uStack_8 = 0;
    if (0xf < *(uint *)(iVar2 + 0x28)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x28),uVar3);
    }
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b56b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1,unaff_EBP + -0x20,unaff_EBP + -0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b573(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b5a0(void)

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
    func_0x008ab812(iVar1,0x48,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b5d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x30);
  if (iVar3 == 0) {
    return;
  }
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(uint *)(iVar3 + 8) != 0) {
    iStack_14 = iVar3;
    if (*(uint *)(iVar3 + 8) < *(uint *)(iVar3 + 0x1c) >> 3) {
      func_0x00876ac0(**(undefined4 **)(iVar3 + 4),*(undefined4 **)(iVar3 + 4));
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puVar1 = *(undefined4 **)(iVar3 + 4);
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)*puVar1;
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      func_0x00877890(uVar4);
      func_0x008ab812(puVar1,0x48);
      puVar1 = puVar2;
    }
    *(undefined4 *)*(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 4);
    *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 8) = 0;
    iStack_14 = *(int *)(iVar3 + 4);
    func_0x0046c050(&iStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b600(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b608(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1,unaff_EBP + -0x20,unaff_EBP + -0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b610(void)

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



void Unwind_00f3b618(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b6fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x1c);
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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b620(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1,unaff_EBP + -0x20,unaff_EBP + -0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b628(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x30,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b660(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
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



void Unwind_00f3b66b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b6a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b6a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ed1290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 0x28);
  if (0xf < *(uint *)(iVar2 + 0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x3c),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b6b3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b6e0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar1 + 4) != 0) {
    func_0x008ab812(*(int *)(iVar1 + 4),0x30,uVar2,iVar1,iVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b6e8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3b6f0(void)

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
    func_0x008ab812(iVar1,0x30,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b720(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar1 + 4) != 0) {
    func_0x008ab812(*(int *)(iVar1 + 4),0x30,uVar2,iVar1,iVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b728(void)

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



void Unwind_00f3b733(void)

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



void Unwind_00f3b73b(void)

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
    func_0x008ab812(iVar1,0x30,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b770(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = TiXmlBase::vftable;
  return;
}



void Unwind_00f3b778(void)

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



void Unwind_00f3b783(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x2c);
  if (0xf < *(uint *)(iVar1 + 0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x40));
  }
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b7b0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = TiXmlBase::vftable;
  return;
}



void Unwind_00f3b7b8(void)

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



void Unwind_00f3b7c3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x2c);
  if (0xf < *(uint *)(iVar1 + 0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x40));
  }
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b7f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b820(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b850(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b880(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b8b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b8b8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x40);
  if (0xf < *(uint *)(iVar1 + 0x54)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x54));
  }
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b8c3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x58);
  if (0xf < *(uint *)(iVar1 + 0x6c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x6c));
  }
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b8ce(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x70);
  if (0xf < *(uint *)(iVar1 + 0x84)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x84));
  }
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b900(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b908(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x40);
  if (0xf < *(uint *)(iVar1 + 0x54)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x54));
  }
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b913(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x58);
  if (0xf < *(uint *)(iVar1 + 0x6c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x6c));
  }
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b91e(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x70);
  if (0xf < *(uint *)(iVar1 + 0x84)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x84));
  }
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b950(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = TiXmlBase::vftable;
  return;
}



void Unwind_00f3b958(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b990(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = TiXmlBase::vftable;
  return;
}



void Unwind_00f3b998(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3b9d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b9d8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f3b7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = puVar2 + 0xb;
  if (0xf < (uint)puVar2[0x10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0x10],uVar3);
  }
  puVar2[0xf] = 0;
  puVar2[0x10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar2 + 5;
  if (0xf < (uint)puVar2[10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[10],uVar3);
  }
  puVar2[9] = 0;
  puVar2[10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar2 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3b9e0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3bd2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00877d90(uVar2,iVar1 + 0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ba10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ba18(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3bd2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00877d90(uVar2,iVar1 + 0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ba23(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f3b7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = puVar2 + 0xb;
  if (0xf < (uint)puVar2[0x10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0x10],uVar3);
  }
  puVar2[0xf] = 0;
  puVar2[0x10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar2 + 5;
  if (0xf < (uint)puVar2[10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[10],uVar3);
  }
  puVar2[9] = 0;
  puVar2[10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar2 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3ba50(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x4c);
  return;
}



void Unwind_00f3ba90(void)

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



void Unwind_00f3ba98(void)

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



void Unwind_00f3baa0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x4c);
  return;
}



void Unwind_00f3bae0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x8c);
  return;
}



void Unwind_00f3baf2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3bb0b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bb13(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f3b7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = puVar2 + 0xb;
  if (0xf < (uint)puVar2[0x10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0x10],uVar3);
  }
  puVar2[0xf] = 0;
  puVar2[0x10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar2 + 5;
  if (0xf < (uint)puVar2[10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[10],uVar3);
  }
  puVar2[9] = 0;
  puVar2[10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar2 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bb1b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f3bd2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00877d90(uVar2,iVar1 + 0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bb50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bb58(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x48);
  if (0xf < *(uint *)(iVar1 + 0x5c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x5c));
  }
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3bb90(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x70);
  return;
}



void Unwind_00f3bbd0(void)

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



void Unwind_00f3bbd8(void)

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



void Unwind_00f3bc10(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x40);
  return;
}



void Unwind_00f3bc1f(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bc50(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x44);
  return;
}



void Unwind_00f3bc5f(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bc90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bc98(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x40);
  if (0xf < *(uint *)(iVar1 + 0x54)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x54));
  }
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3bca3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x58);
  if (0xf < *(uint *)(iVar1 + 0x6c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x6c));
  }
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3bcae(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x70);
  if (0xf < *(uint *)(iVar1 + 0x84)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x84));
  }
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f3bce0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x88);
  return;
}



void Unwind_00f3bd20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3b7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = puVar2 + 0xb;
  if (0xf < (uint)puVar2[0x10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0x10],uVar3);
  }
  puVar2[0xf] = 0;
  puVar2[0x10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar2 + 5;
  if (0xf < (uint)puVar2[10]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[10],uVar3);
  }
  puVar2[9] = 0;
  puVar2[10] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar2 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bd50(void)

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



void Unwind_00f3bd90(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x40);
  return;
}



void Unwind_00f3bd9f(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x44);
  return;
}



void Unwind_00f3bdae(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x40);
  return;
}



void Unwind_00f3bdbd(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x40);
  return;
}



void Unwind_00f3bdcc(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x8c);
  return;
}



void Unwind_00f3bdde(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x38);
    if (0xf < *(uint *)(unaff_EBP + -0x24)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24));
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3bdf7(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x88);
  return;
}



void Unwind_00f3be30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(unaff_EBP + -0x54) = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar4);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3be38(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b88d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(unaff_EBP + -0x54) = TiXmlText::vftable;
  uStack_8 = 0xffffffff;
  func_0x008789c0(uVar1,(undefined4 *)(unaff_EBP + -0x54));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3be40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(unaff_EBP + -0x54) = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar4);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3be80(void)

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



void Unwind_00f3be88(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x44),0x4c);
  return;
}



void Unwind_00f3bed0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x44);
  return;
}



void Unwind_00f3bedf(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f3b9a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = TiXmlNode::vftable;
  uStack_8 = 1;
  puVar1 = (undefined4 *)puVar4[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[0xf];
    pcVar3 = *(code **)*puVar1;
    _guard_check_icall(1,uVar5);
    (*pcVar3)();
    puVar1 = puVar2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = puVar4 + 8;
  if (0xf < (uint)puVar4[0xd]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xd]);
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *puVar4 = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bf10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f3b7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined ***)(unaff_EBP + -0x5c) = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bf18(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f3b7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -0x7c);
  if (0xf < *(uint *)(unaff_EBP + -0x68)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x68),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x80),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined ***)(unaff_EBP + -0xa8) = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bf23(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f3b7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -200);
  if (0xf < *(uint *)(unaff_EBP + -0xb4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb4),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0xe0);
  if (0xf < *(uint *)(unaff_EBP + -0xcc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xcc),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined ***)(unaff_EBP + -0xf4) = TiXmlBase::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bf60(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bf68(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb01dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bf70(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3bfa0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x19c);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,piVar1[1],piVar1);
    func_0x004c7ff0(*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}



void Unwind_00f3bfab(void)

{
  int unaff_EBP;
  
  func_0x004e7c10(*(undefined4 *)(unaff_EBP + -0x144),*(undefined4 *)(unaff_EBP + -0x140),
                  *(undefined4 *)(unaff_EBP + -0x13c));
  return;
}



void Unwind_00f3bfb6(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x11c);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0x118),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0x114) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x118) = 0;
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
  }
  return;
}



void Unwind_00f3bfc1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xfffffffb;
    if (*(int *)(unaff_EBP + -0x120) != 0) {
      func_0x008ab812(*(int *)(unaff_EBP + -0x120),1);
    }
    return;
  }
  return;
}



void Unwind_00f3bfe3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x154) != 0) {
                    // WARNING: Could not recover jumptable at 0x005e0856. Too many branches
                    // WARNING: Treating indirect jump as call
    terminate();
    return;
  }
  return;
}



void Unwind_00f3bfee(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3bff9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x138);
  if (0xf < *(uint *)(unaff_EBP + -0x124)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
  }
  *(undefined4 *)(unaff_EBP + -0x128) = 0;
  *(undefined4 *)(unaff_EBP + -0x124) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c004(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x150);
  if (0xf < *(uint *)(unaff_EBP + -0x13c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x13c));
  }
  *(undefined4 *)(unaff_EBP + -0x140) = 0;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c00f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xffffffef;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x19c);
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



void Unwind_00f3c031(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xffffffdf;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x19c);
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



void Unwind_00f3c053(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c05e(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x138);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x124)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x128) = 0;
  *(undefined4 *)(unaff_EBP + -0x124) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c069(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x138);
  if (7 < *(uint *)(unaff_EBP + -0x124)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
  }
  *(undefined4 *)(unaff_EBP + -0x128) = 0;
  *(undefined4 *)(unaff_EBP + -0x124) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f3c074(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (7 < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f3c07f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x170);
  if (0xf < *(uint *)(unaff_EBP + -0x15c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x15c));
  }
  *(undefined4 *)(unaff_EBP + -0x160) = 0;
  *(undefined4 *)(unaff_EBP + -0x15c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c08a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x138);
    if (0xf < *(uint *)(unaff_EBP + -0x124)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
    }
    *(undefined4 *)(unaff_EBP + -0x128) = 0;
    *(undefined4 *)(unaff_EBP + -0x124) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3c0ac(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x150);
  if (0xf < *(uint *)(unaff_EBP + -0x13c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x13c));
  }
  *(undefined4 *)(unaff_EBP + -0x140) = 0;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c0b7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c0c2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x138);
    if (0xf < *(uint *)(unaff_EBP + -0x124)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
    }
    *(undefined4 *)(unaff_EBP + -0x128) = 0;
    *(undefined4 *)(unaff_EBP + -0x124) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3c0e4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -400);
    if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
    }
    *(undefined4 *)(unaff_EBP + -0x180) = 0;
    *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3c106(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xffffff7f;
    if (*(int *)(unaff_EBP + -0x120) != 0) {
      func_0x008ab812(*(int *)(unaff_EBP + -0x120),4);
    }
    return;
  }
  return;
}



void Unwind_00f3c12d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x19c) != 0) {
                    // WARNING: Could not recover jumptable at 0x005e0856. Too many branches
                    // WARNING: Treating indirect jump as call
    terminate();
    return;
  }
  return;
}



void Unwind_00f3c138(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xfffffeff;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x19c);
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



void Unwind_00f3c15f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x174) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x174) = *(uint *)(unaff_EBP + -0x174) & 0xfffffdff;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x19c);
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



void Unwind_00f3c186(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x138);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x124)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x128) = 0;
  *(undefined4 *)(unaff_EBP + -0x124) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c191(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c19c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1a7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x138);
  if (0xf < *(uint *)(unaff_EBP + -0x124)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
  }
  *(undefined4 *)(unaff_EBP + -0x128) = 0;
  *(undefined4 *)(unaff_EBP + -0x124) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1b2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1bd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x138);
  if (0xf < *(uint *)(unaff_EBP + -0x124)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
  }
  *(undefined4 *)(unaff_EBP + -0x128) = 0;
  *(undefined4 *)(unaff_EBP + -0x124) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1d3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1de(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1e9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1f4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x150);
  if (0xf < *(uint *)(unaff_EBP + -0x13c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x13c));
  }
  *(undefined4 *)(unaff_EBP + -0x140) = 0;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c1ff(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
  }
  *(undefined4 *)(unaff_EBP + -0x180) = 0;
  *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c240(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x28));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c248(void)

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



void Unwind_00f3c280(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x10);
  }
  return;
}



void Unwind_00f3c288(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x10);
  }
  return;
}



void Unwind_00f3c2c0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c2c8(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c300(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c308(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c340(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c370(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c3a0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c3a8(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c3e0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c3e8(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c420(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c450(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c458(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c490(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f3c498(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f3c4a0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c4a8(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c4e0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c510(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x18);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c518(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + 0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + 0x1c) = *(uint *)(unaff_EBP + 0x1c) & 0xfffffffe;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x50);
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



void Unwind_00f3c534(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00f3c53f(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c54a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x20);
  if (0xf < *(uint *)(unaff_EBP + 0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x34));
  }
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + 0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c552(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c590(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c598(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c5d0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x40);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c5d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (*(int *)(unaff_EBP + -0x20) != unaff_EBP + -0x30) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f3c5e0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c620(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c628(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c660(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c690(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c698(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar3 = FUN_00472c50(uVar2);
  iVar1 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  func_0x008b9c40(uVar3);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  *(undefined4 *)(iVar1 + 0xa8) = uVar3;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c6a0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c6d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (*(int *)(unaff_EBP + -0x20) != unaff_EBP + -0x30) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f3c710(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (*(int *)(unaff_EBP + -0x20) != unaff_EBP + -0x30) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f3c750(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c758(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar3 = FUN_00472c50(uVar2);
  iVar1 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  func_0x008b9c40(uVar3);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  *(undefined4 *)(iVar1 + 0xa8) = uVar3;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c760(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c790(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x28,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c798(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2751d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x28,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c7a0(void)

{
  func_0x008ab391(&DAT_013dd830);
  return;
}



void Unwind_00f3c7ac(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),8);
  return;
}



void Unwind_00f3c7e0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c7e8(void)

{
  func_0x008ab391(&DAT_013dd83c);
  return;
}



void Unwind_00f3c7f4(void)

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



void Unwind_00f3c7fc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  if (0xf < *(uint *)(unaff_EBP + -0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3c804(void)

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



void Unwind_00f3c840(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar3 = FUN_00472c50(uVar2);
  iVar1 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  func_0x008b9c40(uVar3);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  *(undefined4 *)(iVar1 + 0xa8) = uVar3;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3c848(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c850(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c858(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f3c890(void)

{
  int *piVar1;
  uint uVar2;
