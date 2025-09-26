{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreatePlatformWindowSurfaceEXT";
      cVar2 = func_0x008b18f0(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a4c70(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00881a50(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_38;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,param_2);
      uStack_30 = func_0x008ad130(param_1);
      pcStack_34 = "eglCreateStreamKHR";
      uStack_38 = uVar5;
      cVar2 = func_0x008b1960(&uStack_38,param_1,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a4da0(uVar5,param_1,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00881b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_3c;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      pcStack_34 = "eglCreateStreamProducerD3DTextureANGLE";
      uStack_38 = uVar5;
      cVar2 = func_0x008b1ab0(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a4eb0(uVar5,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00881c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_3c;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      pcStack_34 = "eglCreateSyncKHR";
      uStack_38 = uVar5;
      cVar2 = func_0x008b2180(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a4fc0(uVar5,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00881ce0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_38;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,param_2);
      pcStack_34 = "eglDebugMessageControlKHR";
      uStack_30 = 0;
      uStack_38 = uVar5;
      cVar2 = func_0x008b25e0(&uStack_38,param_1,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a50e0(uVar5,param_1,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00881db0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDestroyImageKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b2880(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a5110(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00881e60(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDestroyStreamKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b29a0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a51d0(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00881f10(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDestroySyncKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008ada00(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a5280(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00881fc0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDupNativeFenceFDANDROID";
      uStack_c = uVar5;
      cVar2 = func_0x008b2ba0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a5330(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00882070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglExportVkImageANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b2ce0(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a5450(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00882130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglForceGPUSwitchANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b2e30(&uStack_c,param_1,param_2,param_3);
      if (cVar2 != '\0') {
        func_0x008a5580(uVar5,param_1,param_2,param_3);
      }
      func_0x00e730b2(iVar3);
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4
FUN_008821d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_008822b1;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_008822a6;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetCompositorTimingANDROID";
      uStack_c = uVar5;
      cVar2 = func_0x008b2ef0(&uStack_c,param_1,param_2,param_3,param_4,param_5);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a5690(uVar5,param_1,param_2,param_3,param_4,param_5);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_008822a6:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_008822b1:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008822c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar4 = func_0x008aaf40();
  iVar5 = func_0x00e7307f(iVar4);
  if (iVar5 == 0) {
    if (*(int *)(iVar4 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar4 + 0x2c) = 0x7ffffffe;
      goto LAB_0088239e;
    }
    unaff_EDI = func_0x008aaf20();
    iVar5 = func_0x00e7307f(unaff_EDI);
    if (iVar5 != 0) goto LAB_00882393;
    iVar5 = *(int *)(unaff_EDI + 0x2c);
    if (iVar5 != 0x7fffffff) {
      uVar6 = func_0x008aae70();
      uVar2 = func_0x008b9840(param_3);
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetCompositorTimingSupportedANDROID";
      uStack_c = uVar6;
      cVar3 = func_0x008b3110(&uStack_c,param_1,param_2,uVar2);
      if (cVar3 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x008a57b0(uVar6,param_1,param_2,uVar2);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar4);
      return uVar6;
    }
  }
  else {
LAB_00882393:
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar5 + -1;
LAB_0088239e:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}



undefined4 FUN_008823b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar4 = func_0x008aaf40();
  iVar5 = func_0x00e7307f(iVar4);
  if (iVar5 == 0) {
    if (*(int *)(iVar4 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar4 + 0x2c) = 0x7ffffffe;
      goto LAB_0088248e;
    }
    unaff_EDI = func_0x008aaf20();
    iVar5 = func_0x00e7307f(unaff_EDI);
    if (iVar5 != 0) goto LAB_00882483;
    iVar5 = *(int *)(unaff_EDI + 0x2c);
    if (iVar5 != 0x7fffffff) {
      uVar6 = func_0x008aae70();
      uVar2 = func_0x008b9930(param_3);
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetFrameTimestampSupportedANDROID";
      uStack_c = uVar6;
      cVar3 = func_0x008b3490(&uStack_c,param_1,param_2,uVar2);
      if (cVar3 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x008a57f0(uVar6,param_1,param_2,uVar2);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar4);
      return uVar6;
    }
  }
  else {
LAB_00882483:
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar5 + -1;
LAB_0088248e:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}



undefined4
FUN_008824a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00882591;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00882586;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetFrameTimestampsANDROID";
      uStack_c = uVar5;
      cVar2 = func_0x008b3600(&uStack_c,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a58c0(uVar5,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00882586:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00882591:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008825a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00882675;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_0088266a;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetMscRateANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b3840(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a59f0(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_0088266a:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00882675:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00882680(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglGetNativeClientBufferANDROID";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b39a0(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a5b10(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00882720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_008827e9;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_008827de;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetNextFrameIdANDROID";
      uStack_c = uVar5;
      cVar2 = func_0x008b39d0(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a5b30(uVar5,param_1,param_2,param_3);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_008827de:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_008827e9:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00882800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_3c;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      pcStack_34 = "eglGetPlatformDisplayEXT";
      uStack_30 = 0;
      uStack_38 = uVar5;
      cVar2 = func_0x008b3b30(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a5c50(uVar5,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_008828e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetSyncAttribKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b46d0(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a5d70(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4
FUN_008829a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00882a81;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00882a76;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetSyncValuesCHROMIUM";
      uStack_c = uVar5;
      cVar2 = func_0x008b4850(&uStack_c,param_1,param_2,param_3,param_4,param_5);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a5e90(uVar5,param_1,param_2,param_3,param_4,param_5);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00882a76:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00882a81:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00882a90(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglHandleGPUSwitchANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b2e30(&uStack_c,param_1);
      if (cVar2 != '\0') {
        func_0x008a5fb0(uVar5,param_1);
      }
      func_0x00e730b2(iVar3);
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00882b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar4 = func_0x008aaf20();
  iVar5 = func_0x00e7307f(iVar4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar4 + 0x2c);
    if (iVar5 != 0x7fffffff) {
      uVar6 = func_0x008aae70();
      uVar2 = func_0x008b98b0(param_2);
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglLabelObjectKHR";
      uStack_c = uVar6;
      cVar3 = func_0x008b4a30(&uStack_c,param_1,uVar2,param_3,param_4);
      if (cVar3 == '\0') {
        uVar6 = FUN_004b5b20();
      }
      else {
        uVar6 = func_0x008a60b0(uVar6,param_1,uVar2,param_3,param_4);
      }
      func_0x00e730b2(iVar4);
      return uVar6;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(iVar4 + 0x2c) = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}



void FUN_00882be0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00882cef;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00882ce4;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglLockSurfaceKHR";
      cVar2 = func_0x008b4e10(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a6100(uStack_40,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
LAB_00882ce4:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00882cef:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4
FUN_00882d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00882de9;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00882dde;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglPostSubBufferNV";
      uStack_c = uVar5;
      cVar2 = func_0x008b53f0(&uStack_c,param_1,param_2,param_3,param_4,param_5,param_6);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a6220(uVar5,param_1,param_2,param_3,param_4,param_5,param_6);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00882dde:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00882de9:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00882e00(undefined4 param_1,undefined4 param_2)

{
  func_0x008a6340(param_1,param_2);
  return;
}



undefined4 FUN_00882e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00882ef5;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00882eea;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglPresentationTimeANDROID";
      uStack_c = uVar5;
      cVar2 = func_0x008b55c0(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a6510(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00882eea:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00882ef5:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00882f00(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglProgramCacheGetAttribANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b5700(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a6620(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00882fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglProgramCachePopulateANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b5810(&uStack_c,param_1,param_2,param_3,param_4,param_5);
      if (cVar2 != '\0') {
        func_0x008a66d0(uVar5,param_1,param_2,param_3,param_4,param_5);
      }
      func_0x00e730b2(iVar3);
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00883060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglProgramCacheQueryANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b5970(&uStack_c,param_1,param_2,param_3,param_4,param_5,param_6);
      if (cVar2 != '\0') {
        func_0x008a67e0(uVar5,param_1,param_2,param_3,param_4,param_5,param_6);
      }
      func_0x00e730b2(iVar3);
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00883120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglProgramCacheResizeANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b5b10(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a68f0(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008831e0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglQueryDebugKHR";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b5df0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a69a0(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglQueryDeviceAttribEXT";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b5e60(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a6a20(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883350(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglQueryDeviceStringEXT";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b5fe0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a6ad0(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryDisplayAttribANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b6030(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a6d90(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008834c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryDisplayAttribEXT";
      uStack_c = uVar5;
      cVar2 = func_0x008b6030(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a6d90(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryDmaBufFormatsEXT";
      uStack_c = uVar5;
      cVar2 = func_0x008b6150(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a6e50(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4
FUN_00883640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryDmaBufModifiersEXT";
      uStack_c = uVar5;
      cVar2 = func_0x008b6270(&uStack_c,param_1,param_2,param_3,param_4,param_5,param_6);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a6f60(uVar5,param_1,param_2,param_3,param_4,param_5,param_6);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryStreamKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b63c0(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a7080(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008837d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryStreamu64KHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b6530(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a7160(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryStringiANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b67d0(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a7230(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00883a25;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00883a1a;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQuerySurface64KHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b6950(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a72e0(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00883a1a:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00883a25:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00883b05;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00883afa;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQuerySurfacePointerANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b6f60(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a7410(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00883afa:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00883b05:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00883b10(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglReacquireHighPowerGPUANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b26a0(&uStack_c,param_1,param_2);
      if (cVar2 != '\0') {
        func_0x008a7520(uVar5,param_1,param_2);
      }
      func_0x00e730b2(iVar3);
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00883ba0(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglReleaseDeviceANGLE";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b70f0(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a7630(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00883c40(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglReleaseHighPowerGPUANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b26a0(&uStack_c,param_1,param_2);
      if (cVar2 != '\0') {
        func_0x008a7660(uVar5,param_1,param_2);
      }
      func_0x00e730b2(iVar3);
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00883cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSetBlobCacheFuncsANDROID";
      uStack_c = uVar5;
      cVar2 = func_0x008b72e0(&uStack_c,param_1,param_2,param_3);
      if (cVar2 != '\0') {
        func_0x008a7770(uVar5,param_1,param_2,param_3);
      }
      func_0x00e730b2(iVar3);
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00883d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00883e45;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00883e3a;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSetDamageRegionKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b73f0(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a7820(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00883e3a:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00883e45:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883e50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSignalSyncKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b75d0(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a78f0(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglStreamAttribKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b7770(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a79b0(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00883fd0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglStreamConsumerAcquireKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b79b0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a7a80(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00884080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_3c;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      pcStack_34 = "eglStreamConsumerGLTextureExternalAttribsNV";
      uStack_38 = uVar5;
      cVar2 = func_0x008b7bc0(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a7ba0(uVar5,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00884160(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglStreamConsumerGLTextureExternalKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b80a0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a7ce0(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00884210(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglStreamConsumerReleaseKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b79b0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a7e10(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_008842c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglStreamPostD3DTextureANGLE";
      cVar2 = func_0x008b8260(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a7f40(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_008843b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008a6340(param_1,param_2);
  if (iVar3 != 1) {
    return iVar3;
  }
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_0088449b;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00884490;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSwapBuffersWithDamageKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b8a70(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = func_0x008a8050(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return iVar4;
    }
  }
  else {
LAB_00884490:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_0088449b:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



int FUN_008844b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008a6340(param_1,param_2);
  if (iVar3 != 1) {
    return iVar3;
  }
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_0088459b;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00884590;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSwapBuffersWithFrameTokenANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008b8c10(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = func_0x008a8180(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return iVar4;
    }
  }
  else {
LAB_00884590:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_0088459b:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



undefined4 FUN_008845b0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00884671;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00884666;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglUnlockSurfaceKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b8e50(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a82b0(uVar5,param_1,param_2);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00884666:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00884671:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00884680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglWaitSyncKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008b9320(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a83d0(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_008848e0(void)

{
  code *pcVar1;
  
  func_0x008ab088(0,0,0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_008848f0(undefined4 param_1,undefined4 param_2)

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
  uVar2 = func_0x008b9e70(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0xe6), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bd7f0(iVar1,0xe6,uVar2,param_2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bb1f0(uVar2,param_2);
  return;
}



void FUN_008849a0(undefined4 param_1,undefined4 param_2)

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
  uVar2 = func_0x008b9e70(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0xe7), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bd7f0(iVar1,0xe7,uVar2,param_2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bb210(uVar2,param_2);
  return;
}



void FUN_00884a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x13d), cVar2 != '\0'))
           && (cVar2 = func_0x008bda90(iVar1,0x13d,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008bb240(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_00884ae0(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x140), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x140,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb2b0(param_1);
  return;
}



void FUN_00884b60(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x14b), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bdad0(iVar1,0x14b,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb2f0(param_1);
  return;
}



void FUN_00884be0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x150), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bdc30(iVar1,0x150,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb320(param_1,param_2);
  return;
}



void FUN_00884c70(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x151), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bdc30(iVar1,0x151,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb340(param_1,param_2);
  return;
}



void FUN_00884d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x166), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x166,param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb3d0(param_1,param_2,param_3,param_4);
  return;
}



void FUN_00884de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x16c), cVar2 != '\0'))
           && (cVar2 = func_0x008bda90(iVar1,0x16c,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008bb420(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_00884e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x172), cVar2 != '\0'))
           && (cVar2 = func_0x008bda90(iVar1,0x172,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008bb4a0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_00884f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if (iVar1 != 0) {
    uVar3 = func_0x00884740(param_2);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x17c), cVar2 != '\0')) &&
        (cVar2 = func_0x008bdc50(iVar1,0x17c,param_1,uVar3,param_3,param_4), cVar2 != '\0')))) {
      func_0x008bb510(param_1,uVar3,param_3,param_4);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_00884fd0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1d4), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bdcc0(iVar1,0x1d4,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb550(param_1,param_2);
  return;
}



void FUN_00885060(undefined4 param_1)

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
  uVar2 = func_0x008b9fd0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x1d7), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bdd30(iVar1,0x1d7,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bb5c0(uVar2);
  return;
}



void FUN_008850f0(undefined4 param_1)

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
  uVar2 = func_0x008b9fd0(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x008bdd30(iVar1,0x215,uVar2), cVar3 == '\0')) {
    return;
  }
  func_0x008bb930(uVar2);
  return;
}



void FUN_00885170(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x23d), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008be250(iVar1,0x23d,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb970(param_1,param_2);
  return;
}



void FUN_00885210(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x23e), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008be270(iVar1,0x23e,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb990(param_1,param_2);
  return;
}



void FUN_008852a0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x241), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008be280(iVar1,0x241,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bb9b0(param_1,param_2);
  return;
}



void FUN_00885330(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x242), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008be2f0(iVar1,0x242,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bba30(param_1,param_2);
  return;
}



void FUN_008853c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x25a), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008be750(iVar1,0x25a,param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bbb90(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_008854d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x25b), cVar2 != '\0'))
           && (cVar2 = func_0x008be7f0(iVar1,0x25b,param_1,param_2,param_3,param_4,param_5,param_6),
              cVar2 != '\0')))) {
    func_0x008bbc70(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_00885590(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x008bdc30(iVar1,0x28b,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008bbd80(param_1,param_2);
  return;
}



void FUN_00885600(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x008bdc30(iVar1,0x28c,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008bbda0(param_1,param_2);
  return;
}



void FUN_00885670(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x008be8a0(iVar1,0x297,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008bbe50(param_1,param_2);
  return;
}



void FUN_008856e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba1d0(param_2);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x008be940(iVar1,0x2b4,param_1,uVar2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008bc030(param_1,uVar2,param_3);
  return;
}



void FUN_00885770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba1d0(param_2);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x008be940(iVar1,0x2b6,param_1,uVar2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008bc050(param_1,uVar2,param_3);
  return;
}



void FUN_00885800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba2d0(param_2);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x008be970(iVar1,0x2ba,param_1,uVar2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008bc110(param_1,uVar2,param_3);
  return;
}



void FUN_00885890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba2d0(param_2);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x008be970(iVar1,700,param_1,uVar2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008bc130(param_1,uVar2,param_3);
  return;
}



void FUN_00885920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar4 = func_0x008bea90(iVar1,0x31b,uVar2,uVar3,param_3), cVar4 == '\0')) {
    return;
  }
  func_0x008bc1f0(uVar2,uVar3,param_3);
  return;
}



void FUN_008859c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar4 = func_0x008bea90(iVar1,0x31c,uVar2,uVar3,param_3), cVar4 == '\0')) {
    return;
  }
  func_0x008bc220(uVar2,uVar3,param_3);
  return;
}



void FUN_00885a60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar4 = func_0x008bea90(iVar1,0x31d,uVar2,uVar3,param_3), cVar4 == '\0')) {
    return;
  }
  func_0x008bc280(uVar2,uVar3,param_3);
  return;
}



void FUN_00885b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x008beab0(iVar1,0x338,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008bc2e0(uVar2,param_2,param_3);
  return;
}



void FUN_00885b90(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3b0), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008becc0(iVar1,0x3b0,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc310(param_1,param_2);
  return;
}



void FUN_00885c30(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3b1), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bed00(iVar1,0x3b1,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc330(param_1,param_2);
  return;
}



void FUN_00885cc0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3b4), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008becc0(iVar1,0x3b4,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc350(param_1,param_2);
  return;
}



void FUN_00885d50(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3b5), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bed00(iVar1,0x3b5,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc390(param_1,param_2);
  return;
}



void FUN_00885de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba1d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3b6), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bed20(iVar1,0x3b6,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc410(param_1,uVar2,param_3);
  return;
}



void FUN_00885e90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba1d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3b7), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bed80(iVar1,0x3b7,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc430(param_1,uVar2,param_3);
  return;
}



void FUN_00885f30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba1d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3ba), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bed90(iVar1,0x3ba,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc450(param_1,uVar2,param_3);
  return;
}



void FUN_00885fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba1d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3bb), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bee00(iVar1,0x3bb,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc490(param_1,uVar2,param_3);
  return;
}



void FUN_00886070(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3be), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bef90(iVar1,0x3be,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc520(param_1);
  return;
}



void FUN_008860f0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  int *unaff_FS_OFFSET;
  int in_stack_ffffffdc;
  int iStack_1c;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar4 + 0x18) == '\0') {
    uStack_8 = 0x88610e;
    func_0x008abb44();
  }
  iVar4 = *(int *)(iVar4 + 0xa8);
  if (iVar4 == 0) {
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00f3c904;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar4 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar4 + 0x10) == 0) {
      iVar3 = func_0x008ab47d(0x14,uVar5);
      uStack_8 = 0;
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x008b9a30();
      }
      uStack_8 = 0xffffffff;
      if (*(char *)(iVar4 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar4 + 0x10) = uVar6;
      if (*(char *)(iVar4 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar4 + 0xa8) = 0;
    }
    if (*(char *)(iVar4 + 0x18) == '\0') {
      func_0x008abb44();
    }
    iVar4 = FUN_00472c50();
    if ((iVar4 != 0) && (*(char *)(iVar4 + 0x1fb9) != '\0')) {
      func_0x008dc860(0,0x507,"Context has been lost.");
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (*(char *)(iVar4 + 0x1d01) == '\0') {
    if (*(int *)(iVar4 + 0x18c0) != 0) {
      uStack_8 = 0x3c1;
      iStack_10 = 0x886135;
      puStack_c = (undefined *)iVar4;
      cVar2 = func_0x008bd7d0();
      if (cVar2 == '\0') {
        return;
      }
    }
    uStack_8 = 0x3c1;
    iStack_10 = 0x886147;
    puStack_c = (undefined *)iVar4;
    cVar2 = func_0x008bda90();
    if (cVar2 == '\0') {
      return;
    }
  }
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cb7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar6 = FUN_0094d740(uVar5,unaff_ESI);
  uStack_8 = 0;
  func_0x00950320(uVar6);
  if (in_stack_ffffffdc != 0) {
    uVar5 = iStack_1c - in_stack_ffffffdc & 0xfffffffc;
    iVar4 = in_stack_ffffffdc;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(in_stack_ffffffdc + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (in_stack_ffffffdc - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00886160(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3c3), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x3c3,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc5e0(param_1);
  return;
}



void FUN_008861e0(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3c4), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x3c4,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc680(param_1);
  return;
}



void FUN_00886260(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3c9), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008beff0(iVar1,0x3c9,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc720(uVar2);
  return;
}



void FUN_008862f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba2d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3da), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf1d0(iVar1,0x3da,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc730(param_1,uVar2,param_3);
  return;
}



void FUN_008863a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba2d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3db), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf230(iVar1,0x3db,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc750(param_1,uVar2,param_3);
  return;
}



void FUN_00886440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba2d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3de), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf240(iVar1,0x3de,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc770(param_1,uVar2,param_3);
  return;
}



void FUN_008864e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba2d0(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3df), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf2b0(iVar1,0x3df,param_1,uVar2,param_3);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc7b0(param_1,uVar2,param_3);
  return;
}



void FUN_00886580(undefined4 param_1)

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
  uVar2 = func_0x008ba310(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x3e1), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf3b0(iVar1,0x3e1,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bc840(uVar2);
  return;
}



void FUN_00886610(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3e9), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x3e9,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc850(param_1);
  return;
}



void FUN_00886690(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3ea), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x3ea,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc8f0(param_1);
  return;
}



void FUN_00886710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x417), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bdad0(iVar1,0x417,param_1,param_2,param_3,param_4,param_5);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bc990(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00886800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x41d), cVar2 != '\0'))
           && (cVar2 = func_0x008bdad0(iVar1,0x41d,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    func_0x008bca00(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_008868b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x438), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x438,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bca90(param_1,param_2,param_3);
  return;
}



void FUN_00886980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x43e), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x43e,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bcaf0(param_1,param_2,param_3);
  return;
}



void FUN_00886a10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (iVar1 != 0) {
    uVar3 = func_0x00884740(param_1);
    if (*(char *)(iVar1 + 0x1d01) == '\0') {
      if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x441), cVar2 == '\0'))
      {
        return;
      }
      cVar2 = func_0x008bf420(iVar1,0x441,uVar3,param_2,param_3);
      if (cVar2 == '\0') {
        return;
      }
    }
    func_0x008bcb60(uVar3,param_2,param_3);
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_00886ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x447), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bf450(iVar1,0x447,param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bcb90(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_00886bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x448), cVar2 != '\0'))
           && (cVar2 = func_0x008bf4e0(iVar1,0x448,param_1,param_2,param_3,param_4,param_5,param_6),
              cVar2 != '\0')))) {
    func_0x008bcc70(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



void FUN_00886c80(undefined4 param_1,undefined4 param_2)

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
  uVar2 = func_0x008ba340(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x457), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf620(iVar1,0x457,uVar2,param_2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bcd80(uVar2,param_2);
  return;
}



void FUN_00886d30(undefined4 param_1,undefined4 param_2)

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
  uVar2 = func_0x008ba340(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x458), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf670(iVar1,0x458,uVar2,param_2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bcda0(uVar2,param_2);
  return;
}



void FUN_00886dd0(undefined4 param_1,undefined4 param_2)

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
  uVar2 = func_0x008ba340(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x45b), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf680(iVar1,0x45b,uVar2,param_2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bcdc0(uVar2,param_2);
  return;
}



void FUN_00886e70(undefined4 param_1,undefined4 param_2)

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
  uVar2 = func_0x008ba340(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x45c), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bf6e0(iVar1,0x45c,uVar2,param_2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bce00(uVar2,param_2);
  return;
}



void FUN_00886f10(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x45d), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bf800(iVar1,0x45d,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bce90(param_1);
  return;
}



void FUN_00886fa0(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x45f), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bf890(iVar1,0x45f,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bcee0(param_1);
  return;
}



void FUN_00887020(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x463), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x463,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bcf10(param_1,param_2);
  return;
}



void FUN_008870b0(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar6 + 0x18) == '\0') {
    uStack_8 = 0x8870ce;
    func_0x008abb44();
  }
  iVar6 = *(int *)(iVar6 + 0xa8);
  if (iVar6 == 0) {
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00f3c904;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar6 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar6 + 0x10) == 0) {
      iVar4 = func_0x008ab47d(0x14,uVar3);
      uStack_8 = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008b9a30();
      }
      uStack_8 = 0xffffffff;
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
      uStack_8 = 0x46a;
      iStack_10 = 0x8870f5;
      puStack_c = (undefined *)iVar6;
      cVar2 = func_0x008bd7d0();
      if (cVar2 == '\0') {
        return;
      }
    }
    uStack_8 = 0x46a;
    iStack_10 = 0x887107;
    puStack_c = (undefined *)iVar6;
    cVar2 = func_0x008bf910();
    if (cVar2 == '\0') {
      return;
    }
  }
  *(uint *)(iVar6 + 0x18c8) = *(uint *)(iVar6 + 0x18c8) | 0x20;
  cVar2 = *(char *)(iVar6 + 0x1924);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      *(int *)(iVar6 + 0x1a68) = *(int *)(iVar6 + 0x1a68) + -1;
      return;
    }
    if (cVar2 == '\x02') {
      piVar1 = (int *)(*(int *)(*(int *)(iVar6 + 0x18c4) + 0x1514) * 0x144 +
                       *(int *)(iVar6 + 0x1bb0) + 0x140);
      *piVar1 = *piVar1 + -1;
      return;
    }
  }
  *(int *)(iVar6 + 0x1bac) = *(int *)(iVar6 + 0x1bac) + -1;
  return;
}



void FUN_00887120(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  
  iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar5 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar5 = *(int *)(iVar5 + 0xa8);
  if (iVar5 == 0) {
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar5 + 0x10) == 0) {
      iVar3 = func_0x008ab47d(0x14,uVar2);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = func_0x008b9a30();
      }
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
      iStack_10 = 0x887165;
      cVar1 = func_0x008bd7d0();
      if (cVar1 == '\0') {
        return;
      }
    }
    iStack_10 = 0x887177;
    cVar1 = func_0x008bf980();
    if (cVar1 == '\0') {
      return;
    }
  }
  *(uint *)(iVar5 + 0x18c8) = *(uint *)(iVar5 + 0x18c8) | 0x20;
  cVar1 = *(char *)(iVar5 + 0x1924);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar5 = iVar5 + 0x1928;
      goto LAB_009505e9;
    }
    if (cVar1 == '\x02') {
      iVar5 = *(int *)(*(int *)(iVar5 + 0x18c4) + 0x1514) * 0x144 + *(int *)(iVar5 + 0x1bb0);
      goto LAB_009505e9;
    }
  }
  iVar5 = iVar5 + 0x1a6c;
LAB_009505e9:
  iVar3 = iVar5 + *(int *)(iVar5 + 0x140) * 0x14;
  iStack_10 = iVar3 + -0x14;
  func_0x0094f650();
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar3 + -8);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + -4);
  *(int *)(iVar5 + 0x140) = *(int *)(iVar5 + 0x140) + 1;
  return;
}



void FUN_00887190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x505), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x505,param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bcf80(param_1,param_2,param_3,param_4);
  return;
}



void FUN_00887270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x506), cVar2 != '\0'))
           && (cVar2 = func_0x008bda90(iVar1,0x506,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008bd050(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_00887310(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x508), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x508,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bd140(param_1,param_2);
  return;
}



void FUN_008873a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x51a), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x51a,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bd180(param_1,param_2,param_3);
  return;
}



void FUN_00887470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x51b), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x51b,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bd250(param_1,param_2,param_3);
  return;
}



void FUN_00887500(undefined4 param_1)

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
  uVar2 = func_0x008ba450(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x537), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x008bfa40(iVar1,0x537,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008bd330(uVar2);
  return;
}



void FUN_00887590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if (iVar1 != 0) {
    uVar3 = func_0x00884740(param_2);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x573), cVar2 != '\0')) &&
        (cVar2 = func_0x008bfaa0(iVar1,0x573,param_1,uVar3,param_3,param_4), cVar2 != '\0')))) {
      func_0x008bd340(param_1,uVar3,param_3,param_4);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_00887640(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar4 = func_0x008bd7d0(iVar1,0x574), cVar4 == '\0')) {
      return;
    }
    cVar4 = func_0x008bfd90(iVar1,0x574,uVar2,uVar3,param_3);
    if (cVar4 == '\0') {
      return;
    }
  }
  func_0x008bd380(uVar2,uVar3,param_3);
  return;
}



void FUN_00887710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar4 = func_0x008bd7d0(iVar1,0x575), cVar4 == '\0')) {
      return;
    }
    cVar4 = func_0x008bfdb0(iVar1,0x575,uVar2,uVar3,param_3);
    if (cVar4 == '\0') {
      return;
    }
  }
  func_0x008bd3b0(uVar2,uVar3,param_3);
  return;
}



void FUN_008877c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar4 = func_0x008bd7d0(iVar1,0x576), cVar4 == '\0')) {
      return;
    }
    cVar4 = func_0x008bfdc0(iVar1,0x576,uVar2,uVar3,param_3);
    if (cVar4 == '\0') {
      return;
    }
  }
  func_0x008bd3e0(uVar2,uVar3,param_3);
  return;
}



void FUN_00887870(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar4 = func_0x008bd7d0(iVar1,0x577), cVar4 == '\0')) {
      return;
    }
    cVar4 = func_0x008bfdf0(iVar1,0x577,uVar2,uVar3,param_3);
    if (cVar4 == '\0') {
      return;
    }
  }
  func_0x008bd440(uVar2,uVar3,param_3);
  return;
}



