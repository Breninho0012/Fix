
undefined4 FUN_00d8b0d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xfc);
  *(int *)(iVar1 + 0xc) = param_1;
  uVar3 = func_0x00d8b990(param_1,iVar1,0);
  if (((*(int **)(param_1 + 0x10))[1] == -0xb) &&
     (iVar2 = **(int **)(param_1 + 0x10), *(char *)(iVar2 + 4) < '\0')) {
    uVar5 = *(uint *)(iVar2 + -4);
  }
  else {
    puVar4 = (uint *)func_0x00d7f340(iVar1,uVar3);
    if ((*puVar4 & 0xd0100000) == 0x10100000) {
      uVar3 = func_0x00d8ba70(param_1,2);
      uVar5 = func_0x00d7f6f0(iVar1,puVar4,uVar3);
    }
    else {
      if (0x50000000 < (*puVar4 & 0xf0000000)) goto LAB_00d8b169;
      uVar5 = puVar4[1];
    }
    if (uVar5 == 0xffffffff) {
LAB_00d8b169:
      *(undefined4 *)(*(int *)(param_1 + 0x14) + -4) = 0xffffffff;
      return 1;
    }
  }
  *(double *)(*(int *)(param_1 + 0x14) + -8) = (double)(int)uVar5;
  return 1;
}



undefined4 FUN_00d8b180(int param_1)

{
  int iVar1;
  int iVar2;
  byte extraout_var;
  undefined4 uVar3;
  
  iVar2 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xfc);
  *(int *)(iVar1 + 0xc) = param_1;
  uVar3 = func_0x00d8b990(param_1,iVar1,0);
  param_1 = 0;
  func_0x00d7ef20(iVar1,uVar3,&param_1);
  *(double *)(*(int *)(iVar2 + 0x14) + -8) = (double)(1 << (extraout_var & 0xf));
  return 1;
}



undefined4 FUN_00d8b1e0(int param_1)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  
  iVar3 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xfc);
  *(int *)(iVar1 + 0xc) = param_1;
  uVar4 = func_0x00d8b990(param_1,iVar1,0);
  uVar5 = func_0x00d8e1f0(iVar3,2);
  puVar6 = (uint *)func_0x00d7f340(iVar1,uVar4);
  if (((*puVar6 & 0xf0000000) == 0x10000000) && (puVar6[1] != 0xffffffff)) {
    puVar6 = (uint *)func_0x00d7ed20(iVar1,puVar6,uVar5,&param_1,0);
    if (puVar6 != (uint *)0x0) {
      *(double *)(*(int *)(iVar3 + 0x14) + -8) = (double)param_1;
      if (*puVar6 >> 0x1c == 9) {
        return 1;
      }
      if (*puVar6 >> 0x1c == 10) {
        pdVar2 = *(double **)(iVar3 + 0x14);
        *(double **)(iVar3 + 0x14) = pdVar2 + 1;
        *pdVar2 = (double)(*puVar6 & 0x7f);
        pdVar2 = *(double **)(iVar3 + 0x14);
        *(double **)(iVar3 + 0x14) = pdVar2 + 1;
        *pdVar2 = (double)(*puVar6 >> 8 & 0x7f);
        return 3;
      }
    }
  }
  return 0;
}



undefined4 FUN_00d8b2c0(int param_1)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = (int *)func_0x008aaf8a();
  iVar4 = param_1;
  iVar1 = *piVar5;
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
    piVar5 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
    piVar5[3] = param_1;
    if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x10)) {
      func_0x00d67530(param_1,1,0x227);
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    func_0x00da4730(piVar5,*piVar5 + 0x90,&param_1,*(uint *)(param_1 + 0x10),0x100);
    piVar5 = (int *)func_0x008aaf8a();
    *piVar5 = param_1;
  }
  pdVar2 = *(double **)(iVar4 + 0x14);
  *(double **)(iVar4 + 0x14) = pdVar2 + 1;
  *pdVar2 = (double)iVar1;
  return 1;
}



undefined4 FUN_00d8b340(char *param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar3 = param_1;
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar2[3] = (int)param_1;
  puVar4 = (undefined4 *)func_0x00d8df20(param_1,1);
  if ((puVar4 + 2 < *(undefined4 **)(pcVar3 + 0x14)) && (puVar4[3] != -1)) {
    iVar5 = func_0x00d8ba70(pcVar3,2);
    func_0x00da4730(piVar2,*piVar2 + 0x120,&param_1,puVar4,0x100);
  }
  else {
    func_0x00da4730(piVar2,*piVar2 + 0x130,&param_1,puVar4,0x100);
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar7 - (int)(param_1 + 1);
  }
  *(undefined4 **)(pcVar3 + 0x14) = puVar4 + 2;
  uVar6 = FUN_00d6e6c0(pcVar3,param_1,iVar5);
  *puVar4 = uVar6;
  puVar4[1] = 0xfffffffb;
  if (*(uint *)(*(int *)(pcVar3 + 8) + 0xc) <= *(uint *)(*(int *)(pcVar3 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00d8b410(size_t param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 uVar6;
  void *pvStack_8;
  void *pvStack_4;
  
  sVar5 = param_1;
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar1[3] = param_1;
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
    func_0x00da4730(piVar1,*piVar1 + 0x110,&pvStack_4,*(uint *)(param_1 + 0x10),0x100);
    piVar1 = *(int **)(*(int *)(sVar5 + 8) + 0xfc);
    piVar1[3] = sVar5;
    uVar4 = *(int *)(sVar5 + 0x10) + 8;
    if (uVar4 < *(uint *)(sVar5 + 0x14)) {
      func_0x00da4730(piVar1,*piVar1 + 0x120,&pvStack_8,uVar4,0x200);
      iVar2 = *(int *)(sVar5 + 0x10);
      if ((*(int *)(iVar2 + 0xc) == -5) && (*(uint *)(sVar5 + 0x14) <= iVar2 + 0x10U)) {
        sVar5 = *(int *)(*(int *)(iVar2 + 8) + 0x10) + 1;
LAB_00d8b4d4:
        memcpy(pvStack_4,pvStack_8,sVar5);
        return 0;
      }
      piVar1 = *(int **)(*(int *)(sVar5 + 8) + 0xfc);
      piVar1[3] = sVar5;
      uVar4 = *(int *)(sVar5 + 0x10) + 0x10;
      if (uVar4 < *(uint *)(sVar5 + 0x14)) {
        func_0x00da4730(piVar1,*piVar1 + 0x90,&param_1,uVar4,0x300);
        sVar5 = param_1;
        goto LAB_00d8b4d4;
      }
      goto LAB_00d8b506;
    }
  }
  else {
    func_0x00d67530(param_1,1,0x227);
  }
  func_0x00d67530(sVar5,2,0x227);
LAB_00d8b506:
  func_0x00d67530(sVar5,3,0x227);
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}



undefined4 FUN_00d8b520(size_t param_1)

{
  int *piVar1;
  code *pcVar2;
  size_t sVar3;
  uint uVar4;
  undefined4 uVar5;
  int _Val;
  void *pvStack_4;
  
  sVar3 = param_1;
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar1[3] = param_1;
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
    func_0x00da4730(piVar1,*piVar1 + 0x110,&pvStack_4,*(uint *)(param_1 + 0x10),0x100);
    piVar1 = *(int **)(*(int *)(sVar3 + 8) + 0xfc);
    piVar1[3] = sVar3;
    uVar4 = *(int *)(sVar3 + 0x10) + 8;
    if (uVar4 < *(uint *)(sVar3 + 0x14)) {
      func_0x00da4730(piVar1,*piVar1 + 0x90,&param_1,uVar4,0x200);
      _Val = 0;
      if ((*(int *)(sVar3 + 0x10) + 0x10U < *(uint *)(sVar3 + 0x14)) &&
         (*(int *)(*(int *)(sVar3 + 0x10) + 0x14) != -1)) {
        _Val = func_0x00d8ba70(sVar3,3);
      }
      memset(pvStack_4,_Val,param_1);
      return 0;
    }
  }
  else {
    func_0x00d67530(param_1,1,0x227);
  }
  func_0x00d67530(sVar3,2,0x227);
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}



undefined4 FUN_00d8b5e0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = func_0x00d8e1f0(param_1,1);
  uVar2 = func_0x00dab730(uVar1,&DAT_010cd54c);
  iVar3 = ((int)~uVar2 >> 0x1f) + -2;
  *(int *)(*(int *)(param_1 + 0x14) + -4) = iVar3;
  *(int *)(*(int *)(param_1 + 8) + 0x9c) = iVar3;
  return 1;
}



undefined4 FUN_00d8b620(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
  piVar1[3] = param_1;
  iVar5 = func_0x00d8b990(param_1,piVar1,0);
  uVar6 = func_0x00d8e270(param_1,2);
  iVar2 = piVar1[6];
  for (uVar3 = *(uint *)(*piVar1 + iVar5 * 0x10); (uVar3 & 0xf0000000) == 0x80000000;
      uVar3 = *(uint *)(*piVar1 + (uVar3 & 0xffff) * 0x10)) {
  }
  if ((((uVar3 & 0xf0000000) == 0x10000000) || ((uVar3 & 0xf4000000) == 0x34000000)) ||
     ((uVar3 & 0xf8000000) == 0x38000000)) {
    puVar7 = (undefined4 *)func_0x00d6fa20(param_1,iVar2,-iVar5);
    if (puVar7[1] == -1) {
      *puVar7 = uVar6;
      puVar7[1] = 0xfffffff4;
      if ((*(byte *)(iVar2 + 4) & 4) != 0) {
        iVar8 = *(int *)(param_1 + 8);
        *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfb;
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar8 + 0x24);
        *(int *)(iVar8 + 0x24) = iVar2;
      }
      iVar8 = FUN_00d6caa0();
      *(undefined1 *)(iVar8 + 5) = 10;
      *(undefined2 *)(iVar8 + 6) = 0x16;
      *(int *)(iVar8 + 8) = iVar5;
      iVar2 = *(int *)(param_1 + 0x14);
      *(int *)(iVar2 + -8) = iVar8;
      *(undefined4 *)(iVar2 + -4) = 0xfffffff5;
      if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
        func_0x00d6c6d0();
      }
      return 1;
    }
  }
  else {
    func_0x00d67530(param_1,1,0xbf0);
  }
  func_0x00d67660(param_1,0x3f3);
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return uVar6;
}



undefined4 FUN_00d8b750(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xb)) {
    iVar2 = *piVar1;
    puVar6 = (undefined4 *)func_0x00d8df20(param_1,2);
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
    piVar1[3] = param_1;
    iVar3 = *piVar1;
    for (uVar4 = *(uint *)(iVar3 + (uint)*(ushort *)(iVar2 + 6) * 0x10);
        (uVar4 & 0xf0000000) == 0x80000000; uVar4 = *(uint *)(iVar3 + (uVar4 & 0xffff) * 0x10)) {
    }
    if (((uVar4 >> 0x1c == 2) || (uVar4 >> 0x1c == 1)) || ((uVar4 & 0xfc000000) == 0x30000000)) {
      FUN_00d8c620(param_1,iVar2,*puVar6,puVar6[1]);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
      return 1;
    }
  }
  else {
    func_0x00d67550(param_1,1,10);
  }
  func_0x00d67530(param_1,1,0xbf0);
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return uVar7;
}



undefined4 FUN_00d8b810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = func_0x00d8e1f0(param_1,1);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 + 8U < *(uint *)(param_1 + 0x14)) && (*(uint *)(iVar1 + 0xc) < 0xfffffffe)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  func_0x00dac360(param_1,*(undefined4 *)(*(int *)(iVar1 + -8) + 8),uVar2,uVar3);
  return 1;
}



undefined4 FUN_00d8bca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar1 = func_0x00d7efd0(param_1);
  uVar2 = func_0x00d6f2a0(param_1,0,1);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = puVar5 + 2;
  *puVar5 = uVar2;
  puVar5[1] = 0xfffffff4;
  iVar3 = func_0x00d6f2a0(param_1,0,1);
  piVar6 = *(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = piVar6 + 2;
  *piVar6 = iVar3;
  piVar6[1] = -0xc;
  *(int *)(iVar3 + 0x10) = iVar3;
  uVar2 = FUN_00d6e6c0(param_1,&DAT_010cd568,1);
  uVar4 = FUN_00d6e6c0(param_1,"__mode",6);
  puVar5 = (undefined4 *)func_0x00d6fab0(param_1,iVar3,uVar4);
  *puVar5 = uVar2;
  puVar5[1] = 0xfffffffb;
  *(undefined1 *)(iVar3 + 6) = 0xf7;
  *(int *)(iVar1 + 0x14) = iVar3;
  func_0x00d8e4c0(param_1,0,&DAT_010cd360,&PTR_FUN_010cd318);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x1a0) = *(undefined4 *)(*(int *)(param_1 + 0x14) + -8);
  func_0x00d8e4c0(param_1,0,&DAT_010cd400,&PTR_FUN_010cd3f4);
  func_0x00d8e4c0(param_1,0,&DAT_010cd424,&PTR_FUN_010cd41c);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + -8);
  puVar5 = (undefined4 *)
           func_0x00d6fab0(param_1,*(undefined4 *)(iVar1 + 0x18),*(int *)(iVar1 + 0x10) + 0x40);
  *puVar5 = uVar2;
  puVar5[1] = 0xfffffff4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -8;
  func_0x00dac0b0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + -8));
  func_0x00d66780(param_1,"Windows",7);
  func_0x00d66780(param_1,&DAT_01198398,3);
  func_0x00d8e4c0(param_1,0,&DAT_010cd488,&PTR_FUN_010cd440);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xb8);
  uVar4 = FUN_00d6e6c0(param_1,"_LOADED",7);
  piVar6 = (int *)func_0x00d6f270(uVar2,uVar4);
  if ((piVar6 != (int *)0x0) && (piVar6[1] == -0xc)) {
    iVar1 = *piVar6;
    iVar3 = *(int *)(param_1 + 0x14);
    uVar2 = FUN_00d6e6c0(param_1,&DAT_010cb798,3);
    puVar5 = (undefined4 *)func_0x00d6fab0(param_1,iVar1,uVar2);
    uVar2 = *(undefined4 *)(iVar3 + -4);
    *puVar5 = *(undefined4 *)(iVar3 + -8);
    puVar5[1] = uVar2;
    if ((*(byte *)(iVar1 + 4) & 4) != 0) {
      iVar3 = *(int *)(param_1 + 8);
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0x24);
      *(int *)(iVar3 + 0x24) = iVar1;
    }
  }
  return 1;
}



void __fastcall FUN_00d8be40(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_2 + 1);
  if ((bVar1 & 0x10) != 0) {
    *(byte *)(param_2 + 1) = *(byte *)(param_1 + 4) & 3 | bVar1 & 0xf8 | 8;
    puVar3 = (undefined4 *)param_1[0xb];
    if (puVar3 == (undefined4 *)0x0) {
      *param_2 = param_2;
      param_1[0xb] = param_2;
      return;
    }
    *param_2 = *puVar3;
    *puVar3 = param_2;
    param_1[0xb] = param_2;
    return;
  }
  if (-1 < (char)bVar1) {
    puVar5 = (uint *)((uint)*(ushort *)((int)param_2 + 6) * 0x10 + *(int *)param_1[0x3f]);
    uVar4 = *puVar5;
    while ((uVar4 & 0xf0000000) == 0x80000000) {
      puVar5 = (uint *)((uVar4 & 0xffff) * 0x10 + *(int *)param_1[0x3f]);
      uVar4 = *puVar5;
    }
    if (0x50000000 < (uVar4 & 0xf0000000)) {
      param_1[2] = param_1[2] + -0xc;
      (*(code *)*param_1)(param_1[1],param_2,0xc,0);
      return;
    }
    uVar4 = puVar5[1];
    param_1[2] = param_1[2] - (uVar4 + 8);
    (*(code *)*param_1)(param_1[1],param_2,uVar4 + 8,0);
    return;
  }
  iVar6 = (uint)*(ushort *)((int)param_2 + -6) + param_2[-1];
  uVar2 = *(ushort *)(param_2 + -2);
  param_1[2] = param_1[2] - iVar6;
  (*(code *)*param_1)(param_1[1],(int)param_2 - (uint)uVar2,iVar6,0);
  return;
}



undefined4 * FUN_00d8c3e0(int param_1,undefined2 param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_4 < 4) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = (1 << ((byte)param_4 & 0x1f)) + 8;
  }
  iVar4 = func_0x00d6e130(param_1,0,0,iVar3 + param_3);
  iVar6 = 1 << ((byte)param_4 & 0x1f);
  uVar5 = iVar6 + 0xf + iVar4 & ~(iVar6 - 1U);
  puVar1 = (undefined4 *)(uVar5 - 8);
  *(short *)(uVar5 - 0x10) = (short)puVar1 - (short)iVar4;
  *(short *)(uVar5 - 0xe) = (short)iVar3;
  *(int *)(uVar5 - 0xc) = param_3;
  iVar3 = *(int *)(param_1 + 8);
  *puVar1 = *(undefined4 *)(iVar3 + 0x18);
  bVar2 = *(byte *)(iVar3 + 0x10);
  *(undefined4 **)(iVar3 + 0x18) = puVar1;
  *(undefined1 *)(uVar5 - 3) = 10;
  *(byte *)(uVar5 - 4) = bVar2 & 3 | 0x80;
  *(undefined2 *)(uVar5 - 2) = param_2;
  return puVar1;
}



void FUN_00d8c620(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int aiStack_10 [3];
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xfc) + 0x14);
  if (*(int *)(iVar2 + 0x10) != 0) {
    aiStack_10[0] = param_2;
    aiStack_10[1] = 0xfffffff5;
    if ((*(byte *)(iVar2 + 4) & 4) != 0) {
      *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x24);
      *(int *)(iVar1 + 0x24) = iVar2;
    }
    puVar3 = (undefined4 *)func_0x00d6f900(param_1,iVar2,aiStack_10);
    if (param_4 == -1) {
      puVar3[1] = 0xffffffff;
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xef;
      return;
    }
    *puVar3 = param_3;
    puVar3[1] = param_4;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
  }
  return;
}



uint __fastcall FUN_00d8c6a0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  uVar1 = ((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) % uVar2;
  if ((uVar1 != 0) && ((int)(param_1 ^ param_2) < 0)) {
    uVar1 = uVar1 - uVar2;
  }
  uVar2 = -uVar1;
  if (-1 < (int)(uVar1 ^ param_2)) {
    uVar2 = uVar1;
  }
  return uVar2;
}



undefined4 FUN_00d8c6d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008aaf8a();
  return *puVar1;
}



float10 FUN_00d8c950(double param_1)

{
  func_0x00e879c5();
  return (float10)(param_1 * 1.4426950408889634);
}



void __fastcall FUN_00d8c980(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_24 [32];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_24;
  iVar1 = func_0x00d8ca00(0,0xf000035,*param_2,auStack_24);
  FUN_00d6e6c0(param_1,auStack_24,iVar1 - (int)auStack_24);
  FUN_008ab370();
  return;
}



undefined4 * FUN_00d8c9d0(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00d8ca00(param_1,param_2,param_3,0);
  *param_1 = uVar1;
  return param_1;
}



undefined4 FUN_00d8eb20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00d8f140(param_3);
  return 0;
}



undefined4 FUN_00d8f520(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00d8fbe0(param_3);
  return 0;
}



undefined4 FUN_00da4d90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    if ((*(byte *)(iVar2 + 0x24) & 6) == 0) {
      iVar3 = *(int *)(iVar2 + 0x20);
      puVar4 = *(undefined4 **)(param_1 + 8);
      iVar6 = *(int *)(iVar2 + 0x1c) - iVar3;
      puVar4[2] = puVar4[2] - iVar6;
      (*(code *)*puVar4)(puVar4[1],iVar3,iVar6,0);
    }
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(int *)(iVar2 + 0x24) = param_1 + 1;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return uVar7;
}



undefined4 FUN_00da4e20(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    if ((*(uint *)(iVar2 + 0x24) & 2) != 0) {
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xfffffffd;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x20);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00da4e90(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    uVar4 = func_0x00d8dfd0(param_1,2,0,0x7fffff00);
    iVar6 = *(int *)(iVar2 + 0x18);
    if (uVar4 < (uint)(iVar6 - *(int *)(iVar2 + 0x2c))) {
      iVar6 = *(int *)(iVar2 + 0x2c) + uVar4;
    }
    else if ((*(byte *)(iVar2 + 0x24) & 2) == 0) {
      iVar6 = *(int *)(iVar2 + 0x20);
      *(int *)(iVar2 + 0x18) = iVar6;
    }
    *(int *)(iVar2 + 0x2c) = iVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}



undefined4 FUN_00da4f10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar6 = param_1;
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    if (piVar1[3] == -0xb) {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
      piVar1[3] = param_1;
      func_0x00da4730(piVar1,*piVar1 + 0x120,&param_1,*(int *)(param_1 + 0x10) + 8,0x200);
      iVar7 = func_0x00d8dfd0(iVar6,3,0,0x7fffff00);
    }
    else {
      iVar7 = func_0x00d8e240(param_1,2);
      param_1 = iVar7 + 0x14;
      iVar7 = *(int *)(iVar7 + 0x10);
    }
    if ((*(byte *)(iVar2 + 0x24) & 6) == 0) {
      iVar3 = *(int *)(iVar2 + 0x20);
      puVar4 = *(undefined4 **)(iVar6 + 8);
      iVar8 = *(int *)(iVar2 + 0x1c) - iVar3;
      puVar4[2] = puVar4[2] - iVar8;
      (*(code *)*puVar4)(puVar4[1],iVar3,iVar8,0);
    }
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(int *)(iVar2 + 0x24) = iVar6 + 1;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(int *)(iVar2 + 0x24) = iVar6 + 3;
    *(int *)(iVar2 + 0x20) = param_1;
    *(int *)(iVar2 + 0x2c) = param_1;
    *(int *)(iVar2 + 0x1c) = param_1 + iVar7;
    *(int *)(iVar2 + 0x18) = param_1 + iVar7;
    iVar7 = *(int *)(*(int *)(iVar6 + 0x10) + 8);
    *(int *)(iVar2 + 0x28) = iVar7;
    if (((*(byte *)(iVar7 + 4) & 3) != 0) && ((*(byte *)(iVar2 + 4) & 4) != 0)) {
      func_0x00d6daa0(*(undefined4 *)(iVar6 + 8),iVar2,iVar7);
    }
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x10) + 8;
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar5 = (code *)swi(3);
  uVar9 = (*pcVar5)();
  return uVar9;
}



undefined4 FUN_00da5040(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iStack_54;
  
  piVar10 = *(int **)(param_1 + 0x10);
  if (((*(int **)(param_1 + 0x14) <= piVar10) || (piVar10[1] != -0xd)) ||
     (iVar1 = *piVar10, *(char *)(iVar1 + 6) != '\x03')) {
    func_0x00d67570(param_1,1,"buffer");
LAB_00da5208:
    func_0x00d67530(param_1,iStack_54 + 1,0xeda);
LAB_00da5219:
    func_0x00d67570(param_1,iStack_54 + 1,"string/number/__tostring");
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return uVar9;
  }
  iStack_54 = 1;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 7 | param_1;
  iVar7 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  if (1 < iVar7) {
    do {
      piVar10 = (int *)(*(int *)(param_1 + 0x10) + iStack_54 * 8);
      puVar8 = (undefined4 *)0x0;
      uVar2 = piVar10[1];
      while (uVar2 != 0xfffffffb) {
        if (uVar2 < 0xfffffff2) {
          FUN_00d8c9d0(iVar1 + 0x18,0xf000035,*(undefined8 *)piVar10);
          goto LAB_00da51c5;
        }
        if ((uVar2 == 0xfffffff3) && (*(char *)(*piVar10 + 6) == '\x03')) {
          if (*piVar10 + 0x18 == iVar1 + 0x18) goto LAB_00da5208;
          FUN_00d759a0(iVar1 + 0x18);
          goto LAB_00da51c5;
        }
        if ((puVar8 != (undefined4 *)0x0) ||
           (puVar8 = (undefined4 *)func_0x00d70da0(param_1,piVar10), puVar8[1] == -1))
        goto LAB_00da5219;
        puVar3 = *(undefined4 **)(param_1 + 0x14);
        *(undefined4 **)(param_1 + 0x14) = puVar3 + 2;
        uVar9 = puVar8[1];
        *puVar3 = *puVar8;
        puVar3[1] = uVar9;
        piVar4 = *(int **)(param_1 + 0x14);
        *(int **)(param_1 + 0x14) = piVar4 + 2;
        iVar5 = piVar10[1];
        *piVar4 = *piVar10;
        piVar4[1] = iVar5;
        func_0x00d65d20(param_1);
        piVar10 = (int *)(*(int *)(param_1 + 0x10) + iStack_54 * 8);
        iVar5 = *(int *)(*(int *)(param_1 + 0x14) + -4);
        *piVar10 = *(int *)(*(int *)(param_1 + 0x14) + -8);
        piVar10[1] = iVar5;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + iVar7 * 8;
        uVar2 = piVar10[1];
      }
      FUN_00d75420();
LAB_00da51c5:
      iStack_54 = iStack_54 + 1;
    } while (iStack_54 < iVar7);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00da5230(uint param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 7 | param_1;
    func_0x00d74730(param_1,iVar2 + 0x18,2,2);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
    if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



int FUN_00da52a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar8 = param_1;
  piVar2 = *(int **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x14);
  if (((piVar3 <= piVar2) || (piVar2[1] != -0xd)) ||
     (iVar4 = *piVar2, *(char *)(iVar4 + 6) != '\x03')) {
    func_0x00d67570(param_1,1,"buffer");
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  iVar9 = (int)piVar3 - (int)piVar2 >> 3;
  iVar11 = 1;
  if (iVar9 == 1) {
    piVar3[1] = -1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    param_1 = 2;
  }
  else {
    param_1 = iVar9;
    if (iVar9 < 2) goto LAB_00da5351;
  }
  do {
    puVar1 = (undefined4 *)(*(int *)(iVar8 + 0x10) + iVar11 * 8);
    iVar11 = iVar11 + 1;
    if (puVar1[1] == -1) {
      uVar6 = 0x7fffff00;
    }
    else {
      uVar6 = func_0x00d8dfd0(iVar8,iVar11,0,0x7fffff00);
    }
    uVar10 = *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x2c);
    if (uVar6 <= uVar10) {
      uVar10 = uVar6;
    }
    uVar7 = FUN_00d6e6c0(iVar8,*(int *)(iVar4 + 0x2c),uVar10);
    *puVar1 = uVar7;
    puVar1[1] = 0xfffffffb;
    *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + uVar10;
    iVar9 = param_1;
  } while (iVar11 < param_1);
LAB_00da5351:
  if ((*(int *)(iVar4 + 0x2c) == *(int *)(iVar4 + 0x18)) && ((*(byte *)(iVar4 + 0x24) & 2) == 0)) {
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar4 + 0x20);
  }
  if (*(uint *)(*(int *)(iVar8 + 8) + 0xc) <= *(uint *)(*(int *)(iVar8 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return iVar9 + -1;
}



undefined4 FUN_00da53a0(uint param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = param_1;
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 7 | param_1;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == -0xb) {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xfc);
      piVar1[3] = param_1;
      func_0x00da4730(piVar1,*piVar1 + 0x120,&param_1,*(int *)(param_1 + 0x10) + 8,0x200);
      uVar5 = func_0x00d8dfd0(uVar4,3,0,0x7fffff00);
      FUN_00d759a0(iVar2 + 0x18,param_1,uVar5);
      *(int *)(uVar4 + 0x14) = *(int *)(uVar4 + 0x10) + 8;
      return 1;
    }
  }
  else {
    func_0x00d67570(param_1,1,"buffer");
  }
  func_0x00d67570(uVar4,2,"cdata");
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}



undefined4 FUN_00da5450(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar6 = (uint)param_1;
  puVar1 = (uint *)((int)param_1 + 0x14);
  piVar2 = *(int **)((int)param_1 + 0x10);
  if (((piVar2 < (int *)*puVar1) && (piVar2[1] == -0xd)) &&
     (iVar3 = *piVar2, *(char *)(iVar3 + 6) == '\x03')) {
    *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 7 | (uint)param_1;
    uVar7 = func_0x00d8dfd0(param_1,2,0,0x7fffff00);
    if ((uint)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18)) < uVar7) {
      func_0x00d752e0();
    }
    param_1 = (int *)((int)param_1 + 0x14);
    if (*(int *)(*(int *)(uVar6 + 8) + 0xfc) == 0) {
      uVar7 = *puVar1;
      iVar8 = *(int *)(uVar6 + 0x1c);
      FUN_00d8bca0(uVar6);
      *puVar1 = *(int *)(uVar6 + 0x1c) + (uVar7 - iVar8);
    }
    iVar8 = FUN_00d6caa0();
    *(undefined2 *)(iVar8 + 6) = 0x14;
    *(undefined1 *)(iVar8 + 5) = 10;
    *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 0x18);
    piVar2 = (int *)*puVar1;
    *param_1 = (int)(piVar2 + 2);
    *piVar2 = iVar8;
    piVar2[1] = -0xb;
    pdVar4 = (double *)*param_1;
    *param_1 = (int)(pdVar4 + 1);
    *pdVar4 = (double)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18));
    return 2;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar5 = (code *)swi(3);
  uVar9 = (*pcVar5)();
  return uVar9;
}



undefined4 FUN_00da5540(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    uVar4 = func_0x00d8dfd0(param_1,2,0,0x7fffff00);
    if (uVar4 <= (uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18))) {
      *(uint *)(iVar2 + 0x18) = uVar4 + *(int *)(iVar2 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
      return 1;
    }
  }
  else {
    func_0x00d67570(param_1,1,"buffer");
  }
  func_0x00d67530(param_1,2,0x482);
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}



undefined4 FUN_00da55b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = *(int **)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x14);
  if (((piVar1 < piVar2) && (piVar1[1] == -0xd)) &&
     (iVar3 = *piVar1, *(char *)(iVar3 + 6) == '\x03')) {
    if (*(int *)(*(int *)(param_1 + 8) + 0xfc) == 0) {
      iVar6 = *(int *)(param_1 + 0x1c);
      FUN_00d8bca0(param_1);
      *(int *)(param_1 + 0x14) = (int)piVar2 + (*(int *)(param_1 + 0x1c) - iVar6);
    }
    iVar6 = FUN_00d6caa0();
    *(undefined2 *)(iVar6 + 6) = 0x14;
    *(undefined1 *)(iVar6 + 5) = 10;
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 0x2c);
    piVar1 = *(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = piVar1 + 2;
    *piVar1 = iVar6;
    piVar1[1] = -0xb;
    pdVar4 = *(double **)(param_1 + 0x14);
    *(double **)(param_1 + 0x14) = pdVar4 + 1;
    *pdVar4 = (double)(*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x2c));
    return 2;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return uVar7;
}



undefined4 FUN_00da5660(uint param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 7 | param_1;
    func_0x00d8df20(param_1,2);
    FUN_00db5e80();
    if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 8;
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00da56d0(uint param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 7 | param_1;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    uVar4 = FUN_00db5db0();
    *(undefined4 *)(iVar2 + 0x2c) = uVar4;
    if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00da5740(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    if ((*(byte *)(iVar2 + 0x24) & 6) == 0) {
      iVar3 = *(int *)(iVar2 + 0x20);
      puVar4 = *(undefined4 **)(param_1 + 8);
      iVar6 = *(int *)(iVar2 + 0x1c) - iVar3;
      puVar4[2] = puVar4[2] - iVar6;
      (*(code *)*puVar4)(puVar4[1],iVar3,iVar6,0);
    }
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(int *)(iVar2 + 0x24) = param_1 + 1;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    return 0;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return uVar7;
}



undefined4 FUN_00da57c0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    uVar4 = FUN_00d6e6c0(param_1,*(int *)(iVar2 + 0x2c),
                         *(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x2c));
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar2 + -8) = uVar4;
    *(undefined4 *)(iVar2 + -4) = 0xfffffffb;
    if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
      func_0x00d6c6d0();
    }
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00da5830(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 < *(int **)(param_1 + 0x14)) && (piVar1[1] == -0xd)) &&
     (iVar2 = *piVar1, *(char *)(iVar2 + 6) == '\x03')) {
    *(double *)(*(int **)(param_1 + 0x14) + -2) =
         (double)(*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x2c));
    return 1;
  }
  func_0x00d67570(param_1,1,"buffer");
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



undefined4 FUN_00da5880(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_4;
  
  iVar6 = 0;
  uVar7 = 0;
  uStack_4 = 0;
  iVar8 = 1;
  if (((*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) &&
      (iVar1 = *(int *)(*(uint *)(param_1 + 0x10) + 4), iVar8 = 1, iVar1 != -0xc)) &&
     (iVar8 = 2, iVar1 != -1)) {
    iVar6 = func_0x00d8dfd0(param_1,1,0,0x7fffff00);
  }
  if ((*(int *)(param_1 + 0x10) + iVar8 * 8) - 8U < *(uint *)(param_1 + 0x14)) {
    uVar3 = func_0x00d8e270(param_1,iVar8);
    uVar4 = FUN_00d6e6c0(param_1,&DAT_010cdc90,4);
    puVar5 = (undefined4 *)func_0x00d6f270(uVar3,uVar4);
    if ((puVar5 != (undefined4 *)0x0) && (puVar5[1] == -0xc)) {
      uStack_4 = *puVar5;
      func_0x00db5c80();
    }
    uVar4 = FUN_00d6e6c0(param_1,"metatable",9);
    puVar5 = (undefined4 *)func_0x00d6f270(uVar3,uVar4);
    if ((puVar5 != (undefined4 *)0x0) && (puVar5[1] == -0xc)) {
      uVar7 = *puVar5;
      func_0x00db5bc0();
    }
  }
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + -8) + 8);
  iVar8 = func_0x00d703c0(param_1,0x24,uVar3);
  *(undefined1 *)(iVar8 + 6) = 3;
  *(undefined4 *)(iVar8 + 0x10) = uVar3;
  piVar2 = *(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = piVar2 + 2;
  *piVar2 = iVar8;
  piVar2[1] = -0xd;
  *(undefined4 *)(iVar8 + 0x18) = 0;
  *(undefined4 *)(iVar8 + 0x1c) = 0;
  *(undefined4 *)(iVar8 + 0x20) = 0;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  *(undefined4 *)(iVar8 + 0x28) = 0;
  *(undefined4 *)(iVar8 + 0x2c) = 0;
  *(undefined4 *)(iVar8 + 0x30) = 0;
  *(undefined4 *)(iVar8 + 0x34) = 0;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  *(int *)(iVar8 + 0x24) = param_1 + 1;
  *(undefined4 *)(iVar8 + 0x30) = uStack_4;
  *(undefined4 *)(iVar8 + 0x34) = uVar7;
  if (iVar6 != 0) {
    func_0x00d753b0();
  }
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00da59b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  func_0x00d8df20(param_1,1);
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = puVar1 + 2;
  uVar2 = FUN_00db5d40();
  *puVar1 = uVar2;
  puVar1[1] = 0xfffffffb;
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00da5a00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = func_0x00d8e240(param_1,1);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 8;
  FUN_00db5ea0(param_1,iVar1,uVar2);
  if (*(uint *)(*(int *)(param_1 + 8) + 0xc) <= *(uint *)(*(int *)(param_1 + 8) + 8)) {
    func_0x00d6c6d0();
  }
  return 1;
}



undefined4 FUN_00da5a50(undefined4 param_1)

{
  func_0x00d8e4c0(param_1,0,&DAT_010cdbc8,&PTR_FUN_010cdb88);
  func_0x00d66060(param_1,0xffffffff,"__tostring");
  func_0x00d66b60(param_1,0xfffffffe,"tostring");
  func_0x00d8e4c0(param_1,0,&DAT_010cdc58,&PTR_FUN_010cdc4c);
  return 1;
}



undefined4 FUN_00da6510(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((param_3 != 0 || param_4 != 0) &&
     (((param_1 != 0 || (param_2 != -0x80000000)) || ((param_3 & param_4) != 0xffffffff)))) {
    uVar1 = func_0x00e87ec0(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



void FUN_00da6550(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_3 == 0 && param_4 == 0) {
    return;
  }
  func_0x00e87db0(param_1,param_2,param_3,param_4);
  return;
}



undefined8 FUN_00da67a0(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0 && param_4 == 0) {
    return 0x8000000000000000;
  }
  if (((param_1 == 0) && (param_2 == -0x80000000)) && ((param_3 & param_4) == 0xffffffff)) {
    return 0;
  }
  uVar1 = func_0x00e88080(param_1,param_2,param_3,param_4);
  return uVar1;
}



void FUN_00da67f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_3 == 0 && param_4 == 0) {
    return;
  }
  func_0x00e88260(param_1,param_2,param_3,param_4);
  return;
}



