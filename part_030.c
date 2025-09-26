    cVar2 = func_0x0090e0c0(iVar1,0x233,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c9eb0(param_1);
  return;
}



void FUN_00899d30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008b9ec0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x236), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x0090e130(iVar1,0x236,uVar2,param_2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  FUN_00466fb0(uVar2,param_2,param_3);
  return;
}



void FUN_00899dd0(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  
  iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar6 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar6 = *(int *)(iVar6 + 0xa8);
  if (iVar6 == 0) {
    puStack_c = &DAT_00f3c904;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar6 + 0x10) == 0) {
      iVar4 = func_0x008ab47d(0x14,uVar3);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008b9a30();
      }
      if (*(char *)(iVar6 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
      if (*(char *)(iVar6 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar6 + 0xa8) = 0;
    }
    if (*(char *)(iVar6 + 0x18) == '\0') {
      func_0x008abb44();
    }
    iVar6 = FUN_00472c50();
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x1fb9) != '\0')) {
      func_0x008dc860(0,0x507,"Context has been lost.");
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (*(char *)(iVar6 + 0x1d01) == '\0') {
    if (*(int *)(iVar6 + 0x18c0) != 0) {
      iStack_10 = 0x899e15;
      puStack_c = (undefined *)iVar6;
      cVar2 = func_0x008bd7d0();
      if (cVar2 == '\0') {
        return;
      }
    }
    iStack_10 = 0x899e27;
    puStack_c = (undefined *)iVar6;
    cVar2 = func_0x0091dc50();
    if (cVar2 == '\0') {
      return;
    }
  }
  pcVar1 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0xcc);
  puStack_c = (undefined *)0x8c9f68;
  _guard_check_icall();
  puStack_c = (undefined *)0x8c9f6c;
  (*pcVar1)();
  return;
}



void FUN_00899e40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x244), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091dc80(iVar1,0x244,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c9f70(param_1,param_2);
  return;
}



void FUN_00899ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x246), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091dd30(iVar1,0x246,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c9fb0(param_1,param_2,param_3);
  return;
}



void FUN_00899f60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x247), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091dd70(iVar1,0x247,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c9fe0(param_1,param_2);
  return;
}



void FUN_00899ff0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x248), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091dd70(iVar1,0x248,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca010(param_1,param_2);
  return;
}



void FUN_0089a080(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x249), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091dd70(iVar1,0x249,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca040(param_1,param_2);
  return;
}



void FUN_0089a110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x24b), cVar2 != '\0'))
           && (cVar2 = func_0x008be570(iVar1,0x24b,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008ca070(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089a1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_3);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x24f), cVar3 != '\0')) &&
        (cVar3 = func_0x0090e3e0(iVar1,0x24f,param_1,param_2,uVar2,param_4,param_5,param_6),
        cVar3 != '\0')))) {
      func_0x008ca1f0(param_1,param_2,uVar2,param_4,param_5,param_6);
      return;
    }
  }
  return;
}



void FUN_0089a280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_3);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x250), cVar3 != '\0')) &&
        (cVar3 = func_0x008be5a0(iVar1,0x250,param_1,param_2,uVar2,param_4,param_5), cVar3 != '\0'))
       )) {
      func_0x008ca110(param_1,param_2,uVar2,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089a340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_3);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x252), cVar3 != '\0')) &&
        (cVar3 = func_0x0090e560(iVar1,0x252,param_1,param_2,uVar2,param_4,param_5,param_6),
        cVar3 != '\0')))) {
      func_0x008ca2d0(param_1,param_2,uVar2,param_4,param_5,param_6);
      return;
    }
  }
  return;
}



void FUN_0089a410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x253), cVar2 != '\0'))
           && (cVar2 = func_0x00918ae0(iVar1,0x253,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008ca3b0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089a4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x255), cVar2 != '\0'))
           && (cVar2 = func_0x00915700(iVar1,0x255,param_1,param_2,param_3,param_4,param_5,param_6),
              cVar2 != '\0')))) {
    func_0x008ca570(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_0089a570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x256), cVar2 != '\0'))
           && (cVar2 = func_0x00918b10(iVar1,0x256,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008ca3b0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089a610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,599), cVar2 != '\0'))
           && (cVar2 = func_0x0091de00(iVar1,599,param_1,param_2,param_3,param_4), cVar2 != '\0'))))
  {
    func_0x008ca680(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089a6b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x25d), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c2a0(iVar1,0x25d,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca770(param_1,param_2);
  return;
}



void FUN_0089a740(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x25f), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bdc80(iVar1,0x25f,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca8e0(param_1,param_2);
  return;
}



void FUN_0089a7d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x261), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091c710(iVar1,0x261,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca920(param_1,param_2);
  return;
}



void FUN_0089a860(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x263), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091d0a0(iVar1,0x263,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca940(param_1,param_2);
  return;
}



void FUN_0089a8f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x265), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x00901570(iVar1,0x265,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca980(param_1,param_2);
  return;
}



void FUN_0089a980(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x267), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bdc80(iVar1,0x267,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008caa90(param_1,param_2);
  return;
}



void FUN_0089aa10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x269), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091d0d0(iVar1,0x269,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008cab10(param_1,param_2);
  return;
}



void FUN_0089aaa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x26d), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c470(iVar1,0x26d,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008cacb0(param_1,param_2);
  return;
}



void FUN_0089ab30(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x26f), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008be870(iVar1,0x26f,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008cadc0(uVar2);
  return;
}



