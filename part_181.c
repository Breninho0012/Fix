    puVar3[0x11] = 0;
  }
  iVar2 = puVar3[0xc];
  if (iVar2 != 0) {
    uVar6 = puVar3[0xe] - iVar2 & 0xfffffff0;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
  }
  func_0x00addc70();
  piVar1 = puVar3 + 5;
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,puVar3[6],piVar1);
    iVar2 = *piVar1;
    uVar6 = ((puVar3[7] - iVar2) / 0x14) * 0x14;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar1 = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  return;
}



void Unwind_00f672e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x38);
  if (0xf < *(uint *)(unaff_EBP + 0x4c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x4c));
  }
  *(undefined4 *)(unaff_EBP + 0x48) = 0;
  *(undefined4 *)(unaff_EBP + 0x4c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f67320(void)

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



void Unwind_00f67360(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f67390(void)

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



void Unwind_00f6739b(void)

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



void Unwind_00f673e0(void)

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



void Unwind_00f67420(void)

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



void Unwind_00f67428(void)

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



void Unwind_00f67460(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar3 = sh::TIntermTraverser::vftable;
  iVar2 = puVar3[0x13];
  if (iVar2 != 0) {
    uVar6 = puVar3[0x15] - iVar2 & 0xfffffff8;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar5,uVar6);
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
  }
  if (puVar3[0xf] != 0) {
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
  }
  iVar2 = puVar3[0xc];
  if (iVar2 != 0) {
    uVar6 = puVar3[0xe] - iVar2 & 0xfffffff0;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
  }
  func_0x00addc70();
  piVar1 = puVar3 + 5;
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,puVar3[6],piVar1);
    iVar2 = *piVar1;
    uVar6 = ((puVar3[7] - iVar2) / 0x14) * 0x14;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar1 = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  return;
}



void Unwind_00f67468(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x5c);
  puStack_c = &DAT_00f25ecd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x007d9ca0(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f674a0(void)

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



void Unwind_00f674a8(void)

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



void Unwind_00f674b0(void)

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



void Unwind_00f674b8(void)

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



void Unwind_00f674c0(void)

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



void Unwind_00f674c8(void)

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



void Unwind_00f674d0(void)

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



void Unwind_00f67510(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar3 = sh::TIntermTraverser::vftable;
  iVar2 = puVar3[0x13];
  if (iVar2 != 0) {
    uVar6 = puVar3[0x15] - iVar2 & 0xfffffff8;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar5,uVar6);
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
  }
  if (puVar3[0xf] != 0) {
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
  }
  iVar2 = puVar3[0xc];
  if (iVar2 != 0) {
    uVar6 = puVar3[0xe] - iVar2 & 0xfffffff0;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
  }
  func_0x00addc70();
  piVar1 = puVar3 + 5;
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,puVar3[6],piVar1);
    iVar2 = *piVar1;
    uVar6 = ((puVar3[7] - iVar2) / 0x14) * 0x14;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar1 = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  return;
}



void Unwind_00f67540(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    iVar5 = piVar1[1];
    for (; iVar4 != iVar5; iVar4 = iVar4 + 0x24) {
      func_0x008acf70();
      func_0x008acf70();
      func_0x008acf70();
    }
    iVar4 = *piVar1;
    uVar3 = ((piVar1[2] - iVar4) / 0x24) * 0x24;
    iVar5 = iVar4;
    if (0xfff < uVar3) {
      iVar5 = *(int *)(iVar4 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar4 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar3);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}



void Unwind_00f67548(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  for (iVar2 = *(int *)(unaff_EBP + -0x28); iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    func_0x008acf70();
    func_0x008acf70();
    func_0x008acf70();
  }
  return;
}



void Unwind_00f67550(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f6755b(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x10);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f67590(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x18);
  }
  return;
}



void Unwind_00f675c0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar3 = sh::TIntermTraverser::vftable;
  iVar2 = puVar3[0x13];
  if (iVar2 != 0) {
    uVar6 = puVar3[0x15] - iVar2 & 0xfffffff8;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar5,uVar6);
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
  }
  if (puVar3[0xf] != 0) {
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
  }
  iVar2 = puVar3[0xc];
  if (iVar2 != 0) {
    uVar6 = puVar3[0xe] - iVar2 & 0xfffffff0;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
  }
  func_0x00addc70();
  piVar1 = puVar3 + 5;
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,puVar3[6],piVar1);
    iVar2 = *piVar1;
    uVar6 = ((puVar3[7] - iVar2) / 0x14) * 0x14;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar1 = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  return;
}



void Unwind_00f675c8(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x68);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x70) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(int *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x70) = 0;
  }
  return;
}



void Unwind_00f675d3(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x74);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x009924e0(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x18);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x18);
  return;
}



void Unwind_00f675de(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f675e6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f675ee(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f675f6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f675fe(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f67606(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f6760e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f67616(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f67640(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    iVar5 = piVar1[1];
    for (; iVar4 != iVar5; iVar4 = iVar4 + 0x24) {
      func_0x008acf70();
      func_0x008acf70();
      func_0x008acf70();
    }
    iVar4 = *piVar1;
    uVar3 = ((piVar1[2] - iVar4) / 0x24) * 0x24;
    iVar5 = iVar4;
    if (0xfff < uVar3) {
      iVar5 = *(int *)(iVar4 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar4 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar3);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}



void Unwind_00f67659(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x00993430();
  iVar2 = *(int *)(unaff_EBP + -0x28);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x20) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  *(undefined ***)(unaff_EBP + -0x90) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x44);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x3c) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x60);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x58) - iVar2 & 0xfffffff0;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x7c);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x78),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x74) - iVar2) / 0x14) * 0x14;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
  }
  return;
}



void Unwind_00f67664(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x18) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b7e2bb;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x24) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00b7e2bb:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(undefined ***)(unaff_EBP + -0x94) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x48);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x40) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -100);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x5c) - iVar2 & 0xfffffff0;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x80);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x7c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x78) - iVar2) / 0x14) * 0x14;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
  }
  return;
}



void Unwind_00f6766f(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x80) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x34);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x2c) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x50);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x48) - iVar2 & 0xfffffff0;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x6c);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x68),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -100) - iVar2) / 0x14) * 0x14;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  return;
}