void FUN_00da6820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00e87d70(param_1,param_2,param_3,param_4);
  return;
}



undefined8 FUN_00da68e0(uint param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0 || param_4 != 0) {
    if ((0 < param_4) || (-1 < param_4)) {
      uVar1 = FUN_00da6960(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    if (param_1 == 0 && param_2 == 0) {
      return 0x7fffffffffffffff;
    }
    if ((param_1 != 1) || (param_2 != 0)) {
      if ((param_1 & param_2) != 0xffffffff) {
        return 0;
      }
      if ((param_3 & 1) != 0) {
        return 0xffffffffffffffff;
      }
    }
  }
  return 1;
}



undefined8 FUN_00da6960(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_3 != 0 || param_4 != 0) {
    for (uVar1 = param_3 & 1; uVar1 == 0; uVar1 = uVar1 & 1) {
      uVar2 = func_0x00e87d70(uVar2,uVar2);
      uVar1 = param_3 >> 1;
      param_3 = uVar1 | param_4 << 0x1f;
      param_4 = param_4 >> 1;
    }
    uVar1 = param_3 >> 1 | param_4 << 0x1f;
    param_4 = param_4 >> 1;
    if (uVar1 != 0 || param_4 != 0) {
      uVar3 = func_0x00e87d70(uVar2,uVar2);
      for (; (uVar1 != 1 || (param_4 != 0)); param_4 = param_4 >> 1) {
        if ((uVar1 & 1) != 0) {
          uVar2 = func_0x00e87d70(uVar2,uVar3);
        }
        uVar1 = uVar1 >> 1 | param_4 << 0x1f;
        uVar3 = func_0x00e87d70(uVar3,uVar3);
      }
      uVar2 = func_0x00e87d70(uVar2,uVar3);
    }
    return uVar2;
  }
  return 1;
}



ulonglong FUN_00da6a30(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = func_0x00e87ea0();
  uVar2 = func_0x008abc90();
  return uVar1 | uVar2;
}



ulonglong FUN_00da6a70(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = func_0x008abc90();
  uVar2 = func_0x00e87ea0();
  return uVar1 | uVar2;
}



undefined8 FUN_00da6ab0(uint param_1,int param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = param_2 >> 0x1f;
  if (0x3f < (param_3 & 0x3f)) {
    return CONCAT44(iVar1,iVar1);
  }
  if ((param_3 & 0x3f) < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0x1f),
                    param_1 >> (param_3 & 0x1f) | param_2 << 0x20 - (param_3 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_3 & 0x1f));
}



longlong FUN_00da6b70(uint param_1,int param_2,byte param_3)

{
  if (0x3f < (param_3 & 0x3f)) {
    return 0;
  }
  if ((param_3 & 0x3f) < 0x20) {
    return CONCAT44(param_2 << (param_3 & 0x1f) | param_1 >> 0x20 - (param_3 & 0x1f),
                    param_1 << (param_3 & 0x1f));
  }
  return (ulonglong)(param_1 << (param_3 & 0x1f)) << 0x20;
}



ulonglong FUN_00da6b90(uint param_1,uint param_2,byte param_3)

{
  if (0x3f < (param_3 & 0x3f)) {
    return 0;
  }
  if ((param_3 & 0x3f) < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0x1f),
                    param_1 >> (param_3 & 0x1f) | param_2 << 0x20 - (param_3 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_3 & 0x1f));
}



int __fastcall FUN_00da6bb0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar4) {
    func_0x00da6c20();
  }
  bVar3 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar4 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar4 * 8);
  iVar2 = param_1 + (uint)bVar3 * 2;
  puVar1[3] = *(undefined2 *)(iVar2 + 0x146);
  *(short *)(iVar2 + 0x146) = (short)uVar4;
  *(byte *)((int)puVar1 + 5) = bVar3;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(puVar1 + 2) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar4;
}



void FUN_00dab580(int param_1,undefined4 param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 auStack_678 [1652];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_678;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c) = 0xffffffff;
  *(undefined1 *)(param_3 + 0x13) = 0xff;
  param_3[10] = param_3[0xb];
  param_3[0xf] = 1;
  param_3[0x10] = 0;
  *(undefined1 *)((int)param_3 + 0x53) = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[7] = 0;
  uVar2 = (uint)*(byte *)param_3[6];
  *param_3 = uVar2;
  param_3[6] = (uint)((byte *)param_3[6] + 1);
  if (uVar2 == 0x5c) {
    func_0x00daa2f0(param_3);
  }
  param_3[1] = 0;
  param_3[0x11] = 0x38c0;
  func_0x00daa380(param_3);
  if ((param_3[0x12] & 1) == 0) {
    func_0x00da8ae0(param_3,auStack_678,0);
    func_0x00da91a0(param_3,auStack_678);
    uVar2 = func_0x00da82d0(param_3,auStack_678);
    param_3[3] = uVar2;
    if (param_3[1] != 0x103) goto LAB_00dab686;
  }
  else {
    func_0x00da86c0(param_3);
  }
  if ((param_3[0xd] == 0) || (param_3[0xd] == *(uint *)(param_3[0xb] + 0x14))) {
    FUN_008ab370();
    return;
  }
  func_0x00da9450(param_3,0xc90);
LAB_00dab686:
  func_0x00da94a0(param_3,0x103);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00dac480(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)func_0x00d8c710(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x98),
                                   *(byte *)(param_1 + 0x7d) - 0x29);
  func_0x00da71e0(param_1,(double)fVar1);
  return;
}



void __fastcall FUN_00dac4e0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)func_0x00d8c710(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x88),
                                   *(byte *)(param_1 + 0x7d) - 0x29);
  func_0x00da71e0(param_1,(double)fVar1);
  return;
}



void __fastcall FUN_00dac530(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)func_0x00d8c860(*(undefined8 *)(param_1 + 0x88),*(undefined2 *)(param_1 + 0x7a));
  func_0x00da71e0(param_1,(double)fVar1);
  return;
}



undefined4 __fastcall FUN_00dac570(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if ((*(uint *)(&DAT_010cdd4c + (uint)*(ushort *)(param_1 + 0x7a) * 8) & 0x1f0000) == 0xe0000) {
    fVar2 = (float10)(*(code *)(&PTR_FUN_010cdd48)[(uint)*(ushort *)(param_1 + 0x7a) * 2])
                               (*(undefined8 *)(param_1 + 0x88));
    uVar1 = func_0x00da71e0(param_1,(double)fVar2);
    return uVar1;
  }
  return 0;
}



undefined4 __fastcall FUN_00dac5d0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if ((*(ushort *)(param_1 + 0x80) < 0x8000) && (*(ushort *)(param_1 + 0x82) < 0x8000)) {
    fVar2 = (float10)(*(code *)(&PTR_FUN_010cdd48)[(uint)*(ushort *)(param_1 + 0x7a) * 2])
                               (*(undefined8 *)
                                 (*(int *)(param_1 + 0x10) + 8 +
                                 (uint)*(ushort *)(param_1 + 0x80) * 8),
                                *(undefined8 *)
                                 (*(int *)(param_1 + 0x10) + 8 +
                                 (uint)*(ushort *)(param_1 + 0x82) * 8));
    uVar1 = func_0x00da71e0(param_1,(double)fVar2);
    return uVar1;
  }
  return 0;
}



void __fastcall FUN_00dac650(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)func_0x00d8c710(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x98),5
                                  );
  func_0x00da71e0(param_1,(double)fVar1);
  return;
}



int __fastcall FUN_00dac6a0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00da7500(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x98),
                          *(undefined1 *)(param_1 + 0x7d));
  return iVar1 + 3;
}



undefined4 __fastcall FUN_00dac6d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00daf610(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x90),
                          *(undefined1 *)(param_1 + 0x7d));
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  return 2;
}



undefined4 __fastcall FUN_00dac700(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)func_0x00d8c710((double)*(int *)(param_1 + 0x80),(double)*(int *)(param_1 + 0x90)
                                   ,*(byte *)(param_1 + 0x7d) - 0x35);
  if ((double)fVar1 != (double)(int)fVar1) {
    return 3;
  }
  *(int *)(param_1 + 0x78) = (int)fVar1;
  return 2;
}



undefined4 __fastcall FUN_00dac780(int param_1)

{
  *(uint *)(param_1 + 0x78) = ~*(uint *)(param_1 + 0x80);
  return 2;
}



undefined4 __fastcall FUN_00dac7a0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x78) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return 2;
}



int __fastcall FUN_00dac7c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar2 = *(uint *)(param_1 + 0x90);
  switch(*(undefined1 *)(param_1 + 0x7d)) {
  case 0:
    return ((int)uVar1 < (int)uVar2) + 3;
  case 1:
    return ((int)uVar2 <= (int)uVar1) + 3;
  case 2:
    return ((int)uVar1 <= (int)uVar2) + 3;
  case 3:
    return ((int)uVar2 < (int)uVar1) + 3;
  case 4:
    return (uVar1 < uVar2) + 3;
  case 5:
    return 4 - (uint)(uVar1 < uVar2);
  case 6:
    return 4 - (uint)(uVar2 < uVar1);
  case 7:
  case 10:
    return (uVar2 < uVar1) + 3;
  default:
    return 3;
  }
}



undefined4 __fastcall FUN_00dac870(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 4;
  }
  return uVar1;
}



int __fastcall FUN_00dac890(int param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_1 + 0x78);
  uVar5 = (uint)*(ushort *)(param_1 + 0x78);
  uVar7 = (uint)*(byte *)(param_1 + 0x7d);
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x7a);
    if (*(ushort *)(param_1 + 0x7a) <= uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = (uint)*(ushort *)(param_1 + 0x146 + uVar7 * 2);
    if (uVar6 < uVar5) {
      do {
        iVar1 = *(int *)(param_1 + 0x10) + uVar5 * 8;
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar5 * 8) == iVar4) {
          return uVar5 + (uint)*(byte *)(iVar1 + 4) * 0x1000000;
        }
        uVar5 = (uint)*(ushort *)(iVar1 + 6);
      } while (uVar6 < uVar5);
    }
  }
  uVar5 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar5) {
    func_0x00da6c20();
  }
  *(uint *)(param_1 + 8) = uVar5 + 1;
  piVar2 = (int *)(*(int *)(param_1 + 0x10) + uVar5 * 8);
  *(undefined2 *)((int)piVar2 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar7 * 2);
  *piVar2 = iVar4;
  *(short *)(param_1 + 0x146 + uVar7 * 2) = (short)uVar5;
  *(undefined1 *)((int)piVar2 + 5) = *(undefined1 *)(param_1 + 0x7d);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(piVar2 + 1) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar5;
}



void __fastcall FUN_00dac940(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x00daf4c0(param_1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                          *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                          *(undefined1 *)(param_1 + 0x7d));
  func_0x00da7140(param_1,uVar1);
  return;
}



void __fastcall FUN_00dac980(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x7d);
  if ((*(byte *)(param_1 + 0x7c) & 0x1f) != 0x15) {
    if (cVar1 == ',') {
      uVar2 = FUN_00da6550();
      func_0x00da7140(param_1,uVar2);
      return;
    }
    if (cVar1 == '-') {
      uVar2 = FUN_00da67f0();
      func_0x00da7140(param_1,uVar2);
      return;
    }
    uVar2 = FUN_00da6960(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                         *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    func_0x00da7140(param_1,uVar2);
    return;
  }
  if (cVar1 == ',') {
    uVar2 = FUN_00da6510();
    func_0x00da7140(param_1,uVar2);
    return;
  }
  if (cVar1 == '-') {
    uVar2 = FUN_00da67a0();
    func_0x00da7140(param_1,uVar2);
    return;
  }
  uVar2 = FUN_00da68e0();
  func_0x00da7140(param_1,uVar2);
  return;
}



void __fastcall FUN_00daca60(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x00da6ad0(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                          *(uint *)(param_1 + 0x90) & 0x3f,*(byte *)(param_1 + 0x7d) - 0x24);
  func_0x00da7140(param_1,uVar1);
  return;
}



void __fastcall FUN_00dacaa0(int param_1)

{
  func_0x00da7140(param_1,~*(uint *)(param_1 + 0x88),~*(uint *)(param_1 + 0x8c));
  return;
}



void __fastcall FUN_00dacac0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = *(uint *)(param_1 + 0x8c);
  func_0x00da7140(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18,
                  uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  return;
}



undefined4 __fastcall FUN_00dacae0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = *(uint *)(param_1 + 0x98);
  uVar3 = *(uint *)(param_1 + 0x8c);
  uVar4 = *(uint *)(param_1 + 0x9c);
  switch(*(undefined1 *)(param_1 + 0x7d)) {
  case 0:
    if (((int)uVar3 <= (int)uVar4) && (((int)uVar3 < (int)uVar4 || (uVar1 < uVar2)))) {
      return 4;
    }
    break;
  case 1:
    if ((int)uVar4 <= (int)uVar3) {
      if ((int)uVar4 < (int)uVar3) {
        return 4;
      }
      if (uVar2 <= uVar1) {
        return 4;
      }
    }
    break;
  case 2:
    if ((int)uVar3 <= (int)uVar4) {
      if ((int)uVar3 < (int)uVar4) {
        return 4;
      }
      if (uVar1 <= uVar2) {
        return 4;
      }
    }
    break;
  case 3:
    if ((int)uVar4 <= (int)uVar3) {
      if ((int)uVar4 < (int)uVar3) {
        return 4;
      }
      if (uVar2 < uVar1) {
        return 4;
      }
    }
    break;
  case 4:
    if (uVar3 <= uVar4) {
      if (uVar3 < uVar4) {
        return 4;
      }
      if (uVar1 < uVar2) {
        return 4;
      }
    }
    break;
  case 5:
    if (uVar4 <= uVar3) {
      if (uVar4 < uVar3) {
        return 4;
      }
      if (uVar2 <= uVar1) {
        return 4;
      }
    }
    break;
  case 6:
    if (uVar3 <= uVar4) {
      if (uVar3 < uVar4) {
        return 4;
      }
      if (uVar1 <= uVar2) {
        return 4;
      }
    }
    break;
  case 7:
    if (uVar4 <= uVar3) {
      if (uVar4 < uVar3) {
        return 4;
      }
      if (uVar2 < uVar1) {
        return 4;
      }
    }
  }
  return 3;
}



undefined4 __fastcall FUN_00dacbd0(int param_1)

{
  if (*(int *)(param_1 + 0x98) == 0 && *(int *)(param_1 + 0x9c) == 0) {
    return 4;
  }
  return 0;
}



void __fastcall FUN_00dacbf0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6e6c0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x90));
  func_0x00da70c0(param_1,uVar1,4);
  return;
}



undefined4 __fastcall FUN_00dacc20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = func_0x00da70c0(param_1,param_1 + -0x178,4);
    return uVar1;
  }
  return 0;
}



void __fastcall FUN_00dacc40(int param_1)

{
  func_0x00da72c0(param_1,0x1a,*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x80) + 0x14);
  return;
}



undefined2 __fastcall FUN_00dacc60(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x84) & 0x40) == 0) {
    if ((*(ushort *)(param_1 + 0x7a) < 0x8000) && (*(int *)(param_1 + 0x90) == 0)) {
      return *(undefined2 *)(param_1 + 0x80);
    }
    uVar4 = (uint)*(ushort *)(param_1 + 0x80);
    iVar2 = *(int *)(param_1 + 0x10);
    if ((*(char *)(iVar2 + 5 + uVar4 * 8) == '@') &&
       (uVar1 = *(undefined2 *)(iVar2 + uVar4 * 8), (*(byte *)(iVar2 + 4 + uVar4 * 8) & 0x40) == 0))
    {
      uVar3 = *(undefined2 *)(iVar2 + 2 + uVar4 * 8);
      *(undefined2 *)(param_1 + 0x7c) = 0x2913;
      *(undefined2 *)(param_1 + 0x78) = uVar3;
      *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a);
      uVar3 = func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x7a) = uVar3;
      *(undefined2 *)(param_1 + 0x78) = uVar1;
      *(undefined2 *)(param_1 + 0x7c) = 0x4005;
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00daccf0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x80) < 0x8000) && (*(ushort *)(param_1 + 0x82) < 0x8000)) {
    uVar1 = FUN_00d6e3c0();
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    return 2;
  }
  return 0;
}



int __fastcall FUN_00dacd30(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(short *)(param_1 + 0x7a) != 2) {
    uVar6 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 0x114) <= uVar6) {
      func_0x00da6c20();
    }
    bVar5 = *(byte *)(param_1 + 0x7d);
    *(uint *)(param_1 + 8) = uVar6 + 1;
    puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar6 * 8);
    iVar2 = param_1 + (uint)bVar5 * 2;
    puVar1[3] = *(undefined2 *)(iVar2 + 0x146);
    *(short *)(iVar2 + 0x146) = (short)uVar6;
    *(byte *)((int)puVar1 + 5) = bVar5;
    *puVar1 = *(undefined2 *)(param_1 + 0x78);
    puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
    bVar5 = *(byte *)(param_1 + 0x7c);
    *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar5;
    *(byte *)(puVar1 + 2) = bVar5;
    return (uint)bVar5 * 0x1000000 + uVar6;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  uVar6 = (uint)*(ushort *)(param_1 + 0x78);
  uVar8 = (uint)*(byte *)(param_1 + 0x7d);
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x7a);
    if (*(ushort *)(param_1 + 0x7a) <= uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 0x146 + uVar8 * 2);
    if (uVar7 < uVar6) {
      do {
        iVar3 = *(int *)(param_1 + 0x10) + uVar6 * 8;
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar6 * 8) == iVar2) {
          return uVar6 + (uint)*(byte *)(iVar3 + 4) * 0x1000000;
        }
        uVar6 = (uint)*(ushort *)(iVar3 + 6);
      } while (uVar7 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar6) {
    func_0x00da6c20();
  }
  *(uint *)(param_1 + 8) = uVar6 + 1;
  piVar4 = (int *)(*(int *)(param_1 + 0x10) + uVar6 * 8);
  *(undefined2 *)((int)piVar4 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar8 * 2);
  *piVar4 = iVar2;
  *(short *)(param_1 + 0x146 + uVar8 * 2) = (short)uVar6;
  *(undefined1 *)((int)piVar4 + 5) = *(undefined1 *)(param_1 + 0x7d);
  bVar5 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar5;
  *(byte *)(piVar4 + 1) = bVar5;
  return (uint)bVar5 * 0x1000000 + uVar6;
}



uint __fastcall FUN_00dacd40(int param_1)

{
  undefined2 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(uint *)(param_1 + 0x68) & 0x80000) != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x92);
    if (((((*(char *)(param_1 + 0x85) == 'U') && (*(short *)(param_1 + 0x82) == 0)) &&
         (*(ushort *)(param_1 + 0x86) == uVar7)) &&
        (iVar6 = *(int *)(param_1 + 0x10),
        *(short *)(param_1 + 0x80) == *(short *)(iVar6 + uVar7 * 8))) &&
       ((((*(byte *)(param_1 + 0x94) & 0x40) == 0 || (*(short *)(iVar6 + 6 + uVar7 * 8) == 0)) &&
        (*(ushort *)(param_1 + 0x206) < uVar7)))) {
      uVar7 = (uint)*(ushort *)(param_1 + 0x78);
      *(undefined2 *)(iVar6 + 2 + uVar7 * 8) = 1;
      *(undefined2 *)(*(int *)(param_1 + 0x10) + uVar7 * 8) = *(undefined2 *)(param_1 + 0x90);
      return uVar7;
    }
    iVar6 = *(int *)(param_1 + 0x10);
    if (((*(short *)(iVar6 + 2 + uVar7 * 8) == 0) && ((*(byte *)(param_1 + 0x94) & 0x40) == 0)) &&
       ((puVar2 = (ushort *)(iVar6 + (uint)*(ushort *)(param_1 + 0x90) * 8),
        *(char *)(iVar6 + 5 + (uint)*(ushort *)(param_1 + 0x90) * 8) == 'a' &&
        (uVar5 = puVar2[1], (ushort)(uVar5 - 0x13) < 4)))) {
      puVar2 = (ushort *)(iVar6 + (uint)*puVar2 * 8);
      if (uVar5 == 0x16) {
        puVar3 = (ushort *)(iVar6 + (uint)*puVar2 * 8);
        if (*puVar3 == uVar7) {
          uVar7 = func_0x00da6e30(param_1,0x16,*(undefined2 *)(param_1 + 0x78),puVar3[1],puVar2[1]);
          return uVar7;
        }
      }
      else if (*puVar2 == uVar7) {
        uVar7 = func_0x00da6e30(param_1,uVar5,*(undefined2 *)(param_1 + 0x78),puVar2[1]);
        return uVar7;
      }
    }
  }
  uVar7 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar7) {
    func_0x00da6c20();
  }
  bVar4 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar7 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar7 * 8);
  iVar6 = param_1 + (uint)bVar4 * 2;
  puVar1[3] = *(undefined2 *)(iVar6 + 0x146);
  *(short *)(iVar6 + 0x146) = (short)uVar7;
  *(byte *)((int)puVar1 + 5) = bVar4;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar4 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
  *(byte *)(puVar1 + 2) = bVar4;
  return (uint)bVar4 * 0x1000000 + uVar7;
}



uint __fastcall FUN_00dace50(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  if (((*(uint *)(param_1 + 0x68) & 0x10000) != 0) && (*(char *)(param_1 + 0x95) == '\x18')) {
    if (*(int *)(*(int *)(param_1 + 0x90) + 0x10) != 0) {
      if (((*(char *)(param_1 + 0x85) != 'V') || (0x7fff < *(ushort *)(param_1 + 0x82))) ||
         ((*(byte *)(param_1 + 0x84) & 0x40) != 0)) goto FUN_00da6bb0;
      uVar6 = func_0x00d75920(*(undefined4 *)(param_1 + 0x54),
                              *(undefined4 *)
                               (*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8),
                              *(int *)(param_1 + 0x90),4);
      uVar5 = func_0x00da70c0(param_1,uVar6);
      *(undefined2 *)(*(int *)(param_1 + 0x10) + 2 + (uint)*(ushort *)(param_1 + 0x78) * 8) = uVar5;
    }
    return (uint)*(ushort *)(param_1 + 0x78);
  }
FUN_00da6bb0:
  uVar4 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar4) {
    func_0x00da6c20();
  }
  bVar3 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar4 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar4 * 8);
  iVar2 = param_1 + (uint)bVar3 * 2;
  puVar1[3] = *(undefined2 *)(iVar2 + 0x146);
  *(short *)(iVar2 + 0x146) = (short)uVar4;
  *(byte *)((int)puVar1 + 5) = bVar3;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(puVar1 + 2) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar4;
}



uint __fastcall FUN_00daced0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    if (*(char *)(param_1 + 0x85) == 'U') {
      if (*(short *)(param_1 + 0x82) == 0) {
        uVar8 = func_0x00da70c0(param_1,param_1 + -0x178,4);
        return uVar8;
      }
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x86);
      iVar7 = *(int *)(param_1 + 0x78);
      uVar8 = (uint)*(ushort *)(param_1 + 0x78);
      uVar12 = (uint)*(byte *)(param_1 + 0x7d);
      if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
        uVar10 = (uint)*(ushort *)(param_1 + 0x7a);
        if (*(ushort *)(param_1 + 0x7a) <= uVar8) {
          uVar10 = uVar8;
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x146 + uVar12 * 2);
        if (uVar10 < uVar8) {
          do {
            iVar2 = *(int *)(param_1 + 0x10) + uVar8 * 8;
            if (*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 8) == iVar7) {
              return uVar8 + (uint)*(byte *)(iVar2 + 4) * 0x1000000;
            }
            uVar8 = (uint)*(ushort *)(iVar2 + 6);
          } while (uVar10 < uVar8);
        }
      }
      uVar8 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar8) {
        func_0x00da6c20();
      }
      *(uint *)(param_1 + 8) = uVar8 + 1;
      piVar3 = (int *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
      *(undefined2 *)((int)piVar3 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar12 * 2);
      *piVar3 = iVar7;
      *(short *)(param_1 + 0x146 + uVar12 * 2) = (short)uVar8;
      *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)(param_1 + 0x7d);
      bVar5 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar5;
      *(byte *)(piVar3 + 1) = bVar5;
      return (uint)bVar5 * 0x1000000 + uVar8;
    }
    if (*(char *)(param_1 + 0x85) == 'V') {
      if ((*(char *)(*(int *)(param_1 + 0x10) + 5 + (uint)*(ushort *)(param_1 + 0x80) * 8) == 'U')
         && (*(short *)(*(int *)(param_1 + 0x10) + 2 + (uint)*(ushort *)(param_1 + 0x80) * 8) == 0))
      {
        return (uint)*(ushort *)(param_1 + 0x82);
      }
    }
  }
  if (((*(uint *)(param_1 + 0x68) & 0x20000) != 0) &&
     (uVar8 = (uint)*(ushort *)(param_1 + 500), uVar8 != 0)) {
    iVar7 = *(int *)(param_1 + 0x10);
    do {
      puVar4 = (ushort *)(iVar7 + uVar8 * 8);
      puVar11 = (ushort *)(param_1 + 0x80);
      puVar13 = (ushort *)(iVar7 + (uint)*puVar4 * 8);
      cVar9 = *(char *)(param_1 + 0x85);
      if (cVar9 == *(char *)((int)puVar13 + 5)) {
        do {
          uVar6 = puVar11[1];
          if (uVar6 != puVar13[1]) break;
          if (cVar9 == 'U') {
            if (uVar6 == 0) {
              return uVar8;
            }
          }
          else if ((cVar9 == 'a') && (uVar6 == 0x17)) break;
          cVar9 = *(char *)(iVar7 + 5 + (uint)*puVar11 * 8);
          puVar11 = (ushort *)(iVar7 + (uint)*puVar11 * 8);
          uVar6 = *puVar13;
          puVar13 = (ushort *)(iVar7 + (uint)uVar6 * 8);
        } while (cVar9 == *(char *)(iVar7 + 5 + (uint)uVar6 * 8));
      }
      uVar8 = (uint)puVar4[3];
    } while (uVar8 != 0);
  }
  uVar8 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar8) {
    func_0x00da6c20();
  }
  bVar5 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar8 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
  iVar7 = param_1 + (uint)bVar5 * 2;
  puVar1[3] = *(undefined2 *)(iVar7 + 0x146);
  *(short *)(iVar7 + 0x146) = (short)uVar8;
  *(byte *)((int)puVar1 + 5) = bVar5;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar5 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar5;
  *(byte *)(puVar1 + 2) = bVar5;
  return (uint)bVar5 * 0x1000000 + uVar8;
}



int __fastcall FUN_00dacfe0(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  if (*(ushort *)(param_1 + 0x82) < 0x8000) {
    uVar3 = *(ushort *)(param_1 + 0x7a);
    iVar5 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    *(int *)(iVar5 + 0x8c) = *(int *)(param_1 + 0x54);
    *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(iVar5 + 0x88);
    (*(code *)(&PTR_FUN_010cdd48)[(uint)uVar3 * 2])();
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x7d) = 0x56;
    uVar7 = FUN_00d75820(4);
    uVar6 = func_0x00da70c0(param_1,uVar7);
    *(undefined2 *)(param_1 + 0x7a) = uVar6;
    return 1;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar4) {
    func_0x00da6c20();
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar4 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar4 * 8);
  iVar5 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar5 + 0x146);
  *(short *)(iVar5 + 0x146) = (short)uVar4;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar4;
}



int __fastcall FUN_00dad060(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  if ((*(ushort *)(param_1 + 0x82) < 0x8000) &&
     (puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x80) * 8),
     *(ushort *)(*(int *)(param_1 + 0x10) + 2 + (uint)*(ushort *)(param_1 + 0x80) * 8) < 0x8000)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    *(int *)(iVar4 + 0x8c) = *(int *)(param_1 + 0x54);
    *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(iVar4 + 0x88);
    FUN_00d759e0((undefined4 *)(iVar4 + 0x80),
                 *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)(ushort)puVar1[1] * 8),
                 *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8));
    *(undefined1 *)(param_1 + 0x7d) = 0x56;
    *(undefined2 *)(param_1 + 0x78) = *puVar1;
    uVar6 = FUN_00d75820(4);
    uVar5 = func_0x00da70c0(param_1,uVar6);
    *(undefined2 *)(param_1 + 0x7a) = uVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar3) {
    func_0x00da6c20();
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar3 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar3 * 8);
  iVar4 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
  *(short *)(iVar4 + 0x146) = (short)uVar3;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar3;
}



int __fastcall FUN_00dad0f0(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  uVar8 = (uint)*(ushort *)(param_1 + 0x82);
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 0x82) < 0x8000) {
    uVar3 = *(ushort *)(param_1 + 0x80);
    uVar7 = *(undefined4 *)(iVar4 + (uint)*(ushort *)(iVar4 + 2 + (uint)uVar3 * 8) * 8);
    iVar5 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    puVar9 = (undefined4 *)(iVar5 + 0x80);
    *(int *)(iVar5 + 0x8c) = *(int *)(param_1 + 0x54);
    *puVar9 = *(undefined4 *)(iVar5 + 0x88);
    switch((uint)*(ushort *)(param_1 + 0x7a)) {
    case 10:
      FUN_00d74d70(puVar9,uVar7,*(undefined4 *)(iVar4 + 8 + uVar8 * 8),
                   *(undefined4 *)(iVar4 + 0xc + uVar8 * 8));
      break;
    default:
      (*(code *)(&PTR_FUN_010cdd48)[(uint)*(ushort *)(param_1 + 0x7a) * 2])
                (puVar9,uVar7,*(undefined8 *)(iVar4 + 8 + uVar8 * 8));
      break;
    case 0xe:
      FUN_00d74d50(puVar9,uVar7,*(undefined4 *)(iVar4 + uVar8 * 8));
      break;
    case 0xf:
      FUN_00d74c50(puVar9,uVar7,*(undefined4 *)(iVar4 + uVar8 * 8));
    }
    *(undefined1 *)(param_1 + 0x7d) = 0x56;
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(iVar4 + (uint)uVar3 * 8);
    uVar7 = FUN_00d75820();
    uVar6 = func_0x00da70c0(param_1,uVar7);
    *(undefined2 *)(param_1 + 0x7a) = uVar6;
    return 1;
  }
  uVar8 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar8) {
    func_0x00da6c20();
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar8 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
  iVar4 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
  *(short *)(iVar4 + 0x146) = (short)uVar8;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar8;
}



void __fastcall FUN_00dad1f0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 0x84) & 0x1f) == 10) {
    for (uVar2 = *(uint *)(**(int **)(param_1 + -0xbc) + (uint)*(ushort *)(iVar1 + 6) * 0x10);
        (uVar2 & 0xf0000000) == 0x80000000;
        uVar2 = *(uint *)(**(int **)(param_1 + -0xbc) + (uVar2 & 0xffff) * 0x10)) {
    }
    uVar3 = uVar2 >> 0x1c;
    if ((((uVar3 == 0) || (uVar3 == 5)) || (uVar3 == 2)) ||
       (((uVar3 == 6 || ((uVar2 & 0xf4000000) == 0x34000000)) ||
        ((uVar2 & 0xf8000000) == 0x38000000)))) {
      func_0x00da72c0(param_1,0x1a,*(int *)(param_1 + 0x90) + iVar1);
      return;
    }
  }
  func_0x00da72c0(param_1,0x19,*(int *)(param_1 + 0x90) + iVar1);
  return;
}



void __fastcall FUN_00dad2a0(int param_1)

{
  func_0x00da72c0(param_1,*(undefined1 *)(param_1 + 0x85),
                  *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x80));
  return;
}



undefined4 __fastcall FUN_00dad2c0(int param_1)

{
  undefined2 uVar1;
  
  if ((*(char *)(param_1 + 0x85) != '\x17') && (*(char *)(param_1 + 0x85) != '\x1d')) {
    return 0;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x7a);
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  return 1;
}



undefined4 __fastcall FUN_00dad2f0(int param_1)

{
  undefined4 uStack_10;
  
  uStack_10 = SUB84(*(double *)(param_1 + 0x88) + 6755399441055744.0,0);
  *(undefined4 *)(param_1 + 0x78) = uStack_10;
  return 2;
}



void __fastcall FUN_00dad320(int param_1)

{
  func_0x00da71e0(param_1,(double)*(int *)(param_1 + 0x80));
  return;
}



void __fastcall FUN_00dad350(int param_1)

{
  func_0x00da71e0(param_1,(double)*(int *)(param_1 + 0x80) +
                          (double)(&DAT_011a2c10)[-(*(int *)(param_1 + 0x80) >> 0x1f)]);
  return;
}



undefined4 __fastcall FUN_00dad390(int param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar2 = *(ushort *)(param_1 + 0x7a) & 0x1f;
  if (uVar2 == 0xf) {
    *(int *)(param_1 + 0x78) = (int)(char)uVar1;
    return 2;
  }
  if (uVar2 == 0x10) {
    *(uint *)(param_1 + 0x78) = uVar1 & 0xff;
    return 2;
  }
  uVar3 = (int)(short)uVar1;
  if (uVar2 != 0x11) {
    uVar3 = uVar1 & 0xffff;
  }
  *(uint *)(param_1 + 0x78) = uVar3;
  return 2;
}



void __fastcall FUN_00dad3e0(int param_1)

{
  if ((*(ushort *)(param_1 + 0x7a) & 0x800) != 0) {
    func_0x00da7140(param_1,*(int *)(param_1 + 0x80),*(int *)(param_1 + 0x80) >> 0x1f);
    return;
  }
  func_0x00da7140(param_1,*(undefined4 *)(param_1 + 0x80),0);
  return;
}



void __fastcall FUN_00dad410(undefined4 param_1)

{
  undefined8 in_XMM0_Qa;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  func_0x008abf00();
  uStack_c = (undefined4)((ulonglong)in_XMM0_Qa >> 0x20);
  uStack_10 = (undefined4)in_XMM0_Qa;
  func_0x00da71e0(param_1,uStack_10,uStack_c);
  return;
}



void __fastcall FUN_00dad450(undefined4 param_1)

{
  undefined8 in_XMM0_Qa;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  func_0x008abeb0();
  uStack_c = (undefined4)((ulonglong)in_XMM0_Qa >> 0x20);
  uStack_10 = (undefined4)in_XMM0_Qa;
  func_0x00da71e0(param_1,uStack_10,uStack_c);
  return;
}



undefined4 __fastcall FUN_00dad490(int param_1)

{
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x88);
  return 2;
}



undefined4 __fastcall FUN_00dad4a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(double *)(param_1 + 0x88);
  if ((*(char *)(param_1 + 0x7c) < '\0') && (*(double *)(param_1 + 0x88) != (double)iVar1)) {
    return 3;
  }
  *(int *)(param_1 + 0x78) = iVar1;
  return 2;
}



undefined4 __fastcall FUN_00dad4e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x008abe00();
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  return 2;
}



void __fastcall FUN_00dad510(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x008abe00();
  func_0x00da7140(param_1,uVar1);
  return;
}



void __fastcall FUN_00dad530(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x008abe00();
  if (((int)((ulonglong)lVar1 >> 0x20) < 1) && (lVar1 < 0)) {
    lVar1 = func_0x008abe00();
  }
  func_0x00da7140(param_1,lVar1);
  return;
}



void __fastcall FUN_00dad570(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d8c980(4);
  func_0x00da70c0(param_1,uVar1);
  return;
}



void __fastcall FUN_00dad590(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x7a) == 0) {
    uVar1 = FUN_00d73f10();
    func_0x00da70c0(param_1,uVar1,4);
    return;
  }
  uVar1 = FUN_00d73ef0();
  func_0x00da70c0(param_1,uVar1,4);
  return;
}



undefined4 __fastcall FUN_00dad5d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  iVar1 = FUN_00d72c80();
  if (iVar1 != 0) {
    uStack_14 = (undefined4)((ulonglong)uStack_10 >> 0x20);
    uStack_18 = (undefined4)uStack_10;
    uVar2 = func_0x00da71e0(param_1,uStack_18,uStack_14);
    return uVar2;
  }
  return 3;
}



char __fastcall FUN_00dad620(int param_1)

{
  return ((*(short *)(param_1 + 0x78) == *(short *)(param_1 + 0x7a)) !=
         (*(char *)(param_1 + 0x7d) == '\t')) + '\x03';
}



undefined2 __fastcall FUN_00dad640(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x82);
  if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
    return 0;
  }
  return *(undefined2 *)(param_1 + 0x78);
}



undefined2 __fastcall FUN_00dad660(int param_1)

{
  return *(undefined2 *)(param_1 + 0x78);
}



undefined4 __fastcall FUN_00dad670(int param_1)

{
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
  return 1;
}



undefined2 __fastcall FUN_00dad690(int param_1)

{
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  return *(undefined2 *)(param_1 + 0x80);
}



undefined4 __fastcall FUN_00dad6b0(int param_1)

