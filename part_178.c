  
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x2c) + 8);
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



void Unwind_00f5f67b(void)

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



void Unwind_00f5f6c0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x6c) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x20);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x18) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x34) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x58);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x54),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x50) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  return;
}



void Unwind_00f5f6f0(void)

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



void Unwind_00f5f6fb(void)

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



void Unwind_00f5f740(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0xf;
  *(undefined1 *)(iVar1 + 0x60) = 0;
  return;
}



void Unwind_00f5f74b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x7c);
  *puVar1 = sh::TDirectiveHandler::vftable;
  *puVar1 = angle::pp::DirectiveHandler::vftable;
  return;
}



void Unwind_00f5f756(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x94);
  if (iVar1 != 0) {
    func_0x00b9d150();
    func_0x00b9a4a0();
    func_0x00b9f020();
    func_0x00b66b80((undefined4 *)(iVar1 + 4),*(undefined4 *)(*(int *)(iVar1 + 4) + 4));
    func_0x008ab812(*(undefined4 *)(iVar1 + 4),0x30);
    func_0x008ab812(iVar1,0xb4);
  }
  return;
}



void Unwind_00f5f764(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xe4);
  func_0x00af9250(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x24);
  return;
}



void Unwind_00f5f7a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x24);
  }
  return;
}



void Unwind_00f5f7d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x58);
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



void Unwind_00f5f7e9(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc0) + 4) + -0x20 + unaff_EBP + -0xa0) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc0) + 4);
  *(int *)(iVar2 + -0x24 + unaff_EBP + -0xa0) = iVar2 + -0x20;
  iVar2 = unaff_EBP + -0xa8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc0) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xc0) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f5f7f4(void)

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



void Unwind_00f5f830(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f5f83b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f5f870(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f5f8a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f5f8a8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f5f8b3(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f5f8be(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f5f8f0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f5f920(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x174));
  return;
}



void Unwind_00f5f92e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x174));
  return;
}



void Unwind_00f5f93c(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x174) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f5f947(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x174));
  return;
}



void Unwind_00f5f955(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x174));
  return;
}



void Unwind_00f5f9a0(void)

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



void Unwind_00f5f9a8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x130));
  return;
}



void Unwind_00f5f9b6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x134));
  return;
}



void Unwind_00f5f9c4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x134));
  return;
}



void Unwind_00f5f9d2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14c));
  return;
}



void Unwind_00f5f9e0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x138));
  return;
}



void Unwind_00f5f9ee(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x134));
  return;
}



void Unwind_00f5fa30(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f5fa3b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f5fa46(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f5fa80(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xb8));
  return;
}



void Unwind_00f5fac0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0xd4);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0xcc) - iVar1 & 0xfffffff8;
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
    *(int *)(unaff_EBP + -0xd4) = 0;
    *(undefined4 *)(unaff_EBP + -0xd0) = 0;
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  }
  return;
}



void Unwind_00f5facb(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0xe0);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0xd8) - iVar1 & 0xfffffff8;
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
    *(int *)(unaff_EBP + -0xe0) = 0;
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  }
  return;
}



void Unwind_00f5fb10(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xb4));
  return;
}



void Unwind_00f5fb1e(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0xb4) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f5fb60(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -100));
  return;
}



void Unwind_00f5fb6b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x54));
  return;
}



void Unwind_00f5fb76(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x11c) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x11c) + 4);
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



void Unwind_00f5fb81(void)

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



void Unwind_00f5fbc0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x94));
  return;
}



void Unwind_00f5fc00(void)

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



void Unwind_00f5fc08(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f5fc40(void)

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



void Unwind_00f5fc80(void)

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



void Unwind_00f5fcc0(void)

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



void Unwind_00f5fcc8(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x118) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x118) + 4);
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



void Unwind_00f5fcd3(void)

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



void Unwind_00f5fd10(void)

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



void Unwind_00f5fd50(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe4) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe4) + 4);
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



void Unwind_00f5fd5b(void)

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



void Unwind_00f5fda0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe0) + 4);
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



void Unwind_00f5fdab(void)

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



void Unwind_00f5fdf0(void)

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



void Unwind_00f5fdf8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xb4) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0xb4),0x18);
  }
  return;
}



