    func_0x004c7ff0(*piVar2,(*(int *)(iVar1 + 0x18) - *piVar2 >> 3) * -0x55555555);
    *piVar2 = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return;
}



void Unwind_00f4d78e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x24) - iVar1 >> 2);
    *(int *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  return;
}



void Unwind_00f4d799(void)

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



void Unwind_00f4d7a1(void)

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



void Unwind_00f4d7e0(void)

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



void Unwind_00f4d810(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4c);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x28) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4d840(void)

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



void Unwind_00f4d880(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + -0x44);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x58);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x5c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x70);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + -0x8c);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x84) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0x90);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xa4);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa4) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0xa8);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xbc);
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
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xbc) = 0;
  return;
}



void Unwind_00f4d8c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x3c);
  }
  return;
}



void Unwind_00f4d8c8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x3c);
  }
  return;
}



void Unwind_00f4d900(void)

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



void Unwind_00f4d90b(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x4c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x4c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4d913(void)

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



void Unwind_00f4d91b(void)

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



void Unwind_00f4d960(void)

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



void Unwind_00f4d968(void)

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



void Unwind_00f4d9a0(void)

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



void Unwind_00f4d9a8(void)

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



void Unwind_00f4d9e0(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x14) = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4da10(void)

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



void Unwind_00f4da18(void)

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



void Unwind_00f4da20(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x6c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -100) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4da60(void)

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



void Unwind_00f4da90(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f4da98(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x009924e0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00f4dad0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x00a1a8c0(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                    *(undefined4 *)(unaff_EBP + -0x2c));
    iVar1 = *(int *)(unaff_EBP + -0x28);
    uVar4 = *(int *)(unaff_EBP + -0x24) * 0x24;
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



void Unwind_00f4db00(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x00a1a9d0(*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                    *(undefined4 *)(unaff_EBP + -0x30));
    iVar1 = *(int *)(unaff_EBP + -0x2c);
    uVar4 = *(int *)(unaff_EBP + -0x28) * 0x20;
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



void Unwind_00f4db30(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    func_0x00a1a8c0(*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                    *(undefined4 *)(unaff_EBP + -0x38));
    iVar1 = *(int *)(unaff_EBP + -0x34);
    uVar4 = *(int *)(unaff_EBP + -0x30) * 0x24;
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



void Unwind_00f4db60(void)

{
  int unaff_EBP;
  
  func_0x00a1a8c0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                  *(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f4db90(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x44);
  return;
}



void Unwind_00f4dbd0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x00a15b30(*(undefined4 *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00f4dc00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f4dc0b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x24) - iVar1 >> 2);
    *(int *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  return;
}



void Unwind_00f4dc16(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 100);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x6c) - iVar1 >> 2);
    *(int *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  return;
}



void Unwind_00f4dc50(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 4) = rx::d3d::Context::vftable;
  return;
}



void Unwind_00f4dc80(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x28);
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



void Unwind_00f4dc88(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x20);
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



void Unwind_00f4dc90(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x18);
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



void Unwind_00f4dc98(void)

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



void Unwind_00f4dca0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x30) = rx::LinkEvent::vftable;
  return;
}



void Unwind_00f4dca8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x30) + 0xc);
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



void Unwind_00f4dcb3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x30) + 0x14);
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



void Unwind_00f4dcbe(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x30) + 0x1c);
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



void Unwind_00f4dcc9(void)

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



void Unwind_00f4dcd1(void)

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



void Unwind_00f4dd10(void)

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



void Unwind_00f4dd18(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = rx::LinkEvent::vftable;
  return;
}



void Unwind_00f4dd20(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x5c);
  return;
}



void Unwind_00f4dd2f(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  uVar1 = *(uint *)(iVar3 + 0x30);
  if (0xf < uVar1) {
    iVar2 = *(int *)(iVar3 + 0x1c);
    uVar6 = uVar1 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0xf;
  *(undefined1 *)(iVar3 + 0x1c) = 0;
  func_0x0097dbc0();
  *(undefined ***)(iVar3 + 4) = rx::d3d::Context::vftable;
  return;
}



void Unwind_00f4dd37(void)

{
  void *_Memory;
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  _Memory = *(void **)(iVar1 + 0x4c);
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}



void Unwind_00f4dd42(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 8);
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



void Unwind_00f4dd70(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::ProgramImpl::vftable;
  return;
}



void Unwind_00f4dd78(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)(iVar1 + 0x10);
  iVar6 = *piVar5;
  if (iVar6 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14);
    for (; iVar6 != iVar3; iVar6 = iVar6 + 4) {
      func_0x00a1e2c0();
    }
    iVar6 = *piVar5;
    uVar4 = *(int *)(iVar1 + 0x18) - iVar6 & 0xfffffffc;
    iVar3 = iVar6;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar6 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar6 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *piVar5 = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return;
}