{
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x7a);
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x7d) = 0x2a;
  return 1;
}



undefined4 __fastcall FUN_00dad6e0(int param_1)

{
  if ((*(byte *)(param_1 + 0x94) & 0x40) != 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x7d) = 0x2a;
  return 1;
}



undefined2 __fastcall FUN_00dad710(int param_1)

{
  if (*(int *)(param_1 + 0x98) == 0 && *(int *)(param_1 + 0x9c) == 0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  return 0;
}



undefined4 __fastcall FUN_00dad730(int param_1)

{
  undefined2 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  uStack_c = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20) ^ 0x80000000;
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x80);
  uStack_10 = (undefined4)*(undefined8 *)(param_1 + 0x98);
  uVar1 = func_0x00da71e0(param_1,uStack_10,uStack_c);
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  return 1;
}



undefined4 __fastcall FUN_00dad790(int param_1)

{
  if ((*(byte *)(param_1 + 0x94) & 0x40) != 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x7d) = 0x29;
  return 1;
}



undefined2 __fastcall FUN_00dad7c0(int param_1)

{
  double dVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  dVar1 = *(double *)(param_1 + 0x98);
  if (dVar1 == 1.0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  if (dVar1 == -1.0) {
    uVar4 = *(undefined2 *)(param_1 + 0x78);
    uVar3 = func_0x00da6ed0(param_1,0xe,((param_1 + 0xe7U & 0xfffffff0) - param_1) + 0x1e8);
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    *(undefined2 *)(param_1 + 0x7a) = uVar3;
    *(undefined1 *)(param_1 + 0x7d) = 0x2f;
    return 1;
  }
  if (*(char *)(param_1 + 0x7d) == '+') {
    if (dVar1 == 2.0) {
      *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
      *(undefined1 *)(param_1 + 0x7d) = 0x29;
      return 1;
    }
  }
  else if (*(char *)(param_1 + 0x7d) == ',') {
    uVar2 = *(uint *)(param_1 + 0x9c);
    uVar5 = uVar2 >> 0x14 & 0x7ff;
    if ((*(int *)(param_1 + 0x98) == 0 && (uVar2 & 0xfffff) == 0) && (uVar5 - 1 < 0x7fd)) {
      *(undefined1 *)(param_1 + 0x7d) = 0x2b;
      uVar4 = func_0x00da71e0(param_1,0,(0x7fe - uVar5) * 0x100000 | uVar2 & 0x80000000);
      *(undefined2 *)(param_1 + 0x7a) = uVar4;
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dad8b0(int param_1)

{
  undefined2 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  uStack_c = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20) ^ 0x80000000;
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
  uStack_10 = (undefined4)*(undefined8 *)(param_1 + 0x98);
  uVar1 = func_0x00da71e0(param_1,uStack_10,uStack_c);
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  return 1;
}



undefined4 __fastcall FUN_00dad910(int param_1)

{
  if (((*(byte *)(param_1 + 0x84) & 0x40) == 0) && ((*(byte *)(param_1 + 0x94) & 0x40) == 0)) {
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x90);
    return 1;
  }
  return 0;
}



uint __fastcall FUN_00dad950(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  double dVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 unaff_EBX;
  uint uVar14;
  uint uVar15;
  undefined4 unaff_EBP;
  int iVar16;
  undefined4 unaff_ESI;
  int iVar17;
  undefined4 unaff_EDI;
  
  dVar5 = *(double *)(param_1 + 0x98);
  if (dVar5 == 0.0) {
    uVar11 = func_0x00da71e0(param_1,0,0x3ff00000);
    return uVar11;
  }
  if (dVar5 == 1.0) {
    return (uint)*(ushort *)(param_1 + 0x78);
  }
  if (dVar5 != 2.0) {
    return 0;
  }
  uVar7 = *(undefined2 *)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x7c) = 0x2b0e;
  *(undefined2 *)(param_1 + 0x78) = uVar7;
  *(undefined2 *)(param_1 + 0x7a) = uVar7;
  uVar11 = *(uint *)(param_1 + 0x68);
  if ((uVar11 & 0xfff0000) != 0x3ff0000) {
    if (((uVar11 & 0x10000) == 0) && (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0)) {
FUN_00dac890:
      iVar16 = *(int *)(param_1 + 0x78);
      uVar11 = (uint)*(ushort *)(param_1 + 0x78);
      uVar15 = (uint)*(byte *)(param_1 + 0x7d);
      if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
        uVar12 = (uint)*(ushort *)(param_1 + 0x7a);
        if (*(ushort *)(param_1 + 0x7a) <= uVar11) {
          uVar12 = uVar11;
        }
        uVar11 = (uint)*(ushort *)(param_1 + 0x146 + uVar15 * 2);
        if (uVar12 < uVar11) {
          do {
            iVar2 = *(int *)(param_1 + 0x10) + uVar11 * 8;
            if (*(int *)(*(int *)(param_1 + 0x10) + uVar11 * 8) == iVar16) {
              return uVar11 + (uint)*(byte *)(iVar2 + 4) * 0x1000000;
            }
            uVar11 = (uint)*(ushort *)(iVar2 + 6);
          } while (uVar12 < uVar11);
        }
      }
      uVar11 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar11) {
        func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      }
      *(uint *)(param_1 + 8) = uVar11 + 1;
      piVar3 = (int *)(*(int *)(param_1 + 0x10) + uVar11 * 8);
      *(undefined2 *)((int)piVar3 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar15 * 2);
      *piVar3 = iVar16;
      *(short *)(param_1 + 0x146 + uVar15 * 2) = (short)uVar11;
      *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)(param_1 + 0x7d);
      bVar6 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar6;
      *(byte *)(piVar3 + 1) = bVar6;
      return (uint)bVar6 * 0x1000000 + uVar11;
    }
    if ((((uVar11 & 0xb0000) != 0xb0000) &&
        ((((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x40 &&
         (*(byte *)(param_1 + 0x7d) != 0x47)))) ||
       (((uVar11 & 0x110000) != 0x110000 &&
        (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x60)))) {
      uVar11 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar11) {
        func_0x00da6c20(unaff_EDI);
      }
      bVar6 = *(byte *)(param_1 + 0x7d);
      *(uint *)(param_1 + 8) = uVar11 + 1;
      puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar11 * 8);
      iVar16 = param_1 + (uint)bVar6 * 2;
      puVar1[3] = *(undefined2 *)(iVar16 + 0x146);
      *(short *)(iVar16 + 0x146) = (short)uVar11;
      *(byte *)((int)puVar1 + 5) = bVar6;
      *puVar1 = *(undefined2 *)(param_1 + 0x78);
      puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
      bVar6 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar6;
      *(byte *)(puVar1 + 2) = bVar6;
      return (uint)bVar6 * 0x1000000 + uVar11;
    }
  }
LAB_00daf340:
  uVar8 = *(ushort *)(param_1 + 0x78);
  iVar16 = (uint)*(byte *)(param_1 + 0x7d) * 0x20000;
  if (*(uint *)(param_1 + 0x14) <= (uint)uVar8) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar8 * 8);
    uVar9 = puVar4[1];
    iVar16 = iVar16 + (uint)*(byte *)((int)puVar4 + 5) * 0x400;
    *(undefined4 *)(param_1 + 0x80) = *puVar4;
    *(undefined4 *)(param_1 + 0x84) = uVar9;
    if (uVar8 < 0x7ffd) {
      uVar9 = puVar4[3];
      *(undefined4 *)(param_1 + 0x88) = puVar4[2];
      *(undefined4 *)(param_1 + 0x8c) = uVar9;
    }
  }
  uVar11 = (uint)*(ushort *)(param_1 + 0x7a);
  if (uVar11 < *(uint *)(param_1 + 0x14)) {
    uVar11 = iVar16 + (uVar11 & 0x3ff);
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar11 * 8);
    uVar9 = puVar4[1];
    uVar11 = iVar16 + (uint)*(byte *)((int)puVar4 + 5);
    *(undefined4 *)(param_1 + 0x90) = *puVar4;
    *(undefined4 *)(param_1 + 0x94) = uVar9;
    if (*(ushort *)(param_1 + 0x7a) < 0x7ffd) {
      uVar9 = puVar4[3];
      *(undefined4 *)(param_1 + 0x98) = puVar4[2];
      *(undefined4 *)(param_1 + 0x9c) = uVar9;
    }
  }
  uVar15 = 0;
  do {
    uVar14 = uVar15 & 0x1ffff | uVar11;
    uVar13 = ((uVar14 >> 0xb | uVar14 << 0x15) - uVar14 >> 0x12 |
             ((uVar14 & 0xfffff800) + uVar14 * -0x800) * 8) % 0x3e9;
    uVar12 = *(uint *)(&DAT_010ce4f8 + uVar13 * 4);
    if (((uVar12 & 0xffffff) == uVar14) ||
       (uVar12 = *(uint *)(&DAT_010ce4fc + uVar13 * 4), (uVar12 & 0xffffff) == uVar14)) {
      uVar12 = (*(code *)(&PTR_FUN_010ce280)[uVar12 >> 0x18])();
      uVar12 = uVar12 & 0xffff;
      if (uVar12 != 0) break;
    }
    if (uVar15 == 0xfffff) goto FUN_00dac890;
    uVar15 = (uVar15 | uVar15 >> 10) ^ 0xffc00;
  } while( true );
  if (4 < uVar12) {
    return (uint)*(byte *)(*(int *)(param_1 + 0x10) + 4 + uVar12 * 8) * 0x1000000 + uVar12;
  }
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) {
        return 0xffff;
      }
      func_0x00d71770(param_1,0x18);
      pcVar10 = (code *)swi(3);
      uVar11 = (*pcVar10)();
      return uVar11;
    }
    iVar16 = *(int *)(param_1 + 0x78);
    uVar8 = *(ushort *)(param_1 + 0x174);
    while( true ) {
      uVar11 = (uint)uVar8;
      if (uVar11 == 0) {
        uVar11 = *(uint *)(param_1 + 0x14);
        if (uVar11 <= *(uint *)(param_1 + 0x118)) {
          func_0x00da6f00(param_1,unaff_EDI,unaff_ESI,unaff_EBX);
        }
        iVar2 = *(int *)(param_1 + 0x10);
        iVar17 = uVar11 - 1;
        *(int *)(param_1 + 0x14) = iVar17;
        *(int *)(iVar2 + iVar17 * 8) = iVar16;
        *(undefined2 *)(iVar2 + 4 + iVar17 * 8) = 0x1713;
        *(undefined2 *)(iVar2 + iVar17 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
        *(short *)(param_1 + 0x174) = (short)iVar17;
        return uVar11 + 0x12ffffff;
      }
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar11 * 8) == iVar16) break;
      uVar8 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar11 * 8 + 6);
    }
    return uVar11 + 0x13000000;
  }
  goto LAB_00daf340;
}



undefined2 __fastcall FUN_00dad9c0(int param_1)

{
  if ((((*(byte *)(param_1 + 0x84) & 0x40) == 0) && ((*(byte *)(param_1 + 0x82) & 0x1f) == 0xe)) &&
     ((char)*(byte *)(param_1 + 0x84) < '\0')) {
    return *(undefined2 *)(param_1 + 0x80);
  }
  return 0;
}



undefined2 __fastcall FUN_00dad9f0(int param_1)

{
  if ((((byte)(*(ushort *)(param_1 + 0x7a) >> 5) ^ *(byte *)(param_1 + 0x82)) & 0x1f) == 0) {
    return *(undefined2 *)(param_1 + 0x80);
  }
  return 0;
}



undefined4 __fastcall FUN_00dada10(int param_1)

{
  ushort uVar1;
  
  if ((*(byte *)(param_1 + 0x84) & 0x40) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x82) & 0x1f;
    if (uVar1 == 0x13) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      *(undefined2 *)(param_1 + 0x7a) = 0xab3;
      return 1;
    }
    if (uVar1 == 0x14) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      *(undefined2 *)(param_1 + 0x7a) = 0x2b4;
      return 1;
    }
  }
  return 0;
}



undefined2 __fastcall FUN_00dada70(int param_1)

{
  ushort uVar1;
  
  if (((*(byte *)(param_1 + 0x84) & 0x40) == 0) &&
     ((uVar1 = *(ushort *)(param_1 + 0x82) & 0x1f, uVar1 == 0x13 || (uVar1 == 0x14)))) {
    if (uVar1 == (*(ushort *)(param_1 + 0x7a) >> 5 & 0x1f)) {
      return *(undefined2 *)(param_1 + 0x80);
    }
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
    *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) & 0x3e0 | uVar1;
    return 1;
  }
  return 0;
}



undefined2 __fastcall FUN_00dadad0(int param_1)

{
  if (((*(byte *)(param_1 + 0x84) & 0x40) == 0) && ((*(byte *)(param_1 + 0x82) & 0x1f) == 0xd)) {
    return *(undefined2 *)(param_1 + 0x80);
  }
  return 0;
}



undefined2 __fastcall FUN_00dadaf0(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x82) & 0x1f;
  if (uVar1 == 0x13) {
    return *(undefined2 *)(param_1 + 0x80);
  }
  if (uVar1 == 0x14) {
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
    *(undefined2 *)(param_1 + 0x7a) = 0x274;
    *(undefined1 *)(param_1 + 0x7d) = 0x5b;
    return 1;
  }
  return 0;
}



undefined2 __fastcall FUN_00dadb30(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x82) & 0x1f;
  if ((uVar1 != 0x13) && (uVar1 != 0x14)) {
    return 0;
  }
  return *(undefined2 *)(param_1 + 0x78);
}



undefined4 __fastcall FUN_00dadb50(int param_1)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uStack_8;
  int iStack_4;
  
  sVar1 = *(short *)(param_1 + 0x78);
  if ((*(ushort *)(param_1 + 0x7a) & 0x800) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x85) == 'F') {
    bVar3 = *(byte *)(param_1 + 0x84) & 0x1f;
    if ((bVar3 == 0x10) || (bVar3 == 0x12)) goto LAB_00dadc14;
LAB_00dadb99:
    iStack_4 = 0;
    uStack_8 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x85) != ')') || (0x7fff < *(ushort *)(param_1 + 0x82)))
    goto LAB_00dadb99;
    uStack_8 = *(uint *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8);
    iStack_4 = (int)uStack_8 >> 0x1f;
    sVar1 = *(short *)(param_1 + 0x80);
  }
  if (sVar1 == *(short *)(param_1 + 0x914)) {
    if (*(char *)(param_1 + 0x91d) == '\0') {
      uVar2 = *(ushort *)(param_1 + 0x918);
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x916);
    }
    uVar4 = (uint)uVar2;
    if (((uVar4 != 0) && (*(char *)(*(int *)(param_1 + 0x10) + 5 + uVar4 * 8) == '\x17')) &&
       (uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + uVar4 * 8),
       -1 < (int)(((int)uVar4 >> 0x1f) + iStack_4 + (uint)CARRY4(uVar4,uStack_8)))) {
LAB_00dadc14:
      *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) & 0xf7ff;
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dadc40(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  
  uVar5 = *(undefined2 *)(param_1 + 0x82);
  uVar1 = *(undefined1 *)(param_1 + 0x85);
  uVar3 = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x7a) = uVar3;
  uVar6 = bVar2 & 0x1f | 0x5b00;
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
  *(ushort *)(param_1 + 0x7c) = uVar6;
  uVar4 = func_0x00daf2b0();
  *(ushort *)(param_1 + 0x7c) = uVar6;
  *(undefined2 *)(param_1 + 0x78) = uVar5;
  *(undefined2 *)(param_1 + 0x7a) = uVar3;
  uVar5 = func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x78) = uVar4;
  *(undefined2 *)(param_1 + 0x7a) = uVar5;
  *(ushort *)(param_1 + 0x7c) = CONCAT11(uVar1,bVar2) & 0xff1f;
  return 1;
}



uint __fastcall FUN_00dadcf0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x78);
    uVar5 = (uint)*(ushort *)(param_1 + 0x1fc);
    if (uVar6 < uVar5) {
      do {
        puVar4 = (ushort *)(uVar5 * 8 + *(int *)(param_1 + 0x10));
        if (((*puVar4 == uVar6) && ((puVar4[1] & 0xfff) == (*(ushort *)(param_1 + 0x7a) & 0xfff)))
           && ((*(byte *)(param_1 + 0x7c) & 0x80) <= ((byte)puVar4[2] & 0x80))) {
          return uVar5;
        }
        uVar5 = (uint)puVar4[3];
      } while (uVar6 < uVar5);
    }
  }
  uVar5 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar5) {
    func_0x00da6c20();
  }
  bVar3 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar5 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar5 * 8);
  iVar2 = param_1 + (uint)bVar3 * 2;
  puVar1[3] = *(undefined2 *)(iVar2 + 0x146);
  *(short *)(iVar2 + 0x146) = (short)uVar5;
  *(byte *)((int)puVar1 + 5) = bVar3;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(puVar1 + 2) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar5;
}



undefined4 __fastcall FUN_00dadd80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_418;
  undefined1 *puStack_414;
  undefined1 *puStack_410;
  uint uStack_40c;
  uint uStack_408;
  undefined1 auStack_404 [1008];
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  if (((*(byte *)(param_1 + 0x84) & 0x40) != 0) || (*(short *)(param_1 + 0x168) != 0)) {
    return 0;
  }
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_418;
  if ((*(uint *)(param_1 + 0x68) & 0x200000) != 0) {
    puStack_414 = auStack_404;
    puStack_410 = auStack_14;
    uStack_408 = *(byte *)(param_1 + 0x7c) & 0x1f;
    if (*(char *)(param_1 + 0x7d) == '\\') {
      uStack_40c = 0;
    }
    else {
      uStack_40c = (uint)*(ushort *)(param_1 + 0x7a);
    }
    iStack_418 = param_1;
    iVar1 = func_0x00db1960(&iStack_418,*(undefined2 *)(param_1 + 0x78),0);
    if (iVar1 < 2) {
      func_0x00db1c10(param_1,&iStack_418);
      uVar2 = FUN_008ab370();
      return uVar2;
    }
  }
  uVar2 = FUN_008ab370();
  return uVar2;
}



undefined2 __fastcall FUN_00dadda0(int param_1)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  return 0;
}



undefined2 __fastcall FUN_00daddc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    return *(undefined2 *)(param_1 + 0x7a);
  }
  if (iVar1 == 1) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  if (iVar1 == 2) {
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x7d) = 0x35;
    return 1;
  }
  return 0;
}



undefined2 __fastcall FUN_00dade00(int param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  *(undefined1 *)(param_1 + 0x7d) = 0x29;
  uVar1 = func_0x00da6cb0();
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  return 1;
}



undefined4 __fastcall FUN_00dade30(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x85) == '\x17') {
    uVar1 = *(uint *)(param_1 + 0x80);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x88) | *(uint *)(param_1 + 0x8c);
  }
  if (uVar1 == 0) {
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x7a);
    *(undefined1 *)(param_1 + 0x7d) = 0x2f;
    return 1;
  }
  return 0;
}



undefined2 __fastcall FUN_00dade70(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 == 0 && *(int *)(param_1 + 0x9c) == 0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  *(undefined1 *)(param_1 + 0x7d) = 0x29;
  uVar2 = func_0x00da7140(param_1,-iVar1,-(*(int *)(param_1 + 0x9c) + (uint)(iVar1 != 0)));
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  return 1;
}



undefined2 __fastcall FUN_00dadeb0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (-1 < (int)uVar1) {
    if (uVar1 == 0) {
      return *(undefined2 *)(param_1 + 0x7a);
    }
    if (uVar1 == 1) {
      return *(undefined2 *)(param_1 + 0x78);
    }
    if ((uVar1 & uVar1 - 1) == 0) {
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      *(undefined1 *)(param_1 + 0x7d) = 0x24;
      uVar3 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x7a) = uVar3;
      return 1;
    }
  }
  return 0;
}



undefined2 __fastcall FUN_00dadf00(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if ((*(int *)(param_1 + 0x9c) == 0) && (uVar1 < 0x80000000)) {
    if (uVar1 == 0) {
      return *(undefined2 *)(param_1 + 0x7a);
    }
    if (uVar1 == 1) {
      return *(undefined2 *)(param_1 + 0x78);
    }
    if ((uVar1 & uVar1 - 1) == 0) {
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      *(undefined1 *)(param_1 + 0x7d) = 0x24;
      uVar3 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x7a) = uVar3;
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dadf60(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if ((0 < (int)uVar1) && ((uVar1 & uVar1 - 1) == 0)) {
    *(undefined1 *)(param_1 + 0x7d) = 0x21;
    uVar2 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7a) = uVar2;
    return 1;
  }
  return 0;
}



undefined4 __fastcall FUN_00dadf90(int param_1)

{
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    return 2;
  }
  return 0;
}



undefined4 __fastcall FUN_00dadfb0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_1 + 0x78) == *(short *)(param_1 + 0x7a)) &&
     ((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe)) {
    if ((0x604000U >> (*(byte *)(param_1 + 0x7c) & 0x1f) & 1) != 0) {
      uVar1 = func_0x00da7140(param_1,0,0);
      return uVar1;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    return 2;
  }
  return 0;
}



short __fastcall FUN_00dae000(int param_1)

{
  short sVar1;
  
  if (((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe) && ((*(byte *)(param_1 + 0x84) & 0x40) == 0)) {
    if (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x80)) {
      return *(short *)(param_1 + 0x82);
    }
    sVar1 = 0;
    if (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x82)) {
      sVar1 = *(short *)(param_1 + 0x80);
    }
    return sVar1;
  }
  return 0;
}



undefined4 __fastcall FUN_00dae050(int param_1)

{
  undefined2 uVar1;
  
  if ((((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe) && ((*(byte *)(param_1 + 0x84) & 0x40) == 0)) &&
     (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x80))) {
    uVar1 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x78) = uVar1;
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x82);
    return 1;
  }
  return 0;
}



undefined2 __fastcall FUN_00dae0a0(int param_1)

{
  if ((((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe) && ((*(byte *)(param_1 + 0x94) & 0x40) == 0)) &&
     (*(short *)(param_1 + 0x78) == *(short *)(param_1 + 0x90))) {
    return *(undefined2 *)(param_1 + 0x92);
  }
  return 0;
}



undefined4 __fastcall FUN_00dae0d0(int param_1)

{
  undefined2 uVar1;
  
  if (((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe) && ((*(byte *)(param_1 + 0x94) & 0x40) == 0)) {
    if (*(short *)(param_1 + 0x78) == *(short *)(param_1 + 0x90)) {
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x92);
      uVar1 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x78) = uVar1;
      return 1;
    }
    if (*(short *)(param_1 + 0x78) == *(short *)(param_1 + 0x92)) {
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x90);
      uVar1 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x78) = uVar1;
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dae140(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  if ((((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe) && ((*(byte *)(param_1 + 0x84) & 0x40) == 0)) &&
     ((*(byte *)(param_1 + 0x94) & 0x40) == 0)) {
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_1 + 0x90);
    sVar3 = *(short *)(param_1 + 0x92);
    sVar4 = *(short *)(param_1 + 0x82);
    if (sVar1 == sVar2) {
      *(short *)(param_1 + 0x78) = sVar4;
      *(short *)(param_1 + 0x7a) = sVar3;
      return 1;
    }
    if (sVar1 == sVar3) {
      *(short *)(param_1 + 0x78) = sVar4;
      *(short *)(param_1 + 0x7a) = sVar2;
      return 1;
    }
    if (sVar4 == sVar2) {
      *(short *)(param_1 + 0x78) = sVar1;
      *(short *)(param_1 + 0x7a) = sVar3;
      return 1;
    }
    if (sVar4 == sVar3) {
      *(short *)(param_1 + 0x78) = sVar1;
      *(short *)(param_1 + 0x7a) = sVar2;
      return 1;
    }
  }
  return 0;
}



undefined2 __fastcall FUN_00dae1e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x95) == '\x17') {
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar1 = (int)uVar2 >> 0x1f;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x98);
    uVar1 = *(uint *)(param_1 + 0x9c);
  }
  if (uVar2 == 0 && uVar1 == 0) {
    return *(undefined2 *)(param_1 + 0x7a);
  }
  if ((uVar2 & uVar1) == 0xffffffff) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  return 0;
}



undefined2 __fastcall FUN_00dae220(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x95) == '\x17') {
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar1 = (int)uVar2 >> 0x1f;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x98);
    uVar1 = *(uint *)(param_1 + 0x9c);
  }
  if (uVar2 == 0 && uVar1 == 0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  if ((uVar2 & uVar1) == 0xffffffff) {
    return *(undefined2 *)(param_1 + 0x7a);
  }
  return 0;
}



ushort __fastcall FUN_00dae260(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x95) == '\x17') {
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar1 = (int)uVar2 >> 0x1f;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x98);
    uVar1 = *(uint *)(param_1 + 0x9c);
  }
  if (uVar2 == 0 && uVar1 == 0) {
    return *(ushort *)(param_1 + 0x78);
  }
  bVar3 = (uVar2 & uVar1) == 0xffffffff;
  if (bVar3) {
    *(undefined2 *)(param_1 + 0x7a) = 0;
    *(undefined1 *)(param_1 + 0x7d) = 0x1f;
  }
  return (ushort)bVar3;
}



undefined2 __fastcall FUN_00dae2b0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x90) &
          ((0x604000U >> (*(byte *)(param_1 + 0x7c) & 0x1f) & 1) << 5 | 0x1f);
  if (uVar2 == 0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  if ((uVar2 == 1) && (*(char *)(param_1 + 0x7d) == '$')) {
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x7d) = 0x29;
    return 1;
  }
  if (uVar2 == *(uint *)(param_1 + 0x90)) {
    if (*(char *)(param_1 + 0x7d) != '(') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x7d) = 0x27;
  }
  uVar1 = func_0x00da6cb0();
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  return 1;
}



undefined4 __fastcall FUN_00dae330(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x92) * 8);
  if ((((*(byte *)(param_1 + 0x94) & 0x40) == 0) && (*(char *)((int)puVar1 + 5) == '\x17')) &&
     (uVar2 = (0x604000U >> (*(byte *)(param_1 + 0x7c) & 0x1f) & 1) << 5 | 0x1f,
     (*puVar1 & uVar2) == uVar2)) {
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x90);
    return 1;
  }
  return 0;
}



undefined2 __fastcall FUN_00dae390(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x85) == '\x17') {
    iVar1 = *(int *)(param_1 + 0x80);
    iVar2 = iVar1 >> 0x1f;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88);
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  if (iVar1 == 0 && iVar2 == 0) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  return 0;
}



undefined2 __fastcall FUN_00dae3c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x85) == '\x17') {
    uVar2 = *(uint *)(param_1 + 0x80);
    uVar1 = (int)uVar2 >> 0x1f;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x88);
    uVar1 = *(uint *)(param_1 + 0x8c);
  }
  if ((uVar2 != 0 || uVar1 != 0) && ((uVar2 & uVar1) != 0xffffffff)) {
    return 0;
  }
  return *(undefined2 *)(param_1 + 0x78);
}



undefined4 __fastcall FUN_00dae400(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8);
  if ((*(byte *)(param_1 + 0x84) & 0x40) == 0) {
    if (*(char *)((int)puVar1 + 5) == '\x17') {
      func_0x00daf610(*puVar1,*(undefined4 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0x7d));
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      uVar2 = func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x78) = uVar2;
      uVar2 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x7a) = uVar2;
      *(undefined2 *)(param_1 + 0x7c) = 0x2113;
      return 1;
    }
    if (*(char *)((int)puVar1 + 5) == '\x1d') {
      uVar4 = func_0x00daf4c0(param_1,puVar1[2],puVar1[3],*(int *)(param_1 + 0x90),
                              *(int *)(param_1 + 0x90) >> 0x1f,*(undefined1 *)(param_1 + 0x7d));
      uVar2 = *(undefined2 *)(param_1 + 0x84);
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      uVar3 = func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x78) = uVar3;
      uVar3 = func_0x00da7140(param_1,uVar4);
      *(undefined2 *)(param_1 + 0x7c) = uVar2;
      *(undefined2 *)(param_1 + 0x7a) = uVar3;
      return 1;
    }
  }
  return 0;
}



undefined2 __fastcall FUN_00dae4e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 5 + (uint)*(ushort *)(param_1 + 0x82) * 8) == '\x17') {
    iVar1 = *(int *)(param_1 + 0x90);
    iVar2 = func_0x00daf610(0xffffffff,
                            *(undefined4 *)
                             (*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8),
                            *(undefined1 *)(param_1 + 0x85));
    if (iVar2 == iVar1) {
      return *(undefined2 *)(param_1 + 0x78);
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dae530(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8);
  if (((*(byte *)(param_1 + 0x84) & 0x40) == 0) && (*(char *)((int)puVar1 + 5) == '\x17')) {
    iVar2 = func_0x00daf610(*puVar1,*(undefined4 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0x7d))
    ;
    if (iVar2 == (*(char *)(param_1 + 0x7d) == '!') - 1) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dae590(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8;
  if (((*(byte *)(param_1 + 0x84) & 0x40) == 0) && (*(char *)(iVar1 + 5) == '\x1d')) {
    lVar2 = func_0x00daf4c0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                            *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                            *(undefined1 *)(param_1 + 0x7d));
    if (*(char *)(param_1 + 0x7d) == '!') {
      uStack_4 = 0;
      uStack_8 = 0;
    }
    else {
      uStack_8 = 0xffffffff;
      uStack_4 = 0xffffffff;
    }
    if (lVar2 == CONCAT44(uStack_4,uStack_8)) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      return 1;
    }
  }
  return 0;
}



undefined2 __fastcall FUN_00dae620(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8);
  if (*(char *)(*(int *)(param_1 + 0x10) + 5 + (uint)*(ushort *)(param_1 + 0x82) * 8) == '\x17') {
    iVar3 = func_0x00daf610(*piVar1,*(undefined4 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0x7d))
    ;
    if (iVar3 == *piVar1) {
      return *(undefined2 *)(param_1 + 0x78);
    }
    if ((*(byte *)(param_1 + 0x84) & 0x40) == 0) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      uVar2 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x7a) = uVar2;
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dae690(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8;
  if (*(char *)(*(int *)(param_1 + 0x10) + 5 + (uint)*(ushort *)(param_1 + 0x82) * 8) == '\x1d') {
    uVar3 = func_0x00daf4c0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                            *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                            *(undefined1 *)(param_1 + 0x7d));
    if ((*(byte *)(param_1 + 0x84) & 0x40) == 0) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      uVar2 = func_0x00da7140(param_1,uVar3);
      *(undefined2 *)(param_1 + 0x7a) = uVar2;
      return 1;
    }
  }
  return 0;
}



undefined2 __fastcall FUN_00dae700(int param_1)

{
  if ((*(short *)(param_1 + 0x7a) != *(short *)(param_1 + 0x80)) &&
     (*(short *)(param_1 + 0x7a) != *(short *)(param_1 + 0x82))) {
    return 0;
  }
  return *(undefined2 *)(param_1 + 0x78);
}



undefined2 __fastcall FUN_00dae720(int param_1)

{
  if (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x82)) {
    return *(undefined2 *)(param_1 + 0x78);
  }
  return 0;
}



short __fastcall FUN_00dae740(int param_1)

{
  short sVar1;
  
  if ((*(byte *)(param_1 + 0x84) & 0x40) != 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x80)) {
    return *(short *)(param_1 + 0x82);
  }
  sVar1 = 0;
  if (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x82)) {
    sVar1 = *(short *)(param_1 + 0x80);
  }
  return sVar1;
}



undefined4 __fastcall FUN_00dae780(int param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8);
  if (((*(byte *)(param_1 + 0x84) & 0x40) != 0) || (*(char *)((int)puVar1 + 5) != '\x17')) {
    return 0;
  }
  uVar4 = (0x604000U >> (*(byte *)(param_1 + 0x7c) & 0x1f) & 1) << 5 | 0x1f;
  if ((uVar4 < (*(uint *)(param_1 + 0x90) & uVar4) + (*puVar1 & uVar4)) &&
     ((*(char *)(param_1 + 0x7d) == '$' || (*(char *)(param_1 + 0x7d) == '%')))) {
    if (uVar4 == 0x1f) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      return 2;
    }
    uVar3 = func_0x00da7140(param_1,0,0);
    return uVar3;
  }
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
  uVar2 = func_0x00da6cb0();
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  return 1;
}



undefined2 __fastcall FUN_00dae830(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 5 + (uint)*(ushort *)(param_1 + 0x82) * 8) == '\x17') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8);
    iVar3 = func_0x00daf610(iVar1,*(undefined4 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0x7d));
    if (iVar1 == iVar3) {
      return *(undefined2 *)(param_1 + 0x78);
    }
    if ((*(byte *)(param_1 + 0x84) & 0x40) == 0) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x80);
      uVar2 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x7a) = uVar2;
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00dae8a0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (((*(uint *)(param_1 + 0x68) & 0x800000) != 0) && (*(ushort *)(param_1 + 0x92) < 0x8000)) {
    iVar6 = *(int *)(param_1 + 0x10);
    puVar1 = (ushort *)(iVar6 + (uint)*(ushort *)(param_1 + 0x90) * 8);
    if ((*(char *)(iVar6 + 5 + (uint)*(ushort *)(param_1 + 0x90) * 8) == ')') &&
       ((uVar3 = puVar1[1], uVar3 < 0x8000 &&
        (*(int *)(iVar6 + (uint)*(ushort *)(param_1 + 0x92) * 8) ==
         -*(int *)(iVar6 + (uint)uVar3 * 8))))) {
      uVar3 = *puVar1;
      uVar4 = *(ushort *)(param_1 + 0x78);
      uVar8 = (uint)uVar4;
      if ((uint)uVar4 <= (uint)uVar3) {
        uVar8 = (uint)uVar3;
      }
      uVar5 = *(ushort *)(param_1 + 0x15a);
      while (uVar7 = (uint)uVar5, uVar8 < uVar7) {
        iVar2 = iVar6 + uVar7 * 8;
        if ((*(ushort *)(iVar6 + uVar7 * 8) == uVar4) && (*(ushort *)(iVar2 + 2) == uVar3)) {
          return 4;
        }
        uVar5 = *(ushort *)(iVar2 + 6);
      }
    }
  }
  return 0;
}



int __fastcall FUN_00dae930(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  ushort *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  if (((*(byte *)(param_1 + 0x84) & 0x40) != 0) || ((*(uint *)(param_1 + 0x68) & 0x800000) == 0)) {
    return 0;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x15a);
  uVar6 = (uint)*(ushort *)(param_1 + 0x78);
  if (uVar6 < uVar5) {
    do {
      puVar3 = (ushort *)(*(int *)(param_1 + 0x10) + uVar5 * 8);
      if ((*puVar3 == uVar6) && (puVar3[1] < 0x8000)) {
        if (*(uint *)(*(int *)(param_1 + 0x10) + (uint)puVar3[1] * 8) < *(uint *)(param_1 + 0x90)) {
          puVar3[1] = *(ushort *)(param_1 + 0x7a);
        }
        return 4;
      }
      uVar5 = (uint)puVar3[3];
    } while (uVar6 < uVar5);
  }
  uVar5 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar5) {
    func_0x00da6c20();
  }
  bVar4 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar5 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar5 * 8);
  iVar2 = param_1 + (uint)bVar4 * 2;
  puVar1[3] = *(undefined2 *)(iVar2 + 0x146);
  *(short *)(iVar2 + 0x146) = (short)uVar5;
  *(byte *)((int)puVar1 + 5) = bVar4;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar4 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
  *(byte *)(puVar1 + 2) = bVar4;
  return (uint)bVar4 * 0x1000000 + uVar5;
}



uint __fastcall FUN_00dae9b0(int param_1)

{
  if (((*(byte *)(param_1 + 0x7c) & 0x1f) != 0x13) &&
     (*(ushort *)(param_1 + 0x78) < *(ushort *)(param_1 + 0x168))) {
    return ((byte)~*(byte *)(*(int *)(param_1 + 0x10) + 4 + (uint)*(ushort *)(param_1 + 0x78) * 8) &
           0x40) >> 4;
  }
  return 0;
}



undefined4 __fastcall FUN_00dae9e0(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x7a);
  if (*(ushort *)(param_1 + 0x78) < uVar1) {
    *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x78);
    *(ushort *)(param_1 + 0x78) = uVar1;
    return 1;
  }
  return 0;
}



char __fastcall FUN_00daea10(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x78);
  uVar2 = *(ushort *)(param_1 + 0x7a);
  if (uVar1 == uVar2) {
    if ((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe) {
      return (*(char *)(param_1 + 0x7d) == '\b') + '\x03';
    }
  }
  else if (uVar1 < uVar2) {
    *(ushort *)(param_1 + 0x78) = uVar2;
    *(ushort *)(param_1 + 0x7a) = uVar1;
    return '\x01';
  }
  return '\0';
}