void FUN_0089abc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00903e30(iVar1,0x279,param_1,param_2,param_3,param_4,param_5,param_6),
          cVar2 != '\0')) {
    func_0x008cb3e0(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_0089ac50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00918ba0(iVar1,0x27f,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cb730(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089ace0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00903f90(iVar1,0x281,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cb870(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089ad60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008b9ec0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x00904180(iVar1,0x283,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
    {
      func_0x008cb970(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089ae00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008b9ec0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x00904230(iVar1,0x285,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
    {
      func_0x008cba10(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089aea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008b9ec0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x0090e9a0(iVar1,0x287,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008cba60(uVar2,param_2,param_3);
  return;
}



void FUN_0089af30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008b9ec0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x00915ac0(iVar1,0x288,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
    {
      func_0x008cbab0(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089afd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba710(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x0091e020(iVar1,0x28e,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008cbbd0(uVar2,param_2,param_3);
  return;
}



undefined4
FUN_0089b060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0090e9f0(iVar1,0x292,param_1,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8), cVar2 != '\0')) {
    uVar3 = func_0x008cbca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  return 0;
}



void FUN_0089b100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0090ea40(iVar1,0x296,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cbd70(param_1,param_2,param_3);
  return;
}



void FUN_0089b170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00903f90(iVar1,0x29a,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cc130(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



undefined4 FUN_0089b1f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return 0xffffffff;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00915b60(iVar1,0x29c,param_1,param_2), cVar2 == '\0')) {
    return 0xffffffff;
  }
  uVar3 = func_0x008cc310(param_1,param_2);
  return uVar3;
}



void FUN_0089b260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x008be900(iVar1,0x29f,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cc560(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089b2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00904790(iVar1,0x2a0,param_1,param_2,param_3,param_4,param_5,param_6),
          cVar2 != '\0')) {
    func_0x008cc590(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_0089b370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e0b0(iVar1,0x2a2,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cc5c0(param_1,param_2,param_3);
  return;
}



void FUN_0089b3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x2a3,param_1,param_2,param_3,param_4,param_5), cVar2 != '\0')
          ) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089b470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e0f0(iVar1,0x2a4,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cc5e0(param_1,param_2,param_3);
  return;
}



void FUN_0089b4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e1a0(iVar1,0x2a5,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cc610(param_1,param_2,param_3);
  return;
}



undefined4 FUN_0089b550(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar6 = FUN_00472c50();
  if (iVar6 == 0) {
    return 0;
  }
  if ((*(char *)(iVar6 + 0x1d01) == '\0') && (cVar4 = func_0x0090eaf0(iVar6,0x2a7), cVar4 == '\0'))
  {
    return 0;
  }
  if (*(int *)(iVar6 + 0x1fbc) == 0x8261) {
    if (*(char *)(iVar6 + 0x1fb9) == '\0') {
      pcVar2 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0xa8);
      _guard_check_icall();
      cVar4 = (*pcVar2)();
      iVar3 = _tls_index;
      if (cVar4 != '\0') {
        iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
        *(undefined1 *)(iVar6 + 0x1fb9) = 1;
        *(undefined1 *)(iVar6 + 0x1d01) = 0;
        *(undefined4 *)(*(int *)(iVar1 + iVar3 * 4) + 0xa8) = 0;
      }
    }
    return 0;
  }
  if (*(char *)(iVar6 + 0x1fb9) == '\0') {
    pcVar2 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0xa8);
    _guard_check_icall();
    cVar4 = (*pcVar2)();
    *(char *)(iVar6 + 0x1fba) = cVar4;
    iVar3 = _tls_index;
    if (cVar4 != '\0') {
      iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
      *(undefined1 *)(iVar6 + 0x1fb9) = 1;
      *(undefined1 *)(iVar6 + 0x1d01) = 0;
      *(undefined4 *)(*(int *)(iVar1 + iVar3 * 4) + 0xa8) = 0;
      uVar7 = func_0x008baba0(*(undefined1 *)(iVar6 + 0x1fba));
      return uVar7;
    }
  }
  else if ((*(char *)(iVar6 + 0x1fbb) == '\0') && (*(char *)(iVar6 + 0x1fba) != '\0')) {
    pcVar2 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0xa8);
    _guard_check_icall();
    uVar5 = (*pcVar2)();
    *(undefined1 *)(iVar6 + 0x1fba) = uVar5;
  }
  uVar7 = func_0x008baba0(*(undefined1 *)(iVar6 + 0x1fba));
  return uVar7;
}



void FUN_0089b5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00915c90(iVar1,0x2a9,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cca60(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089b640(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e270(iVar1,0x2ab,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008ccac0(param_1,param_2);
  return;
}



void FUN_0089b6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00904970(iVar1,0x2ac,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008ccd30(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089b730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00915c90(iVar1,0x2ae,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008ccfb0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089b7c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00903f90(iVar1,0x2b0,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008ce740(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089b840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00904b40(iVar1,0x2b3,param_1,param_2,param_3,param_4,param_5,param_6),
          cVar2 != '\0')) {
    func_0x008ce7e0(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_0089b8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e2d0(iVar1,0x2bd,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cea60(param_1,param_2,param_3);
  return;
}



void FUN_0089b940(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00915db0(iVar1,0x2bf,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cea90(param_1,param_2,param_3);
  return;
}



void FUN_0089b9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x2c0,param_1,param_2,param_3,param_4,param_5), cVar2 != '\0')
          ) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089ba40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e370(iVar1,0x2c9,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cead0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089bad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0090eb20(iVar1,0x2ca,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cead0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089bb60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0090eb80(iVar1,0x2cc,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008ceb40(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089bbe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e3d0(iVar1,0x2cd,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cecf0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089bc70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e440(iVar1,0x2ce,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008ceee0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089bcf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e500(iVar1,0x2cf,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cef30(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089bd80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e590(iVar1,0x2d0,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cefa0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089be10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e590(iVar1,0x2d1,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cf0b0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089be90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e600(iVar1,0x2d2,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cf120(param_1,param_2,param_3);
  return;
}



void FUN_0089bf00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0090ebf0(iVar1,0x2d7,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008cf210(param_1,param_2);
  return;
}



void FUN_0089bf70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x2d8,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    FUN_00819e10(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089bff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0090ec50(iVar1,0x2db,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cf230(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089c080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x2de,param_1,param_2,param_3,param_4,param_5,param_6),
          cVar2 != '\0')) {
    func_0x008cf3d0(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_0089c110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e630(iVar1,0x2e0,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cf470(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089c190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e660(iVar1,0x2e2,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cf4c0(param_1,param_2,param_3);
  return;
}



undefined4 FUN_0089c200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return 0xffffffff;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x009191c0(iVar1,0x2e6,param_1,param_2,param_3), cVar2 == '\0')) {
    return 0xffffffff;
  }
  uVar3 = func_0x008cf600(param_1,param_2,param_3);
  return uVar3;
}



void FUN_0089c280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar2 = FUN_00472c50();
  if ((iVar2 != 0) &&
     ((*(char *)(iVar2 + 0x1d01) != '\0' ||
      (cVar1 = func_0x00905240(iVar2,0x2eb,param_1,param_2,param_3,param_4,param_5), cVar1 != '\0'))
     )) {
    func_0x008cf920(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



void FUN_0089c310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar2 = FUN_00472c50();
  if (iVar2 != 0) {
    if ((*(char *)(iVar2 + 0x1d01) == '\0') &&
       (cVar1 = func_0x009053b0(iVar2,0x2f2,param_1,param_2,param_3), cVar1 == '\0')) {
      return;
    }
    func_0x008cfa70(param_1,param_2,param_3);
  }
  return;
}



void FUN_0089c380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar2 = FUN_00472c50();
  if ((iVar2 != 0) &&
     ((*(char *)(iVar2 + 0x1d01) != '\0' ||
      (cVar1 = func_0x009053f0(iVar2,0x2f3,param_1,param_2,param_3,param_4,param_5), cVar1 != '\0'))
     )) {
    func_0x008cfb60(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



void FUN_0089c410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar2 = FUN_00472c50();
  if (iVar2 != 0) {
    if ((*(char *)(iVar2 + 0x1d01) == '\0') &&
       (cVar1 = func_0x009053b0(iVar2,0x2f5,param_1,param_2,param_3), cVar1 == '\0')) {
      return;
    }
    func_0x008cfc50(param_1,param_2,param_3);
  }
  return;
}



void FUN_0089c480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar2 = FUN_00472c50();
  if ((iVar2 != 0) &&
     ((*(char *)(iVar2 + 0x1d01) != '\0' ||
      (cVar1 = func_0x009053f0(iVar2,0x2f6,param_1,param_2,param_3,param_4,param_5), cVar1 != '\0'))
     )) {
    func_0x008cfd30(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



void FUN_0089c510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x009053b0(iVar1,0x2f8,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cfe10(param_1,param_2,param_3);
  return;
}



void FUN_0089c580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x009053f0(iVar1,0x2f9,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008cff00(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089c610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x009054c0(iVar1,0x2fb,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008cfff0(param_1,param_2,param_3);
  return;
}



void FUN_0089c680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00905510(iVar1,0x2fc,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d00d0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089c710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba3a0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x00905680(iVar1,0x2fe,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008d01d0(uVar2,param_2,param_3);
  return;
}



void FUN_0089c7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba3a0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x00905750(iVar1,0x2ff,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
    {
      func_0x008d0240(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089c840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0091e690(iVar1,0x300,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d0300(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089c8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x008be990(iVar1,0x302,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d0330(param_1,param_2,param_3);
  return;
}



void FUN_0089c930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x009059d0(iVar1,0x303,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d0350(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089c9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00915e90(iVar1,0x305,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d0390(param_1,param_2,param_3);
  return;
}



void FUN_0089ca30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00915e90(iVar1,0x306,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d0390(param_1,param_2,param_3);
  return;
}



void FUN_0089caa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x307,param_1,param_2,param_3,param_4,param_5), cVar2 != '\0')
          ) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089cb30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00915e90(iVar1,0x309,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d03c0(param_1,param_2,param_3);
  return;
}



void FUN_0089cba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00915e90(iVar1,0x30a,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d03c0(param_1,param_2,param_3);
  return;
}



void FUN_0089cc10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x30b,param_1,param_2,param_3,param_4,param_5), cVar2 != '\0')
          ) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089cca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00905cf0(iVar1,0x30d,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d0420(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089cd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00905cf0(iVar1,0x30f,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d0480(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089cdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e7a0(iVar1,0x310,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_0089ce30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar2 = FUN_00472c50();
  if ((iVar2 != 0) &&
     ((*(char *)(iVar2 + 0x1d01) != '\0' ||
      (cVar1 = func_0x00905ee0(iVar2,0x315,param_1,param_2,param_3,param_4,param_5), cVar1 != '\0'))
     )) {
    func_0x008d0890(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



void FUN_0089cec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = FUN_004673b0(iVar1,800,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_0089cf30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = FUN_004673b0(iVar1,0x322,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_0089cfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = FUN_004673b0(iVar1,0x323,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_0089d010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x0091e890(iVar1,0x325,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
    {
      func_0x008d0ac0(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089d0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x00916070(iVar1,0x327,uVar2,param_2,param_3,param_4), cVar3 != '\0')) {
      func_0x008d0b10(uVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_0089d140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = FUN_00466fd0(iVar1,0x328,uVar2,param_2,param_3,param_4,param_5,param_6),
       cVar3 != '\0')) {
      func_0x008cf3d0(uVar2,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}



void FUN_0089d1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x00916070(iVar1,0x32a,uVar2,param_2,param_3,param_4), cVar3 != '\0')) {
      func_0x008d0b50(uVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_0089d270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = FUN_00466fd0(iVar1,0x32b,uVar2,param_2,param_3,param_4,param_5,param_6),
       cVar3 != '\0')) {
      func_0x008cf3d0(uVar2,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}



void FUN_0089d310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x0090ee30(iVar1,0x32d,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008d0b90(uVar2,param_2,param_3);
  return;
}



void FUN_0089d3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x0090ee30(iVar1,0x32e,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008d0b90(uVar2,param_2,param_3);
  return;
}



void FUN_0089d430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = FUN_00466fd0(iVar1,0x32f,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0')) {
      FUN_008c4b70(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089d4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x0090ee30(iVar1,0x331,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008d0bc0(uVar2,param_2,param_3);
  return;
}



void FUN_0089d560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x0090ee30(iVar1,0x332,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008d0bc0(uVar2,param_2,param_3);
  return;
}



void FUN_0089d5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = FUN_00466fd0(iVar1,0x333,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0')) {
      FUN_008c4b70(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089d690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x009066c0(iVar1,0x335,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
    {
      func_0x008d0c20(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089d730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x009066c0(iVar1,0x337,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
    {
      func_0x008d0c80(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089d7d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x0090ee80(iVar1,0x345,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d0df0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089d850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906800(iVar1,0x34c,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d1270(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089d8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906800(iVar1,0x34e,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d1370(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089d970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906890(iVar1,0x350,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d1470(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089da00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e9c0(iVar1,0x351,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_0089da70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0091e9c0(iVar1,0x352,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  FUN_00467240(param_1,param_2);
  return;
}



void FUN_0089dae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906ac0(iVar1,0x357,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d15b0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089db70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906ac0(iVar1,0x359,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d1650(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089dc00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906b70(iVar1,0x35c,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d16d0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089dc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906c30(iVar1,0x35f,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d1750(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089dd20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906c30(iVar1,0x361,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008d17f0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089ddb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906ce0(iVar1,0x372,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d1910(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089de30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x373,param_1,param_2,param_3,param_4,param_5), cVar2 != '\0')
          ) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089dec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00906ce0(iVar1,0x375,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d1990(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089df40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x376,param_1,param_2,param_3,param_4,param_5), cVar2 != '\0')
          ) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089dfd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x378,param_1,param_2,param_3,param_4,param_5), cVar2 != '\0')
          ) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089e060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba100(param_4);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x37a), cVar3 != '\0')) &&
        (cVar3 = func_0x0091e9f0(iVar1,0x37a,param_1,param_2,param_3,uVar2,param_5), cVar3 != '\0'))
       )) {
      func_0x008d1e00(param_1,param_2,param_3,uVar2,param_5);
      return;
    }
  }
  return;
}



void FUN_0089e120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba100(param_4);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x37b), cVar3 != '\0')) &&
        (cVar3 = func_0x0091ea40(iVar1,0x37b,param_1,param_2,param_3,uVar2,param_5), cVar3 != '\0'))
       )) {
      func_0x008d1e30(param_1,param_2,param_3,uVar2,param_5);
      return;
    }
  }
  return;
}



void FUN_0089e1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba100(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x37c), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x0091ea90(iVar1,0x37c,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d1e60(param_1,uVar2,param_3);
  return;
}



void FUN_0089e280(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba100(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x37d), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x0091eae0(iVar1,0x37d,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d1e90(param_1,uVar2,param_3);
  return;
}



void FUN_0089e320(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x38b), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x00906cf0(iVar1,0x38b,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d4970(param_1,param_2);
  return;
}



void FUN_0089e3b0(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x395), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x00906d30(iVar1,0x395,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d4a40(uVar2);
  return;
}



uint FUN_0089e440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x0091eb30(iVar1,0x399,param_1,param_2);
      if ((char)uVar2 == '\0') goto LAB_0089e4a3;
    }
    uVar2 = func_0x008d4b70(param_1,param_2);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e4a3:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e4b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x0091eb60(iVar1,0x39a,param_1,param_2);
      if ((char)uVar2 == '\0') goto LAB_0089e513;
    }
    uVar2 = func_0x008d4b70(param_1,param_2);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e513:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e520(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x0090f100(iVar1,0x39b,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e57b;
    }
    uVar2 = func_0x008d4d80(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e57b:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e590(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x008beb00(iVar1,0x39d,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e5eb;
    }
    uVar2 = func_0x008d4df0(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e5eb:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e600(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x0091eb90(iVar1,0x39f,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e65b;
    }
    uVar2 = func_0x008d4e80(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e65b:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e670(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x0091ebc0(iVar1,0x3a2,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e6cb;
    }
    uVar2 = func_0x008d4ed0(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e6cb:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e6e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x00906da0(iVar1,0x3a4,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e73b;
    }
    uVar2 = func_0x008d4f60(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e73b:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e750(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x008beb00(iVar1,0x3a6,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e7ab;
    }
    uVar2 = func_0x008d5040(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e7ab:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e7c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x0091ebf0(iVar1,0x3a8,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e81b;
    }
    uVar2 = func_0x008d5100(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e81b:
  return uVar2 & 0xffffff00;
}



uint FUN_0089e830(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      uVar2 = func_0x0090f130(iVar1,0x3ae,param_1);
      if ((char)uVar2 == '\0') goto LAB_0089e88b;
    }
    uVar2 = func_0x008d5280(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0089e88b:
  return uVar2 & 0xffffff00;
}



void FUN_0089e8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3af), cVar2 != '\0'))
           && (cVar2 = func_0x0091ec20(iVar1,0x3af,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d5300(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089e940(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar5 + 0x18) == '\0') {
    uStack_8 = 0x89e95e;
    func_0x008abb44();
  }
  iVar5 = *(int *)(iVar5 + 0xa8);
  if (iVar5 == 0) {
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00f3c904;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar5 + 0x10) == 0) {
      iVar3 = func_0x008ab47d(0x14,uVar2);
      uStack_8 = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = func_0x008b9a30();
      }
      uStack_8 = 0xffffffff;
      if (*(char *)(iVar5 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar5 + 0x10) = uVar4;
      if (*(char *)(iVar5 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar5 + 0xa8) = 0;
    }
    if (*(char *)(iVar5 + 0x18) == '\0') {
      func_0x008abb44();
    }
    iVar5 = FUN_00472c50();
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0x1fb9) != '\0')) {
      func_0x008dc860(0,0x507,"Context has been lost.");
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (*(char *)(iVar5 + 0x1d01) == '\0') {
    if (*(int *)(iVar5 + 0x18c0) != 0) {
      uStack_8 = 0x3c6;
      iStack_10 = 0x89e985;
      puStack_c = (undefined *)iVar5;
      cVar1 = func_0x008bd7d0();
      if (cVar1 == '\0') {
        return;
      }
    }
    uStack_8 = 0x3c6;
    iStack_10 = 0x89e997;
    puStack_c = (undefined *)iVar5;
    cVar1 = FUN_004673b0();
    if (cVar1 == '\0') {
      return;
    }
  }
  return;
}



void FUN_0089e9b0(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba240(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3ca), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x0091ec80(iVar1,0x3ca,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d5530(uVar2);
  return;
}



void FUN_0089ea40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba0c0(param_1);
  uVar3 = func_0x008ba0c0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar4 = func_0x008bd7d0(iVar1,0x3cb), cVar4 == '\0')) {
      return;
    }
    cVar4 = func_0x00906e20(iVar1,0x3cb,uVar2,uVar3);
    if (cVar4 == '\0') {
      return;
    }
  }
  func_0x008d5540(uVar2,uVar3);
  return;
}



undefined4 FUN_0089eaf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return 0;
  }
  uVar2 = func_0x008b9ec0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3d1), cVar3 == '\0')) {
      return 0;
    }
    cVar3 = func_0x0090f2b0(iVar1,0x3d1,uVar2,param_2);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  uVar4 = func_0x008d5880(uVar2,param_2);
  return uVar4;
}



undefined4 FUN_0089eb90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008b9ec0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x3d3), cVar3 != '\0')) &&
        (cVar3 = func_0x0090f430(iVar1,0x3d3,uVar2,param_2,param_3,param_4), cVar3 != '\0')))) {
      uVar4 = func_0x008d58c0(uVar2,param_2,param_3,param_4);
      return uVar4;
    }
  }
  return 0;
}



void FUN_0089ec40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3e0), cVar2 != '\0'))
           && (cVar2 = FUN_004673b0(iVar1,0x3e0,param_1,param_2,param_3,param_4), cVar2 != '\0'))))
  {
    FUN_00819e10(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089ece0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3e2), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090f460(iVar1,0x3e2,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d5980(param_1);
  return;
}



void FUN_0089ed60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3e5), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091ecb0(iVar1,0x3e5,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d5a20(param_1,param_2,param_3);
  return;
}



void FUN_0089edf0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,999), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x00919830(iVar1,999,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d5a50(param_1);
  return;
}



void FUN_0089ee80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3ee), cVar2 != '\0')) &&
        (cVar2 = func_0x0090f490(iVar1,0x3ee,uVar3,param_2,param_3,param_4), cVar2 != '\0')))) {
      func_0x008d5a70(uVar3,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_0089ef30(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3f1), cVar2 != '\0')) &&
        (cVar2 = func_0x0091ed50(iVar1,0x3f1,uVar3,param_2,param_3,param_4), cVar2 != '\0')))) {
      func_0x008d5b90(uVar3,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_0089efe0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3f2), cVar2 != '\0')) &&
        (cVar2 = func_0x009168b0(iVar1,0x3f2,uVar3,param_2,param_3,param_4,param_5), cVar2 != '\0'))
       )) {
      func_0x008d5e10(uVar3,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0089f0b0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3f3), cVar2 != '\0')) &&
        (cVar2 = func_0x00916970(iVar1,0x3f3,uVar3,param_2,param_3,param_4,param_5,param_6),
        cVar2 != '\0')))) {
      func_0x008d5f30(uVar3,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}



void FUN_0089f180(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    uVar4 = param_3 - 0x1401U >> 1 | (uint)((param_3 - 0x1401U & 1) != 0) << 0x1f;
    if (2 < uVar4) {
      uVar4 = 3;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3f5), cVar2 != '\0')) &&
        (cVar2 = func_0x0090f730(iVar1,0x3f5,uVar3,param_2,uVar4,param_4,param_5), cVar2 != '\0'))))
    {
      func_0x008d6050(uVar3,param_2,uVar4,param_4,param_5);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_0089f260(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    uVar4 = param_3 - 0x1401U >> 1 | (uint)((param_3 - 0x1401U & 1) != 0) << 0x1f;
    if (2 < uVar4) {
      uVar4 = 3;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3f7), cVar2 != '\0')) &&
        (cVar2 = FUN_004673b0(iVar1,0x3f7,uVar3,param_2,uVar4,param_4,param_5,param_6),
        cVar2 != '\0')))) {
      func_0x008cf3d0(uVar3,param_2,uVar4,param_4,param_5,param_6);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_0089f350(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    uVar4 = param_2 - 0x1401U >> 1 | (uint)((param_2 - 0x1401U & 1) != 0) << 0x1f;
    if (2 < uVar4) {
      uVar4 = 3;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3fa), cVar2 != '\0')) &&
        (cVar2 = func_0x0091ed90(iVar1,0x3fa,uVar3,uVar4,param_3,param_4,param_5), cVar2 != '\0'))))
    {
      func_0x008d6170(uVar3,uVar4,param_3,param_4,param_5);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_0089f430(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    uVar4 = param_3 - 0x1401U >> 1 | (uint)((param_3 - 0x1401U & 1) != 0) << 0x1f;
    if (2 < uVar4) {
      uVar4 = 3;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3fb), cVar2 != '\0')) &&
        (cVar2 = func_0x00916a00(iVar1,0x3fb,uVar3,param_2,uVar4,param_4,param_5,param_6),
        cVar2 != '\0')))) {
      func_0x008d63f0(uVar3,param_2,uVar4,param_4,param_5,param_6);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_0089f520(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    uVar3 = (undefined1)param_1;
    if (0xe < param_1) {
      uVar3 = 0xf;
    }
    uVar4 = param_3 - 0x1401U >> 1 | (uint)((param_3 - 0x1401U & 1) != 0) << 0x1f;
    if (2 < uVar4) {
      uVar4 = 3;
    }
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x3fc), cVar2 != '\0')) &&
        (cVar2 = func_0x00916ac0(iVar1,0x3fc,uVar3,param_2,uVar4,param_4,param_5,param_6,param_7,
                                 param_8), cVar2 != '\0')))) {
      func_0x008d6510(uVar3,param_2,uVar4,param_4,param_5,param_6,param_7,param_8);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_0089f620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x428), cVar2 != '\0'))
           && (cVar2 = FUN_00466fd0(iVar1,0x428,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0089f6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x443), cVar2 != '\0'))
           && (cVar2 = func_0x0090fdb0(iVar1,0x443,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d6780(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089f770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x445), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090fe40(iVar1,0x445,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d6860(param_1,param_2,param_3);
  return;
}



void FUN_0089f800(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x44c), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f170(iVar1,0x44c,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7520(param_1,param_2);
  return;
}



void FUN_0089f890(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar5 + 0x18) == '\0') {
    iStack_8 = 0x89f8ae;
    func_0x008abb44();
  }
  iVar5 = *(int *)(iVar5 + 0xa8);
  if (iVar5 != 0) {
    if (*(char *)(iVar5 + 0x1d01) == '\0') {
      iStack_8 = 0x44e;
      puStack_10 = (undefined1 *)0x89f8cc;
      puStack_c = (undefined *)iVar5;
      cVar1 = func_0x0091f200();
      if (cVar1 == '\0') {
        return;
      }
    }
    if (*(char *)(iVar5 + 0x133c) == '\0') {
      puStack_c = (undefined *)0x8d75b8;
      iStack_8 = iVar5;
      func_0x0098d880();
      puStack_10 = &LAB_008d75c0;
      puStack_c = (undefined *)iVar5;
      func_0x009902e0();
    }
    return;
  }
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3c904;
  puStack_10 = (undefined1 *)*unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&puStack_10;
  iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(int *)(iVar5 + 0x10) == 0) {
    iVar3 = func_0x008ab47d(0x14,uVar2);
    iStack_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = func_0x008b9a30();
    }
    iStack_8 = 0xffffffff;
    if (*(char *)(iVar5 + 0x18) == '\0') {
      func_0x008abb44();
    }
    *(undefined4 *)(iVar5 + 0x10) = uVar4;
    if (*(char *)(iVar5 + 0x18) == '\0') {
      func_0x008abb44();
    }
    *(undefined4 *)(iVar5 + 0xa8) = 0;
  }
  if (*(char *)(iVar5 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar5 = FUN_00472c50();
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0x1fb9) != '\0')) {
    func_0x008dc860(0,0x507,"Context has been lost.");
  }
  *unaff_FS_OFFSET = (int)puStack_10;
  return;
}



