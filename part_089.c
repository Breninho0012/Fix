}



void Unwind_00ed41e9(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x38),100);
  return;
}



uint Unwind_00ed41f8(void)

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
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x54) + 4);
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



void Unwind_00ed4211(void)

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



void Unwind_00ed4219(void)

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



uint Unwind_00ed4250(void)

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



void Unwind_00ed4269(void)

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



void Unwind_00ed4271(void)

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



void Unwind_00ed42a0(void)

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



void Unwind_00ed42a8(void)

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



void Unwind_00ed42e0(void)

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



void Unwind_00ed4310(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
  piVar4 = *(int **)(unaff_EBP + -0x7c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar3 = (undefined4 *)*puVar2;
    if (0xf < (uint)puVar2[7]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar2[7],uVar5);
    }
    puVar2[6] = 0;
    puVar2[7] = 0xf;
    *(undefined1 *)puVar1 = 0;
    func_0x008ab812(puVar2,0x20);
    puVar2 = puVar3;
  }
  func_0x008ab812(*piVar4,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4329(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffd;
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



void Unwind_00ed4342(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed434a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x78);
    if (0xf < *(uint *)(unaff_EBP + -100)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4363(void)

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



void Unwind_00ed436b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x78);
    if (0xf < *(uint *)(unaff_EBP + -100)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4384(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffef;
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



void Unwind_00ed439d(void)

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
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x54),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed43a5(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed272d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(unaff_EBP + -0x54);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x1c),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xf;
    *(undefined1 *)puVar3 = 0;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x54),0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed43ad(void)

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
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x54),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed43b5(void)

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



void Unwind_00ed43c0(void)

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
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x5c),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed43c8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed272d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(unaff_EBP + -0x5c);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x1c),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xf;
    *(undefined1 *)puVar3 = 0;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x5c),0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed43d0(void)

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
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x5c),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4410(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (undefined4 *)(iVar2 + 0xc);
  if (0xf < *(uint *)(iVar2 + 0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x20));
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed441b(void)

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



void Unwind_00ed4423(void)

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



void Unwind_00ed442b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4444(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffff7f;
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



void Unwind_00ed4465(void)

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



void Unwind_00ed446d(void)

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



void Unwind_00ed4475(void)

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



void Unwind_00ed447d(void)

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



void Unwind_00ed4485(void)

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



void Unwind_00ed448d(void)

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



void Unwind_00ed4495(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x48);
    if (0xf < *(uint *)(unaff_EBP + -0x34)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed44ae(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffeff;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x50);
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



void Unwind_00ed44cc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x50);
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



void Unwind_00ed44e5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
  if (0xf < *(uint *)(unaff_EBP + -0x78)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x78));
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed44f0(void)

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



void Unwind_00ed44f8(void)

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



void Unwind_00ed4500(void)

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



void Unwind_00ed4508(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
  if (0xf < *(uint *)(unaff_EBP + -0x78)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x78));
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4513(void)

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



void Unwind_00ed451b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
  if (0xf < *(uint *)(unaff_EBP + -0x78)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x78));
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4526(void)

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



void Unwind_00ed452e(void)

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



void Unwind_00ed4536(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffd;
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



void Unwind_00ed4552(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x68);
    if (0xf < *(uint *)(unaff_EBP + -0x54)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x54));
    }
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed456b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x48);
    if (0xf < *(uint *)(unaff_EBP + -0x34)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4584(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffdff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x68);
    if (0xf < *(uint *)(unaff_EBP + -0x54)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x54));
    }
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed45a2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffbf;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x50);
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



void Unwind_00ed45bb(void)

{
  func_0x008ab391(&DAT_01463a58);
  return;
}



void Unwind_00ed45c7(void)

{
  func_0x008ab391(&DAT_014639bc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00ed45d3(void)

{
  if (0xf < uRam01463a14) {
    func_0x0046b1f0(&DAT_01463a00,_DAT_01463a00,uRam01463a14);
  }
  uRam01463a10 = 0;
  uRam01463a14 = 0xf;
  _DAT_01463a00 = _DAT_01463a00 & 0xffffff00;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00ed45dd(void)

{
  if (0xf < uRam01463a2c) {
    func_0x0046b1f0(&DAT_01463a18,_DAT_01463a18,uRam01463a2c);
  }
  uRam01463a28 = 0;
  uRam01463a2c = 0xf;
  _DAT_01463a18 = _DAT_01463a18 & 0xffffff00;
  return;
}



void Unwind_00ed4620(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
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



void Unwind_00ed4639(void)

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



void Unwind_00ed4670(void)

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



void Unwind_00ed4678(void)

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



void Unwind_00ed46b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x117c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x117c) = *(uint *)(unaff_EBP + -0x117c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x119c);
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



void Unwind_00ed46d2(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3f73;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x1108);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1178) + 4) + -0x70 + (int)puVar1) =
       std::basic_ifstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1178) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x70;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1178) + 4) + -0x70 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1178) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed46dd(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x1058);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x10c0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10c0) + 4);
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



void Unwind_00ed46e8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x117c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x117c) = *(uint *)(unaff_EBP + -0x117c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1198);
    if (0xf < *(uint *)(unaff_EBP + -0x1184)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1184));
    }
    *(undefined4 *)(unaff_EBP + -0x1188) = 0;
    *(undefined4 *)(unaff_EBP + -0x1184) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed470a(void)

{
  func_0x008ab391(&DAT_01463a54);
  return;
}