char __fastcall FUN_00daea50(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x78);
  uVar2 = *(ushort *)(param_1 + 0x7a);
  if (uVar1 == uVar2) {
    if ((*(byte *)(param_1 + 0x7c) & 0x1f) != 0xe) {
      return ((*(byte *)(param_1 + 0x7d) >> 1 ^ *(byte *)(param_1 + 0x7d)) & 1) + 3;
    }
  }
  else if (uVar1 < uVar2) {
    *(byte *)(param_1 + 0x7d) = *(byte *)(param_1 + 0x7d) ^ 3;
    *(ushort *)(param_1 + 0x78) = uVar2;
    *(ushort *)(param_1 + 0x7a) = uVar1;
    return '\x01';
  }
  return '\0';
}



ushort __fastcall FUN_00daeaa0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x78);
  uVar1 = *(ushort *)(param_1 + 0x7a);
  if (uVar2 != uVar1) {
    if (uVar2 < uVar1) {
      *(ushort *)(param_1 + 0x7a) = uVar2;
      *(ushort *)(param_1 + 0x78) = uVar1;
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



short __fastcall FUN_00daead0(int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (*(short *)(param_1 + 0x78) == *(short *)(param_1 + 0x7a)) {
    sVar1 = *(short *)(param_1 + 0x78);
  }
  return sVar1;
}



undefined4 __fastcall FUN_00daeaf0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x78);
  uVar2 = *(ushort *)(param_1 + 0x7a);
  if (uVar1 != uVar2) {
    if (uVar1 < uVar2) {
      *(ushort *)(param_1 + 0x78) = uVar2;
      *(ushort *)(param_1 + 0x7a) = uVar1;
      return 1;
    }
    return 0;
  }
  if ((0x604000U >> (*(byte *)(param_1 + 0x7c) & 0x1f) & 1) != 0) {
    uVar3 = func_0x00da7140(param_1,0,0);
    return uVar3;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 2;
}



undefined4 __fastcall FUN_00daeb50(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  undefined2 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x90);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (((*(byte *)(param_1 + 0x84) & 0x40) != 0) || (4 < iVar3)) {
    return 0;
  }
  uVar6 = *(ushort *)(param_1 + 0x80);
  bVar1 = *(byte *)(param_1 + 0x7d);
  if (*(char *)(*(int *)(param_1 + 0x10) + 5 + (uint)uVar6 * 8) != '@') {
    return 0;
  }
  if (bVar1 == 8) {
    uVar4 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7c) = 0x893;
    *(undefined2 *)(param_1 + 0x7a) = uVar4;
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x82);
    func_0x00daf2b0();
  }
  else {
    if (0x7fff < *(ushort *)(param_1 + 0x82)) {
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x82) * 8) != iVar3) {
      return 4;
    }
  }
  if (iVar3 < 1) {
    return 4;
  }
  if (iVar3 == 1) {
    sVar5 = 0x460f;
  }
  else {
    sVar5 = (iVar3 != 2) + 0x4612;
  }
  *(short *)(param_1 + 0x7c) = sVar5;
  *(ushort *)(param_1 + 0x78) = uVar6;
  *(ushort *)(param_1 + 0x7a) = (ushort)(1 < iVar3) * 4 + 1;
  uVar6 = func_0x00daf2b0();
  uVar4 = func_0x00daf780(param_1,*(int *)(param_1 + 0x10) + (uint)uVar6 * 8,iVar2 + 0x14);
  if (iVar3 == 3) {
    uVar7 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7c) = 0x2113;
    *(undefined2 *)(param_1 + 0x7a) = uVar7;
    *(ushort *)(param_1 + 0x78) = uVar6;
    uVar6 = func_0x00daf2b0();
  }
  *(undefined2 *)(param_1 + 0x7a) = uVar4;
  *(ushort *)(param_1 + 0x78) = uVar6;
  *(ushort *)(param_1 + 0x7c) = (ushort)bVar1 << 8 | 0x93;
  return 1;
}



undefined4 FUN_00daecd0(void)

{
  return 0x7fff;
}



uint __fastcall FUN_00daece0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x146 + (uint)*(byte *)(param_1 + 0x7d) * 2);
    if (uVar6 != 0) {
      iVar5 = *(int *)(param_1 + 0x10);
      do {
        uVar4 = *(ushort *)(iVar5 + uVar6 * 8);
        iVar2 = iVar5 + uVar6 * 8;
        if ((uVar4 < 0x8000) &&
           (*(int *)(*(int *)(iVar5 + (uint)uVar4 * 8) + 0x14 + (uint)*(byte *)(iVar2 + 3) * 4) ==
            *(int *)(*(int *)(param_1 + 0x80) + 0x14 + (uint)*(byte *)(param_1 + 0x7b) * 4))) {
          if (((*(byte *)(param_1 + 0x7d) != 0x3c) || (*(ushort *)(param_1 + 0x168) <= uVar6)) ||
             (((((*(short *)(param_1 + 0x1e4) == 0 && (*(short *)(param_1 + 0x1e6) == 0)) &&
                (*(short *)(param_1 + 0x1e8) == 0)) &&
               ((*(short *)(param_1 + 0x1ea) == 0 && (*(short *)(param_1 + 0x1ec) == 0)))) &&
              ((*(short *)(param_1 + 0x1ee) == 0 &&
               (((*(short *)(param_1 + 500) == 0 && (*(short *)(param_1 + 0x200) == 0)) &&
                (*(short *)(param_1 + 0x206) == 0)))))))) {
            return uVar6;
          }
          break;
        }
        uVar6 = (uint)*(ushort *)(iVar2 + 6);
      } while (uVar6 != 0);
    }
  }
  uVar6 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar6) {
    func_0x00da6c20();
  }
  bVar3 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar6 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar6 * 8);
  iVar5 = param_1 + (uint)bVar3 * 2;
  puVar1[3] = *(undefined2 *)(iVar5 + 0x146);
  *(short *)(iVar5 + 0x146) = (short)uVar6;
  *(byte *)((int)puVar1 + 5) = bVar3;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(puVar1 + 2) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar6;
}



undefined4 __fastcall FUN_00daedd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00daffc0();
  if (iVar1 != 0) {
    uVar2 = func_0x00da72c0(param_1,0x1a,param_1 + -0x118);
    return uVar2;
  }
  return 0;
}



undefined4 __fastcall FUN_00daee00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [12];
  
  func_0x00da7410(*(undefined4 *)(param_1 + 0x54),auStack_10,param_1 + 0x90);
  iVar1 = func_0x00d6f1b0(*(undefined4 *)(param_1 + 0x54),
                          *(undefined4 *)
                           (*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x80) * 8),
                          auStack_10);
  if (iVar1 == param_1 + -0x118) {
    iVar1 = func_0x00daffc0();
    if (iVar1 != 0) {
      uVar2 = func_0x00da72c0(param_1,0x1a,param_1 + -0x118);
      return uVar2;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00daee70(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    iVar1 = func_0x00db0310();
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x78) = (uint)*(ushort *)(param_1 + 0x80);
      return 2;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00daeea0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    iVar1 = func_0x00db0310();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x78) = (1 << (*(byte *)(param_1 + 0x82) & 0x1f)) + -1;
      return 2;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00daeee0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    iVar1 = func_0x00db0310();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x78) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x80) * 8) + 0x18);
      return 2;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00daef20(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    iVar1 = func_0x00db0310();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x78) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x80) * 8) + 0x1c);
      return 2;
    }
  }
  return 0;
}



int __fastcall FUN_00daef60(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar4 = FUN_00dac890();
  iVar5 = func_0x00db0310();
  if (iVar5 != 0) {
    return iVar4;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar3) {
    func_0x00da6c20(unaff_EDI,unaff_ESI);
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar3 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar3 * 8);
  iVar4 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
  *(short *)(iVar4 + 0x146) = (short)uVar3;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar3;
}



undefined4 __fastcall FUN_00daef90(int param_1)

{
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10);
    return 2;
  }
  return 0;
}



undefined2 __fastcall FUN_00daefb0(int param_1)

{
  if (((*(uint *)(param_1 + 0x68) & 0x10000) != 0) && ((*(byte *)(param_1 + 0x84) & 0x40) == 0)) {
    return *(undefined2 *)(param_1 + 0x82);
  }
  return 0;
}



undefined4 __fastcall FUN_00daefd0(int param_1)

{
  if (((*(uint *)(param_1 + 0x68) & 0x10000) != 0) && (*(short *)(param_1 + 0x82) == 2)) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    return 2;
  }
  return 0;
}



int __fastcall FUN_00daf000(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar4 = FUN_00dafee0();
  iVar5 = func_0x00db0290();
  if (iVar5 != 0) {
    return iVar4;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar3) {
    func_0x00da6c20(unaff_EDI,unaff_ESI);
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar3 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar3 * 8);
  iVar4 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
  *(short *)(iVar4 + 0x146) = (short)uVar3;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar3;
}



undefined4 __fastcall FUN_00daf030(int param_1)

{
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    *(uint *)(param_1 + 0x78) = (uint)*(byte *)(*(int *)(param_1 + 0x80) + 6);
    return 2;
  }
  return 0;
}



undefined4 __fastcall FUN_00daf050(int param_1)

{
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    *(uint *)(param_1 + 0x78) = (uint)*(ushort *)(*(int *)(param_1 + 0x80) + 6);
    return 2;
  }
  return 0;
}



undefined4 __fastcall FUN_00daf070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x68) & 0x10000) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if ((0x604000U >> (*(byte *)(param_1 + 0x7c) & 0x1f) & 1) != 0) {
    uVar2 = func_0x00da7140(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 8);
  return 2;
}



undefined2 __fastcall FUN_00daf0c0(int param_1)

{
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    return *(undefined2 *)(param_1 + 0x80);
  }
  return 0;
}



undefined2 __fastcall FUN_00daf0e0(int param_1)

{
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    return *(undefined2 *)(param_1 + 0x82);
  }
  return 0;
}



int __fastcall FUN_00daf100(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x7a) & 2) == 0) {
    iVar4 = *(int *)(param_1 + 0x210 + (uint)*(ushort *)(param_1 + 0x78) * 4);
  }
  else {
    iVar4 = FUN_00dac890();
    if ((ushort)iVar4 < *(ushort *)(param_1 + 0x15c)) {
      uVar3 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar3) {
        func_0x00da6c20();
      }
      bVar2 = *(byte *)(param_1 + 0x7d);
      *(uint *)(param_1 + 8) = uVar3 + 1;
      puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar3 * 8);
      iVar4 = param_1 + (uint)bVar2 * 2;
      puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
      *(short *)(iVar4 + 0x146) = (short)uVar3;
      *(byte *)((int)puVar1 + 5) = bVar2;
      *puVar1 = *(undefined2 *)(param_1 + 0x78);
      puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
      bVar2 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
      *(byte *)(puVar1 + 2) = bVar2;
      return (uint)bVar2 * 0x1000000 + uVar3;
    }
  }
  return iVar4;
}



void __fastcall FUN_00daf130(int param_1)

{
  func_0x00daf780(param_1,param_1 + 0x78,*(undefined4 *)(param_1 + 0x80));
  return;
}



uint __fastcall FUN_00daf150(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x146 + (uint)*(byte *)(param_1 + 0x7d) * 2);
  if (*(ushort *)(param_1 + 0x15c) < uVar4) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar4 * 8) == *(int *)(param_1 + 0x78)) {
        return uVar4;
      }
      uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + uVar4 * 8 + 6);
    } while (*(ushort *)(param_1 + 0x15c) < uVar4);
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar4) {
    func_0x00da6c20();
  }
  bVar3 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar4 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar4 * 8);
  iVar2 = param_1 + (uint)bVar3 * 2;
  puVar1[3] = *(undefined2 *)(iVar2 + 0x146);
  *(short *)(iVar2 + 0x146) = (short)uVar4;
  *(byte *)((int)puVar1 + 5) = bVar3;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(puVar1 + 2) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar4;
}



int __fastcall FUN_00daf1a0(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = FUN_00dac890();
  if (((ushort)iVar4 < *(ushort *)(param_1 + 0x168)) &&
     ((((((*(short *)(param_1 + 0x1e4) != 0 || (*(short *)(param_1 + 0x1e6) != 0)) ||
         (*(short *)(param_1 + 0x1e8) != 0)) ||
        ((*(short *)(param_1 + 0x1ea) != 0 || (*(short *)(param_1 + 0x1ec) != 0)))) ||
       ((*(short *)(param_1 + 0x1ee) != 0 ||
        ((*(short *)(param_1 + 500) != 0 || (*(short *)(param_1 + 0x200) != 0)))))) ||
      (*(short *)(param_1 + 0x206) != 0)))) {
    uVar3 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 0x114) <= uVar3) {
      func_0x00da6c20();
    }
    bVar2 = *(byte *)(param_1 + 0x7d);
    *(uint *)(param_1 + 8) = uVar3 + 1;
    puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar3 * 8);
    iVar4 = param_1 + (uint)bVar2 * 2;
    puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
    *(short *)(iVar4 + 0x146) = (short)uVar3;
    *(byte *)((int)puVar1 + 5) = bVar2;
    *puVar1 = *(undefined2 *)(param_1 + 0x78);
    puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
    bVar2 = *(byte *)(param_1 + 0x7c);
    *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
    *(byte *)(puVar1 + 2) = bVar2;
    return (uint)bVar2 * 0x1000000 + uVar3;
  }
  return iVar4;
}



int __fastcall FUN_00daf220(int param_1)

{
  return (-(uint)(*(ushort *)(param_1 + 0x78) < *(ushort *)(param_1 + 0x168)) & 0xfffffffc) + 4;
}



uint __fastcall FUN_00daf240(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  if (*(ushort *)(param_1 + 0x170) + 1 == *(int *)(param_1 + 8)) {
    return (uint)*(ushort *)(param_1 + 0x170);
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar4) {
    func_0x00da6c20();
  }
  bVar3 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar4 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar4 * 8);
  iVar2 = param_1 + (uint)bVar3 * 2;
  puVar1[3] = *(undefined2 *)(iVar2 + 0x146);
  *(short *)(iVar2 + 0x146) = (short)uVar4;
  *(byte *)((int)puVar1 + 5) = bVar3;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(puVar1 + 2) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar4;
}



int __fastcall FUN_00daf840(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 unaff_EBX;
  undefined2 *puVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint uVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar7 = iVar3 + (uint)*(ushort *)(param_1 + 0x78) * 8;
  uVar6 = (uint)*(ushort *)(param_1 + 0x146 + (uint)*(byte *)(param_1 + 0x7d) * 2);
  puVar5 = (undefined2 *)(param_1 + 0x146 + (uint)*(byte *)(param_1 + 0x7d) * 2);
  if (*(ushort *)(param_1 + 0x78) < uVar6) {
    do {
      puVar1 = (undefined2 *)(iVar3 + uVar6 * 8);
      iVar3 = func_0x00db0670(param_1,iVar7,iVar3 + (uint)*(ushort *)(iVar3 + uVar6 * 8) * 8);
      if (iVar3 == 1) {
        if (puVar1[1] != *(short *)(param_1 + 0x7a)) break;
      }
      else if (iVar3 == 2) {
        if (puVar1[1] == *(short *)(param_1 + 0x7a)) {
          return 4;
        }
        if (*(ushort *)(param_1 + 0x168) < uVar6) {
          puVar4 = (undefined2 *)(*(int *)(param_1 + 0x10) + (*(int *)(param_1 + 8) + -1) * 8);
          goto joined_r0x00daf8dc;
        }
        break;
      }
      uVar6 = (uint)(ushort)puVar1[3];
      puVar5 = puVar1 + 3;
      if (uVar6 <= *(ushort *)(param_1 + 0x78)) break;
      iVar3 = *(int *)(param_1 + 0x10);
    } while( true );
  }
FUN_00da6bb0:
  uVar6 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar6) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar6 + 1;
  puVar5 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar6 * 8);
  iVar7 = param_1 + (uint)bVar2 * 2;
  puVar5[3] = *(undefined2 *)(iVar7 + 0x146);
  *(short *)(iVar7 + 0x146) = (short)uVar6;
  *(byte *)((int)puVar5 + 5) = bVar2;
  *puVar5 = *(undefined2 *)(param_1 + 0x78);
  puVar5[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar5 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar6;
joined_r0x00daf8dc:
  if (puVar4 <= puVar1) goto LAB_00daf8f3;
  if ((*(char *)(puVar4 + 2) < '\0') || (*(char *)((int)puVar4 + 5) == 'I')) goto FUN_00da6bb0;
  puVar4 = puVar4 + -4;
  goto joined_r0x00daf8dc;
LAB_00daf8f3:
  *puVar5 = puVar1[3];
  *(undefined4 *)(puVar1 + 1) = 0xc000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  goto FUN_00da6bb0;
}



int __fastcall FUN_00daf920(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 unaff_EBX;
  uint uVar8;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  short *psVar12;
  
  puVar11 = (ushort *)(param_1 + 0x1e0);
  iVar6 = *(int *)(param_1 + 0x10);
  uVar9 = (uint)*puVar11;
  psVar12 = (short *)(iVar6 + (uint)*(ushort *)(param_1 + 0x78) * 8);
  if (*(ushort *)(param_1 + 0x78) < uVar9) {
    uVar3 = psVar12[1];
    uVar8 = (uint)uVar3;
    uVar10 = uVar8;
    do {
      uVar5 = (uint)*(ushort *)(iVar6 + uVar9 * 8);
      puVar1 = (undefined2 *)(iVar6 + uVar9 * 8);
      if ((short)uVar10 == *(short *)(iVar6 + 2 + uVar5 * 8)) {
        sVar4 = *(short *)(iVar6 + uVar5 * 8);
        if (*psVar12 == sVar4) {
LAB_00daf9a0:
          if ((puVar1[1] == *(short *)(param_1 + 0x7a)) && ((uVar8 < 0xe || (0x13 < uVar8)))) {
            return 4;
          }
          if (*(ushort *)(param_1 + 0x168) < uVar9) {
            puVar7 = (undefined2 *)(*(int *)(param_1 + 0x10) + (*(int *)(param_1 + 8) + -1) * 8);
            goto joined_r0x00dafa01;
          }
          break;
        }
        if (((ushort)((short)uVar10 - 5U) < 6) &&
           (iVar6 = func_0x00db08d0(param_1,*psVar12,sVar4), iVar6 != 1)) {
          if (iVar6 == 2) goto LAB_00daf9a0;
        }
        else if (puVar1[1] != *(short *)(param_1 + 0x7a)) break;
        iVar6 = *(int *)(param_1 + 0x10);
      }
      uVar9 = (uint)(ushort)puVar1[3];
      puVar11 = puVar1 + 3;
    } while (*(ushort *)(param_1 + 0x78) < uVar9);
  }
FUN_00da6bb0:
  uVar9 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar9) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar9 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar9 * 8);
  iVar6 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar6 + 0x146);
  *(short *)(iVar6 + 0x146) = (short)uVar9;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar9;
joined_r0x00dafa01:
  if (puVar7 <= puVar1) goto LAB_00dafa1c;
  if ((*(char *)(puVar7 + 2) < '\0') ||
     ((*(char *)((int)puVar7 + 5) == 'E' && (puVar7[1] == uVar3)))) goto FUN_00da6bb0;
  puVar7 = puVar7 + -4;
  goto joined_r0x00dafa01;
LAB_00dafa1c:
  *puVar11 = puVar1[3];
  *(undefined4 *)(puVar1 + 1) = 0xc000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  goto FUN_00da6bb0;
}



int __fastcall FUN_00dafa50(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  short *psVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  uint uVar10;
  undefined4 unaff_EDI;
  ushort *puVar11;
  
  uVar10 = (uint)*(ushort *)(param_1 + 0x1de);
  uVar7 = (uint)*(ushort *)(param_1 + 0x78);
  puVar11 = (ushort *)(param_1 + 0x1de);
  iVar4 = *(int *)(param_1 + 0x10);
  if (uVar7 < uVar10) {
    do {
      puVar8 = (ushort *)(uVar10 * 8 + iVar4);
      psVar9 = (short *)((uint)*puVar8 * 8 + iVar4);
      if (*(char *)(iVar4 + 5 + uVar7 * 8) == *(char *)((int)psVar9 + 5)) {
        if (*(short *)(iVar4 + uVar7 * 8) == *psVar9) {
          if (*(short *)(iVar4 + 2 + uVar7 * 8) == psVar9[1]) {
            if (puVar8[1] == *(ushort *)(param_1 + 0x7a)) {
              return 4;
            }
            if (*(ushort *)(param_1 + 0x168) < uVar10) {
              puVar6 = (ushort *)(*(int *)(param_1 + 8) * 8 + -8 + iVar4);
              goto joined_r0x00dafb26;
            }
            break;
          }
        }
        else if (((char)psVar9[1] == *(char *)(iVar4 + 2 + uVar7 * 8)) &&
                (puVar8[1] != *(ushort *)(param_1 + 0x7a))) break;
      }
      uVar10 = (uint)puVar8[3];
      puVar11 = puVar8 + 3;
    } while (uVar7 < uVar10);
  }
FUN_00da6bb0:
  uVar7 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar7) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar7 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar7 * 8);
  iVar4 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
  *(short *)(iVar4 + 0x146) = (short)uVar7;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar7;
joined_r0x00dafb26:
  if (puVar6 <= puVar8) goto LAB_00dafb35;
  if ((char)puVar6[2] < '\0') goto FUN_00da6bb0;
  puVar6 = puVar6 + -4;
  goto joined_r0x00dafb26;
LAB_00dafb35:
  *puVar11 = puVar8[3];
  puVar8[1] = 0;
  puVar8[2] = 0xc00;
  *puVar8 = 0;
  puVar8[3] = 0;
  if (((uVar10 + 1 < *(uint *)(param_1 + 8)) && (*(char *)((int)puVar8 + 0xd) == 'Y')) &&
     (puVar8[4] == uVar7)) {
    puVar1 = (undefined2 *)(param_1 + 0x1f8);
    uVar3 = *(ushort *)(param_1 + 0x1f8);
    while (puVar5 = (undefined2 *)(*(int *)(param_1 + 0x10) + (uint)uVar3 * 8),
          uVar10 + 1 < (uint)uVar3) {
      puVar1 = puVar5 + 3;
      uVar3 = puVar5[3];
    }
    *puVar1 = puVar5[3];
    *(undefined4 *)(puVar5 + 1) = 0xc000000;
    *puVar5 = 0;
    puVar5[3] = 0;
  }
  goto FUN_00da6bb0;
}



int __fastcall FUN_00dafbc0(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  ushort *puVar7;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint uVar8;
  int iVar9;
  
  puVar7 = (ushort *)(param_1 + 0x1e2);
  uVar6 = (uint)*(ushort *)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x10);
  uVar8 = (uint)*puVar7;
  iVar9 = iVar4 + uVar6 * 8;
  uVar3 = (uint)*(ushort *)(param_1 + 0x20c);
  if (*(ushort *)(param_1 + 0x20c) <= uVar6) {
    uVar3 = uVar6;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x1fa);
  if (*(ushort *)(param_1 + 0x1fa) <= uVar3) {
    uVar6 = uVar3;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x1e6);
  if (*(ushort *)(param_1 + 0x1e6) <= uVar6) {
    uVar3 = uVar6;
  }
  if (uVar3 < uVar8) {
    do {
      puVar1 = (undefined2 *)(iVar4 + uVar8 * 8);
      iVar4 = func_0x00db0950(param_1,iVar9,param_1 + 0x78,puVar1);
      if (iVar4 == 1) {
        if (puVar1[1] != *(short *)(param_1 + 0x7a)) break;
      }
      else if (iVar4 == 2) {
        if (puVar1[1] == *(short *)(param_1 + 0x7a)) {
          return 4;
        }
        if (*(ushort *)(param_1 + 0x168) < uVar8) {
          puVar5 = (undefined2 *)(*(int *)(param_1 + 0x10) + (*(int *)(param_1 + 8) + -1) * 8);
          goto joined_r0x00dafc79;
        }
        break;
      }
      uVar8 = (uint)(ushort)puVar1[3];
      puVar7 = puVar1 + 3;
      if (uVar8 <= uVar3) break;
      iVar4 = *(int *)(param_1 + 0x10);
    } while( true );
  }
FUN_00da6bb0:
  uVar3 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar3) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
  }
  bVar2 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar3 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar3 * 8);
  iVar9 = param_1 + (uint)bVar2 * 2;
  puVar1[3] = *(undefined2 *)(iVar9 + 0x146);
  *(short *)(iVar9 + 0x146) = (short)uVar3;
  *(byte *)((int)puVar1 + 5) = bVar2;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar2 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
  *(byte *)(puVar1 + 2) = bVar2;
  return (uint)bVar2 * 0x1000000 + uVar3;
joined_r0x00dafc79:
  if (puVar5 <= puVar1) goto LAB_00dafc93;
  if ((*(char *)(puVar5 + 2) < '\0') || (*(char *)((int)puVar5 + 5) == 'F')) goto FUN_00da6bb0;
  puVar5 = puVar5 + -4;
  goto joined_r0x00dafc79;
LAB_00dafc93:
  *puVar7 = puVar1[3];
  *(undefined4 *)(puVar1 + 1) = 0xc000000;
  *puVar1 = 0;
  puVar1[3] = 0;
  goto FUN_00da6bb0;
}



uint __fastcall FUN_00dafcc0(int param_1)

{
  undefined2 *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint uVar10;
  
  uVar10 = (uint)*(ushort *)(param_1 + 0x78);
  uVar9 = (uint)*(ushort *)(param_1 + 0x1dc);
  uVar6 = uVar10;
  if (uVar10 < uVar9) {
    iVar4 = *(int *)(param_1 + 0x10);
    do {
      uVar6 = (uint)*(ushort *)(iVar4 + 2 + (uint)*(ushort *)(iVar4 + uVar9 * 8) * 8);
      puVar2 = (ushort *)(iVar4 + uVar6 * 8);
      if (*(char *)(iVar4 + 5 + uVar6 * 8) == '\x1e') {
        bVar5 = *(byte *)(iVar4 + 4 + (uint)*puVar2 * 8);
      }
      else {
        bVar5 = (byte)puVar2[2];
      }
      uVar6 = uVar9;
    } while (((bVar5 & 0x1f) != 0xe) &&
            (uVar9 = (uint)*(ushort *)(iVar4 + uVar9 * 8 + 6), uVar6 = uVar10, uVar10 < uVar9));
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x1d8);
  if (uVar6 < uVar9) {
    iVar4 = *(int *)(param_1 + 0x10);
    do {
      if (*(ushort *)(uVar9 * 8 + iVar4) == uVar10) {
        iVar7 = func_0x00db0b30(param_1,uVar9,uVar10);
        if (iVar7 != 0) {
          uVar3 = *(ushort *)(param_1 + 0x1da);
          goto joined_r0x00dafd5e;
        }
        break;
      }
      uVar9 = (uint)*(ushort *)(uVar9 * 8 + 6 + iVar4);
    } while (uVar6 < uVar9);
  }
FUN_00da6bb0:
  uVar6 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar6) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
  }
  bVar5 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar6 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar6 * 8);
  iVar4 = param_1 + (uint)bVar5 * 2;
  puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
  *(short *)(iVar4 + 0x146) = (short)uVar6;
  *(byte *)((int)puVar1 + 5) = bVar5;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar5 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar5;
  *(byte *)(puVar1 + 2) = bVar5;
  return (uint)bVar5 * 0x1000000 + uVar6;
joined_r0x00dafd5e:
  if (uVar3 <= uVar9) {
    return uVar9;
  }
  iVar7 = (uint)uVar3 * 8;
  iVar8 = iVar7 + iVar4;
  iVar7 = (uint)*(ushort *)(iVar7 + iVar4) * 8;
  uVar6 = (uint)*(ushort *)(iVar4 + (uint)*(ushort *)(iVar7 + iVar4) * 8);
  if (uVar10 == uVar6) {
    uVar3 = *(ushort *)(iVar7 + 2 + iVar4);
    iVar7 = (uint)uVar3 * 8;
    if (((((*(byte *)(iVar8 + 4) & 0x1f) != 0) && (*(char *)(iVar7 + 5 + iVar4) == ')')) &&
        (*(ushort *)(iVar7 + iVar4) == uVar9)) &&
       ((uVar6 = (uint)*(ushort *)(iVar7 + 2 + iVar4), *(char *)(iVar4 + 5 + uVar6 * 8) == '\x17' &&
        (*(int *)(iVar4 + uVar6 * 8) == 1)))) {
      *(ushort *)(param_1 + 0x7a) = uVar3;
    }
    goto FUN_00da6bb0;
  }
  iVar7 = func_0x00db08d0(param_1,uVar10,uVar6);
  if (iVar7 != 0) goto FUN_00da6bb0;
  uVar3 = *(ushort *)(iVar8 + 6);
  goto joined_r0x00dafd5e;
}



int __fastcall FUN_00dafe10(int param_1)

{
  undefined2 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar10 = func_0x00db0be0(param_1,*(undefined2 *)(param_1 + 0x78));
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = *(int *)(param_1 + 0x10);
  puVar2 = (ushort *)(iVar10 + (uint)*(ushort *)(param_1 + 0x78) * 8);
  uVar11 = (uint)puVar2[1];
  if ((((*(char *)(iVar10 + 5 + uVar11 * 8) == ')') &&
       (uVar6 = *(ushort *)(iVar10 + 2 + uVar11 * 8), uVar6 < 0x8000)) &&
      (uVar11 = (uint)*(ushort *)(iVar10 + uVar11 * 8), puVar3 = (ushort *)(iVar10 + uVar11 * 8),
      *(char *)(iVar10 + 5 + uVar11 * 8) == ')')) &&
     ((uVar7 = puVar3[1], uVar7 < 0x8000 &&
      (*(int *)(iVar10 + (uint)uVar6 * 8) == -*(int *)(iVar10 + (uint)uVar7 * 8))))) {
    uVar6 = *puVar3;
    uVar7 = *puVar2;
    uVar8 = *(ushort *)(param_1 + 0x1b6);
    uVar11 = (uint)uVar7;
    if ((uint)uVar7 <= (uint)uVar6) {
      uVar11 = (uint)uVar6;
    }
    while (uVar9 = (uint)uVar8, uVar11 < uVar9) {
      iVar4 = iVar10 + uVar9 * 8;
      if ((*(ushort *)(iVar10 + uVar9 * 8) == uVar7) && (*(ushort *)(iVar4 + 2) == uVar6)) {
        iVar10 = func_0x00db0be0(param_1,uVar9);
        if (iVar10 != 0) {
          return iVar10;
        }
        break;
      }
      uVar8 = *(ushort *)(iVar4 + 6);
    }
  }
  uVar11 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar11) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
  }
  bVar5 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar11 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar11 * 8);
  iVar10 = param_1 + (uint)bVar5 * 2;
  puVar1[3] = *(undefined2 *)(iVar10 + 0x146);
  *(short *)(iVar10 + 0x146) = (short)uVar11;
  *(byte *)((int)puVar1 + 5) = bVar5;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar5 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar5;
  *(byte *)(puVar1 + 2) = bVar5;
  return (uint)bVar5 * 0x1000000 + uVar11;
}



uint __fastcall FUN_00dafee0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  undefined4 unaff_EBX;
  uint uVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  undefined4 unaff_EDI;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x78);
  uVar10 = (uint)*(ushort *)(param_1 + 0x1e0);
  if (uVar9 < uVar10) {
    iVar8 = *(int *)(param_1 + 0x10);
    sVar7 = *(short *)(param_1 + 0x7a);
    iVar6 = iVar8;
    do {
      uVar5 = (uint)*(ushort *)(iVar8 + uVar10 * 8);
      iVar2 = iVar8 + uVar10 * 8;
      if (sVar7 == *(short *)(iVar8 + 2 + uVar5 * 8)) {
        sVar7 = *(short *)(iVar8 + uVar5 * 8);
        if (*(short *)(param_1 + 0x78) == sVar7) {
LAB_00daff8b:
          return (uint)*(ushort *)(iVar2 + 2);
        }
        if ((5 < (ushort)(*(short *)(param_1 + 0x7a) - 5U)) ||
           (iVar8 = iVar6, iVar6 = func_0x00db08d0(param_1,*(short *)(param_1 + 0x78),sVar7),
           iVar6 == 1)) goto LAB_00daf260;
        if (iVar6 == 2) goto LAB_00daff8b;
        sVar7 = *(short *)(param_1 + 0x7a);
        iVar6 = iVar8;
      }
      uVar10 = (uint)*(ushort *)(iVar2 + 6);
    } while (uVar9 < uVar10);
  }
  uVar10 = uVar9;
  if ((*(short *)(param_1 + 0x7a) == 5) &&
     ((cVar4 = *(char *)(*(int *)(param_1 + 0x10) + 5 + uVar9 * 8), cVar4 == 'Q' || (cVar4 == 'R')))
     ) {
    uVar10 = func_0x00da7160(param_1,0xb);
    return uVar10;
  }
LAB_00daf260:
  uVar9 = (uint)*(ushort *)(param_1 + 0x146 + (uint)*(byte *)(param_1 + 0x7d) * 2);
  if (uVar10 < uVar9) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar9 * 8) == *(int *)(param_1 + 0x78)) {
        return uVar9;
      }
      uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + uVar9 * 8 + 6);
    } while (uVar10 < uVar9);
  }
  uVar10 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar10) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
  }
  bVar3 = *(byte *)(param_1 + 0x7d);
  *(uint *)(param_1 + 8) = uVar10 + 1;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar10 * 8);
  iVar8 = param_1 + (uint)bVar3 * 2;
  puVar1[3] = *(undefined2 *)(iVar8 + 0x146);
  *(short *)(iVar8 + 0x146) = (short)uVar10;
  *(byte *)((int)puVar1 + 5) = bVar3;
  *puVar1 = *(undefined2 *)(param_1 + 0x78);
  puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
  bVar3 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
  *(byte *)(puVar1 + 2) = bVar3;
  return (uint)bVar3 * 0x1000000 + uVar10;
}



int __fastcall FUN_00daffa0(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = func_0x00db0be0(param_1,*(undefined2 *)(param_1 + 0x78));
  if (iVar4 == 0) {
    uVar3 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 0x114) <= uVar3) {
      func_0x00da6c20();
    }
    bVar2 = *(byte *)(param_1 + 0x7d);
    *(uint *)(param_1 + 8) = uVar3 + 1;
    puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar3 * 8);
    iVar4 = param_1 + (uint)bVar2 * 2;
    puVar1[3] = *(undefined2 *)(iVar4 + 0x146);
    *(short *)(iVar4 + 0x146) = (short)uVar3;
    *(byte *)((int)puVar1 + 5) = bVar2;
    *puVar1 = *(undefined2 *)(param_1 + 0x78);
    puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
    bVar2 = *(byte *)(param_1 + 0x7c);
    *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar2;
    *(byte *)(puVar1 + 2) = bVar2;
    return (uint)bVar2 * 0x1000000 + uVar3;
  }
  return iVar4;
}



uint __fastcall FUN_00db01b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  uint uVar10;
  undefined4 unaff_EDI;
  uint uVar11;
  
  uVar11 = (uint)*(ushort *)(param_1 + 0x80);
  uVar10 = (uint)*(ushort *)(param_1 + 0x1bc);
  if (uVar11 < uVar10) {
    iVar8 = *(int *)(param_1 + 0x10);
    do {
      uVar7 = (uint)*(ushort *)(iVar8 + uVar10 * 8);
      iVar2 = iVar8 + uVar10 * 8;
      if (uVar11 == uVar7) {
        if ((*(short *)(param_1 + 0x90) == *(short *)(iVar2 + 2)) &&
           (iVar8 = func_0x00db0b30(param_1,uVar10,uVar11), iVar8 != 0)) {
          return uVar10;
        }
        goto FUN_00dac890;
      }
      iVar3 = iVar8 + uVar11 * 8;
      iVar8 = iVar8 + uVar7 * 8;
      if ((*(char *)(iVar3 + 5) == 'Q') || (*(char *)(iVar3 + 5) == 'R')) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((*(char *)(iVar8 + 5) == 'Q') || (*(char *)(iVar8 + 5) == 'R')) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar5) {
        iVar9 = iVar8;
        iVar8 = iVar3;
        if (!bVar6) goto LAB_00db0221;
      }
      else {
        iVar9 = iVar3;
        if (!bVar6) goto FUN_00dac890;
LAB_00db0221:
        iVar8 = func_0x00db0800(param_1,iVar8,iVar9);
        if (iVar8 != 0) goto FUN_00dac890;
      }
      uVar10 = (uint)*(ushort *)(iVar2 + 6);
      iVar8 = *(int *)(param_1 + 0x10);
    } while (uVar11 < uVar10);
  }
  if ((*(char *)(*(int *)(param_1 + 0x10) + 5 + uVar11 * 8) == 'R') &&
     (iVar8 = func_0x00db0b30(param_1,uVar11,uVar11), iVar8 != 0)) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0x7f;
  }