void FUN_0089f8f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    uVar3 = param_1 - 0x1400;
    if (0xc < uVar3) {
      if (param_1 == 0x8368) {
        uVar3 = 0xd;
      }
      else if (param_1 == 0x8d61) {
        uVar3 = 0xe;
      }
      else if (param_1 == 0x8d9f) {
        uVar3 = 0xf;
      }
      else if (param_1 == 0x8df6) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = (param_1 != 0x8df7) + 0x11;
      }
    }
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x45e), cVar2 == '\0'))
      {
        return;
      }
      cVar2 = func_0x008bf860(iVar1,0x45e,uVar3,param_2,param_3);
      if (cVar2 == '\0') {
        return;
      }
    }
    func_0x008bceb0(uVar3,param_2,param_3);
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_0089f9d0(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  
  iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar6 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar6 = *(int *)(iVar6 + 0xa8);
  if (iVar6 == 0) {
    puStack_c = &DAT_00f3c904;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar6 + 0x10) == 0) {
      iVar4 = func_0x008ab47d(0x14,uVar3);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008b9a30();
      }
      if (*(char *)(iVar6 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
      if (*(char *)(iVar6 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar6 + 0xa8) = 0;
    }
    if (*(char *)(iVar6 + 0x18) == '\0') {
      func_0x008abb44();
    }
    iVar6 = FUN_00472c50();
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x1fb9) != '\0')) {
      func_0x008dc860(0,0x507,"Context has been lost.");
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (*(char *)(iVar6 + 0x1d01) == '\0') {
    if (*(int *)(iVar6 + 0x18c0) != 0) {
      iStack_10 = 0x89fa15;
      puStack_c = (undefined *)iVar6;
      cVar2 = func_0x008bd7d0();
      if (cVar2 == '\0') {
        return;
      }
    }
    iStack_10 = 0x89fa27;
    puStack_c = (undefined *)iVar6;
    cVar2 = func_0x00910080();
    if (cVar2 == '\0') {
      return;
    }
  }
  puStack_c = (undefined *)0x8d771f;
  func_0x00921f60();
  pcVar1 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0xbc);
  iStack_10 = 0x8d7736;
  puStack_c = (undefined *)iVar6;
  _guard_check_icall();
  iStack_10 = 0x8d773a;
  (*pcVar1)();
  return;
}