void FUN_00887920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar4 = func_0x008bd7d0(iVar1,0x578), cVar4 == '\0')) {
      return;
    }
    cVar4 = func_0x008c0090(iVar1,0x578,uVar2,uVar3,param_3);
    if (cVar4 == '\0') {
      return;
    }
  }
  func_0x008bd4a0(uVar2,uVar3,param_3);
  return;
}



void FUN_008879d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uVar2 = func_0x008ba670(param_1);
  uVar3 = func_0x008ba580(param_2);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar4 = func_0x008bd7d0(iVar1,0x579), cVar4 == '\0')) {
      return;
    }
    cVar4 = func_0x008c0130(iVar1,0x579,uVar2,uVar3,param_3);
    if (cVar4 == '\0') {
      return;
    }
  }
  func_0x008bd500(uVar2,uVar3,param_3);
  return;
}



void FUN_00887a80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x008c01d0(iVar1,0x59d,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008bd560(uVar2,param_2,param_3);
  return;
}



void FUN_00887b10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x008c0250(iVar1,0x59e,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008bd590(uVar2,param_2,param_3);
  return;
}



void FUN_00887ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x5cd), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x5cd,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bd5c0(param_1,param_2,param_3);
  return;
}



void FUN_00887c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x5ce), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x008bda90(iVar1,0x5ce,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008bd690(param_1,param_2,param_3);
  return;
}