FUN_00dac890:
  iVar8 = *(int *)(param_1 + 0x78);
  uVar10 = (uint)*(ushort *)(param_1 + 0x78);
  uVar11 = (uint)*(byte *)(param_1 + 0x7d);
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x7a);
    if (*(ushort *)(param_1 + 0x7a) <= uVar10) {
      uVar7 = uVar10;
    }
    uVar10 = (uint)*(ushort *)(param_1 + 0x146 + uVar11 * 2);
    if (uVar7 < uVar10) {
      do {
        iVar2 = *(int *)(param_1 + 0x10) + uVar10 * 8;
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar10 * 8) == iVar8) {
          return uVar10 + (uint)*(byte *)(iVar2 + 4) * 0x1000000;
        }
        uVar10 = (uint)*(ushort *)(iVar2 + 6);
      } while (uVar7 < uVar10);
    }
  }
  uVar10 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x114) <= uVar10) {
    func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
  }
  *(uint *)(param_1 + 8) = uVar10 + 1;
  piVar1 = (int *)(*(int *)(param_1 + 0x10) + uVar10 * 8);
  *(undefined2 *)((int)piVar1 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar11 * 2);
  *piVar1 = iVar8;
  *(short *)(param_1 + 0x146 + uVar11 * 2) = (short)uVar10;
  *(undefined1 *)((int)piVar1 + 5) = *(undefined1 *)(param_1 + 0x7d);
  bVar4 = *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
  *(byte *)(piVar1 + 1) = bVar4;
  return (uint)bVar4 * 0x1000000 + uVar10;
}



uint __fastcall FUN_00db03c0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x1de);
  uVar11 = (uint)*(ushort *)(param_1 + 0x78);
  iVar7 = *(int *)(param_1 + 0x10);
  uVar10 = 0x8000;
  uVar12 = uVar11;
  if (0x8000 < uVar9) {
    do {
      iVar2 = iVar7 + uVar9 * 8;
      psVar3 = (short *)(iVar7 + (uint)*(ushort *)(iVar7 + uVar9 * 8) * 8);
      if (*(char *)(iVar7 + 5 + uVar11 * 8) == *(char *)((int)psVar3 + 5)) {
        if (*(short *)(iVar7 + (uint)*(ushort *)(param_1 + 0x78) * 8) == *psVar3) {
          if (*(short *)(iVar7 + 2 + (uint)*(ushort *)(param_1 + 0x78) * 8) == psVar3[1]) {
            return (uint)*(ushort *)(iVar2 + 2);
          }
        }
        else {
          uVar10 = uVar9;
          if ((char)psVar3[1] == *(char *)(iVar7 + 2 + (uint)*(ushort *)(param_1 + 0x78) * 8))
          break;
        }
      }
      uVar9 = (uint)*(ushort *)(iVar2 + 6);
      uVar10 = 0x8000;
    } while (0x8000 < uVar9);
    uVar12 = (uint)*(ushort *)(param_1 + 0x78);
  }
  uVar6 = *(ushort *)(param_1 + 0x1ce);
  while( true ) {
    uVar9 = (uint)uVar6;
    if (uVar9 <= uVar10) {
      uVar12 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar12) {
        func_0x00da6c20();
      }
      bVar5 = *(byte *)(param_1 + 0x7d);
      *(uint *)(param_1 + 8) = uVar12 + 1;
      puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar12 * 8);
      iVar7 = param_1 + (uint)bVar5 * 2;
      puVar1[3] = *(undefined2 *)(iVar7 + 0x146);
      *(short *)(iVar7 + 0x146) = (short)uVar12;
      *(byte *)((int)puVar1 + 5) = bVar5;
      *puVar1 = *(undefined2 *)(param_1 + 0x78);
      puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
      bVar5 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar5;
      *(byte *)(puVar1 + 2) = bVar5;
      return (uint)bVar5 * 0x1000000 + uVar12;
    }
    uVar8 = (uint)*(ushort *)(iVar7 + uVar9 * 8);
    if (uVar8 == uVar12) break;
    piVar4 = (int *)(iVar7 + uVar8 * 8);
    if (*piVar4 == *(int *)(iVar7 + uVar11 * 8)) {
      uVar12 = (uint)*(ushort *)(param_1 + 0x78);
      if (*(char *)((int)piVar4 + 5) == *(char *)(iVar7 + 5 + uVar12 * 8)) {
        return uVar9;
      }
    }
    else {
      uVar12 = (uint)*(ushort *)(param_1 + 0x78);
    }
    uVar6 = *(ushort *)(iVar7 + uVar9 * 8 + 6);
  }
  return uVar9;
}



uint __fastcall FUN_00db04b0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  undefined4 unaff_EBX;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  uint uVar11;
  undefined4 unaff_EDI;
  
  uVar10 = (uint)*(ushort *)(param_1 + 0x78);
  iVar6 = *(int *)(param_1 + 0x10);
  iVar8 = iVar6 + uVar10 * 8;
  uVar5 = uVar10;
  if ((*(ushort *)(param_1 + 0x7a) & 1) != 0) goto LAB_00db04ed;
  if ((*(ushort *)(param_1 + 0x7a) & 2) != 0) {
FUN_00da6bb0:
    uVar10 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 0x114) <= uVar10) {
      func_0x00da6c20(unaff_EDI,unaff_ESI,unaff_EBX);
    }
    bVar3 = *(byte *)(param_1 + 0x7d);
    *(uint *)(param_1 + 8) = uVar10 + 1;
    puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar10 * 8);
    iVar8 = param_1 + (uint)bVar3 * 2;
    puVar1[3] = *(undefined2 *)(iVar8 + 0x146);
    *(short *)(iVar8 + 0x146) = (short)uVar10;
    *(byte *)((int)puVar1 + 5) = bVar3;
    *puVar1 = *(undefined2 *)(param_1 + 0x78);
    puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
    bVar3 = *(byte *)(param_1 + 0x7c);
    *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
    *(byte *)(puVar1 + 2) = bVar3;
    return (uint)bVar3 * 0x1000000 + uVar10;
  }
  uVar11 = (uint)*(ushort *)(param_1 + 0x1e2);
  do {
    uVar5 = (uint)*(ushort *)(param_1 + 0x20c);
    if (*(ushort *)(param_1 + 0x20c) <= uVar10) {
      uVar5 = uVar10;
    }
    uVar9 = (uint)*(ushort *)(param_1 + 0x1fa);
    if (*(ushort *)(param_1 + 0x1fa) <= uVar5) {
      uVar9 = uVar5;
    }
    while (uVar5 = uVar9, uVar9 < uVar11) {
      iVar2 = iVar6 + uVar11 * 8;
      iVar6 = func_0x00db0950(param_1,iVar8,param_1 + 0x78,iVar2);
      uVar5 = uVar11;
      if (iVar6 == 1) break;
      if (iVar6 == 2) {
        bVar3 = *(byte *)(*(int *)(param_1 + 0x10) + 4 + (uint)*(ushort *)(iVar2 + 2) * 8);
        if (((bVar3 ^ *(byte *)(param_1 + 0x7c)) & 0x1f) == 0) {
          return (uint)*(ushort *)(iVar2 + 2);
        }
        uVar4 = *(byte *)(param_1 + 0x7c) & 0x1f;
        uVar7 = bVar3 & 0x1f;
        if ((uVar4 == 0xf) || (uVar4 == 0x11)) {
          uVar4 = uVar4 | 0x800;
        }
        else if ((uVar4 != 0x10) && (uVar4 != 0x12)) goto LAB_00db062b;
        uVar7 = uVar4;
        uVar4 = 0x13;
LAB_00db062b:
        *(ushort *)(param_1 + 0x7c) = uVar4 | 0x5b00;
        *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(iVar2 + 2);
        *(ushort *)(param_1 + 0x7a) = uVar4 << 5 | uVar7;
        return 1;
      }
      iVar6 = *(int *)(param_1 + 0x10);
      uVar11 = (uint)*(ushort *)(iVar2 + 6);
    }
LAB_00db04ed:
    uVar11 = (uint)*(ushort *)(param_1 + 0x1d2);
    if (uVar5 < uVar11) {
      do {
        iVar6 = *(int *)(param_1 + 0x10) + uVar11 * 8;
        if ((*(ushort *)(*(int *)(param_1 + 0x10) + uVar11 * 8) == uVar10) &&
           (((*(byte *)(iVar6 + 4) ^ *(byte *)(param_1 + 0x7c)) & 0x1f) == 0)) {
          return uVar11;
        }
        uVar11 = (uint)*(ushort *)(iVar6 + 6);
      } while (uVar5 < uVar11);
    }
    if (((((*(byte *)(param_1 + 0x7a) & 1) != 0) || (*(short *)(param_1 + 0x168) == 0)) ||
        (uVar10 != *(ushort *)(param_1 + 0x78))) ||
       (uVar10 = func_0x00db0f70(param_1,iVar8), uVar10 == 0)) goto FUN_00da6bb0;
    uVar11 = (uint)*(ushort *)(param_1 + 0x1e2);
    if (uVar5 < uVar11) {
      do {
        uVar11 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 6 + uVar11 * 8);
      } while (uVar5 < uVar11);
    }
    iVar6 = *(int *)(param_1 + 0x10);
    iVar8 = iVar6 + uVar10 * 8;
  } while( true );
}



void __fastcall FUN_00db1fe0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  
  if (*(uint *)(param_1 + 8) < *(int *)(param_1 + 0x620) + 0x8000U) {
    func_0x00d717b0(param_1,1);
LAB_00db21a0:
    func_0x00d71770(param_1,4);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar4 = *(int *)(param_1 + 0x54);
    puVar5 = *(undefined4 **)(iVar4 + 0x10);
    puVar6 = (uint *)puVar5[-1];
    if (((((((uint)puVar6 & 3) == 0) && (uVar9 = *puVar6 & 0xff, uVar9 != 0x41)) && (uVar9 != 0x43))
        && ((uVar9 != 0x49 && (uVar9 != 0x3f)))) &&
       ((cVar2 = *(char *)(*(int *)(param_1 + 0x5c) + 6), cVar2 != '\x13' &&
        ((cVar2 != -0x75 && (cVar2 != -0x6f)))))) {
      bVar3 = *(byte *)((int)puVar6 - 3);
      iVar7 = *(int *)(param_1 + 0x6c);
      if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(param_1 + 0x61c)) {
        iVar1 = iVar7 * 8 + 8;
        func_0x008ab0e6(puVar5 + 2,puVar5 + -2,iVar1);
        puVar5[3] = (uint)bVar3 * 8 + 0x1a;
        puVar5[1] = 0;
        puVar5[1] = puVar6;
        *puVar5 = FUN_0044e96e;
        puVar5[-1] = 0xffffffff;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 0x10;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 0x10;
        func_0x008ab0e6(*(int *)(param_1 + 100) + 4,*(int *)(param_1 + 100) + -4,iVar7 * 4 + 4);
        uVar9 = func_0x00da72c0(param_1,0x19,FUN_0044e96e);
        **(uint **)(param_1 + 100) = uVar9 | 0x20000;
        uVar10 = func_0x00da73d0(param_1);
        *(undefined4 *)(*(int *)(param_1 + 100) + -4) = uVar10;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 8;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 2;
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
        *(short *)(param_1 + 0x144) = (short)uVar10;
        func_0x00d96af0(param_1,8,0);
        func_0x008ab0e6(puVar5 + -2,puVar5 + 2,iVar1);
        puVar5[-1] = puVar6;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -0x10;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + -0x10;
        *(undefined4 *)(param_2 + 4) = 0xffffffff;
        return;
      }
      goto LAB_00db21a0;
    }
  }
  func_0x00d96af0(param_1,7,0);
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  return;
}



void __fastcall FUN_00db21b0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x6c);
  return;
}



void __fastcall FUN_00db21c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(uint *)(*param_2 + 4) < 0xfffffff3) {
    uVar3 = 0xd;
  }
  else {
    uVar3 = ~*(uint *)(*param_2 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 100);
  uVar2 = func_0x00da70c0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x18 + uVar3 * 8),4);
  *puVar1 = uVar2;
  return;
}



void __fastcall FUN_00db21f0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_20;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iStack_20 = **(int **)(param_1 + 100);
  if (iStack_20 != 0) {
    uStack_48 = *(undefined4 *)*param_2;
    uStack_44 = ((undefined4 *)*param_2)[1];
    iVar1 = func_0x00d959f0(param_1,&uStack_48,0x11);
    if (iVar1 != 0) {
      uStack_14 = uStack_10;
    }
    **(undefined4 **)(param_1 + 100) = uStack_14;
  }
  return;
}



void __fastcall FUN_00db2240(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_20;
  
  uVar1 = **(uint **)(param_1 + 100);
  uVar2 = (*(uint **)(param_1 + 100))[1];
  if (((uVar1 & 0x1f000000) == 0xb000000) &&
     ((uVar5 = uVar2 & 0x1f000000, uVar5 == 0xb000000 || ((uVar2 != 0 && (uVar5 == 0)))))) {
    uStack_48 = *(undefined4 *)*param_2;
    uStack_44 = ((undefined4 *)*param_2)[1];
    uStack_20 = uVar1;
    func_0x00d959f0(param_1,&uStack_48,0x11);
    *(undefined4 *)(param_1 + 0x7a) = 0x3e050005;
    *(short *)(param_1 + 0x78) = (short)uVar1;
    uVar4 = func_0x00daf2b0();
    if (uVar5 == 0) {
      uVar3 = func_0x00da7160(param_1,0xb);
      uStack_58 = 0x4d0b;
    }
    else {
      *(short *)(param_1 + 0x78) = (short)uVar4;
      *(undefined2 *)(param_1 + 0x7c) = 0x4d0b;
      *(short *)(param_1 + 0x7a) = (short)uVar2;
      func_0x00daf2b0();
      uVar3 = 0;
      uStack_58 = 0x580b;
      uVar4 = uVar1;
    }
    *(undefined2 *)(param_1 + 0x7c) = uStack_58;
    *(short *)(param_1 + 0x78) = (short)uVar4;
    *(undefined2 *)(param_1 + 0x7a) = uVar3;
    func_0x00daf2b0();
    **(uint **)(param_1 + 100) = uVar1;
    *(undefined1 *)(param_1 + 0x75) = 1;
  }
  return;
}



void __fastcall FUN_00db2360(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_c;
  
  uStack_20 = **(uint **)(param_1 + 100);
  uStack_1c = (*(uint **)(param_1 + 100))[1];
  if (((uStack_20 & 0x1f000000) == 0xb000000) && (uStack_1c != 0)) {
    puVar1 = (undefined4 *)*param_2;
    puVar2 = *(undefined4 **)(param_1 + 100);
    uStack_18 = 0;
    uStack_c = 0;
    uStack_48 = *puVar1;
    uStack_44 = 0xfffffff4;
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    uVar3 = func_0x00d93a10(param_1,&uStack_48);
    *puVar2 = uVar3;
  }
  return;
}



void __fastcall FUN_00db23e0(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  undefined4 uStack_c;
  
  puVar1 = *(uint **)(param_1 + 100);
  uStack_20 = *puVar1;
  uStack_1c = puVar1[1];
  uStack_18 = puVar1[2];
  if ((((uStack_20 & 0x1f000000) == 0xb000000) && (uStack_1c != 0)) && (uStack_18 != 0)) {
    puVar2 = (undefined4 *)*param_2;
    uStack_c = 0;
    uStack_48 = *puVar2;
    uStack_44 = 0xfffffff4;
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    uStack_38 = puVar2[4];
    uStack_34 = puVar2[5];
    func_0x00d93a10(param_1,&uStack_48);
  }
  return;
}



void __fastcall FUN_00db2470(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = **(int **)(param_1 + 100);
  if ((iVar2 != 0) && (iVar1 = (*(int **)(param_1 + 100))[1], iVar1 != 0)) {
    iVar2 = func_0x00d95e80(param_1,iVar2,iVar1,*param_2,*param_2 + 8);
    uVar3 = 0x2007ffd;
    if (iVar2 != 0) {
      uVar3 = 0x1007ffe;
    }
    **(undefined4 **)(param_1 + 100) = uVar3;
  }
  return;
}



void __fastcall FUN_00db24c0(int param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  double *pdVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined4 unaff_EBX;
  int iVar12;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint *puVar13;
  
  uVar7 = **(uint **)(param_1 + 100);
  if (uVar7 != 0) {
    pdVar3 = (double *)*param_2;
    if (((uVar7 & 0x1f000000) == 0x4000000) &&
       (iVar9 = *(int *)pdVar3, *(char *)(iVar9 + 0x14) == '#')) {
      if (*(int *)(iVar9 + 0x10) == 1) {
        uVar11 = 0x884;
        uVar6 = func_0x00da70c0(param_1,iVar9,4);
      }
      else {
        uVar6 = func_0x00da6cb0();
        *(undefined2 *)(param_1 + 0x7c) = 0x4005;
        *(ushort *)(param_1 + 0x78) = (ushort)uVar7;
        *(undefined2 *)(param_1 + 0x7a) = uVar6;
        uVar6 = func_0x00daf2b0();
        *(undefined4 *)(param_1 + 0x7a) = 0x46100001;
        *(undefined2 *)(param_1 + 0x78) = uVar6;
        uVar7 = func_0x00daf2b0();
        uVar11 = 0x893;
        uVar6 = func_0x00da6cb0();
      }
      *(undefined2 *)(param_1 + 0x7c) = uVar11;
      *(short *)(param_1 + 0x78) = (short)uVar7;
      *(undefined2 *)(param_1 + 0x7a) = uVar6;
      func_0x00daf2b0();
      puVar4 = *(undefined4 **)(param_1 + 100);
      uVar8 = func_0x00da6cb0();
      *puVar4 = uVar8;
    }
    else {
      if (((0xfffffff2 < *(uint *)((int)pdVar3 + 4)) &&
          ((*(uint *)((int)pdVar3 + 4) != 0xfffffffb || (iVar9 = FUN_00d72c80(), iVar9 == 0)))) ||
         (iVar9 = (int)*pdVar3, iVar9 == 0)) {
        func_0x00d71770(param_1,0xb);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (0x7fff < (ushort)uVar7) {
        if (*(uint *)(param_1 + 8) < *(int *)(param_1 + 0x620) + 0x8000U) {
          func_0x00d717b0(param_1,1,unaff_ESI,unaff_EBX);
LAB_00db21a0:
          func_0x00d71770(param_1,4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(param_1 + 0xb8) != 0) {
          iVar9 = *(int *)(param_1 + 0x54);
          puVar4 = *(undefined4 **)(iVar9 + 0x10);
          puVar13 = (uint *)puVar4[-1];
          if (((((((uint)puVar13 & 3) == 0) && (uVar7 = *puVar13 & 0xff, uVar7 != 0x41)) &&
               (uVar7 != 0x43)) && ((uVar7 != 0x49 && (uVar7 != 0x3f)))) &&
             ((cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 6), cVar1 != '\x13' &&
              ((cVar1 != -0x75 && (cVar1 != -0x6f)))))) {
            bVar2 = *(byte *)((int)puVar13 - 3);
            iVar12 = *(int *)(param_1 + 0x6c);
            if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(param_1 + 0x61c)) {
              iVar10 = iVar12 * 8 + 8;
              func_0x008ab0e6(puVar4 + 2,puVar4 + -2,iVar10,unaff_EDI);
              puVar4[3] = (uint)bVar2 * 8 + 0x1a;
              puVar4[1] = 0;
              puVar4[1] = puVar13;
              *puVar4 = FUN_0044e96e;
              puVar4[-1] = 0xffffffff;
              *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 0x10;
              *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 0x10;
              func_0x008ab0e6(*(int *)(param_1 + 100) + 4,*(int *)(param_1 + 100) + -4,
                              iVar12 * 4 + 4);
              uVar7 = func_0x00da72c0(param_1,0x19,FUN_0044e96e);
              **(uint **)(param_1 + 100) = uVar7 | 0x20000;
              uVar8 = func_0x00da73d0(param_1);
              *(undefined4 *)(*(int *)(param_1 + 100) + -4) = uVar8;
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 8;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 2;
              *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
              *(short *)(param_1 + 0x144) = (short)uVar8;
              func_0x00d96af0(param_1,8,0);
              func_0x008ab0e6(puVar4 + -2,puVar4 + 2,iVar10);
              puVar4[-1] = puVar13;
              *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + -0x10;
              *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + -0x10;
              param_2[1] = 0xffffffff;
              return;
            }
            goto LAB_00db21a0;
          }
        }
        func_0x00d96af0(param_1,7,0,unaff_EBP);
        param_2[1] = 0xffffffff;
        return;
      }
      iVar12 = *(int *)(param_1 + 0x6c);
      if (iVar9 < 0) {
        iVar9 = iVar9 + iVar12;
      }
      else if (iVar12 < iVar9) {
        iVar9 = iVar12;
      }
      if (0 < iVar9) {
        iVar12 = iVar12 - iVar9;
        iVar10 = 0;
        param_2[1] = iVar12;
        if (0 < iVar12) {
          iVar9 = iVar9 << 2;
          do {
            *(undefined4 *)(*(int *)(param_1 + 100) + iVar10 * 4) =
                 *(undefined4 *)(iVar9 + *(int *)(param_1 + 100));
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar10 < iVar12);
          return;
        }
      }
    }
  }
  return;
}



void __fastcall FUN_00db2600(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = **(uint **)(param_1 + 100);
  if (uVar3 != 0) {
    if (((*(uint **)(param_1 + 100))[1] & 0x1f000000) != 0) {
      uVar1 = func_0x00db1310();
      if ((0x7fff < uVar1) || (*(int *)(*(int *)(param_1 + 0x10) + (uint)uVar1 * 8) != 10)) {
        FUN_00db1fe0();
        return;
      }
    }
    if ((uVar3 >> 0x18 & 0x1f) - 0xe < 6) goto LAB_00db2695;
  }
  if ((uVar3 & 0x1f000000) != 0x4000000) {
    if ((uVar3 & 0x1f000000) == 0xa000000) {
      func_0x00db6af0();
      return;
    }
    **(undefined4 **)(param_1 + 100) = 0x7fff;
    return;
  }
LAB_00db2695:
  if ((uVar3 & 0x1f000000) == 0x4000000) {
    iVar2 = FUN_00d72c80();
    if (iVar2 == 0) {
      FUN_00db1fe0();
      return;
    }
    *(undefined4 *)(param_1 + 0x7a) = 0x5e8e0000;
    *(short *)(param_1 + 0x78) = (short)uVar3;
    uVar3 = func_0x00daf2b0();
  }
  **(uint **)(param_1 + 100) = uVar3;
  return;
}



void __fastcall FUN_00db26f0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint *puVar11;
  
  uVar7 = **(uint **)(param_1 + 100);
  if (((uVar7 & 0x1f000000) != 0x4000000) && (uVar7 != 0)) {
    iVar8 = func_0x00db5830(param_1,param_2,0x12);
    if (iVar8 == 0) {
      uVar10 = uVar7 >> 0x18 & 0x1f;
      if (5 < uVar10 - 0xe) {
        if (uVar10 < 3) {
          puVar5 = *(undefined4 **)(param_1 + 100);
          uVar9 = func_0x00d73f60(4);
          uVar9 = func_0x00da70c0(param_1,uVar9);
          *puVar5 = uVar9;
          return;
        }
        if (*(int *)(param_1 + 0x620) + 0x8000U <= *(uint *)(param_1 + 8)) {
          if (*(int *)(param_1 + 0xb8) != 0) {
            iVar8 = *(int *)(param_1 + 0x54);
            puVar5 = *(undefined4 **)(iVar8 + 0x10);
            puVar11 = (uint *)puVar5[-1];
            if (((((((uint)puVar11 & 3) == 0) && (uVar7 = *puVar11 & 0xff, uVar7 != 0x41)) &&
                 (uVar7 != 0x43)) && ((uVar7 != 0x49 && (uVar7 != 0x3f)))) &&
               ((cVar2 = *(char *)(*(int *)(param_1 + 0x5c) + 6), cVar2 != '\x13' &&
                ((cVar2 != -0x75 && (cVar2 != -0x6f)))))) {
              bVar3 = *(byte *)((int)puVar11 - 3);
              iVar4 = *(int *)(param_1 + 0x6c);
              if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(param_1 + 0x61c)) {
                iVar1 = iVar4 * 8 + 8;
                func_0x008ab0e6(puVar5 + 2,puVar5 + -2,iVar1,unaff_EDI);
                puVar5[3] = (uint)bVar3 * 8 + 0x1a;
                puVar5[1] = 0;
                puVar5[1] = puVar11;
                *puVar5 = FUN_0044e96e;
                puVar5[-1] = 0xffffffff;
                *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 0x10;
                *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 0x10;
                func_0x008ab0e6(*(int *)(param_1 + 100) + 4,*(int *)(param_1 + 100) + -4,
                                iVar4 * 4 + 4);
                uVar7 = func_0x00da72c0(param_1,0x19,FUN_0044e96e);
                **(uint **)(param_1 + 100) = uVar7 | 0x20000;
                uVar9 = func_0x00da73d0(param_1);
                *(undefined4 *)(*(int *)(param_1 + 100) + -4) = uVar9;
                *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 8;
                *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 2;
                *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
                *(short *)(param_1 + 0x144) = (short)uVar9;
                func_0x00d96af0(param_1,8,0);
                func_0x008ab0e6(puVar5 + -2,puVar5 + 2,iVar1);
                puVar5[-1] = puVar11;
                *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + -0x10;
                *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + -0x10;
                *(undefined4 *)(param_2 + 4) = 0xffffffff;
                return;
              }
              goto LAB_00db21a0;
            }
          }
          func_0x00d96af0(param_1,7,0,unaff_EBP);
          *(undefined4 *)(param_2 + 4) = 0xffffffff;
          return;
        }
        func_0x00d717b0(param_1,1,unaff_ESI,unaff_EBX);
LAB_00db21a0:
        func_0x00d71770(param_1,4);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(short *)(param_1 + 0x78) = (short)uVar7;
      puVar5 = *(undefined4 **)(param_1 + 100);
      *(undefined2 *)(param_1 + 0x7c) = 0x5d04;
      *(ushort *)(param_1 + 0x7a) = (ushort)((uVar7 & 0x1f000000) == 0xe000000);
      uVar9 = func_0x00daf2b0();
      *puVar5 = uVar9;
    }
  }
  return;
}



void __fastcall FUN_00db2790(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double dStack_40;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_c;
  
  uStack_20 = **(uint **)(param_1 + 100);
  if ((uStack_20 & 0x1f000000) == 0xb000000) {
    puVar1 = (undefined4 *)*param_2;
    if (0xfffffff2 < (uint)puVar1[3]) {
      func_0x00d71770(param_1,0xb);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dStack_40 = (double)((int)*(double *)(puVar1 + 2) + 1);
    uStack_48 = *puVar1;
    uStack_44 = 0xfffffff4;
    uStack_18 = 0;
    uStack_c = 0;
    uStack_1c = func_0x00db1310();
    uVar4 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7c) = 0x2913;
    *(undefined2 *)(param_1 + 0x7a) = uVar4;
    *(undefined2 *)(param_1 + 0x78) = (undefined2)uStack_1c;
    uStack_1c = func_0x00daf2b0();
    **(undefined4 **)(param_1 + 100) = uStack_1c;
    iVar2 = *(int *)(param_1 + 100);
    uVar5 = func_0x00d93a10(param_1,&uStack_48);
    *(undefined4 *)(iVar2 + 4) = uVar5;
    param_2[1] = -(uint)((*(uint *)(*(int *)(param_1 + 100) + 4) & 0x1f000000) != 0) & 2;
  }
  return;
}



void __fastcall FUN_00db2880(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = **(uint **)(param_1 + 100);
  uVar3 = uVar1 & 0x1f000000;
  if (uVar3 == 0xa000000) {
    func_0x00db5830(param_1,param_2,*(int *)(param_2 + 8) + 0x14);
    return;
  }
  if (uVar3 == 0xb000000) {
    puVar2 = *(undefined4 **)(param_1 + 100);
    uVar4 = func_0x00da70c0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x18),8);
    *puVar2 = uVar4;
    *(uint *)(*(int *)(param_1 + 100) + 4) = uVar1;
    if (*(int *)(param_2 + 8) != 0) {
      uVar4 = func_0x00da6cb0();
      *(undefined4 *)(*(int *)(param_1 + 100) + 8) = uVar4;
      *(undefined4 *)(param_2 + 4) = 3;
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 100) + 8) = 0x7fff;
    *(undefined4 *)(param_2 + 4) = 3;
  }
  return;
}



void __fastcall FUN_00db2910(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_0x00d93940(param_1,0,*(int *)(param_1 + 0x6c) + -1);
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x75) = 1;
  }
  return;
}



void __fastcall FUN_00db2940(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  
  if (1 < *(uint *)(param_1 + 0x6c)) {
    puVar1 = *(undefined4 **)(param_1 + 100);
    uVar2 = *puVar1;
    *puVar1 = puVar1[1];
    *(undefined4 *)(*(int *)(param_1 + 100) + 4) = uVar2;
    puVar1 = (undefined4 *)*param_2;
    uVar2 = puVar1[3];
    uVar3 = puVar1[2];
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    iVar6 = *param_2;
    *(undefined4 *)(iVar6 + 8) = uVar4;
    *(undefined4 *)(iVar6 + 0xc) = uVar5;
    iVar8 = func_0x0044d2a9(*(undefined4 *)(param_1 + 0x54),0,param_1,FUN_00db5ba0);
    puVar1 = (undefined4 *)*param_2;
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    iVar6 = *param_2;
    *(undefined4 *)(iVar6 + 8) = uVar3;
    *(undefined4 *)(iVar6 + 0xc) = uVar2;
    if (iVar8 != 0) {
      func_0x00d67230();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_2[1] = -1;
    *(undefined1 *)(param_1 + 0x75) = 1;
  }
  return;
}



void __fastcall FUN_00db29f0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  uVar10 = **(uint **)(param_1 + 100);
  if ((((uVar10 & 0x1f000000) == 0x13000000) && ((ushort)uVar10 < 0x8000)) &&
     (*(int *)(*(int *)(param_1 + 0x10) + (uVar10 & 0xffff) * 8) == 0)) {
    *(undefined4 *)(param_1 + 0x7a) = 0x41060000;
    *(undefined2 *)(param_1 + 0x78) = 0;
    uVar9 = func_0x00daf2b0();
    puVar7 = *(undefined4 **)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x7a) = 0x450b0004;
    *(undefined2 *)(param_1 + 0x78) = uVar9;
    uVar11 = func_0x00daf2b0();
    *puVar7 = uVar11;
    return;
  }
  if (*(int *)(param_1 + 0x620) + 0x8000U <= *(uint *)(param_1 + 8)) {
    if (*(int *)(param_1 + 0xb8) != 0) {
      iVar4 = *(int *)(param_1 + 0x54);
      puVar7 = *(undefined4 **)(iVar4 + 0x10);
      puVar5 = (uint *)puVar7[-1];
      if (((((((uint)puVar5 & 3) == 0) && (uVar10 = *puVar5 & 0xff, uVar10 != 0x41)) &&
           ((uVar10 != 0x43 && ((uVar10 != 0x49 && (uVar10 != 0x3f)))))) &&
          (cVar2 = *(char *)(*(int *)(param_1 + 0x5c) + 6), cVar2 != '\x13')) &&
         ((cVar2 != -0x75 && (cVar2 != -0x6f)))) {
        bVar3 = *(byte *)((int)puVar5 - 3);
        iVar6 = *(int *)(param_1 + 0x6c);
        if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(param_1 + 0x61c)) {
          iVar1 = iVar6 * 8 + 8;
          func_0x008ab0e6(puVar7 + 2,puVar7 + -2,iVar1);
          puVar7[3] = (uint)bVar3 * 8 + 0x1a;
          puVar7[1] = 0;
          puVar7[1] = puVar5;
          *puVar7 = FUN_0044e96e;
          puVar7[-1] = 0xffffffff;
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 0x10;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 0x10;
          func_0x008ab0e6(*(int *)(param_1 + 100) + 4,*(int *)(param_1 + 100) + -4,iVar6 * 4 + 4);
          uVar10 = func_0x00da72c0(param_1,0x19,FUN_0044e96e);
          **(uint **)(param_1 + 100) = uVar10 | 0x20000;
          uVar11 = func_0x00da73d0(param_1);
          *(undefined4 *)(*(int *)(param_1 + 100) + -4) = uVar11;
          *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 8;
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 2;
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
          *(short *)(param_1 + 0x144) = (short)uVar11;
          func_0x00d96af0(param_1,8,0);
          func_0x008ab0e6(puVar7 + -2,puVar7 + 2,iVar1);
          puVar7[-1] = puVar5;
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -0x10;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + -0x10;
          *(undefined4 *)(param_2 + 4) = 0xffffffff;
          return;
        }
        goto LAB_00db21a0;
      }
    }
    func_0x00d96af0(param_1,7,0);
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    return;
  }
  func_0x00d717b0(param_1,1);
LAB_00db21a0:
  func_0x00d71770(param_1,4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void __fastcall FUN_00db2a60(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = **(uint **)(param_1 + 100);
  if ((uVar1 & 0x1f000000) == 0xb000000) {
    uVar2 = (*(uint **)(param_1 + 100))[1];
    uStack_20 = uVar1;
    if ((uVar2 & 0x1f000000) == 0) {
      uStack_1c = func_0x00da6cb0();
    }
    else {
      if ((uVar2 >> 0x18 & 0x1f) - 0xf < 5) {
        *(short *)(param_1 + 0x78) = (short)uVar2;
        *(undefined4 *)(param_1 + 0x7a) = 0x5b0e01d3;
        uVar2 = func_0x00daf2b0();
      }
      *(short *)(param_1 + 0x78) = (short)uVar2;
      *(undefined4 *)(param_1 + 0x7a) = 0x3f050001;
      uVar3 = func_0x00daf2b0();
      uStack_1c = func_0x00da6e30(param_1,0x24,uVar1,uVar3);
    }
    uStack_48 = *(undefined4 *)*param_2;
    uStack_44 = ((undefined4 *)*param_2)[1];
    uStack_40 = FUN_00d6ef10();
    if (((*(int *)(param_1 + 0xb8) == 0) ||
        (uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x54) + 0x10) + -4), (uVar1 & 3) != 0)) ||
       (uStack_c = 1, 1 < *(byte *)(uVar1 - 1) - 1)) {
      uStack_c = 0;
    }
    uStack_10 = 0;
    iVar4 = func_0x00d95cc0(param_1,&uStack_48);
    param_2[1] = iVar4;
    **(undefined4 **)(param_1 + 100) = uStack_1c;
    *(undefined4 *)(*(int *)(param_1 + 100) + 4) = uStack_18;
  }
  return;
}



void __fastcall FUN_00db2b70(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar2 = func_0x00da6d30();
  uVar3 = func_0x00da6ed0(param_1,0xe,((param_1 + 0xd7U & 0xfffffff0) - param_1) + 0x1e8);
  *(undefined2 *)(param_1 + 0x7c) = 0x300e;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  puVar1 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7a) = uVar3;
  uVar4 = func_0x00daf2b0();
  *puVar1 = uVar4;
  return;
}



void __fastcall FUN_00db2bc0(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  if (4 < (**(uint **)(param_1 + 100) >> 0x18 & 0x1f) - 0xf) {
    uVar1 = *(undefined2 *)(param_2 + 8);
    uVar2 = func_0x00da6d30();
    *(undefined2 *)(param_1 + 0x7c) = 0x340e;
    *(undefined2 *)(param_1 + 0x78) = uVar2;
    *(undefined2 *)(param_1 + 0x7a) = uVar1;
    uVar3 = func_0x00daf2b0();
    **(undefined4 **)(param_1 + 100) = uVar3;
  }
  return;
}



void __fastcall FUN_00db2c10(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined2 *)(param_2 + 8);
  uVar3 = func_0x00da6d30();
  *(undefined2 *)(param_1 + 0x7c) = 0x340e;
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  puVar2 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x78) = uVar3;
  uVar4 = func_0x00daf2b0();
  *puVar2 = uVar4;
  return;
}