void Unwind_00f4dd83(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)(iVar1 + 0x1c);
  iVar6 = *piVar5;
  if (iVar6 != 0) {
    iVar3 = *(int *)(iVar1 + 0x20);
    for (; iVar6 != iVar3; iVar6 = iVar6 + 4) {
      func_0x00a1e230();
    }
    iVar6 = *piVar5;
    uVar4 = *(int *)(iVar1 + 0x24) - iVar6 & 0xfffffffc;
    iVar3 = iVar6;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar6 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar6 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *piVar5 = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}



void Unwind_00f4dd8e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x28,4,0xf,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4dd99(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  piVar6 = (int *)(iVar2 + 100);
  if (*piVar6 != 0) {
    func_0x00a1aa30(*piVar6,*(undefined4 *)(iVar2 + 0x68),piVar6);
    iVar1 = *piVar6;
    uVar5 = *(int *)(iVar2 + 0x6c) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  return;
}



void Unwind_00f4dda4(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x70,0x18,6,FUN_00469ba0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4ddaf(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)(iVar2 + 0x118);
  if (*piVar5 != 0) {
    func_0x00a1a920(*piVar5,*(undefined4 *)(iVar2 + 0x11c),piVar5);
    iVar1 = *piVar5;
    uVar4 = ((*(int *)(iVar2 + 0x120) - iVar1) / 0x3c) * 0x3c;
    iVar6 = iVar1;
    if (0xfff < uVar4) {
      iVar6 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar4);
    *piVar5 = 0;
    *(undefined4 *)(iVar2 + 0x11c) = 0;
    *(undefined4 *)(iVar2 + 0x120) = 0;
  }
  return;
}



void Unwind_00f4ddbd(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x124);
  if (0xf < *(uint *)(iVar1 + 0x138)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x138));
  }
  *(undefined4 *)(iVar1 + 0x134) = 0;
  *(undefined4 *)(iVar1 + 0x138) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f4ddcb(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x140,4,6,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4ddd9(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x158,0xc,6,FUN_00969f30,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4dde7(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x1d4,0xc,6,FUN_008f1ca0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4ddf5(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x21c,0xc,6,FUN_008f1ca0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4de03(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x2f4);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x2fc) - iVar1 >> 2);
    *(int *)(iVar2 + 0x2f4) = 0;
    *(undefined4 *)(iVar2 + 0x2f8) = 0;
    *(undefined4 *)(iVar2 + 0x2fc) = 0;
  }
  return;
}



void Unwind_00f4de11(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x34c,0xc,6,FUN_008f1ca0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4de1f(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x394,0xc,6,FUN_0094f310,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4de2d(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x3dc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x3e4) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x3dc) = 0;
    *(undefined4 *)(iVar2 + 0x3e0) = 0;
    *(undefined4 *)(iVar2 + 0x3e4) = 0;
  }
  return;
}



void Unwind_00f4de3b(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 1000);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x3f0) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 1000) = 0;
    *(undefined4 *)(iVar2 + 0x3ec) = 0;
    *(undefined4 *)(iVar2 + 0x3f0) = 0;
  }
  return;
}



void Unwind_00f4de49(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)(iVar2 + 0x3fc);
  if (*piVar5 != 0) {
    func_0x00a1a8c0(*piVar5,*(undefined4 *)(iVar2 + 0x400),piVar5);
    iVar1 = *piVar5;
    uVar4 = ((*(int *)(iVar2 + 0x404) - iVar1) / 0x24) * 0x24;
    iVar6 = iVar1;
    if (0xfff < uVar4) {
      iVar6 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar4);
    *piVar5 = 0;
    *(undefined4 *)(iVar2 + 0x400) = 0;
    *(undefined4 *)(iVar2 + 0x404) = 0;
  }
  return;
}



void Unwind_00f4de57(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x408);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x410) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x408) = 0;
    *(undefined4 *)(iVar2 + 0x40c) = 0;
    *(undefined4 *)(iVar2 + 0x410) = 0;
  }
  return;
}



void Unwind_00f4de65(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x414);
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



void Unwind_00f4de73(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x41c);
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



void Unwind_00f4de81(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x424);
  if (iVar1 != 0) {
    uVar4 = ((*(int *)(iVar2 + 0x42c) - iVar1) / 0x50) * 0x50;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *(int *)(iVar2 + 0x424) = 0;
    *(undefined4 *)(iVar2 + 0x428) = 0;
    *(undefined4 *)(iVar2 + 0x42c) = 0;
  }
  return;
}



void Unwind_00f4de8f(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x430);
  if (iVar1 != 0) {
    uVar4 = ((*(int *)(iVar2 + 0x438) - iVar1) / 0x18) * 0x18;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *(int *)(iVar2 + 0x430) = 0;
    *(undefined4 *)(iVar2 + 0x434) = 0;
    *(undefined4 *)(iVar2 + 0x438) = 0;
  }
  return;
}