void Unwind_00ed4716(void)

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
  func_0x00533600(&DAT_014639f4,*(undefined4 *)(DAT_014639f4 + 4),uVar1);
  func_0x008ab812(DAT_014639f4,0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4750(void)

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
  func_0x00533600(&DAT_014639f4,*(undefined4 *)(DAT_014639f4 + 4),uVar1);
  func_0x008ab812(DAT_014639f4,0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4780(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x1b4);
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



void Unwind_00ed478b(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x1b4);
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



void Unwind_00ed47ad(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xffffffdf;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
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



void Unwind_00ed47cf(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xffffffbf;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
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



void Unwind_00ed47f1(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ed47fc(void)

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



void Unwind_00ed4804(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed480f(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x194) + 4);
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



int * Unwind_00ed481a(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x114);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



int * Unwind_00ed4825(void)

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
  piVar3 = *(int **)(unaff_EBP + -0x54);
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



void Unwind_00ed482d(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x194) + 4);
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



int * Unwind_00ed4838(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x114);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



int * Unwind_00ed4843(void)

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
  piVar3 = *(int **)(unaff_EBP + -0x4c);
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



void Unwind_00ed484b(void)

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



void Unwind_00ed4853(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc4);
  if (0xf < *(uint *)(unaff_EBP + -0xb0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb0));
  }
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed485e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
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



void Unwind_00ed4880(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffffb;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
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



void Unwind_00ed48a2(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed48ad(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b0);
    puStack_c = &DAT_00ec419d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (7 < *(uint *)(unaff_EBP + -0x19c)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x19c),uVar2);
    }
    *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
    *(undefined4 *)(unaff_EBP + -0x19c) = 7;
    *(undefined2 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ed48cf(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa0);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x8c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed48da(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x74)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed48e5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  if (7 < *(uint *)(unaff_EBP + -0x74)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74));
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed48f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa0);
  if (7 < *(uint *)(unaff_EBP + -0x8c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8c));
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed48fb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4903(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b0);
  if (7 < *(uint *)(unaff_EBP + -0x19c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x19c));
  }
  *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
  *(undefined4 *)(unaff_EBP + -0x19c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed490e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4919(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x178);
  if (0xf < *(uint *)(unaff_EBP + -0x164)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x164));
  }
  *(undefined4 *)(unaff_EBP + -0x168) = 0;
  *(undefined4 *)(unaff_EBP + -0x164) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4924(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x148);
    if (0xf < *(uint *)(unaff_EBP + -0x134)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x134));
    }
    *(undefined4 *)(unaff_EBP + -0x138) = 0;
    *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4946(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -300);
  if (0xf < *(uint *)(unaff_EBP + -0x118)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x118));
  }
  *(undefined4 *)(unaff_EBP + -0x11c) = 0;
  *(undefined4 *)(unaff_EBP + -0x118) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4951(void)

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



void Unwind_00ed495c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x4c);
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



void Unwind_00ed4964(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x54);
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



void Unwind_00ed496c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
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



void Unwind_00ed4974(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -300);
  if (0xf < *(uint *)(unaff_EBP + -0x118)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x118));
  }
  *(undefined4 *)(unaff_EBP + -0x11c) = 0;
  *(undefined4 *)(unaff_EBP + -0x118) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed497f(void)

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



void Unwind_00ed4987(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -300);
  if (0xf < *(uint *)(unaff_EBP + -0x118)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x118));
  }
  *(undefined4 *)(unaff_EBP + -0x11c) = 0;
  *(undefined4 *)(unaff_EBP + -0x118) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4992(void)

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



void Unwind_00ed499a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -300);
  if (0xf < *(uint *)(unaff_EBP + -0x118)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x118));
  }
  *(undefined4 *)(unaff_EBP + -0x11c) = 0;
  *(undefined4 *)(unaff_EBP + -0x118) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed49a5(void)

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



void Unwind_00ed49ad(void)

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



void Unwind_00ed49b8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b0);
  if (0xf < *(uint *)(unaff_EBP + -0x19c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x19c));
  }
  *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
  *(undefined4 *)(unaff_EBP + -0x19c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed49c3(void)

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



void Unwind_00ed49cb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x178);
  if (0xf < *(uint *)(unaff_EBP + -0x164)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x164));
  }
  *(undefined4 *)(unaff_EBP + -0x168) = 0;
  *(undefined4 *)(unaff_EBP + -0x164) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed49d6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x108) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0x160);
    if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
    }
    *(undefined4 *)(unaff_EBP + -0x150) = 0;
    *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed49fd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x148);
  if (0xf < *(uint *)(unaff_EBP + -0x134)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x134));
  }
  *(undefined4 *)(unaff_EBP + -0x138) = 0;
  *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4a08(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  if (0xf < *(uint *)(unaff_EBP + -0x74)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74));
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4a13(void)

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



void Unwind_00ed4a1e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x148);
  if (0xf < *(uint *)(unaff_EBP + -0x134)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x134));
  }
  *(undefined4 *)(unaff_EBP + -0x138) = 0;
  *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4a29(void)

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



void Unwind_00ed4a60(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe8) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xe8) = *(uint *)(unaff_EBP + -0xe8) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x10c);
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



void Unwind_00ed4a82(void)

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



void Unwind_00ed4a8d(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3f73;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe0) + 4) + -0x70 + (int)puVar1) =
       std::basic_ifstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe0) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x70;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe0) + 4) + -0x70 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe0) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4a98(void)

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



void Unwind_00ed4aa0(void)

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



void Unwind_00ed4aab(void)

{
  func_0x008ab391(&DAT_01463a5c);
  return;
}



void Unwind_00ed4af0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x8c);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0x88),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0x84) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
  }
  return;
}