void Unwind_00f676a0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x14) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined ***)(unaff_EBP + -0x74) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x28);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x20) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x44);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x3c) - iVar2 & 0xfffffff0;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x60);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x5c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x58) - iVar2) / 0x14) * 0x14;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  return;
}



void Unwind_00f676d0(void)

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



void Unwind_00f676d8(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x30);
  *puVar2 = sh::BlockEncoderVisitor::vftable;
  *puVar2 = sh::VariableNameVisitor::vftable;
  iVar1 = puVar2[7];
  if (iVar1 != 0) {
    uVar5 = puVar2[9] - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar2 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f676e0(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x30) + 0x44) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f676eb(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x30) + 0x4c) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f67730(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xc);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x009924e0(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x18);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x18);
  return;
}



void Unwind_00f6773b(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x14);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x00b7f1d0(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x28);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x28);
  return;
}



void Unwind_00f67746(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),8);
  return;
}



void Unwind_00f67780(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  func_0x009246b0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f67788(void)

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



void Unwind_00f67790(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xbc);
  *(undefined ***)(unaff_EBP + -0x68) = sh::BlockLayoutEncoder::vftable;
  *(undefined ***)(unaff_EBP + -0x70) = sh::BlockLayoutEncoder::vftable;
  *(undefined ***)(unaff_EBP + -0x78) = sh::BlockLayoutEncoder::vftable;
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + -0xa0);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x98) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f677d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x10);
  if (0xf < *(uint *)(unaff_EBP + 0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x24));
  }
  *(undefined4 *)(unaff_EBP + 0x20) = 0;
  *(undefined4 *)(unaff_EBP + 0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f677d8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x68),0x2c);
  }
  return;
}



void Unwind_00f677e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x68),0x2c);
  }
  return;
}



void Unwind_00f677e8(void)

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



void Unwind_00f677f0(void)

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