void FUN_00887d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if (iVar1 != 0) {
    uVar3 = func_0x00884740(param_2);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x685), cVar2 != '\0')) &&
        (cVar2 = func_0x008c02d0(iVar1,0x685,param_1,uVar3,param_3,param_4), cVar2 != '\0')))) {
      func_0x008bd790(param_1,uVar3,param_3,param_4);
    }
    return;
  }
  func_0x008aad80();
  return;
}



void FUN_008888c0(undefined4 param_1)

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
     (cVar2 = func_0x00909f80(iVar1,0xe5,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008c3ad0(param_1);
  return;
}



void FUN_00888920(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0xea), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x00909fd0(iVar1,0xea,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c3b90(param_1,param_2);
  return;
}



void FUN_008889b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0xf3), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090a040(iVar1,0xf3,param_1,param_2,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c3da0(param_1,param_2,param_3);
  return;
}



void FUN_00888a40(undefined4 param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  bool bVar9;
  uint uStack_8;
  int iStack_4;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  bVar3 = func_0x008b9ec0(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(uint *)(iVar1 + 0x1d10) & 1 << (bVar3 & 0x1f)) == 0) {
      uVar4 = 0x500;
      pcVar6 = "Invalid buffer target.";
LAB_00888afc:
      func_0x008dc860(0xf4,uVar4,pcVar6);
      return;
    }
    if ((*(char *)(iVar1 + 0x14c0) == '\0') && (param_2 != 0)) {
      iVar8 = *(int *)(iVar1 + 0x1364);
      uStack_8 = param_2;
      if (param_2 < *(uint *)(iVar8 + 0x2c)) {
        bVar9 = *(int *)(*(int *)(iVar8 + 0x30) + param_2 * 4) == -1;
      }
      else {
        piVar5 = (int *)func_0x00888200(&iStack_4,&uStack_8);
        bVar9 = *piVar5 == *(int *)(iVar8 + 0x38);
      }
      if (bVar9) {
        uVar4 = 0x502;
        pcVar6 = "Object cannot be used because it has not been generated.";
        goto LAB_00888afc;
      }
    }
  }
  iVar8 = *(int *)(iVar1 + 0x1364);
  uStack_8 = param_2;
  if (param_2 < *(uint *)(iVar8 + 0x2c)) {
    iVar8 = *(int *)(*(int *)(iVar8 + 0x30) + param_2 * 4);
    if (iVar8 == -1) {
      iVar8 = 0;
    }
LAB_00888b50:
    if (iVar8 != 0) goto LAB_00888b6c;
  }
  else {
    func_0x00888200(&iStack_4,&uStack_8);
    if (iStack_4 != *(int *)(iVar8 + 0x38)) {
      iVar8 = *(int *)(iStack_4 + 0xc);
      goto LAB_00888b50;
    }
  }
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = func_0x00888080(*(undefined4 *)(iVar1 + 0x1d14),param_2);
  }