void Unwind_00f5fe40(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x118) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x118) + 4);
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



void Unwind_00f5fe4b(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x50) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x50));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f5fe53(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x54) + 8);
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



void Unwind_00f5fe5b(void)

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



void Unwind_00f5fea0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f5fed0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f5fedb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f5ff10(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f5ff40(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f5ff70(void)

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



void Unwind_00f5ff78(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f5ff83(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f5ffc0(void)

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



void Unwind_00f60000(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f6000b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60040(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60070(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f6007b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f600b0(void)

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



void Unwind_00f600b8(void)

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



void Unwind_00f600c0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xf4));
  return;
}



void Unwind_00f600ce(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xf0));
  return;
}



void Unwind_00f60110(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x180);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1e8) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1e8) + 4);
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



void Unwind_00f6011b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  if (0xf < *(uint *)(unaff_EBP + -0x7c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c));
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f60160(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xa4));
  return;
}



void Unwind_00f6016e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xa0));
  return;
}



void Unwind_00f601b0(void)

{
  uint *puVar1;
  uint uVar2;
  uint *unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 2) != 0) {
    *unaff_EBP = *unaff_EBP & 0xfffffffd;
    puVar1 = unaff_EBP + -0x15;
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar1 = (uint)std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar1 = (uint)std::ios_base::vftable;
    func_0x00e706cb(puVar1,uVar2,puVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f601c9(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x20 + unaff_EBP + -0x9c) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
  *(int *)(iVar2 + -0x24 + unaff_EBP + -0x9c) = iVar2 + -0x20;
  iVar2 = unaff_EBP + -0xa4;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xac) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xac) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f601d4(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
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



void Unwind_00f601df(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x14);
  if (0xf < *(uint *)(unaff_EBP + 0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x28));
  }
  *(undefined4 *)(unaff_EBP + 0x24) = 0;
  *(undefined4 *)(unaff_EBP + 0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f60220(void)

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



void Unwind_00f6022b(void)

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



void Unwind_00f60270(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x164));
  return;
}



void Unwind_00f6027e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x168));
  return;
}



void Unwind_00f602c0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f602cb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f602d6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f602e1(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f60320(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6032b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60336(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60370(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xc0));
  return;
}



void Unwind_00f6037e(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0xc0) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f60389(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xc0));
  return;
}



void Unwind_00f60397(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xc0));
  return;
}



void Unwind_00f603a5(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0xc0) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f603b0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xc0));
  return;
}



void Unwind_00f603be(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xc0));
  return;
}



void Unwind_00f60400(void)

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



void Unwind_00f60440(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x70) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x24);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x1c) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x40);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x38) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x5c);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x58),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x54) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  return;
}



void Unwind_00f60470(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x7c) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x28) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x44) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x68);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -100),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x60) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  return;
}



void Unwind_00f604a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + 0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + 0x20) = *(uint *)(unaff_EBP + 0x20) & 0xfffffffe;
    puStack_c = &DAT_00eac7d3;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    puVar1 = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x68 + (int)puVar1) =
         std::basic_stringstream<>::vftable;
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
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
  return;
}



void Unwind_00f604bc(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + 0x20) & 2) != 0) {
    *(uint *)(unaff_EBP + 0x20) = *(uint *)(unaff_EBP + 0x20) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x54);
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



void Unwind_00f604d5(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x20 + unaff_EBP + -0x9c) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
  *(int *)(iVar2 + -0x24 + unaff_EBP + -0x9c) = iVar2 + -0x20;
  iVar2 = unaff_EBP + -0xa4;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xac) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xac) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f604e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x24);
  if (0xf < *(uint *)(unaff_EBP + 0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x38));
  }
  *(undefined4 *)(unaff_EBP + 0x34) = 0;
  *(undefined4 *)(unaff_EBP + 0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f60520(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -0x7c) = sh::TLValueTrackingTraverser::vftable;
  *(undefined4 *)(unaff_EBP + -0x7c) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x28) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x44) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x68);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -100),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x60) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  return;
}



void Unwind_00f60528(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x10) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  return;
}