void Unwind_00f67830(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
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


undefined FUN_00f69750;
undefined4 DAT_013dea90;
undefined4 null;
undefined FUN_00f6e6d0;
undefined FUN_00f6d410;
undefined FUN_00e06470;
undefined FUN_00dc70b0;
undefined DAT_00f6f502;
undefined DAT_00f6f52f;
int *DAT_0145ca70;
undefined DAT_00eac63f;
undefined DAT_00ead1ef;
undefined DAT_00ead83f;
undefined DAT_00ead8cf;
undefined DAT_00ead9ff;
undefined DAT_00eadf6f;
undefined DAT_00eaf1bf;
undefined DAT_00eaf54b;
undefined DAT_00eb16cf;
undefined DAT_00eb181f;
uint DAT_0145d114;
undefined1 DAT_0145d100;
undefined4 DAT_0145d110;
int *DAT_0145d0ec;
int *DAT_0145d0e4;
int *DAT_0145d0dc;
uint DAT_0145d0bc;
undefined4 DAT_0145d0a8;
undefined4 DAT_0145d0b8;
uint DAT_0145d0a4;
undefined4 DAT_0145d090;
undefined4 DAT_0145d0a0;
int DAT_0145d084;
int DAT_0145d08c;
undefined4 DAT_0145d088;
undefined4 DAT_0145d018;
undefined4 DAT_0145d010;
int *DAT_0145d00c;
int *DAT_0145d004;
int *DAT_0145cffc;
undefined DAT_00eb1a09;
undefined DAT_00eb3b8f;
undefined DAT_00eb47af;
undefined DAT_00eb4c3f;
undefined DAT_00eb4daf;
int DAT_014638f4;
undefined4 DAT_014638f0;
undefined DAT_00eb4edf;
undefined DAT_00eb5acf;
undefined DAT_00ec0e9f;
undefined DAT_00ec0fdf;
int DAT_0145d418;
int DAT_0145d3b0;
undefined4 DAT_0145d3b4;
int DAT_0145d3b8;
int DAT_0145d3a4;
undefined4 DAT_0145d3a8;
int DAT_0145d3ac;
int DAT_0145d398;
undefined4 DAT_0145d39c;
int DAT_0145d3a0;
undefined4 DAT_0145d2d0;
undefined DAT_00ec1353;
undefined DAT_0145d250;
undefined DAT_0145d2d8;
int *DAT_0145ea0c;
undefined DAT_00ec300f;
undefined DAT_00ec37ff;
undefined DAT_00ec44cf;
undefined DAT_00ec4c6f;
undefined DAT_00ec4d2f;
undefined DAT_00ec512f;
undefined DAT_00ec515f;
undefined DAT_00ec527f;
undefined DAT_00ec533f;
undefined DAT_00ec915f;
undefined DAT_00ec966f;
undefined DAT_00ec96fb;
undefined DAT_00ec9bef;
undefined DAT_00ec9f8f;
undefined DAT_00eca25f;
undefined DAT_00ecae7f;
undefined DAT_00ecaf82;
undefined DAT_00ecb7df;
undefined DAT_00ecc049;
undefined DAT_00ecc0ef;
undefined DAT_00ecc5af;
undefined DAT_00eccd9f;
undefined DAT_00ecd1af;
undefined DAT_00ecd67f;
undefined DAT_00ecd94f;
undefined DAT_00ecdd6f;
undefined DAT_00ece08f;
undefined DAT_00ece14f;
undefined DAT_00ece33f;
int *DAT_0145f248;
undefined DAT_00ecfc29;
int DAT_0145dbe0;
undefined4 DAT_0145dbe4;
int DAT_0145dbe8;
undefined DAT_00ed0010;
int UNK_0145db90;
undefined4 UNK_0145db94;
int UNK_0145db98;
undefined DAT_00ed07ff;
int *DAT_0145dc90;
int *DAT_0145dc88;
undefined DAT_00ed0955;
undefined DAT_00ed19d5;
uint DAT_014639b4;
undefined4 DAT_014639a0;
undefined DAT_014639b0;
undefined DAT_00ed27b1;
undefined DAT_00ed393d;
uint DAT_0145de5c;
undefined4 DAT_0145de48;
undefined4 DAT_0145de58;
uint DAT_014639f0;
undefined DAT_00ed475f;
undefined4 DAT_014639d0;
undefined4 *DAT_01463a4c;
undefined DAT_00ed74ff;
undefined DAT_00ed75ef;
undefined DAT_00ed76b8;
undefined DAT_00ed78ef;
undefined DAT_00ed7b3f;
undefined DAT_00ed7c5f;
undefined DAT_00ed7e8f;
undefined DAT_00ed7f33;
undefined DAT_00ed7f8f;
int *DAT_0145ec9c;
int DAT_01463b3c;
int DAT_01463b44;
undefined4 DAT_01463b40;
undefined DAT_00ed82df;
undefined DAT_00ed8369;
undefined DAT_00ed869f;
undefined DAT_00ed8b63;
undefined DAT_00ed8c4f;
undefined FUN_0061f040;
int DAT_01463b50;
int DAT_01463b58;
undefined DAT_01463b54;
undefined DAT_00ed8e6f;
undefined DAT_00ed918f;
undefined DAT_00ed95bf;
uint DAT_0145e524;
undefined4 DAT_0145e510;
undefined DAT_0145e520;
uint DAT_0145e614;
undefined4 DAT_0145e600;
undefined DAT_0145e610;
uint DAT_0145e50c;
undefined4 DAT_0145e4f8;
undefined DAT_0145e508;
uint DAT_0145e53c;
undefined4 DAT_0145e528;
undefined DAT_0145e538;
uint DAT_0145e4c4;
undefined4 DAT_0145e4b0;
undefined DAT_0145e4c0;
uint DAT_0145e5fc;
undefined4 DAT_0145e5e8;
undefined DAT_0145e5f8;
uint DAT_0145e62c;
undefined4 DAT_0145e618;
undefined DAT_0145e628;
uint DAT_0145e644;
undefined4 DAT_0145e630;
undefined DAT_0145e640;
uint DAT_0145e554;
undefined4 DAT_0145e540;
undefined DAT_0145e550;
uint DAT_0145e56c;
undefined4 DAT_0145e558;
undefined DAT_0145e568;
uint DAT_0145e5e4;
undefined4 DAT_0145e5d0;
undefined DAT_0145e5e0;
uint DAT_0145e4f4;
undefined4 DAT_0145e4e0;
undefined DAT_0145e4f0;
uint DAT_0145e584;
undefined4 DAT_0145e570;
undefined DAT_0145e580;
uint DAT_0145e5cc;
undefined4 DAT_0145e5b8;
undefined DAT_0145e5c8;
uint DAT_0145e5b4;
undefined4 DAT_0145e5a0;
undefined DAT_0145e5b0;
uint DAT_0145e4dc;
undefined4 DAT_0145e4c8;
undefined DAT_0145e4d8;
uint DAT_0145e59c;
undefined4 DAT_0145e588;
undefined DAT_0145e598;
undefined DAT_00ed985f;
undefined DAT_00ed9a1f;
undefined DAT_00ed9aef;
undefined DAT_00ed9b8d;
undefined DAT_00eda04f;
undefined DAT_00eda68f;
undefined DAT_00eda709;
undefined DAT_00edaabf;
undefined DAT_00edacff;
undefined DAT_00edaddc;
undefined DAT_00edc0c2;
undefined DAT_00f1edaf;
undefined DAT_00f1ee31;
int *DAT_01463b74;
int *DAT_01463b6c;
undefined DAT_00f2034f;
undefined DAT_00f207ff;
undefined DAT_0145ea30;
undefined4 DAT_0145dcb8;
undefined DAT_00f2986f;
undefined DAT_00f2c5a9;
undefined4 DAT_01463bb4;
undefined4 DAT_01463bb8;
int DAT_01463bbc;
undefined4 DAT_01463ba4;
undefined4 DAT_01463ba8;
int DAT_01463bac;
undefined DAT_00f2dc9f;
undefined DAT_00f3085f;
undefined DAT_00f30927;
int DAT_0145e448;
uint DAT_0145ec14;
undefined4 DAT_0145ec00;
undefined DAT_0145ec10;
uint DAT_0145ec2c;
undefined4 DAT_0145ec18;
undefined DAT_0145ec28;
undefined4 DAT_0145ec8c;
undefined4 DAT_0145ec90;
int DAT_0145ec94;
undefined4 DAT_0145ec68;
undefined4 DAT_0145ec6c;
int DAT_0145ec70;
undefined4 DAT_0145ec50;
undefined4 DAT_0145ec54;
int DAT_0145ec58;
undefined4 DAT_0145ec5c;
undefined4 DAT_0145ec60;
int DAT_0145ec64;
undefined4 DAT_0145ec80;
undefined4 DAT_0145ec84;
int DAT_0145ec88;
undefined4 DAT_0145ec74;
undefined4 DAT_0145ec78;
int DAT_0145ec7c;
undefined DAT_00f3272b;
int DAT_01464f88;
undefined DAT_01466738;
undefined DAT_00f344ef;
undefined DAT_00f346ff;
undefined DAT_00f3480f;
undefined DAT_00f3495f;
undefined DAT_00f34b6f;
undefined DAT_00f34c3f;
undefined DAT_00f34d2f;
int *DAT_0145eea4;
undefined4 DAT_0145ee8c;
int DAT_0145ee78;
int DAT_0145ee80;
undefined4 DAT_0145ee7c;
int DAT_0145ee58;
int DAT_0145ee60;
undefined4 DAT_0145ee5c;
uint DAT_0145edfc;
undefined1 DAT_0145ede8;
undefined4 DAT_0145edf8;
int *DAT_0145ede4;
int *DAT_0145eddc;
int *DAT_0145edc4;
undefined DAT_00f34f0e;
undefined4 DAT_0145ee00;
undefined DAT_00f35e0f;
undefined DAT_00f3678f;
undefined DAT_00f3685f;
undefined DAT_00f387ef;
undefined DAT_00f3970f;
undefined DAT_00f39c2f;
uint DAT_0145efa4;
undefined4 DAT_0145ef90;
undefined4 DAT_0145efa0;
undefined DAT_00f3a991;
undefined DAT_00f3abef;
undefined DAT_00f3aceb;
undefined4 DAT_013e0190;
undefined DAT_013e0194;
int DAT_013e0198;
undefined DAT_013e01a0;
uint DAT_012ba50c;
undefined4 DAT_012ba51c;
uint DAT_012ba554;
undefined DAT_012ba564;
uint DAT_012ba524;
undefined4 DAT_012ba534;
uint DAT_012ba53c;
undefined DAT_012ba54c;
undefined FUN_00f4ed50;
undefined4 DAT_013e0280;
int DAT_013e0298;
undefined4 DAT_013e026c;
undefined DAT_013e0270;
undefined4 DAT_013e028c;
undefined DAT_013e0290;
int *DAT_013e0258;
undefined4 DAT_013e02d0;
undefined DAT_013e02d4;
undefined4 DAT_013e02dc;
undefined DAT_013e02e0;
int DAT_013e0300;
int DAT_013e0304;
undefined4 DAT_013e0308;
char DAT_013e0cc0;
undefined4 DAT_013e0cc4;
int DAT_013e59a0;
int DAT_013e59a4;
undefined4 DAT_013e59a8;
undefined4 DAT_013e59ac;
undefined4 DAT_013e59b0;
undefined4 DAT_013e59b4;
int DAT_012baaa0;
undefined4 DAT_0145c2f0;
undefined4 *DAT_0145c314;
undefined DAT_0145c310;
undefined * *UNK_0145c378;
int *UNK_0145c3cc;
int *UNK_0145c3dc;
int *UNK_0145c3ec;
char UNK_0145c408;
int UNK_0145c40c;
int UNK_0145c410;
int UNK_0145c414;
undefined * *UNK_0145c5c0;
int *UNK_0145c614;
int *UNK_0145c624;
int *UNK_0145c634;
char UNK_0145c650;
int UNK_0145c654;
int UNK_0145c658;
int UNK_0145c65c;
uint DAT_012bac78;
undefined DAT_012bac80;

void Unwind_00f67870(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6787b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x18);
  }
  return;
}