LAB_00888b6c:
  if (bVar3 == 6) {
    iVar7 = *(int *)(*(int *)(iVar1 + 0x1514) + 100);
  }
  else {
    iVar7 = *(int *)(iVar1 + 0x1790 + (uint)bVar3 * 8);
  }
  if (iVar8 == iVar7) {
    return;
  }
  pcVar2 = *(code **)(&DAT_013ddbd8 + (uint)bVar3 * 4);
  _guard_check_icall(iVar1,iVar8);
  (*pcVar2)();
  func_0x008dbce0();
  func_0x008dbcd0();
  return;
}



void FUN_00888be0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0xfd), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090a150(iVar1,0xfd,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c40c0(param_1,param_2);
  return;
}



void FUN_00888c70(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x103), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090a160(iVar1,0x103,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c42a0(param_1,param_2);
  return;
}



void FUN_00888d00(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int unaff_FS_OFFSET;
  bool bVar8;
  uint uStack_c;
  int iStack_8;
  uint uStack_4;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (iVar1 == 0) {
    func_0x008aad80();
    return;
  }
  bVar3 = func_0x008ba7f0(param_1);
  if (*(char *)(iVar1 + 0x1d01) != '\0') goto LAB_00888e6d;
  uStack_4 = (uint)bVar3;
  if (*(char *)(uStack_4 + 0x2034 + iVar1) == '\0') {
    func_0x009096f0(iVar1,0x107,bVar3);
    return;
  }
  if (param_2 == 0) goto LAB_00888e6d;
  iVar2 = *(int *)(iVar1 + 0x136c);
  uStack_c = param_2;
  uVar7 = *(uint *)(iVar2 + 0x2c);
  if (param_2 < uVar7) {
    iVar6 = *(int *)(*(int *)(iVar2 + 0x30) + param_2 * 4);
    if (iVar6 == -1) {
      iVar6 = 0;
    }
LAB_00888dcd:
    if ((iVar6 != 0) && (*(byte *)(iVar6 + 0x6c) != bVar3)) {
      puVar4 = (undefined4 *)FUN_008dfa10();
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      func_0x008dc960(iVar1,0x107,0x502,
                      "Textarget must match the texture target type. Requested: %d Texture\'s: %d label: %s"
                      ,uStack_4,*(undefined1 *)(iVar6 + 0x6c),puVar4);
      return;
    }
    uVar7 = *(uint *)(iVar2 + 0x2c);
  }
  else {
    func_0x00888200(&iStack_8,&uStack_c);
    if (iStack_8 != *(int *)(iVar2 + 0x38)) {
      iVar6 = *(int *)(iStack_8 + 0xc);
      goto LAB_00888dcd;
    }
  }
  if (*(char *)(iVar1 + 0x14c0) == '\0') {
    uStack_4 = param_2;
    if (param_2 < uVar7) {
      bVar8 = *(int *)(*(int *)(iVar2 + 0x30) + param_2 * 4) == -1;
    }
    else {
      piVar5 = (int *)func_0x00888200(&iStack_8,&uStack_4);
      bVar8 = *piVar5 == *(int *)(iVar2 + 0x38);
    }
    if (bVar8) {
      func_0x008dc860(0x107,0x502,"Object cannot be used because it has not been generated.");
      return;
    }
  }
LAB_00888e6d:
  func_0x008c43a0(bVar3,param_2);
  return;
}



void FUN_00888e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x113), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x113,param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c4800(param_1,param_2,param_3,param_4);
  return;
}



void FUN_00888f70(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x114), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090a2e0(iVar1,0x114,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c4840(param_1);
  return;
}



void FUN_00888ff0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x115), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090a3a0(iVar1,0x115,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c4860(param_1,param_2);
  return;
}



void FUN_00889080(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x11c), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090a440(iVar1,0x11c,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c48c0(param_1,param_2);
  return;
}



void FUN_00889110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x11d), cVar2 != '\0'))
           && (cVar2 = func_0x0090a460(iVar1,0x11d,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008c48e0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_008891b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  }
  else {
    uVar2 = func_0x008b9ec0(param_1);
    uVar3 = func_0x008b9f70(param_4);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (cVar4 = func_0x0090aa40(iVar1,0x128,uVar2,param_2,param_3,uVar3), cVar4 != '\0')) {
      func_0x008c4ab0(uVar2,param_2,param_3,uVar3);
      return;
    }
  }
  return;
}



void FUN_00889250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
       (cVar3 = func_0x0090ab80(iVar1,0x12d,uVar2,param_2,param_3,param_4), cVar3 != '\0')) {
      func_0x008c4b80(uVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



undefined4 FUN_008892e0(undefined4 param_1)

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
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0090ad00(iVar1,0x130,param_1), cVar2 == '\0')) {
    return 0;
  }
  uVar3 = func_0x008c4c50(param_1);
  return uVar3;
}



void FUN_00889350(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x134), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090ad40(iVar1,0x134,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c4d80(param_1);
  return;
}



void FUN_008893d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x13c), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x13c,param_1,param_2,param_3,param_4);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c5100(param_1,param_2,param_3,param_4);
  return;
}



void FUN_008894b0(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x13f), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x13f,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c5140(param_1);
  return;
}



void FUN_00889540(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x148), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x148,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c5170(param_1);
  return;
}