void __fastcall FUN_00db2c50(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar1 = func_0x00da6d30();
  if (*(int *)(*(int *)(param_1 + 100) + 4) == 0) {
    uVar2 = 4;
    uVar3 = 0x340e;
  }
  else {
    uVar2 = func_0x00da6d30();
    *(undefined4 *)(param_1 + 0x7a) = 0x340e0004;
    *(undefined2 *)(param_1 + 0x78) = uVar1;
    uVar1 = func_0x00daf2b0();
    *(undefined4 *)(param_1 + 0x7a) = 0x340e0004;
    *(undefined2 *)(param_1 + 0x78) = uVar2;
    uVar2 = func_0x00daf2b0();
    uVar3 = func_0x00da71e0(param_1,0,0x3ff00000);
    *(undefined2 *)(param_1 + 0x78) = uVar3;
    *(undefined2 *)(param_1 + 0x7c) = 0x2c0e;
    *(undefined2 *)(param_1 + 0x7a) = uVar2;
    uVar2 = func_0x00daf2b0();
    uVar3 = 0x2b0e;
  }
  *(undefined2 *)(param_1 + 0x7c) = uVar3;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  uVar4 = func_0x00daf2b0();
  **(undefined4 **)(param_1 + 100) = uVar4;
  return;
}



void __fastcall FUN_00db2d00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = func_0x00da6d30();
  uVar3 = func_0x00da6d30();
  puVar1 = *(undefined4 **)(param_1 + 100);
  uVar2 = func_0x00da6e30(param_1,0x42,uVar2,uVar3);
  *puVar1 = uVar2;
  return;
}



void __fastcall FUN_00db2d40(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar2 = func_0x00da6d30();
  uVar3 = func_0x00da6d30();
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  puVar1 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7c) = 0x310e;
  *(undefined2 *)(param_1 + 0x7a) = uVar3;
  uVar4 = func_0x00daf2b0();
  *puVar1 = uVar4;
  return;
}



void __fastcall FUN_00db2d80(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = func_0x00da6d30();
  uVar1 = *(undefined2 *)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7c) = 0x5f0e;
  *(undefined2 *)(param_1 + 0x78) = uVar3;
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  uVar4 = func_0x00daf2b0();
  *puVar2 = uVar4;
  return;
}



void __fastcall FUN_00db2dc0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00db1390(param_1,**(undefined4 **)(param_1 + 100),
                          (*(undefined4 **)(param_1 + 100))[1],*param_2,*param_2 + 8,0x2e);
  **(undefined4 **)(param_1 + 100) = uVar1;
  return;
}



void __fastcall FUN_00db2df0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  int iStack_8;
  
  uVar2 = func_0x00da6d90();
  uVar1 = *(uint *)(param_2 + 8);
  puVar4 = *(uint **)(param_1 + 100);
  iStack_8 = 1;
  if (puVar4[1] != 0) {
    do {
      uVar3 = func_0x00da6d90();
      uVar6 = (uVar3 >> 0x18 & 0x1f) - 0xf;
      if ((uVar2 >> 0x18 & 0x1f) - 0xf < 5) {
        if (4 < uVar6) {
          *(undefined4 *)(param_1 + 0x7a) = 0x5b0e01d3;
          *(short *)(param_1 + 0x78) = (short)uVar2;
          uVar2 = func_0x00daf2b0();
          goto LAB_00db2e96;
        }
        uVar5 = 0x13;
      }
      else {
        if (uVar6 < 5) {
          *(undefined4 *)(param_1 + 0x7a) = 0x5b0e01d3;
          *(short *)(param_1 + 0x78) = (short)uVar3;
          uVar3 = func_0x00daf2b0();
        }
LAB_00db2e96:
        uVar5 = 0xe;
      }
      *(short *)(param_1 + 0x78) = (short)uVar2;
      *(ushort *)(param_1 + 0x7c) = (ushort)((uVar1 & 0xff) << 8) | uVar5;
      *(short *)(param_1 + 0x7a) = (short)uVar3;
      uVar2 = func_0x00daf2b0();
      iStack_8 = iStack_8 + 1;
      puVar4 = *(uint **)(param_1 + 100);
    } while (puVar4[iStack_8] != 0);
  }
  *puVar4 = uVar2;
  return;
}



void __fastcall FUN_00db2ee0(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
  func_0x00da70c0(param_1,iVar5,0xc);
  uVar4 = func_0x00da72c0(param_1,0x19,iVar5 + 0x18);
  uVar1 = func_0x00da6e30(param_1,0x2b,uVar4);
  uVar2 = func_0x00da71e0(param_1,0,0x3ff00000);
  *(undefined2 *)(param_1 + 0x7c) = 0x2a0e;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  iVar5 = func_0x00daf2b0();
  if (**(int **)(param_1 + 100) == 0) {
    **(int **)(param_1 + 100) = iVar5;
    return;
  }
  uVar1 = func_0x00da6d30();
  if (*(int *)(*(int *)(param_1 + 100) + 4) != 0) {
    uVar3 = func_0x00da6d30();
    *(undefined2 *)(param_1 + 0x78) = uVar3;
    *(undefined2 *)(param_1 + 0x7c) = 0x2a0e;
    *(undefined2 *)(param_1 + 0x7a) = uVar1;
    uVar3 = func_0x00daf2b0();
    *(undefined2 *)(param_1 + 0x78) = uVar3;
    *(undefined2 *)(param_1 + 0x7c) = 0x290e;
    *(undefined2 *)(param_1 + 0x7a) = uVar2;
    uVar2 = func_0x00daf2b0();
    *(short *)(param_1 + 0x78) = (short)iVar5;
    *(undefined2 *)(param_1 + 0x7c) = 0x2b0e;
    *(undefined2 *)(param_1 + 0x7a) = uVar2;
    uVar2 = func_0x00daf2b0();
    *(undefined4 *)(param_1 + 0x7a) = 0x340e0000;
    *(undefined2 *)(param_1 + 0x78) = uVar2;
    uVar2 = func_0x00daf2b0();
    *(undefined2 *)(param_1 + 0x78) = uVar2;
    *(undefined2 *)(param_1 + 0x7c) = 0x290e;
    *(undefined2 *)(param_1 + 0x7a) = uVar1;
    uVar4 = func_0x00daf2b0();
    **(undefined4 **)(param_1 + 100) = uVar4;
    return;
  }
  *(short *)(param_1 + 0x78) = (short)iVar5;
  *(undefined2 *)(param_1 + 0x7c) = 0x2b0e;
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  uVar1 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x340e0000;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  *(undefined2 *)(param_1 + 0x7c) = 0x290e;
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  uVar4 = func_0x00daf2b0();
  **(undefined4 **)(param_1 + 100) = uVar4;
  return;
}



void __fastcall FUN_00db3040(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((**(uint **)(param_1 + 100) & 0x1f000000) != 0xa000000) {
    puVar1 = *(undefined4 **)(param_1 + 100);
    uVar3 = func_0x00db1250();
    *puVar1 = uVar3;
    return;
  }
  uVar2 = func_0x00dbab30(param_1,**(int **)(param_1 + -0xbc) + 0xb0,0,
                          **(undefined4 **)(param_1 + 100),*param_2);
  if (4 < (uVar2 >> 0x18 & 0x1f) - 0xf) {
    *(short *)(param_1 + 0x78) = (short)uVar2;
    *(undefined2 *)(param_1 + 0x7c) = 0x5b13;
    *(ushort *)(param_1 + 0x7a) = (byte)(uVar2 >> 0x18) & 0x1f | 0x260;
    uVar3 = func_0x00daf2b0();
    **(undefined4 **)(param_1 + 100) = uVar3;
    return;
  }
  **(uint **)(param_1 + 100) = uVar2;
  return;
}



void __fastcall FUN_00db3070(int param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = func_0x00db6f00();
  if (iVar4 == 0) {
    uVar3 = func_0x00db1250();
    sVar1 = *(short *)(param_2 + 8);
    puVar2 = *(undefined4 **)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x78) = uVar3;
    *(ushort *)(param_1 + 0x7c) = sVar1 << 8 | 0x13;
    *(undefined2 *)(param_1 + 0x7a) = 0;
    uVar5 = func_0x00daf2b0();
    *puVar2 = uVar5;
  }
  return;
}



void __fastcall FUN_00db30c0(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar3 = func_0x00db6bb0();
  if (iVar3 == 0) {
    uVar4 = func_0x00db1250();
    iVar1 = *(int *)(param_2 + 8);
    puVar5 = *(undefined4 **)(param_1 + 100);
    iVar3 = 1;
    if (puVar5[1] != 0) {
      do {
        uVar2 = func_0x00db1250();
        *(ushort *)(param_1 + 0x7c) = (ushort)(iVar1 << 8) | 0x13;
        *(short *)(param_1 + 0x78) = (short)uVar4;
        *(undefined2 *)(param_1 + 0x7a) = uVar2;
        uVar4 = func_0x00daf2b0();
        puVar5 = *(undefined4 **)(param_1 + 100);
        iVar3 = iVar3 + 1;
      } while (puVar5[iVar3] != 0);
    }
    *puVar5 = uVar4;
  }
  return;
}



void __fastcall FUN_00db3140(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = func_0x00db6d50();
  if (iVar4 == 0) {
    uVar2 = func_0x00db1250();
    uVar3 = func_0x00db1250();
    iVar4 = *(int *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0x78) = uVar2;
    puVar1 = *(undefined4 **)(param_1 + 100);
    *(ushort *)(param_1 + 0x7c) = (ushort)(iVar4 << 8) | 0x13;
    *(undefined2 *)(param_1 + 0x7a) = uVar3;
    uVar5 = func_0x00daf2b0();
    *puVar1 = uVar5;
  }
  return;
}



void __fastcall FUN_00db3190(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = func_0x00da72c0(param_1,0x19,param_1 + -0x138);
  *(undefined4 *)(param_1 + 0x7a) = 0x55050000;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar3 = func_0x00daf2b0();
  uVar2 = func_0x00dbb920(param_1,param_2,uVar3);
  *(short *)(param_1 + 0x7a) = (short)uVar3;
  puVar1 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7c) = 0x5784;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar3 = func_0x00daf2b0();
  *puVar1 = uVar3;
  return;
}



void __fastcall FUN_00db31f0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_8 = func_0x00da6dd0();
  *(undefined4 *)(param_1 + 0x7a) = 0x45130000;
  *(short *)(param_1 + 0x78) = (short)uStack_8;
  uVar8 = func_0x00daf2b0();
  uStack_10 = func_0x00da6cb0();
  piVar1 = (int *)*param_2;
  if (piVar1[1] == 0xfffffffb) {
    iVar13 = *piVar1;
LAB_00db3257:
    if (param_2[2] == 0) {
      if ((*(uint *)(*(int *)(param_1 + 100) + 4) & 0x1f000000) == 0) {
        uStack_18 = 1;
        uVar10 = func_0x00da6cb0();
        uVar12 = 1;
      }
      else {
        iVar14 = *param_2;
        uVar12 = *(uint *)(iVar14 + 0xc);
        if ((0xfffffff2 < uVar12) &&
           ((uVar12 != 0xfffffffb || (iVar9 = FUN_00d72c80(), iVar9 == 0)))) goto LAB_00db3660;
        uVar12 = (uint)*(double *)(iVar14 + 8);
        uStack_18 = uVar12;
        uVar10 = func_0x00db1310();
      }
      uStack_14 = uVar10;
      if ((*(int *)(*(int *)(param_1 + 100) + 4) != 0) &&
         ((*(uint *)(*(int *)(param_1 + 100) + 8) & 0x1f000000) != 0)) {
        uVar10 = func_0x00db1310();
        uVar12 = func_0x00db5270(param_1,*param_2 + 0x10);
      }
LAB_00db33b3:
      uStack_4 = uVar8 & 0xffff;
      uStack_c = uVar10 & 0xffff;
      if ((int)uVar12 < 0) {
LAB_00db33d3:
        *(short *)(param_1 + 0x78) = (short)uStack_c;
        *(undefined2 *)(param_1 + 0x7c) = 0x93;
        *(short *)(param_1 + 0x7a) = (short)uStack_10;
        func_0x00daf2b0();
        *(short *)(param_1 + 0x78) = (short)uVar8;
        *(undefined2 *)(param_1 + 0x7c) = 0x2913;
        *(short *)(param_1 + 0x7a) = (short)uStack_c;
        uVar5 = func_0x00da6cb0();
        uVar6 = func_0x00daf2b0();
        *(undefined2 *)(param_1 + 0x7c) = 0x2913;
        *(undefined2 *)(param_1 + 0x78) = uVar6;
        *(undefined2 *)(param_1 + 0x7a) = uVar5;
        uVar10 = func_0x00daf2b0();
        uVar12 = uVar12 + *(int *)(iVar13 + 0x10) + 1;
      }
      else {
        uVar2 = *(uint *)(iVar13 + 0x10);
        *(short *)(param_1 + 0x78) = (short)uVar10;
        *(short *)(param_1 + 0x7a) = (short)uVar8;
        if (uVar2 < uVar12) {
          *(undefined2 *)(param_1 + 0x7c) = 0x793;
          func_0x00daf2b0();
          uVar12 = *(uint *)(iVar13 + 0x10);
          uVar10 = uVar8;
        }
        else {
          *(undefined2 *)(param_1 + 0x7c) = 0x693;
          func_0x00daf2b0();
        }
      }
      uVar7 = func_0x00db5a70(param_1,iVar13,&uStack_18,uStack_14,uVar8,uStack_10);
      uStack_c = (uint)uVar7;
      if (param_2[2] != 0) {
        *(short *)(param_1 + 0x78) = (short)uVar10;
        *(ushort *)(param_1 + 0x7a) = uVar7;
        if ((int)(uVar12 - uStack_18) < 0) {
          *(undefined2 *)(param_1 + 0x7c) = 0x93;
          func_0x00daf2b0();
          puVar3 = *(undefined4 **)(param_1 + 100);
          uVar11 = func_0x00da70c0(param_1,param_1 + -0x178,4);
          *puVar3 = uVar11;
          return;
        }
        *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
        uVar5 = func_0x00daf2b0();
        *(undefined2 *)(param_1 + 0x7c) = 0x193;
        *(undefined2 *)(param_1 + 0x78) = uVar5;
        *(short *)(param_1 + 0x7a) = (short)uStack_10;
        func_0x00daf2b0();
        *(undefined2 *)(param_1 + 0x7c) = 0x4005;
        *(short *)(param_1 + 0x7a) = (short)uStack_c;
        *(short *)(param_1 + 0x78) = (short)uStack_8;
        uVar6 = func_0x00daf2b0();
        *(undefined2 *)(param_1 + 0x7a) = uVar5;
        puVar3 = *(undefined4 **)(param_1 + 100);
        *(undefined2 *)(param_1 + 0x7c) = 0x4f04;
        *(undefined2 *)(param_1 + 0x78) = uVar6;
        uVar11 = func_0x00daf2b0();
        *puVar3 = uVar11;
        return;
      }
      iVar13 = uVar12 - uStack_18;
      *(short *)(param_1 + 0x78) = (short)uVar10;
      *(ushort *)(param_1 + 0x7a) = uVar7;
      if (iVar13 < 1) {
        *(undefined2 *)(param_1 + 0x7c) = 0x293;
        func_0x00daf2b0();
        param_2[1] = 0;
        return;
      }
      *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
      uVar5 = func_0x00daf2b0();
      uVar6 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x7a) = uVar6;
      *(undefined2 *)(param_1 + 0x7c) = 0x893;
      *(undefined2 *)(param_1 + 0x78) = uVar5;
      func_0x00daf2b0();
      if ((uint)(*(int *)(param_1 + 0x70) + iVar13) < 0xfb) {
        uStack_4 = uStack_c & 0xffff;
        param_2[1] = iVar13;
        iVar14 = 0;
        do {
          uVar8 = uStack_4;
          uVar5 = func_0x00da6cb0();
          *(undefined2 *)(param_1 + 0x7c) = 0x2913;
          *(short *)(param_1 + 0x78) = (short)uVar8;
          *(undefined2 *)(param_1 + 0x7a) = uVar5;
          uVar5 = func_0x00daf2b0();
          *(undefined2 *)(param_1 + 0x7c) = 0x4005;
          *(short *)(param_1 + 0x78) = (short)uStack_8;
          *(undefined2 *)(param_1 + 0x7a) = uVar5;
          uVar5 = func_0x00daf2b0();
          iVar9 = *(int *)(param_1 + 100);
          *(undefined4 *)(param_1 + 0x7a) = 0x46100001;
          *(undefined2 *)(param_1 + 0x78) = uVar5;
          uVar11 = func_0x00daf2b0();
          *(undefined4 *)(iVar9 + iVar14 * 4) = uVar11;
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar13);
        return;
      }
      goto LAB_00db3668;
    }
    iVar14 = *param_2;
    uVar12 = *(uint *)(iVar14 + 0xc);
    if ((uVar12 < 0xfffffff3) || ((uVar12 == 0xfffffffb && (iVar9 = FUN_00d72c80(), iVar9 != 0)))) {
      uStack_18 = (uint)*(double *)(iVar14 + 8);
      uStack_14 = func_0x00db1310();
      if ((*(uint *)(*(int *)(param_1 + 100) + 8) & 0x1f000000) == 0) {
        uStack_c = func_0x00da6cb0();
        uVar12 = 0xffffffff;
        uStack_c = uStack_c & 0xffff;
        goto LAB_00db33d3;
      }
      uStack_c = func_0x00db1310();
      iVar14 = *param_2;
      uVar12 = *(uint *)(iVar14 + 0x14);
      if ((uVar12 < 0xfffffff3) || ((uVar12 == 0xfffffffb && (iVar9 = FUN_00d72c80(), iVar9 != 0))))
      {
        uVar12 = (uint)*(double *)(iVar14 + 0x10);
        uVar10 = uStack_c;
        goto LAB_00db33b3;
      }
    }
  }
  else if ((uint)piVar1[1] < 0xfffffff3) {
    iVar13 = func_0x00d73f50();
    *piVar1 = iVar13;
    piVar1[1] = -5;
    goto LAB_00db3257;
  }
LAB_00db3660:
  func_0x00d71770(param_1,0xb);
LAB_00db3668:
  func_0x00d717b0(param_1,3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



void __fastcall FUN_00db3680(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar3 = func_0x00da6cb0();
  uVar8 = 0;
  if (**(int **)(param_1 + 100) != 0) {
    iVar9 = 0;
    do {
      uVar4 = func_0x00db1310();
      *(undefined2 *)(param_1 + 0x7c) = 0x693;
      *(undefined2 *)(param_1 + 0x78) = uVar4;
      *(undefined2 *)(param_1 + 0x7a) = uVar3;
      func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x78) = uVar4;
      iVar7 = *(int *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x7a) = 0x5d040002;
      uVar5 = func_0x00daf2b0();
      *(undefined4 *)(iVar7 + iVar9) = uVar5;
      uVar8 = uVar8 + 1;
      iVar9 = uVar8 * 4;
    } while (*(int *)(*(int *)(param_1 + 100) + iVar9) != 0);
    if (1 < uVar8) {
      uVar3 = func_0x00da72c0(param_1,0x19,param_1 + -0x138);
      *(undefined4 *)(param_1 + 0x7a) = 0x55050000;
      *(undefined2 *)(param_1 + 0x78) = uVar3;
      uVar4 = func_0x00daf2b0();
      piVar6 = *(int **)(param_1 + 100);
      iVar9 = 0;
      uVar3 = uVar4;
      if (*piVar6 != 0) {
        iVar7 = 0;
        do {
          uVar1 = *(undefined2 *)(iVar7 + (int)piVar6);
          *(undefined2 *)(param_1 + 0x7c) = 0x5685;
          *(undefined2 *)(param_1 + 0x78) = uVar3;
          *(undefined2 *)(param_1 + 0x7a) = uVar1;
          uVar3 = func_0x00daf2b0();
          piVar6 = *(int **)(param_1 + 100);
          iVar9 = iVar9 + 1;
          iVar7 = iVar9 * 4;
        } while (piVar6[iVar9] != 0);
      }
      puVar2 = *(undefined4 **)(param_1 + 100);
      *(undefined2 *)(param_1 + 0x7c) = 0x5784;
      *(undefined2 *)(param_1 + 0x78) = uVar3;
      *(undefined2 *)(param_1 + 0x7a) = uVar4;
      uVar5 = func_0x00daf2b0();
      *puVar2 = uVar5;
      return;
    }
    if (uVar8 != 0) {
      return;
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 100);
  uVar5 = func_0x00da70c0(param_1,param_1 + -0x178,4);
  *puVar2 = uVar5;
  return;
}



void __fastcall FUN_00db37d0(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uStack_8;
  
  iVar6 = func_0x00da6dd0();
  uVar7 = func_0x00db1310();
  uStack_8 = 0;
  if ((*(uint *)(*(int *)(param_1 + 100) + 8) & 0x1f000000) != 0) {
    uVar4 = func_0x00da6dd0();
    iVar10 = *param_2;
    uVar1 = *(uint *)(iVar10 + 0xc);
    if (0xfffffff2 < uVar1) {
      if (uVar1 != 0xfffffffb) {
LAB_00db39aa:
        func_0x00d71770(param_1,0xb);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = FUN_00d72c80();
      if (iVar8 == 0) goto LAB_00db39aa;
    }
    iVar10 = (int)*(double *)(iVar10 + 8);
    uVar5 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7a) = uVar5;
    uVar5 = 0x293;
    *(short *)(param_1 + 0x78) = (short)uVar7;
    if (1 < iVar10) {
      uVar5 = 0x393;
    }
    *(undefined2 *)(param_1 + 0x7c) = uVar5;
    func_0x00daf2b0();
    if (1 < iVar10) {
      uVar5 = func_0x00da72c0(param_1,0x19,param_1 + -0x138);
      *(undefined4 *)(param_1 + 0x7a) = 0x55050000;
      *(undefined2 *)(param_1 + 0x78) = uVar5;
      uVar5 = func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x7c) = 0x5685;
      *(undefined2 *)(param_1 + 0x78) = uVar5;
      *(undefined2 *)(param_1 + 0x7a) = uVar4;
      uVar4 = func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x78) = uVar4;
      *(undefined2 *)(param_1 + 0x7c) = 0x5685;
      *(short *)(param_1 + 0x7a) = (short)iVar6;
      uVar4 = func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x78) = uVar4;
      *(undefined2 *)(param_1 + 0x7c) = 0x5784;
      *(undefined2 *)(param_1 + 0x7a) = uVar5;
      uStack_8 = func_0x00daf2b0();
    }
  }
  uVar4 = func_0x00da72c0(param_1,0x19,param_1 + -0x138);
  *(undefined2 *)(param_1 + 0x78) = uVar4;
  *(undefined4 *)(param_1 + 0x7a) = 0x55050000;
  uVar9 = func_0x00daf2b0();
  uVar4 = (undefined2)uVar9;
  if (uStack_8 != 0) {
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    *(undefined2 *)(param_1 + 0x7c) = 0x5685;
    *(short *)(param_1 + 0x7a) = (short)iVar6;
    uVar9 = func_0x00daf2b0();
    uVar5 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7a) = uVar5;
    *(undefined2 *)(param_1 + 0x7c) = 0x2913;
    *(short *)(param_1 + 0x78) = (short)uVar7;
    uVar7 = func_0x00daf2b0();
    iVar6 = uStack_8;
  }
  uVar5 = func_0x00da6e30(param_1,0x16,uVar9,iVar6,uVar7);
  puVar2 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7c) = 0x5784;
  *(undefined2 *)(param_1 + 0x78) = uVar5;
  *(undefined2 *)(param_1 + 0x7a) = uVar4;
  uVar7 = func_0x00daf2b0();
  *puVar2 = uVar7;
  return;
}



void __fastcall FUN_00db39c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = func_0x00da6dd0();
  uVar2 = func_0x00da72c0(param_1,0x19,param_1 + -0x138);
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7a) = 0x55050000;
  uVar4 = func_0x00daf2b0();
  uVar2 = func_0x00da6e30(param_1,*(undefined4 *)(param_2 + 8),uVar4,uVar3);
  *(short *)(param_1 + 0x7a) = (short)uVar4;
  puVar1 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7c) = 0x5784;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar3 = func_0x00daf2b0();
  *puVar1 = uVar3;
  return;
}



void __fastcall FUN_00db3a30(uint param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 unaff_EBP;
  int *piVar17;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint *puStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  int *piStack_4;
  
  piVar17 = param_2;
  uVar8 = func_0x00da6dd0();
  uStack_1c = func_0x00da6dd0();
  uStack_8 = (uint)uVar8;
  *(undefined4 *)(param_1 + 0x7a) = 0x45130000;
  *(ushort *)(param_1 + 0x78) = uVar8;
  uStack_20 = func_0x00daf2b0();
  uStack_18 = func_0x00da6cb0();
  piVar3 = (int *)*param_2;
  if (piVar3[1] == 0xfffffffb) {
    iVar14 = *piVar3;
  }
  else {
    if (0xfffffff2 < (uint)piVar3[1]) goto LAB_00db3db1;
    iVar14 = func_0x00d73f50();
    piVar3[1] = -5;
    *piVar3 = iVar14;
  }
  iVar4 = *param_2;
  iStack_10 = iVar14;
  if (*(uint *)(iVar4 + 0xc) == 0xfffffffb) {
    puVar12 = *(uint **)(iVar4 + 8);
  }
  else {
    if (0xfffffff2 < *(uint *)(iVar4 + 0xc)) goto LAB_00db3db1;
    puVar12 = (uint *)func_0x00d73f50();
    *(undefined4 *)(iVar4 + 0xc) = 0xfffffffb;
    *(uint **)(iVar4 + 8) = puVar12;
  }
  *(undefined1 *)(param_1 + 0x75) = 1;
  puStack_14 = puVar12;
  if ((*(uint *)(*(int *)(param_1 + 100) + 8) & 0x1f000000) == 0) {
    uStack_24 = func_0x00da6cb0();
    uVar16 = 1;
  }
  else {
    uStack_24 = func_0x00db1310();
    iVar4 = *piVar17;
    uVar16 = *(uint *)(iVar4 + 0x14);
    if ((0xfffffff2 < uVar16) && ((uVar16 != 0xfffffffb || (iVar13 = FUN_00d72c80(), iVar13 == 0))))
    {
LAB_00db3db1:
      func_0x00d71770(param_1,0xb);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = (uint)*(double *)(iVar4 + 0x10);
  }
  uVar6 = uStack_20;
  uVar7 = uStack_24;
  uStack_24 = uVar16;
  uStack_c = func_0x00db5a70(param_1,iVar14,&uStack_24,uVar7,uStack_20,uStack_18);
  uVar16 = *(uint *)(iVar14 + 0x10);
  piStack_4 = (int *)(uVar6 & 0xffff);
  *(short *)(param_1 + 0x78) = (short)uStack_c;
  *(short *)(param_1 + 0x7a) = (short)uVar6;
  if (uVar16 < uStack_24) {
    *(undefined2 *)(param_1 + 0x7c) = 0x793;
    func_0x00daf2b0();
    uStack_24 = *(uint *)(iVar14 + 0x10);
    uVar16 = uStack_20;
  }
  else {
    *(undefined2 *)(param_1 + 0x7c) = 0x693;
    func_0x00daf2b0();
    uVar16 = uStack_c;
  }
  if ((*(int *)(*(int *)(param_1 + 100) + 8) == 0) ||
     ((char *)(*(uint *)(*(int *)(param_1 + 100) + 0xc) & 0x1f000000) < "ampler2DShadow")) {
    uVar9 = func_0x00da70c0(param_1,puVar12,4);
    *(undefined2 *)(param_1 + 0x7c) = 0x884;
    uVar10 = (undefined2)uStack_1c;
    *(undefined2 *)(param_1 + 0x78) = uVar10;
    *(undefined2 *)(param_1 + 0x7a) = uVar9;
    func_0x00daf2b0();
    iVar14 = func_0x00d6e670(puVar12);
    if (iVar14 != 0) {
      piStack_4 = piVar17;
      if (*(uint *)(param_1 + 8) < *(int *)(param_1 + 0x620) + 0x8000U) {
        uStack_20 = 1;
        uStack_24 = param_1;
        func_0x00d717b0();
LAB_00db21a0:
        uStack_24 = 4;
        func_0x00d71770(param_1);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        iStack_10 = *(int *)(param_1 + 0x54);
        puVar2 = *(undefined4 **)(iStack_10 + 0x10);
        puStack_14 = (uint *)puVar2[-1];
        if (((((((uint)puStack_14 & 3) == 0) && (uVar16 = *puStack_14 & 0xff, uVar16 != 0x41)) &&
             (uVar16 != 0x43)) && ((uVar16 != 0x49 && (uVar16 != 0x3f)))) &&
           ((cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 6), cVar1 != '\x13' &&
            ((cVar1 != -0x75 && (cVar1 != -0x6f)))))) {
          uStack_8 = *(uint *)(param_1 + 0x6c);
          uStack_c = (int)puVar2 - ((uint)*(byte *)((int)puStack_14 - 3) * 8 + 0x10);
          uStack_20 = unaff_EBP;
          if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(param_1 + 0x61c)) {
            iVar14 = uStack_8 * 8 + 8;
            func_0x008ab0e6(puVar2 + 2,puVar2 + -2,iVar14);
            puVar2[3] = (int)puVar2 + (10 - uStack_c);
            puVar2[1] = 0;
            puVar2[1] = puStack_14;
            *puVar2 = FUN_0044e96e;
            puVar2[-1] = 0xffffffff;
            *(int *)(iStack_10 + 0x10) = *(int *)(iStack_10 + 0x10) + 0x10;
            *(int *)(iStack_10 + 0x14) = *(int *)(iStack_10 + 0x14) + 0x10;
            func_0x008ab0e6(*(int *)(param_1 + 100) + 4,*(int *)(param_1 + 100) + -4,
                            uStack_8 * 4 + 4);
            uVar16 = func_0x00da72c0(param_1,0x19,FUN_0044e96e);
            **(uint **)(param_1 + 100) = uVar16 | 0x20000;
            uVar11 = func_0x00da73d0(param_1);
            *(undefined4 *)(*(int *)(param_1 + 100) + -4) = uVar11;
            *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 8;
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 2;
            *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
            *(short *)(param_1 + 0x144) = (short)uVar11;
            func_0x00d96af0(param_1,8,0);
            func_0x008ab0e6(puVar2 + -2,puVar2 + 2,iVar14);
            puVar2[-1] = puStack_14;
            *(int *)(iStack_10 + 0x10) = *(int *)(iStack_10 + 0x10) + -0x10;
            *(int *)(iStack_10 + 0x14) = *(int *)(iStack_10 + 0x14) + -0x10;
            piStack_4[1] = -1;
            return;
          }
          goto LAB_00db21a0;
        }
      }
      uStack_24 = 0;
      func_0x00d96af0(param_1,7);
      piVar17[1] = -1;
      return;
    }
  }
  else {
    uVar10 = (undefined2)uStack_1c;
  }
  *(undefined2 *)(param_1 + 0x7c) = 0x4005;
  *(short *)(param_1 + 0x78) = (short)uStack_8;
  *(short *)(param_1 + 0x7a) = (short)uVar16;
  uStack_8 = uVar16 & 0xffff;
  uStack_1c = func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x7c) = 0x4005;
  *(undefined2 *)(param_1 + 0x78) = uVar10;
  *(short *)(param_1 + 0x7a) = (short)uStack_18;
  uVar11 = func_0x00daf2b0();
  *(short *)(param_1 + 0x7a) = (short)uVar16;
  *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
  *(short *)(param_1 + 0x78) = (short)piStack_4;
  uVar15 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x45130000;
  *(undefined2 *)(param_1 + 0x78) = uVar10;
  piStack_4 = (int *)func_0x00daf2b0();
  uVar9 = func_0x00da6e30(param_1,1,uStack_1c,uVar11,uVar15,piStack_4);
  uVar10 = func_0x00da72c0(param_1,0x1a,0);
  iVar14 = FUN_00d6e5a0(iStack_10 + 0x14 + uStack_24,puStack_14 + 5,
                        *(int *)(iStack_10 + 0x10) - uStack_24,puStack_14[4]);
  *(undefined2 *)(param_1 + 0x78) = uVar9;
  *(undefined2 *)(param_1 + 0x7a) = uVar10;
  if (iVar14 == 0) {
    *(undefined2 *)(param_1 + 0x7c) = 0x885;
    func_0x00daf2b0();
    **(undefined4 **)(param_1 + 100) = 0x7fff;
    return;
  }
  *(undefined2 *)(param_1 + 0x7c) = 0x985;
  func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x78) = uVar9;
  *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
  *(short *)(param_1 + 0x7a) = (short)uStack_1c;
  uVar9 = func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x78) = uVar9;
  *(undefined2 *)(param_1 + 0x7c) = 0x2913;
  *(short *)(param_1 + 0x7a) = (short)uStack_8;
  uVar9 = func_0x00daf2b0();
  uVar10 = func_0x00da6cb0();
  puVar2 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7a) = uVar10;
  *(undefined2 *)(param_1 + 0x7c) = 0x2913;
  *(undefined2 *)(param_1 + 0x78) = uVar9;
  uVar11 = func_0x00daf2b0();
  *puVar2 = uVar11;
  iVar14 = *(int *)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7c) = 0x2913;
  *(undefined2 *)(param_1 + 0x78) = uVar9;
  *(short *)(param_1 + 0x7a) = (short)piStack_4;
  uVar11 = func_0x00daf2b0();
  *(undefined4 *)(iVar14 + 4) = uVar11;
  piVar17[1] = 2;
  return;
}



void __fastcall FUN_00db3dc0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0x00da72c0(param_1,0x19,param_1 + -0x138);
  *(undefined4 *)(param_1 + 0x7a) = 0x55050000;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar2 = func_0x00daf2b0();
  func_0x00db5420(param_1,param_2,uVar2,0);
  return;
}



// WARNING: Possible PIC construction at 0x00db3e34: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3e64: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3e9c: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3ed3: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3f03: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3f2d: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3f57: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3f81: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3fdd: Changing call to branch
// WARNING: Possible PIC construction at 0x00db3faa: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00db3fe2)
// WARNING: Removing unreachable block (ram,0x00db3f86)
// WARNING: Removing unreachable block (ram,0x00db3f5c)
// WARNING: Removing unreachable block (ram,0x00db3f32)
// WARNING: Removing unreachable block (ram,0x00db3f08)
// WARNING: Removing unreachable block (ram,0x00db3ed8)
// WARNING: Removing unreachable block (ram,0x00db3ea1)
// WARNING: Removing unreachable block (ram,0x00db3f9f)
// WARNING: Removing unreachable block (ram,0x00db3eaf)
// WARNING: Removing unreachable block (ram,0x00db3e69)
// WARNING: Removing unreachable block (ram,0x00db3e8f)
// WARNING: Removing unreachable block (ram,0x00db3e92)
// WARNING: Removing unreachable block (ram,0x00db3e39)
// WARNING: Removing unreachable block (ram,0x00db3faf)
// WARNING: Removing unreachable block (ram,0x00db3fc8)

int __fastcall FUN_00db3e00(int param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  
  uVar7 = func_0x00db5910(param_1,param_2,0);
  uVar15 = (uint)uVar7;
  uVar17 = *(undefined4 *)(*(int *)*param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x7a) = 0x45050011;
  *(ushort *)(param_1 + 0x78) = uVar7;
  uVar8 = *(uint *)(param_1 + 0x68);
  iVar10 = param_1;
  if ((uVar8 & 0xfff0000) != 0x3ff0000) {
    if (((uVar8 & 0x10000) == 0) && (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0)) {
FUN_00dac890:
      iVar14 = *(int *)(param_1 + 0x78);
      uVar8 = (uint)*(ushort *)(param_1 + 0x78);
      uVar13 = (uint)*(byte *)(param_1 + 0x7d);
      if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
        uVar9 = (uint)*(ushort *)(param_1 + 0x7a);
        if (*(ushort *)(param_1 + 0x7a) <= uVar8) {
          uVar9 = uVar8;
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x146 + uVar13 * 2);
        if (uVar9 < uVar8) {
          do {
            iVar16 = *(int *)(param_1 + 0x10) + uVar8 * 8;
            if (*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 8) == iVar14) {
              return uVar8 + (uint)*(byte *)(iVar16 + 4) * 0x1000000;
            }
            uVar8 = (uint)*(ushort *)(iVar16 + 6);
          } while (uVar9 < uVar8);
        }
      }
      uVar8 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar8) {
        func_0x00da6c20(uVar17,param_2,uVar15,iVar10);
      }
      *(uint *)(param_1 + 8) = uVar8 + 1;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
      *(undefined2 *)((int)piVar2 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar13 * 2);
      *piVar2 = iVar14;
      *(short *)(param_1 + 0x146 + uVar13 * 2) = (short)uVar8;
      *(undefined1 *)((int)piVar2 + 5) = *(undefined1 *)(param_1 + 0x7d);
      bVar4 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
      *(byte *)(piVar2 + 1) = bVar4;
      return (uint)bVar4 * 0x1000000 + uVar8;
    }
    if ((((uVar8 & 0xb0000) != 0xb0000) &&
        ((((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x40 &&
         (*(byte *)(param_1 + 0x7d) != 0x47)))) ||
       (((uVar8 & 0x110000) != 0x110000 &&
        (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x60)))) {
      uVar8 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar8) {
        func_0x00da6c20(uVar17,param_2,param_1,0xdb3e39);
      }
      bVar4 = *(byte *)(param_1 + 0x7d);
      *(uint *)(param_1 + 8) = uVar8 + 1;
      puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
      iVar10 = param_1 + (uint)bVar4 * 2;
      puVar1[3] = *(undefined2 *)(iVar10 + 0x146);
      *(short *)(iVar10 + 0x146) = (short)uVar8;
      *(byte *)((int)puVar1 + 5) = bVar4;
      *puVar1 = *(undefined2 *)(param_1 + 0x78);
      puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
      bVar4 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
      *(byte *)(puVar1 + 2) = bVar4;
      return (uint)bVar4 * 0x1000000 + uVar8;
    }
  }