void Unwind_00f678b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x30),0x28);
  }
  return;
}



void Unwind_00f678f0(void)

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



void Unwind_00f678f8(void)

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



void Unwind_00f67900(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xcc);
  *(undefined ***)(unaff_EBP + -0x78) = sh::BlockLayoutEncoder::vftable;
  *(undefined ***)(unaff_EBP + -0x80) = sh::BlockLayoutEncoder::vftable;
  *(undefined ***)(unaff_EBP + -0x88) = sh::BlockLayoutEncoder::vftable;
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + -0xb0);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xa8) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + -0xac) = 0;
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f6790b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x4c),0x28);
  }
  return;
}



void Unwind_00f67950(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x14) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f67958(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x1c) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f67960(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x38) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f67968(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x28);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x20) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f679a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f679a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f679b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f679f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67a30(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f67a3b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f67a46(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f67a51(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f67a5c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f67a67(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f67a72(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f67aa0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67ae0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf8) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf8) + 4);
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



void Unwind_00f67aeb(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x48) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x48));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f67af3(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x30) + 8);
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



void Unwind_00f67afb(void)

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



void Unwind_00f67b40(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x1c);
  }
  return;
}



void Unwind_00f67b70(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x24);
  }
  return;
}



void Unwind_00f67ba0(void)

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



void Unwind_00f67ba8(void)

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
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x40),0x28,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f67be0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67c20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67c60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67c68(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f67ca0(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + 8);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f67ce0(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + 8);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f67d20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f67d28(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67d60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67d68(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f67da0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f67da8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f67db0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67db8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f67df0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x78) = 0;
  return;
}



void Unwind_00f67df8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x60) = 0;
  return;
}



void Unwind_00f67e00(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x30) = 0;
  return;
}



void Unwind_00f67e08(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  return;
}



void Unwind_00f67e40(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x28);
  puStack_c = &DAT_00f1ee5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00775520(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f67e4b(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x30);
  puStack_c = &DAT_00f1ee5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00775520(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f67e56(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x38);
  puStack_c = &DAT_00f1ee5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00775520(piVar2,*(undefined4 *)(*piVar2 + 4),uVar1);
  func_0x008ab812(*piVar2,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f67e90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x4c) = 0;
  *(undefined4 *)(unaff_EBP + 0x50) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x3c) = 0;
  return;
}



void Unwind_00f67e98(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  *(undefined4 *)(unaff_EBP + 0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + 0xc) = 0;
  return;
}



void Unwind_00f67ea0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = 0;
  *(undefined4 *)(unaff_EBP + 0x38) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x24) = 0;
  return;
}



void Unwind_00f67ee0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f67ee8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f67ef0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67f30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f67f70(void)

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



void Unwind_00f67f78(void)

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
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x40),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f67fb0(void)

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



void Unwind_00f67fb8(void)

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



void Unwind_00f67fc0(void)

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



void Unwind_00f68000(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x60) = 0;
  return;
}



void Unwind_00f68008(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  return;
}



void Unwind_00f68010(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x78) = 0;
  return;
}



void Unwind_00f68018(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  return;
}



void Unwind_00f68050(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68058(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68090(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f68098(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f680a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f680e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd8) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xd8) = *(uint *)(unaff_EBP + -0xd8) & 0xfffffffe;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x70) = 0;
    return;
  }
  return;
}



void Unwind_00f680ff(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd8) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xd8) = *(uint *)(unaff_EBP + -0xd8) & 0xfffffffd;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x58) = 0;
    return;
  }
  return;
}



void Unwind_00f6811e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68129(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xd0) = 0;
  return;
}



void Unwind_00f68134(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f6813f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f6814a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68152(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f6815a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xd0) = 0;
  return;
}



void Unwind_00f681a0(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0xa8);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f681c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f681ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f681d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f681dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f681e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f681f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f681f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68203(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f6820e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68216(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f6821e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68226(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68260(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -100);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f68279(void)

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



void Unwind_00f68281(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x50),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f68289(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68291(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f682d0(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xbc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xbc) = *(uint *)(unaff_EBP + -0xbc) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0xe4);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f682f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f682fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68308(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f68313(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f6831b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68323(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f6832e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68336(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f6833e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f68380(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xfc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xfc) = *(uint *)(unaff_EBP + -0xfc) & 0xfffffffe;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x80) = 0;
    return;
  }
  return;
}



void Unwind_00f6839f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xfc) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xfc) = *(uint *)(unaff_EBP + -0xfc) & 0xfffffffd;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x50) = 0;
    return;
  }
  return;
}



void Unwind_00f683be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f683c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  return;
}



void Unwind_00f683d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f683dc(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xfc) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xfc) = *(uint *)(unaff_EBP + -0xfc) & 0xfffffffb;
    puVar1 = *(undefined1 **)(unaff_EBP + -0x108);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f683fe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe0) = 0;
  return;
}