void Unwind_00ed4afb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa4);
  if (0xf < *(uint *)(unaff_EBP + -0x90)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x90));
  }
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b06(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  if (0xf < *(uint *)(unaff_EBP + -0x6c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x6c));
  }
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b0e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b19(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x11c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b24(void)

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



void Unwind_00ed4b2c(void)

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



void Unwind_00ed4b34(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x128)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4b3f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (7 < *(uint *)(unaff_EBP + -0x128)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b4a(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4b52(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x118);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x104)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x108) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4b5d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x118);
  if (7 < *(uint *)(unaff_EBP + -0x104)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
  }
  *(undefined4 *)(unaff_EBP + -0x108) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b68(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (7 < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b70(void)

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



void Unwind_00ed4b7b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b86(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (7 < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4b8e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x28);
    if (0xf < *(uint *)(unaff_EBP + -0x14)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4bad(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x11c);
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



void Unwind_00ed4bcf(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x11c);
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



void Unwind_00ed4bf1(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4bfc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4c07(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffff7;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
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



void Unwind_00ed4c26(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xffffffef;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
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



void Unwind_00ed4c45(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x128)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4c50(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (7 < *(uint *)(unaff_EBP + -0x128)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4c5b(void)

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



void Unwind_00ed4c63(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x118);
    if (0xf < *(uint *)(unaff_EBP + -0x104)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
    }
    *(undefined4 *)(unaff_EBP + -0x108) = 0;
    *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4c85(void)

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



void Unwind_00ed4c8d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xffffff7f;
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



void Unwind_00ed4cb1(void)

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



void Unwind_00ed4cbc(void)

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



void Unwind_00ed4cc7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4cd2(void)

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



void Unwind_00ed4cdd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4ce8(void)

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



void Unwind_00ed4cf3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4cfe(void)

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



void Unwind_00ed4d06(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4d11(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x164);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4d1c(void)

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



void Unwind_00ed4d24(void)

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



void Unwind_00ed4d2f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4d3a(void)

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



void Unwind_00ed4d42(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffff7ff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x118);
    if (0xf < *(uint *)(unaff_EBP + -0x104)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
    }
    *(undefined4 *)(unaff_EBP + -0x108) = 0;
    *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4d69(void)

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



void Unwind_00ed4d71(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4d7c(void)

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



void Unwind_00ed4d87(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4d92(void)

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



void Unwind_00ed4d9d(void)

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



void Unwind_00ed4da8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4db3(void)

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



void Unwind_00ed4dbe(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4dc9(void)

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



void Unwind_00ed4dd4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4ddf(void)

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



void Unwind_00ed4dea(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4df5(void)

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



void Unwind_00ed4e00(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4e0b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0xb0);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(unaff_EBP + -0xa8) - iVar1);
    *(int *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + -0xac) = 0;
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  }
  return;
}



void Unwind_00ed4e16(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4e21(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4e2c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4e37(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



uint Unwind_00ed4e42(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x120) & 0x1000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xffffefff;
  piVar5 = *(int **)(unaff_EBP + -0x30);
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



void Unwind_00ed4e66(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x2c),0x18);
  return;
}



void Unwind_00ed4e75(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4e80(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4e8b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4ed0(void)

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



void Unwind_00ed4ed8(void)

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



void Unwind_00ed4ee0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4ee8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x148);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4ef3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x74);
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



void Unwind_00ed4efb(void)

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



void Unwind_00ed4f03(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4f0b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  if (7 < *(uint *)(unaff_EBP + -0x7c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c));
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4f16(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x7c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4f21(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4f29(void)

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



void Unwind_00ed4f31(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (7 < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed4f39(void)

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



void Unwind_00ed4f41(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xd8);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x140) + 4) + -0x68 + (int)puVar1) =
       std::basic_ofstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x140) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x140) + 4) + -0x68 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x140) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4f4c(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xd8);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x140) + 4) + -0x68 + (int)puVar1) =
       std::basic_ofstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x140) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x140) + 4) + -0x68 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x140) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4f57(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4f62(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d8);
  if (0xf < *(uint *)(unaff_EBP + -0x1c4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c4));
  }
  *(undefined4 *)(unaff_EBP + -0x1c8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4f6d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x144) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x144) = *(uint *)(unaff_EBP + -0x144) & 0xfffffffe;
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



void Unwind_00ed4f8c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x144) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x144) = *(uint *)(unaff_EBP + -0x144) & 0xfffffffd;
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



void Unwind_00ed4fab(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1c0);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x1ac)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1ac),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x1b0) = 0;
  *(undefined4 *)(unaff_EBP + -0x1ac) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed4fb6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1a8);
  if (0xf < *(uint *)(unaff_EBP + -0x194)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x194));
  }
  *(undefined4 *)(unaff_EBP + -0x198) = 0;
  *(undefined4 *)(unaff_EBP + -0x194) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed4fc1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x144) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x144) = *(uint *)(unaff_EBP + -0x144) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x178);
    if (0xf < *(uint *)(unaff_EBP + -0x164)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x164));
    }
    *(undefined4 *)(unaff_EBP + -0x168) = 0;
    *(undefined4 *)(unaff_EBP + -0x164) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed4fe3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x144) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x144) = *(uint *)(unaff_EBP + -0x144) & 0xfffffff7;
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



void Unwind_00ed5005(void)

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