void FUN_0089fa40(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  
  iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar6 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar6 = *(int *)(iVar6 + 0xa8);
  if (iVar6 == 0) {
    puStack_c = &DAT_00f3c904;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar6 + 0x10) == 0) {
      iVar4 = func_0x008ab47d(0x14,uVar3);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008b9a30();
      }
      if (*(char *)(iVar6 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
      if (*(char *)(iVar6 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar6 + 0xa8) = 0;
    }
    if (*(char *)(iVar6 + 0x18) == '\0') {
      func_0x008abb44();
    }
    iVar6 = FUN_00472c50();
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x1fb9) != '\0')) {
      func_0x008dc860(0,0x507,"Context has been lost.");
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (*(char *)(iVar6 + 0x1d01) == '\0') {
    if (*(int *)(iVar6 + 0x18c0) != 0) {
      iStack_10 = 0x89fa85;
      puStack_c = (undefined *)iVar6;
      cVar2 = func_0x008bd7d0();
      if (cVar2 == '\0') {
        return;
      }
    }
    iStack_10 = 0x89fa97;
    puStack_c = (undefined *)iVar6;
    cVar2 = func_0x009100e0();
    if (cVar2 == '\0') {
      return;
    }
  }
  pcVar1 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0xb4);
  puStack_c = (undefined *)0x8d7758;
  _guard_check_icall();
  puStack_c = (undefined *)0x8d775c;
  (*pcVar1)();
  return;
}



void FUN_0089fab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x46d), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f250(iVar1,0x46d,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7840(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void FUN_0089fc00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x46e), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f280(iVar1,0x46e,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7840(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void FUN_0089fd50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x472), cVar2 != '\0'))
           && (cVar2 = func_0x00910110(iVar1,0x472,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d78c0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089fdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x474), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f2b0(iVar1,0x474,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7990(param_1,param_2,param_3);
  return;
}



void FUN_0089fe80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x478), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f2e0(iVar1,0x478,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7a10(param_1,param_2,param_3);
  return;
}



void FUN_0089ff20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x47a), cVar2 != '\0'))
           && (cVar2 = func_0x0091f330(iVar1,0x47a,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7a90(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0089ffc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x47c), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f360(iVar1,0x47c,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7b10(param_1,param_2,param_3);
  return;
}



void FUN_008a0050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x47e), cVar2 != '\0'))
           && (cVar2 = func_0x0091f390(iVar1,0x47e,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7b90(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a00f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x480), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f3c0(iVar1,0x480,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7c10(param_1,param_2,param_3);
  return;
}



void FUN_008a0180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x482), cVar2 != '\0'))
           && (cVar2 = func_0x0091f3f0(iVar1,0x482,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7c90(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x486), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f420(iVar1,0x486,param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d7d10(param_1,param_2,param_3,param_4);
  return;
}



void FUN_008a02e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x488), cVar2 != '\0'))
           && (cVar2 = func_0x0091f480(iVar1,0x488,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7db0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x48a), cVar2 != '\0'))
           && (cVar2 = func_0x0091f4b0(iVar1,0x48a,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7e30(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x48c), cVar2 != '\0'))
           && (cVar2 = func_0x0091f4e0(iVar1,0x48c,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7ec0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a04c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x48e), cVar2 != '\0'))
           && (cVar2 = func_0x0091f510(iVar1,0x48e,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7f40(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x490), cVar2 != '\0'))
           && (cVar2 = func_0x0091f540(iVar1,0x490,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d7fd0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x494), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f570(iVar1,0x494,param_1,param_2,param_3,param_4,param_5);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d8050(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_008a06e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x496), cVar2 != '\0'))
           && (cVar2 = func_0x0091f5e0(iVar1,0x496,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d8110(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x498), cVar2 != '\0'))
           && (cVar2 = func_0x0091f610(iVar1,0x498,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d8190(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a0830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x49a), cVar2 != '\0'))
           && (cVar2 = func_0x0091f640(iVar1,0x49a,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d8240(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a08d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x49c), cVar2 != '\0'))
           && (cVar2 = func_0x0091f670(iVar1,0x49c,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d82c0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a0980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x49e), cVar2 != '\0'))
           && (cVar2 = func_0x0091f6a0(iVar1,0x49e,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d8370(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x4a2), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f6d0(iVar1,0x4a2,param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d83f0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_008a0b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4a4), cVar2 != '\0'))
           && (cVar2 = func_0x0091f740(iVar1,0x4a4,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d84c0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4a6), cVar2 != '\0'))
           && (cVar2 = func_0x0091f770(iVar1,0x4a6,param_1,param_2,param_3,param_4,param_5,param_6),
              cVar2 != '\0')))) {
    func_0x008d8540(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_008a0c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4a8), cVar2 != '\0'))
           && (cVar2 = func_0x0091f7a0(iVar1,0x4a8,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d8600(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4aa), cVar2 != '\0'))
           && (cVar2 = func_0x0091f7b0(iVar1,0x4aa,param_1,param_2,param_3,param_4,param_5,param_6),
              cVar2 != '\0')))) {
    func_0x008d8680(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_008a0dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4ac), cVar2 != '\0'))
           && (cVar2 = func_0x0091f7e0(iVar1,0x4ac,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d8740(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a0e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4af), cVar2 != '\0'))
           && (cVar2 = func_0x0091f7f0(iVar1,0x4af,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d87c0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a0f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4b2), cVar2 != '\0'))
           && (cVar2 = func_0x0091f820(iVar1,0x4b2,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d8840(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a0fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4b5), cVar2 != '\0'))
           && (cVar2 = func_0x0091f850(iVar1,0x4b5,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d88c0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a1080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4b8), cVar2 != '\0'))
           && (cVar2 = func_0x0091f880(iVar1,0x4b8,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d8940(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a1130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4bb), cVar2 != '\0'))
           && (cVar2 = func_0x0091f8b0(iVar1,0x4bb,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d89c0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a11e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4be), cVar2 != '\0'))
           && (cVar2 = func_0x0091f8e0(iVar1,0x4be,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d8a40(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a1290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4c1), cVar2 != '\0'))
           && (cVar2 = func_0x0091f910(iVar1,0x4c1,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d8ac0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a1340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4c4), cVar2 != '\0'))
           && (cVar2 = func_0x0091f940(iVar1,0x4c4,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d8b40(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a13f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4c7), cVar2 != '\0'))
           && (cVar2 = func_0x0091f970(iVar1,0x4c7,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d8bc0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a14a0(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba380(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x4c9), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x00910140(iVar1,0x4c9,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d8c40(uVar2);
  return;
}



void FUN_008a1530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4cd), cVar2 != '\0'))
           && (cVar2 = func_0x00910190(iVar1,0x4cd,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d8c60(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a15d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x4ce), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x00907720(iVar1,0x4ce,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d8d70(param_1,param_2);
  return;
}



void FUN_008a1660(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba3a0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x4d2), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x00907760(iVar1,0x4d2,param_1,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d8dc0(param_1,uVar2);
  return;
}



undefined4 FUN_008a1700(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return 0;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x4d3), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = FUN_004673b0(iVar1,0x4d3,param_1,param_2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_008bcf70(param_1,param_2);
  return uVar3;
}



void FUN_008a1790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4ee), cVar2 != '\0'))
           && (cVar2 = func_0x00907cc0(iVar1,0x4ee,param_1,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,param_9,param_10,param_11), cVar2 != '\0'))))
  {
    func_0x008d8ef0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11);
    return;
  }
  return;
}



