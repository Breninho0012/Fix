  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeffc6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00eeffce(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00ef0000(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edb435;
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



void Unwind_00ef0008(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee06ed;
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



void Unwind_00ef0010(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall();
      (*pcVar4)();
    }
  }
  return;
}



void Unwind_00ef001b(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x20);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0050(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef0876;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x120);
  if (iVar1 != 0) {
    func_0x00638060(*(int *)(iVar2 + 0x130) - iVar1,uVar3);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006ae2c0();
  uStack_8 = 0xffffffff;
  func_0x006352d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef005b(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee1a5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0063(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef0912;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar5 = iStack_8._1_3_;
  iStack_8._0_1_ = 2;
  iStack_8._1_3_ = 0;
  piVar2 = *(int **)(iVar4 + 0x114);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 0xf0)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0x114) = 0;
    uVar5 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar5;
  iStack_8._0_1_ = 1;
  piVar2 = *(int **)(iVar4 + 0xec);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 200)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0xec) = 0;
  }
  puVar1 = (undefined4 *)(iVar4 + 0xa8);
  iStack_8._0_1_ = 6;
  if (0xf < *(uint *)(iVar4 + 0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar4 + 0xbc));
  }
  *(undefined4 *)(iVar4 + 0xb8) = 0;
  *(undefined4 *)(iVar4 + 0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006352d0();
  iStack_8 = 0xffffffff;
  if (*(int *)(iVar4 + 0x58) != 0) {
    func_0x008ab37e(*(int *)(iVar4 + 0x58));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef006e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x118);
  if (iVar1 != 0) {
    func_0x00638060(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x128) - iVar1);
  }
  return;
}