void FUN_008895c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x173), cVar2 != '\0'))
           && (cVar2 = FUN_004673b0(iVar1,0x173,param_1,param_2,param_3,param_4), cVar2 != '\0'))))
  {
    func_0x008c51e0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_00889660(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x17d), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x17d,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c5280(param_1);
  return;
}



void FUN_008896e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x180), cVar3 != '\0')) &&
        (cVar3 = func_0x0090b070(iVar1,0x180,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8), cVar3 != '\0')))) {
      func_0x008c5390(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}



void FUN_008897c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x186), cVar3 != '\0')) &&
        (cVar3 = func_0x0090b380(iVar1,0x186,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9), cVar3 != '\0')))) {
      func_0x008c5610(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}



void FUN_008898b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x197), cVar3 != '\0')) &&
        (cVar3 = func_0x0090ba20(iVar1,0x197,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8), cVar3 != '\0')))) {
      func_0x008c5f00(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}



void FUN_00889990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x199), cVar3 != '\0')) &&
        (cVar3 = func_0x0090ba80(iVar1,0x199,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8), cVar3 != '\0')))) {
      func_0x008c6070(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}



undefined4 FUN_00889a70(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1a5), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = FUN_004673b0(iVar1,0x1a5);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  puVar3 = (undefined4 *)func_0x008f3ac0(&stack0xfffffffc,*(undefined4 *)(iVar1 + 0x1d14));
  return *puVar3;
}



undefined4 FUN_00889ae0(undefined4 param_1)

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
  uVar2 = func_0x008ba400(param_1);
  if (*(char *)(iVar1 + 0x1d01) == '\0') {
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x1aa), cVar3 == '\0')) {
      return 0;
    }
    cVar3 = func_0x0090bf40(iVar1,0x1aa,uVar2);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  uVar4 = func_0x008c6560(uVar2);
  return uVar4;
}



void FUN_00889b70(undefined4 param_1)

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
  uVar2 = func_0x008ba020(param_1);
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar3 = func_0x0090bff0(iVar1,0x1b0,uVar2), cVar3 == '\0')) {
    return;
  }
  func_0x008c67b0(uVar2);
  return;
}



void FUN_00889bf0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1b8), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x1b8,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c6a00(param_1,param_2);
  return;
}



void FUN_00889c80(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1ba), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x1ba,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c6d00(param_1,param_2);
  return;
}



void FUN_00889d10(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1bf), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c2f0(iVar1,0x1bf,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c6e90(param_1);
  return;
}



void FUN_00889d90(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1c4), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x1c4,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c70a0(param_1,param_2);
  return;
}



void FUN_00889e20(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1c8), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c3b0(iVar1,0x1c8,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c7170(param_1);
  return;
}



void FUN_00889ea0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1ca), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x1ca,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c72d0(param_1,param_2);
  return;
}