void Unwind_00ed500d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1c0);
  if (7 < *(uint *)(unaff_EBP + -0x1ac)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1ac));
  }
  *(undefined4 *)(unaff_EBP + -0x1b0) = 0;
  *(undefined4 *)(unaff_EBP + -0x1ac) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5018(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (7 < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5023(void)

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



void Unwind_00ed502b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5036(void)

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



void Unwind_00ed503e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5049(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  if (7 < *(uint *)(unaff_EBP + -0x7c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c));
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5054(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed505c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1e0);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5067(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1dc);
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



void Unwind_00ed5072(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (7 < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed507a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  if (7 < *(uint *)(unaff_EBP + -0x7c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c));
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed50c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xb8) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xb8) = *(uint *)(unaff_EBP + -0xb8) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xd4);
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



void Unwind_00ed50e2(void)

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



void Unwind_00ed50ea(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed50f5(void)

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



void Unwind_00ed50fd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5108(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5113(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed511e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5129(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5134(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed513f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed514a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5155(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5160(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed516b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5176(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5181(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed518c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5197(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed51a2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed51e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0xc);
  if (0xf < *(uint *)(unaff_EBP + 0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x20));
  }
  *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  *(undefined4 *)(unaff_EBP + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed51e8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x140);
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



void Unwind_00ed51f3(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x9c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x9c) = *(uint *)(unaff_EBP + -0x9c) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x140);
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



void Unwind_00ed5215(void)

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



void Unwind_00ed5220(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xf4);
  if (0xf < *(uint *)(unaff_EBP + -0xe0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xe0));
  }
  *(undefined4 *)(unaff_EBP + -0xe4) = 0;
  *(undefined4 *)(unaff_EBP + -0xe0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed522b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5236(void)

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



void Unwind_00ed523e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x10c);
  if (0xf < *(uint *)(unaff_EBP + -0xf8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xf8));
  }
  *(undefined4 *)(unaff_EBP + -0xfc) = 0;
  *(undefined4 *)(unaff_EBP + -0xf8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5249(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x9c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x9c) = *(uint *)(unaff_EBP + -0x9c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0xbc);
    if (0xf < *(uint *)(unaff_EBP + -0xa8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa8));
    }
    *(undefined4 *)(unaff_EBP + -0xac) = 0;
    *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed526b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x13c);
  if (0xf < *(uint *)(unaff_EBP + -0x128)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x128));
  }
  *(undefined4 *)(unaff_EBP + -300) = 0;
  *(undefined4 *)(unaff_EBP + -0x128) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5276(void)

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



void Unwind_00ed5281(void)

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



void Unwind_00ed5289(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5294(void)

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



void Unwind_00ed529f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed52aa(void)

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



void Unwind_00ed52b5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed52c0(void)

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



void Unwind_00ed52cb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed52d6(void)

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



void Unwind_00ed52e1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed52ec(void)

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



void Unwind_00ed5330(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + 8);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + 0x1c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5338(void)

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



void Unwind_00ed5340(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x58)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x58),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5348(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  if (7 < *(uint *)(unaff_EBP + -0x58)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x58));
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5350(void)

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



void Unwind_00ed5358(void)

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



void Unwind_00ed5360(void)

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



void Unwind_00ed5368(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x84);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x70)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x70),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5373(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x84);
  if (7 < *(uint *)(unaff_EBP + -0x70)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x70));
  }
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed537e(void)

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



void Unwind_00ed5386(void)

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



void Unwind_00ed538e(void)

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



void Unwind_00ed5396(void)

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



void Unwind_00ed539e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 8);
  if (7 < *(uint *)(unaff_EBP + 0x1c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x1c));
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed53a6(void)

{
  func_0x008ab391(&DAT_01463a48);
  return;
}



void Unwind_00ed53b2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xe8);
  if (0xf < *(uint *)(unaff_EBP + -0xd4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd4));
  }
  *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed53bd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed53c8(void)

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



void Unwind_00ed53d3(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(unaff_EBP + -0xe8,0x18,4,FUN_00469ba0);
  return;
}



void Unwind_00ed53e9(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4) = 0;
    **(undefined4 **)(unaff_EBP + -0x18) = 0;
    puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar3;
      puVar1 = puVar3 + 2;
      if (0xf < (uint)puVar3[7]) {
        func_0x0046b1f0(puVar1,*puVar1,puVar3[7],uVar4);
      }
      puVar3[6] = 0;
      puVar3[7] = 0xf;
      *(undefined1 *)puVar1 = 0;
      func_0x008ab812(puVar3,0x20);
      puVar3 = puVar2;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed53f1(void)

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
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x44),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed53f9(void)

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
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x44),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5430(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5438(void)

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



void Unwind_00ed5440(void)

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



void Unwind_00ed5448(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(unaff_EBP + -0x70,0x18,4,FUN_00469ba0);
  return;
}



void Unwind_00ed545b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x11c);
  if (0xf < *(uint *)(unaff_EBP + -0x108)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x108));
  }
  *(undefined4 *)(unaff_EBP + -0x10c) = 0;
  *(undefined4 *)(unaff_EBP + -0x108) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5466(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2dc);
  if (0xf < *(uint *)(unaff_EBP + -0x2c8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c8));
  }
  *(undefined4 *)(unaff_EBP + -0x2cc) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5471(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c4);
  if (0xf < *(uint *)(unaff_EBP + -0x2b0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2b0));
  }
  *(undefined4 *)(unaff_EBP + -0x2b4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2b0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed547c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed5c2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *(int *)(unaff_EBP + -0x74);
  if (iVar5 != 0) {
    do {
      puVar1 = *(undefined4 **)
                (*(int *)(unaff_EBP + -0x80) +
                (*(int *)(unaff_EBP + -0x7c) - 1U & *(int *)(unaff_EBP + -0x78) + -1 + iVar5) * 4);
      uStack_8 = 0xffffffff;
      if (7 < (uint)puVar1[5]) {
        func_0x005895e0(puVar1,*puVar1,puVar1[5],uVar4);
      }
      puVar1[4] = 0;
      puVar1[5] = 7;
      *(undefined2 *)puVar1 = 0;
      iVar5 = *(int *)(unaff_EBP + -0x74) + -1;
      *(int *)(unaff_EBP + -0x74) = iVar5;
    } while (iVar5 != 0);
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
  }
  if (*(int *)(unaff_EBP + -0x80) != 0) {
    iVar5 = *(int *)(unaff_EBP + -0x7c);
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x80) + iVar5 * 4);
      if (iVar2 != 0) {
        func_0x008ab812(iVar2,0x18);
      }
    }
    func_0x0046ac90(*(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c));
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  uVar3 = *(undefined4 *)(unaff_EBP + -0x84);
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  func_0x008ab812(uVar3,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5487(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed5a4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00607180(uVar1,unaff_EBP + -0x84);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5492(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x380);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x36c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x36c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x370) = 0;
  *(undefined4 *)(unaff_EBP + -0x36c) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed549d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x10000000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xefffffff;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x2ac);
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