void Unwind_00f68409(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f68411(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f68419(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f68424(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f6842c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe0) = 0;
  return;
}



void Unwind_00f68437(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  return;
}



void Unwind_00f68442(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f6844a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f68452(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f6845d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f68465(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  return;
}



void Unwind_00f684a0(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x15c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x15c) = *(uint *)(unaff_EBP + -0x15c) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0x160);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f684c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f684ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f684d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  return;
}



void Unwind_00f684e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f684e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f684f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f684fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  return;
}



void Unwind_00f68506(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe0) = 0;
  return;
}



void Unwind_00f68511(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68519(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f68524(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f6852f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  return;
}



void Unwind_00f6853a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x100) = 0;
  *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x110) = 0;
  return;
}



void Unwind_00f68545(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f6854d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f68558(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  return;
}



void Unwind_00f68563(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe0) = 0;
  return;
}



void Unwind_00f6856e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68576(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f6857e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68586(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f68591(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  return;
}



void Unwind_00f6859c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x148) = 0;
  *(undefined4 *)(unaff_EBP + -0x144) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x158) = 0;
  return;
}



void Unwind_00f685a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x130) = 0;
  *(undefined4 *)(unaff_EBP + -300) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x140) = 0;
  return;
}



void Unwind_00f685b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe0) = 0;
  return;
}



void Unwind_00f685bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  return;
}



void Unwind_00f685c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x118) = 0;
  *(undefined4 *)(unaff_EBP + -0x114) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x128) = 0;
  return;
}



void Unwind_00f685d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f685db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x100) = 0;
  *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x110) = 0;
  return;
}



void Unwind_00f685e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f685f1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f685fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68604(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x100) = 0;
  *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x110) = 0;
  return;
}



void Unwind_00f6860f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x130) = 0;
  *(undefined4 *)(unaff_EBP + -300) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x140) = 0;
  return;
}



void Unwind_00f6861a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f68625(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  return;
}



void Unwind_00f68630(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  return;
}



void Unwind_00f6863b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f68643(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x118) = 0;
  *(undefined4 *)(unaff_EBP + -0x114) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x128) = 0;
  return;
}



void Unwind_00f6864e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68690(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68698(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f686a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f686ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f686b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f686be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f686c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f686d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f686d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f686e1(void)

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



void Unwind_00f686e9(void)

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
  if (*(int *)(unaff_EBP + -0xe4) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0xe4),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f686f4(void)

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



void Unwind_00f686fc(void)

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



void Unwind_00f68704(void)

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
  if (*(int *)(unaff_EBP + -0xec) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0xec),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6870f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f68717(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f6871f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffe;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x58) = 0;
    return;
  }
  return;
}



void Unwind_00f68770(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x114);
  if (*piVar1 != 0) {
    func_0x00b1a9f0(*piVar1,*(undefined4 *)(unaff_EBP + -0x110),piVar1);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x110) = 0;
    *(undefined4 *)(unaff_EBP + -0x10c) = 0;
  }
  return;
}



void Unwind_00f6877b(void)

{
  int unaff_EBP;
  
  func_0x00b84d20((int *)(unaff_EBP + -0x70),*(undefined4 *)(*(int *)(unaff_EBP + -0x70) + 4));
  return;
}



void Unwind_00f68783(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x108);
  if (*piVar1 != 0) {
    func_0x00b1a9f0(*piVar1,*(undefined4 *)(unaff_EBP + -0x104),piVar1);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x104) = 0;
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
  }
  return;
}



void Unwind_00f6878e(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0xfc);
  if (*piVar1 != 0) {
    func_0x00b1a9f0(*piVar1,*(undefined4 *)(unaff_EBP + -0xf8),piVar1);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0xf8) = 0;
    *(undefined4 *)(unaff_EBP + -0xf4) = 0;
  }
  return;
}



void Unwind_00f68799(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(*(int *)(unaff_EBP + -0xb0) + 4) = 0;
  return;
}



void Unwind_00f687a4(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xa8) != 0) {
    *(int *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  }
  return;
}



void Unwind_00f687af(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xa8) != 0) {
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  }
  **(undefined4 **)(*(int *)(unaff_EBP + -0xb0) + 4) = 0;
  return;
}



void Unwind_00f687ba(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x94) != 0) {
    *(int *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  }
  return;
}



void Unwind_00f687c5(void)

{
  int unaff_EBP;
  
  func_0x00b84d20((int *)(unaff_EBP + -100),*(undefined4 *)(*(int *)(unaff_EBP + -100) + 4));
  return;
}



void Unwind_00f687cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68810(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x28);
  }
  return;
}



void Unwind_00f68818(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x28);
  }
  return;
}



void Unwind_00f68850(void)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    puVar1 = *(undefined1 **)(unaff_EBP + -0x20);
    for (puVar4 = *(undefined1 **)(unaff_EBP + -0x24); puVar4 != puVar1; puVar4 = puVar4 + 0x18) {
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *puVar4 = 0;
    }
    iVar2 = *(int *)(unaff_EBP + -0x2c);
    uVar6 = *(int *)(unaff_EBP + -0x28) * 0x18;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  return;
}



void Unwind_00f68880(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  if (iVar1 != 0) {
    uVar3 = *(int *)(unaff_EBP + -0x30) * 0xa0;
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
  }
  return;
}



void Unwind_00f688b0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  func_0x00b28710(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f688bb(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xc);
  func_0x00b28710(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f688c6(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int iVar8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  piVar7 = (int *)(iVar3 + 0x14);
  puVar5 = (undefined1 *)*piVar7;
  if (puVar5 != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(iVar3 + 0x18);
    for (; puVar5 != puVar1; puVar5 = puVar5 + 0x18) {
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *puVar5 = 0;
    }
    iVar2 = *piVar7;
    uVar6 = ((*(int *)(iVar3 + 0x1c) - iVar2) / 0x18) * 0x18;
    iVar8 = iVar2;
    if (0xfff < uVar6) {
      iVar8 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar8) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar8,uVar6);
    *piVar7 = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
  }
  return;
}



void Unwind_00f68900(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)(unaff_EBP + -200) = 0;
  return;
}



void Unwind_00f6890b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x148) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x148) = *(uint *)(unaff_EBP + -0x148) & 0xfffffffe;
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
    *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x110) = 0;
    return;
  }
  return;
}