void Unwind_00f4de9d(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x43c,0xc,6,FUN_00a1e570,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4deab(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x4a4,0xc,6,FUN_0096c3e0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4deb9(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x4ec,8,6,FUN_00a1df70,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4dec7(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),4);
  return;
}



void Unwind_00f4df00(void)

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



void Unwind_00f4df08(void)

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



void Unwind_00f4df40(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    uVar5 = piVar2[2] - iVar1 & 0xfffffffc;
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
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return;
}



void Unwind_00f4df90(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c);
  }
  return;
}



void Unwind_00f4df98(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c);
  }
  return;
}



void Unwind_00f4dfd0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x18);
  }
  return;
}



void Unwind_00f4dfd8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x18);
  }
  return;
}



void Unwind_00f4dfe0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x18);
  }
  return;
}



void Unwind_00f4e010(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x44) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f4e018(void)

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



void Unwind_00f4e050(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x50);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x48) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  return;
}



void Unwind_00f4e058(void)

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



void Unwind_00f4e090(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e098(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x50);
  return;
}



void Unwind_00f4e0a7(void)

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



void Unwind_00f4e0af(void)

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



void Unwind_00f4e0b7(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x10);
  return;
}



void Unwind_00f4e0c6(void)

{
  func_0x008ab391(&DAT_013de3fc);
  return;
}



void Unwind_00f4e100(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x54);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e108(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x50);
  return;
}



void Unwind_00f4e117(void)

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



void Unwind_00f4e11f(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x50);
  return;
}



void Unwind_00f4e12e(void)

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



void Unwind_00f4e136(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x54);
  return;
}



void Unwind_00f4e145(void)

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



void Unwind_00f4e14d(void)

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



void Unwind_00f4e155(void)

{
  func_0x008ab391(&DAT_013de3f4);
  return;
}



void Unwind_00f4e190(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + 0x54) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f4e198(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + 0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x34) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4e1a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + 0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x34) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4e1a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + 0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x34) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4e1b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + 0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x34) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4e1b8(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x10);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + 0x2c);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x34) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4e1c0(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f4e1c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  *puVar1 = sh::BlockEncoderVisitor::vftable;
  *puVar1 = sh::VariableNameVisitor::vftable;
  iVar2 = *(int *)(unaff_EBP + -0x34);
  if (iVar2 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x2c) - iVar2 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar1 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f4e200(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x4c);
  func_0x009246b0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f4e208(void)

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



void Unwind_00f4e240(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x70);
  return;
}



void Unwind_00f4e280(void)

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



void Unwind_00f4e2c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e2c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x1c);
  if (0xf < *(uint *)(unaff_EBP + 0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x30));
  }
  *(undefined4 *)(unaff_EBP + 0x2c) = 0;
  *(undefined4 *)(unaff_EBP + 0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f4e2d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x34);
  if (0xf < *(uint *)(unaff_EBP + 0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x48));
  }
  *(undefined4 *)(unaff_EBP + 0x44) = 0;
  *(undefined4 *)(unaff_EBP + 0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f4e2d8(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f4e2e0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + 0x58);
  if (*piVar1 != 0) {
    func_0x00a1a8c0(*piVar1,*(undefined4 *)(unaff_EBP + 0x5c),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + 0x60) - iVar2) / 0x24) * 0x24;
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
    *(undefined4 *)(unaff_EBP + 0x5c) = 0;
    *(undefined4 *)(unaff_EBP + 0x60) = 0;
  }
  return;
}



void Unwind_00f4e2e8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 4),0xc);
  return;
}



void Unwind_00f4e2f7(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + 0x10) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + 0x10);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f4e2ff(void)

{
  int iVar1;
  code *pcVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x18);
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 8) != (undefined4 *)0x0) {
      pcVar2 = *(code **)**(undefined4 **)(iVar1 + 8);
      _guard_check_icall(1);
      (*pcVar2)();
    }
    func_0x00a15b30(iVar1);
    func_0x008ab812(iVar1,0xc);
  }
  return;
}



void Unwind_00f4e307(void)

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
  
  if ((*(uint *)(unaff_EBP + 0x18) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + 0x18) = *(uint *)(unaff_EBP + 0x18) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xbc))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -200);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xbc) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xbc);
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



void Unwind_00f4e323(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + 0x18) & 2) != 0) {
    *(uint *)(unaff_EBP + 0x18) = *(uint *)(unaff_EBP + 0x18) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + 0x4c);
    if (0xf < *(uint *)(unaff_EBP + 0x60)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x60));
    }
    *(undefined4 *)(unaff_EBP + 0x5c) = 0;
    *(undefined4 *)(unaff_EBP + 0x60) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f4e33c(void)

{
  func_0x008ab391(&DAT_013de404);
  return;
}



void Unwind_00f4e380(void)

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



void Unwind_00f4e388(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x50);
  if (piVar1 != (int *)0x0) {
    pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f4e390(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x110))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x11c);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x110) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x110);
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



void Unwind_00f4e3ac(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffd;
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



void Unwind_00f4e400(void)

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



void Unwind_00f4e408(void)

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



void Unwind_00f4e410(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -100);
  if (piVar1 != (int *)0x0) {
    pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f4e418(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x70),0x10);
  return;
}