void FUN_008a1880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4f0), cVar2 != '\0'))
           && (cVar2 = func_0x00907dc0(iVar1,0x4f0,param_1,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8), cVar2 != '\0')))) {
    func_0x008d8f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  return;
}



void FUN_008a1950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4f1), cVar2 != '\0'))
           && (cVar2 = func_0x00907e20(iVar1,0x4f1,param_1,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,param_9,param_10,param_11), cVar2 != '\0'))))
  {
    func_0x008d8ef0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11);
    return;
  }
  return;
}



void FUN_008a1a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x4fb), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091f9a0(iVar1,0x4fb,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d9000(param_1,param_2,param_3);
  return;
}



void FUN_008a1ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4ff), cVar2 != '\0'))
           && (cVar2 = func_0x009102e0(iVar1,0x4ff,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d91d0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a1b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x500), cVar2 != '\0'))
           && (cVar2 = func_0x00910390(iVar1,0x500,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008d9230(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a1c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x501), cVar2 != '\0'))
           && (cVar2 = func_0x008bf9f0(iVar1,0x501,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d9170(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a1cd0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x502), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x00910440(iVar1,0x502,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d9290(param_1);
  return;
}



void FUN_008a1d50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x50a), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x00916f80(iVar1,0x50a,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d93f0(param_1,param_2);
  return;
}



void FUN_008a1de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00916fb0(iVar1,0x50c,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d9400(param_1,param_2,param_3);
  return;
}



void FUN_008a1e50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00916fb0(iVar1,0x50d,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d9400(param_1,param_2,param_3);
  return;
}



void FUN_008a1ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x50e,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    FUN_00819e10(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a1f40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00916ff0(iVar1,0x510,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d9430(param_1,param_2,param_3);
  return;
}



void FUN_008a1fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00916ff0(iVar1,0x511,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d9430(param_1,param_2,param_3);
  return;
}



void FUN_008a2020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = FUN_00466fd0(iVar1,0x512,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    FUN_00819e10(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a20a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x009081f0(iVar1,0x515,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d94d0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a2120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (cVar2 = func_0x00908260(iVar1,0x518,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d9560(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a21a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x534), cVar2 != '\0'))
           && (cVar2 = func_0x0091c710(iVar1,0x534,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008a2250(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x535), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091e7a0(iVar1,0x535,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_008a22e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x536), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x009104d0(iVar1,0x536,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d97e0(param_1,param_2);
  return;
}



void FUN_008a2370(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x53b), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091fa50(iVar1,0x53b,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d98a0(param_1);
  return;
}



void FUN_008a23f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x53c), cVar2 != '\0'))
           && (cVar2 = func_0x0091fab0(iVar1,0x53c,param_1,param_2,param_3,param_4,param_5,param_6),
              cVar2 != '\0')))) {
    func_0x008d98b0(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



undefined4 FUN_008a24b0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return 1;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x544), cVar2 == '\0')) {
      return 1;
    }
    cVar2 = func_0x00910870(iVar1,0x544,param_1);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  uVar3 = func_0x008d9de0(param_1);
  return uVar3;
}



void FUN_008a2530(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x546), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x0091b150(iVar1,0x546,uVar2,param_2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d9e60(uVar2,param_2,param_3);
  return;
}



void FUN_008a25d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x547), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x0091b180(iVar1,0x547,uVar2,param_2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008d9e60(uVar2,param_2,param_3);
  return;
}



void FUN_008a2670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x549), cVar3 != '\0')) &&
        (cVar3 = func_0x0091b290(iVar1,0x549,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
       )) {
      func_0x008d9ea0(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_008a2730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x54a), cVar3 != '\0')) &&
        (cVar3 = func_0x0091b2c0(iVar1,0x54a,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
       )) {
      func_0x008d9ea0(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_008a27f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x57d), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x57d,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_008a2890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x57f), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x57f,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_008a2920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x581), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x581,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_008a29b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x583), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x583,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_008a2a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x584), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x584,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_008a2ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x585), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x585,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_00466fb0(param_1,param_2,param_3);
  return;
}



void FUN_008a2b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x588), cVar3 != '\0')) &&
        (cVar3 = func_0x009086b0(iVar1,0x588,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8), cVar3 != '\0')))) {
      func_0x008d9f70(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}



void FUN_008a2c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x58a), cVar3 != '\0')) &&
        (cVar3 = func_0x009109a0(iVar1,0x58a,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10), cVar3 != '\0')))) {
      func_0x008d9fe0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                     );
      return;
    }
  }
  return;
}



void FUN_008a2d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x58d), cVar3 != '\0')) &&
        (cVar3 = func_0x00910a40(iVar1,0x58d,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10), cVar3 != '\0')))) {
      func_0x008da070(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                     );
      return;
    }
  }
  return;
}



void FUN_008a2e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x58e), cVar3 != '\0')) &&
        (cVar3 = func_0x00917190(iVar1,0x58e,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10,param_11), cVar3 != '\0')))) {
      func_0x008da100(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11);
      return;
    }
  }
  return;
}



void FUN_008a2f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x00910a50(iVar1,0x590,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da190(uVar2,param_2,param_3);
  return;
}



void FUN_008a2fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x00910a50(iVar1,0x591,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da190(uVar2,param_2,param_3);
  return;
}



void FUN_008a3040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = FUN_00466fd0(iVar1,0x592,uVar2,param_2,param_3,param_4), cVar3 != '\0')) {
      FUN_00819e10(uVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_008a30d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x00910a90(iVar1,0x594,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da1c0(uVar2,param_2,param_3);
  return;
}



void FUN_008a3160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  uVar2 = func_0x008ba7f0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x00910a90(iVar1,0x595,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da1c0(uVar2,param_2,param_3);
  return;
}



void FUN_008a31f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = FUN_00466fd0(iVar1,0x596,uVar2,param_2,param_3,param_4), cVar3 != '\0')) {
      FUN_00819e10(uVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_008a3280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x009087d0(iVar1,0x599,uVar2,param_2,param_3,param_4), cVar3 != '\0')) {
      func_0x008da250(uVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_008a3310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar3 = func_0x00908840(iVar1,0x59c,uVar2,param_2,param_3,param_4), cVar3 != '\0')) {
      func_0x008da2e0(uVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void FUN_008a33a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x5a0), cVar2 != '\0'))
           && (cVar2 = func_0x00910b90(iVar1,0x5a0,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    FUN_00819e10(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008a3440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5a2), cVar3 != '\0')) &&
        (cVar3 = func_0x00910bb0(iVar1,0x5a2,uVar2,param_2,param_3,param_4,param_5), cVar3 != '\0'))
       )) {
      func_0x008da310(uVar2,param_2,param_3,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_008a3500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5a4), cVar3 != '\0')) &&
        (cVar3 = func_0x00917450(iVar1,0x5a4,uVar2,param_2,param_3,param_4,param_5,param_6),
        cVar3 != '\0')))) {
      func_0x008da360(uVar2,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}



void FUN_008a35d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5a6), cVar3 != '\0')) &&
        (cVar3 = func_0x00910c10(iVar1,0x5a6,uVar2,param_2,param_3,param_4,param_5,param_6),
        cVar3 != '\0')))) {
      func_0x008da3c0(uVar2,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}



void FUN_008a36a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5a8), cVar3 != '\0')) &&
        (cVar3 = func_0x0091b340(iVar1,0x5a8,uVar2,param_2,param_3,param_4,param_5,param_6,param_7),
        cVar3 != '\0')))) {
      func_0x008da410(uVar2,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
  }
  return;
}



void FUN_008a3780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5a9), cVar3 != '\0')) &&
        (cVar3 = func_0x0091fc00(iVar1,0x5a9,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8), cVar3 != '\0')))) {
      func_0x008da470(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}



void FUN_008a3860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5aa), cVar3 != '\0')) &&
        (cVar3 = func_0x0091b3f0(iVar1,0x5aa,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9), cVar3 != '\0')))) {
      func_0x008da4e0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}



void FUN_008a3950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5ab), cVar3 != '\0')) &&
        (cVar3 = func_0x0091b3f0(iVar1,0x5ab,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9), cVar3 != '\0')))) {
      func_0x008da4e0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}



void FUN_008a3a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5ac), cVar3 != '\0')) &&
        (cVar3 = func_0x0091b3f0(iVar1,0x5ac,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10), cVar3 != '\0')))) {
      func_0x008da4f0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                     );
      return;
    }
  }
  return;
}



void FUN_008a3b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5ad), cVar3 != '\0')) &&
        (cVar3 = func_0x0091fc80(iVar1,0x5ad,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10,param_11), cVar3 != '\0')))) {
      func_0x008da500(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11);
      return;
    }
  }
  return;
}



void FUN_008a3c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5ae), cVar3 != '\0')) &&
        (cVar3 = FUN_00466fd0(iVar1,0x5ae,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,param_10,param_11,param_12), cVar3 != '\0')))) {
      func_0x008da580(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11,param_12);
      return;
    }
  }
  return;
}



void FUN_008a3d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5af), cVar3 != '\0')) &&
        (cVar3 = FUN_00466fd0(iVar1,0x5af,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,param_10,param_11,param_12), cVar3 != '\0')))) {
      func_0x008da580(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11,param_12);
      return;
    }
  }
  return;
}



void FUN_008a3e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba7f0(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5b0), cVar3 != '\0')) &&
        (cVar3 = FUN_00466fd0(iVar1,0x5b0,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,param_10,param_11,param_12,param_13), cVar3 != '\0')))
       ) {
      func_0x008da590(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11,param_12,param_13);
      return;
    }
  }
  return;
}



void FUN_008a3f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5b3), cVar3 != '\0')) &&
        (cVar3 = func_0x00910d10(iVar1,0x5b3,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10), cVar3 != '\0')))) {
      func_0x008da660(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                     );
      return;
    }
  }
  return;
}