void Unwind_00f6892d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f68938(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x148) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x148) = *(uint *)(unaff_EBP + -0x148) & 0xfffffffb;
    puVar1 = *(undefined1 **)(unaff_EBP + -0x15c);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6895a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f68962(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x148) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x148) = *(uint *)(unaff_EBP + -0x148) & 0xfffffff7;
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
    *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xb0) = 0;
    return;
  }
  return;
}



void Unwind_00f68984(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x148) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x148) = *(uint *)(unaff_EBP + -0x148) & 0xffffffef;
    *(undefined4 *)(unaff_EBP + -0xe8) = 0;
    *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xf8) = 0;
    return;
  }
  return;
}



void Unwind_00f689a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f689ae(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x148) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x148) = *(uint *)(unaff_EBP + -0x148) & 0xfffffbff;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x68) = 0;
    return;
  }
  return;
}



void Unwind_00f689d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe0) = 0;
  return;
}



void Unwind_00f689dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f689e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f689ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x118) = 0;
  *(undefined4 *)(unaff_EBP + -0x114) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x128) = 0;
  return;
}



void Unwind_00f689f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe0) = 0;
  return;
}



void Unwind_00f68a03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68a0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x130) = 0;
  *(undefined4 *)(unaff_EBP + -300) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x140) = 0;
  return;
}



void Unwind_00f68a16(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f68a1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f68a26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x118) = 0;
  *(undefined4 *)(unaff_EBP + -0x114) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x128) = 0;
  return;
}



void Unwind_00f68a60(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x9c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x9c) = *(uint *)(unaff_EBP + -0x9c) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0xb0);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f68a82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68a8a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f68a95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f68a9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f68aa5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f68ae0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68ae8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68af3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68afb(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1a8) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1a8) = *(uint *)(unaff_EBP + -0x1a8) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0x1c8);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f68b1d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68b28(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68b30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f68b3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f68b43(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c4);
  if (iVar1 != 0) {
    uVar3 = ((*(int *)(unaff_EBP + -0x1bc) - iVar1) / 0xa0) * 0xa0;
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
    *(int *)(unaff_EBP + -0x1c4) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c0) = 0;
    *(undefined4 *)(unaff_EBP + -0x1bc) = 0;
  }
  return;
}



void Unwind_00f68b4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68b59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68b64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68b6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68b74(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68b7c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x100) = 0;
  return;
}



void Unwind_00f68b87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xd0) = 0;
  return;
}



void Unwind_00f68b92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68b9a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68ba5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe8) = 0;
  return;
}



void Unwind_00f68bb0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f68bbb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68bc6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68bce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68bd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68be1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68be9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68bf4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68bfc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68c07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f68c12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68c50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68c58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68c60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f68c68(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68c73(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f68c7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68c83(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar1 = *(int *)(unaff_EBP + -0x98);
  if (iVar1 != 0) {
    uVar3 = ((*(int *)(unaff_EBP + -0x90) - iVar1) / 0xa0) * 0xa0;
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
    *(int *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
  }
  return;
}



void Unwind_00f68c8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68c99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68ca4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68cac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f68cb7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68cf0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68cf8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x5c) = 0;
  return;
}



void Unwind_00f68d00(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xdc) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0xdc),0x2c);
  }
  return;
}



void Unwind_00f68d0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa4) = 0;
  return;
}



void Unwind_00f68d16(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68d1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68d26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x8c) = 0;
  return;
}



void Unwind_00f68d31(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xbc) = 0;
  return;
}



void Unwind_00f68d3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68d44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68d4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f68d54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  *(undefined4 *)(unaff_EBP + -0xc0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xd4) = 0;
  return;
}



void Unwind_00f68d5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x74) = 0;
  return;
}



void Unwind_00f68d67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f68d6f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68db0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68df0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f68df8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f68e03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f68e0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68e13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f68e1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x80) = 0;
  return;
}



void Unwind_00f68e23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  return;
}



void Unwind_00f68e2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f68e36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68e70(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x6c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x6c) = *(uint *)(unaff_EBP + -0x6c) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0x78);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f68e89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  return;
}



void Unwind_00f68e91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f68e99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f68ed0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f68ed8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x34),0x2c);
  }
  return;
}



void Unwind_00f68ee0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x34),0x2c);
  }
  return;
}



void Unwind_00f68f20(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x14) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_00a1145d;
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  uVar4 = *(uint *)(unaff_EBP + -0x20);
  if (0xf < uVar4) {
    iVar1 = *(int *)(unaff_EBP + -0x34);
    uVar5 = uVar4 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar4 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_00a1145d:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  return;
}



void Unwind_00f68f60(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x20);
  }
  return;
}



void Unwind_00f68f90(void)

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



void Unwind_00f68fd0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x88) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x34) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x58);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x50) - iVar2 & 0xfffffff0;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x74);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x70),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x6c) - iVar2) / 0x14) * 0x14;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  return;
}



void Unwind_00f68fdb(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x18) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f68fe3(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x18) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined ***)(unaff_EBP + -0x88) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x34) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x58);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x50) - iVar2 & 0xfffffff0;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x74);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x70),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x6c) - iVar2) / 0x14) * 0x14;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)(unaff_ESI);
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  return;
}



void Unwind_00f69020(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x78);
  if (*piVar1 != 0) {
    func_0x00b91610(*piVar1,*(undefined4 *)(unaff_EBP + -0x74),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x70) - iVar2) / 0xc) * 0xc;
    iVar5 = iVar2;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  return;
}



void Unwind_00f69028(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0xc4);
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



void Unwind_00f69044(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x114) + 4) + -8 + unaff_EBP + -0x10c) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x114) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0x10c) = iVar1 + -8;
  return;
}



void Unwind_00f6904f(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xc4);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x114) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x114) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x114) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x114) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6905a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffe;
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



void Unwind_00f69073(void)

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



void Unwind_00f6907b(void)

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



void Unwind_00f690c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
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



void Unwind_00f690d9(void)

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



void Unwind_00f69110(void)

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



void Unwind_00f69150(void)

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



void Unwind_00f69158(void)

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



void Unwind_00f69160(void)

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



void Unwind_00f6916b(void)

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



void Unwind_00f69173(void)

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



void Unwind_00f6917b(void)

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



void Unwind_00f69183(void)

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