void Unwind_00f60530(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x10) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = sh::TLValueTrackingTraverser::vftable;
  *(undefined4 *)(unaff_EBP + -0x7c) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x28) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x44) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x68);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -100),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x60) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  return;
}



void Unwind_00f60560(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
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
    func_0x008ab812(iVar4,uVar5);
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
    func_0x008ab812(iVar4,uVar5);
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



void Unwind_00f60568(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x10) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
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



void Unwind_00f605a0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x98) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x44) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x68);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x60) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x84);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x80),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x7c) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  return;
}



void Unwind_00f605ab(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x30) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f605b3(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x24) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f605bb(void)

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



void Unwind_00f605c3(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x004c7eb0();
  iVar2 = *(int *)(unaff_EBP + -0x20);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x18) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b0bd88;
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
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b0bd88;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x38);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x30) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00b0bd88:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  *(undefined ***)(unaff_EBP + -0x98) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x44) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x68);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x60) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x84);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x80),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x7c) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  return;
}



void Unwind_00f60600(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x7c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x74) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x7c) = 0;
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
  }
  return;
}



void Unwind_00f60608(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x70);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x68) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  return;
}



void Unwind_00f60610(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffd;
    puStack_c = &DAT_00eac7d3;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    puVar1 = (undefined4 *)(unaff_EBP + -0xc4);
    *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -300) + 4) + -0x68 + (int)puVar1) =
         std::basic_stringstream<>::vftable;
    iVar2 = *(int *)(*(int *)(unaff_EBP + -300) + 4);
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
  return;
}



void Unwind_00f6062c(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffb;
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



void Unwind_00f60648(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -300) + 4) + -0x20 + unaff_EBP + -0x10c) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -300) + 4);
  *(int *)(iVar2 + -0x24 + unaff_EBP + -0x10c) = iVar2 + -0x20;
  iVar2 = unaff_EBP + -0x114;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x11c) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x11c) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -300) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -300) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f60653(void)

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



void Unwind_00f60690(void)

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
  if (*(int *)(unaff_EBP + 0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + 0x20),0x14,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f606c0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
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
    func_0x008ab812(iVar4,uVar5);
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
    func_0x008ab812(iVar4,uVar5);
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



void Unwind_00f606c8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x10) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  return;
}



void Unwind_00f606d0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x10) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
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



void Unwind_00f60700(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x80);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x6c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x7c) = 0;
  *(undefined4 *)(unaff_EBP + 0x80) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x6c) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x68);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x54);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 100) = 0;
  *(undefined4 *)(unaff_EBP + 0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x54) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0x38);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x40) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
    *(undefined4 *)(unaff_EBP + 0x3c) = 0;
    *(undefined4 *)(unaff_EBP + 0x40) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0x34);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x20);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + 0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x1c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + 8) = 0;
  return;
}



void Unwind_00f60708(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x134);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x120);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x130) = 0;
  *(undefined4 *)(unaff_EBP + 0x134) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x120) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x11c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x108);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x118) = 0;
  *(undefined4 *)(unaff_EBP + 0x11c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x108) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0xec);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0xf4) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0xec) = 0;
    *(undefined4 *)(unaff_EBP + 0xf0) = 0;
    *(undefined4 *)(unaff_EBP + 0xf4) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0xe8);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0xd4);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0xe4) = 0;
  *(undefined4 *)(unaff_EBP + 0xe8) = 0xf;
  *(undefined1 *)(unaff_EBP + 0xd4) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0xd0);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0xbc);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0xcc) = 0;
  *(undefined4 *)(unaff_EBP + 0xd0) = 0xf;
  *(undefined1 *)(unaff_EBP + 0xbc) = 0;
  return;
}



void Unwind_00f60750(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + -0x84);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x98);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x98) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x9c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xb0);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + -0xcc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xc4) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0xd0);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xe4);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xd4) = 0;
  *(undefined4 *)(unaff_EBP + -0xd0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe4) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0xe8);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xfc);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xec) = 0;
  *(undefined4 *)(unaff_EBP + -0xe8) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xfc) = 0;
  return;
}



void Unwind_00f6075b(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x11c) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f60766(void)

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



void Unwind_00f6076e(void)

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