void Unwind_00f4e427(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)piVar1[3] != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)piVar1[3];
      _guard_check_icall(1);
      (*pcVar2)();
    }
    piVar1[3] = 0;
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      uVar5 = piVar1[2] - iVar3 & 0xfffffffc;
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
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    func_0x008ab812(piVar1,0x10);
  }
  return;
}



void Unwind_00f4e42f(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x6c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x6c) = *(uint *)(unaff_EBP + -0x6c) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x114))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x120);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x114) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x114);
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



void Unwind_00f4e44b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x6c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x6c) = *(uint *)(unaff_EBP + -0x6c) & 0xfffffffd;
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



void Unwind_00f4e4a0(void)

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



void Unwind_00f4e4a8(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f4e4b0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x54),0x1c);
  return;
}



void Unwind_00f4e4bf(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)piVar1[6] != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)piVar1[6];
      _guard_check_icall(1);
      (*pcVar2)();
    }
    piVar1[6] = 0;
    iVar3 = piVar1[3];
    if (iVar3 != 0) {
      uVar5 = piVar1[5] - iVar3 & 0xfffffffc;
      iVar4 = iVar3;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar3 + -4);
        uVar5 = uVar5 + 0x23;
        if (0x1f < (iVar3 - iVar4) - 4U) goto LAB_00a1e38a;
      }
      func_0x008ab812(iVar4,uVar5);
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
    }
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      uVar5 = piVar1[2] - iVar3 & 0xfffffffc;
      iVar4 = iVar3;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar3 + -4);
        uVar5 = uVar5 + 0x23;
        if (0x1f < (iVar3 - iVar4) - 4U) {
LAB_00a1e38a:
          func_0x008aaf66();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    func_0x008ab812(piVar1,0x1c);
  }
  return;
}



void Unwind_00f4e4c7(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x50) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xf8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x104);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xf8) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xf8);
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



void Unwind_00f4e4e3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffd;
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



void Unwind_00f4e530(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x1c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x30);
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
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x30) = 0;
  return;
}



void Unwind_00f4e570(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x928);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e57b(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x908) = gl::CustomBlockLayoutEncoderFactory::vftable;
  return;
}



void Unwind_00f4e586(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x92c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x92c) = *(uint *)(unaff_EBP + -0x92c) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x98c);
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



void Unwind_00f4e5a8(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x9dc) + 4) + -8 + unaff_EBP + -0x9d4) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x9dc) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0x9d4) = iVar1 + -8;
  return;
}



void Unwind_00f4e5b3(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x98c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x9dc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x9dc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x9dc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x9dc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e5be(void)

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



void Unwind_00f4e5c6(void)

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



void Unwind_00f4e5ce(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x4c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x60);
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
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x60) = 0;
  return;
}



void Unwind_00f4e5d6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(unaff_EBP + -0x8d4,0x168,6,FUN_00b3cf30,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e5e1(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x8e0) = gl::CustomBlockLayoutEncoderFactory::vftable;
  return;
}



void Unwind_00f4e5ec(void)

{
  func_0x008ab391(&DAT_013de40c);
  return;
}



void Unwind_00f4e630(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1ac) & 8) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1ac) = *(uint *)(unaff_EBP + -0x1ac) & 0xfffffff7;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x1a8) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x1a8) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4e652(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + -0xd4);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xe8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xe8) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0xec);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x100);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x100) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + -0x11c);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x114) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0x11c) = 0;
    *(undefined4 *)(unaff_EBP + -0x118) = 0;
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0x120);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x134);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x124) = 0;
  *(undefined4 *)(unaff_EBP + -0x120) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x134) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x138);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x14c);
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
  *(undefined4 *)(unaff_EBP + -0x13c) = 0;
  *(undefined4 *)(unaff_EBP + -0x138) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x14c) = 0;
  return;
}



void Unwind_00f4e65d(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x174),0x70);
  return;
}



void Unwind_00f4e66f(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x00a1a8c0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                    *(undefined4 *)(unaff_EBP + -0x24));
    iVar1 = *(int *)(unaff_EBP + -0x20);
    uVar4 = *(int *)(unaff_EBP + -0x1c) * 0x24;
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



void Unwind_00f4e677(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x19c);
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



void Unwind_00f4e682(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x170),0x14);
  return;
}



void Unwind_00f4e694(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1ac) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1ac) = *(uint *)(unaff_EBP + -0x1ac) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x170) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x170) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4e6f0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x68);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x60) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  return;
}



void Unwind_00f4e6f8(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x74);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x6c) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  return;
}



void Unwind_00f4e700(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x58),0x1c);
  return;
}