void Unwind_00ed54c4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x20000000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xdfffffff;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x2ac);
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



void Unwind_00ed54eb(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -200)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed54f6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (7 < *(uint *)(unaff_EBP + -200)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5501(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2a4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2a4) = *(uint *)(unaff_EBP + -0x2a4) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x310);
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



void Unwind_00ed5523(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2f4);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x2e0)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2e0),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x2e4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2e0) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed552e(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xc0);
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



int * Unwind_00ed5539(void)

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
  piVar3 = *(int **)(unaff_EBP + -0xc0);
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



void Unwind_00ed5544(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2f4);
  if (7 < *(uint *)(unaff_EBP + -0x2e0)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2e0));
  }
  *(undefined4 *)(unaff_EBP + -0x2e4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2e0) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed554f(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x318) + 4);
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



int * Unwind_00ed555a(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x314);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



int * Unwind_00ed5565(void)

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
  piVar3 = *(int **)(unaff_EBP + -0xb8);
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



void Unwind_00ed5570(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x334) + 4);
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



int * Unwind_00ed557b(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x31c);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



int * Unwind_00ed5586(void)

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
  piVar3 = *(int **)(unaff_EBP + -0xe0);
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



void Unwind_00ed5591(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  if (0xf < *(uint *)(unaff_EBP + -0xe8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xe8));
  }
  *(undefined4 *)(unaff_EBP + -0xec) = 0;
  *(undefined4 *)(unaff_EBP + -0xe8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed559c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x330);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed55a7(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xe0);
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



void Unwind_00ed55b2(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xb8);
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



void Unwind_00ed55bd(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xc0);
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



void Unwind_00ed55c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  if (7 < *(uint *)(unaff_EBP + -0x88)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed55d3(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + -0x88)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed55de(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x330);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed55e9(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x16c);
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



void Unwind_00ed560b(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1dc) + 4) + -0x18 + unaff_EBP + -0x1c4) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x1dc) + 4);
  *(int *)(iVar1 + -0x1c + unaff_EBP + -0x1c4) = iVar1 + -0x18;
  return;
}



void Unwind_00ed5616(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  iVar1 = (*(undefined4 **)(unaff_EBP + -0x31c))[0xd];
  **(undefined4 **)(unaff_EBP + -0x31c) = std::basic_streambuf<>::vftable;
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



void Unwind_00ed5621(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -0x1cc) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(unaff_EBP + -0x180) != 0) && (**(int **)(unaff_EBP + -0x1c0) == unaff_EBP + -400)) {
    iVar1 = *(int *)(unaff_EBP + -0x178);
    iVar2 = *(int *)(unaff_EBP + -0x17c);
    **(int **)(unaff_EBP + -0x1c0) = iVar2;
    **(int **)(unaff_EBP + -0x1b0) = iVar2;
    **(int **)(unaff_EBP + -0x1a0) = iVar1 - iVar2;
  }
  if (*(char *)(unaff_EBP + -0x184) != '\0') {
    func_0x005a8550(uVar3);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed562c(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3f73;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x16c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1dc) + 4) + -0x70 + (int)puVar1) =
       std::basic_ifstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1dc) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x70;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1dc) + 4) + -0x70 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1dc) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5637(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3f73;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x16c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1dc) + 4) + -0x70 + (int)puVar1) =
       std::basic_ifstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1dc) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x70;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1dc) + 4) + -0x70 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1dc) + 4);
  *(int *)(iVar2 + -0x74 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5642(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x318);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x70) + 4) + -0x18 + iVar2 + -0x58) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x70) + 4);
  *(int *)(iVar1 + -0x1c + iVar2 + -0x58) = iVar1 + -0x18;
  return;
}



void Unwind_00ed5650(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x318);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + -0x60) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + -0x14) != 0) && (**(int **)(iVar3 + -0x54) == iVar3 + -0x24)) {
    iVar1 = *(int *)(iVar3 + -0xc);
    iVar2 = *(int *)(iVar3 + -0x10);
    **(int **)(iVar3 + -0x54) = iVar2;
    **(int **)(iVar3 + -0x44) = iVar2;
    **(int **)(iVar3 + -0x34) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + -0x18) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed565e(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x314);
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



void Unwind_00ed5669(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  if (7 < *(uint *)(unaff_EBP + -0x88)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5674(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed567f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x398);
    if (0xf < *(uint *)(unaff_EBP + -900)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -900));
    }
    *(undefined4 *)(unaff_EBP + -0x388) = 0;
    *(undefined4 *)(unaff_EBP + -900) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed56a1(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x310);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x70) + 4) + -0x18 + iVar2 + -0x58) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x70) + 4);
  *(int *)(iVar1 + -0x1c + iVar2 + -0x58) = iVar1 + -0x18;
  return;
}



void Unwind_00ed56af(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x310);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + -0x60) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + -0x14) != 0) && (**(int **)(iVar3 + -0x54) == iVar3 + -0x24)) {
    iVar1 = *(int *)(iVar3 + -0xc);
    iVar2 = *(int *)(iVar3 + -0x10);
    **(int **)(iVar3 + -0x54) = iVar2;
    **(int **)(iVar3 + -0x44) = iVar2;
    **(int **)(iVar3 + -0x34) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + -0x18) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed56bd(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x498);
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