void Unwind_00f60776(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x164);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x148);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x140) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x148) = 0;
    *(undefined4 *)(unaff_EBP + -0x144) = 0;
    *(undefined4 *)(unaff_EBP + -0x140) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f607b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    puStack_c = &DAT_00eac7d3;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
    *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x118) + 4) + -0x68 + (int)puVar1) =
         std::basic_stringstream<>::vftable;
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x118) + 4);
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
  return;
}



void Unwind_00f607cc(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
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



void Unwind_00f607e8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x118) + 4) + -0x20 + unaff_EBP + -0xf8) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x118) + 4);
  *(int *)(iVar2 + -0x24 + unaff_EBP + -0xf8) = iVar2 + -0x20;
  iVar2 = unaff_EBP + -0x100;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x108) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x108) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x118) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x118) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f607f3(void)

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



void Unwind_00f607fb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x58),0x1c);
  }
  return;
}



void Unwind_00f60840(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x18);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x00b0ce70(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x1c);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x1c);
  return;
}



void Unwind_00f60870(void)

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
    uVar5 = *(int *)(unaff_EBP + -0x14) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b0cf9b;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x28);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x20) - iVar2 & 0xfffffffc;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00b0cf9b:
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
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
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
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
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



void Unwind_00f608a0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x68) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x14) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x38);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x30) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x54);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x50),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x4c) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f608d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f608d8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f608e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f60910(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f6091b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60926(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f6092e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f60936(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f60970(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6097b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60986(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f60991(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f60999(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f609d0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f609db(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f609e6(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f609ee(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f609f6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60a01(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60a0c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f60a14(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f60a1f(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f60a2a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60a35(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f60a40(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f60a80(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f60a88(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60a93(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60a9e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60aa9(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60ab4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60abf(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60aca(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60ad5(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f60ae0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60aeb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60b30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f60b38(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x28) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f60b40(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f60b4b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60b80(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60b8b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    *(int *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f60bc0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f60bcb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f60c00(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x78) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x24) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x48);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x40) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -100);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x60),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x5c) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  return;
}



void Unwind_00f60c08(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60c40(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60c70(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x80);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x6c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x7c) = 0;
  *(undefined4 *)(unaff_EBP + 0x80) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x6c) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x68);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x54);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 100) = 0;
  *(undefined4 *)(unaff_EBP + 0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x54) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0x38);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x40) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
    *(undefined4 *)(unaff_EBP + 0x3c) = 0;
    *(undefined4 *)(unaff_EBP + 0x40) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0x34);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x20);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + 0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x1c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + 8) = 0;
  return;
}



void Unwind_00f60c78(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x134);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x120);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x130) = 0;
  *(undefined4 *)(unaff_EBP + 0x134) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x120) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x11c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x108);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x118) = 0;
  *(undefined4 *)(unaff_EBP + 0x11c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x108) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0xec);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0xf4) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0xec) = 0;
    *(undefined4 *)(unaff_EBP + 0xf0) = 0;
    *(undefined4 *)(unaff_EBP + 0xf4) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0xe8);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0xd4);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0xe4) = 0;
  *(undefined4 *)(unaff_EBP + 0xe8) = 0xf;
  *(undefined1 *)(unaff_EBP + 0xd4) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0xd0);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0xbc);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0xcc) = 0;
  *(undefined4 *)(unaff_EBP + 0xd0) = 0xf;
  *(undefined1 *)(unaff_EBP + 0xbc) = 0;
  return;
}



void Unwind_00f60c83(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x8c) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x40);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x38) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x5c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x54) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x78);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x74),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x70) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  return;
}



void Unwind_00f60c8e(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x154) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x108);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x100) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x108) = 0;
    *(undefined4 *)(unaff_EBP + -0x104) = 0;
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
  }
  if (*(int *)(unaff_EBP + -0x118) != 0) {
    *(undefined4 *)(unaff_EBP + -0x118) = 0;
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
    *(undefined4 *)(unaff_EBP + -0x110) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x124);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x11c) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x124) = 0;
    *(undefined4 *)(unaff_EBP + -0x120) = 0;
    *(undefined4 *)(unaff_EBP + -0x11c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x140);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x13c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x138) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x13c) = 0;
    *(undefined4 *)(unaff_EBP + -0x138) = 0;
  }
  return;
}