void Unwind_00f4e70f(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)piVar1[6] != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)piVar1[6];
      _guard_check_icall(1);
      (*pcVar2)();
    }
    piVar1[6] = 0;
    iVar3 = piVar1[3];
    if (iVar3 != 0) {
      uVar5 = piVar1[5] - iVar3 & 0xfffffffc;
      iVar4 = iVar3;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar3 + -4);
        uVar5 = uVar5 + 0x23;
        if (0x1f < (iVar3 - iVar4) - 4U) goto LAB_00a1e38a;
      }
      func_0x008ab812(iVar4,uVar5);
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
    }
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      uVar5 = piVar1[2] - iVar3 & 0xfffffffc;
      iVar4 = iVar3;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar3 + -4);
        uVar5 = uVar5 + 0x23;
        if (0x1f < (iVar3 - iVar4) - 4U) {
LAB_00a1e38a:
          func_0x008aaf66();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    func_0x008ab812(piVar1,0x1c);
  }
  return;
}



void Unwind_00f4e717(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x68);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x60) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  return;
}



void Unwind_00f4e71f(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x38),0x10);
  return;
}



void Unwind_00f4e72e(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 8) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffff7;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x4c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4e747(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x48);
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)piVar1[3] != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)piVar1[3];
      _guard_check_icall(1);
      (*pcVar2)();
    }
    piVar1[3] = 0;
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      uVar5 = piVar1[2] - iVar3 & 0xfffffffc;
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
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    func_0x008ab812(piVar1,0x10);
  }
  return;
}



void Unwind_00f4e74f(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
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
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x58) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4e768(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x58),0xb0);
  return;
}



void Unwind_00f4e77a(void)

{
  int unaff_EBP;
  
  func_0x00a15b30(unaff_EBP + -0x2c);
  return;
}



void Unwind_00f4e782(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x18);
  }
  return;
}



void Unwind_00f4e78a(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x68);
  if (*piVar1 != 0) {
    func_0x00a1a8c0(*piVar1,*(undefined4 *)(unaff_EBP + -100),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x60) - iVar2) / 0x24) * 0x24;
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
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  return;
}



void Unwind_00f4e792(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0xc);
  return;
}



void Unwind_00f4e7a1(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x58) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f4e7a9(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x58) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4e7c2(void)

{
  int iVar1;
  code *pcVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 8) != (undefined4 *)0x0) {
      pcVar2 = *(code **)**(undefined4 **)(iVar1 + 8);
      _guard_check_icall(1);
      (*pcVar2)();
    }
    func_0x00a15b30(iVar1);
    func_0x008ab812(iVar1,0xc);
  }
  return;
}



void Unwind_00f4e7ca(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x50),0x18);
  }
  return;
}



void Unwind_00f4e7d2(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
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
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x58) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4e7eb(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x58),0xb0);
  return;
}



void Unwind_00f4e830(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x10);
  return;
}



void Unwind_00f4e870(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e878(void)

{
  func_0x008ab391(&DAT_013de3dc);
  return;
}



void Unwind_00f4e8b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x24);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e8b8(void)

{
  func_0x008ab391(&DAT_013de3d4);
  return;
}



void Unwind_00f4e8f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e8f8(void)

{
  func_0x008ab391(&DAT_013de3cc);
  return;
}



void Unwind_00f4e930(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e938(void)

{
  func_0x008ab391(&DAT_013de3c4);
  return;
}



void Unwind_00f4e970(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e978(void)

{
  func_0x008ab391(&DAT_013de3bc);
  return;
}



void Unwind_00f4e9b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    func_0x00a15b30(*(undefined4 *)(unaff_EBP + -0x5c));
  }
  return;
}



void Unwind_00f4e9b8(void)

{
  int unaff_EBP;
  
  func_0x00a15b30(unaff_EBP + -0x44);
  return;
}



void Unwind_00f4e9f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4e9f8(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
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
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x10) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4ea11(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0xb0);
  return;
}



void Unwind_00f4ea23(void)

{
  func_0x008ab391(&DAT_013de3ec);
  return;
}



void Unwind_00f4ea60(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x58);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4ea68(void)

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



void Unwind_00f4ea70(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4ea89(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0xb0);
  return;
}



void Unwind_00f4ea9b(void)

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



void Unwind_00f4eaa3(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4eabc(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0xb0);
  return;
}



void Unwind_00f4eace(void)

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



void Unwind_00f4ead6(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4eaef(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0xb0);
  return;
}



void Unwind_00f4eb01(void)

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



void Unwind_00f4eb09(void)

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



void Unwind_00f4eb11(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 8) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffff7;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4eb2a(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0xb0);
  return;
}



void Unwind_00f4eb3c(void)

{
  func_0x008ab391(&DAT_013de3e4);
  return;
}



void Unwind_00f4eb80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x44);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4eb88(void)

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



void Unwind_00f4eb90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0xd8);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4eb9b(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x84) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x84) = *(uint *)(unaff_EBP + -0x84) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x198))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x1a4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x198) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x198);
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



void Unwind_00f4ebbd(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x84) & 8) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x84) = *(uint *)(unaff_EBP + -0x84) & 0xfffffff7;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0xf4) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0xf4) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4ebdf(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0xfc),0xb0);
  return;
}



