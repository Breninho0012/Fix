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



void Unwind_00f621f0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f621fb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f62206(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f62211(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x18) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f62219(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f62221(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f62260(void)

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



void Unwind_00f62268(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x004c7eb0();
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



void Unwind_00f622a0(void)

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
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x14,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f622d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f622d8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f62310(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f62340(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f62370(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6237e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f6238c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6239a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f623a8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f623b6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f623c4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f623d2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f623e0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f623ee(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f623fc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6240a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62418(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62426(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62434(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62442(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62450(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6245e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6246c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6247a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62488(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62496(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f624a4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f624b2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f624c0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f624ce(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f624dc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f624ea(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f624f8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62506(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62514(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62522(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62530(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6253e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6254c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6255a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62568(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62576(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62584(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62592(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f625a0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f625ae(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f625bc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f625ca(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f625d8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f625e6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f625f4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62602(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62610(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6261e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6262c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6263a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62648(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62656(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62664(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62672(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62680(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6268e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6269c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f626aa(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f626b8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f626c6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f626d4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f626e2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f626f0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f626fe(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6270c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6271a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62728(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62736(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62744(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62752(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62760(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6276e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6277c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6278a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62798(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f627a6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f627b4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f627c2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f627d0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f627de(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f627ec(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f627fa(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62808(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62816(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62824(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62832(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62840(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6284e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6285c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6286a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62878(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62886(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62894(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f628a2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f628b0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f628be(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f628cc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f628da(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f628e8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f628f6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62904(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62912(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62920(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6292e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6293c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6294a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62958(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62966(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62974(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62982(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62990(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6299e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f629ac(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f629ba(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f629c8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f629d6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f629e4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f629f2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a00(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a0e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a1c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a2a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a38(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a46(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a54(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a62(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a70(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a7e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a8c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62a9a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62aa8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ab6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ac4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ad2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ae0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62aee(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62afc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b0a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b18(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b26(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b34(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b42(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b50(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b5e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b6c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b7a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b88(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62b96(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ba4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62bb2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62bc0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62bce(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62bdc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62bea(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62bf8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c06(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c14(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c22(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c30(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c3e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c4c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c5a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c68(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c76(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c84(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62c92(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ca0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62cae(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62cbc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62cca(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62cd8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ce6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62cf4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d02(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d10(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d1e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d2c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d3a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d48(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d56(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d64(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d72(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d80(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d8e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62d9c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62daa(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62db8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62dc6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62dd4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62de2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62df0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62dfe(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e0c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e1a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e28(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e36(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e44(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e52(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e60(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e6e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e7c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e8a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62e98(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ea6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62eb4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ec2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ed0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ede(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62eec(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62efa(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f08(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f16(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f24(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f32(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f40(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f4e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f5c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f6a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f78(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f86(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62f94(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62fa2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62fb0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f62fbe(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62fcc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62fda(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f62fe8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f62ff6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63004(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63012(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63020(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6302e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6303c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f6304a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63058(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63066(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x430));
  return;
}



void Unwind_00f63074(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63082(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x430));
  return;
}



void Unwind_00f63090(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f6309e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f630ac(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f630ba(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f630c8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f630d6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f630e4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f630f2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63100(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6310e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6311c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6312a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63138(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f63146(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63154(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63162(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f63170(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6317e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6318c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6319a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f631a8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f631b6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f631c4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f631d2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f631e0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f631ee(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f631fc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6320a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63218(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63226(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63234(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f63242(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63250(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f6325e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x430));
  return;
}



void Unwind_00f6326c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f6327a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x430));
  return;
}



void Unwind_00f63288(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63296(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f632a4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f632b2(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f632c0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f632ce(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f632dc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f632ea(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f632f8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63306(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63314(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63322(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63330(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6333e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6334c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6335a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63368(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63376(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63384(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63392(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f633a0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f633ae(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f633bc(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f633ca(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f633d8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f633e6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f633f4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63402(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63410(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6341e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6342c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f6343a(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63448(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63456(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63464(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f63472(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63480(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f6348e(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x438));
  return;
}



void Unwind_00f6349c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x43c));
  return;
}



void Unwind_00f634aa(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x438));
  return;
}



void Unwind_00f634b8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f634c6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f634d4(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x42c));
  return;
}



void Unwind_00f63520(void)

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
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63528(void)

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
  iVar1 = *(int *)(unaff_EBP + -0x20);
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
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63560(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
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
    func_0x008ab812(iVar4,uVar5);
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
    func_0x008ab812(iVar4,uVar5);
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



void Unwind_00f6356b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x98) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)*piVar5;
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar3 = (undefined4 *)*puVar2;
    if (0xf < (uint)puVar2[7]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar2[7],uVar4);
    }
    puVar2[6] = 0;
    puVar2[7] = 0xf;
    *(undefined1 *)puVar1 = 0;
    func_0x008ab812(puVar2,0x20);
    puVar2 = puVar3;
  }
  func_0x008ab812(*piVar5,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63579(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x98);
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



void Unwind_00f63587(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  FUN_00969f30();
  func_0x009ce920();
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



void Unwind_00f635c0(void)

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



void Unwind_00f63600(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f63630(void)

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



void Unwind_00f63638(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 4) + -0x60 + (int)puVar1) =
       std::basic_istringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xdc) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x60;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 4) + -0x60 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xdc) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63680(void)

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



void Unwind_00f636b0(void)

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



void Unwind_00f636b8(void)

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



void Unwind_00f636f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  func_0x007d9ca0((undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 4)
                 );
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x28);
  puVar2 = (undefined4 *)(unaff_EBP + -0x28);
  uVar8 = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 4);
  puVar7 = puVar2;
  func_0x007d9ca0(puVar2,uVar8);
  func_0x008ab812(*puVar2,0x28);
  *(undefined ***)(unaff_EBP + -0x84) = sh::TIntermTraverser::vftable;
  iVar3 = *(int *)(unaff_EBP + -0x38);
  if (iVar3 != 0) {
    uVar6 = *(int *)(unaff_EBP + -0x30) - iVar3 & 0xfffffff8;
    iVar5 = iVar3;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar5,uVar6,uVar8);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  iVar3 = *(int *)(unaff_EBP + -0x54);
  if (iVar3 != 0) {
    uVar6 = *(int *)(unaff_EBP + -0x4c) - iVar3 & 0xfffffff0;
    iVar5 = iVar3;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) {
LAB_00adde89:
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6,uVar8);
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0x70);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0x6c),piVar1,puVar7,uVar8);
    iVar3 = *piVar1;
    uVar6 = ((*(int *)(unaff_EBP + -0x68) - iVar3) / 0x14) * 0x14;
    iVar5 = iVar3;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  return;
}



void Unwind_00f63720(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + 8) + 0x50);
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



void Unwind_00f6373c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00f63747(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    piVar2 = *(int **)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    pcStack_c = FUN_00f3e140;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    piVar1 = piVar2 + 0x14;
    *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)piVar1) =
         std::basic_ostringstream<>::vftable;
    *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)piVar1) = *(int *)(*piVar2 + 4) + -0x50;
    func_0x00ad8b90(uVar3);
    *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)piVar1) = std::basic_ostream<>::vftable;
    *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)piVar1) = *(int *)(*piVar2 + 4) + -8;
    uStack_8 = 0;
    *piVar1 = (int)std::ios_base::vftable;
    func_0x00e706cb(piVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f63790(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + -0x34);
    for (puVar6 = *(undefined4 **)(unaff_EBP + -0x38); puVar6 != puVar1; puVar6 = puVar6 + 0x35) {
      pcVar2 = *(code **)*puVar6;
      _guard_check_icall(0);
      (*pcVar2)();
    }
    uVar5 = *(int *)(unaff_EBP + -0x3c) * 0xd4;
    iVar3 = *(int *)(unaff_EBP + -0x40);
    iVar4 = iVar3;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  return;
}



void Unwind_00f63798(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)(iVar1 + 4) = 0;
  return;
}



void Unwind_00f637a3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  *puVar1 = sh::OutputHLSL::HelperFunction::vftable;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0xf;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0xf;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



void Unwind_00f637ab(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
  for (puVar3 = *(undefined4 **)(unaff_EBP + -0x30); puVar3 != puVar1; puVar3 = puVar3 + 0x35) {
    pcVar2 = *(code **)*puVar3;
    _guard_check_icall(0);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f637b3(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)(iVar1 + 4) = 0;
  return;
}



void Unwind_00f637be(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  *puVar1 = sh::OutputHLSL::HelperFunction::vftable;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0xf;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0xf;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



void Unwind_00f637f0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  for (puVar3 = *(undefined4 **)(unaff_EBP + -0x1c); puVar3 != puVar1; puVar3 = puVar3 + 0x35) {
    pcVar2 = *(code **)*puVar3;
    _guard_check_icall(0);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f637f8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)(iVar1 + 4) = 0;
  return;
}



void Unwind_00f63830(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
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



void Unwind_00f63838(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x90);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x98) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_00a1145d;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
  }
  uVar5 = *(uint *)(iVar2 + 0x8c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(iVar2 + 0x78);
    uVar6 = uVar5 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar6 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_00a1145d:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0xf;
  *(undefined1 *)(iVar2 + 0x78) = 0;
  return;
}



void Unwind_00f63843(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xb4);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0xbc) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_00a1145d;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
  }
  uVar5 = *(uint *)(iVar2 + 0xb0);
  if (0xf < uVar5) {
    iVar1 = *(int *)(iVar2 + 0x9c);
    uVar6 = uVar5 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar6 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_00a1145d:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  *(undefined4 *)(iVar2 + 0xac) = 0;
  *(undefined4 *)(iVar2 + 0xb0) = 0xf;
  *(undefined1 *)(iVar2 + 0x9c) = 0;
  return;
}



void Unwind_00f63851(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xd8);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0xe0) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_00a1145d;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0xd8) = 0;
    *(undefined4 *)(iVar2 + 0xdc) = 0;
    *(undefined4 *)(iVar2 + 0xe0) = 0;
  }
  uVar5 = *(uint *)(iVar2 + 0xd4);
  if (0xf < uVar5) {
    iVar1 = *(int *)(iVar2 + 0xc0);
    uVar6 = uVar5 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar6 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_00a1145d:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = 0xf;
  *(undefined1 *)(iVar2 + 0xc0) = 0;
  return;
}



void Unwind_00f6385f(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar6 = *(int *)(iVar2 + 0xf4);
  if (iVar6 != 0) {
    do {
      iVar6 = iVar6 + -1;
      *(int *)(iVar2 + 0xf4) = iVar6;
    } while (iVar6 != 0);
    *(undefined4 *)(iVar2 + 0xf0) = 0;
  }
  if (*(int *)(iVar2 + 0xe8) != 0) {
    iVar6 = *(int *)(iVar2 + 0xec);
    while (0 < iVar6) {
      iVar6 = iVar6 + -1;
      iVar4 = *(int *)(*(int *)(iVar2 + 0xe8) + iVar6 * 4);
      if (iVar4 != 0) {
        func_0x008ab812(iVar4,0x10);
      }
    }
    iVar6 = *(int *)(iVar2 + 0xe8);
    uVar5 = *(int *)(iVar2 + 0xec) * 4;
    iVar4 = iVar6;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar6 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar6 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0xe8) = 0;
    *(undefined4 *)(iVar2 + 0xec) = 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0xe4);
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  func_0x008ab812(uVar1,8);
  return;
}



void Unwind_00f6386d(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xf8);
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



void Unwind_00f6387b(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x100);
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



void Unwind_00f63889(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x00a15b30(*(undefined4 *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00f63891(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x108);
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



void Unwind_00f6389f(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x110);
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



void Unwind_00f638ad(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x118);
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



void Unwind_00f638bb(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x120);
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



void Unwind_00f638c9(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  piVar6 = (int *)(iVar2 + 0x164);
  func_0x00993430();
  if (*piVar6 != 0) {
    func_0x00aebbb0(*piVar6,*(undefined4 *)(iVar2 + 0x168),piVar6,unaff_ESI);
    iVar1 = *piVar6;
    uVar5 = *(int *)(iVar2 + 0x16c) - iVar1 & 0xfffffff0;
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
    *piVar6 = 0;
    *(undefined4 *)(iVar2 + 0x168) = 0;
    *(undefined4 *)(iVar2 + 0x16c) = 0;
  }
  return;
}



void Unwind_00f638d7(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  piVar4 = (int *)(iVar1 + 0x178);
  iVar5 = *piVar4;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar1 + 0x17c);
    for (; iVar5 != iVar6; iVar5 = iVar5 + 0x24) {
      func_0x008acf70();
      func_0x008acf70();
      func_0x008acf70();
    }
    iVar5 = *piVar4;
    uVar3 = ((*(int *)(iVar1 + 0x180) - iVar5) / 0x24) * 0x24;
    iVar6 = iVar5;
    if (0xfff < uVar3) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar3);
    *piVar4 = 0;
    *(undefined4 *)(iVar1 + 0x17c) = 0;
    *(undefined4 *)(iVar1 + 0x180) = 0;
  }
  return;
}



void Unwind_00f638e5(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x194);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x19c) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x194) = 0;
    *(undefined4 *)(iVar2 + 0x198) = 0;
    *(undefined4 *)(iVar2 + 0x19c) = 0;
  }
  return;
}



void Unwind_00f638f3(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x1a0);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x1a8) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x1a0) = 0;
    *(undefined4 *)(iVar2 + 0x1a4) = 0;
    *(undefined4 *)(iVar2 + 0x1a8) = 0;
  }
  return;
}



void Unwind_00f63901(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x1ac);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x1b4) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x1ac) = 0;
    *(undefined4 *)(iVar2 + 0x1b0) = 0;
    *(undefined4 *)(iVar2 + 0x1b4) = 0;
  }
  return;
}



void Unwind_00f6390f(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  int iVar8;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  piVar6 = (int *)(iVar4 + 0x1b8);
  puVar7 = (undefined4 *)*piVar6;
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(iVar4 + 0x1bc);
    for (; puVar7 != puVar1; puVar7 = puVar7 + 0x35) {
      pcVar2 = *(code **)*puVar7;
      _guard_check_icall(0);
      (*pcVar2)();
    }
    iVar3 = *piVar6;
    uVar5 = ((*(int *)(iVar4 + 0x1c0) - iVar3) / 0xd4) * 0xd4;
    iVar8 = iVar3;
    if (0xfff < uVar5) {
      iVar8 = *(int *)(iVar3 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar3 - iVar8) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar8,uVar5);
    *piVar6 = 0;
    *(undefined4 *)(iVar4 + 0x1bc) = 0;
    *(undefined4 *)(iVar4 + 0x1c0) = 0;
  }
  return;
}



void Unwind_00f6391d(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  int iVar8;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  piVar6 = (int *)(iVar4 + 0x1c4);
  puVar7 = (undefined4 *)*piVar6;
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(iVar4 + 0x1c8);
    for (; puVar7 != puVar1; puVar7 = puVar7 + 0x35) {
      pcVar2 = *(code **)*puVar7;
      _guard_check_icall(0);
      (*pcVar2)();
    }
    iVar3 = *piVar6;
    uVar5 = ((*(int *)(iVar4 + 0x1cc) - iVar3) / 0xd4) * 0xd4;
    iVar8 = iVar3;
    if (0xfff < uVar5) {
      iVar8 = *(int *)(iVar3 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar3 - iVar8) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar8,uVar5);
    *piVar6 = 0;
    *(undefined4 *)(iVar4 + 0x1c8) = 0;
    *(undefined4 *)(iVar4 + 0x1cc) = 0;
  }
  return;
}



void Unwind_00f6392b(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x28);
  return;
}



void Unwind_00f6393a(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),8);
  return;
}



void Unwind_00f63949(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x10);
  return;
}



void Unwind_00f63958(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x00992640(piVar3,piVar4[2]);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x24);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x24);
  return;
}



void Unwind_00f63960(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0xc);
  return;
}



void Unwind_00f6396f(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x50);
  return;
}



void Unwind_00f6397e(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x20);
  return;
}



void Unwind_00f639b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f639e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(unaff_EBP + -0x104);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)puVar1) = *(int *)(*piVar2 + 4) + -0x50;
  func_0x00ad8b90(uVar3);
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)puVar1) = std::basic_ostream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)puVar1) = *(int *)(*piVar2 + 4) + -8;
  uStack_8 = 0;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f639eb(void)

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



void Unwind_00f639f3(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x58) + 8);
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



void Unwind_00f639fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63a40(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x120) = sh::OutputHLSL::HelperFunction::vftable;
  *(undefined4 *)(unaff_EBP + -0xf4) = 0;
  *(undefined4 *)(unaff_EBP + -0xf0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x104) = 0;
  *(undefined4 *)(unaff_EBP + -0x10c) = 0;
  *(undefined4 *)(unaff_EBP + -0x108) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x11c) = 0;
  return;
}



void Unwind_00f63a4b(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x120) = sh::OutputHLSL::HelperFunction::vftable;
  *(undefined4 *)(unaff_EBP + -0xf4) = 0;
  *(undefined4 *)(unaff_EBP + -0xf0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x104) = 0;
  *(undefined4 *)(unaff_EBP + -0x10c) = 0;
  *(undefined4 *)(unaff_EBP + -0x108) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x11c) = 0;
  return;
}



void Unwind_00f63a56(void)

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



void Unwind_00f63a5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x4c) = 0;
  return;
}



void Unwind_00f63aa0(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x150) = sh::OutputHLSL::HelperFunction::vftable;
  *(undefined4 *)(unaff_EBP + -0x124) = 0;
  *(undefined4 *)(unaff_EBP + -0x120) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x134) = 0;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0;
  *(undefined4 *)(unaff_EBP + -0x138) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x14c) = 0;
  return;
}



void Unwind_00f63aab(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x150) = sh::OutputHLSL::HelperFunction::vftable;
  *(undefined4 *)(unaff_EBP + -0x124) = 0;
  *(undefined4 *)(unaff_EBP + -0x120) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x134) = 0;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0;
  *(undefined4 *)(unaff_EBP + -0x138) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x14c) = 0;
  return;
}



void Unwind_00f63ab6(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x2c) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_00a1145d;
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  uVar4 = *(uint *)(unaff_EBP + -0x38);
  if (0xf < uVar4) {
    iVar1 = *(int *)(unaff_EBP + -0x4c);
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
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x4c) = 0;
  return;
}



void Unwind_00f63abe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)(unaff_EBP + -100) = 0;
  return;
}



void Unwind_00f63ac6(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x260);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2b0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2b0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2b0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2b0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63ad1(void)

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



void Unwind_00f63ad9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63ae1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x7c) = 0;
  return;
}



void Unwind_00f63ae9(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x260);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2b0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2b0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2b0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2b0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63af4(void)

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



void Unwind_00f63afc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63b04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x7c) = 0;
  return;
}



void Unwind_00f63b0c(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x260);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2b0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2b0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2b0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2b0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63b17(void)

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



void Unwind_00f63b1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63b27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x7c) = 0;
  return;
}



void Unwind_00f63b60(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x114),0xd4);
  return;
}



void Unwind_00f63b75(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
  *puVar1 = sh::OutputHLSL::HelperFunction::vftable;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0xf;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0xf;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



void Unwind_00f63b80(void)

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



void Unwind_00f63b88(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x4c) = 0;
  return;
}



void Unwind_00f63bc0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x4c) = 0;
  return;
}



void Unwind_00f63bc8(void)

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



void Unwind_00f63bd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)(unaff_EBP + -100) = 0;
  return;
}



void Unwind_00f63bd8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xac) = 0;
  return;
}



void Unwind_00f63be3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x7c) = 0;
  return;
}



void Unwind_00f63beb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xc4) = 0;
  return;
}



void Unwind_00f63bf6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)(unaff_EBP + -100) = 0;
  return;
}



void Unwind_00f63c30(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xc0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xc0) = *(uint *)(unaff_EBP + -0xc0) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0xe0);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f63c52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f63c5a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f63c62(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63c6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f63c72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f63c7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63c85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  return;
}



void Unwind_00f63c90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f63c9b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f63ce0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f63ce8(void)

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



void Unwind_00f63cf0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63cf8(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xc0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x128) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x128) + 4);
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



void Unwind_00f63d03(void)

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



void Unwind_00f63d0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63d13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f63d1b(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xc0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x110) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x110) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x110) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x110) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63d26(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x178);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1c8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1c8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x1c8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1c8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63d31(void)

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



void Unwind_00f63d39(void)

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



void Unwind_00f63d70(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x54);
  iVar3 = *(int *)(unaff_EBP + -0x38);
  if (iVar3 != 0) {
    uVar8 = *(int *)(unaff_EBP + -0x30) - iVar3 & 0xfffffffc;
    iVar7 = iVar3;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar3 + -4);
      uVar8 = uVar8 + 0x23;
      if (0x1f < (iVar3 - iVar7) - 4U) goto LAB_00a111b1;
    }
    func_0x008ab812(iVar7,uVar8);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  iVar3 = *(int *)(unaff_EBP + -0x44);
  if (iVar3 != 0) {
    uVar8 = *(int *)(unaff_EBP + -0x3c) - iVar3 & 0xfffffffc;
    iVar7 = iVar3;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar3 + -4);
      uVar8 = uVar8 + 0x23;
      if (0x1f < (iVar3 - iVar7) - 4U) {
LAB_00a111b1:
        func_0x008aaf66();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar8);
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  piVar4 = *(int **)(*(int *)(unaff_EBP + -0x4c) + 4);
  cVar2 = *(char *)((int)piVar4 + 0xd);
  while (cVar2 == '\0') {
    func_0x009924e0((undefined4 *)(unaff_EBP + -0x4c),piVar4[2]);
    piVar5 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar5;
    cVar2 = *(char *)((int)piVar5 + 0xd);
  }
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x4c),0x18);
  func_0x0092d4d0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f63d78(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x18) - iVar1 & 0xfffffff8;
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



void Unwind_00f63db0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63db8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f63df0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63e30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63e38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f63e40(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63e48(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f63e80(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)(iVar1 + 4) = 0;
  return;
}



void Unwind_00f63e8b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar1 = sh::OutputHLSL::HelperFunction::vftable;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0xf;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0xf;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



void Unwind_00f63ec0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe8) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe8) + 4);
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



void Unwind_00f63ecb(void)

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



void Unwind_00f63ed3(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe8) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe8) + 4);
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



void Unwind_00f63ede(void)

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



void Unwind_00f63f20(void)

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



void Unwind_00f63f50(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x114) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x114) = *(uint *)(unaff_EBP + -0x114) & 0xfffffffe;
    puVar1 = *(undefined1 **)(unaff_EBP + -0x120);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f63f72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f63f7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63f82(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(unaff_EBP + -0x1fc);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x1ac);
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)puVar1) = *(int *)(*piVar2 + 4) + -0x50;
  func_0x00ad8b90(uVar3);
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)puVar1) = std::basic_ostream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)puVar1) = *(int *)(*piVar2 + 4) + -8;
  uStack_8 = 0;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63f8d(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x14c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x14c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f63f98(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x150) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x150) + 8);
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



void Unwind_00f63fa3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x114) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x114) = *(uint *)(unaff_EBP + -0x114) & 0xfffffff7;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x28) = 0;
    return;
  }
  return;
}



void Unwind_00f63fc2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63fca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f63fd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63fda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63fe2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f63fea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f63ff2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f63ffa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f64002(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f6400a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f64050(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f64058(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f64060(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x11c) != 0) {
    *(int *)(unaff_EBP + -0x11c) = 0;
    *(undefined4 *)(unaff_EBP + -0x118) = 0;
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
  }
  return;
}



void Unwind_00f6406b(void)

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



void Unwind_00f64073(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f640b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f640b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f640c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f640c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f640d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f640d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f64110(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f64118(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f64120(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f64128(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f64160(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f64168(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f64170(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f641b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f641b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f641c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f64200(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = 0;
  *(undefined4 *)(unaff_EBP + 0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x38) = 0;
  return;
}



void Unwind_00f64208(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = 0;
  *(undefined4 *)(unaff_EBP + 0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x38) = 0;
  return;
}



void Unwind_00f64210(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = 0;
  *(undefined4 *)(unaff_EBP + 0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x38) = 0;
  return;
}



void Unwind_00f64218(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + 0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  return;
}



void Unwind_00f64220(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = 0;
  *(undefined4 *)(unaff_EBP + 0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x38) = 0;
  return;
}



void Unwind_00f64260(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f64268(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f642a0(void)

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



void Unwind_00f642ab(void)

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



void Unwind_00f642f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f642f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f64300(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f64308(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x88) != 0) {
    *(int *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  return;
}



void Unwind_00f64313(void)

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



void Unwind_00f6431b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f64323(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f64360(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f64368(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f64370(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f643b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x78) = 0;
  return;
}



void Unwind_00f643b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x60) = 0;
  return;
}



void Unwind_00f643c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  return;
}



void Unwind_00f643c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  return;
}



void Unwind_00f643d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x48) = 0;
  return;
}



void Unwind_00f64410(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f64418(void)

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



void Unwind_00f64423(void)

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



void Unwind_00f6442b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f64470(void)

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



void Unwind_00f644a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xdc) != 0) {
    *(int *)(unaff_EBP + -0xdc) = 0;
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
    *(undefined4 *)(unaff_EBP + -0xd4) = 0;
  }
  return;
}



void Unwind_00f644ab(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xcc) != 0) {
    *(int *)(unaff_EBP + -0xcc) = 0;
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  }
  return;
}



void Unwind_00f644b6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xbc));
  return;
}



void Unwind_00f64500(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f64540(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6454b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64556(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f64561(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6456c(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f64577(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f645b0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f645bb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f645c6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f64600(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x1c);
  }
  return;
}



void Unwind_00f64630(void)

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



void Unwind_00f64638(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x00b0ceb0();
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



void Unwind_00f64670(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f646a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f646a8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f646e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f646e8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f646f3(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f64720(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6472b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f64736(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f64741(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f64770(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0xb8));
  return;
}



void Unwind_00f647b0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f647bb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f647c6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f647d1(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x24) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f647d9(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f64810(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined ***)(unaff_EBP + -0xd8) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x8c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x84) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
  }
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0xa8);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xa0) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0xc4);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0xc0),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0xbc) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  }
  return;
}



void Unwind_00f6481b(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x80);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x009924e0(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x18);
  return;
}



void Unwind_00f64823(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x78);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x009924e0(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x18);
  return;
}



void Unwind_00f6482b(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x70);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x009924e0(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x18);
  return;
}



void Unwind_00f64833(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  func_0x00993430();
  func_0x00993430();
  func_0x00993430();
  func_0x00993430();
  *(undefined ***)(unaff_EBP + -0xd8) = sh::TIntermTraverser::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x8c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x84) - iVar2 & 0xfffffff8;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00adde89;
    }
    func_0x008ab812(iVar4,uVar5,unaff_ESI);
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
  }
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + -0xa8);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xa0) - iVar2 & 0xfffffff0;
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
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  }
  func_0x00addc70();
  piVar1 = (int *)(unaff_EBP + -0xc4);
  if (*piVar1 != 0) {
    func_0x00adc0a0(*piVar1,*(undefined4 *)(unaff_EBP + -0xc0),piVar1);
    iVar2 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0xbc) - iVar2) / 0x14) * 0x14;
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
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  }
  return;
}



void Unwind_00f6483e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x50),0x18);
  }
  return;
}



void Unwind_00f64846(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x3c),0x18);
  }
  return;
}



void Unwind_00f6484e(void)

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



void Unwind_00f64856(void)

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
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x3c),0x28,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f64890(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
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



void Unwind_00f648c0(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f648cb(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f64900(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6490b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64916(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64921(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64960(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f64968(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    *(int *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f64970(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f649a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f649a8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f649b3(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f649be(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f649c9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f649d1(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f64a00(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f64a08(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64a13(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64a1e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f64a50(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64a5b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f64a66(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f64a71(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f64a7c(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x20) = sh::TIntermNode::vftable;
  return;
}



void Unwind_00f64a84(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f64ac0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f64ac8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64b00(void)

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



void Unwind_00f64b08(void)

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



void Unwind_00f64b40(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    *(int *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f64b48(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f64b80(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f64b88(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64b93(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f64b9b(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64ba6(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f64be0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f64be8(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f64bf3(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f64c20(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x34) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f64c28(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    *(int *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  return;
}



void Unwind_00f64c30(void)

{
  int unaff_EBP;
  
  _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f64c60(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x1c) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f64c90(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::ShaderImpl::vftable;
  return;
}



void Unwind_00f64c98(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f64ca3(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x3c);
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



void Unwind_00f64cae(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x44);
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



void Unwind_00f64cb9(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x4c);
  func_0x009246b0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f64cc4(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x54);
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



void Unwind_00f64ccf(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x5c);
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



void Unwind_00f64d00(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x1c);
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



void Unwind_00f64d08(void)

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