void Unwind_00f6918b(void)

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



void Unwind_00f69193(void)

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



void Unwind_00f6919b(void)

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



void Unwind_00f691a3(void)

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



void Unwind_00f691ab(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0xf4) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0xf4));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f691b6(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x108) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x108) + 8);
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



void Unwind_00f691c1(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0xfc) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0xfc));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f691cc(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x140) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x140) + 8);
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



void Unwind_00f691d7(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x104) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x104));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f691e2(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x130) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x130) + 8);
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



void Unwind_00f691ed(void)

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



void Unwind_00f691f5(void)

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



void Unwind_00f691fd(void)

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



void Unwind_00f69240(void)

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



void Unwind_00f69248(void)

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



void Unwind_00f69250(void)

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



void Unwind_00f69258(void)

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



void Unwind_00f69260(void)

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



void Unwind_00f69268(void)

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



void Unwind_00f69270(void)

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



void Unwind_00f692b0(void)

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



void Unwind_00f692b8(void)

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



void Unwind_00f692f0(void)

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



void Unwind_00f692f8(void)

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



void Unwind_00f69300(void)

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



void Unwind_00f69308(void)

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



void Unwind_00f69310(void)

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



void Unwind_00f69318(void)

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



void Unwind_00f69350(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xb8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xc4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xb8) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0xb8);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f6936c(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x160))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x16c);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x160) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x160);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f693b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x80);
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



void Unwind_00f693c9(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -8 + unaff_EBP + -200) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -200) = iVar1 + -8;
  return;
}



void Unwind_00f693d4(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f693df(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x38) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x38));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f693e7(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x28) + 8);
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



void Unwind_00f693ef(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xffffffef;
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



void Unwind_00f69430(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x00b994e0(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                    *(undefined4 *)(unaff_EBP + -0x2c));
    iVar1 = *(int *)(unaff_EBP + -0x28);
    uVar4 = *(int *)(unaff_EBP + -0x24) * 0x28;
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
  }
  return;
}



void Unwind_00f69460(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x2c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f69468(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -100);
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



void Unwind_00f69470(void)

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



void Unwind_00f694b0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x00a1a8c0(*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                    *(undefined4 *)(unaff_EBP + -0x30));
    iVar1 = *(int *)(unaff_EBP + -0x2c);
    uVar4 = *(int *)(unaff_EBP + -0x28) * 0x24;
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
  }
  return;
}



void Unwind_00f694e0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x20);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x34);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  return;
}



void Unwind_00f69520(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x6c),0x48);
  return;
}



void Unwind_00f6952f(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x60);
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



void Unwind_00f69537(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  uVar4 = *(uint *)(unaff_EBP + -0x34);
  if (0xf < uVar4) {
    iVar5 = *(int *)(unaff_EBP + -0x48);
    uVar7 = uVar4 + 1;
    iVar6 = iVar5;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar7 = uVar4 + 0x24;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  return;
}



void Unwind_00f6953f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x6c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x6c),0x30);
  }
  return;
}



void Unwind_00f69580(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f69750;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -0x6c) = angle::pp::MacroExpander::vftable;
  piVar1 = *(int **)(unaff_EBP + -0x50);
  for (piVar7 = *(int **)(unaff_EBP + -0x54); piVar7 != piVar1; piVar7 = piVar7 + 1) {
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      func_0x00b99a90(uVar5);
      piVar3 = *(int **)(iVar2 + 4);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar6 = piVar3[1] + -1;
        piVar3[1] = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar4 = *(code **)*piVar3;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar6 = piVar3[2] + -1;
          piVar3[2] = iVar6;
          UNLOCK();
          if (iVar6 == 0) {
            pcVar4 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
      func_0x008ab812(iVar2,0x18);
    }
  }
  func_0x00b9d070();
  iVar2 = *(int *)(unaff_EBP + -0x54);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x4c) - iVar2 & 0xfffffffc;
    iVar6 = iVar2;
    if (0xfff < uVar5) {
      iVar6 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar5);
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  func_0x00b9d010();
  func_0x00ba30c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f695b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x88);
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



void Unwind_00f695cc(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd8) + 4) + -8 + unaff_EBP + -0xd0) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0xd8) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0xd0) = iVar1 + -8;
  return;
}



void Unwind_00f695d7(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f695e2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffff7;
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



void Unwind_00f695fb(void)

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



void Unwind_00f69640(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f69750;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -100) = angle::pp::MacroExpander::vftable;
  piVar1 = *(int **)(unaff_EBP + -0x48);
  for (piVar7 = *(int **)(unaff_EBP + -0x4c); piVar7 != piVar1; piVar7 = piVar7 + 1) {
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      func_0x00b99a90(uVar5);
      piVar3 = *(int **)(iVar2 + 4);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar6 = piVar3[1] + -1;
        piVar3[1] = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar4 = *(code **)*piVar3;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar6 = piVar3[2] + -1;
          piVar3[2] = iVar6;
          UNLOCK();
          if (iVar6 == 0) {
            pcVar4 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
      func_0x008ab812(iVar2,0x18);
    }
  }
  func_0x00b9d070();
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x44) - iVar2 & 0xfffffffc;
    iVar6 = iVar2;
    if (0xfff < uVar5) {
      iVar6 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar5);
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  func_0x00b9d010();
  func_0x00ba30c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69670(void)

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



void Unwind_00f69678(void)

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



void Unwind_00f696b0(void)

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



void Unwind_00f696b8(void)

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



void Unwind_00f696f0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    func_0x00b994e0(*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                    *(undefined4 *)(unaff_EBP + -0x40));
    iVar1 = *(int *)(unaff_EBP + -0x3c);
    uVar4 = *(int *)(unaff_EBP + -0x38) * 0x28;
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
  }
  return;
}



void Unwind_00f69720(void)

{
  int unaff_EBP;
  
  func_0x00b994e0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                  *(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void FUN_00f69750(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f69770(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x14);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x28);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f69778(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x58);
  if (*piVar1 != 0) {
    func_0x00b994e0(*piVar1,*(undefined4 *)(unaff_EBP + -0x54),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x50) - iVar2) / 0x28) * 0x28;
    iVar5 = iVar2;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00b9d2cd)