void Unwind_00f4ebf4(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x84) & 0x40) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x84) = *(uint *)(unaff_EBP + -0x84) & 0xffffffbf;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0xc0) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
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
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0xc0) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4ec16(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0xf8),0xb0);
  return;
}



void Unwind_00f4ec2b(void)

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



void Unwind_00f4ec33(void)

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



void Unwind_00f4ec3b(void)

{
  func_0x008ab391(&DAT_013de424);
  return;
}



void Unwind_00f4ec47(void)

{
  func_0x008ab391(&DAT_013de42c);
  return;
}



void Unwind_00f4ec90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x40);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4ec98(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xe4))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xf0);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xe4) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xe4);
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



void Unwind_00f4ecb4(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xe4))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xf0);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xe4) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xe4);
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



void Unwind_00f4ecd0(void)

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



void Unwind_00f4ecd8(void)

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



void Unwind_00f4ece0(void)

{
  func_0x008ab391(&DAT_013de41c);
  return;
}



void FUN_00f4ed50(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f4ed70(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uStack_8 = 0;
    if (puVar1[1] != 0) {
      if (puVar1[2] != 0) {
        func_0x00a32410(*puVar1,puVar1[1],uVar3);
        puVar1[2] = 0;
      }
      pcVar2 = *(code **)(*(int *)puVar1[1] + 8);
      _guard_check_icall((int *)puVar1[1]);
      (*pcVar2)();
      puVar1[1] = 0;
    }
    func_0x008ab812(puVar1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4eda0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x1c) + 4);
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



void Unwind_00f4edab(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
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



void Unwind_00f4edb6(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 != 0) {
    uVar7 = *(int *)(iVar4 + 0x14) - iVar1 & 0xfffffffc;
    iVar6 = iVar1;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar1 + -4);
      uVar7 = uVar7 + 0x23;
      if (0x1f < (iVar1 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
  }
  puVar2 = *(undefined4 **)(iVar4 + 4);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x10);
    puVar2 = puVar3;
  }
  func_0x008ab812(*(undefined4 *)(iVar4 + 4),0x10);
  return;
}



void Unwind_00f4edbe(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x10);
  }
  return;
}



void Unwind_00f4edc6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x10);
  }
  return;
}



void Unwind_00f4edf0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x10);
  }
  return;
}



void Unwind_00f4edf8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x10);
  }
  return;
}



void Unwind_00f4ee30(void)

{
  int unaff_EBP;
  
  func_0x008c07a0(unaff_EBP + -0x18);
  return;
}



void Unwind_00f4ee70(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x28) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
    func_0x008c07a0(*(int *)(unaff_EBP + 8) + 8);
    return;
  }
  return;
}



void Unwind_00f4ee89(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x14);
  }
  return;
}



void Unwind_00f4ee91(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x14);
  }
  return;
}



void Unwind_00f4eec0(void)

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



void Unwind_00f4ef00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x60);
  if (iVar1 != 0) {
    uVar6 = *(int *)(unaff_EBP + -0x58) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + -0x68);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x10);
    puVar2 = puVar3;
  }
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x68),0x10);
  return;
}



void Unwind_00f4ef40(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xe0))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xec);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xe0) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xe0);
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



void Unwind_00f4ef5c(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x44) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x44));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4ef64(void)

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



void Unwind_00f4efa0(void)

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



void Unwind_00f4efa8(void)

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



void Unwind_00f4efb0(void)

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



void Unwind_00f4efb8(void)

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



void Unwind_00f4efc0(void)

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



void Unwind_00f4f000(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x30);
  *(undefined ***)(unaff_EBP + -0x34) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f008(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x30);
  *(undefined ***)(unaff_EBP + -0x34) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f040(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x2c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x28);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f070(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
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



void Unwind_00f4f110(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x68);
  }
  return;
}



void Unwind_00f4f140(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x54);
  }
  return;
}



void Unwind_00f4f170(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x34);
  }
  return;
}



void Unwind_00f4f1a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x5c);
  }
  return;
}



void Unwind_00f4f1d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x60);
  }
  return;
}



void Unwind_00f4f1d8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x60);
  }
  return;
}



void Unwind_00f4f210(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x48);
  }
  return;
}



void Unwind_00f4f218(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x48);
  }
  return;
}



void Unwind_00f4f250(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x28);
  }
  return;
}



void Unwind_00f4f258(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x28);
  }
  return;
}



void Unwind_00f4f290(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x50);
  }
  return;
}



void Unwind_00f4f298(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x50);
  }
  return;
}



void Unwind_00f4f2d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x00a2c180();
    func_0x008ab812(puVar1,0x68);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x68);
  return;
}



void Unwind_00f4f2db(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x60);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x60);
  return;
}