void Unwind_00ed56c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  if (7 < *(uint *)(unaff_EBP + -0x88)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed56d3(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3e0);
    puStack_c = &DAT_00ec419d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (7 < *(uint *)(unaff_EBP + -0x3cc)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3cc),uVar2);
    }
    *(undefined4 *)(unaff_EBP + -0x3d0) = 0;
    *(undefined4 *)(unaff_EBP + -0x3cc) = 7;
    *(undefined2 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ed56f5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x380);
    if (0xf < *(uint *)(unaff_EBP + -0x36c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x36c));
    }
    *(undefined4 *)(unaff_EBP + -0x370) = 0;
    *(undefined4 *)(unaff_EBP + -0x36c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed5717(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3c8);
    puStack_c = &DAT_00ec419d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (7 < *(uint *)(unaff_EBP + -0x3b4)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3b4),uVar2);
    }
    *(undefined4 *)(unaff_EBP + -0x3b8) = 0;
    *(undefined4 *)(unaff_EBP + -0x3b4) = 7;
    *(undefined2 *)puVar1 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ed5739(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3b0);
    if (0xf < *(uint *)(unaff_EBP + -0x39c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x39c));
    }
    *(undefined4 *)(unaff_EBP + -0x3a0) = 0;
    *(undefined4 *)(unaff_EBP + -0x39c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed575b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c8);
  if (7 < *(uint *)(unaff_EBP + -0x3b4)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3b4));
  }
  *(undefined4 *)(unaff_EBP + -0x3b8) = 0;
  *(undefined4 *)(unaff_EBP + -0x3b4) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5766(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3e0);
  if (7 < *(uint *)(unaff_EBP + -0x3cc)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3cc));
  }
  *(undefined4 *)(unaff_EBP + -0x3d0) = 0;
  *(undefined4 *)(unaff_EBP + -0x3cc) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5771(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x494);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed577c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5787(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x410);
  if (0xf < *(uint *)(unaff_EBP + -0x3fc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3fc));
  }
  *(undefined4 *)(unaff_EBP + -0x400) = 0;
  *(undefined4 *)(unaff_EBP + -0x3fc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5792(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x350);
  if (0xf < *(uint *)(unaff_EBP + -0x33c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x33c));
  }
  *(undefined4 *)(unaff_EBP + -0x340) = 0;
  *(undefined4 *)(unaff_EBP + -0x33c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed579d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3f8);
  if (0xf < *(uint *)(unaff_EBP + -0x3e4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3e4));
  }
  *(undefined4 *)(unaff_EBP + -1000) = 0;
  *(undefined4 *)(unaff_EBP + -0x3e4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed57a8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x428);
  if (0xf < *(uint *)(unaff_EBP + -0x414)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x414));
  }
  *(undefined4 *)(unaff_EBP + -0x418) = 0;
  *(undefined4 *)(unaff_EBP + -0x414) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed57b3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x368);
  if (0xf < *(uint *)(unaff_EBP + -0x354)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x354));
  }
  *(undefined4 *)(unaff_EBP + -0x358) = 0;
  *(undefined4 *)(unaff_EBP + -0x354) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed57be(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x470);
  if (0xf < *(uint *)(unaff_EBP + -0x45c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x45c));
  }
  *(undefined4 *)(unaff_EBP + -0x460) = 0;
  *(undefined4 *)(unaff_EBP + -0x45c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed57c9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x10000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfffeffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30c);
    if (0xf < *(uint *)(unaff_EBP + -0x2f8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2f8));
    }
    *(undefined4 *)(unaff_EBP + -0x2fc) = 0;
    *(undefined4 *)(unaff_EBP + -0x2f8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed57f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfffdffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30c);
    if (0xf < *(uint *)(unaff_EBP + -0x2f8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2f8));
    }
    *(undefined4 *)(unaff_EBP + -0x2fc) = 0;
    *(undefined4 *)(unaff_EBP + -0x2f8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed5817(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfffbffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30c);
    if (0xf < *(uint *)(unaff_EBP + -0x2f8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2f8));
    }
    *(undefined4 *)(unaff_EBP + -0x2fc) = 0;
    *(undefined4 *)(unaff_EBP + -0x2f8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed583e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfff7ffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30c);
    if (0xf < *(uint *)(unaff_EBP + -0x2f8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2f8));
    }
    *(undefined4 *)(unaff_EBP + -0x2fc) = 0;
    *(undefined4 *)(unaff_EBP + -0x2f8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed5865(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c4);
  if (0xf < *(uint *)(unaff_EBP + -0x2b0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2b0));
  }
  *(undefined4 *)(unaff_EBP + -0x2b4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2b0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5870(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x2000000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfdffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2dc);
    if (0xf < *(uint *)(unaff_EBP + -0x2c8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c8));
    }
    *(undefined4 *)(unaff_EBP + -0x2cc) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed5897(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x490);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x70) + 4) + -0x18 + iVar2 + -0x58) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x70) + 4);
  *(int *)(iVar1 + -0x1c + iVar2 + -0x58) = iVar1 + -0x18;
  return;
}



void Unwind_00ed58a5(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x490);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + -0x60) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + -0x14) != 0) && (**(int **)(iVar3 + -0x54) == iVar3 + -0x24)) {
    iVar1 = *(int *)(iVar3 + -0xc);
    iVar2 = *(int *)(iVar3 + -0x10);
    **(int **)(iVar3 + -0x54) = iVar2;
    **(int **)(iVar3 + -0x44) = iVar2;
    **(int **)(iVar3 + -0x34) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + -0x18) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed58b3(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x48c);
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



void Unwind_00ed58be(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  if (7 < *(uint *)(unaff_EBP + -0x88)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed58c9(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x290) & 0x4000000) != 0) {
    *(uint *)(unaff_EBP + -0x290) = *(uint *)(unaff_EBP + -0x290) & 0xfbffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x224);
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



void Unwind_00ed58f0(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x28c) + 4) + -8 + unaff_EBP + -0x284) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x28c) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0x284) = iVar1 + -8;
  return;
}