void Unwind_00f60c99(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60ca4(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0xf8) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0xac);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xa4) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0xac) = 0;
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  }
  if (*(int *)(unaff_EBP + -0xbc) != 0) {
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
    *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -200);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xc0) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0;
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0xe4);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0xe0),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0xdc) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
  }
  return;
}



void Unwind_00f60caf(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f60cf0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x78) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x24) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x48);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x40) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -100);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x60),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x5c) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  return;
}



void Unwind_00f60cf8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60d03(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60d0e(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x80);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x6c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x7c) = 0;
  *(undefined4 *)(unaff_EBP + 0x80) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x6c) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x68);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x54);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 100) = 0;
  *(undefined4 *)(unaff_EBP + 0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x54) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0x38);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x40) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
    *(undefined4 *)(unaff_EBP + 0x3c) = 0;
    *(undefined4 *)(unaff_EBP + 0x40) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0x34);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x20);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + 0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x1c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + 8) = 0;
  return;
}



void Unwind_00f60d50(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60d5b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f60d90(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x6c) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x20);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x18) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x34) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x58);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x54),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x50) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  return;
}



void Unwind_00f60dc0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -100) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x10) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x34);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x2c) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x50);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x4c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x48) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  return;
}



void Unwind_00f60df0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f60dfb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f60e06(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f60e11(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f60e40(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f60e70(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f60e7b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f60e86(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f60e91(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f60ec0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x6c) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x20);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x18) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x34) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x58);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x54),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x50) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  return;
}



void Unwind_00f60ef0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f60efb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f60f03(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    *(int *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  return;
}



void Unwind_00f60f30(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f60f3b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f60f43(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f60f70(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x20);
  }
  return;
}



void Unwind_00f60f78(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x20);
  }
  return;
}



void Unwind_00f60fb0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f60fbb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f60fc6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x28));
  return;
}



void Unwind_00f60fd1(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f60fdc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f60fe7(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}



void Unwind_00f61020(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  func_0x00b10f10(puVar1,*puVar1);
  func_0x008ab812(*puVar1,0x20);
  return;
}



void Unwind_00f61028(void)

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



void Unwind_00f61030(void)

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
  func_0x00b10f10((undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x28));
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x28),0x20);
  return;
}



void Unwind_00f61038(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f61040(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -200) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x7c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x74) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
  }
  if (*(int *)(unaff_EBP + -0x8c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x98);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x90) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0xb4);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0xb0),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0xac) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + -0xac) = 0;
  }
  return;
}



void Unwind_00f6104b(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x124) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0xd8);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xd0) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
    *(undefined4 *)(unaff_EBP + -0xd4) = 0;
    *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  }
  if (*(int *)(unaff_EBP + -0xe8) != 0) {
    *(undefined4 *)(unaff_EBP + -0xe8) = 0;
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0xf4);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xec) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0xf4) = 0;
    *(undefined4 *)(unaff_EBP + -0xf0) = 0;
    *(undefined4 *)(unaff_EBP + -0xec) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x110);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x10c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x108) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x10c) = 0;
    *(undefined4 *)(unaff_EBP + -0x108) = 0;
  }
  return;
}



void Unwind_00f61080(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f61088(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f610c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    *(int *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f610c8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    *(int *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  return;
}



void Unwind_00f610d0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f610db(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    *(int *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  return;
}



void Unwind_00f610e3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x78);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x10);
    puVar1 = puVar2;
  }
  func_0x008ab812(*(int *)(unaff_EBP + -0x78),0x10);
  return;
}



void Unwind_00f610eb(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x70);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x68) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  return;
}



void Unwind_00f610f3(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x70);
  if (iVar1 != 0) {
    uVar6 = *(int *)(unaff_EBP + -0x68) - iVar1 & 0xfffffffc;
    iVar5 = iVar1;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + -0x78);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x10);
    puVar2 = puVar3;
  }
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x78),0x10);
  return;
}



void Unwind_00f610fb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f61106(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f61111(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x38) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f61140(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f61170(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f61178(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f611b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -100) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x10) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x34);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x2c) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x50);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x4c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x48) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  return;
}