void Unwind_00ef007c(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edbcbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0084(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edcf5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar3 = *(undefined4 **)(iVar2 + 0x10);
  do {
    if (puVar3 == (undefined4 *)(iVar2 + 0x10)) {
      func_0x00638680(iVar2 + 0x18,0,0);
      func_0x00638680(iVar2 + 0x20,0,0);
      uStack_8 = 0xffffffff;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    puVar1 = (undefined4 *)*puVar3;
    uVar6 = *(ushort *)(puVar3 + 6) + 0x25 + (uint)*(ushort *)((int)puVar3 + 0x1a) & 0xfffffffc;
    puVar5 = puVar3;
    if (0xfff < uVar6) {
      puVar5 = (undefined4 *)puVar3[-1];
      uVar6 = uVar6 + 0x23;
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(puVar5,uVar6,uVar4);
    puVar3 = puVar1;
  } while( true );
}



void Unwind_00ef00b0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef229b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x54) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x44);
      _guard_check_icall(unaff_EBP + -0x50,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x54) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006529c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef00bb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef00c3(void)

{
  int unaff_EBP;
  
  if ((*(char *)(unaff_EBP + -0x20) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x24) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00ef00cb(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef0100(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0x98);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef010b(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1ac) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x1b0) = 0xffffffff;
  }
  return;
}



void Unwind_00ef0116(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x60);
    _guard_check_icall(unaff_EBP + -0x6c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef011e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0126(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef012e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0136(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef013e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0146(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef014e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0156(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef015e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0166(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -200);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0171(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef39b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x180);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef017c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -200);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0187(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef018f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0197(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef019f(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xcc);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01aa(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x168);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01b5(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xcc);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01c0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01c8(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01d0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01d8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -200);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01e3(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef3a10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -400);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01ee(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -200);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef01f9(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x94);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef0204(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1a4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1a4) = *(uint *)(unaff_EBP + -0x1a4) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x7c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x80);
      _guard_check_icall(unaff_EBP + -0x8c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0226(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1a4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1a4) = *(uint *)(unaff_EBP + -0x1a4) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x1bc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x1c0);
      _guard_check_icall(unaff_EBP + -0x1cc,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0248(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1a4) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x1a4) = *(uint *)(unaff_EBP + -0x1a4) & 0xfffffffb;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x7c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x80);
      _guard_check_icall(unaff_EBP + -0x8c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef026a(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1a4) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x1a4) = *(uint *)(unaff_EBP + -0x1a4) & 0xfffffff7;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x7c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x80);
      _guard_check_icall(unaff_EBP + -0x8c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef028c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1bc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x1c0);
    _guard_check_icall(unaff_EBP + -0x1cc,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0297(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x1bc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x1c0);
    _guard_check_icall(unaff_EBP + -0x1cc,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef02a2(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x60);
    _guard_check_icall(unaff_EBP + -0x6c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef02aa(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x60);
    _guard_check_icall(unaff_EBP + -0x6c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef02b2(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1a4) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x1a4) = *(uint *)(unaff_EBP + -0x1a4) & 0xffffffef;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
      _guard_check_icall(unaff_EBP + -0x4c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef02d1(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1a4) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x1a4) = *(uint *)(unaff_EBP + -0x1a4) & 0xffffffdf;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
      _guard_check_icall(unaff_EBP + -0x4c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef02f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xe4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef02fb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0xa4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa8);
    _guard_check_icall(unaff_EBP + -0xb4,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0306(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef295b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0xa4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa8);
    _guard_check_icall(unaff_EBP + -0xb4,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0311(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xe4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef031c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0xa4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa8);
    _guard_check_icall(unaff_EBP + -0xb4,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0327(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
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



void Unwind_00ef032f(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
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



void Unwind_00ef0337(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef033f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0347(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x60);
    _guard_check_icall(unaff_EBP + -0x6c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef034f(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x2c);
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



void Unwind_00ef0357(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x2c);
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



void Unwind_00ef035f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x7c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x80);
    _guard_check_icall(unaff_EBP + -0x8c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef036a(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x7c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x80);
    _guard_check_icall(unaff_EBP + -0x8c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0375(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xcc);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0380(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x168);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef038b(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xcc);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0396(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x94);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef03a1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1bc) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x1b8,uVar1,(undefined4 *)(unaff_EBP + -0x1bc));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef03e0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0x8c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef03eb(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1c0) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x1c4) = 0xffffffff;
  }
  return;
}



void Unwind_00ef03f6(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef03fe(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0406(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef040e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0416(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef041e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0426(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef042e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0436(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef043e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0446(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef044e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0456(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef045e(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xc4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0469(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x160);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0474(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xc4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef047f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0487(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef048f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0497(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0xe8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0xd4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xd8);
      _guard_check_icall(unaff_EBP + -0xe4,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0xe8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef04a2(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0xc0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef04ad(void)

{
  int unaff_EBP;
  
  if ((*(char *)(unaff_EBP + -0xb4) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xb8) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xb8) = 0;
  }
  return;
}



void Unwind_00ef04b8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x1b0) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef04c6(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x88);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef04d1(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffffb;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x74) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
      _guard_check_icall(unaff_EBP + -0x84,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef04f3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffff7;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x1d0) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x1d4);
      _guard_check_icall(unaff_EBP + -0x1e0,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0515(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffffef;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x74) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
      _guard_check_icall(unaff_EBP + -0x84,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0537(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffffdf;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x74) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
      _guard_check_icall(unaff_EBP + -0x84,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0559(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1d0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x1d4);
    _guard_check_icall(unaff_EBP + -0x1e0,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0564(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x1d0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x1d4);
    _guard_check_icall(unaff_EBP + -0x1e0,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef056f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0577(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef057f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffffbf;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
      _guard_check_icall(unaff_EBP + -0x44,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef059e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffff7f;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
      _guard_check_icall(unaff_EBP + -0x44,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef05c2(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xdc);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef05cd(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef05d8(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef295b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef05e3(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xdc);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef05ee(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef05f9(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1b0);
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



void Unwind_00ef0604(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1b0);
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



void Unwind_00ef060f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0617(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef061f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0627(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
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



void Unwind_00ef062f(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
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



void Unwind_00ef0637(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x74) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
    _guard_check_icall(unaff_EBP + -0x84,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0642(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x74) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
    _guard_check_icall(unaff_EBP + -0x84,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef064d(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xc4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0658(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x160);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0663(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xc4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef066e(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xf8);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0679(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -200) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0xb4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xb8);
      _guard_check_icall(unaff_EBP + -0xc4,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -200) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0684(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -200) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0xb4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xb8);
      _guard_check_icall(unaff_EBP + -0xc4,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -200) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef068f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -200) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0xb4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xb8);
      _guard_check_icall(unaff_EBP + -0xc4,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -200) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef069a(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xf8);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef06a5(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -200) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0xb4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xb8);
      _guard_check_icall(unaff_EBP + -0xc4,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -200) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef06b0(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee0e1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef06b8(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x1b8);
  puStack_c = &DAT_00ee0e55;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef06c3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
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



void Unwind_00ef06cb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
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



void Unwind_00ef06d3(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x88);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef06de(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1d0) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x1cc,uVar1,(undefined4 *)(unaff_EBP + -0x1d0));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0720(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x58) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
      _guard_check_icall(unaff_EBP + -0x54,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x58) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef072b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0733(void)

{
  int unaff_EBP;
  
  if ((*(char *)(unaff_EBP + -0x24) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x28) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00ef073b(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef0770(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0778(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0780(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall();
      (*pcVar4)();
    }
  }
  return;
}



void Unwind_00ef078b(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    iVar4 = *(int *)(unaff_EBP + 8);
    puStack_c = &DAT_00eeda50;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    piVar2 = *(int **)(iVar4 + 4);
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 2;
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 8);
        _guard_check_icall(uVar5);
        (*pcVar3)();
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef07a4(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef07ac(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x20);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef07e0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef0876;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x120);
  if (iVar1 != 0) {
    func_0x00638060(*(int *)(iVar2 + 0x130) - iVar1,uVar3);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006ae2c0();
  uStack_8 = 0xffffffff;
  func_0x006352d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef07eb(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee1a5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef07f3(void)

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
  puStack_c = &DAT_00ef0912;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar5 = iStack_8._1_3_;
  iStack_8._0_1_ = 2;
  iStack_8._1_3_ = 0;
  piVar2 = *(int **)(iVar4 + 0x114);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 0xf0)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0x114) = 0;
    uVar5 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar5;
  iStack_8._0_1_ = 1;
  piVar2 = *(int **)(iVar4 + 0xec);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 200)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0xec) = 0;
  }
  puVar1 = (undefined4 *)(iVar4 + 0xa8);
  iStack_8._0_1_ = 6;
  if (0xf < *(uint *)(iVar4 + 0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar4 + 0xbc));
  }
  *(undefined4 *)(iVar4 + 0xb8) = 0;
  *(undefined4 *)(iVar4 + 0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006352d0();
  iStack_8 = 0xffffffff;
  if (*(int *)(iVar4 + 0x58) != 0) {
    func_0x008ab37e(*(int *)(iVar4 + 0x58));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef07fe(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x118);
  if (iVar1 != 0) {
    func_0x00638060(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x128) - iVar1);
  }
  return;
}



void Unwind_00ef080c(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edbcbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0814(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edcf5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar3 = *(undefined4 **)(iVar2 + 0x10);
  do {
    if (puVar3 == (undefined4 *)(iVar2 + 0x10)) {
      func_0x00638680(iVar2 + 0x18,0,0);
      func_0x00638680(iVar2 + 0x20,0,0);
      uStack_8 = 0xffffffff;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    puVar1 = (undefined4 *)*puVar3;
    uVar6 = *(ushort *)(puVar3 + 6) + 0x25 + (uint)*(ushort *)((int)puVar3 + 0x1a) & 0xfffffffc;
    puVar5 = puVar3;
    if (0xfff < uVar6) {
      puVar5 = (undefined4 *)puVar3[-1];
      uVar6 = uVar6 + 0x23;
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(puVar5,uVar6,uVar4);
    puVar3 = puVar1;
  } while( true );
}



void Unwind_00ef0840(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee1a5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0848(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef0912;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar5 = iStack_8._1_3_;
  iStack_8._0_1_ = 2;
  iStack_8._1_3_ = 0;
  piVar2 = *(int **)(iVar4 + 0x114);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 0xf0)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0x114) = 0;
    uVar5 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar5;
  iStack_8._0_1_ = 1;
  piVar2 = *(int **)(iVar4 + 0xec);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar4 + 200)),uVar6);
    (*pcVar3)();
    *(undefined4 *)(iVar4 + 0xec) = 0;
  }
  puVar1 = (undefined4 *)(iVar4 + 0xa8);
  iStack_8._0_1_ = 6;
  if (0xf < *(uint *)(iVar4 + 0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar4 + 0xbc));
  }
  *(undefined4 *)(iVar4 + 0xb8) = 0;
  *(undefined4 *)(iVar4 + 0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006352d0();
  iStack_8 = 0xffffffff;
  if (*(int *)(iVar4 + 0x58) != 0) {
    func_0x008ab37e(*(int *)(iVar4 + 0x58));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0853(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x118);
  if (iVar1 != 0) {
    func_0x00638060(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x128) - iVar1);
  }
  return;
}



void Unwind_00ef0861(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edbcbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0869(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edcf5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar3 = *(undefined4 **)(iVar2 + 0x10);
  do {
    if (puVar3 == (undefined4 *)(iVar2 + 0x10)) {
      func_0x00638680(iVar2 + 0x18,0,0);
      func_0x00638680(iVar2 + 0x20,0,0);
      uStack_8 = 0xffffffff;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    puVar1 = (undefined4 *)*puVar3;
    uVar6 = *(ushort *)(puVar3 + 6) + 0x25 + (uint)*(ushort *)((int)puVar3 + 0x1a) & 0xfffffffc;
    puVar5 = puVar3;
    if (0xfff < uVar6) {
      puVar5 = (undefined4 *)puVar3[-1];
      uVar6 = uVar6 + 0x23;
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(puVar5,uVar6,uVar4);
    puVar3 = puVar1;
  } while( true );
}



void Unwind_00ef08a0(void)

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
  puStack_c = &DAT_00edbe00;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *(int *)(iVar2 + 0x28);
  if (iVar1 != 0) {
    func_0x008ab37e(iVar1,uVar3,iVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef08a8(void)

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
  puStack_c = &DAT_00edbd08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(iVar2 + 0x78);
  uStack_8 = 0;
  if (0xf < *(uint *)(iVar2 + 0x8c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x8c),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x006352d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef08b3(void)

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
  piVar1 = *(int **)(iVar3 + 0xbc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x98),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xbc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef08c1(void)

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



void Unwind_00ef08cf(void)

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



void Unwind_00ef08d7(void)

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



void Unwind_00ef08df(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edbcbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef08e7(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x30);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x44),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef08f2(void)

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



void Unwind_00ef08fa(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edcf5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar3 = *(undefined4 **)(iVar2 + 0x10);
  do {
    if (puVar3 == (undefined4 *)(iVar2 + 0x10)) {
      func_0x00638680(iVar2 + 0x18,0,0);
      func_0x00638680(iVar2 + 0x20,0,0);
      uStack_8 = 0xffffffff;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    puVar1 = (undefined4 *)*puVar3;
    uVar6 = *(ushort *)(puVar3 + 6) + 0x25 + (uint)*(ushort *)((int)puVar3 + 0x1a) & 0xfffffffc;
    puVar5 = puVar3;
    if (0xfff < uVar6) {
      puVar5 = (undefined4 *)puVar3[-1];
      uVar6 = uVar6 + 0x23;
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(puVar5,uVar6,uVar4);
    puVar3 = puVar1;
  } while( true );
}



void Unwind_00ef0902(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x28);
  if (iVar1 != 0) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00ef0930(void)

{
  int iVar1;
  code *pcVar2;
  undefined1 *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee1bae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x68);
  if (iVar1 != 0) {
    uStack_8 = 0;
    if (*(int *)(iVar1 + 0x50) != 0) {
      pcVar2 = (code *)**(undefined4 **)(iVar1 + 0x4c);
      _guard_check_icall(iVar1 + 0x40,uVar3);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x0052b260();
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x6c);
  if (_Memory != (undefined1 *)0x0) {
    piVar5 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar5 + 0x18) == '\0') {
      func_0x008abb44();
      piVar5 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar5 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar5 + 0xc4) + 4), iVar1 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar1 + iVar4 * 4) == 0) {
          *_Memory = _Memory[0x5c];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00653a89;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00653a89:
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0938(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x58);
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



void Unwind_00ef0940(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0948(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0950(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0958(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x50) + 4);
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



int * Unwind_00ef0960(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x60);
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



int * Unwind_00ef096b(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x5c);
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



void Unwind_00ef0976(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -100);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef097e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,unaff_EBP + -0x30,unaff_EBP + -0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0986(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0x30;
  puStack_c = &DAT_00ee1220;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef098e(void)

{
  return;
}



void Unwind_00ef0999(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0xa0;
  puStack_c = &DAT_00ee1220;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef09a4(void)

{
  undefined1 *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee3c0b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x74) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0052b260(uVar2);
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x78);
  if (_Memory != (undefined1 *)0x0) {
    piVar4 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar4 + 0x18) == '\0') {
      func_0x008abb44();
      piVar4 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar4 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar4 + 0xc4) + 4), iVar1 != 0)) {
      iVar3 = 4;
      do {
        if (*(int *)(iVar1 + iVar3 * 4) == 0) {
          *_Memory = _Memory[0x24];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0065b510;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0065b510:
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef09ac(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x50) + 4;
  puStack_c = &DAT_00ee1220;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,iVar2,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef09b7(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,unaff_EBP + -0xa0,unaff_EBP + -0xa0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef09c2(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x60);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ef09ca(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x5c);
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



void Unwind_00ef09d5(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x58);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef09dd(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,unaff_EBP + -0x30,unaff_EBP + -0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef09e5(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ef09ed(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x60);
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



int * Unwind_00ef09f8(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x5c);
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



void Unwind_00ef0a03(void)

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



void Unwind_00ef0a0b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0a13(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0a1b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x50);
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



void Unwind_00ef0a23(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x50);
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



void Unwind_00ef0a60(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef0a6b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
    puStack_c = &DAT_00eeda80;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x0068de80(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0ab0(void)

{
  code *pcVar1;
  byte bVar3;
  char *pcVar2;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puStack_c = &DAT_00ef2910;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(unaff_EBP + -0x1c)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      *(undefined1 *)(unaff_EBP + -0x1c) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    default:
      pcVar1 = (code *)swi(0x29);
      pcVar2 = (char *)(*pcVar1)(unaff_EBP + -0x30);
      bVar3 = (byte)((uint)pcVar2 >> 8);
      *(byte *)(unaff_ESI + 0x6b) = *(byte *)(unaff_ESI + 0x6b) & bVar3;
      *pcVar2 = *pcVar2 + bVar3;
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



void Unwind_00ef0ac9(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x70);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0ad4(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef397e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar3 = *(int **)(unaff_EBP + -0x70);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b10(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef16b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b1b(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00edf38f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 3;
  iVar1 = *(int *)(iVar2 + 0xbc);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xc4) - iVar1,uVar3);
    *(int *)(iVar2 + 0xbc) = 0;
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
  }
  iStack_8._0_1_ = 2;
  iVar1 = *(int *)(iVar2 + 0xa8);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xb0) - iVar1,uVar3);
    *(int *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
  }
  iStack_8._0_1_ = 1;
  func_0x0064b700();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0064b700();
  iStack_8 = 0xffffffff;
  func_0x00647b80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b26(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef161e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00648180(uVar1);
  uStack_8 = 2;
  func_0x006a90f0();
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b2e(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef15c6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x00648180(uVar1);
  uStack_8 = 3;
  func_0x006a90f0();
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b36(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef12be;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 2;
  func_0x00648180(uVar1);
  uStack_8 = 4;
  func_0x006a90f0();
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b41(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
      _guard_check_icall(unaff_EBP + -0x38,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0b5a(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eed953;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b62(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b6a(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b72(void)

{
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x1c) != 0) {
    func_0x0069a8f0(**(int **)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00ef0b7a(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xf0);
  puStack_c = &DAT_00ef12ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    func_0x0069a8f0(iVar1,uVar2,piVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0b88(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
      _guard_check_icall(unaff_EBP + -0x38,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0ba1(void)

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



void Unwind_00ef0baf(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0bb7(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0bbf(void)

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



void Unwind_00ef0bc7(void)

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
  piVar1 = *(int **)(iVar3 + 0x20c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x1e8),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x20c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0bd5(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x918);
  if (iVar1 != 0) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00ef0be3(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x948);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0bf1(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x94c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0bff(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x950);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c0d(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x954);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c1b(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x958);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c29(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x95c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c37(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x960);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c45(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x990) + 4);
  _guard_check_icall(iVar2 + 0x970,uVar3);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c80(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef16b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c88(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1460;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0c93(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
      _guard_check_icall(unaff_EBP + -0x34,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0cac(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
      _guard_check_icall(unaff_EBP + -0x34,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0cc5(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eed953;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0ccd(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
    _guard_check_icall(unaff_EBP + -0x34,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0cd5(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
    _guard_check_icall(unaff_EBP + -0x34,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0cdd(void)

{
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x18) != 0) {
    func_0x0069a8f0(**(int **)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00ef0ce5(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
  puStack_c = &DAT_00ef12ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    func_0x0069a8f0(iVar1,uVar2,piVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0cf0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
      _guard_check_icall(unaff_EBP + -0x34,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0d09(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
      _guard_check_icall(unaff_EBP + -0x34,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0d22(void)

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



void Unwind_00ef0d2d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
    _guard_check_icall(unaff_EBP + -0x34,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0d35(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
    _guard_check_icall(unaff_EBP + -0x34,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0d3d(void)

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



void Unwind_00ef0d45(void)

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
  piVar1 = *(int **)(iVar3 + 0x13c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x118),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x13c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0d53(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x848);
  if (iVar1 != 0) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00ef0d61(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x878);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0d6f(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x87c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0d7d(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x880);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0d8b(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x884);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0d99(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x888);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0da7(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x88c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0db5(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x890);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0dc3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c0) + 4);
  _guard_check_icall(iVar2 + 0x8a0,uVar3);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e00(void)

{
  undefined1 *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef3ecb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x006a95d0();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x18);
  if (_Memory != (undefined1 *)0x0) {
    piVar4 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar4 + 0x18) == '\0') {
      func_0x008abb44();
      piVar4 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar4 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar4 + 0xc4) + 4), iVar1 != 0)) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar1 + iVar3 * 4) == 0) {
          *_Memory = _Memory[0x8c];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_006bc769;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_006bc769:
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e30(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e38(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    puStack_c = &DAT_00ef156b;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 1;
    piVar3 = *(int **)(unaff_EBP + -0xa0);
    if (piVar3 != (int *)0x0) {
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall(uVar5);
        (*pcVar4)();
      }
    }
    uStack_8 = 0xffffffff;
    func_0x00650860();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0e54(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xa0);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e5f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e67(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e6f(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
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



void Unwind_00ef0e77(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e7f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e87(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e8f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3a8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e97(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0e9f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0ea7(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0eaf(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0eb7(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0ebf(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0ec7(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0ecf(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0ed7(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0edf(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0ee7(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0eef(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0ef7(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0eff(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef0f40(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0xfc,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0f48(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x84);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0f50(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00ef1c9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0f5b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
      _guard_check_icall(unaff_EBP + -0x4c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0f74(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
      _guard_check_icall(unaff_EBP + -0x4c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef0f8d(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00edb435;
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



void Unwind_00ef0f95(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00ef24bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xf4) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xe8) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xe4);
      _guard_check_icall(iVar2 + 0xd8,uVar3);
      (*pcVar1)();
    }
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xcc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
    _guard_check_icall(iVar2 + 0xbc,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0fa3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0fab(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0fe0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0fe8(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef0ff0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef1009(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef1022(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xa0);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef102d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -100);
    _guard_check_icall(unaff_EBP + -0x70,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1035(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef295b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -100);
    _guard_check_icall(unaff_EBP + -0x70,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1040(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0xa0);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef104b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -100);
    _guard_check_icall(unaff_EBP + -0x70,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1053(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef105b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef1063(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef106b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1073(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef107b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef1083(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
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



void Unwind_00ef10c0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x60);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef10cb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef39b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x118);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef10d6(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x60);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1110(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef111b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00eeda80;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x0068de80(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef1160(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef12be;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 2;
  func_0x00648180(uVar1);
  uStack_8 = 4;
  func_0x006a90f0();
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef116b(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eed953;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1173(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xf0);
  puStack_c = &DAT_00ef12ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    func_0x0069a8f0(iVar1,uVar2,piVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1181(void)

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



void Unwind_00ef118f(void)

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
  piVar1 = *(int **)(iVar3 + 0x20c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x1e8),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x20c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef119d(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x918);
  if (iVar1 != 0) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00ef11ab(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x948);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef11b9(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x94c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef11c7(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x950);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef11d5(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x954);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef11e3(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x958);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef11f1(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x95c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef11ff(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x960);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef120d(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x990) + 4);
  _guard_check_icall(iVar2 + 0x970,uVar3);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef121b(void)

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



void Unwind_00ef1223(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00ef122b(void)

{
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x18) != 0) {
    func_0x0069a8f0(**(int **)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00ef1233(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eee4e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef123e(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1246(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall();
      (*pcVar4)();
    }
  }
  return;
}



void Unwind_00ef1280(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef15c6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x00648180(uVar1);
  uStack_8 = 3;
  func_0x006a90f0();
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1288(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef161e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00648180(uVar1);
  uStack_8 = 2;
  func_0x006a90f0();
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1290(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef16b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef129b(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edf38f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 3;
  iVar1 = *(int *)(iVar2 + 0xbc);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xc4) - iVar1,uVar3);
    *(int *)(iVar2 + 0xbc) = 0;
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
  }
  iStack_8._0_1_ = 2;
  iVar1 = *(int *)(iVar2 + 0xa8);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xb0) - iVar1,uVar3);
    *(int *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
  }
  iStack_8._0_1_ = 1;
  func_0x0064b700();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0064b700();
  iStack_8 = 0xffffffff;
  func_0x00647b80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef12a6(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef12ae(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  return;
}



void Unwind_00ef12e0(void)

{
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x10) != 0) {
    func_0x0069a8f0(**(int **)(unaff_EBP + -0x10));
  }
  return;
}



void Unwind_00ef1310(void)

{