LAB_00daf340:
  uVar7 = *(ushort *)(param_1 + 0x78);
  iVar14 = (uint)*(byte *)(param_1 + 0x7d) * 0x20000;
  if (*(uint *)(param_1 + 0x14) <= (uint)uVar7) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar7 * 8);
    uVar5 = puVar3[1];
    iVar14 = iVar14 + (uint)*(byte *)((int)puVar3 + 5) * 0x400;
    *(undefined4 *)(param_1 + 0x80) = *puVar3;
    *(undefined4 *)(param_1 + 0x84) = uVar5;
    if (uVar7 < 0x7ffd) {
      uVar5 = puVar3[3];
      *(undefined4 *)(param_1 + 0x88) = puVar3[2];
      *(undefined4 *)(param_1 + 0x8c) = uVar5;
    }
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x7a);
  if (uVar8 < *(uint *)(param_1 + 0x14)) {
    uVar8 = iVar14 + (uVar8 & 0x3ff);
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
    uVar5 = puVar3[1];
    uVar8 = iVar14 + (uint)*(byte *)((int)puVar3 + 5);
    *(undefined4 *)(param_1 + 0x90) = *puVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    if (*(ushort *)(param_1 + 0x7a) < 0x7ffd) {
      uVar5 = puVar3[3];
      *(undefined4 *)(param_1 + 0x98) = puVar3[2];
      *(undefined4 *)(param_1 + 0x9c) = uVar5;
    }
  }
  uVar13 = 0;
  do {
    uVar12 = uVar13 & 0x1ffff | uVar8;
    uVar11 = ((uVar12 >> 0xb | uVar12 << 0x15) - uVar12 >> 0x12 |
             ((uVar12 & 0xfffff800) + uVar12 * -0x800) * 8) % 0x3e9;
    uVar9 = *(uint *)(&DAT_010ce4f8 + uVar11 * 4);
    if (((uVar9 & 0xffffff) == uVar12) ||
       (uVar9 = *(uint *)(&DAT_010ce4fc + uVar11 * 4), (uVar9 & 0xffffff) == uVar12)) {
      uVar9 = (*(code *)(&PTR_FUN_010ce280)[uVar9 >> 0x18])();
      uVar9 = uVar9 & 0xffff;
      if (uVar9 != 0) break;
    }
    if (uVar13 == 0xfffff) goto FUN_00dac890;
    uVar13 = (uVar13 | uVar13 >> 10) ^ 0xffc00;
  } while( true );
  if (4 < uVar9) {
    return (uint)*(byte *)(*(int *)(param_1 + 0x10) + 4 + uVar9 * 8) * 0x1000000 + uVar9;
  }
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) {
        return 0xffff;
      }
      func_0x00d71770(param_1,0x18);
      pcVar6 = (code *)swi(3);
      iVar10 = (*pcVar6)();
      return iVar10;
    }
    iVar14 = *(int *)(param_1 + 0x78);
    uVar7 = *(ushort *)(param_1 + 0x174);
    while( true ) {
      uVar8 = (uint)uVar7;
      if (uVar8 == 0) {
        uVar8 = *(uint *)(param_1 + 0x14);
        if (uVar8 <= *(uint *)(param_1 + 0x118)) {
          func_0x00da6f00(param_1,uVar17,param_2,iVar10);
        }
        iVar10 = *(int *)(param_1 + 0x10);
        iVar16 = uVar8 - 1;
        *(int *)(param_1 + 0x14) = iVar16;
        *(int *)(iVar10 + iVar16 * 8) = iVar14;
        *(undefined2 *)(iVar10 + 4 + iVar16 * 8) = 0x1713;
        *(undefined2 *)(iVar10 + iVar16 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
        *(short *)(param_1 + 0x174) = (short)iVar16;
        return uVar8 + 0x12ffffff;
      }
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 8) == iVar14) break;
      uVar7 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar8 * 8 + 6);
    }
    return uVar8 + 0x13000000;
  }
  goto LAB_00daf340;
}



// WARNING: Possible PIC construction at 0x00db4049: Changing call to branch
// WARNING: Possible PIC construction at 0x00db407a: Changing call to branch
// WARNING: Possible PIC construction at 0x00db40a4: Changing call to branch
// WARNING: Possible PIC construction at 0x00db40d0: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00db40a9)
// WARNING: Removing unreachable block (ram,0x00db407f)
// WARNING: Removing unreachable block (ram,0x00db404e)
// WARNING: Removing unreachable block (ram,0x00db40d5)

int __fastcall FUN_00db4020(int param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 unaff_ESI;
  int iVar16;
  undefined4 uVar17;
  
  uVar7 = func_0x00db5910(param_1,param_2,0);
  uVar15 = (uint)uVar7;
  *(undefined4 *)(param_1 + 0x7a) = 0x45050013;
  *(ushort *)(param_1 + 0x78) = uVar7;
  uVar17 = 0xdb404e;
  uVar8 = *(uint *)(param_1 + 0x68);
  iVar10 = param_1;
  if ((uVar8 & 0xfff0000) != 0x3ff0000) {
    if (((uVar8 & 0x10000) == 0) && (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0)) {
FUN_00dac890:
      iVar14 = *(int *)(param_1 + 0x78);
      uVar8 = (uint)*(ushort *)(param_1 + 0x78);
      uVar13 = (uint)*(byte *)(param_1 + 0x7d);
      if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
        uVar9 = (uint)*(ushort *)(param_1 + 0x7a);
        if (*(ushort *)(param_1 + 0x7a) <= uVar8) {
          uVar9 = uVar8;
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x146 + uVar13 * 2);
        if (uVar9 < uVar8) {
          do {
            iVar16 = *(int *)(param_1 + 0x10) + uVar8 * 8;
            if (*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 8) == iVar14) {
              return uVar8 + (uint)*(byte *)(iVar16 + 4) * 0x1000000;
            }
            uVar8 = (uint)*(ushort *)(iVar16 + 6);
          } while (uVar9 < uVar8);
        }
      }
      uVar8 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar8) {
        func_0x00da6c20(iVar10,unaff_ESI,uVar15,param_2,uVar17);
      }
      *(uint *)(param_1 + 8) = uVar8 + 1;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
      *(undefined2 *)((int)piVar2 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar13 * 2);
      *piVar2 = iVar14;
      *(short *)(param_1 + 0x146 + uVar13 * 2) = (short)uVar8;
      *(undefined1 *)((int)piVar2 + 5) = *(undefined1 *)(param_1 + 0x7d);
      bVar4 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
      *(byte *)(piVar2 + 1) = bVar4;
      return (uint)bVar4 * 0x1000000 + uVar8;
    }
    if ((((uVar8 & 0xb0000) != 0xb0000) &&
        ((((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x40 &&
         (*(byte *)(param_1 + 0x7d) != 0x47)))) ||
       (((uVar8 & 0x110000) != 0x110000 &&
        (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x60)))) {
      uVar8 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar8) {
        func_0x00da6c20(param_1);
      }
      bVar4 = *(byte *)(param_1 + 0x7d);
      *(uint *)(param_1 + 8) = uVar8 + 1;
      puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
      iVar10 = param_1 + (uint)bVar4 * 2;
      puVar1[3] = *(undefined2 *)(iVar10 + 0x146);
      *(short *)(iVar10 + 0x146) = (short)uVar8;
      *(byte *)((int)puVar1 + 5) = bVar4;
      *puVar1 = *(undefined2 *)(param_1 + 0x78);
      puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
      bVar4 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
      *(byte *)(puVar1 + 2) = bVar4;
      return (uint)bVar4 * 0x1000000 + uVar8;
    }
  }
LAB_00daf340:
  uVar7 = *(ushort *)(param_1 + 0x78);
  iVar14 = (uint)*(byte *)(param_1 + 0x7d) * 0x20000;
  if (*(uint *)(param_1 + 0x14) <= (uint)uVar7) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar7 * 8);
    uVar5 = puVar3[1];
    iVar14 = iVar14 + (uint)*(byte *)((int)puVar3 + 5) * 0x400;
    *(undefined4 *)(param_1 + 0x80) = *puVar3;
    *(undefined4 *)(param_1 + 0x84) = uVar5;
    if (uVar7 < 0x7ffd) {
      uVar5 = puVar3[3];
      *(undefined4 *)(param_1 + 0x88) = puVar3[2];
      *(undefined4 *)(param_1 + 0x8c) = uVar5;
    }
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x7a);
  if (uVar8 < *(uint *)(param_1 + 0x14)) {
    uVar8 = iVar14 + (uVar8 & 0x3ff);
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
    uVar5 = puVar3[1];
    uVar8 = iVar14 + (uint)*(byte *)((int)puVar3 + 5);
    *(undefined4 *)(param_1 + 0x90) = *puVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    if (*(ushort *)(param_1 + 0x7a) < 0x7ffd) {
      uVar5 = puVar3[3];
      *(undefined4 *)(param_1 + 0x98) = puVar3[2];
      *(undefined4 *)(param_1 + 0x9c) = uVar5;
    }
  }
  uVar13 = 0;
  do {
    uVar12 = uVar13 & 0x1ffff | uVar8;
    uVar11 = ((uVar12 >> 0xb | uVar12 << 0x15) - uVar12 >> 0x12 |
             ((uVar12 & 0xfffff800) + uVar12 * -0x800) * 8) % 0x3e9;
    uVar9 = *(uint *)(&DAT_010ce4f8 + uVar11 * 4);
    if (((uVar9 & 0xffffff) == uVar12) ||
       (uVar9 = *(uint *)(&DAT_010ce4fc + uVar11 * 4), (uVar9 & 0xffffff) == uVar12)) {
      uVar9 = (*(code *)(&PTR_FUN_010ce280)[uVar9 >> 0x18])();
      uVar9 = uVar9 & 0xffff;
      if (uVar9 != 0) break;
    }
    if (uVar13 == 0xfffff) goto FUN_00dac890;
    uVar13 = (uVar13 | uVar13 >> 10) ^ 0xffc00;
  } while( true );
  if (4 < uVar9) {
    return (uint)*(byte *)(*(int *)(param_1 + 0x10) + 4 + uVar9 * 8) * 0x1000000 + uVar9;
  }
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) {
        return 0xffff;
      }
      func_0x00d71770(param_1,0x18);
      pcVar6 = (code *)swi(3);
      iVar10 = (*pcVar6)();
      return iVar10;
    }
    iVar14 = *(int *)(param_1 + 0x78);
    uVar7 = *(ushort *)(param_1 + 0x174);
    while( true ) {
      uVar8 = (uint)uVar7;
      if (uVar8 == 0) {
        uVar8 = *(uint *)(param_1 + 0x14);
        if (uVar8 <= *(uint *)(param_1 + 0x118)) {
          func_0x00da6f00(param_1,iVar10,unaff_ESI,param_2);
        }
        iVar10 = *(int *)(param_1 + 0x10);
        iVar16 = uVar8 - 1;
        *(int *)(param_1 + 0x14) = iVar16;
        *(int *)(iVar10 + iVar16 * 8) = iVar14;
        *(undefined2 *)(iVar10 + 4 + iVar16 * 8) = 0x1713;
        *(undefined2 *)(iVar10 + iVar16 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
        *(short *)(param_1 + 0x174) = (short)iVar16;
        return uVar8 + 0x12ffffff;
      }
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 8) == iVar14) break;
      uVar7 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar8 * 8 + 6);
    }
    return uVar8 + 0x13000000;
  }
  goto LAB_00daf340;
}



void __fastcall FUN_00db4100(int param_1,int *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = func_0x00db5910(param_1,param_2,0);
  uVar3 = func_0x00da6cb0();
  *(undefined2 *)(param_1 + 0x7a) = uVar3;
  *(undefined2 *)(param_1 + 0x7c) = 0x2905;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar2 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x55050002;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar4 = func_0x00daf2b0();
  uVar1 = *(uint *)(*(int *)(param_1 + 100) + 4);
  if ((uVar1 & 0x1f000000) == 0x4000000) {
    uVar2 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7c) = 0x4005;
    *(short *)(param_1 + 0x78) = (short)uVar1;
    *(undefined2 *)(param_1 + 0x7a) = uVar2;
    uVar5 = func_0x00daf2b0();
    *(undefined4 *)(param_1 + 0x7a) = 0x45130000;
    *(short *)(param_1 + 0x78) = (short)uVar1;
    uVar6 = func_0x00daf2b0();
    func_0x00da6e30(param_1,0x18,uVar4,uVar5,uVar6,uVar1);
    return;
  }
  if ((uVar1 & 0x1f000000) == 0xa000000) {
    uVar5 = func_0x00dbb8a0(param_1,uVar1,*param_2 + 8);
    uVar6 = func_0x00db5990(param_1,param_2,2);
    func_0x00da6e30(param_1,0x18,uVar4,uVar5,uVar6,uVar1);
  }
  return;
}



// WARNING: Possible PIC construction at 0x00db4224: Changing call to branch
// WARNING: Possible PIC construction at 0x00db4258: Changing call to branch
// WARNING: Possible PIC construction at 0x00db42ac: Changing call to branch
// WARNING: Possible PIC construction at 0x00db433c: Changing call to branch
// WARNING: Possible PIC construction at 0x00db4377: Changing call to branch
// WARNING: Possible PIC construction at 0x00db43a3: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00db437c)
// WARNING: Removing unreachable block (ram,0x00db4341)
// WARNING: Removing unreachable block (ram,0x00db425d)
// WARNING: Removing unreachable block (ram,0x00db43fb)
// WARNING: Removing unreachable block (ram,0x00db4271)
// WARNING: Removing unreachable block (ram,0x00db4280)
// WARNING: Removing unreachable block (ram,0x00db42b1)
// WARNING: Removing unreachable block (ram,0x00db42bc)
// WARNING: Removing unreachable block (ram,0x00db42cb)
// WARNING: Removing unreachable block (ram,0x00db428e)
// WARNING: Removing unreachable block (ram,0x00db4229)
// WARNING: Removing unreachable block (ram,0x00db43a8)
// WARNING: Removing unreachable block (ram,0x00db43d1)
// WARNING: Removing unreachable block (ram,0x00db42e0)
// WARNING: Removing unreachable block (ram,0x00db430e)
// WARNING: Removing unreachable block (ram,0x00db435f)
// WARNING: Removing unreachable block (ram,0x00db43c6)
// WARNING: Removing unreachable block (ram,0x00db4367)
// WARNING: Removing unreachable block (ram,0x00db431e)
// WARNING: Removing unreachable block (ram,0x00db42f0)
// WARNING: Removing unreachable block (ram,0x00db43e2)
// WARNING: Removing unreachable block (ram,0x00daf2b0)
// WARNING: Removing unreachable block (ram,0x00daf2c5)
// WARNING: Removing unreachable block (ram,0x00daf2cd)
// WARNING: Removing unreachable block (ram,0x00daf2e3)
// WARNING: Removing unreachable block (ram,0x00daf2f1)
// WARNING: Removing unreachable block (ram,0x00daf303)
// WARNING: Removing unreachable block (ram,0x00daf311)
// WARNING: Removing unreachable block (ram,0x00daf31f)
// WARNING: Removing unreachable block (ram,0x00daf338)
// WARNING: Removing unreachable block (ram,0x00daf340)
// WARNING: Removing unreachable block (ram,0x00daf356)
// WARNING: Removing unreachable block (ram,0x00daf380)
// WARNING: Removing unreachable block (ram,0x00daf392)
// WARNING: Removing unreachable block (ram,0x00daf3d9)
// WARNING: Removing unreachable block (ram,0x00daf39e)
// WARNING: Removing unreachable block (ram,0x00daf3c5)
// WARNING: Removing unreachable block (ram,0x00daf3e1)
// WARNING: Removing unreachable block (ram,0x00daf3e3)
// WARNING: Removing unreachable block (ram,0x00daf427)
// WARNING: Removing unreachable block (ram,0x00daf43a)
// WARNING: Removing unreachable block (ram,0x00daf469)
// WARNING: Removing unreachable block (ram,0x00daf4a4)
// WARNING: Removing unreachable block (ram,0x00daf46e)
// WARNING: Removing unreachable block (ram,0x00daf477)
// WARNING: Removing unreachable block (ram,0x00daf495)
// WARNING: Removing unreachable block (ram,0x00daf4b6)
// WARNING: Removing unreachable block (ram,0x00daf49a)
// WARNING: Removing unreachable block (ram,0x00daf47c)
// WARNING: Removing unreachable block (ram,0x00daf44f)
// WARNING: Removing unreachable block (ram,0x00daf48a)
// WARNING: Removing unreachable block (ram,0x00daf457)
// WARNING: Removing unreachable block (ram,0x00daf32f)
// WARNING: Removing unreachable block (ram,0x00daf308)
// WARNING: Removing unreachable block (ram,0x00da6bb0)
// WARNING: Removing unreachable block (ram,0x00da6bc0)
// WARNING: Removing unreachable block (ram,0x00da6bc5)
// WARNING: Removing unreachable block (ram,0x00daf2da)
// WARNING: Removing unreachable block (ram,0x00dac890)
// WARNING: Removing unreachable block (ram,0x00dac8b2)
// WARNING: Removing unreachable block (ram,0x00dac8b4)
// WARNING: Removing unreachable block (ram,0x00dac8b7)
// WARNING: Removing unreachable block (ram,0x00dac8c3)
// WARNING: Removing unreachable block (ram,0x00dac8c6)
// WARNING: Removing unreachable block (ram,0x00dac927)
// WARNING: Removing unreachable block (ram,0x00dac8ce)
// WARNING: Removing unreachable block (ram,0x00dac8d6)
// WARNING: Removing unreachable block (ram,0x00dac8e1)
// WARNING: Removing unreachable block (ram,0x00dac8e8)

int __fastcall FUN_00db4200(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = func_0x00db5910(param_1,param_2,0);
  uVar1 = *(ushort *)(param_1 + 0x174);
  while( true ) {
    uVar3 = (uint)uVar1;
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x14);
      if (uVar3 <= *(uint *)(param_1 + 0x118)) {
        func_0x00da6f00(param_1,uVar4,param_1);
      }
      iVar2 = *(int *)(param_1 + 0x10);
      iVar5 = uVar3 - 1;
      *(int *)(param_1 + 0x14) = iVar5;
      *(undefined4 *)(iVar2 + iVar5 * 8) = 0x18;
      *(undefined2 *)(iVar2 + 4 + iVar5 * 8) = 0x1713;
      *(undefined2 *)(iVar2 + iVar5 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
      *(short *)(param_1 + 0x174) = (short)iVar5;
      return uVar3 + 0x12ffffff;
    }
    if (*(int *)(*(int *)(param_1 + 0x10) + uVar3 * 8) == 0x18) break;
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar3 * 8 + 6);
  }
  return uVar3 + 0x13000000;
}



void __fastcall FUN_00db4410(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar1 = func_0x00db5910(param_1,param_2,0);
  uVar2 = func_0x00da6cb0();
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  *(undefined2 *)(param_1 + 0x7c) = 0x2905;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x55050002;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar3 = func_0x00daf2b0();
  func_0x00db5420(param_1,param_2,uVar3,1);
  return;
}



void __fastcall FUN_00db4470(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_14;
  
  uVar1 = func_0x00db5910(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x7a) = 0x45050013;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar2 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x4505000e;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar3 = func_0x00daf2b0();
  if (*(int *)(*(int *)(param_1 + 100) + 4) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 100) + 4) = 0x7fff;
    *(undefined4 *)(*(int *)(param_1 + 100) + 8) = 0;
  }
  iVar9 = *(int *)(param_1 + 100);
  iVar10 = 0;
  uVar6 = *(uint *)(iVar9 + 4);
  if (uVar6 != 0) {
    iVar8 = 0;
    do {
      iVar10 = iVar10 + 1;
      if ((uVar6 & 0x1f000000) != 0) {
        uVar7 = func_0x00db5990(param_1,param_2,iVar10);
        *(undefined4 *)(*(int *)(param_1 + 100) + 4 + iVar8) = uVar7;
      }
      iVar9 = *(int *)(param_1 + 100);
      iVar8 = iVar10 * 4;
      uVar6 = *(uint *)(iVar9 + 4 + iVar8);
    } while (uVar6 != 0);
  }
  uVar6 = *(uint *)(iVar9 + 4);
  iVar9 = 0;
  if (uVar6 != 0) {
    iStack_14 = 0;
    do {
      *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
      *(undefined2 *)(param_1 + 0x78) = uVar3;
      *(undefined2 *)(param_1 + 0x7a) = uVar2;
      uVar4 = func_0x00daf2b0();
      if ((uVar6 & 0x1f000000) == 0) {
        iVar10 = *(int *)(param_1 + 100);
        *(undefined2 *)(param_1 + 0x7c) = 0x5004;
        *(undefined2 *)(param_1 + 0x78) = uVar2;
        *(undefined2 *)(param_1 + 0x7a) = uVar4;
        uVar7 = func_0x00daf2b0();
        uVar4 = uVar3;
      }
      else {
        *(undefined2 *)(param_1 + 0x78) = uVar4;
        *(undefined2 *)(param_1 + 0x7c) = 0x3213;
        *(short *)(param_1 + 0x7a) = (short)uVar6;
        uVar5 = func_0x00daf2b0();
        *(undefined2 *)(param_1 + 0x7c) = 0x2905;
        *(undefined2 *)(param_1 + 0x78) = uVar2;
        *(undefined2 *)(param_1 + 0x7a) = uVar5;
        uVar4 = func_0x00daf2b0();
        *(undefined2 *)(param_1 + 0x7a) = uVar5;
        iVar10 = *(int *)(param_1 + 100);
        *(undefined2 *)(param_1 + 0x7c) = 0x5004;
        *(undefined2 *)(param_1 + 0x78) = uVar2;
        uVar7 = func_0x00daf2b0();
      }
      *(undefined4 *)(iVar10 + iStack_14) = uVar7;
      *(undefined4 *)(param_1 + 0x7a) = 0x3e050013;
      *(undefined2 *)(param_1 + 0x78) = uVar1;
      uVar2 = func_0x00daf2b0();
      *(undefined2 *)(param_1 + 0x78) = uVar2;
      *(undefined2 *)(param_1 + 0x7c) = 0x4d05;
      *(undefined2 *)(param_1 + 0x7a) = uVar4;
      func_0x00daf2b0();
      iVar9 = iVar9 + 1;
      iStack_14 = iVar9 * 4;
      uVar6 = *(uint *)(*(int *)(param_1 + 100) + 4 + iStack_14);
      uVar2 = uVar4;
    } while (uVar6 != 0);
  }
  *(int *)(param_2 + 4) = iVar9;
  return;
}



void __fastcall FUN_00db4650(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar2 = func_0x00db5910(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x7a) = 0x45050013;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar3 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x4505000e;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar2 = func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  *(undefined2 *)(param_1 + 0x7a) = uVar3;
  uVar2 = func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x78) = uVar3;
  puVar1 = *(undefined4 **)(param_1 + 100);
  *(undefined2 *)(param_1 + 0x7c) = 0x5004;
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  uVar4 = func_0x00daf2b0();
  *puVar1 = uVar4;
  return;
}



void __fastcall FUN_00db46d0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar1 = func_0x00db5910(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x7a) = 0x45050013;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar2 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x4505000e;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x00daf2b0();
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  uVar3 = func_0x00daf2b0();
  **(undefined4 **)(param_1 + 100) = uVar3;
  return;
}



// WARNING: Possible PIC construction at 0x00db474d: Changing call to branch
// WARNING: Possible PIC construction at 0x00db477a: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00db4752)
// WARNING: Removing unreachable block (ram,0x00db477f)
// WARNING: Removing unreachable block (ram,0x00daf2b0)
// WARNING: Removing unreachable block (ram,0x00daf2c5)
// WARNING: Removing unreachable block (ram,0x00daf2cd)
// WARNING: Removing unreachable block (ram,0x00daf2e3)
// WARNING: Removing unreachable block (ram,0x00daf2f1)
// WARNING: Removing unreachable block (ram,0x00daf303)
// WARNING: Removing unreachable block (ram,0x00daf311)
// WARNING: Removing unreachable block (ram,0x00daf31f)
// WARNING: Removing unreachable block (ram,0x00daf338)
// WARNING: Removing unreachable block (ram,0x00daf340)
// WARNING: Removing unreachable block (ram,0x00daf356)
// WARNING: Removing unreachable block (ram,0x00daf380)
// WARNING: Removing unreachable block (ram,0x00daf392)
// WARNING: Removing unreachable block (ram,0x00daf3d9)
// WARNING: Removing unreachable block (ram,0x00daf39e)
// WARNING: Removing unreachable block (ram,0x00daf3c5)
// WARNING: Removing unreachable block (ram,0x00daf3e1)
// WARNING: Removing unreachable block (ram,0x00daf3e3)
// WARNING: Removing unreachable block (ram,0x00daf427)
// WARNING: Removing unreachable block (ram,0x00daf43a)
// WARNING: Removing unreachable block (ram,0x00daf469)
// WARNING: Removing unreachable block (ram,0x00daf4a4)
// WARNING: Removing unreachable block (ram,0x00daf46e)
// WARNING: Removing unreachable block (ram,0x00daf477)
// WARNING: Removing unreachable block (ram,0x00daf495)
// WARNING: Removing unreachable block (ram,0x00daf4b6)
// WARNING: Removing unreachable block (ram,0x00daf49a)
// WARNING: Removing unreachable block (ram,0x00daf47c)
// WARNING: Removing unreachable block (ram,0x00daf44f)
// WARNING: Removing unreachable block (ram,0x00daf48a)
// WARNING: Removing unreachable block (ram,0x00daf457)
// WARNING: Removing unreachable block (ram,0x00daf32f)
// WARNING: Removing unreachable block (ram,0x00daf308)
// WARNING: Removing unreachable block (ram,0x00da6bb0)
// WARNING: Removing unreachable block (ram,0x00da6bc0)
// WARNING: Removing unreachable block (ram,0x00da6bc5)
// WARNING: Removing unreachable block (ram,0x00daf2da)
// WARNING: Removing unreachable block (ram,0x00dac890)
// WARNING: Removing unreachable block (ram,0x00dac8b2)
// WARNING: Removing unreachable block (ram,0x00dac8b4)
// WARNING: Removing unreachable block (ram,0x00dac8b7)
// WARNING: Removing unreachable block (ram,0x00dac8c3)
// WARNING: Removing unreachable block (ram,0x00dac8c6)
// WARNING: Removing unreachable block (ram,0x00dac927)
// WARNING: Removing unreachable block (ram,0x00dac8ce)
// WARNING: Removing unreachable block (ram,0x00dac8d6)
// WARNING: Removing unreachable block (ram,0x00dac8e1)
// WARNING: Removing unreachable block (ram,0x00dac8e8)

int __fastcall FUN_00db4730(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  func_0x00db5910(param_1,param_2,0);
  uVar1 = *(ushort *)(param_1 + 0x174);
  while( true ) {
    uVar3 = (uint)uVar1;
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x14);
      if (uVar3 <= *(uint *)(param_1 + 0x118)) {
        func_0x00da6f00(param_1);
      }
      iVar2 = *(int *)(param_1 + 0x10);
      iVar4 = uVar3 - 1;
      *(int *)(param_1 + 0x14) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 0x18;
      *(undefined2 *)(iVar2 + 4 + iVar4 * 8) = 0x1713;
      *(undefined2 *)(iVar2 + iVar4 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
      *(short *)(param_1 + 0x174) = (short)iVar4;
      return uVar3 + 0x12ffffff;
    }
    if (*(int *)(*(int *)(param_1 + 0x10) + uVar3 * 8) == 0x18) break;
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar3 * 8 + 6);
  }
  return uVar3 + 0x13000000;
}



void __fastcall FUN_00db47d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = func_0x00db5910(param_1,param_2,0);
  uVar4 = func_0x00da6cb0();
  *(undefined2 *)(param_1 + 0x7c) = 0x2905;
  *(undefined2 *)(param_1 + 0x78) = uVar3;
  *(undefined2 *)(param_1 + 0x7a) = uVar4;
  uVar4 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x55050002;
  *(undefined2 *)(param_1 + 0x78) = uVar4;
  uVar5 = func_0x00daf2b0();
  uVar6 = func_0x00db5990(param_1,param_2,1);
  iVar1 = *(int *)(param_1 + 100);
  uVar5 = func_0x00da6e30(param_1,0x19,uVar5,uVar6);
  *(undefined4 *)(iVar1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 0x7a) = 0x4505000e;
  *(undefined2 *)(param_1 + 0x78) = uVar3;
  uVar5 = func_0x00daf2b0();
  puVar2 = *(undefined4 **)(param_1 + 100);
  uVar5 = func_0x00dbb8e0(param_1,uVar5);
  *puVar2 = uVar5;
  *(undefined4 *)(param_2 + 4) = 2;
  return;
}



// WARNING: Possible PIC construction at 0x00db48c5: Changing call to branch
// WARNING: Possible PIC construction at 0x00db48f8: Changing call to branch
// WARNING: Possible PIC construction at 0x00db492f: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00db48fd)
// WARNING: Removing unreachable block (ram,0x00db48ca)
// WARNING: Removing unreachable block (ram,0x00db4934)

int __fastcall FUN_00db4880(int param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  uVar7 = func_0x00db5910(param_1,param_2,0);
  uVar11 = func_0x00db5990(param_1,param_2,1);
  *(undefined2 *)(param_1 + 0x7c) = 0x4505;
  uVar16 = (uint)uVar7;
  *(ushort *)(param_1 + 0x78) = uVar7;
  *(undefined2 *)(param_1 + 0x7a) = 0xe;
  uVar8 = *(uint *)(param_1 + 0x68);
  iVar10 = param_1;
  if ((uVar8 & 0xfff0000) != 0x3ff0000) {
    if (((uVar8 & 0x10000) == 0) && (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0)) {
FUN_00dac890:
      iVar15 = *(int *)(param_1 + 0x78);
      uVar8 = (uint)*(ushort *)(param_1 + 0x78);
      uVar14 = (uint)*(byte *)(param_1 + 0x7d);
      if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
        uVar9 = (uint)*(ushort *)(param_1 + 0x7a);
        if (*(ushort *)(param_1 + 0x7a) <= uVar8) {
          uVar9 = uVar8;
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x146 + uVar14 * 2);
        if (uVar9 < uVar8) {
          do {
            iVar17 = *(int *)(param_1 + 0x10) + uVar8 * 8;
            if (*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 8) == iVar15) {
              return uVar8 + (uint)*(byte *)(iVar17 + 4) * 0x1000000;
            }
            uVar8 = (uint)*(ushort *)(iVar17 + 6);
          } while (uVar9 < uVar8);
        }
      }
      uVar8 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar8) {
        func_0x00da6c20(iVar10,param_2,uVar16,uVar11);
      }
      *(uint *)(param_1 + 8) = uVar8 + 1;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
      *(undefined2 *)((int)piVar2 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar14 * 2);
      *piVar2 = iVar15;
      *(short *)(param_1 + 0x146 + uVar14 * 2) = (short)uVar8;
      *(undefined1 *)((int)piVar2 + 5) = *(undefined1 *)(param_1 + 0x7d);
      bVar4 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
      *(byte *)(piVar2 + 1) = bVar4;
      return (uint)bVar4 * 0x1000000 + uVar8;
    }
    if ((((uVar8 & 0xb0000) != 0xb0000) &&
        ((((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x40 &&
         (*(byte *)(param_1 + 0x7d) != 0x47)))) ||
       (((uVar8 & 0x110000) != 0x110000 &&
        (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x60)))) {
      uVar8 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar8) {
        func_0x00da6c20(param_1,param_2,uVar11,0xdb48ca);
      }
      bVar4 = *(byte *)(param_1 + 0x7d);
      *(uint *)(param_1 + 8) = uVar8 + 1;
      puVar1 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
      iVar10 = param_1 + (uint)bVar4 * 2;
      puVar1[3] = *(undefined2 *)(iVar10 + 0x146);
      *(short *)(iVar10 + 0x146) = (short)uVar8;
      *(byte *)((int)puVar1 + 5) = bVar4;
      *puVar1 = *(undefined2 *)(param_1 + 0x78);
      puVar1[1] = *(undefined2 *)(param_1 + 0x7a);
      bVar4 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar4;
      *(byte *)(puVar1 + 2) = bVar4;
      return (uint)bVar4 * 0x1000000 + uVar8;
    }
  }
LAB_00daf340:
  uVar7 = *(ushort *)(param_1 + 0x78);
  iVar15 = (uint)*(byte *)(param_1 + 0x7d) * 0x20000;
  if (*(uint *)(param_1 + 0x14) <= (uint)uVar7) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar7 * 8);
    uVar5 = puVar3[1];
    iVar15 = iVar15 + (uint)*(byte *)((int)puVar3 + 5) * 0x400;
    *(undefined4 *)(param_1 + 0x80) = *puVar3;
    *(undefined4 *)(param_1 + 0x84) = uVar5;
    if (uVar7 < 0x7ffd) {
      uVar5 = puVar3[3];
      *(undefined4 *)(param_1 + 0x88) = puVar3[2];
      *(undefined4 *)(param_1 + 0x8c) = uVar5;
    }
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x7a);
  if (uVar8 < *(uint *)(param_1 + 0x14)) {
    uVar8 = iVar15 + (uVar8 & 0x3ff);
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar8 * 8);
    uVar5 = puVar3[1];
    uVar8 = iVar15 + (uint)*(byte *)((int)puVar3 + 5);
    *(undefined4 *)(param_1 + 0x90) = *puVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    if (*(ushort *)(param_1 + 0x7a) < 0x7ffd) {
      uVar5 = puVar3[3];
      *(undefined4 *)(param_1 + 0x98) = puVar3[2];
      *(undefined4 *)(param_1 + 0x9c) = uVar5;
    }
  }
  uVar14 = 0;
  do {
    uVar13 = uVar14 & 0x1ffff | uVar8;
    uVar12 = ((uVar13 >> 0xb | uVar13 << 0x15) - uVar13 >> 0x12 |
             ((uVar13 & 0xfffff800) + uVar13 * -0x800) * 8) % 0x3e9;
    uVar9 = *(uint *)(&DAT_010ce4f8 + uVar12 * 4);
    if (((uVar9 & 0xffffff) == uVar13) ||
       (uVar9 = *(uint *)(&DAT_010ce4fc + uVar12 * 4), (uVar9 & 0xffffff) == uVar13)) {
      uVar9 = (*(code *)(&PTR_FUN_010ce280)[uVar9 >> 0x18])();
      uVar9 = uVar9 & 0xffff;
      if (uVar9 != 0) break;
    }
    if (uVar14 == 0xfffff) goto FUN_00dac890;
    uVar14 = (uVar14 | uVar14 >> 10) ^ 0xffc00;
  } while( true );
  if (4 < uVar9) {
    return (uint)*(byte *)(*(int *)(param_1 + 0x10) + 4 + uVar9 * 8) * 0x1000000 + uVar9;
  }
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) {
        return 0xffff;
      }
      func_0x00d71770(param_1,0x18);
      pcVar6 = (code *)swi(3);
      iVar10 = (*pcVar6)();
      return iVar10;
    }
    iVar15 = *(int *)(param_1 + 0x78);
    uVar7 = *(ushort *)(param_1 + 0x174);
    while( true ) {
      uVar8 = (uint)uVar7;
      if (uVar8 == 0) {
        uVar8 = *(uint *)(param_1 + 0x14);
        if (uVar8 <= *(uint *)(param_1 + 0x118)) {
          func_0x00da6f00(param_1,iVar10,param_2,uVar11);
        }
        iVar10 = *(int *)(param_1 + 0x10);
        iVar17 = uVar8 - 1;
        *(int *)(param_1 + 0x14) = iVar17;
        *(int *)(iVar10 + iVar17 * 8) = iVar15;
        *(undefined2 *)(iVar10 + 4 + iVar17 * 8) = 0x1713;
        *(undefined2 *)(iVar10 + iVar17 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
        *(short *)(param_1 + 0x174) = (short)iVar17;
        return uVar8 + 0x12ffffff;
      }
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 8) == iVar15) break;
      uVar7 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar8 * 8 + 6);
    }
    return uVar8 + 0x13000000;
  }
  goto LAB_00daf340;
}