void Unwind_00ed58fb(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  iVar1 = (*(undefined4 **)(unaff_EBP + -0x488))[0xd];
  **(undefined4 **)(unaff_EBP + -0x488) = std::basic_streambuf<>::vftable;
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



void Unwind_00ed5906(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -0x288) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(unaff_EBP + -0x23c) != 0) && (**(int **)(unaff_EBP + -0x27c) == unaff_EBP + -0x24c))
  {
    iVar1 = *(int *)(unaff_EBP + -0x234);
    iVar2 = *(int *)(unaff_EBP + -0x238);
    **(int **)(unaff_EBP + -0x27c) = iVar2;
    **(int **)(unaff_EBP + -0x26c) = iVar2;
    **(int **)(unaff_EBP + -0x25c) = iVar1 - iVar2;
  }
  if (*(char *)(unaff_EBP + -0x240) != '\0') {
    func_0x005a8550(uVar3);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5911(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x224);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x28c) + 4) + -0x68 + (int)puVar1) =
       std::basic_ofstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28c) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x28c) + 4) + -0x68 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28c) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed591c(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x224);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x28c) + 4) + -0x68 + (int)puVar1) =
       std::basic_ofstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28c) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x28c) + 4) + -0x68 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28c) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5927(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x480);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x68) + 4) + -8 + iVar2 + -0x60) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x68) + 4);
  *(int *)(iVar1 + -0xc + iVar2 + -0x60) = iVar1 + -8;
  return;
}



void Unwind_00ed5935(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x480);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + -100) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + -0x18) != 0) && (**(int **)(iVar3 + -0x58) == iVar3 + -0x28)) {
    iVar1 = *(int *)(iVar3 + -0x10);
    iVar2 = *(int *)(iVar3 + -0x14);
    **(int **)(iVar3 + -0x58) = iVar2;
    **(int **)(iVar3 + -0x48) = iVar2;
    **(int **)(iVar3 + -0x38) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + -0x1c) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5943(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x47c);
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



void Unwind_00ed594e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x484);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x70) + 4) + -0x18 + iVar2 + -0x58) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x70) + 4);
  *(int *)(iVar1 + -0x1c + iVar2 + -0x58) = iVar1 + -0x18;
  return;
}



void Unwind_00ed595c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x484);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + -0x60) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + -0x14) != 0) && (**(int **)(iVar3 + -0x54) == iVar3 + -0x24)) {
    iVar1 = *(int *)(iVar3 + -0xc);
    iVar2 = *(int *)(iVar3 + -0x10);
    **(int **)(iVar3 + -0x54) = iVar2;
    **(int **)(iVar3 + -0x44) = iVar2;
    **(int **)(iVar3 + -0x34) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + -0x18) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed596a(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x478);
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



void Unwind_00ed5975(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  if (7 < *(uint *)(unaff_EBP + -0x88)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5980(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x458);
  if (0xf < *(uint *)(unaff_EBP + -0x444)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x444));
  }
  *(undefined4 *)(unaff_EBP + -0x448) = 0;
  *(undefined4 *)(unaff_EBP + -0x444) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed598b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2f4);
  if (0xf < *(uint *)(unaff_EBP + -0x2e0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2e0));
  }
  *(undefined4 *)(unaff_EBP + -0x2e4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2e0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5996(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x440);
  if (0xf < *(uint *)(unaff_EBP + -0x42c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x42c));
  }
  *(undefined4 *)(unaff_EBP + -0x430) = 0;
  *(undefined4 *)(unaff_EBP + -0x42c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed59a1(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x474);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x68) + 4) + -8 + iVar2 + -0x60) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x68) + 4);
  *(int *)(iVar1 + -0xc + iVar2 + -0x60) = iVar1 + -8;
  return;
}



void Unwind_00ed59af(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x474);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + -100) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + -0x18) != 0) && (**(int **)(iVar3 + -0x58) == iVar3 + -0x28)) {
    iVar1 = *(int *)(iVar3 + -0x10);
    iVar2 = *(int *)(iVar3 + -0x14);
    **(int **)(iVar3 + -0x58) = iVar2;
    **(int **)(iVar3 + -0x48) = iVar2;
    **(int **)(iVar3 + -0x38) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + -0x1c) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed59bd(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0xe0);
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



void Unwind_00ed59c8(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0xb8);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x70) + 4) + -0x18 + iVar2 + -0x58) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x70) + 4);
  *(int *)(iVar1 + -0x1c + iVar2 + -0x58) = iVar1 + -0x18;
  return;
}



void Unwind_00ed59d6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0xb8);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + -0x60) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + -0x14) != 0) && (**(int **)(iVar3 + -0x54) == iVar3 + -0x24)) {
    iVar1 = *(int *)(iVar3 + -0xc);
    iVar2 = *(int *)(iVar3 + -0x10);
    **(int **)(iVar3 + -0x54) = iVar2;
    **(int **)(iVar3 + -0x44) = iVar2;
    **(int **)(iVar3 + -0x34) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + -0x18) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed59e4(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0xc0);
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