void Unwind_00f4f2e6(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
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



void Unwind_00f4f2f1(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar4 + 4) = angle::base::MRUCacheBase<>::vftable;
  func_0x00a352a0();
  piVar1 = (int *)(iVar4 + 8);
  puVar2 = (undefined4 *)*piVar1;
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x00a2c180(unaff_ESI);
    func_0x008ab812(puVar2,0x68);
    puVar2 = puVar3;
  }
  func_0x008ab812(*piVar1,0x68);
  return;
}



void Unwind_00f4f2fc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x00a31de0();
    func_0x008ab812(puVar1,0x34);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x34);
  return;
}



void Unwind_00f4f307(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x28);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x28);
  return;
}



void Unwind_00f4f312(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f4f31d(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar4 + 0x34) = angle::base::MRUCacheBase<>::vftable;
  func_0x00a353c0();
  piVar1 = (int *)(iVar4 + 0x38);
  puVar2 = (undefined4 *)*piVar1;
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x00a31de0(unaff_ESI);
    func_0x008ab812(puVar2,0x34);
    puVar2 = puVar3;
  }
  func_0x008ab812(*piVar1,0x34);
  return;
}



void Unwind_00f4f328(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x00a31cf0();
    func_0x008ab812(puVar1,0x54);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x54);
  return;
}



void Unwind_00f4f333(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x48);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x48);
  return;
}



void Unwind_00f4f33e(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f4f349(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar4 + 100) = angle::base::MRUCacheBase<>::vftable;
  func_0x00a35330();
  piVar1 = (int *)(iVar4 + 0x68);
  puVar2 = (undefined4 *)*piVar1;
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x00a31cf0(unaff_ESI);
    func_0x008ab812(puVar2,0x54);
    puVar2 = puVar3;
  }
  func_0x008ab812(*piVar1,0x54);
  return;
}



void Unwind_00f4f354(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x00a31e10();
    func_0x008ab812(puVar1,0x5c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x5c);
  return;
}



void Unwind_00f4f35f(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x50);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x50);
  return;
}



void Unwind_00f4f36a(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f4f3a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iStack_4;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 4);
    *(undefined4 *)puVar2[1] = 0;
    iStack_4 = iVar1;
    puVar2 = (undefined4 *)*puVar2;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      func_0x008ab812(puVar2,0x60);
      puVar2 = puVar3;
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    iStack_4 = *(int *)(iVar1 + 4);
    func_0x008881a0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&iStack_4);
  }
  return;
}



void Unwind_00f4f3d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iStack_4;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 4);
    *(undefined4 *)puVar2[1] = 0;
    iStack_4 = iVar1;
    puVar2 = (undefined4 *)*puVar2;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      func_0x008ab812(puVar2,0x48);
      puVar2 = puVar3;
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    iStack_4 = *(int *)(iVar1 + 4);
    func_0x008881a0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&iStack_4);
  }
  return;
}



void Unwind_00f4f400(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iStack_4;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 4);
    *(undefined4 *)puVar2[1] = 0;
    iStack_4 = iVar1;
    puVar2 = (undefined4 *)*puVar2;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      func_0x008ab812(puVar2,0x28);
      puVar2 = puVar3;
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    iStack_4 = *(int *)(iVar1 + 4);
    func_0x008881a0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&iStack_4);
  }
  return;
}



void Unwind_00f4f430(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int iStack_4;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 4);
    *(undefined4 *)puVar2[1] = 0;
    iStack_4 = iVar1;
    puVar2 = (undefined4 *)*puVar2;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      func_0x008ab812(puVar2,0x50);
      puVar2 = puVar3;
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    iStack_4 = *(int *)(iVar1 + 4);
    func_0x008881a0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&iStack_4);
  }
  return;
}



void Unwind_00f4f460(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xdc))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xe8);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xdc) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xdc);
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



void Unwind_00f4f47c(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x34);
  *(undefined ***)(unaff_EBP + -0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x34);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f4c0(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x114))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x120);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x114) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x114);
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



void Unwind_00f4f4dc(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(unaff_EBP + -0x6c);
  *(undefined ***)(unaff_EBP + -0x70) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  if (piVar2 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar2 != 0) {
      if (piVar2[1] != 0) {
        piVar1 = (int *)(piVar2[1] + 0x10);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        func_0x009db1a0(0,0,5,uVar4);
      }
      pcVar3 = *(code **)(*(int *)*piVar2 + 8);
      _guard_check_icall((int *)*piVar2);
      (*pcVar3)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar2,8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x6c);
  if (piVar2 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar2 != 0) {
      if (piVar2[1] != 0) {
        LOCK();
        piVar1 = (int *)(piVar2[1] + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        func_0x009db1a0(0,0,5,uVar4);
      }
      pcVar3 = *(code **)(*(int *)*piVar2 + 8);
      _guard_check_icall((int *)*piVar2);
      (*pcVar3)();
    }
    func_0x008ab812(piVar2,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f520(void)

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
  
  if ((*(uint *)(unaff_EBP + 0x34) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + 0x34) = *(uint *)(unaff_EBP + 0x34) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xc4))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xd0);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xc4) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xc4);
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