void __fastcall FUN_00db4970(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = func_0x00db5910(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x7a) = 0x45050013;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar3 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x4505000e;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  uVar2 = func_0x00daf2b0();
  puVar1 = *(undefined4 **)(param_1 + 100);
  uVar4 = func_0x00dbb8e0(param_1,uVar3);
  *puVar1 = uVar4;
  *(undefined2 *)(param_1 + 0x78) = uVar2;
  *(undefined2 *)(param_1 + 0x7c) = 0x2a13;
  *(short *)(param_1 + 0x7a) = (short)uVar3;
  uVar3 = func_0x00daf2b0();
  *(undefined4 *)(*(int *)(param_1 + 100) + 4) = uVar3;
  *(undefined4 *)(param_2 + 4) = 2;
  return;
}



void __fastcall FUN_00db4a00(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = func_0x00db5910(param_1,param_2,0);
  uVar2 = func_0x00da6cb0();
  *(undefined2 *)(param_1 + 0x7a) = uVar2;
  *(undefined2 *)(param_1 + 0x7c) = 0x2905;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x00daf2b0();
  *(undefined4 *)(param_1 + 0x7a) = 0x55050002;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar3 = func_0x00daf2b0();
  uVar4 = *(uint *)(*(int *)(param_1 + 100) + 4);
  if ((uVar4 >> 0x18 & 0x1f) - 0xf < 5) {
    *(undefined4 *)(param_1 + 0x7a) = 0x5b0e01d3;
    *(short *)(param_1 + 0x78) = (short)uVar4;
    uVar4 = func_0x00daf2b0();
  }
  *(undefined4 *)(param_1 + 0x7a) = 0x3f050001;
  *(short *)(param_1 + 0x78) = (short)uVar4;
  uVar5 = func_0x00daf2b0();
  func_0x00da6e30(param_1,0x1a,uVar3,uVar5);
  return;
}



// WARNING: Possible PIC construction at 0x00db4ac9: Changing call to branch
// WARNING: Possible PIC construction at 0x00db4af6: Changing call to branch
// WARNING: Possible PIC construction at 0x00db4b5c: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00db4afb)
// WARNING: Removing unreachable block (ram,0x00db4ace)
// WARNING: Removing unreachable block (ram,0x00db4b61)
// WARNING: Removing unreachable block (ram,0x00daf2b0)
// WARNING: Removing unreachable block (ram,0x00daf2c5)
// WARNING: Removing unreachable block (ram,0x00daf2cd)
// WARNING: Removing unreachable block (ram,0x00daf2e3)
// WARNING: Removing unreachable block (ram,0x00daf2f1)
// WARNING: Removing unreachable block (ram,0x00daf303)
// WARNING: Removing unreachable block (ram,0x00daf311)
// WARNING: Removing unreachable block (ram,0x00daf31f)
// WARNING: Removing unreachable block (ram,0x00daf338)
// WARNING: Removing unreachable block (ram,0x00daf340)
// WARNING: Removing unreachable block (ram,0x00daf356)
// WARNING: Removing unreachable block (ram,0x00daf380)
// WARNING: Removing unreachable block (ram,0x00daf392)
// WARNING: Removing unreachable block (ram,0x00daf3d9)
// WARNING: Removing unreachable block (ram,0x00daf39e)
// WARNING: Removing unreachable block (ram,0x00daf3c5)
// WARNING: Removing unreachable block (ram,0x00daf3e1)
// WARNING: Removing unreachable block (ram,0x00daf3e3)
// WARNING: Removing unreachable block (ram,0x00daf427)
// WARNING: Removing unreachable block (ram,0x00daf43a)
// WARNING: Removing unreachable block (ram,0x00daf469)
// WARNING: Removing unreachable block (ram,0x00daf4a4)
// WARNING: Removing unreachable block (ram,0x00daf46e)
// WARNING: Removing unreachable block (ram,0x00daf477)
// WARNING: Removing unreachable block (ram,0x00daf495)
// WARNING: Removing unreachable block (ram,0x00daf4b6)
// WARNING: Removing unreachable block (ram,0x00daf49a)
// WARNING: Removing unreachable block (ram,0x00daf47c)
// WARNING: Removing unreachable block (ram,0x00daf44f)
// WARNING: Removing unreachable block (ram,0x00daf48a)
// WARNING: Removing unreachable block (ram,0x00daf457)
// WARNING: Removing unreachable block (ram,0x00daf32f)
// WARNING: Removing unreachable block (ram,0x00daf308)
// WARNING: Removing unreachable block (ram,0x00da6bb0)
// WARNING: Removing unreachable block (ram,0x00da6bc0)
// WARNING: Removing unreachable block (ram,0x00da6bc5)
// WARNING: Removing unreachable block (ram,0x00daf2da)
// WARNING: Removing unreachable block (ram,0x00dac890)
// WARNING: Removing unreachable block (ram,0x00dac8b2)
// WARNING: Removing unreachable block (ram,0x00dac8b4)
// WARNING: Removing unreachable block (ram,0x00dac8b7)
// WARNING: Removing unreachable block (ram,0x00dac8c3)
// WARNING: Removing unreachable block (ram,0x00dac8c6)
// WARNING: Removing unreachable block (ram,0x00dac927)
// WARNING: Removing unreachable block (ram,0x00dac8ce)
// WARNING: Removing unreachable block (ram,0x00dac8d6)
// WARNING: Removing unreachable block (ram,0x00dac8e1)
// WARNING: Removing unreachable block (ram,0x00dac8e8)

int __fastcall FUN_00db4aa0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  func_0x00db5910(param_1,param_2,0);
  uVar1 = *(ushort *)(param_1 + 0x174);
  while( true ) {
    uVar3 = (uint)uVar1;
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x14);
      if (uVar3 <= *(uint *)(param_1 + 0x118)) {
        func_0x00da6f00(param_1);
      }
      iVar2 = *(int *)(param_1 + 0x10);
      iVar4 = uVar3 - 1;
      *(int *)(param_1 + 0x14) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 0x18;
      *(undefined2 *)(iVar2 + 4 + iVar4 * 8) = 0x1713;
      *(undefined2 *)(iVar2 + iVar4 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
      *(short *)(param_1 + 0x174) = (short)iVar4;
      return uVar3 + 0x12ffffff;
    }
    if (*(int *)(*(int *)(param_1 + 0x10) + uVar3 * 8) == 0x18) break;
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar3 * 8 + 6);
  }
  return uVar3 + 0x13000000;
}



// WARNING: Possible PIC construction at 0x00db4bba: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00db4bbf)

int __fastcall FUN_00db4b80(int param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_EBX;
  uint uVar13;
  int iVar14;
  undefined4 unaff_EBP;
  undefined2 *puVar15;
  int iVar16;
  int in_stack_ffffffd4;
  undefined2 *in_stack_ffffffd8;
  undefined2 *puVar17;
  undefined4 uVar18;
  
  puVar15 = (undefined2 *)(param_1 + 0x7a);
  uVar10 = (undefined2)**(uint **)(param_1 + 100);
  if ((**(uint **)(param_1 + 100) >> 0x18 & 0x1f) - 0xf < 5) {
    *(undefined2 *)(param_1 + 0x78) = uVar10;
    *(undefined2 *)(param_1 + 0x7c) = 0x5b0e;
    *puVar15 = 0x1d3;
    uVar18 = 0xdb4bbf;
    in_stack_ffffffd4 = param_1;
  }
  else {
    *(undefined2 *)(param_1 + 0x78) = uVar10;
    *(undefined2 *)(param_1 + 0x7c) = 0x3f05;
    *puVar15 = 1;
    uVar18 = func_0x00daf2b0();
    puVar5 = *(undefined4 **)(param_1 + 100);
    puVar17 = (undefined2 *)&DAT_0000001c;
    unaff_EBP = 0xdb4bef;
    puVar15 = in_stack_ffffffd8;
    unaff_EBX = param_1;
    uVar9 = func_0x00da6e30(param_1,0x1c,uVar18);
    *puVar5 = uVar9;
    *(undefined2 *)(param_1 + 0x78) = **(undefined2 **)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x7c) = 0x1200;
    *puVar17 = 0;
  }
  uVar7 = *(uint *)(param_1 + 0x68);
  if ((uVar7 & 0xfff0000) != 0x3ff0000) {
    if (((uVar7 & 0x10000) == 0) && (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0)) {
FUN_00dac890:
      iVar14 = *(int *)(param_1 + 0x78);
      uVar7 = (uint)*(ushort *)(param_1 + 0x78);
      uVar13 = (uint)*(byte *)(param_1 + 0x7d);
      if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x7a);
        if (*(ushort *)(param_1 + 0x7a) <= uVar7) {
          uVar8 = uVar7;
        }
        uVar7 = (uint)*(ushort *)(param_1 + 0x146 + uVar13 * 2);
        if (uVar8 < uVar7) {
          do {
            iVar1 = *(int *)(param_1 + 0x10) + uVar7 * 8;
            if (*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 8) == iVar14) {
              return uVar7 + (uint)*(byte *)(iVar1 + 4) * 0x1000000;
            }
            uVar7 = (uint)*(ushort *)(iVar1 + 6);
          } while (uVar8 < uVar7);
        }
      }
      uVar7 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar7) {
        func_0x00da6c20(in_stack_ffffffd4,puVar15,unaff_EBP,unaff_EBX);
      }
      *(uint *)(param_1 + 8) = uVar7 + 1;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + uVar7 * 8);
      *(undefined2 *)((int)piVar2 + 6) = *(undefined2 *)(param_1 + 0x146 + uVar13 * 2);
      *piVar2 = iVar14;
      *(short *)(param_1 + 0x146 + uVar13 * 2) = (short)uVar7;
      *(undefined1 *)((int)piVar2 + 5) = *(undefined1 *)(param_1 + 0x7d);
      bVar3 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
      *(byte *)(piVar2 + 1) = bVar3;
      return (uint)bVar3 * 0x1000000 + uVar7;
    }
    if ((((uVar7 & 0xb0000) != 0xb0000) &&
        ((((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x40 &&
         (*(byte *)(param_1 + 0x7d) != 0x47)))) ||
       (((uVar7 & 0x110000) != 0x110000 &&
        (((&DAT_010cdcc0)[*(byte *)(param_1 + 0x7d)] & 0x60) == 0x60)))) {
      uVar7 = *(uint *)(param_1 + 8);
      if (*(uint *)(param_1 + 0x114) <= uVar7) {
        func_0x00da6c20(in_stack_ffffffd4,puVar15,unaff_EBX,uVar18);
      }
      bVar3 = *(byte *)(param_1 + 0x7d);
      *(uint *)(param_1 + 8) = uVar7 + 1;
      puVar15 = (undefined2 *)(*(int *)(param_1 + 0x10) + uVar7 * 8);
      iVar14 = param_1 + (uint)bVar3 * 2;
      puVar15[3] = *(undefined2 *)(iVar14 + 0x146);
      *(short *)(iVar14 + 0x146) = (short)uVar7;
      *(byte *)((int)puVar15 + 5) = bVar3;
      *puVar15 = *(undefined2 *)(param_1 + 0x78);
      puVar15[1] = *(undefined2 *)(param_1 + 0x7a);
      bVar3 = *(byte *)(param_1 + 0x7c);
      *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | bVar3;
      *(byte *)(puVar15 + 2) = bVar3;
      return (uint)bVar3 * 0x1000000 + uVar7;
    }
  }
LAB_00daf340:
  uVar4 = *(ushort *)(param_1 + 0x78);
  iVar14 = (uint)*(byte *)(param_1 + 0x7d) * 0x20000;
  if (*(uint *)(param_1 + 0x14) <= (uint)uVar4) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar4 * 8);
    uVar18 = puVar5[1];
    iVar14 = iVar14 + (uint)*(byte *)((int)puVar5 + 5) * 0x400;
    *(undefined4 *)(param_1 + 0x80) = *puVar5;
    *(undefined4 *)(param_1 + 0x84) = uVar18;
    if (uVar4 < 0x7ffd) {
      uVar18 = puVar5[3];
      *(undefined4 *)(param_1 + 0x88) = puVar5[2];
      *(undefined4 *)(param_1 + 0x8c) = uVar18;
    }
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x7a);
  if (uVar7 < *(uint *)(param_1 + 0x14)) {
    uVar7 = iVar14 + (uVar7 & 0x3ff);
  }
  else {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar7 * 8);
    uVar18 = puVar5[1];
    uVar7 = iVar14 + (uint)*(byte *)((int)puVar5 + 5);
    *(undefined4 *)(param_1 + 0x90) = *puVar5;
    *(undefined4 *)(param_1 + 0x94) = uVar18;
    if (*(ushort *)(param_1 + 0x7a) < 0x7ffd) {
      uVar18 = puVar5[3];
      *(undefined4 *)(param_1 + 0x98) = puVar5[2];
      *(undefined4 *)(param_1 + 0x9c) = uVar18;
    }
  }
  uVar13 = 0;
  do {
    uVar12 = uVar13 & 0x1ffff | uVar7;
    uVar11 = ((uVar12 >> 0xb | uVar12 << 0x15) - uVar12 >> 0x12 |
             ((uVar12 & 0xfffff800) + uVar12 * -0x800) * 8) % 0x3e9;
    uVar8 = *(uint *)(&DAT_010ce4f8 + uVar11 * 4);
    if (((uVar8 & 0xffffff) == uVar12) ||
       (uVar8 = *(uint *)(&DAT_010ce4fc + uVar11 * 4), (uVar8 & 0xffffff) == uVar12)) {
      uVar8 = (*(code *)(&PTR_FUN_010ce280)[uVar8 >> 0x18])();
      uVar8 = uVar8 & 0xffff;
      if (uVar8 != 0) break;
    }
    if (uVar13 == 0xfffff) goto FUN_00dac890;
    uVar13 = (uVar13 | uVar13 >> 10) ^ 0xffc00;
  } while( true );
  if (4 < uVar8) {
    return (uint)*(byte *)(*(int *)(param_1 + 0x10) + 4 + uVar8 * 8) * 0x1000000 + uVar8;
  }
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) {
        return 0xffff;
      }
      func_0x00d71770(param_1,0x18);
      pcVar6 = (code *)swi(3);
      iVar14 = (*pcVar6)();
      return iVar14;
    }
    iVar14 = *(int *)(param_1 + 0x78);
    uVar4 = *(ushort *)(param_1 + 0x174);
    while( true ) {
      uVar7 = (uint)uVar4;
      if (uVar7 == 0) {
        uVar7 = *(uint *)(param_1 + 0x14);
        if (uVar7 <= *(uint *)(param_1 + 0x118)) {
          func_0x00da6f00(param_1,in_stack_ffffffd4,puVar15,unaff_EBX);
        }
        iVar1 = *(int *)(param_1 + 0x10);
        iVar16 = uVar7 - 1;
        *(int *)(param_1 + 0x14) = iVar16;
        *(int *)(iVar1 + iVar16 * 8) = iVar14;
        *(undefined2 *)(iVar1 + 4 + iVar16 * 8) = 0x1713;
        *(undefined2 *)(iVar1 + iVar16 * 8 + 6) = *(undefined2 *)(param_1 + 0x174);
        *(short *)(param_1 + 0x174) = (short)iVar16;
        return uVar7 + 0x12ffffff;
      }
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 8) == iVar14) break;
      uVar4 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar7 * 8 + 6);
    }
    return uVar7 + 0x13000000;
  }
  goto LAB_00daf340;
}



void __fastcall FUN_00db4c20(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*param_2 + 4) == -5) {
    *(undefined4 *)(param_1 + 0x7a) = 0x3f050002;
    *(undefined2 *)(param_1 + 0x78) = 0x7fff;
    uVar3 = func_0x00daf2b0();
    uVar2 = func_0x00da6e30(param_1,0x1d,uVar3,**(undefined4 **)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x7a) = 0x12000000;
    *(undefined2 *)(param_1 + 0x78) = uVar2;
    func_0x00daf2b0();
    uVar4 = func_0x00db5dd0();
    puVar1 = *(undefined4 **)(param_1 + 100);
    uVar3 = func_0x00d96c50(param_1,uVar3,0,uVar4);
    *puVar1 = uVar3;
  }
  return;
}



void __fastcall FUN_00db4cd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double dStack_40;
  uint uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_c;
  
  uStack_20 = **(uint **)(param_1 + 100);
  uStack_18 = (*(uint **)(param_1 + 100))[1];
  param_2[1] = 0;
  if (((uStack_20 & 0x1f000000) == 0xb000000) && (uStack_18 != 0)) {
    if (*(int *)(*(int *)(param_1 + 100) + 8) == 0) {
      *(undefined4 *)(param_1 + 0x7a) = 0x49137fff;
      *(undefined2 *)(param_1 + 0x78) = (undefined2)uStack_20;
      uVar2 = func_0x00daf2b0();
      uVar1 = *(undefined4 *)*param_2;
      uVar3 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x78) = uVar2;
      *(undefined2 *)(param_1 + 0x7c) = 0x2913;
      *(undefined2 *)(param_1 + 0x7a) = uVar3;
      uStack_1c = func_0x00daf2b0();
      uStack_44 = 0xfffffff4;
      uStack_48 = uVar1;
      iVar4 = FUN_00d6efb0();
      uStack_c = 0;
      dStack_40 = (double)(iVar4 + 1);
      func_0x00d93a10(param_1,&uStack_48);
      return;
    }
    FUN_00db1fe0();
  }
  return;
}



void __fastcall FUN_00db4db0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = **(uint **)(param_1 + 100);
  if ((uVar1 & 0x1f000000) == 0xb000000) {
    if (((*(uint **)(param_1 + 100))[1] & 0x1f000000) == 0) {
      uVar6 = func_0x00da7160(param_1,4);
    }
    else {
      uVar6 = func_0x00da6dd0();
    }
    if ((*(int *)(*(int *)(param_1 + 100) + 4) == 0) ||
       ((*(uint *)(*(int *)(param_1 + 100) + 8) & 0x1f000000) == 0)) {
      uVar7 = func_0x00da6cb0();
    }
    else {
      uVar7 = func_0x00db1310();
    }
    iVar2 = *(int *)(param_1 + 100);
    if (((*(int *)(iVar2 + 4) == 0) || (*(int *)(iVar2 + 8) == 0)) ||
       ((*(uint *)(iVar2 + 0xc) & 0x1f000000) == 0)) {
      *(undefined4 *)(param_1 + 0x7a) = 0x49137fff;
      *(short *)(param_1 + 0x78) = (short)uVar1;
      uVar8 = func_0x00daf2b0();
    }
    else {
      uVar8 = func_0x00db1310();
    }
    uVar4 = func_0x00da72c0(param_1,0x19,param_1 + -0x138);
    *(undefined4 *)(param_1 + 0x7a) = 0x55050000;
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    uVar9 = func_0x00daf2b0();
    uVar4 = func_0x00da6e30(param_1,0x17,uVar9,uVar1,uVar6,uVar7,uVar8);
    uVar5 = func_0x00da72c0(param_1,0x19,0);
    *(undefined2 *)(param_1 + 0x7a) = uVar5;
    *(undefined2 *)(param_1 + 0x7c) = 0x985;
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    func_0x00daf2b0();
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    puVar3 = *(undefined4 **)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x7c) = 0x5784;
    *(short *)(param_1 + 0x7a) = (short)uVar9;
    uVar6 = func_0x00daf2b0();
    *puVar3 = uVar6;
  }
  return;
}



void __fastcall FUN_00db4ef0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = func_0x00db1310();
  uVar3 = func_0x00db1310();
  puVar1 = *(undefined4 **)(param_1 + 100);
  uVar2 = func_0x00da6e30(param_1,0x1f,uVar2,uVar3);
  *puVar1 = uVar2;
  return;
}



void __fastcall FUN_00db4f30(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = **(uint **)(param_1 + 100);
  if ((uVar1 & 0x1f000000) == 0xb000000) {
    *(undefined4 *)(param_2 + 4) = 0;
    func_0x00da6e30(param_1,0x22,uVar1);
    *(undefined1 *)(param_1 + 0x75) = 1;
  }
  return;
}



void __fastcall FUN_00db4f60(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_4;
  
  uVar5 = func_0x00db5760(param_1,&uStack_4,*(undefined4 *)(param_2 + 8));
  uVar6 = func_0x00da6cb0();
  uVar7 = func_0x00da6cb0();
  puVar9 = *(undefined4 **)(param_1 + 100);
  uVar11 = (uint)(*(int *)(param_2 + 8) == 0);
  if (puVar9[uVar11] != 0) {
    uStack_4 = uVar6 & 0xffff;
    do {
      uVar6 = uStack_4;
      uVar2 = func_0x00da6dd0();
      *(undefined2 *)(param_1 + 0x7c) = 0x4005;
      uVar12 = (uint)uVar2;
      *(ushort *)(param_1 + 0x78) = uVar2;
      *(short *)(param_1 + 0x7a) = (short)uVar6;
      uVar8 = func_0x00daf2b0();
      *(undefined4 *)(param_1 + 0x7a) = 0x45130000;
      *(ushort *)(param_1 + 0x78) = uVar2;
      uVar6 = func_0x00daf2b0();
      if (((ushort)uVar6 < 0x8000) &&
         (iVar1 = *(int *)(param_1 + 0x10), *(int *)(iVar1 + (uVar6 & 0xffff) * 8) == 1)) {
        if ((*(char *)(iVar1 + 5 + uVar12 * 8) == ']') && (*(short *)(iVar1 + 2 + uVar12 * 8) == 2))
        {
          uVar6 = (uint)*(ushort *)(iVar1 + uVar12 * 8);
        }
        else {
          *(undefined4 *)(param_1 + 0x7a) = 0x46100001;
          *(short *)(param_1 + 0x78) = (short)uVar8;
          uVar6 = func_0x00daf2b0();
        }
        uVar3 = func_0x00da6e30(param_1,0x38,uVar6,uVar5);
        uVar6 = *(uint *)(*(int *)(*(int *)(param_1 + 0x54) + 0x10) + -4);
        if (((uVar6 & 3) != 0) || ((*(uint *)(uVar6 - 4) & 0xff000000) != 0x1000000)) {
          uVar4 = func_0x00da6cb0();
          uVar10 = 0x993;
          *(undefined2 *)(param_1 + 0x78) = uVar3;
          *(undefined2 *)(param_1 + 0x7a) = uVar4;
LAB_00db50d1:
          *(undefined2 *)(param_1 + 0x7c) = uVar10;
          func_0x00daf2b0();
        }
      }
      else {
        uVar3 = func_0x00da6e30(param_1,0x39,uVar8,uVar7,uVar6,uVar5);
        uVar12 = *(uint *)(*(int *)(*(int *)(param_1 + 0x54) + 0x10) + -4);
        if (((uVar12 & 3) != 0) || ((*(uint *)(uVar12 - 4) & 0xff000000) != 0x1000000)) {
          uVar10 = 0x893;
          *(undefined2 *)(param_1 + 0x78) = uVar3;
          *(ushort *)(param_1 + 0x7a) = (ushort)uVar6;
          goto LAB_00db50d1;
        }
      }
      puVar9 = *(undefined4 **)(param_1 + 100);
      uVar11 = uVar11 + 1;
    } while (puVar9[uVar11] != 0);
  }
  *puVar9 = 0x2007ffd;
  return;
}



void __fastcall FUN_00db5110(int param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iStack_4;
  
  iStack_4 = param_1;
  uVar4 = func_0x00db5760(param_1,&iStack_4,*(undefined4 *)(param_2 + 8));
  uVar2 = func_0x00da6e30(param_1,0x3a,uVar4);
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x54) + 0x10) + -4);
  if (((uVar1 & 3) != 0) || ((*(uint *)(uVar1 - 4) & 0xff000000) != 0x1000000)) {
    uVar3 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7c) = 0x893;
    *(undefined2 *)(param_1 + 0x78) = uVar2;
    *(undefined2 *)(param_1 + 0x7a) = uVar3;
    func_0x00daf2b0();
  }
  **(undefined4 **)(param_1 + 100) = 0x2007ffd;
  return;
}



void __fastcall FUN_00db5190(int param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  param_2 = (int *)*param_2;
  uVar4 = **(uint **)(param_1 + 100);
  uVar2 = uVar4 & 0x1f000000;
  if (uVar2 == 0xb000000) {
    iVar6 = *(int *)(*param_2 + 0x10);
    uVar1 = 5;
  }
  else {
    if (uVar2 != 0xc000000) {
      if ((uint)param_2[1] < 0xfffffff3) {
        uVar4 = 0xd;
      }
      else {
        uVar4 = ~param_2[1];
      }
      iVar6 = *(int *)(param_1 + -0x40 + uVar4 * 4);
      if (iVar6 != 0) {
        uVar3 = func_0x00da70c0(param_1,iVar6,0xb);
        **(undefined4 **)(param_1 + 100) = uVar3;
        return;
      }
      **(undefined4 **)(param_1 + 100) = 0x7fff;
      return;
    }
    iVar6 = *(int *)(*param_2 + 0x10);
    uVar1 = 0xb;
  }
  *(undefined2 *)(param_1 + 0x7c) = 0x450b;
  *(short *)(param_1 + 0x78) = (short)uVar4;
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  uVar3 = func_0x00daf2b0();
  uVar1 = func_0x00da7160(param_1,0xb);
  *(short *)(param_1 + 0x78) = (short)uVar3;
  *(undefined2 *)(param_1 + 0x7a) = uVar1;
  uVar1 = 0x88b;
  if (iVar6 != 0) {
    uVar1 = 0x98b;
  }
  *(undefined2 *)(param_1 + 0x7c) = uVar1;
  func_0x00daf2b0();
  uVar5 = 0x7fff;
  if (iVar6 != 0) {
    uVar5 = uVar3;
  }
  **(undefined4 **)(param_1 + 100) = uVar5;
  return;
}



undefined4 FUN_00db58f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00d96bc0(param_3,0,1);
  return 0;
}



undefined4 FUN_00db5ba0(undefined4 param_1,undefined4 param_2,int param_3)

{
  func_0x00d93940(param_3,1,*(int *)(param_3 + 0x6c) + -2);
  return 0;
}



void __fastcall FUN_00db5d40(int param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  uStack_c = 0;
  iVar1 = *(int *)(param_1 + 8);
  iStack_18 = param_1 + 5;
  iStack_14 = iVar1 + 0x80;
  iStack_24 = *(int *)(iVar1 + 0x88);
  uStack_20 = *(undefined4 *)(iVar1 + 0x84);
  uStack_4 = 100;
  iStack_1c = iStack_24;
  iStack_10 = iStack_24;
  iVar1 = func_0x00db6480(iStack_24,&iStack_24,param_2);
  FUN_00d6e6c0(param_1,iStack_1c,iVar1 - iStack_1c);
  return;
}



void __fastcall FUN_00db5db0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = 100;
  func_0x00db5f10(*(undefined4 *)(param_1 + 0x14),param_1,param_2);
  return;
}



undefined4 * __fastcall FUN_00db5e80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  param_1[8] = 100;
  uVar1 = func_0x00db6480(*param_1,param_1,param_2);
  *param_1 = uVar1;
  return param_1;
}



void FUN_00db5ea0(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  iStack_1c = param_3 + 0x14;
  uStack_14 = 0;
  uStack_c = 0;
  iStack_18 = param_1 + 3;
  iStack_24 = *(int *)(param_3 + 0x10) + iStack_1c;
  uStack_4 = 100;
  iStack_20 = iStack_24;
  iStack_10 = iStack_1c;
  iVar2 = func_0x00db5f10(iStack_1c,&iStack_24,param_2);
  if (iVar2 == iStack_24) {
    return;
  }
  func_0x00d67660(param_1,0xfa8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00db6fa0(int param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined2 uVar12;
  uint *puVar13;
  uint uStack_28;
  undefined1 auStack_14 [4];
  uint auStack_10 [4];
  
  uStack_28 = 0;
  piVar2 = *(int **)(param_1 + -0xbc);
  do {
    iVar7 = *piVar2;
    uVar8 = *(uint *)(*(int *)(param_1 + 100) + uStack_28 * 4);
    puVar13 = (uint *)(iVar7 + 0xe0);
    if (uVar8 == 0) {
      func_0x00d71770(param_1,0xb);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = uVar8 & 0x1f000000;
    uVar12 = (undefined2)uVar8;
    if (uVar10 == 0xa000000) {
      iVar7 = func_0x00db8700(param_1,uVar8,*param_2 + uStack_28 * 8);
      uVar1 = *(ushort *)(iVar7 + 6);
      puVar13 = (uint *)((uint)uVar1 * 0x10 + *piVar2);
      uVar8 = *puVar13;
      while ((uVar8 & 0xf0000000) == 0x80000000) {
        puVar13 = (uint *)((uVar8 & 0xffff) * 0x10 + *piVar2);
        uVar8 = *puVar13;
      }
      iVar7 = func_0x00dba300(piVar2,puVar13);
      uVar5 = (ushort)iVar7;
      if (*puVar13 >> 0x1c == 2) {
        *(undefined2 *)(param_1 + 0x78) = uVar12;
        *(ushort *)(param_1 + 0x7c) = uVar5 | 0x4500;
        *(undefined2 *)(param_1 + 0x7a) = 0x15;
        uVar8 = func_0x00daf2b0();
        uVar10 = *puVar13;
        if ((uVar10 & 0xf0800000) == 0x20800000) {
          do {
            puVar13 = (uint *)((uVar10 & 0xffff) * 0x10 + *piVar2);
            uVar10 = *puVar13;
          } while ((uVar10 & 0xf0000000) == 0x80000000);
          iVar7 = func_0x00dba300(piVar2,puVar13);
        }
LAB_00db717f:
        uVar10 = *puVar13;
        if ((uVar10 & 0xf0000000) == 0x50000000) {
          puVar13 = (uint *)(*piVar2 + (uVar10 & 0xffff) * 0x10);
          uVar10 = *puVar13;
        }
        if (uVar10 < 0x10000000) {
          if (iVar7 == 10) {
            uVar8 = 0;
          }
          else {
            if ((iVar7 == 0x15) || (iVar7 == 0x16)) {
              *(undefined1 *)(param_1 + 0x134) = 1;
            }
            *(short *)(param_1 + 0x78) = (short)uVar8;
            *(ushort *)(param_1 + 0x7c) = (ushort)iVar7 | 0x4600;
            *(undefined2 *)(param_1 + 0x7a) = 0;
            uVar8 = func_0x00daf2b0();
          }
        }
      }
      else if ((iVar7 == 0x15) || (iVar7 == 0x16)) {
        *(undefined2 *)(param_1 + 0x78) = uVar12;
        *(ushort *)(param_1 + 0x7c) = uVar5 | 0x4500;
        *(undefined2 *)(param_1 + 0x7a) = 0x17;
        uVar8 = func_0x00daf2b0();
        *(undefined1 *)(param_1 + 0x134) = 1;
      }
      else if ((iVar7 == 0x13) || (iVar7 == 0x14)) {
        *(undefined2 *)(param_1 + 0x78) = uVar12;
        *(undefined2 *)(param_1 + 0x7a) = 0x16;
        *(ushort *)(param_1 + 0x7c) = uVar5 | 0x4500;
        uVar8 = func_0x00daf2b0();
        if ((*puVar13 & 0xf0000000) == 0x50000000) {
          puVar13 = (uint *)((*puVar13 & 0xffff) * 0x10 + *piVar2);
        }
      }
      else {
        if (*puVar13 >> 0x1c != 6) {
          uVar6 = func_0x00da6cb0();
          *(undefined2 *)(param_1 + 0x7c) = 0x2905;
          *(undefined2 *)(param_1 + 0x78) = uVar12;
          *(undefined2 *)(param_1 + 0x7a) = uVar6;
          uVar8 = func_0x00daf2b0();
          goto LAB_00db717f;
        }
        if (uStack_28 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)(auStack_10[0] - *piVar2) >> 4;
        }
        *(undefined4 *)(param_1 + 0x7a) = 0x45050015;
        *(undefined2 *)(param_1 + 0x78) = uVar12;
        uVar8 = func_0x00daf2b0();
        iVar9 = func_0x00d7f140(piVar2,(uVar1 | 0x20000) + 0x20000000,4);
        puVar13 = (uint *)(*piVar2 + iVar9 * 0x10);
        if (uStack_28 != 0) {
          auStack_10[0] = iVar7 * 0x10 + *piVar2;
        }
      }
    }
    else if (uVar10 == 0) {
      uVar8 = func_0x00da72c0(param_1,0x19,0);
LAB_00db733e:
      puVar13 = (uint *)(*piVar2 + 0x110);
    }
    else if ((uVar8 >> 0x18 & 0x1f) - 0xf < 5) {
      puVar13 = (uint *)(iVar7 + 0x90);
    }
    else if (uVar10 == 0x4000000) {
      iVar9 = func_0x00db8700(param_1,*(undefined4 *)(*(int *)(param_1 + 100) + uStack_28 * -4 + 4),
                              *param_2 + uStack_28 * -8 + 8);
      iVar7 = *piVar2;
      puVar13 = (uint *)((uint)*(ushort *)(iVar9 + 6) * 0x10 + iVar7);
      uVar10 = *puVar13;
      while ((uVar10 & 0xf0000000) == 0x80000000) {
        puVar13 = (uint *)((uVar10 & 0xffff) * 0x10 + iVar7);
        uVar10 = *puVar13;
      }
      if (uVar10 >> 0x1c == 5) {
        uVar3 = *(undefined4 *)(*param_2 + uStack_28 * 8);
        puVar13 = (uint *)func_0x00d7ed20(piVar2,puVar13,uVar3,auStack_14,0);
        if ((puVar13 == (uint *)0x0) || ((*puVar13 & 0xf0000000) != 0xb0000000)) goto LAB_00db733e;
        uVar6 = func_0x00da70c0(param_1,uVar3,4);
        *(undefined2 *)(param_1 + 0x7c) = 0x884;
        *(undefined2 *)(param_1 + 0x78) = uVar12;
        *(undefined2 *)(param_1 + 0x7a) = uVar6;
        func_0x00daf2b0();
        puVar13 = (uint *)((uint)(ushort)*puVar13 * 0x10 + *piVar2);
        uVar8 = func_0x00da6cb0();
      }
      else {
        if (uVar10 >> 0x1c != 2) goto LAB_00db749b;
        uVar6 = func_0x00da6cb0();
        *(undefined2 *)(param_1 + 0x7c) = 0x2905;
        *(undefined2 *)(param_1 + 0x78) = uVar12;
        *(undefined2 *)(param_1 + 0x7a) = uVar6;
        uVar8 = func_0x00daf2b0();
      }
    }
    else if (uVar10 != 0xe000000) {
      uVar8 = 0;
LAB_00db749b:
      puVar13 = (uint *)(iVar7 + 0x110);
    }
    auStack_10[uStack_28] = (uint)puVar13;
    auStack_10[uStack_28 + 2] = uVar8;
    uStack_28 = uStack_28 + 1;
    if (1 < uStack_28) {
      iVar7 = param_2[2];
      if (((((iVar7 != 5) && (iVar7 != 8)) &&
           ((iVar9 = func_0x00db8f80(param_1,auStack_10 + 2,auStack_10,iVar7), iVar9 != 0 ||
            (iVar9 = func_0x00db9400(param_1,auStack_10 + 2,auStack_10,iVar7), iVar9 != 0)))) ||
          (iVar9 = func_0x00db9240(param_1,auStack_10 + 2,auStack_10,piVar2,param_2), iVar9 != 0))
         && ((((**(int **)(param_1 + 100) = iVar9, *(int *)(param_1 + 0x130) == 2 &&
               (iVar7 = *(int *)(*(int *)(param_1 + 0x54) + 0x10),
               ((byte)*(undefined4 *)(iVar7 + -4) & 7) == 2)) && (-1 < *(char *)(param_1 + 0x76)))
             && (pbVar11 = (byte *)(*(int *)(iVar7 + -0xc) + -4), *pbVar11 < 0xc)))) {
        *(byte **)(param_1 + -0x128) = pbVar11;
        *(undefined4 *)(param_1 + -0x124) = 0;
        *(undefined4 *)(param_1 + 0x130) = 1;
      }
      return;
    }
  } while( true );
}



void __fastcall FUN_00db74b0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  piVar1 = *(int **)(param_1 + -0xbc);
  iVar6 = func_0x00db8700(param_1,**(undefined4 **)(param_1 + 100),*param_2);
  iVar10 = 9;
  uVar9 = (uint)*(ushort *)(iVar6 + 6);
  if (uVar9 == 0x16) {
    uVar9 = *(uint *)(iVar6 + 8);
    *(short *)(param_1 + 0x78) = (short)**(undefined4 **)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x7a) = 0x45130016;
    uVar4 = func_0x00daf2b0();
    uVar5 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x7a) = uVar5;
    *(undefined2 *)(param_1 + 0x7c) = 0x893;
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    func_0x00daf2b0();
    iVar10 = 0x13;
  }
  else {