void FUN_00889f30(undefined4 param_1)

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
     (cVar2 = func_0x0090c4b0(iVar1,0x1ce,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008c77c0(param_1);
  return;
}



void FUN_00889f90(undefined4 param_1)

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
     (cVar2 = FUN_004673b0(iVar1,0x1cf,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008c77d0(param_1);
  return;
}



void FUN_00889ff0(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x0090c500(iVar1,0x1d3,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008c77f0(param_1,param_2);
  return;
}



void FUN_0088a080(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x1d5), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c540(iVar1,0x1d5,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008c7840(param_1,param_2);
  return;
}



void FUN_0088a110(undefined4 param_1)

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
     (cVar2 = func_0x0090c5b0(iVar1,0x1d6,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008c78b0(param_1);
  return;
}



void FUN_0088a170(undefined4 param_1)

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
     (cVar2 = func_0x0090c6a0(iVar1,0x1da,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008c78e0(param_1);
  return;
}



void FUN_0088a1d0(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 unaff_EDI;
  int iVar12;
  int unaff_FS_OFFSET;
  bool bVar13;
  int iVar14;
  char *pcVar15;
  uint uStack_4;
  
  iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar14 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar14 = *(int *)(iVar14 + 0xa8);
  if (iVar14 == 0) {
    func_0x008aad80();
    return;
  }
  uVar6 = param_1 & 0xff;
  if (0xe < param_1) {
    uVar6 = 0xf;
  }
  if (*(char *)(iVar14 + 0x1d01) != '\0') goto LAB_0088a44d;
  if ((int)param_2 < 0) {
    pcVar15 = "Cannot have negative start.";
  }
  else {
    if (0 < (int)param_3) {
      pcVar15 = *(char **)(iVar14 + 0x2000);
      if ((byte *)pcVar15 == (byte *)0x1) {
        pcVar15 = (char *)func_0x008cb6b0(iVar14);
      }
      if ((byte *)pcVar15 != (byte *)0x0) {
        pcVar9 = "Draw framebuffer is incomplete";
        pbVar4 = (byte *)pcVar15;
        do {
          bVar1 = *pbVar4;
          bVar13 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_0088a360:
            uVar6 = -(uint)bVar13 | 1;
            goto LAB_0088a365;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar13 = bVar1 < ((byte *)pcVar9)[1];
          if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_0088a360;
          pbVar4 = pbVar4 + 2;
          pcVar9 = (char *)((byte *)pcVar9 + 2);
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_0088a365:
        iVar14 = (uint)(uVar6 == 0) * 4 + 0x502;
        goto LAB_0088a253;
      }
      if (*(char *)(uVar6 + 0x2024 + iVar14) == '\0') {
        func_0x008fede0(iVar14,0x1e1,uVar6);
        return;
      }
      if (((*(char *)(iVar14 + 0x200c) != '\0') && (cVar3 = func_0x008d9c80(), cVar3 == '\0')) &&
         (cVar3 = func_0x008e3330(param_3,1), cVar3 == '\0')) {
        pcVar15 = "Not enough space in bound transform feedback buffers.";
        iVar14 = 0x502;
        goto LAB_0088a253;
      }
      if (*(char *)(iVar14 + 0x1fd1) == '\0') {
LAB_0088a43f:
        bVar13 = true;
      }
      else {
        iVar5 = ((int)param_2 >> 0x1f) + ((int)param_3 >> 0x1f) + (uint)CARRY4(param_2,param_3);
        uVar10 = (param_2 + param_3) - 1;
        uVar8 = (uint)(param_2 + param_3 == 0);
        iVar12 = iVar5 - uVar8;
        if ((iVar12 < 0) || ((iVar5 <= (int)uVar8 && (uVar10 < 0x80000000)))) {
          if ((iVar12 < *(int *)(iVar14 + 0x1ff4)) ||
             ((iVar12 <= *(int *)(iVar14 + 0x1ff4) && (uVar10 <= *(uint *)(iVar14 + 0x1ff0)))))
          goto LAB_0088a43f;
          func_0x008fed80(iVar14,0x1e1);
          bVar13 = false;
        }
        else {
          func_0x008dc860(0x1e1,0x502,"Integer overflow.");
          bVar13 = false;
        }
      }
LAB_0088a441:
      if (!bVar13) {
        return;
      }
LAB_0088a44d:
      if ((*(char *)(iVar14 + 0x20dc) == '\0') ||
         ((int)param_3 < *(int *)(&DAT_00f8f294 + uVar6 * 4))) {
        pcVar2 = *(code **)(**(int **)(iVar14 + 0x1d14) + 0xc0);
        _guard_check_icall();
        (*pcVar2)();
        return;
      }
      if ((*(int *)(iVar14 + 0x1fb4) != 0) &&
         (iVar5 = func_0x008fab10(uVar6,iVar14,iVar14 + 8), iVar5 == 1)) {
        return;
      }
      uVar8 = *(uint *)(iVar14 + 0x1c94) & *(uint *)(iVar14 + 0x1fdc);
      uStack_4 = uVar6;
      if (uVar8 != 0) {
        uStack_4 = 0;
        uVar10 = uVar8;
        if (uVar8 != 0) {
          for (; (uVar8 >> uStack_4 & 1) == 0; uStack_4 = uStack_4 + 1) {
          }
        }
        while( true ) {
          pcVar2 = (code *)(&PTR_FUN_00f8f794)[uStack_4];
          _guard_check_icall(iVar14,0xb);
          iVar5 = (*pcVar2)();
          if (iVar5 == 1) {
            return;
          }
          uVar10 = uVar10 & ~(1 << (uStack_4 & 0x1f));
          if (uVar10 == 0) break;
          uStack_4 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uStack_4 & 1) == 0; uStack_4 = uStack_4 + 1) {
            }
          }
        }
      }
      puVar11 = (undefined4 *)(iVar14 + 0x1c88);
      *(uint *)(iVar14 + 0x1c94) = *(uint *)(iVar14 + 0x1c94) & ~uVar8 & 0x1fff;
      pcVar2 = *(code **)(**(int **)(iVar14 + 0x1d14) + 0xd4);
      _guard_check_icall(iVar14,puVar11,iVar14 + 0x20e0,0xb);
      iVar5 = (*pcVar2)();
      if (iVar5 == 1) {
        return;
      }
      for (; puVar11 != (undefined4 *)(iVar14 + 0x1c90); puVar11 = puVar11 + 1) {
        *puVar11 = 0;
      }
      pcVar2 = *(code **)(**(int **)(iVar14 + 0x1d14) + 0x58);
      _guard_check_icall(iVar14,unaff_EDI,uVar6,uStack_4);
      iVar5 = (*pcVar2)();
      if (iVar5 == 1) {
        return;
      }
      if (*(char *)(iVar14 + 0x200c) == '\0') {
        return;
      }
      func_0x008e37f0(iVar14,uStack_4,1);
      return;
    }
    if (-1 < (int)param_3) {
      pbVar4 = *(byte **)(iVar14 + 0x2000);
      if (pbVar4 == (byte *)0x1) {
        pbVar4 = (byte *)func_0x008cb6b0(iVar14);
      }
      if (pbVar4 == (byte *)0x0) {
        if (*(char *)(uVar6 + 0x2024 + iVar14) == '\0') {
          func_0x008fede0(iVar14,0x1e1,uVar6);
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
      }
      else {
        pcVar15 = "Draw framebuffer is incomplete";
        pbVar7 = pbVar4;
        do {
          bVar1 = *pbVar7;
          bVar13 = bVar1 < (byte)*pcVar15;
          if (bVar1 != *pcVar15) {
LAB_0088a2b5:
            uVar8 = -(uint)bVar13 | 1;
            goto LAB_0088a2ba;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar13 = bVar1 < ((byte *)pcVar15)[1];
          if (bVar1 != ((byte *)pcVar15)[1]) goto LAB_0088a2b5;
          pbVar7 = pbVar7 + 2;
          pcVar15 = (char *)((byte *)pcVar15 + 2);
        } while (bVar1 != 0);
        uVar8 = 0;
LAB_0088a2ba:
        func_0x008dc860(0x1e1,(uint)(uVar8 == 0) * 4 + 0x502,pbVar4);
        bVar13 = false;
      }
      goto LAB_0088a441;
    }
    pcVar15 = "Negative count.";
  }
  iVar14 = 0x501;
LAB_0088a253:
  func_0x008dc860(0x1e1,iVar14,pcVar15);
  return;
}



// WARNING: Removing unreachable block (ram,0x0088a8ae)

void FUN_0088a5d0(uint param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 unaff_EBX;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 unaff_ESI;
  int unaff_FS_OFFSET;
  bool bVar14;
  ulonglong uVar15;
  undefined4 unaff_retaddr;
  undefined8 uStack_c;
  int iStack_4;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar2 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar2 = *(int *)(iVar2 + 0xa8);
  if (iVar2 == 0) {
    func_0x008aad80();
    return;
  }
  uVar9 = param_1 & 0xff;
  if (0xe < param_1) {
    uVar9 = 0xf;
  }
  uVar11 = param_3 - 0x1401U >> 1 | (uint)((param_3 - 0x1401U & 1) != 0) << 0x1f;
  if (2 < uVar11) {
    uVar11 = 3;
  }
  if (*(char *)(iVar2 + 0x1d01) == '\0') {
    if (*(char *)(iVar2 + 0x2040 + uVar11) == '\0') {
      if (uVar11 != 2) {
        func_0x008dc960(iVar2,0x1ec,0x500,"Invalid enum provided.");
        return;
      }
      func_0x008dc860(0x1ec,0x500,"Only UNSIGNED_SHORT and UNSIGNED_BYTE types are supported.");
      return;
    }
    pcVar6 = *(char **)(iVar2 + 0x2004);
    if (pcVar6 == (char *)0x1) {
      pcVar6 = (char *)func_0x008cb690(iVar2);
    }
    if (pcVar6 != (char *)0x0) goto LAB_0088a957;
    if (*(char *)(iVar2 + 0x1345) != '\0') {
      if ((param_4 & (1 << ((byte)uVar11 & 0x1f)) - 1U) != 0) {
        pcVar6 = "Offset must be a multiple of the passed in datatype.";
        goto LAB_0088a957;
      }
      if ((int)param_4 < 0) {
        func_0x008dc860(0x1ec,0x501,"Negative offset.");
        return;
      }
    }
    if (param_2 < 1) {
      if (param_2 < 0) {
        func_0x008dc860(0x1ec,0x501,"Negative count.");
        return;
      }
      pbVar7 = *(byte **)(iVar2 + 0x2000);
      if (pbVar7 == (byte *)0x1) {
        pbVar7 = (byte *)func_0x008cb6b0(iVar2);
      }
      if (pbVar7 == (byte *)0x0) {
        if (*(char *)(uVar9 + 0x2024 + iVar2) == '\0') {
          func_0x008fede0(iVar2,0x1ec,uVar9);
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
      }
      else {
        pcVar6 = "Draw framebuffer is incomplete";
        pbVar10 = pbVar7;
        do {
          bVar1 = *pbVar10;
          bVar14 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_0088a770:
            uVar11 = -(uint)bVar14 | 1;
            goto LAB_0088a775;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar14 = bVar1 < ((byte *)pcVar6)[1];
          if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_0088a770;
          pbVar10 = pbVar10 + 2;
          pcVar6 = (char *)((byte *)pcVar6 + 2);
        } while (bVar1 != 0);
        uVar11 = 0;
LAB_0088a775:
        func_0x008dc860(0x1ec,(uint)(uVar11 == 0) * 4 + 0x502,pbVar7);
        bVar14 = false;
      }
    }
    else {
      pbVar7 = *(byte **)(iVar2 + 0x2000);
      if (pbVar7 == (byte *)0x1) {
        pbVar7 = (byte *)func_0x008cb6b0(iVar2);
      }
      if (pbVar7 != (byte *)0x0) {
        pcVar6 = "Draw framebuffer is incomplete";
        pbVar10 = pbVar7;
        do {
          bVar1 = *pbVar10;
          bVar14 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_0088a817:
            uVar9 = -(uint)bVar14 | 1;
            goto LAB_0088a81c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar14 = bVar1 < ((byte *)pcVar6)[1];
          if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_0088a817;
          pbVar10 = pbVar10 + 2;
          pcVar6 = (char *)((byte *)pcVar6 + 2);
        } while (bVar1 != 0);
        uVar9 = 0;
LAB_0088a81c:
        func_0x008dc860(0x1ec,(uint)(uVar9 == 0) * 4 + 0x502,pbVar7);
        return;
      }
      if (*(char *)(uVar9 + 0x2024 + iVar2) == '\0') {
        func_0x008fede0(iVar2,0x1ec,uVar9);
        return;
      }
      iVar8 = *(int *)(iVar2 + 0x1514);
      iVar3 = *(int *)(iVar8 + 100);
      if (iVar3 == 0) {
        if (param_4 == 0) {
          pcVar6 = "No element array buffer and no pointer.";
          goto LAB_0088a957;
        }
      }
      else {
        uVar15 = func_0x008abc90();
        uVar5 = uVar15 + param_4;
        uVar12 = (uint)(uVar5 >> 0x20);
        if (uVar5 < uVar15) {
          pcVar6 = "Integer overflow.";
          goto LAB_0088a957;
        }
        if ((*(uint *)(iVar3 + 0x74) <= uVar12) &&
           ((*(uint *)(iVar3 + 0x74) < uVar12 || (*(uint *)(iVar3 + 0x70) < (uint)uVar5)))) {
          pcVar6 = "Insufficient buffer size.";
          goto LAB_0088a957;
        }
      }
      if (*(char *)(iVar2 + 0x1fd1) == '\0') goto LAB_0088a9b4;
      if ((((iVar3 == 0) || (*(uint *)(iVar8 + 0x14c) != uVar11)) ||
          (*(int *)(iVar8 + 0x150) != param_2)) || (*(uint *)(iVar8 + 0x154) != param_4)) {
        iVar8 = func_0x008e4e20(iVar2,uVar11,param_2,param_4,&uStack_c);
        if (iVar8 == 1) {
          return;
        }
      }
      else {
        uStack_c = *(undefined8 *)(iVar8 + 0x158);
        iStack_4 = *(int *)(iVar8 + 0x160);
      }
      if (((int)*(uint *)(iVar2 + 0x3c) < 1) &&
         ((0x7fffffff < *(uint *)(iVar2 + 0x3c) || (*(uint *)(iVar2 + 0x38) <= uStack_c._4_4_)))) {
        pcVar6 = "Element value exceeds maximum element index.";
LAB_0088a957:
        func_0x008dc860(0x1ec,0x502,pcVar6);
        return;
      }
      if ((*(int *)(iVar2 + 0x1ff4) <= (int)uStack_c._4_4_ >> 0x1f) &&
         ((*(int *)(iVar2 + 0x1ff4) < (int)uStack_c._4_4_ >> 0x1f ||
          (*(uint *)(iVar2 + 0x1ff0) < uStack_c._4_4_)))) {
        func_0x008fed80(iVar2,0x1ec);
        return;
      }
      bVar14 = iStack_4 != 0;
    }
    if (!bVar14) {
      return;
    }
  }
LAB_0088a9b4:
  if ((*(char *)(iVar2 + 0x20dc) == '\0') || (param_2 < *(int *)(&DAT_00f8f294 + uVar9 * 4))) {
    pcVar4 = *(code **)(**(int **)(iVar2 + 0x1d14) + 0xc0);
    _guard_check_icall();
    (*pcVar4)();
    return;
  }
  if ((*(int *)(iVar2 + 0x1fb4) == 0) ||
     (iVar8 = func_0x008fab10(uVar9,iVar2,iVar2 + 8), iVar8 != 1)) {
    uVar9 = *(uint *)(iVar2 + 0x1fdc) & *(uint *)(iVar2 + 0x1c94);
    if (uVar9 == 0) {
LAB_0088aa47:
      puVar13 = (undefined4 *)(iVar2 + 0x1c88);
      *(uint *)(iVar2 + 0x1c94) = *(uint *)(iVar2 + 0x1c94) & ~uVar9 & 0x1fff;
      pcVar4 = *(code **)(**(int **)(iVar2 + 0x1d14) + 0xd4);
      _guard_check_icall(iVar2,puVar13,iVar2 + 0x20e0,0xb);
      iVar8 = (*pcVar4)();
      if (iVar8 != 1) {
        for (; puVar13 != (undefined4 *)(iVar2 + 0x1c90); puVar13 = puVar13 + 1) {
          *puVar13 = 0;
        }
        pcVar4 = *(code **)(**(int **)(iVar2 + 0x1d14) + 100);
        _guard_check_icall(iVar2,unaff_ESI,uStack_c._4_4_,unaff_EBX,unaff_retaddr);
        (*pcVar4)();
        return;
      }
    }
    else {
      uVar11 = 0;
      uVar12 = uVar9;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      while( true ) {
        pcVar4 = (code *)(&PTR_FUN_00f8f794)[uVar11];
        _guard_check_icall(iVar2,0xb);
        iVar8 = (*pcVar4)();
        if (iVar8 == 1) break;
        uVar12 = uVar12 & ~(1 << (uVar11 & 0x1f));
        if (uVar12 == 0) goto LAB_0088aa47;
        uVar11 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      }
    }
  }
  return;
}



void FUN_0088ab10(undefined4 param_1)

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
     (cVar2 = func_0x0090df40(iVar1,0x214,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008c9b20(param_1);
  return;
}



void FUN_0088ab70(undefined4 param_1)

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
     (cVar2 = func_0x0090c6a0(iVar1,0x217,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008c9b40(param_1);
  return;
}



void FUN_0088abd0(void)

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
      iStack_10 = 0x88ac15;
      puStack_c = (undefined *)iVar6;
      cVar2 = func_0x008bd7d0();
      if (cVar2 == '\0') {
        return;
      }
    }
    iStack_10 = 0x88ac27;
    puStack_c = (undefined *)iVar6;
    cVar2 = FUN_004673b0();
    if (cVar2 == '\0') {
      return;
    }
  }
  pcVar1 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0x54);
  iStack_10 = 0x8c9ea6;
  puStack_c = (undefined *)iVar6;
  _guard_check_icall();
  iStack_10 = 0x8c9eaa;
  (*pcVar1)();
  return;
}



void FUN_0088ac40(void)

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
      iStack_10 = 0x88ac85;
      puStack_c = (undefined *)iVar6;
      cVar2 = func_0x008bd7d0();
      if (cVar2 == '\0') {
        return;
      }
    }
    iStack_10 = 0x88ac97;
    puStack_c = (undefined *)iVar6;
    cVar2 = FUN_004673b0();
    if (cVar2 == '\0') {
      return;
    }
  }
  pcVar1 = *(code **)(**(int **)(iVar6 + 0x1d14) + 0x50);
  iStack_10 = 0x8c9f46;
  puStack_c = (undefined *)iVar6;
  _guard_check_icall();
  iStack_10 = 0x8c9f4a;
  (*pcVar1)();
  return;
}



void FUN_0088acb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x24a), cVar2 != '\0'))
           && (cVar2 = func_0x0090e160(iVar1,0x24a,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008ca070(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088ad50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x24e), cVar3 != '\0')) &&
        (cVar3 = func_0x0090e170(iVar1,0x24e,param_1,param_2,uVar2,param_4,param_5), cVar3 != '\0'))
       )) {
      func_0x008ca110(param_1,param_2,uVar2,param_4,param_5);
      return;
    }
  }
  return;
}



