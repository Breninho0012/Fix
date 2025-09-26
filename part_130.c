  
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0efcc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f026e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x74) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x78) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x78) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0efd7(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f04b5c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x74) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x78) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x78) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0efe2(void)

{
  return;
}



void Unwind_00f0f020(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x24);
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



void Unwind_00f0f02b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f05283;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 0x3c,iVar1 + 0x34,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f036(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f026e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 400) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x18c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f041(void)

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
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x1c4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1c0);
    _guard_check_icall(iVar2 + 0x1b4,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x1a8) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1a4);
    _guard_check_icall(iVar2 + 0x198,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f04f(void)

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
  puStack_c = &DAT_00f02906;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x110) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x124) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x120);
      _guard_check_icall(iVar2 + 0x114,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x110) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006cf020();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f057(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x138);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f065(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x144) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x140), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f0f073(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
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



void Unwind_00f0f07e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee8f38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 0x14,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f089(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f094(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f0c0(void)

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
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f0f0a1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x1bc);
  if (iVar1 != 0) {
    iStack_8 = 2;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 400) != '\0') && (*(undefined1 **)(iVar1 + 0x18c) != (undefined1 *)0x0))
    {
      **(undefined1 **)(iVar1 + 0x18c) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 4;
    func_0x0068de80();
    iStack_8._0_1_ = 1;
    func_0x006ef9b0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x00658e30();
    iStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x24);
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = piVar5[2] + -1;
      piVar5[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x1bc) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1c0);
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
          *_Memory = _Memory[0x1d0];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_0071e5ec;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_0071e5ec:
    *(undefined4 *)(unaff_EBP + -0x1c0) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f0cb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c8);
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



void Unwind_00f0f0d6(void)

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



void Unwind_00f0f0de(void)

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



void Unwind_00f0f0e6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1d0);
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



void Unwind_00f0f0f1(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1cc);
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



void Unwind_00f0f0fc(void)

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
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f104(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f10c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f026e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x74) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x78) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x78) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f117(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f04b5c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x74) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x78) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x78) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f122(void)

{
  return;
}