void Unwind_00ed59ef(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  if (7 < *(uint *)(unaff_EBP + -0x88)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed59fa(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed5c2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *(int *)(unaff_EBP + -0x74);
  if (iVar5 != 0) {
    do {
      puVar1 = *(undefined4 **)
                (*(int *)(unaff_EBP + -0x80) +
                (*(int *)(unaff_EBP + -0x7c) - 1U & *(int *)(unaff_EBP + -0x78) + -1 + iVar5) * 4);
      uStack_8 = 0xffffffff;
      if (7 < (uint)puVar1[5]) {
        func_0x005895e0(puVar1,*puVar1,puVar1[5],uVar4);
      }
      puVar1[4] = 0;
      puVar1[5] = 7;
      *(undefined2 *)puVar1 = 0;
      iVar5 = *(int *)(unaff_EBP + -0x74) + -1;
      *(int *)(unaff_EBP + -0x74) = iVar5;
    } while (iVar5 != 0);
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
  }
  if (*(int *)(unaff_EBP + -0x80) != 0) {
    iVar5 = *(int *)(unaff_EBP + -0x7c);
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x80) + iVar5 * 4);
      if (iVar2 != 0) {
        func_0x008ab812(iVar2,0x18);
      }
    }
    func_0x0046ac90(*(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c));
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  uVar3 = *(undefined4 *)(unaff_EBP + -0x84);
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  func_0x008ab812(uVar3,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5a40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed5c2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = puVar4[4];
  if (iVar6 != 0) {
    do {
      puVar1 = *(undefined4 **)(puVar4[1] + (puVar4[2] - 1 & puVar4[3] + -1 + iVar6) * 4);
      uStack_8 = 0xffffffff;
      if (7 < (uint)puVar1[5]) {
        func_0x005895e0(puVar1,*puVar1,puVar1[5],uVar5);
      }
      puVar1[4] = 0;
      puVar1[5] = 7;
      *(undefined2 *)puVar1 = 0;
      iVar6 = puVar4[4] + -1;
      puVar4[4] = iVar6;
    } while (iVar6 != 0);
    puVar4[3] = 0;
  }
  if (puVar4[1] != 0) {
    iVar6 = puVar4[2];
    while (0 < iVar6) {
      iVar6 = iVar6 + -1;
      iVar2 = *(int *)(puVar4[1] + iVar6 * 4);
      if (iVar2 != 0) {
        func_0x008ab812(iVar2,0x18);
      }
    }
    func_0x0046ac90(puVar4[1],puVar4[2]);
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  uVar3 = *puVar4;
  *puVar4 = 0;
  func_0x008ab812(uVar3,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5a70(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
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



void Unwind_00ed5a89(void)

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



void Unwind_00ed5a91(void)

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



void Unwind_00ed5ad0(void)

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



void Unwind_00ed5ad8(void)

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



void Unwind_00ed5ae0(void)

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



void Unwind_00ed5ae8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ed5b01(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
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



void Unwind_00ed5b1a(void)

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



void Unwind_00ed5b22(void)

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



void Unwind_00ed5b50(void)

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



void Unwind_00ed5b58(void)

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



void Unwind_00ed5b60(void)

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



void Unwind_00ed5b90(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd8);
  if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc4));
  }
  *(undefined4 *)(unaff_EBP + -200) = 0;
  *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5b9b(void)

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



void Unwind_00ed5ba3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd8);
  if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc4));
  }
  *(undefined4 *)(unaff_EBP + -200) = 0;
  *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5bae(void)

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



void Unwind_00ed5bb9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x4c));
  }
  return;
}



void Unwind_00ed5bc1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x48));
  }
  return;
}



void Unwind_00ed5bc9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x44));
  }
  return;
}



void Unwind_00ed5bd1(void)

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



void Unwind_00ed5bdc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd8);
  if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc4));
  }
  *(undefined4 *)(unaff_EBP + -200) = 0;
  *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ed5c20(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5c50(void)

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
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x70);
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



void Unwind_00ed5c6c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_istream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -0x18;
  return;
}



void Unwind_00ed5c77(void)

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



void Unwind_00ed5c7f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + 0x10) = std::basic_filebuf<>::vftable;
  uStack_8 = 0;
  if ((*(int *)(iVar3 + 0x5c) != 0) && (**(int **)(iVar3 + 0x1c) == iVar3 + 0x4c)) {
    iVar1 = *(int *)(iVar3 + 100);
    iVar2 = *(int *)(iVar3 + 0x60);
    **(int **)(iVar3 + 0x1c) = iVar2;
    **(int **)(iVar3 + 0x2c) = iVar2;
    **(int **)(iVar3 + 0x3c) = iVar1 - iVar2;
  }
  if (*(char *)(iVar3 + 0x58) != '\0') {
    func_0x005a8550(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5c8a(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ed3f73;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = piVar2 + 0x1c;
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x70 + (int)piVar1) = std::basic_ifstream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x74 + (int)piVar1) = *(int *)(*piVar2 + 4) + -0x70;
  uStack_8 = 0;
  func_0x005a7f10(uVar3);
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x70 + (int)piVar1) = std::basic_istream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x74 + (int)piVar1) = *(int *)(*piVar2 + 4) + -0x18;
  *piVar1 = (int)std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *piVar1 = (int)std::ios_base::vftable;
  func_0x00e706cb(piVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5cc0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ed5dd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5ccb(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ed5e10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5cd3(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xc);
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



void Unwind_00ed5d00(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xc);
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



void Unwind_00ed5d0b(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ed5e10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5d13(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ed5dd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5d40(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
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



void Unwind_00ed5d80(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5d88(void)

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



void Unwind_00ed5dc0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ed5e10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5dc8(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc);
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



void Unwind_00ed5e00(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc);
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



void Unwind_00ed5e30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + 0x6c);
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + 0x80)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x80),uVar2);
  }
  *(undefined4 *)(unaff_EBP + 0x7c) = 0;
  *(undefined4 *)(unaff_EBP + 0x80) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5e38(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + 0x4c);
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + 0x60)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x60),uVar2);
  }
  *(undefined4 *)(unaff_EBP + 0x5c) = 0;
  *(undefined4 *)(unaff_EBP + 0x60) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5e40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + 0x2c);
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + 0x40)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x40),uVar2);
  }
  *(undefined4 *)(unaff_EBP + 0x3c) = 0;
  *(undefined4 *)(unaff_EBP + 0x40) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5e48(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + 0xc);
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(unaff_EBP + 0x20)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x20),uVar2);
  }
  *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  *(undefined4 *)(unaff_EBP + 0x20) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5e50(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5e58(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00ec419d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(iVar1 + 0x18)) {
    func_0x005895e0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 7;
  *(undefined2 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5e63(void)

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
  puStack_c = &DAT_00ed3078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(iVar2 + 4);
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(iVar2 + 0x18)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(iVar2 + 0x18),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 7;
  *(undefined2 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ed5e6b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x34);
  if (7 < (uint)puVar1[5]) {
    func_0x005895e0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00ed5e73(void)

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
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00ec419d;