void FUN_0088ae10(undefined4 param_1)

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
     (cVar2 = func_0x0090e6e0(iVar1,600,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008ca720(param_1);
  return;
}



void FUN_0088ae70(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x25c), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x25c,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca730(param_1,param_2);
  return;
}



void FUN_0088af00(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x25e), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x25e,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008ca8e0(param_1,param_2);
  return;
}



void FUN_0088af90(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x266), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x266,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008caa90(param_1,param_2);
  return;
}



void FUN_0088b020(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x26a), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090c280(iVar1,0x26a,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008cab60(param_1,param_2);
  return;
}



void FUN_0088b0b0(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar3 = func_0x008bd7d0(iVar1,0x26e), cVar3 == '\0')) {
      return;
    }
    cVar3 = func_0x0090e720(iVar1,0x26e,uVar2);
    if (cVar3 == '\0') {
      return;
    }
  }
  func_0x008cadc0(uVar2);
  return;
}



void FUN_0088b140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
          (cVar2 = func_0x0090e730(iVar1,0x272,param_1,param_2,param_3,param_4,param_5,param_6,
                                   param_7), cVar2 != '\0')) {
    func_0x008cb160(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  return;
}



void FUN_0088b1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
          (cVar2 = func_0x0090e7a0(iVar1,0x276,param_1,param_2,param_3,param_4,param_5,param_6,
                                   param_7), cVar2 != '\0')) {
    func_0x008cb240(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  return;
}



void FUN_0088b280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x0090e810(iVar1,0x27c,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cb500(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



undefined4 FUN_0088b300(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x0090e850(iVar1,0x27d,param_1,param_2), cVar2 == '\0')) {
    return 0xffffffff;
  }
  uVar3 = func_0x008cb570(param_1,param_2);
  return uVar3;
}



void FUN_0088b370(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x0090e950(iVar1,0x280,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008cb790(param_1,param_2);
  return;
}



void FUN_0088b3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x0090e980(iVar1,0x284,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008cb9c0(uVar2,param_2,param_3);
  return;
}



undefined4 FUN_0088b470(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  int unaff_FS_OFFSET;
  
  if (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar3 = FUN_00472c50();
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(char *)(iVar3 + 0x1d01) == '\0') && (cVar2 = FUN_004673b0(iVar3,0x295), cVar2 == '\0')) {
    return 0;
  }
  if (*(int *)(iVar3 + 0x1d0c) != 0) {
    uVar1 = *(undefined4 *)(**(int **)(iVar3 + 0x1d08) + 0x10);
    uVar4 = func_0x008c33a0(**(int **)(iVar3 + 0x1d08),unaff_ESI);
    func_0x008ab812(uVar4,0x14);
    return uVar1;
  }
  return 0;
}



void FUN_0088b4d0(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x0090e950(iVar1,0x299,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008cbe10(param_1,param_2);
  return;
}



void FUN_0088b540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x0090eae0(iVar1,0x29e,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cc560(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088b5c0(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x0090e950(iVar1,0x2af,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008cd050(param_1,param_2);
  return;
}



void FUN_0088b630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x0090ec80(iVar1,0x2dc,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008cf2d0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088b6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
       (cVar1 = func_0x0090ecc0(iVar2,0x2ea,param_1,param_2,param_3), cVar1 == '\0')) {
      return;
    }
    func_0x008cf840(param_1,param_2,param_3);
  }
  return;
}



void FUN_0088b720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x0090ecd0(iVar1,0x301,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d0330(param_1,param_2,param_3);
  return;
}



void FUN_0088b790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x0090ece0(iVar1,0x311,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d0660(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088b810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x0090ed20(iVar1,0x312,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d0690(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088b890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x0090ece0(iVar1,0x313,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d0820(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088b910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
       (cVar1 = func_0x0090edb0(iVar2,0x314,param_1,param_2,param_3), cVar1 == '\0')) {
      return;
    }
    func_0x008d0850(param_1,param_2,param_3);
  }
  return;
}



undefined4 FUN_0088b980(undefined4 param_1)

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
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x0090edc0(iVar1,0x316,param_1), cVar2 == '\0')) {
    return 0;
  }
  uVar3 = func_0x008d08d0(param_1);
  return uVar3;
}



void FUN_0088b9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x0090ee70(iVar1,0x334,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008d0bf0(uVar2,param_2,param_3);
  return;
}



void FUN_0088ba80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x0090ee70(iVar1,0x336,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008d0c50(uVar2,param_2,param_3);
  return;
}



undefined4 FUN_0088bb10(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x0090ef00(iVar1,0x348,param_1,param_2), cVar2 == '\0')) {
    return 0xffffffff;
  }
  uVar3 = func_0x008d10c0(param_1,param_2);
  return uVar3;
}



void FUN_0088bb80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x0090efa0(iVar1,0x34b,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d11f0(param_1,param_2,param_3);
  return;
}



void FUN_0088bbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x0090efa0(iVar1,0x34d,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d12f0(param_1,param_2,param_3);
  return;
}



void FUN_0088bc60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x0090efc0(iVar1,0x35b,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d16a0(param_1,param_2,param_3);
  return;
}



void FUN_0088bcd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x0090efe0(iVar1,0x35e,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d1700(param_1,param_2,param_3);
  return;
}



void FUN_0088bd40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x0090efe0(iVar1,0x360,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d17a0(param_1,param_2,param_3);
  return;
}



void FUN_0088bdb0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x379), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090f000(iVar1,0x379,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d1d80(param_1,param_2);
  return;
}



uint FUN_0088be40(undefined4 param_1)

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
      uVar2 = FUN_004673b0(iVar1,0x396,param_1);
      if ((char)uVar2 == '\0') goto LAB_0088be9b;
    }
    uVar2 = func_0x008d4a80(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0088be9b:
  return uVar2 & 0xffffff00;
}



uint FUN_0088beb0(undefined4 param_1)

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
      uVar2 = func_0x0090f0c0(iVar1,0x397,param_1);
      if ((char)uVar2 == '\0') goto LAB_0088bf0b;
    }
    uVar2 = func_0x008d4b60(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0088bf0b:
  return uVar2 & 0xffffff00;
}



uint FUN_0088bf20(undefined4 param_1)

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
      uVar2 = FUN_004673b0(iVar1,0x39c,param_1);
      if ((char)uVar2 == '\0') goto LAB_0088bf7b;
    }
    uVar2 = func_0x008d4df0(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0088bf7b:
  return uVar2 & 0xffffff00;
}



uint FUN_0088bf90(undefined4 param_1)

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
      uVar2 = FUN_004673b0(iVar1,0x3a0,param_1);
      if ((char)uVar2 == '\0') goto LAB_0088bfeb;
    }
    uVar2 = func_0x008d4eb0(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0088bfeb:
  return uVar2 & 0xffffff00;
}



uint FUN_0088c000(undefined4 param_1)

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
      uVar2 = FUN_004673b0(iVar1,0x3a5,param_1);
      if ((char)uVar2 == '\0') goto LAB_0088c05b;
    }
    uVar2 = func_0x008d5040(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0088c05b:
  return uVar2 & 0xffffff00;
}



uint FUN_0088c070(undefined4 param_1)

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
      uVar2 = FUN_004673b0(iVar1,0x3a9,param_1);
      if ((char)uVar2 == '\0') goto LAB_0088c0cb;
    }
    uVar2 = func_0x008d5130(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0088c0cb:
  return uVar2 & 0xffffff00;
}