void Unwind_00f0f160(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x28) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x28) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void Unwind_00f0f16b(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f173(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f17e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee8f38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f186(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ee8f38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f18e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8f38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f196(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x30);
    puStack_c = &DAT_00ee8f38;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658e30(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0f1af(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8f38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f1b7(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x38) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x38) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void Unwind_00f0f1c2(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f1ca(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f1d5(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x4c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f1dd(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f1e5(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f05283;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 0x14,iVar1 + 0xc,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f210(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x28) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x28) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    pcVar3 = (char *)(*pcVar1)();
    cVar2 = (char)pcVar3;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f0f21b(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar7;
  bool bVar8;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 8);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2);
  if (!bVar7 && !bVar8) {
    return pcVar6;
  }
  cVar4 = (char)pcVar6;
  pcVar6[in_GS_OFFSET] = pcVar6[in_GS_OFFSET] + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar3 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar3)();
  return pcVar6;
}



void Unwind_00f0f223(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f22e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee8fb8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f236(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ee8fb8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f23e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8fb8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f246(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x30);
    puStack_c = &DAT_00ee8fb8;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658d30(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0f25f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8fb8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f267(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x38) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x38) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    pcVar3 = (char *)(*pcVar1)();
    cVar2 = (char)pcVar3;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f0f272(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar7;
  bool bVar8;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 8);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2);
  if (!bVar7 && !bVar8) {
    return pcVar6;
  }
  cVar4 = (char)pcVar6;
  pcVar6[in_GS_OFFSET] = pcVar6[in_GS_OFFSET] + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar3 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar3)();
  return pcVar6;
}



void Unwind_00f0f27a(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f285(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x4c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f0f28d(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar7;
  bool bVar8;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 8);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2);
  if (!bVar7 && !bVar8) {
    return pcVar6;
  }
  cVar4 = (char)pcVar6;
  pcVar6[in_GS_OFFSET] = pcVar6[in_GS_OFFSET] + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar3 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar3)();
  return pcVar6;
}



void Unwind_00f0f295(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f05303;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 0x14,iVar1 + 0xc,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f2c0(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x28) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x28) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f0f2cb(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x24);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f0f2d3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f2de(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f2e6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f2ee(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f2f6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x30);
    puStack_c = &DAT_00ee8ff8;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0f30f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f317(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x38) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x38) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f0f322(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x34);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f0f32a(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f335(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x4c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f0f33d(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x3c);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f0f345(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f05343;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0x14,iVar1 + 0xc,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f370(void)

{
  char *pcVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  char extraout_CL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar4 = *(int *)(unaff_EBP + -0x28);
  switch(*(undefined1 *)(iVar4 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x0065980c;
  case 1:
    func_0x00658b10();
code_r0x0065980c:
    *(undefined1 *)(iVar4 + 0x10) = 0;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(iVar4 + 4);
    *(char *)(in_GS_OFFSET + unaff_EDI) = *(char *)(in_GS_OFFSET + unaff_EDI) + (char)(uVar3 | 0x98)
    ;
    iVar4 = (int)(short)(uVar3 | 0x98);
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0f37b(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0f383(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f38e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f396(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f39e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f3a6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x30);
    puStack_c = &DAT_00ee9038;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0f3bf(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f3c7(void)

{
  char *pcVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  char extraout_CL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar4 = *(int *)(unaff_EBP + -0x38);
  switch(*(undefined1 *)(iVar4 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x0065980c;
  case 1:
    func_0x00658b10();
code_r0x0065980c:
    *(undefined1 *)(iVar4 + 0x10) = 0;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(iVar4 + 4);
    *(char *)(in_GS_OFFSET + unaff_EDI) = *(char *)(in_GS_OFFSET + unaff_EDI) + (char)(uVar3 | 0x98)
    ;
    iVar4 = (int)(short)(uVar3 | 0x98);
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0f3d2(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0f3da(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f3e5(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f3ed(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0f3f5(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f05383;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 0x14,iVar1 + 0xc,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f420(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  char extraout_DL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x28);
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x0065985c;
  case 1:
    func_0x00658b10();
code_r0x0065985c:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    sVar4 = (*pcVar3)(iVar2 + 4);
    pcVar1 = (char *)(in_GS_OFFSET + unaff_EDI + -0x68);
    *pcVar1 = *pcVar1 + extraout_DL;
    pcVar1 = (char *)(in_GS_OFFSET + sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar1 = (char *)(sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0f42b(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0f433(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f43e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f446(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f44e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f456(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x30);
    puStack_c = &DAT_00ee9078;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0f46f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f477(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  char extraout_DL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x0065985c;
  case 1:
    func_0x00658b10();
code_r0x0065985c:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    sVar4 = (*pcVar3)(iVar2 + 4);
    pcVar1 = (char *)(in_GS_OFFSET + unaff_EDI + -0x68);
    *pcVar1 = *pcVar1 + extraout_DL;
    pcVar1 = (char *)(in_GS_OFFSET + sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar1 = (char *)(sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0f482(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0f48a(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f495(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f49d(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0f4a5(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f053c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 0x14,iVar1 + 0xc,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f4d0(void)

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



void Unwind_00f0f4d8(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f4e0(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f4e8(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f4f0(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f4f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar1,unaff_EBP + -0xb4,unaff_EBP + -0xdc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f503(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0a7c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar1,unaff_EBP + -0xb4,unaff_EBP + -0xdc,unaff_EBP + -0xdc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f50e(void)

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



void Unwind_00f0f527(void)

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



void Unwind_00f0f540(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f548(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0a7c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar1,unaff_EBP + -0x14c,unaff_EBP + -0x174,unaff_EBP + -0x174);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f553(void)

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
  if (*(int *)(unaff_EBP + -0xe8) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xec);
    _guard_check_icall(unaff_EBP + -0xf8,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f55e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f16f66;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0xe8) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xec);
    _guard_check_icall(unaff_EBP + -0xf8,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f569(void)

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



void Unwind_00f0f571(void)

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



void Unwind_00f0f579(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar1,unaff_EBP + -0xb4,unaff_EBP + -0xdc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f584(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00efa7a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f58f(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ef4c29;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if (*(int *)(iVar5 + 0x40) != 0) {
    func_0x008ab812(*(int *)(iVar5 + 0x40),0xa0,uVar6);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  piVar3 = *(int **)(iVar5 + 0x3c);
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
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    pcVar4 = (code *)**(undefined4 **)(iVar5 + 0x28);
    _guard_check_icall(iVar5 + 0x1c);
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f59a(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f5a2(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f5aa(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f5b2(void)

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



void Unwind_00f0f5ba(void)

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



void Unwind_00f0f600(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f026e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x1dc) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x1e0) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x1e0) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f60b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f04b5c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x1dc) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x1e0) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x1e0) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f616(void)

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



void Unwind_00f0f62f(void)

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



void Unwind_00f0f648(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffb;
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



void Unwind_00f0f661(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00f026e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x144) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x140), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f669(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f04b5c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x7c) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x80) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x80) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f674(void)

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



void Unwind_00f0f67c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f12c6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f687(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f04b5c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x7c) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x80) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x80) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f692(void)

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



void Unwind_00f0f69a(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
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



void Unwind_00f0f6a2(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
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



void Unwind_00f0f6aa(void)

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



void Unwind_00f0f6b2(void)

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



void Unwind_00f0f6f0(void)

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
  puStack_c = &DAT_00f11531;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x006cf0c0();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x30);
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
          *_Memory = _Memory[0x19c];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00728119;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_00728119:
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f6f8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f05f08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar2,iVar1 + 0x58,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f703(void)

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



void Unwind_00f0f70b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
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
  return;
}



void Unwind_00f0f724(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
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
  return;
}



void Unwind_00f0f73d(void)

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
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f748(void)

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
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f750(void)

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
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f758(void)

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
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 400) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x18c);
    _guard_check_icall(iVar2 + 0x180,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x174) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x170);
    _guard_check_icall(iVar2 + 0x164,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f7a0(void)

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
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f11438;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x230);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0x220) != '\0') && (*(undefined1 **)(iVar1 + 0x21c) != (undefined1 *)0x0)
       ) {
      **(undefined1 **)(iVar1 + 0x21c) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006f4630();
    iStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x24);
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = piVar5[2] + -1;
      piVar5[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x230) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x234);
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
          *_Memory = _Memory[0x268];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00727cd9;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00727cd9:
    *(undefined4 *)(unaff_EBP + -0x234) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f7ab(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x248);
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



void Unwind_00f0f7b6(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -600) + 0x24);
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



void Unwind_00f0f7c4(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -600);
  puStack_c = &DAT_00f03fd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x220) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x21c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006f4630();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f7d2(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -600);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x25c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 600);
    _guard_check_icall(iVar2 + 0x24c,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x240) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x23c);
    _guard_check_icall(iVar2 + 0x230,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f820(void)

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
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f11318;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x230);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0x184) != '\0') && (*(undefined1 **)(iVar1 + 0x180) != (undefined1 *)0x0)
       ) {
      **(undefined1 **)(iVar1 + 0x180) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006f4570();
    iStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x24);
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = piVar5[2] + -1;
      piVar5[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x230) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x234);
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
          *_Memory = _Memory[0x1c8];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00727a09;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00727a09:
    *(undefined4 *)(unaff_EBP + -0x234) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f82b(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x248);
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



void Unwind_00f0f836(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -600) + 0x24);
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



void Unwind_00f0f844(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -600);
  puStack_c = &DAT_00f03f74;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x184) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x180), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006f4570();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f852(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -600);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x1bc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1b8);
    _guard_check_icall(iVar2 + 0x1ac,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x1a0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x19c);
    _guard_check_icall(iVar2 + 400,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8a0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f016e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8a8(void)

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



void Unwind_00f0f8b0(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x60);
    _guard_check_icall(iVar2 + 0x54,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8bb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0dd9b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x50);
    _guard_check_icall(unaff_EBP + -0x5c,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8c6(void)

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
  puStack_c = &DAT_00f138b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x007189f0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1c);
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
          *_Memory = _Memory[0x78];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0073075d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0073075d:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8ce(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f016e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8d6(void)

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



void Unwind_00f0f8de(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x60);
    _guard_check_icall(iVar2 + 0x54,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8e9(void)

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
  puStack_c = &DAT_00f0dd9b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x68) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 100);
    _guard_check_icall(iVar2 + 0x58,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8f4(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f8fc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x1c,uVar1,(undefined4 *)(unaff_EBP + -0x20));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f940(void)

{
  undefined1 *_Memory;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = *(undefined1 **)(unaff_EBP + -0x1c);
  if (_Memory != (undefined1 *)0x0) {
    uVar1 = *(uint *)(unaff_EBP + -0x18);
    piVar4 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar4 + 0x18) == '\0') {
      func_0x008abb44(uVar2);
      piVar4 = (int *)unaff_FS_OFFSET[0xb];
    }
    if (*(int *)(*piVar4 + 0xc4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*piVar4 + 0xc4) + 4);
    }
    if ((uVar1 < 0x3fd) && (iVar5 != 0)) {
      iVar3 = 6;
      do {
        if (*(int *)(iVar5 + iVar3 * 4) == 0) {
          *_Memory = _Memory[uVar1];
          *(undefined1 **)(iVar5 + iVar3 * 4) = _Memory;
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
    }
    _aligned_free(_Memory);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f948(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::asio::detail::cancellation_handler_base::vftable;
  return;
}



void Unwind_00f0f980(void)

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
  puStack_c = &DAT_00f0ccab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x13c) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006bec40(uVar2);
    *(undefined4 *)(unaff_EBP + -0x13c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x140);
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
          *_Memory = _Memory[300];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00713a10;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00713a10:
    *(undefined4 *)(unaff_EBP + -0x140) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f98b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc9e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar1,unaff_EBP + -0x110,unaff_EBP + -0x138);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f996(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f04220;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar1,unaff_EBP + -0x110,unaff_EBP + -0x138,unaff_EBP + -0x138);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f9a1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc9e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar1,unaff_EBP + -0x110,unaff_EBP + -0x138);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f9ac(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x148);
  puStack_c = &DAT_00ef480d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0f9ba(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14c);
  puStack_c = &DAT_00ef48cb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a36a0(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa00(void)

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
  puStack_c = &DAT_00f0cc60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x110) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006ba870(uVar2);
    *(undefined4 *)(unaff_EBP + -0x110) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x114);
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
          *_Memory = _Memory[0x100];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00713929;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00713929:
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa0b(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10c);
  puStack_c = &DAT_00ef397e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar2 = *(int **)(iVar4 + 0xa0);
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
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa16(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar1,unaff_EBP + -0x108);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa21(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f08a85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar1,unaff_EBP + -0x108,unaff_EBP + -0x108);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa2c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar1,unaff_EBP + -0x108);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa37(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10c);
  puStack_c = &DAT_00ef397e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar2 = *(int **)(iVar4 + 0xa0);
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
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa80(void)

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
  puStack_c = &DAT_00f0cc1b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x114) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006a36a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x118);
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
          *_Memory = _Memory[0x100];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00713840;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00713840:
    *(undefined4 *)(unaff_EBP + -0x118) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa8b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x110);
  puStack_c = &DAT_00ef39b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fa96(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x10c,unaff_EBP + -0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0faa1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0x10c;
  puStack_c = &DAT_00f08ad0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0faac(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x10c,unaff_EBP + -0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fab7(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x110);
  puStack_c = &DAT_00ef39b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fac2(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x120);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0xb8);
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



void Unwind_00f0fb00(void)

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
  puStack_c = &DAT_00f0cbcb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x128) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006a36a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x128) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -300);
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
          *_Memory = _Memory[0x110];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00713750;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00713750:
    *(undefined4 *)(unaff_EBP + -300) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb0b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x124);
  puStack_c = &DAT_00ef3a10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb16(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c88;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x120,unaff_EBP + -0x120);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb21(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0x120;
  puStack_c = &DAT_00f08b10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb2c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c88;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x120,unaff_EBP + -0x120);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb37(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x124);
  puStack_c = &DAT_00ef3a10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb42(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x134);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 200);
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



void Unwind_00f0fb80(void)

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
  puStack_c = &DAT_00f0cb7b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xf4) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006a36a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0xf4) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xf8);
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
          *_Memory = _Memory[0xe4];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00713660;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00713660:
    *(undefined4 *)(unaff_EBP + -0xf8) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb8b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0xf0,unaff_EBP + -0xf0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fb96(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0xf0;
  puStack_c = &DAT_00f08b50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fba1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0xf0,unaff_EBP + -0xf0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fbac(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x100);
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fbb7(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x104);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x9c);
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



void Unwind_00f0fc00(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0a840;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar1,unaff_EBP + -300,unaff_EBP + -0x160,unaff_EBP + -0x160);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc0b(void)

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
  puStack_c = &DAT_00f1387b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006c7940(uVar2);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1c);
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
          *_Memory = _Memory[0x128];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00730690;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00730690:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc13(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f01628;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x34,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc1b(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  iVar3 = iVar1 + 4;
  puStack_c = &DAT_00f0a840;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x38,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc26(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f01628;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar1,unaff_EBP + -300,unaff_EBP + -0x160);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc31(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ef6e3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc3c(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ef6ea3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006b4cf0(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc44(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc4c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x1c,uVar1,(undefined4 *)(unaff_EBP + -0x20));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc90(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0a800;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar1,unaff_EBP + -300,unaff_EBP + -0x158,unaff_EBP + -0x158);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fc9b(void)

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
  puStack_c = &DAT_00f1382b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006c7940(uVar2);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1c);
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
          *_Memory = _Memory[0x120];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_007305a0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_007305a0:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fca3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f01668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x2c,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fcab(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  iVar3 = iVar1 + 4;
  puStack_c = &DAT_00f0a800;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x30,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fcb6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f01668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar1,unaff_EBP + -300,unaff_EBP + -0x158);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fcc1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ef6e3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fccc(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ef6ea3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006b4cf0(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fcd4(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fcdc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x1c,uVar1,(undefined4 *)(unaff_EBP + -0x20));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd20(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd28(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0a7c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar1,unaff_EBP + -0x90,unaff_EBP + -0xb8,unaff_EBP + -0xb8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd33(void)

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
  puStack_c = &DAT_00f137de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006bfa00(uVar2);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1c);
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
          *_Memory = _Memory[0x80];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_007304b9;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_007304b9:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd3b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd43(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  iVar3 = iVar1 + 4;
  puStack_c = &DAT_00f0a7c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x2c,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd4e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar1,unaff_EBP + -0x90,unaff_EBP + -0xb8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd59(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00efa7a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd64(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ef4c29;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if (*(int *)(iVar5 + 0x40) != 0) {
    func_0x008ab812(*(int *)(iVar5 + 0x40),0xa0,uVar6);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  piVar3 = *(int **)(iVar5 + 0x3c);
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
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    pcVar4 = (code *)**(undefined4 **)(iVar5 + 0x28);
    _guard_check_icall(iVar5 + 0x1c);
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd6f(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fd77(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x1c,uVar1,(undefined4 *)(unaff_EBP + -0x20));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fdb0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00efc9e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fdbb(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f041a3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar2,iVar1 + 0x44,iVar1 + 0x1c,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fdc6(void)

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



void Unwind_00f0fdce(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x1c);
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



void Unwind_00f0fdd6(void)

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



void Unwind_00f0fdde(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x134) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x148) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x144);
      _guard_check_icall(iVar2 + 0x138,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x134) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fdec(void)

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
  puStack_c = &DAT_00f0a8bc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x134) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x148) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x144);
      _guard_check_icall(iVar2 + 0x138,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x134) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bec40();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fdf4(void)

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



void Unwind_00f0fdff(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x15c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fe0d(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 0x168) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 0x164), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f0fe40(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e383;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0fe59(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar1 = *(int *)(unaff_EBP + -0x18);
    puStack_c = &DAT_00ee9078;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0fe72(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e383;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0feb0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e383;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0fec9(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  char extraout_DL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x0065985c;
  case 1:
    func_0x00658b10();
code_r0x0065985c:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    sVar4 = (*pcVar3)(iVar2 + 4);
    pcVar1 = (char *)(in_GS_OFFSET + unaff_EDI + -0x68);
    *pcVar1 = *pcVar1 + extraout_DL;
    pcVar1 = (char *)(in_GS_OFFSET + sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar1 = (char *)(sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0fed4(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0fedc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fee7(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 0x10,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0fef2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e383;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0ff30(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0e383;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 0x40,iVar1 + 0x38,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff3b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0e383;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 0x18,iVar1 + 0x10,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff46(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  char extraout_DL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x48);
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x0065985c;
  case 1:
    func_0x00658b10();
code_r0x0065985c:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    sVar4 = (*pcVar3)(iVar2 + 4);
    pcVar1 = (char *)(in_GS_OFFSET + unaff_EDI + -0x68);
    *pcVar1 = *pcVar1 + extraout_DL;
    pcVar1 = (char *)(in_GS_OFFSET + sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar1 = (char *)(sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0ff51(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0ff59(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff64(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff6c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0e383;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c,unaff_EBP + -0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff74(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x70,unaff_EBP + -0x78);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff7c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff84(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0ff8c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff94(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ff9f(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0ffa7(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 0x18,iVar1 + 0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ffb2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ffbd(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0ffc5(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 0x40,iVar1 + 0x38);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ffd0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x58);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0ffdb(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f10010(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e3c3;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10029(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar1 = *(int *)(unaff_EBP + -0x18);
    puStack_c = &DAT_00ee8ff8;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10042(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e3c3;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10080(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e3c3;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10099(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x20) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x20) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f100a4(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f100ac(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f100b7(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0x10,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f100c2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e3c3;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10100(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0e3c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0x38,iVar1 + 0x30,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f1010b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0e3c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0x18,iVar1 + 0x10,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10116(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x40) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x40) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f10121(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x48);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f10129(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10134(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x2c,unaff_EBP + -0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f1013c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0e3c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x2c,unaff_EBP + -0x34,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10144(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x60,unaff_EBP + -0x68);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f1014c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x60);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f10154(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x40);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f1015c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x2c,unaff_EBP + -0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10164(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f1016f(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x48);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f10177(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0x18,iVar1 + 0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10182(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f1018d(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x4c);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f10195(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0x38,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f101a0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f101ab(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x18);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f101e0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e403;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f101f9(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar1 = *(int *)(unaff_EBP + -0x18);
    puStack_c = &DAT_00ee9038;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar2,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10212(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e403;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10250(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e403;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f10269(void)

{
  char *pcVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  char extraout_CL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar4 = *(int *)(unaff_EBP + -0x20);
  switch(*(undefined1 *)(iVar4 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x0065980c;
  case 1:
    func_0x00658b10();
code_r0x0065980c:
    *(undefined1 *)(iVar4 + 0x10) = 0;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(iVar4 + 4);
    *(char *)(in_GS_OFFSET + unaff_EDI) = *(char *)(in_GS_OFFSET + unaff_EDI) + (char)(uVar3 | 0x98)
    ;
    iVar4 = (int)(short)(uVar3 | 0x98);
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f10274(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f1027c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10287(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 0x10,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10292(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f0e403;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar2,iVar1 + 0x10,iVar1 + 8,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f102d0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0e403;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 0x40,iVar1 + 0x38,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f102db(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0e403;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 0x18,iVar1 + 0x10,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f102e6(void)

{
  char *pcVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  char extraout_CL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar4 = *(int *)(unaff_EBP + -0x48);
  switch(*(undefined1 *)(iVar4 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x0065980c;
  case 1:
    func_0x00658b10();
code_r0x0065980c:
    *(undefined1 *)(iVar4 + 0x10) = 0;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(iVar4 + 4);
    *(char *)(in_GS_OFFSET + unaff_EDI) = *(char *)(in_GS_OFFSET + unaff_EDI) + (char)(uVar3 | 0x98)
    ;
    iVar4 = (int)(short)(uVar3 | 0x98);
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f102f1(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f102f9(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10304(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f1030c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0e403;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c,unaff_EBP + -0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10314(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x70,unaff_EBP + -0x78);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f1031c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10324(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f1032c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10334(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f1033f(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f10347(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 0x18,iVar1 + 0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f10352(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f1035d(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