void FUN_008a4030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5b5), cVar3 != '\0')) &&
        (cVar3 = func_0x00910db0(iVar1,0x5b5,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10,param_11), cVar3 != '\0')))) {
      func_0x008da720(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11);
      return;
    }
  }
  return;
}



void FUN_008a4130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else {
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5b6), cVar3 != '\0')) &&
        (cVar3 = func_0x009175c0(iVar1,0x5b6,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10,param_11,param_12), cVar3 != '\0')))) {
      func_0x008da7e0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11,param_12);
      return;
    }
  }
  return;
}



uint FUN_008a4230(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 != 0) {
    uVar2 = func_0x008b9ec0(param_1);
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      if (*(int *)(iVar1 + 0x18c0) != 0) {
        uVar3 = func_0x008bd7d0(iVar1,0x604);
        if ((char)uVar3 == '\0') goto LAB_008a42b8;
      }
      uVar3 = func_0x00911010(iVar1,0x604,uVar2);
      if ((char)uVar3 == '\0') goto LAB_008a42b8;
    }
    uVar3 = func_0x008dbac0(uVar2);
    return uVar3;
  }
  uVar3 = func_0x008aad80();
LAB_008a42b8:
  return uVar3 & 0xffffff00;
}



void FUN_008a42c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x608), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091fd60(iVar1,0x608,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008dc6f0(param_1,param_2,param_3);
  return;
}



void FUN_008a4350(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x60b), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0091fd90(iVar1,0x60b,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008dc820(param_1);
  return;
}



void FUN_008a43d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00911160(iVar1,0x652,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008dcda0(param_1,param_2);
  return;
}



void FUN_008a4440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x009112a0(iVar1,0x653,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008dcda0(param_1,param_2);
  return;
}



