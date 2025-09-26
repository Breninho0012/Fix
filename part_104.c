  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eebab8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
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
          *_Memory = _Memory[200];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0067f25d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0067f25d:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb793(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb79b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb7a3(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x34) + 4;
  puStack_c = &DAT_00eeae6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,iVar2,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb7ae(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x108,unaff_EBP + -0x108);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb7b9(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb7c1(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb7c9(void)

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



void Unwind_00eeb7d1(void)

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



void Unwind_00eeb810(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb818(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee4df5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb820(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0xd0;
  puStack_c = &DAT_00eeaead;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb82b(void)

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
  puStack_c = &DAT_00eeba68;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
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
          *_Memory = _Memory[0x90];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0067f16d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0067f16d:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb833(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb83b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee4df5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb843(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x2c) + 4;
  puStack_c = &DAT_00eeaead;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,iVar2,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb84e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee4df5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xd0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb859(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb861(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb869(void)

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



void Unwind_00eeb871(void)

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



void Unwind_00eeb8b0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::detail::cancellation_handler_base::vftable;
  return;
}



void Unwind_00eeb8b8(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 4;
  puStack_c = &DAT_00ee51bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0063eba0(uVar1,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb8c3(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee51f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0063eba0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb8cb(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee522d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0063eba0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb8d3(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((int *)*piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)*piVar3 + 4);
    _guard_check_icall(&puStack_1c,uStack_14);
    (*pcVar1)();
    piVar3 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar3 + 0x18) == '\0') {
      func_0x008abb44();
      piVar3 = (int *)unaff_FS_OFFSET[0xb];
    }
    if (*(int *)(*piVar3 + 0xc4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(*piVar3 + 0xc4) + 4);
    }
    if ((uStack_18 < 0x3fd) && (iVar4 != 0)) {
      iVar2 = 6;
      do {
        if (*(int *)(iVar4 + iVar2 * 4) == 0) {
          *puStack_1c = puStack_1c[uStack_18];
          *(undefined1 **)(iVar4 + iVar2 * 4) = puStack_1c;
          goto LAB_0063ec49;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
    _aligned_free(puStack_1c);
  }
LAB_0063ec49:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00eeb900(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb908(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb940(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb970(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeab6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar1,unaff_EBP + -0x98,unaff_EBP + -0xc0,unaff_EBP + -0xd8,unaff_EBP + -0xd8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb97b(void)

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
  puStack_c = &DAT_00eebfe6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x00651b30(uVar2);
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
          *_Memory = _Memory[0xa0];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00681e8d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00681e8d:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb983(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00eeab6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x44,iVar1 + 0x1c,iVar1 + 4,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb98e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee6ad3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar1,unaff_EBP + -0x98,unaff_EBP + -0xc0,unaff_EBP + -0xd8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb999(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ee4548;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb9a4(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee12cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb9af(void)

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
  puStack_c = &DAT_00ee13ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0052b260(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeb9b7(void)

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



void Unwind_00eeb9bf(void)

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



void Unwind_00eeba00(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee4548;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeba0b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee6ad3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x40,iVar1 + 0x18,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeba40(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 4;
  puStack_c = &DAT_00eeaead;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,iVar2,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeba4b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee4df5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeba53(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeba5b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeba90(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 4;
  puStack_c = &DAT_00eeae6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,iVar2,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeba9b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebaa3(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebaab(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebae0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 4;
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebaeb(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebaf3(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebb20(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00ee30dd;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00eebb39(void)

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



void Unwind_00eebb41(void)

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
    puStack_c = &DAT_00ee30dd;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eebb80(void)

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
    puStack_c = &DAT_00ee310d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eebbc0(void)

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
    puStack_c = &DAT_00ee313d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eebc00(void)

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
    puStack_c = &DAT_00ee316d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658d30(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eebc40(void)

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
    puStack_c = &DAT_00ee319d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658db0(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eebc80(void)

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
    puStack_c = &DAT_00ee31cd;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658e30(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eebcc0(void)

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
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eec15c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x30);
  if (iVar1 != 0) {
    uStack_8 = 1;
    func_0x0065e600(uVar3);
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x0065e050();
    uStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x28);
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
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x34);
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
          *_Memory = _Memory[0x144];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00682239;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00682239:
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebcc8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x44);
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



void Unwind_00eebcd0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x4c) + 0x28);
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



void Unwind_00eebcdb(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x5c,iVar1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebce6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x138) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x134);
    _guard_check_icall(iVar2 + 0x128,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x11c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x118);
    _guard_check_icall(iVar2 + 0x10c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebd20(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebd2b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebd36(void)

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

char * Unwind_00eebd41(void)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar6;
  bool bVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar4 = (uint)*(byte *)(unaff_EBP + -0x1c);
  bVar6 = uVar4 < 9;
  bVar7 = uVar4 == 9;
  if (uVar4 < 10) {
    bVar1 = *(byte *)(uVar4 + 0x658d98);
    *(undefined1 *)(unaff_EBP + -0x1c) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar2 = (code *)swi(0x29);
  pcVar5 = (char *)(*pcVar2)(unaff_EBP + -0x24);
  if (!bVar6 && !bVar7) {
    return pcVar5;
  }
  cVar3 = (char)pcVar5;
  pcVar5[in_GS_OFFSET] = pcVar5[in_GS_OFFSET] + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  pcVar2 = (code *)swi(3);
  pcVar5 = (char *)(*pcVar2)();
  return pcVar5;
}



void Unwind_00eebd49(void)

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
  func_0x00658d30(uVar1,unaff_EBP + -0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00eebd51(void)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar6;
  bool bVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar4 = (uint)*(byte *)(unaff_EBP + -0x1c);
  bVar6 = uVar4 < 9;
  bVar7 = uVar4 == 9;
  if (uVar4 < 10) {
    bVar1 = *(byte *)(uVar4 + 0x658d98);
    *(undefined1 *)(unaff_EBP + -0x1c) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar2 = (code *)swi(0x29);
  pcVar5 = (char *)(*pcVar2)(unaff_EBP + -0x24);
  if (!bVar6 && !bVar7) {
    return pcVar5;
  }
  cVar3 = (char)pcVar5;
  pcVar5[in_GS_OFFSET] = pcVar5[in_GS_OFFSET] + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  pcVar2 = (code *)swi(3);
  pcVar5 = (char *)(*pcVar2)();
  return pcVar5;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00eebd59(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 0x14);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 0x14) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2 + 0xc);
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



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00eebd64(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 0x24);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 0x24) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2 + 0x1c);
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



void Unwind_00eebda0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar2,iVar1 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebdab(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebdb6(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  int unaff_EBX;
  int unaff_EBP;
  int in_GS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00659743;
  case 1:
    func_0x00658b10();
code_r0x00659743:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    piVar5 = (int *)(*pcVar3)(iVar2 + 4);
    pcVar1 = (char *)(in_GS_OFFSET + iVar2 + 4);
    *pcVar1 = *pcVar1 + (char)((uint)(unaff_EBX + 1) >> 8);
    cVar4 = (char)piVar5;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar4;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00eebdc1(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(unaff_EBP + -0x1c)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658dff:
    *(undefined1 *)(unaff_EBP + -0x1c) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    piVar4 = (int *)(*pcVar1)();
    cVar2 = (char)piVar4;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar2;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



void Unwind_00eebdc9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar1,unaff_EBP + -0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebdd1(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(unaff_EBP + -0x1c)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658dff:
    *(undefined1 *)(unaff_EBP + -0x1c) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    piVar4 = (int *)(*pcVar1)();
    cVar2 = (char)piVar4;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar2;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



void Unwind_00eebdd9(void)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x1c)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658dff:
    *(undefined1 *)(iVar1 + 0x1c) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    piVar5 = (int *)(*pcVar2)();
    cVar3 = (char)piVar5;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar3;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00eebde4(void)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x34)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658dff:
    *(undefined1 *)(iVar1 + 0x34) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    piVar5 = (int *)(*pcVar2)();
    cVar3 = (char)piVar5;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar3;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00eebe20(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeb150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -200,unaff_EBP + -0xf0,unaff_EBP + -0xf0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebe2b(void)

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
  puStack_c = &DAT_00eec44b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
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
          *_Memory = _Memory[0xb8];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00684730;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00684730:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebe33(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebe3b(void)

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
  puStack_c = &DAT_00eeb150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x2c,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebe46(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -200,unaff_EBP + -0xf0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebe51(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebe5c(void)

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
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebe64(void)

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



void Unwind_00eebe6c(void)

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



void Unwind_00eebeb0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeb150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xf8,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebebb(void)

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
  puStack_c = &DAT_00eec44b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
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
          *_Memory = _Memory[0xbc];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00684640;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00684640:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebec3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebecb(void)

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
  puStack_c = &DAT_00eeb150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x2c,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebed6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebee1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebeec(void)

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
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebef4(void)

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



void Unwind_00eebefc(void)

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



void Unwind_00eebf40(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebf4b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebf56(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebf80(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebfb0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeab6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x44,iVar1 + 0x1c,iVar1 + 4,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebfbb(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee6ad3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x40,iVar1 + 0x18,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebfc3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee4548;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebfce(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee12cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eebfd9(void)

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
  puStack_c = &DAT_00ee13ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0052b260(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec010(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x58,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec01b(void)

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
  if (*(int *)(iVar2 + 0x134) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x130);
    _guard_check_icall(iVar2 + 0x124,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x118) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x114);
    _guard_check_icall(iVar2 + 0x108,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec029(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec034(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec060(void)

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
  puStack_c = &DAT_00eec041;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x13c) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x0065e050();
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
      iVar3 = 0;
      do {
        if (*(int *)(iVar1 + iVar3 * 4) == 0) {
          *_Memory = _Memory[0x140];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00681f89;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_00681f89:
    *(undefined4 *)(unaff_EBP + -0x140) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec06b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x148);
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



void Unwind_00eec076(void)

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
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
    _guard_check_icall(unaff_EBP + -0x48,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec07e(void)

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
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
    _guard_check_icall(unaff_EBP + -0x48,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec086(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x138);
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



void Unwind_00eec091(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x134);
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



void Unwind_00eec09c(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x20);
    _guard_check_icall(unaff_EBP + -0x2c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec0a4(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x20);
    _guard_check_icall(unaff_EBP + -0x2c,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
    _guard_check_icall(unaff_EBP + -0x48,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec0ac(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x108,unaff_EBP + -0x130);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec0b7(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x108,unaff_EBP + -0x130,unaff_EBP + -0x130);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec0c2(void)

{
  return;
}



void Unwind_00eec0cd(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x108,unaff_EBP + -0x130);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec0d8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x138);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec0e6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x134);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec120(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x28);
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



void Unwind_00eec12b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x5c,iVar1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec136(void)

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
  if (*(int *)(iVar2 + 0x138) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x134);
    _guard_check_icall(iVar2 + 0x128,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x11c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x118);
    _guard_check_icall(iVar2 + 0x10c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec144(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec14f(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec180(void)

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
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eec15c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x14c);
  if (iVar1 != 0) {
    uStack_8 = 1;
    func_0x0065e600(uVar3);
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x0065e050();
    uStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x28);
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
    *(undefined4 *)(unaff_EBP + -0x14c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x150);
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
          *_Memory = _Memory[0x144];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00682239;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00682239:
    *(undefined4 *)(unaff_EBP + -0x150) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec18b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x158);
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



void Unwind_00eec196(void)

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



void Unwind_00eec19e(void)

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



void Unwind_00eec1a6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x148);
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



void Unwind_00eec1b1(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x144);
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



void Unwind_00eec1bc(void)

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



void Unwind_00eec1c4(void)

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



void Unwind_00eec1cc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec1d7(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x140,unaff_EBP + -0x140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec1e2(void)

{
  return;
}



void Unwind_00eec1ed(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec1f8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x148);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec206(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x144);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec240(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec270(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec278(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec283(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec2b0(void)

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
  puStack_c = &DAT_00eebb00;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xd8) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xdc);
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
          *_Memory = _Memory[200];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0067f349;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0067f349:
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec2bb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec2c6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4,unaff_EBP + -0xd4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec2d1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec2dc(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xe4);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec320(void)

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
  puStack_c = &DAT_00eebab8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xdc) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xe0);
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
          *_Memory = _Memory[200];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0067f25d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0067f25d:
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec32b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0xd8);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec336(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4,unaff_EBP + -0xd4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec341(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0xd4;
  puStack_c = &DAT_00eeae6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec34c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee50c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4,unaff_EBP + -0xd4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec357(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0xd8);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec362(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xe8);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec3a0(void)

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
  puStack_c = &DAT_00eeba68;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xa8) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xac);
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
          *_Memory = _Memory[0x90];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0067f16d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0067f16d:
    *(undefined4 *)(unaff_EBP + -0xac) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec3ab(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0xa4);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec3b6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee4df5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xa0,unaff_EBP + -0xa0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec3c1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = unaff_EBP + -0xa0;
  puStack_c = &DAT_00eeaead;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1,iVar1,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec3cc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee4df5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xa0,unaff_EBP + -0xa0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec3d7(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0xa4);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec3e2(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xb4);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec420(void)

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
  iVar3 = iVar1 + 4;
  puStack_c = &DAT_00eeb150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x2c,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec42b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec433(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec43e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec470(void)

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
  puStack_c = &DAT_00eebfe6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xb0) != 0) {
    uStack_8 = 0xffffffff;
    func_0x00651b30(uVar2);
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xb4);
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
          *_Memory = _Memory[0xa0];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00681e8d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00681e8d:
    *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec47b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeab6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar1,unaff_EBP + -0x6c,unaff_EBP + -0x94,unaff_EBP + -0xac,unaff_EBP + -0xac);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec486(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee6ad3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar1,unaff_EBP + -0x6c,unaff_EBP + -0x94,unaff_EBP + -0xac);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec491(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xbc);
  puStack_c = &DAT_00ee4548;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec49f(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xc0);
  puStack_c = &DAT_00ee12cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec4ad(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xc4);
  puStack_c = &DAT_00ee13ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0052b260(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec4f0(void)

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
  _Memory = *(undefined1 **)(unaff_EBP + -0x20);
  if (_Memory != (undefined1 *)0x0) {
    uVar1 = *(uint *)(unaff_EBP + -0x1c);
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



void Unwind_00eec4f8(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::asio::detail::cancellation_handler_base::vftable;
  return;
}



void Unwind_00eec500(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((int *)*piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)*piVar3 + 4);
    _guard_check_icall(&puStack_1c,uStack_14);
    (*pcVar1)();
    piVar3 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar3 + 0x18) == '\0') {
      func_0x008abb44();
      piVar3 = (int *)unaff_FS_OFFSET[0xb];
    }
    if (*(int *)(*piVar3 + 0xc4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(*piVar3 + 0xc4) + 4);
    }
    if ((uStack_18 < 0x3fd) && (iVar4 != 0)) {
      iVar2 = 6;
      do {
        if (*(int *)(iVar4 + iVar2 * 4) == 0) {
          *puStack_1c = puStack_1c[uStack_18];
          *(undefined1 **)(iVar4 + iVar2 * 4) = puStack_1c;
          goto LAB_0063ec49;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
    _aligned_free(puStack_1c);
  }
LAB_0063ec49:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00eec508(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee522d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0063eba0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec510(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee51f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0063eba0(uVar2,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec540(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x18);
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



void Unwind_00eec548(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x24);
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



void Unwind_00eec553(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec55e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x70,iVar1 + 0x48,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec569(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
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



void Unwind_00eec571(void)

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



void Unwind_00eec58a(void)

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



void Unwind_00eec5a3(void)

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



void Unwind_00eec5bc(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
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



void Unwind_00eec5c7(void)

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



void Unwind_00eec5cf(void)

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



void Unwind_00eec5d7(void)

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
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x118) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x114);
    _guard_check_icall(iVar2 + 0x108,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xfc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf8);
    _guard_check_icall(iVar2 + 0xec,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec610(void)

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



void Unwind_00eec61b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x70,iVar1 + 0x48,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec626(void)

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
  if (*(int *)(iVar2 + 0x118) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x114);
    _guard_check_icall(iVar2 + 0x108,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xfc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf8);
    _guard_check_icall(iVar2 + 0xec,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec634(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec63f(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec64a(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec680(void)

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
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eec657;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x130);
  if (iVar1 != 0) {
    uStack_8 = 1;
    func_0x0065e600(uVar3);
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x0065c300();
    uStack_8 = 0xffffffff;
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
    *(undefined4 *)(unaff_EBP + -0x130) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x134);
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
          *_Memory = _Memory[0x124];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00684c60;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00684c60:
    *(undefined4 *)(unaff_EBP + -0x134) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec68b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x128);
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



void Unwind_00eec696(void)

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



void Unwind_00eec69e(void)

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



void Unwind_00eec6a6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x124);
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



void Unwind_00eec6b1(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -300);
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



void Unwind_00eec6bc(void)

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



void Unwind_00eec6c4(void)

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



void Unwind_00eec6cc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x124);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec6da(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xe0,unaff_EBP + -0x108,unaff_EBP + -0x120);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec6e5(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec78b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xe0,unaff_EBP + -0x108,unaff_EBP + -0x120,unaff_EBP + -0x120);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec6f0(void)

{
  return;
}



void Unwind_00eec6fb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xe0,unaff_EBP + -0x108,unaff_EBP + -0x120);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec706(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x124);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec714(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -300);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec722(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x128);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec760(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec768(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec773(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec77e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec7b0(void)

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
  puStack_c = &DAT_00eec44b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -200) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
    *(undefined4 *)(unaff_EBP + -200) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xcc);
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
          *_Memory = _Memory[0xb8];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00684730;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00684730:
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec7bb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0x9c,unaff_EBP + -0xc4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec7c6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeb150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0x9c,unaff_EBP + -0xc4,unaff_EBP + -0xc4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec7d1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0x9c,unaff_EBP + -0xc4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec7dc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xd4);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec7ea(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xd8);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec830(void)

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
  puStack_c = &DAT_00eec44b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xcc) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xd0);
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
          *_Memory = _Memory[0xbc];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00684640;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00684640:
    *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec83b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xa0,unaff_EBP + -200);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec846(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeb150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xa0,unaff_EBP + -200,unaff_EBP + -200);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec851(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xa0,unaff_EBP + -200);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec85c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xd8);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec86a(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xdc);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8b0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x100,unaff_EBP + -0x128,unaff_EBP + -0x128);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8bb(void)

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
  puStack_c = &DAT_00eeca7b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
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
          *_Memory = _Memory[0xec];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_006873f0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_006873f0:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8c3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8cb(void)

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
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x2c,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8d6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x100,unaff_EBP + -0x128);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8e1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8ec(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec8f4(void)

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



void Unwind_00eec8fc(void)

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



void Unwind_00eec940(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x100,unaff_EBP + -0x128,unaff_EBP + -0x128);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec94b(void)

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
  puStack_c = &DAT_00eeca7b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
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
          *_Memory = _Memory[0xf0];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00687300;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00687300:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec953(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec95b(void)

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
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x2c,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec966(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x100,unaff_EBP + -0x128);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec971(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec97c(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec984(void)

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



void Unwind_00eec98c(void)

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



void Unwind_00eec9d0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::detail::cancellation_handler_base::vftable;
  return;
}



void Unwind_00eec9d8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee51f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0063eba0(uVar2,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec9e3(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee522d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0063eba0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eec9eb(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((int *)*piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)*piVar3 + 4);
    _guard_check_icall(&puStack_1c,uStack_14);
    (*pcVar1)();
    piVar3 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar3 + 0x18) == '\0') {
      func_0x008abb44();
      piVar3 = (int *)unaff_FS_OFFSET[0xb];
    }
    if (*(int *)(*piVar3 + 0xc4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(*piVar3 + 0xc4) + 4);
    }
    if ((uStack_18 < 0x3fd) && (iVar4 != 0)) {
      iVar2 = 6;
      do {
        if (*(int *)(iVar4 + iVar2 * 4) == 0) {
          *puStack_1c = puStack_1c[uStack_18];
          *(undefined1 **)(iVar4 + iVar2 * 4) = puStack_1c;
          goto LAB_0063ec49;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
    _aligned_free(puStack_1c);
  }
LAB_0063ec49:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00eeca20(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeca50(void)

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
  iVar3 = iVar1 + 4;
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x2c,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeca5b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeca63(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeca6e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecaa0(void)

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
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eeccc7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  if (iVar1 != 0) {
    uStack_8 = 1;
    func_0x0065e600(uVar3);
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x0065e050();
    uStack_8 = 0xffffffff;
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
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x30);
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
          *_Memory = _Memory[0x158];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_006894a0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_006894a0:
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecaa8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x3c) + 4);
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



void Unwind_00eecae0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec78b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xf8,unaff_EBP + -0x110,unaff_EBP + -0x110);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecaeb(void)

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
  puStack_c = &DAT_00eecf56;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
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
          *_Memory = _Memory[0xd4];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0068ba1d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0068ba1d:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecaf3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00eec78b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x44,iVar1 + 0x1c,iVar1 + 4,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecafe(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xf8,unaff_EBP + -0x110);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecb09(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecb14(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecb1f(void)

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
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecb27(void)

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



void Unwind_00eecb2f(void)

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



void Unwind_00eecb70(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x18);
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



void Unwind_00eecb78(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x24);
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



void Unwind_00eecb83(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecb8e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eebf63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x70,iVar1 + 0x48,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecb99(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
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



void Unwind_00eecba1(void)

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



void Unwind_00eecbba(void)

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



void Unwind_00eecbd3(void)

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



void Unwind_00eecbec(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
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



void Unwind_00eecbf7(void)

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



void Unwind_00eecbff(void)

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



void Unwind_00eecc07(void)

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
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x14c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x148);
    _guard_check_icall(iVar2 + 0x13c,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x130) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 300);
    _guard_check_icall(iVar2 + 0x120,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecc40(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecc4b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecc80(void)

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



void Unwind_00eecc8b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eebf63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x70,iVar1 + 0x48,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecc96(void)

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
  if (*(int *)(iVar2 + 0x14c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x148);
    _guard_check_icall(iVar2 + 0x13c,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x130) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 300);
    _guard_check_icall(iVar2 + 0x120,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecca4(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeccaf(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeccba(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeccf0(void)

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
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eeccc7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x168);
  if (iVar1 != 0) {
    uStack_8 = 1;
    func_0x0065e600(uVar3);
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x0065e050();
    uStack_8 = 0xffffffff;
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
    *(undefined4 *)(unaff_EBP + -0x168) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x16c);
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
          *_Memory = _Memory[0x158];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_006894a0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_006894a0:
    *(undefined4 *)(unaff_EBP + -0x16c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeccfb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x160);
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



void Unwind_00eecd06(void)

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



void Unwind_00eecd0e(void)

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



void Unwind_00eecd16(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x15c);
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



void Unwind_00eecd21(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x164);
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



void Unwind_00eecd2c(void)

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



void Unwind_00eecd34(void)

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



void Unwind_00eecd3c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x15c);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecd4a(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eebf63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x140,unaff_EBP + -0x158);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecd55(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eecdfb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x140,unaff_EBP + -0x158,unaff_EBP + -0x158)
  ;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecd60(void)

{
  return;
}



void Unwind_00eecd6b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eebf63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x140,unaff_EBP + -0x158);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecd76(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x15c);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecd84(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x164);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecd92(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x160);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecdd0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eebf63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecdd8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecde3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecdee(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eece20(void)

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
  puStack_c = &DAT_00eeca7b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xfc) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
    *(undefined4 *)(unaff_EBP + -0xfc) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x100);
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
          *_Memory = _Memory[0xec];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_006873f0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_006873f0:
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eece2b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eece36(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xf8,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eece41(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd0,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eece4c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x108);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eece5a(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10c);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecea0(void)

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
  puStack_c = &DAT_00eeca7b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x100) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x104);
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
          *_Memory = _Memory[0xf0];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_00687300;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_00687300:
    *(undefined4 *)(unaff_EBP + -0x104) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeceab(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4,unaff_EBP + -0xfc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeceb6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4,unaff_EBP + -0xfc,unaff_EBP + -0xfc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecec1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0xd4,unaff_EBP + -0xfc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eececc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10c);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eeceda(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x110);
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf20(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eec78b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x44,iVar1 + 0x1c,iVar1 + 4,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf2b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf33(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf3e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf49(void)

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
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf80(void)

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
  puStack_c = &DAT_00eecf56;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xe4) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065c300(uVar2);
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xe8);
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
          *_Memory = _Memory[0xd4];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0068ba1d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0068ba1d:
    *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf8b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec78b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xa0,unaff_EBP + -200,unaff_EBP + -0xe0,unaff_EBP + -0xe0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecf96(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eead13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xa0,unaff_EBP + -200,unaff_EBP + -0xe0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecfa1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xf0);
  puStack_c = &DAT_00ee7538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecfaf(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xf4);
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eecfbd(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xf8);
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed000(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eecdfb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x100,unaff_EBP + -0x128,unaff_EBP + -0x140,unaff_EBP + -0x140)
  ;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed00b(void)

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
  puStack_c = &DAT_00eed106;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x0065e050(uVar2);
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
          *_Memory = _Memory[0x108];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0068cb9d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0068cb9d:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed013(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00eecdfb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x44,iVar1 + 0x1c,iVar1 + 4,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed01e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eebf63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1,unaff_EBP + -0x100,unaff_EBP + -0x128,unaff_EBP + -0x140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed029(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed034(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee448d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed03f(void)

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
  puStack_c = &DAT_00ee45b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x84) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x98) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
      _guard_check_icall(iVar2 + 0x88,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x84) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed047(void)

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



void Unwind_00eed04f(void)

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



void Unwind_00eed090(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee8dc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed09b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eebf63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x40,iVar1 + 0x18,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eed0d0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eecdfb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar2,iVar1 + 0x44,iVar1 + 0x1c,iVar1 + 4,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}