uint FUN_0088c0e0(undefined4 param_1)

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
      uVar2 = FUN_004673b0(iVar1,0x3ab,param_1);
      if ((char)uVar2 == '\0') goto LAB_0088c13b;
    }
    uVar2 = func_0x008d5180(param_1);
    return uVar2;
  }
  uVar2 = func_0x008aad80();
LAB_0088c13b:
  return uVar2 & 0xffffff00;
}



void FUN_0088c150(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3bd), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090f160(iVar1,0x3bd,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d5460(param_1);
  return;
}



void FUN_0088c1e0(undefined4 param_1)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x3bf), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090f1b0(iVar1,0x3bf,param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d5480(param_1);
  return;
}



void FUN_0088c260(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x453), cVar2 == '\0')) {
      return;
    }
    cVar2 = func_0x0090fed0(iVar1,0x453,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d75d0(param_1,param_2);
  return;
}



void FUN_0088c2f0(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x461), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x461,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d76e0(param_1,param_2);
  return;
}



void FUN_0088c3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4ed), cVar2 != '\0'))
           && (cVar2 = func_0x00910270(iVar1,0x4ed,param_1,param_2,param_3,param_4,param_5,param_6,
                                       param_7), cVar2 != '\0')))) {
    func_0x008d8e40(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  return;
}



void FUN_0088c460(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar7 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar7 + 0x18) == '\0') {
    uStack_8 = 0x88c47e;
    func_0x008abb44();
  }
  iVar7 = *(int *)(iVar7 + 0xa8);
  if (iVar7 == 0) {
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00f3c904;
    iStack_10 = *unaff_FS_OFFSET;
    uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar7 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
    if (*(int *)(iVar7 + 0x10) == 0) {
      iVar5 = func_0x008ab47d(0x14,uVar8);
      uStack_8 = 0;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x008b9a30();
      }
      uStack_8 = 0xffffffff;
      if (*(char *)(iVar7 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar7 + 0x10) = uVar6;
      if (*(char *)(iVar7 + 0x18) == '\0') {
        func_0x008abb44();
      }
      *(undefined4 *)(iVar7 + 0xa8) = 0;
    }
    if (*(char *)(iVar7 + 0x18) == '\0') {
      func_0x008abb44();
    }
    iVar7 = FUN_00472c50();
    if ((iVar7 != 0) && (*(char *)(iVar7 + 0x1fb9) != '\0')) {
      func_0x008dc860(0,0x507,"Context has been lost.");
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (*(char *)(iVar7 + 0x1d01) == '\0') {
    if (*(int *)(iVar7 + 0x18c0) != 0) {
      uStack_8 = 0x4fa;
      iStack_10 = 0x88c4a5;
      puStack_c = (undefined *)iVar7;
      cVar4 = func_0x008bd7d0();
      if (cVar4 == '\0') {
        return;
      }
    }
    uStack_8 = 0x4fa;
    iStack_10 = 0x88c4b7;
    puStack_c = (undefined *)iVar7;
    cVar4 = FUN_004673b0();
    if (cVar4 == '\0') {
      return;
    }
  }
  puStack_c = &DAT_00f3da60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(iVar7 + 0x1df8);
  *(undefined4 *)(iVar7 + 0x1df8) = 0;
  uStack_8 = 0;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(iVar7,uVar8);
      (*pcVar3)();
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(1);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0088c4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x4fd), cVar2 != '\0'))
           && (cVar2 = func_0x009102b0(iVar1,0x4fd,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d9170(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088c570(undefined4 param_1,undefined4 param_2)

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
    if ((*(int *)(iVar1 + 0x18c0) != 0) && (cVar2 = func_0x008bd7d0(iVar1,0x507), cVar2 == '\0')) {
      return;
    }
    cVar2 = FUN_004673b0(iVar1,0x507,param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x008d93b0(param_1,param_2);
  return;
}



void FUN_0088c610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x009104a0(iVar1,0x51c,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d9590(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088c690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x538), cVar2 != '\0'))
           && (cVar2 = func_0x00910550(iVar1,0x538,param_1,param_2,param_3,param_4,param_5),
              cVar2 != '\0')))) {
    FUN_008c4b70(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0088c740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar2 = func_0x008bd7d0(iVar1,0x539), cVar2 != '\0'))
           && (cVar2 = func_0x00910590(iVar1,0x539,param_1,param_2,param_3,param_4), cVar2 != '\0'))
          )) {
    func_0x008d9870(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088c7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x009105d0(iVar1,0x53e,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d9a80(param_1,param_2,param_3);
  return;
}



void FUN_0088c850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x00910620(iVar1,0x53f,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d9ae0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088c8d0(undefined4 param_1)

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
     (cVar2 = FUN_004673b0(iVar1,0x540,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008d9b60(param_1);
  return;
}



void FUN_0088c930(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x00910680(iVar1,0x541,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008d9b90(param_1,param_2);
  return;
}



void FUN_0088c9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x009106c0(iVar1,0x542,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008d9bf0(param_1,param_2,param_3);
  return;
}



void FUN_0088ca10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x00910790(iVar1,0x543,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008d9c20(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088ca90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x587), cVar3 != '\0')) &&
        (cVar3 = func_0x009108e0(iVar1,0x587,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9), cVar3 != '\0')))) {
      func_0x008d9ee0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}



void FUN_0088cb80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x00910ad0(iVar1,0x597,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da1f0(uVar2,param_2,param_3);
  return;
}



void FUN_0088cc20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x00910b00(iVar1,0x598,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da220(uVar2,param_2,param_3);
  return;
}



void FUN_0088ccb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x00910b30(iVar1,0x59a,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da280(uVar2,param_2,param_3);
  return;
}



void FUN_0088cd40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar3 = func_0x00910b60(iVar1,0x59b,uVar2,param_2,param_3), cVar3 == '\0')) {
    return;
  }
  func_0x008da2b0(uVar2,param_2,param_3);
  return;
}



void FUN_0088cdd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = func_0x008ba710(param_1);
    if ((*(char *)(iVar1 + 0x1d01) != '\0') ||
       (((*(int *)(iVar1 + 0x18c0) == 0 || (cVar3 = func_0x008bd7d0(iVar1,0x5b2), cVar3 != '\0')) &&
        (cVar3 = func_0x00910c50(iVar1,0x5b2,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9), cVar3 != '\0')))) {
      func_0x008da5a0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}



void FUN_0088cec0(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x00910dc0(iVar1,0x5d1,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008daa70(param_1,param_2);
  return;
}



void FUN_0088cf40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910de0(iVar1,0x5d2,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008daad0(param_1,param_2,param_3);
  return;
}



void FUN_0088cfb0(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x00910e00(iVar1,0x5d3,param_1,param_2), cVar2 == '\0')) {
    return;
  }
  func_0x008dab40(param_1,param_2);
  return;
}



void FUN_0088d020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00908ce0(iVar1,0x5d4,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008dabb0(param_1,param_2,param_3);
  return;
}



void FUN_0088d090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00908e30(iVar1,0x5d9,0x8b50,param_1,1), cVar2 == '\0')) {
    return;
  }
  func_0x008dacf0(param_1,param_2,param_3);
  return;
}



void FUN_0088d110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910e20(iVar1,0x5da,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008dad70(param_1,param_2,param_3);
  return;
}



void FUN_0088d180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910e40(iVar1,0x5db,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008dade0(param_1,param_2,param_3);
  return;
}



void FUN_0088d1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910e60(iVar1,0x5dc,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008dae60(param_1,param_2,param_3);
  return;
}



void FUN_0088d260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
     (cVar2 = func_0x00910e80(iVar1,0x5e1,param_1,param_2,param_3,param_4), cVar2 == '\0')) {
    return;
  }
  func_0x008dafc0(param_1,param_2,param_3,param_4);
  return;
}



void FUN_0088d310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910ea0(iVar1,0x5e2,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008db060(param_1,param_2,param_3);
  return;
}



void FUN_0088d380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x00910ec0(iVar1,0x5e3,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008db0d0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088d400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910ee0(iVar1,0x5e4,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008db170(param_1,param_2,param_3);
  return;
}



void FUN_0088d470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  if ((*(char *)(iVar1 + 0x1d01) == '\0') &&
     (cVar2 = func_0x00910f00(iVar1,0x5e9,param_1,param_2,param_3,param_4,param_5), cVar2 == '\0'))
  {
    return;
  }
  func_0x008db2f0(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_0088d540(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910f20(iVar1,0x5ea,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008db3a0(param_1,param_2,param_3);
  return;
}



void FUN_0088d5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
          (cVar2 = func_0x00910f40(iVar1,0x5eb,param_1,param_2,param_3,param_4,param_5),
          cVar2 != '\0')) {
    func_0x008db410(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



void FUN_0088d640(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
     (cVar2 = func_0x00910f60(iVar1,0x5ec,param_1,param_2,param_3), cVar2 == '\0')) {
    return;
  }
  func_0x008db4b0(param_1,param_2,param_3);
  return;
}



void FUN_0088d6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x00910f80(iVar1,0x5f1,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008db6d0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088d730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x00910fb0(iVar1,0x5f7,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008db820(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088d7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
          (cVar2 = func_0x00910fe0(iVar1,0x5fd,param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    func_0x008db970(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



void FUN_0088d830(undefined4 param_1)

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
     (cVar2 = func_0x00911040(iVar1,0x606,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008dc660(param_1);
  return;
}



void FUN_0088d890(undefined4 param_1)

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
     (cVar2 = func_0x00911140(iVar1,0x609,param_1), cVar2 == '\0')) {
    return;
  }
  func_0x008dc790(param_1);
  return;
}



void FUN_0088d8f0(undefined4 param_1,undefined4 param_2)

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
     (cVar2 = func_0x0090c6a0(iVar1,0x62e,param_1,param_2), cVar2 == '\0')) {