void Unwind_00f611e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f61210(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0x68) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x14) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x38);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x30) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x54);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x50),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x4c) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f61240(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f61270(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f61278(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f61283(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6128e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f612c0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f612cb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f612d6(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f61300(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0xb4);
  }
  return;
}



void Unwind_00f61308(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0xb4);
  }
  return;
}



void Unwind_00f61340(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f61370(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xb4));
  return;
}



void Unwind_00f6137e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xb4));
  return;
}



void Unwind_00f6138c(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0xb4) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f613d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f61410(void)

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



void Unwind_00f61418(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f61423(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6142e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f61439(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -100));
  return;
}



void Unwind_00f61444(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x68));
  return;
}



void Unwind_00f6144f(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f6145a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f61465(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f61470(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6147b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f61486(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f61491(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f6149c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f614a7(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f614b2(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x4c) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f614f0(void)

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



void Unwind_00f61530(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_EBP;
  undefined4 unaff_ESI;
  
  *unaff_EBP = sh::TLValueTrackingTraverser::vftable;
  *unaff_EBP = sh::TIntermTraverser::vftable;
  iVar2 = unaff_EBP[0x13];
  if (iVar2 != 0) {
    uVar5 = unaff_EBP[0x15] - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    unaff_EBP[0x13] = 0;
    unaff_EBP[0x14] = 0;
    unaff_EBP[0x15] = 0;
  }
  if (unaff_EBP[0xf] != 0) {
    unaff_EBP[0xf] = 0;
    unaff_EBP[0x10] = 0;
    unaff_EBP[0x11] = 0;
  }
  iVar2 = unaff_EBP[0xc];
  if (iVar2 != 0) {
    uVar5 = unaff_EBP[0xe] - iVar2 & 0xfffffff0;
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
    unaff_EBP[0xc] = 0;
    unaff_EBP[0xd] = 0;
    unaff_EBP[0xe] = 0;
  }
  func_0x00addc70();
  piVar1 = unaff_EBP + 5;
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,unaff_EBP[6],piVar1);
    iVar2 = *piVar1;
    uVar5 = ((unaff_EBP[7] - iVar2) / 0x14) * 0x14;
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
    unaff_EBP[6] = 0;
    unaff_EBP[7] = 0;
  }
  return;
}



void Unwind_00f61538(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + 0x5c);
  func_0x00b14080(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0xb4);
  return;
}



void Unwind_00f61540(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + 100);
  func_0x00b14080(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0xb4);
  return;
}



void Unwind_00f61548(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f61550(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *unaff_EBP;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  piVar3 = (int *)unaff_EBP[0x25];
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != unaff_EBP + 0x1c);
    (*pcVar4)();
    unaff_EBP[0x25] = 0;
  }
  func_0x00b14080(unaff_EBP + 0x19,*(undefined4 *)(unaff_EBP[0x19] + 4));
  func_0x008ab812(unaff_EBP[0x19],0xb4);
  puVar1 = unaff_EBP + 0x17;
  uVar8 = *(undefined4 *)(unaff_EBP[0x17] + 4);
  puVar7 = puVar1;
  func_0x00b14080(puVar1,uVar8);
  func_0x008ab812(*puVar1,0xb4);
  *unaff_EBP = sh::TLValueTrackingTraverser::vftable;
  *unaff_EBP = sh::TIntermTraverser::vftable;
  iVar2 = unaff_EBP[0x13];
  if (iVar2 != 0) {
    uVar6 = unaff_EBP[0x15] - iVar2 & 0xfffffff8;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar5,uVar6,uVar8);
    unaff_EBP[0x13] = 0;
    unaff_EBP[0x14] = 0;
    unaff_EBP[0x15] = 0;
  }
  if (unaff_EBP[0xf] != 0) {
    unaff_EBP[0xf] = 0;
    unaff_EBP[0x10] = 0;
    unaff_EBP[0x11] = 0;
  }
  iVar2 = unaff_EBP[0xc];
  if (iVar2 != 0) {
    uVar6 = unaff_EBP[0xe] - iVar2 & 0xfffffff0;
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
    func_0x008ab812(iVar5,uVar6,uVar8);
    unaff_EBP[0xc] = 0;
    unaff_EBP[0xd] = 0;
    unaff_EBP[0xe] = 0;
  }
  func_0x00addc70();
  piVar3 = unaff_EBP + 5;
  if (*piVar3 != 0) {
    func_0x00adc0a0(*piVar3,unaff_EBP[6],piVar3,puVar7,uVar8);
    iVar2 = *piVar3;
    uVar6 = ((unaff_EBP[7] - iVar2) / 0x14) * 0x14;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar3 = 0;
    unaff_EBP[6] = 0;
    unaff_EBP[7] = 0;
  }
  return;
}