// WARNING: Removing unreachable block (ram,0x00b9d2d8)
// WARNING: Removing unreachable block (ram,0x00b9d2e8)
// WARNING: Removing unreachable block (ram,0x00b9d345)
// WARNING: Removing unreachable block (ram,0x00b9d2f8)

void Unwind_00f69780(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(unaff_EBP + -0x84);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined1 *)(*piVar4 + 0x30) = 0;
  piVar1 = *(int **)(*piVar4 + 0x38);
  for (piVar3 = *(int **)(*piVar4 + 0x34); piVar3 != piVar1; piVar3 = piVar3 + 2) {
    *(undefined1 *)(*piVar3 + 1) = 0;
  }
  iVar2 = *piVar4;
  piVar4 = (int *)(iVar2 + 0x34);
  if (*piVar4 != *(int *)(iVar2 + 0x38)) {
    func_0x00b9c7c0(*piVar4,*(int *)(iVar2 + 0x38),piVar4);
    *(int *)(iVar2 + 0x38) = *piVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6978b(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x58);
  if (*piVar1 != 0) {
    func_0x00b994e0(*piVar1,*(undefined4 *)(unaff_EBP + -0x54),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x50) - iVar2) / 0x28) * 0x28;
    iVar5 = iVar2;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  return;
}



void Unwind_00f69793(void)

{
  int unaff_EBP;
  
  func_0x00b99a90();
  *(undefined ***)(unaff_EBP + -0x78) = angle::pp::Lexer::vftable;
  return;
}



void Unwind_00f6979b(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f69750;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -0xc4) = angle::pp::MacroExpander::vftable;
  piVar1 = *(int **)(unaff_EBP + -0xa8);
  for (piVar7 = *(int **)(unaff_EBP + -0xac); piVar7 != piVar1; piVar7 = piVar7 + 1) {
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      func_0x00b99a90(uVar5);
      piVar3 = *(int **)(iVar2 + 4);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar6 = piVar3[1] + -1;
        piVar3[1] = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar4 = *(code **)*piVar3;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar6 = piVar3[2] + -1;
          piVar3[2] = iVar6;
          UNLOCK();
          if (iVar6 == 0) {
            pcVar4 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
      func_0x008ab812(iVar2,0x18);
    }
  }
  func_0x00b9d070();
  iVar2 = *(int *)(unaff_EBP + -0xac);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xa4) - iVar2 & 0xfffffffc;
    iVar6 = iVar2;
    if (0xfff < uVar5) {
      iVar6 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar5);
    *(undefined4 *)(unaff_EBP + -0xac) = 0;
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  }
  func_0x00b9d010();
  func_0x00ba30c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f697e0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    iVar5 = *(int *)(unaff_EBP + -0x18);
    for (; iVar4 != iVar5; iVar4 = iVar4 + 0xc) {
      func_0x00b99a90();
    }
    iVar4 = *piVar1;
    uVar3 = ((*(int *)(unaff_EBP + -0x14) - iVar4) / 0xc) * 0xc;
    iVar5 = iVar4;
    if (0xfff < uVar3) {
      iVar5 = *(int *)(iVar4 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar4 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f69820(void)

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



void Unwind_00f69828(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x14);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x28);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f69830(void)

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



void Unwind_00f69870(void)

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



void Unwind_00f69878(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x24);
  if (*piVar1 != 0) {
    func_0x00b994e0(*piVar1,*(undefined4 *)(unaff_EBP + -0x20),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x1c) - iVar2) / 0x28) * 0x28;
    iVar5 = iVar2;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f698b0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x28);
  return;
}



void Unwind_00f698f0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = angle::pp::Lexer::vftable;
  return;
}



void Unwind_00f69920(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x18) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f69950(void)

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



void Unwind_00f69958(void)

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



void Unwind_00f69990(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x100);
  }
  return;
}



void Unwind_00f69998(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x100);
  }
  return;
}



void Unwind_00f699a0(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined1 **)(unaff_EBP + -0x10);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0xf;
  *puVar1 = 0;
  return;
}



void Unwind_00f699a8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  return;
}



void Unwind_00f699e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x118) = 0;
  *(undefined4 *)(unaff_EBP + -0x114) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x128) = 0;
  return;
}



void Unwind_00f699eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x100) = 0;
  *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x110) = 0;
  return;
}



void Unwind_00f699f6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x100) = 0;
  *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x110) = 0;
  *(undefined4 *)(unaff_EBP + -0x118) = 0;
  *(undefined4 *)(unaff_EBP + -0x114) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x128) = 0;
  return;
}



void Unwind_00f69a01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x130) = 0;
  *(undefined4 *)(unaff_EBP + -300) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x140) = 0;
  return;
}



void Unwind_00f69a0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return;
}



void Unwind_00f69a14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x130) = 0;
  *(undefined4 *)(unaff_EBP + -300) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x140) = 0;
  return;
}



void Unwind_00f69a50(void)

{
  func_0x008ab391(&DAT_013dea90);
  return;
}



void Unwind_00f69a80(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2b573;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb8) + 4) + -0x60 + (int)puVar1) =
       std::basic_istringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb8) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x60;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb8) + 4) + -0x60 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb8) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69ab0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2b573;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb4) + 4) + -0x60 + (int)puVar1) =
       std::basic_istringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb4) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x60;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb4) + 4) + -0x60 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb4) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69ae0(void)

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



void Unwind_00f69ae8(void)

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



void Unwind_00f69b20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x464) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x464) = *(uint *)(unaff_EBP + -0x464) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x4e0);
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



void Unwind_00f69b42(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -8 + unaff_EBP + -0x528) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0x528) = iVar1 + -8;
  return;
}



void Unwind_00f69b4d(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x4e0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69b58(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x568) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x568));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69b63(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x674) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x674) + 8);
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



void Unwind_00f69b6e(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x570) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x570));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69b79(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x6cc) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x6cc) + 8);
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



void Unwind_00f69b84(void)

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



void Unwind_00f69b8f(void)

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



void Unwind_00f69b9a(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x464) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x464) = *(uint *)(unaff_EBP + -0x464) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x4e0);
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



void Unwind_00f69bbc(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -8 + unaff_EBP + -0x528) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0x528) = iVar1 + -8;
  return;
}



void Unwind_00f69bc7(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x4e0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69bd2(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x578) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x578));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69bdd(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x6e4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x6e4) + 8);
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



void Unwind_00f69be8(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