void FUN_008a44b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x68a), cVar2 != '\0'))
           && (cVar2 = func_0x0091fab0(iVar1,0x68a,param_1,param_2,param_3,param_4,param_5,param_6),
              cVar2 != '\0')))) {
    func_0x008dd0c0(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_008a4570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
  }
  else if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x68c), cVar2 != '\0'))
           && (cVar2 = FUN_004673b0(iVar1,0x68c,param_1,param_2,param_3,param_4), cVar2 != '\0'))))
  {
    FUN_00819e10(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



undefined4 __thiscall FUN_008a4690(undefined4 param_1,byte param_2)

{
  func_0x0092d800();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



void __fastcall FUN_008a8500(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar4 = param_1[2] - iVar1 & 0xfffffffc;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x008aaf5a. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



int __cdecl fputc(int _Ch,FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x008aafa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fputc(_Ch,_File);
  return iVar1;
}



int __cdecl fflush(FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x008aafb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fflush(_File);
  return iVar1;
}



size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x008aafc0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}



void _purecall(void)

{
                    // WARNING: Could not recover jumptable at 0x008ab0c0. Too many branches
                    // WARNING: Treating indirect jump as call
  _purecall();
  return;
}



void Unwind_008ab0d0(void)

{
                    // WARNING: Could not recover jumptable at 0x008ab0d0. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_terminate();
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x008ab0e0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x008ab0f0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void FUN_008ab100(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  func_0x00e878f3(1);
  uVar3 = func_0x008ac0b2();
  func_0x00e87929(uVar3);
  uVar3 = FUN_00466fc0();
  puVar4 = (undefined4 *)func_0x00e87959();
  *puVar4 = uVar3;
  cVar2 = func_0x008ab66f(1);
  if (cVar2 != '\0') {
    func_0x008ac2de();
    func_0x008ab7fd(FUN_008ac310);
    uVar3 = func_0x008ac0ae();
    iVar5 = func_0x00e878ff(uVar3);
    if (iVar5 == 0) {
      func_0x008ab471();
      iVar5 = func_0x008ac0f6();
      if (iVar5 != 0) {
        func_0x00e878f9(FUN_00466fc0);
      }
      _guard_check_icall();
      _guard_check_icall();
      func_0x008ac0b8();
      uVar3 = FUN_00466fc0();
      func_0x00e8794d(uVar3);
      cVar2 = FUN_004673b0();
      if (cVar2 != '\0') {
        func_0x00e87905();
      }
      FUN_00466fc0();
      iVar5 = func_0x008ac223();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  func_0x008ac10e(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_008ab1b0(void)

{
  func_0x008ac0d9();
  return 0;
}



void FUN_008ab1c0(void)

{
  undefined4 uVar1;
  
  func_0x008ac26a();
  uVar1 = FUN_00466fc0();
  func_0x00e87953(uVar1);
  return;
}



undefined4 entry(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_FS_OFFSET;
  
  func_0x008ac063();
  func_0x008ac340(&DAT_0125c440,0x14);
  cVar3 = func_0x008ab636(1);
  if (cVar3 != '\0') {
    bVar2 = false;
    *(undefined1 *)(unaff_EBP + -0x19) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = func_0x008ab604();
    *(undefined1 *)(unaff_EBP + -0x24) = uVar4;
    if (DAT_013dd860 != 1) {
      if (DAT_013dd860 == 0) {
        DAT_013dd860 = 1;
        iVar5 = func_0x00e87917(&DAT_00f77520,&DAT_00f77530);
        if (iVar5 != 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
          unaff_ESI = 0xff;
          goto LAB_008ab32e;
        }
        func_0x00e87911(&DAT_00f76a8c,&DAT_00f77510);
        DAT_013dd860 = 2;
      }
      else {
        bVar2 = true;
        *(undefined1 *)(unaff_EBP + -0x19) = 1;
      }
      func_0x008ab78a(*(undefined4 *)(unaff_EBP + -0x24));
      piVar6 = (int *)func_0x008ac102();
      if (*piVar6 != 0) {
        cVar3 = func_0x008ab6f6(piVar6);
        if (cVar3 != '\0') {
          pcVar1 = (code *)*piVar6;
          _guard_check_icall(0,2,0);
          (*pcVar1)();
        }
      }
      piVar6 = (int *)func_0x008ac108();
      if (*piVar6 != 0) {
        cVar3 = func_0x008ab6f6(piVar6);
        if (cVar3 != '\0') {
          func_0x00e87947(*piVar6);
        }
      }
      uVar7 = func_0x00e8790b();
      puVar8 = (undefined4 *)func_0x00e87935();
      uVar9 = *puVar8;
      puVar8 = (undefined4 *)func_0x00e8792f();
      unaff_ESI = func_0x0087d7c0(*puVar8,uVar9,uVar7);
      cVar3 = func_0x008ac228();
      if (cVar3 != '\0') {
        if (!bVar2) {
          func_0x00e8793b();
        }
        func_0x008ab7a7(1,0);
        *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
LAB_008ab32e:
        *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
        return unaff_ESI;
      }
      goto LAB_008ab345;
    }
  }
  func_0x008ac10e(7);
LAB_008ab345:
  func_0x00e8791d(unaff_ESI);
  func_0x00e87923(*(undefined4 *)(unaff_EBP + -0x20));
  pcVar1 = (code *)swi(3);
  uVar9 = (*pcVar1)();
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_008ab370(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar9;
  undefined4 unaff_retaddr;
  
  if (param_1 == DAT_0128fd40) {
    return;
  }
  uVar2 = IsProcessorFeaturePresent(0x17);
  uVar9 = CONCAT44(extraout_EDX,uVar2);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    uVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_013dd980 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_013dd988 = (undefined4)uVar9;
  _DAT_013dd998 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_013dd99c = &stack0x00000004;
  _DAT_013dd8d8 = 0x10001;
  _DAT_013dd888 = 0xc0000409;
  _DAT_013dd88c = 1;
  _DAT_013dd898 = 1;
  DAT_013dd89c = 2;
  _DAT_013dd894 = unaff_retaddr;
  _DAT_013dd964 = in_GS;
  _DAT_013dd968 = in_FS;
  _DAT_013dd96c = in_ES;
  _DAT_013dd970 = in_DS;
  _DAT_013dd974 = unaff_EDI;
  _DAT_013dd978 = unaff_ESI;
  _DAT_013dd97c = unaff_EBX;
  _DAT_013dd984 = uVar3;
  _DAT_013dd98c = unaff_EBP;
  DAT_013dd990 = unaff_retaddr;
  _DAT_013dd994 = in_CS;
  _DAT_013dd9a0 = in_SS;
  func_0x008ab8c0(&PTR_DAT_00f949e0);
  return;
}



undefined4 * __thiscall FUN_008ab820(undefined4 *param_1,byte param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



void tls_callback_0(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined **ppuVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3c970;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((param_2 == 2) &&
     (iVar1 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4), *(char *)(iVar1 + 0x18) != '\x01')) {
    *(undefined1 *)(iVar1 + 0x18) = 1;
    for (ppuVar4 = &PTR_FUN_00f77518; ppuVar4 != (undefined **)&UNK_00f7751c; ppuVar4 = ppuVar4 + 1)
    {
      pcVar2 = (code *)*ppuVar4;
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(uVar3);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void tls_callback_1(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *_Memory;
  int unaff_FS_OFFSET;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    _Memory = *(int **)(iVar1 + 0x20);
    if (_Memory != (int *)0x0) {
      while( true ) {
        iVar4 = *_Memory + -1;
        if (-1 < iVar4) {
          piVar3 = _Memory + *_Memory + 1;
          do {
            pcVar2 = (code *)*piVar3;
            if (pcVar2 != (code *)0x0) {
              _guard_check_icall();
              (*pcVar2)();
            }
            piVar3 = piVar3 + -1;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
        piVar3 = (int *)_Memory[1];
        if (piVar3 == (int *)0x0) break;
        free(_Memory);
        *(int **)(iVar1 + 0x20) = piVar3;
        _Memory = piVar3;
      }
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
  }
  return;
}



// Library Function - Single Match
//  __except_handler4
// 
// Library: Visual Studio 2019 Release

void __except_handler4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00eaaad1(*param_1);
  *param_1 = uVar1;
  func_0x00e87d28(&DAT_0128fd40,FUN_008ab370,param_1,param_2,param_3,param_4);
  return;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x008aaf5a. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



// Library Function - Single Match
//  ___scrt_unhandled_exception_filter@4
// 
// Library: Visual Studio 2019 Release

undefined4 ___scrt_unhandled_exception_filter_4(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar4 = (int *)*param_1;
  if (((*piVar4 == -0x1f928c9d) && (piVar4[4] == 3)) &&
     ((iVar1 = piVar4[5], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    piVar3 = (int *)func_0x00e87d1c();
    *piVar3 = (int)piVar4;
    iVar1 = param_1[1];
    piVar4 = (int *)func_0x00e87d22();
    *piVar4 = iVar1;
    func_0x008aaff0();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x008ac320)
// WARNING: Removing unreachable block (ram,0x008ac321)
// WARNING: Removing unreachable block (ram,0x008ac327)
// WARNING: Removing unreachable block (ram,0x008ac331)
// WARNING: Removing unreachable block (ram,0x008ac338)

void FUN_008ac310(void)

{
  return;
}



DWORD GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x008ac6e0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}



BOOL GetFileAttributesExW
               (LPCWSTR lpFileName,GET_FILEEX_INFO_LEVELS fInfoLevelId,LPVOID lpFileInformation)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x008ac6f0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetFileAttributesExW(lpFileName,fInfoLevelId,lpFileInformation);
  return BVar1;
}



BOOL DeleteFileW(LPCWSTR lpFileName)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x008ac700. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = DeleteFileW(lpFileName);
  return BVar1;
}



void FUN_008ac980(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void __thiscall FUN_008ac990(undefined4 param_1,char param_2)

{
  if (param_2 != '\0') {
    func_0x008ab812(param_1,8);
  }
  return;
}



undefined1 FUN_008ac9b0(void)

{
  return 1;
}



TypeDescriptor * FUN_008ac9c0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall __0PlatformMethods_angle__QAE_XZ(undefined4 *param_1)

{
                    // 0x4aced0  1  ??0PlatformMethods@angle@@QAE@XZ
  *param_1 = 0;
  param_1[1] = FUN_008ad0a0;
  param_1[2] = FUN_008ad0a0;
  param_1[3] = _guard_check_icall;
  param_1[4] = _guard_check_icall;
  param_1[5] = _guard_check_icall;
  param_1[6] = FUN_00466fc0;
  param_1[7] = FUN_004693b0;
  param_1[8] = _guard_check_icall;
  param_1[9] = _guard_check_icall;
  param_1[10] = _guard_check_icall;
  param_1[0xb] = _guard_check_icall;
  param_1[0xc] = _guard_check_icall;
  param_1[0xd] = _guard_check_icall;
  param_1[0xe] = _guard_check_icall;
  param_1[0xf] = _guard_check_icall;
  param_1[0x10] = _guard_check_icall;
  param_1[0x11] = 0;
  return param_1;
}



undefined4 * __thiscall
__4PlatformMethods_angle__QAEAAU01___QAU01__Z(undefined4 *param_1,undefined4 *param_2)

{
                    // 0x4acfc0  2  ??4PlatformMethods@angle@@QAEAAU01@$$QAU01@@Z
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  return param_1;
}



undefined4 * __thiscall
__4PlatformMethods_angle__QAEAAU01_ABU01__Z(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    // 0x4ad040  3  ??4PlatformMethods@angle@@QAEAAU01@ABU01@@Z
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



float10 FUN_008ad0a0(void)

{
  return (float10)0;
}



undefined4 FUN_008ad590(undefined4 param_1)

{
  return param_1;
}



undefined4 FUN_008add20(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_3 < 0x3143) {
    if (param_3 == 0x3142) {
      iVar1 = func_0x0092a580();
      if (*(char *)(iVar1 + 0x2f) == '\0') {
        pcVar2 = "EGL_ANDROID_recordable is not enabled.";
        goto LAB_008addfa;
      }
    }
    else {
      switch(param_3) {
      case 0x3020:
      case 0x3021:
      case 0x3022:
      case 0x3023:
      case 0x3024:
      case 0x3025:
      case 0x3026:
      case 0x3027:
      case 0x3028:
      case 0x3029:
      case 0x302a:
      case 0x302b:
      case 0x302c:
      case 0x302d:
      case 0x302e:
      case 0x302f:
      case 0x3031:
      case 0x3032:
      case 0x3033:
      case 0x3034:
      case 0x3035:
      case 0x3036:
      case 0x3037:
      case 0x3039:
      case 0x303a:
      case 0x303b:
      case 0x303c:
      case 0x303d:
      case 0x303e:
      case 0x303f:
      case 0x3040:
      case 0x3041:
      case 0x3042:
        break;
      default:
LAB_008ade16:
        func_0x008b97c0(param_1,0x3004,"Unknown attribute: 0x%04xX",param_3);
        return 0;
      case 0x3043:
        iVar1 = func_0x0092a580();
        if (*(char *)(iVar1 + 0x4e) == '\0') {
          pcVar2 = "EGL_KHR_lock_surface3 is not enabled.";
LAB_008addfa:
          func_0x008b97c0(param_1,0x3004,pcVar2);
          return 0;
        }
        break;
      case 0x307f:
        iVar1 = func_0x0092a580();
        if (*(char *)(iVar1 + 0x45) == '\0') {
          pcVar2 = "EGL_NOK_texture_from_pixmap is not enabled.";
          goto LAB_008addfa;
        }
      }
    }
  }
  else if (param_3 < 0x33a8) {
    if (param_3 == 0x33a7) {
      iVar1 = func_0x0092a580();
      if (*(char *)(iVar1 + 7) == '\0') {
        pcVar2 = "EGL_ANGLE_surface_orientation is not enabled.";
        goto LAB_008addfa;
      }
    }
    else if (param_3 == 0x3147) {
      iVar1 = func_0x0092a580();
      if (*(char *)(iVar1 + 0x41) == '\0') {
        pcVar2 = "EGL_ANDROID_framebuffer_target is not enabled.";
        goto LAB_008addfa;
      }
    }
    else {
      if (param_3 != 0x3339) goto LAB_008ade16;
      iVar1 = func_0x0092a580();
      if (*(char *)(iVar1 + 0x20) == '\0') {
        pcVar2 = "EGL_EXT_pixel_format_float is not enabled.";
        goto LAB_008addfa;
      }
    }
  }
  else {
    if (param_3 != 0x348d) goto LAB_008ade16;
    iVar1 = func_0x0092a580();
    if (*(char *)(iVar1 + 0x27) == '\0') {
      func_0x008b97c0(param_1,0x3004,"EGL_ANGLE_iosurface_client_buffer is not enabled.");
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_008ae6b0(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  if (0x33ac < param_3) {
    if (param_3 < 0x34d3) {
      if (param_3 == 0x34d2) {
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x50) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_CONTEXT_METAL_OWNERSHIP_IDENTITY_ANGLE requires EGL_ANGLE_metal_create_context_ownership_identity."
                       );
        return 1;
      }
      switch(param_3) {
      case 0x33ad:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x1c) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_CONTEXT_BIND_GENERATES_RESOURCE_CHROMIUM requires EGL_CHROMIUM_create_context_bind_generates_resource."
                       );
        return 0;
      case 0x33af:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x22) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_DISPLAY_TEXTURE_SHARE_GROUP_ANGLE requires EGL_ANGLE_display_texture_share_group."
                       );
        return 0;
      case 0x3452:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x24) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_CONTEXT_CLIENT_ARRAYS_ENABLED_ANGLE requires EGL_ANGLE_create_context_client_arrays."
                       );
        return 0;
      case 0x3453:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x26) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_ROBUST_RESOURCE_INITIALIZATION_ANGLE requires EGL_ANGLE_robust_resource_initialization."
                       );
        return 0;
      case 0x3459:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x25) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_CONTEXT_PROGRAM_BINARY_CACHE_ENABLED_ANGLE requires EGL_ANGLE_program_cache_control."
                       );
        return 0;
      case 0x345f:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x29) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_EXTENSIONS_ENABLED_ANGLE requires EGL_ANGLE_create_context_extensions_enabled."
                       );
        return 0;
      case 0x3481:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x4d) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_CONTEXT_VIRTUALIZATION_GROUP_ANGLE requires extension EGL_ANGLE_context_virtualization."
                       );
        return 0;
      case 0x3482:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x30) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_POWER_PREFERENCE_ANGLE requires EGL_ANGLE_power_preference.")
        ;
        return 0;
      case 0x3483:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x35) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_CONTEXT_OPENGL_BACKWARDS_COMPATIBLE_ANGLE requires EGL_ANGLE_create_context_backwards_compatible."
                       );
        return 0;
      case 0x348d:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x22) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_DISPLAY_SEMAPHORE_SHARE_GROUP_ANGLE requires EGL_ANGLE_display_semaphore_share_group."
                       );
        return 0;
      case 0x348e:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x48) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_EXTERNAL_CONTEXT_ANGLE requires EGL_ANGLE_external_context_and_surface."
                       );
        return 0;
      case 0x3490:
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x48) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_EXTERNAL_CONTEXT_SAVE_STATE_ANGLE requires EGL_ANGLE_external_context_and_surface."
                       );
        return 0;
      }
    }
LAB_008aead4:
    func_0x008b97c0(param_1,0x3004,"Unknown attribute: 0x%04xX",param_3);
    return 0;
  }
  if (param_3 == 0x33ac) {
    iVar2 = func_0x0092a580();
    if (*(char *)(iVar2 + 0x1b) != '\0') {
      return 1;
    }
    func_0x008b97c0(param_1,0x3004,
                    "Attribute EGL_CONTEXT_WEBGL_COMPATIBILITY_ANGLE requires EGL_ANGLE_create_context_webgl_compatibility."
                   );
    return 0;
  }
  if (0x3138 < param_3) {
    if (param_3 < 0x31be) {
      if (param_3 == 0x31bd) {
        return 1;
      }
      if (param_3 == 0x31b0) {
        return 1;
      }
      if (param_3 == 0x31b3) {
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x14) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,"Invalid Context attribute.");
        return 0;
      }
    }
    else {
      if (param_3 == 0x32c0) {
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x4b) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_PROTECTED_CONTEXT_EXT requires extension EGL_EXT_protected_content."
                       );
        return 0;
      }
      if (param_3 == 0x334c) {
        iVar2 = func_0x0092a580();
        if (*(char *)(iVar2 + 0x46) != '\0') {
          return 1;
        }
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV requires extension EGL_NV_robustness_video_memory_purge."
                       );
        return 0;
      }
    }
    goto LAB_008aead4;
  }
  if (param_3 == 0x3138) {
LAB_008ae71f:
    pcVar1 = (char *)func_0x0092a580();
    if (*pcVar1 == '\0') {
      func_0x008b9d00(0x3004,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
      return 0;
    }
  }
  else {
    switch(param_3) {
    case 0x3098:
    case 0x30fb:
    case 0x30fc:
      break;
    default:
      goto LAB_008aead4;
    case 0x30bf:
      goto LAB_008ae71f;
    case 0x30fd:
      iVar2 = FUN_005db210();
      if (iVar2 != 0x30a2) {
        func_0x008b97c0(param_1,0x3004,"OpenGL profile mask requires an OpenGL context.");
        return 0;
      }
      break;
    case 0x3100:
      iVar2 = func_0x0092a580();
      if (*(char *)(iVar2 + 0x37) == '\0') {
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_CONTEXT_PRIORITY_LEVEL_IMG requires extension EGL_IMG_context_priority."
                       );
        return 0;
      }
    }
  }
  return 1;
}