void Unwind_00f61590(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x38));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f615d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f61600(void)

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



void Unwind_00f61608(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x5c));
  return;
}



void Unwind_00f61613(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x5c));
  return;
}



void Unwind_00f6161e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x44));
  return;
}



void Unwind_00f61629(void)

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



void Unwind_00f61631(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x44));
  return;
}



void Unwind_00f6163c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x44));
  return;
}



void Unwind_00f61647(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x44));
  return;
}



void Unwind_00f61652(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x58));
  return;
}



void Unwind_00f6165d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x70) != 0) {
    *(int *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  return;
}



void Unwind_00f61665(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    *(int *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f6166d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f616b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -100) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x10) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x34);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x2c) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x50);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x4c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x48) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  return;
}



void Unwind_00f616e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f61710(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x10);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x10);
  return;
}



void Unwind_00f6171b(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x14) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f61750(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0xa4) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x58);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x50) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x74);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x6c) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x90);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x8c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x88) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
  }
  return;
}



void Unwind_00f6175b(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  if (iVar1 != 0) {
    uVar6 = *(int *)(unaff_EBP + -0x38) - iVar1 & 0xfffffffc;
    iVar5 = iVar1;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + -0x48);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x10);
    puVar2 = puVar3;
  }
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0x10);
  return;
}



void Unwind_00f61763(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x008c25a0();
  func_0x008c25a0();
  *(undefined ***)(unaff_EBP + -0xa4) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x58);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x50) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0x74);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x6c) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x90);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x8c),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x88) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
  }
  return;
}



void Unwind_00f6176e(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_EBP;
  undefined4 unaff_ESI;
  
  *unaff_EBP = sh::TIntermTraverser::vftable;
  iVar2 = unaff_EBP[0x13];
  if (iVar2 != 0) {
    uVar5 = unaff_EBP[0x15] - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    unaff_EBP[0x13] = 0;
    unaff_EBP[0x14] = 0;
    unaff_EBP[0x15] = 0;
  }
  if (unaff_EBP[0xf] != 0) {
    unaff_EBP[0xf] = 0;
    unaff_EBP[0x10] = 0;
    unaff_EBP[0x11] = 0;
  }
  iVar2 = unaff_EBP[0xc];
  if (iVar2 != 0) {
    uVar5 = unaff_EBP[0xe] - iVar2 & 0xfffffff0;
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
    unaff_EBP[0xc] = 0;
    unaff_EBP[0xd] = 0;
    unaff_EBP[0xe] = 0;
  }
  func_0x00addc70();
  piVar1 = unaff_EBP + 5;
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,unaff_EBP[6],piVar1);
    iVar2 = *piVar1;
    uVar5 = ((unaff_EBP[7] - iVar2) / 0x14) * 0x14;
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
    unaff_EBP[6] = 0;
    unaff_EBP[7] = 0;
  }
  return;
}



void Unwind_00f617a0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f617ab(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f617b6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f617c1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    *(int *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f617f0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x10);
  }
  return;
}



void Unwind_00f617f8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x10);
  }
  return;
}



void Unwind_00f61830(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f61838(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61870(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x80));
  return;
}



void Unwind_00f6187b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x80));
  return;
}



void Unwind_00f61886(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x80));
  return;
}



void Unwind_00f61891(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x80));
  return;
}



void Unwind_00f6189c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x80));
  return;
}



void Unwind_00f618a7(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x80));
  return;
}



void Unwind_00f618b2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x80));
  return;
}