void Unwind_00f4f53c(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x18);
  *(undefined ***)(unaff_EBP + 0x14) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    func_0x00a31f80(*(int *)(unaff_EBP + 0x18));
  }
  return;
}



void Unwind_00f4f580(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x54) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x54) = *(uint *)(unaff_EBP + -0x54) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x118))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x124);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x118) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x118);
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



void Unwind_00f4f59c(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x70);
  *(undefined ***)(unaff_EBP + -0x74) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  if (iVar1 != 0) {
    func_0x00a32010(iVar1);
  }
  if (*(int *)(unaff_EBP + -0x70) != 0) {
    func_0x00a32010(*(int *)(unaff_EBP + -0x70));
  }
  return;
}



void Unwind_00f4f5e0(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  if (iVar1 != 0) {
    uVar3 = *(int *)(unaff_EBP + -0x2c) * 0x44;
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



void Unwind_00f4f610(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0xb4,0xc,6,FUN_008e4320,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f61e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x114,0xc,6,FUN_0094f310,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f62c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x174,0xc,6,FUN_0094f310,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f660(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f4f770;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x290,0xc,6,FUN_0094f310,uVar2);
  uStack_8 = 1;
  func_0x008ab4ad(iVar1 + 0x230,0xc,6,FUN_0094f310);
  uStack_8 = 2;
  func_0x008ab4ad(iVar1 + 0x1d0,0xc,6,FUN_008e4320);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f66e(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x30) + 0x304);
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



void Unwind_00f4f67c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x30c,0x10,6,FUN_008e4320,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f68a(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  iVar1 = *(int *)(iVar2 + 0x36c);
  if (iVar1 != 0) {
    uVar4 = ((*(int *)(iVar2 + 0x374) - iVar1) / 0x1c) * 0x1c;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *(int *)(iVar2 + 0x36c) = 0;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
  }
  return;
}



void Unwind_00f4f698(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  iVar1 = *(int *)(iVar2 + 0x37c);
  if (iVar1 != 0) {
    uVar4 = ((*(int *)(iVar2 + 900) - iVar1) / 0x1c) * 0x1c;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *(int *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 0x380) = 0;
    *(undefined4 *)(iVar2 + 900) = 0;
  }
  return;
}



void Unwind_00f4f6a6(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  iVar1 = *(int *)(iVar2 + 0x38c);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x394) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x38c) = 0;
    *(undefined4 *)(iVar2 + 0x390) = 0;
    *(undefined4 *)(iVar2 + 0x394) = 0;
  }
  return;
}



void Unwind_00f4f6b4(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  iVar1 = *(int *)(iVar2 + 0x398);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x3a0) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x398) = 0;
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    *(undefined4 *)(iVar2 + 0x3a0) = 0;
  }
  return;
}



void Unwind_00f4f6c2(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  piVar4 = (int *)(iVar1 + 0x3a8);
  iVar5 = *piVar4;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar1 + 0x3ac);
    for (; iVar5 != iVar6; iVar5 = iVar5 + 0x2c) {
      func_0x00a77320();
    }
    iVar5 = *piVar4;
    uVar3 = ((*(int *)(iVar1 + 0x3b0) - iVar5) / 0x2c) * 0x2c;
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
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  return;
}



void Unwind_00f4f6d0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x4a0,0x10,6,FUN_00579770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f6de(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x500,0xc,6,FUN_00a38a20,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f6ec(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x30);
  *(undefined ***)(iVar4 + 0x55c) = rx::VertexDataManager::vftable;
  uStack_8 = 0xa77381;
  func_0x00a77240();
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f45930;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(iVar4 + 0x56c);
  *(undefined ***)(iVar4 + 0x564) = rx::VertexBufferInterface::vftable;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x18);
      _guard_check_icall(1,uVar5);
      (*pcVar3)();
    }
    *(undefined4 *)(iVar4 + 0x56c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f6fa(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  *(undefined ***)(iVar2 + 0x58c) = rx::IndexDataManager::vftable;
  if (*(undefined4 **)(iVar2 + 0x598) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(iVar2 + 0x598);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(undefined4 **)(iVar2 + 0x594) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(iVar2 + 0x594);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f4f708(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  *(undefined ***)(iVar1 + 0x59c) = angle::base::MRUCacheBase<>::vftable;
  func_0x00b4d080();
  func_0x00b4cce0((undefined4 *)(iVar1 + 0x5a0),*(undefined4 *)(iVar1 + 0x5a0));
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x5a0),0xa0);
  return;
}



void Unwind_00f4f716(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  iVar1 = *(int *)(iVar2 + 0x5cc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x5d4) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x5cc) = 0;
    *(undefined4 *)(iVar2 + 0x5d0) = 0;
    *(undefined4 *)(iVar2 + 0x5d4) = 0;
  }
  return;
}



void Unwind_00f4f724(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x5e4,0x10,6,FUN_00a31c20,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f732(void)

{
  int iVar1;