undefined4 FUN_008b1390(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0092a580();
  if (param_3 < 0x3081) {
    if (((param_3 != 0x3080) && (param_3 != 0x3056)) && ((param_3 != 0x3057 && (param_3 != 0x3058)))
       ) {
LAB_008b13f2:
      func_0x008b9d00(0x3004,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
      return 0;
    }
  }
  else if (param_3 < 0x3089) {
    if ((((param_3 != 0x3088) && (param_3 != 0x3081)) && (param_3 != 0x3082)) && (param_3 != 0x3087)
       ) goto LAB_008b13f2;
  }
  else if (param_3 != 0x309d) {
    if (param_3 == 0x32c0) {
      if (*(char *)(iVar1 + 0x4b) == '\0') {
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_PROTECTED_CONTEXT_EXT requires extension EGL_EXT_protected_content."
                       );
        return 0;
      }
    }
    else {
      if (param_3 != 0x3453) goto LAB_008b13f2;
      if (*(char *)(iVar1 + 0x26) == '\0') {
        func_0x008b97c0(param_1,0x3004,
                        "Attribute EGL_ROBUST_RESOURCE_INITIALIZATION_ANGLE requires EGL_ANGLE_robust_resource_initialization."
                       );
        return 0;
      }
    }
  }
  return 1;
}



void __thiscall FUN_008b9570(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall
FUN_008b9590(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,*param_3,*param_4);
  (*pcVar1)();
  return;
}



TypeDescriptor * FUN_008b97b0(void)

{
  return &TypeDescriptor_012bc368;
}



undefined4 * __thiscall FUN_008b9a70(undefined4 *param_1,byte param_2)

{
  *param_1 = egl::LabeledObject::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008b9aa0(undefined4 *param_1,byte param_2)

{
  *param_1 = egl::LabeledObject::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



void __thiscall FUN_008b9e50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



undefined4 FUN_008bcf70(void)

{
  return 0;
}



undefined4 * __fastcall FUN_008c1280(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = gl::BindingPointer<>::vftable;
  return param_1;
}



undefined4 * __fastcall FUN_008c12d0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



undefined4 __fastcall FUN_008c1380(undefined4 param_1)

{
  func_0x008ab84c(param_1,8,0xb,FUN_008c1280,FUN_008c2420);
  return param_1;
}



void __fastcall FUN_008c2420(undefined4 *param_1)

{
  *param_1 = angle::BindingPointer<>::vftable;
  return;
}



void __fastcall FUN_008c2480(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(param_1,8,0xb,FUN_008c2420,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __thiscall FUN_008c3010(int param_1,byte param_2)

{
  func_0x008c27d0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -4,0x2218);
  }
  return param_1 + -4;
}



undefined4 * __thiscall FUN_008c3020(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008c3050(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 __thiscall FUN_008c3080(undefined4 param_1,byte param_2)

{
  func_0x008c27d0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2218);
  }
  return param_1;
}



undefined4 __thiscall FUN_008c30b0(undefined4 param_1,byte param_2)

{
  func_0x0098f490();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_008c30d0(undefined4 param_1,byte param_2)

{
  func_0x0098ab30();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x400);
  }
  return param_1;
}



undefined4 __thiscall FUN_008c3100(undefined4 param_1,byte param_2)

{
  FUN_00953180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_008c3120(undefined4 param_1,byte param_2)

{
  func_0x00953200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



void FUN_008c4b70(void)

{
  return;
}



undefined4 __fastcall FUN_008ce810(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d18);
}



void __thiscall FUN_008d7270(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int unaff_retaddr;
  
  switch(param_2) {
  case 0x1b0:
    switch(param_3) {
    case 0:
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0x1ffc) = 1;
      *(undefined4 *)(param_1 + 0x2000) = 1;
      return;
    case 1:
      func_0x008f0120(0x8074);
      if (*(char *)(param_1 + 0x1fcd) != '\0') {
        func_0x008dc5a0(param_1 + -4);
      }
      *(undefined4 *)(param_1 + 0x1ffc) = 1;
      return;
    }
    break;
  case 0x1b1:
    if (param_3 == 2) {
      *(uint *)(param_1 + 0x1c90) = *(uint *)(param_1 + 0x1c90) | 0x28;
      return;
    }
    if (param_3 == 7) {
      *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 2;
      return;
    }
    break;
  case 0x1b2:
    if (param_3 == 2) {
      *(uint *)(param_1 + 0x1c90) = *(uint *)(param_1 + 0x1c90) | 0x50;
      *(undefined4 *)(param_1 + 0x1ffc) = 1;
      return;
    }
    if (param_3 == 7) {
      *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 1;
      return;
    }
    break;
  case 0x1b3:
    if (param_3 == 3) {
      iVar1 = func_0x008eddd0(param_1 + -4);
      if (iVar1 != 1) {
        func_0x008d70b0(param_1 + -4);
        return;
      }
    }
    else if (param_3 == 10) {
      func_0x00988aa0(param_1 + -4);
      return;
    }
    break;
  default:
    if (param_2 < 0x60) {
      if ((param_3 != 1) && (param_3 != 0)) {
        func_0x008ed740(param_1 + -4,param_2);
        *(undefined4 *)(param_1 + 0x1ffc) = 1;
        return;
      }
    }
    else if (param_2 < 0xc0) {
      func_0x008ed960(param_1 + -4,param_2 - 0x60);
      if (unaff_retaddr == 1) {
        *(uint *)(param_1 + 0x1c88) = *(uint *)(param_1 + 0x1c88) | 0x40000;
        return;
      }
    }
    else {
      if (param_2 < 0x108) {
        func_0x008ee1a0(param_2 - 0xc0);
        *(undefined4 *)(param_1 + 0x1ffc) = 1;
        return;
      }
      if (param_2 < 0x110) {
        func_0x008ed940(param_2 - 0x108);
        *(undefined4 *)(param_1 + 0x1ffc) = 1;
        return;
      }
      if (param_2 < 0x150) {
        func_0x008ee180(param_2 - 0x110);
        *(undefined4 *)(param_1 + 0x1ffc) = 1;
        return;
      }
      func_0x008f0860(param_2 - 0x150);
      func_0x008ed740(param_1 + -4,param_2 - 0x150);
    }
  }
  return;
}



void __thiscall FUN_008d9860(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d18) = param_2;
  return;
}



undefined4 * __fastcall FUN_008dd320(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = gl::BindingPointer<>::vftable;
  return param_1;
}



void __fastcall FUN_008dd7e0(undefined4 *param_1)

{
  *param_1 = angle::BindingPointer<>::vftable;
  return;
}



undefined4 * __thiscall FUN_008dd9a0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + -6;
  *puVar2 = gl::Texture::vftable;
  *param_1 = gl::Texture::vftable;
  param_1[0xc] = gl::Texture::vftable;
  param_1[0x14] = gl::Texture::vftable;
  if ((undefined4 *)param_1[0x4a] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x4a];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x4a] = 0;
  param_1[0x67] = 0;
  if ((undefined4 *)param_1[0x66] != param_1 + 0x56) {
    func_0x008ab37e((undefined4 *)param_1[0x66]);
  }
  FUN_00953180();
  FUN_00953180();
  func_0x008dd900();
  param_1[0x14] = gl::LabeledObject::vftable;
  func_0x00922c20();
  *puVar2 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x210);
  }
  return puVar2;
}



undefined4 * __thiscall FUN_008dd9b0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + -0x12;
  *puVar2 = gl::Texture::vftable;
  param_1[-0xc] = gl::Texture::vftable;
  *param_1 = gl::Texture::vftable;
  param_1[8] = gl::Texture::vftable;
  if ((undefined4 *)param_1[0x3e] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x3e];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x3e] = 0;
  param_1[0x5b] = 0;
  if ((undefined4 *)param_1[0x5a] != param_1 + 0x4a) {
    func_0x008ab37e((undefined4 *)param_1[0x5a]);
  }
  FUN_00953180();
  FUN_00953180();
  func_0x008dd900();
  param_1[8] = gl::LabeledObject::vftable;
  func_0x00922c20();
  *puVar2 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x210);
  }
  return puVar2;
}



undefined4 * __thiscall FUN_008dd9c0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + -0x1a;
  *puVar2 = gl::Texture::vftable;
  param_1[-0x14] = gl::Texture::vftable;
  param_1[-8] = gl::Texture::vftable;
  *param_1 = gl::Texture::vftable;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x36];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x36] = 0;
  param_1[0x53] = 0;
  if ((undefined4 *)param_1[0x52] != param_1 + 0x42) {
    func_0x008ab37e((undefined4 *)param_1[0x52]);
  }
  FUN_00953180();
  FUN_00953180();
  func_0x008dd900();
  *param_1 = gl::LabeledObject::vftable;
  func_0x00922c20();
  *puVar2 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x210);
  }
  return puVar2;
}



undefined4 * __thiscall FUN_008dd9d0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008dda00(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008dda30(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008dda60(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008dda90(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::LabeledObject::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008ddac0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = gl::Texture::vftable;
  param_1[6] = gl::Texture::vftable;
  param_1[0x12] = gl::Texture::vftable;
  param_1[0x1a] = gl::Texture::vftable;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x50];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x50] = 0;
  param_1[0x6d] = 0;
  if ((undefined4 *)param_1[0x6c] != param_1 + 0x5c) {
    func_0x008ab37e((undefined4 *)param_1[0x6c]);
  }
  FUN_00953180();
  FUN_00953180();
  func_0x008dd900();
  param_1[0x1a] = gl::LabeledObject::vftable;
  func_0x00922c20();