void Unwind_00f618f0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f618fb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f61930(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x24) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f61938(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61943(void)

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



void Unwind_00f6194b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61956(void)

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



void Unwind_00f6195e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61969(void)

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



void Unwind_00f61971(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x10) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x10);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f61979(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    *(int *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f61981(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f619c0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}



void Unwind_00f619cb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f619d3(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}



void Unwind_00f61a10(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f61a1b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f61a26(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f61a31(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f61a3c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f61a47(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f61a52(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f61a5d(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f61aa0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f61aab(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f61af0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f61afb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f61b30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    *(int *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f61b38(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f61b43(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x28));
  return;
}



void Unwind_00f61b70(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f61ba0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x13c));
  return;
}



void Unwind_00f61bae(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x140));
  return;
}



void Unwind_00f61bbc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x144));
  return;
}



void Unwind_00f61bca(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x148));
  return;
}



void Unwind_00f61bd8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14c));
  return;
}



void Unwind_00f61be6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xfc));
  return;
}



void Unwind_00f61bf4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x114));
  return;
}



void Unwind_00f61c02(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x118) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x118),0x1c);
  }
  return;
}



void Unwind_00f61c0d(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x114));
  return;
}



void Unwind_00f61c1b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x114));
  return;
}



void Unwind_00f61c29(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x114));
  return;
}



void Unwind_00f61c37(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x114));
  return;
}



void Unwind_00f61c45(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -300) != 0) {
    *(int *)(unaff_EBP + -300) = 0;
    *(undefined4 *)(unaff_EBP + -0x128) = 0;
    *(undefined4 *)(unaff_EBP + -0x124) = 0;
  }
  return;
}



void Unwind_00f61c80(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f61c88(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f61c93(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f61c9e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f61ce0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f61d10(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x1c);
  }
  return;
}



void Unwind_00f61d18(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f61d23(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f61d60(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f61d6b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x18);
  }
  return;
}



void Unwind_00f61d73(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f61d7e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f61db0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f61dbb(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f61dc3(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f61dce(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61e00(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61e30(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61e3b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f61e70(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x10));
  return;
}



void Unwind_00f61e7b(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + 0x10) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f61e83(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0x10));
  return;
}



void Unwind_00f61e8e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0xc));
  return;
}



void Unwind_00f61e99(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + 0xc));
  return;
}



void Unwind_00f61ed0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    *(int *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  return;
}



void Unwind_00f61ed8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    *(int *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f61ee0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f61eeb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f61f30(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
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
    func_0x008ab812(iVar4,uVar5);
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
    func_0x008ab812(iVar4,uVar5);
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



void Unwind_00f61f38(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00b1a9f0(*piVar1,*(undefined4 *)(unaff_EBP + -0x18),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x14) - iVar2) / 0xc) * 0xc;
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
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f61f40(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x00b1ac70();
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



void Unwind_00f61f70(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    *(int *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  return;
}



void Unwind_00f61f78(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x40));
  return;
}



void Unwind_00f61f83(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x54));
  return;
}



void Unwind_00f61f8e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x58));
  return;
}



void Unwind_00f61f99(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x5c));
  return;
}



void Unwind_00f61fd0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f62000(void)

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



void Unwind_00f6200b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x10);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x10);
  return;
}



void Unwind_00f62016(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x14) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f62021(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x008c25a0();
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



void Unwind_00f62060(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6206b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f62076(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f62081(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6208c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f62097(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f620a2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f620ad(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f620b8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x10);
  }
  return;
}



void Unwind_00f620c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x10);
  }
  return;
}



void Unwind_00f620f0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -0x80) = sh::TLValueTrackingTraverser::vftable;
  *(undefined4 *)(unaff_EBP + -0x80) = sh::TIntermTraverser::vftable;
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



void Unwind_00f62120(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x2c) + 0x40);
  *piVar1 = *piVar1 + -4;
  return;
}



void Unwind_00f62128(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f62133(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6213e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f62170(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f62178(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f621b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -0x74) = sh::TLValueTrackingTraverser::vftable;
  *(undefined4 *)(unaff_EBP + -0x74) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x28);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x20) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
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
    func_0x008ab812(iVar4,uVar5);
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



void Unwind_00f621b8(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -0x74) = sh::TLValueTrackingTraverser::vftable;
  *(undefined4 *)(unaff_EBP + -0x74) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x28);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x20) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
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
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x60);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x5c),piVar1);
