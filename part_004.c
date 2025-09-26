

void FUN_004865e0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 uint *param_7,double *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  double dStack_354;
  char cStack_347;
  undefined1 auStack_344 [4];
  int *piStack_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  undefined4 uStack_330;
  int aiStack_32c [198];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb0aa7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_334 = param_4;
  uStack_330 = param_5;
  iStack_33c = param_2;
  iStack_338 = param_3;
  uStack_8 = 0;
  piStack_340 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_340 + 4);
  uStack_14 = uVar4;
  _guard_check_icall(uVar4);
  (*pcVar1)();
  uVar5 = func_0x00489b60(aiStack_32c,0x300,&iStack_33c,&iStack_334,auStack_344);
  uStack_8 = 0xffffffff;
  uVar7 = uVar5;
  if (piStack_340 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_340 + 8);
    _guard_check_icall(uVar4);
    puVar6 = (undefined4 *)(*pcVar1)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar6;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar7 = uVar5 & 0xffff;
  }
  if ((char)uVar7 == '\0') {
    dStack_354 = 0.0;
LAB_00486773:
    *param_7 = 2;
  }
  else {
    piVar8 = _errno();
    iVar2 = *piVar8;
    *piVar8 = 0;
    dStack_354 = strtod((char *)aiStack_32c,(char **)&piStack_340);
    iVar3 = *piVar8;
    *piVar8 = iVar2;
    if (((piStack_340 == aiStack_32c) || (iVar3 != 0)) ||
       (cStack_347 = (char)(uVar5 >> 8), cStack_347 != '\0')) goto LAB_00486773;
  }
  if ((char)iStack_338 == '\0') {
    func_0x0048c000();
  }
  if ((char)uStack_330 == '\0') {
    func_0x0048c000();
  }
  if (iStack_33c == 0) {
    if (iStack_334 != 0) goto LAB_004867c1;
  }
  else if (iStack_334 == 0) goto LAB_004867c1;
  *param_7 = *param_7 | 1;
LAB_004867c1:
  *param_8 = dStack_354;
  *param_1 = iStack_33c;
  param_1[1] = iStack_338;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00486810(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,double *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  double dVar11;
  char cStack_337;
  undefined1 auStack_334 [4];
  int *piStack_330;
  int aiStack_32c [198];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pdVar5 = param_8;
  puVar4 = param_7;
  puStack_c = &DAT_00eb0b07;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_330 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_330 + 4);
  uStack_14 = uVar6;
  _guard_check_icall(uVar6);
  (*pcVar1)();
  uVar7 = func_0x00489b60(aiStack_32c,0x300,&param_2,&param_4,auStack_334);
  uStack_8 = 0xffffffff;
  uVar9 = uVar7;
  if (piStack_330 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_330 + 8);
    _guard_check_icall(uVar6);
    puVar8 = (undefined4 *)(*pcVar1)();
    if (puVar8 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar8;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar9 = uVar7 & 0xffff;
  }
  if ((char)uVar9 == '\0') {
    *puVar4 = 2;
    *pdVar5 = 0.0;
  }
  else {
    piVar10 = _errno();
    iVar2 = *piVar10;
    *piVar10 = 0;
    dVar11 = strtod((char *)aiStack_32c,(char **)&piStack_330);
    iVar3 = *piVar10;
    *piVar10 = iVar2;
    *pdVar5 = dVar11;
    if (((piStack_330 == aiStack_32c) || (iVar3 != 0)) ||
       (cStack_337 = (char)(uVar7 >> 8), cStack_337 != '\0')) {
      *puVar4 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_004869bc;
  }
  else if (param_4 == 0) goto LAB_004869bc;
  *puVar4 = *puVar4 | 1;
LAB_004869bc:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004869f0(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,float *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  char cStack_337;
  undefined1 auStack_334 [4];
  int *piStack_330;
  int aiStack_32c [198];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pfVar5 = param_8;
  puVar4 = param_7;
  puStack_c = &DAT_00eb0b67;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_330 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_330 + 4);
  uStack_14 = uVar6;
  _guard_check_icall(uVar6);
  (*pcVar1)();
  uVar7 = func_0x00489b60(aiStack_32c,0x300,&param_2,&param_4,auStack_334);
  uStack_8 = 0xffffffff;
  uVar9 = uVar7;
  if (piStack_330 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_330 + 8);
    _guard_check_icall(uVar6);
    puVar8 = (undefined4 *)(*pcVar1)();
    if (puVar8 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar8;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar9 = uVar7 & 0xffff;
  }
  if ((char)uVar9 == '\0') {
    *puVar4 = 2;
    *pfVar5 = 0.0;
  }
  else {
    piVar10 = _errno();
    iVar2 = *piVar10;
    *piVar10 = 0;
    fVar11 = (float10)strtof(aiStack_32c,&piStack_330);
    iVar3 = *piVar10;
    *piVar10 = iVar2;
    *pfVar5 = (float)fVar11;
    if (((piStack_330 == aiStack_32c) || (iVar3 != 0)) ||
       (cStack_337 = (char)(uVar7 >> 8), cStack_337 != '\0')) {
      *puVar4 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_00486b9b;
  }
  else if (param_4 == 0) goto LAB_00486b9b;
  *puVar4 = *puVar4 | 1;
LAB_00486b9b:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00486bd0(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,undefined8 *param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined8 uVar9;
  char cStack_43;
  undefined1 *puStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  undefined1 auStack_34 [32];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = param_8;
  puVar3 = param_7;
  iVar2 = param_6;
  puStack_c = &DAT_00eb0bbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_38 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_38 + 4);
  uStack_14 = uVar5;
  _guard_check_icall(uVar5);
  (*pcVar1)();
  uVar6 = func_0x00488e70(auStack_34,&param_2,&param_4,*(undefined4 *)(iVar2 + 0x14),auStack_3c);
  uStack_8 = 0xffffffff;
  uVar8 = uVar6;
  if (piStack_38 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_38 + 8);
    _guard_check_icall(uVar5);
    puVar7 = (undefined4 *)(*pcVar1)();
    if (puVar7 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar7;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar8 = uVar6 & 0xffff;
  }
  if ((char)uVar8 < '\0') {
    *puVar3 = 2;
    *(undefined4 *)puVar4 = 0;
    *(undefined4 *)((int)puVar4 + 4) = 0;
  }
  else {
    uVar9 = func_0x00e72d2c(auStack_34,&puStack_40,(int)(char)uVar8,&piStack_38);
    *puVar4 = uVar9;
    if (((puStack_40 == auStack_34) || (piStack_38 != (int *)0x0)) ||
       (cStack_43 = (char)(uVar6 >> 8), cStack_43 != '\0')) {
      *puVar3 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_00486d3b;
  }
  else if (param_4 == 0) goto LAB_00486d3b;
  *puVar3 = *puVar3 | 1;
LAB_00486d3b:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00486d70(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,undefined8 *param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined8 uVar9;
  char cStack_43;
  undefined1 *puStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  undefined1 auStack_34 [32];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = param_8;
  puVar3 = param_7;
  iVar2 = param_6;
  puStack_c = &DAT_00eb0bbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_38 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_38 + 4);
  uStack_14 = uVar5;
  _guard_check_icall(uVar5);
  (*pcVar1)();
  uVar6 = func_0x00488e70(auStack_34,&param_2,&param_4,*(undefined4 *)(iVar2 + 0x14),auStack_3c);
  uStack_8 = 0xffffffff;
  uVar8 = uVar6;
  if (piStack_38 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_38 + 8);
    _guard_check_icall(uVar5);
    puVar7 = (undefined4 *)(*pcVar1)();
    if (puVar7 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar7;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar8 = uVar6 & 0xffff;
  }
  if ((char)uVar8 < '\0') {
    *puVar3 = 2;
    *(undefined4 *)puVar4 = 0;
    *(undefined4 *)((int)puVar4 + 4) = 0;
  }
  else {
    uVar9 = func_0x00e7296c(auStack_34,&puStack_40,(int)(char)uVar8,&piStack_38);
    *puVar4 = uVar9;
    if (((puStack_40 == auStack_34) || (piStack_38 != (int *)0x0)) ||
       (cStack_43 = (char)(uVar6 >> 8), cStack_43 != '\0')) {
      *puVar3 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_00486edb;
  }
  else if (param_4 == 0) goto LAB_00486edb;
  *puVar3 = *puVar3 | 1;
LAB_00486edb:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00486f10(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,undefined4 *param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  char cStack_43;
  undefined1 *puStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  undefined1 auStack_34 [32];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = param_8;
  puVar3 = param_7;
  iVar2 = param_6;
  puStack_c = &DAT_00eb0bbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_38 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_38 + 4);
  uStack_14 = uVar5;
  _guard_check_icall(uVar5);
  (*pcVar1)();
  uVar6 = func_0x00488e70(auStack_34,&param_2,&param_4,*(undefined4 *)(iVar2 + 0x14),auStack_3c);
  uStack_8 = 0xffffffff;
  uVar8 = uVar6;
  if (piStack_38 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_38 + 8);
    _guard_check_icall(uVar5);
    puVar7 = (undefined4 *)(*pcVar1)();
    if (puVar7 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar7;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar8 = uVar6 & 0xffff;
  }
  if ((char)uVar8 < '\0') {
    *puVar3 = 2;
    *puVar4 = 0;
  }
  else {
    uVar9 = func_0x00e72aff(auStack_34,&puStack_40,(int)(char)uVar8,&piStack_38);
    *puVar4 = uVar9;
    if (((puStack_40 == auStack_34) || (piStack_38 != (int *)0x0)) ||
       (cStack_43 = (char)(uVar6 >> 8), cStack_43 != '\0')) {
      *puVar3 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_00487071;
  }
  else if (param_4 == 0) goto LAB_00487071;
  *puVar3 = *puVar3 | 1;
LAB_00487071:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004870a0(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,undefined4 *param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  char cStack_43;
  undefined1 *puStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  undefined1 auStack_34 [32];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = param_8;
  puVar3 = param_7;
  iVar2 = param_6;
  puStack_c = &DAT_00eb0bbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_38 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_38 + 4);
  uStack_14 = uVar5;
  _guard_check_icall(uVar5);
  (*pcVar1)();
  uVar6 = func_0x00488e70(auStack_34,&param_2,&param_4,*(undefined4 *)(iVar2 + 0x14),auStack_3c);
  uStack_8 = 0xffffffff;
  uVar8 = uVar6;
  if (piStack_38 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_38 + 8);
    _guard_check_icall(uVar5);
    puVar7 = (undefined4 *)(*pcVar1)();
    if (puVar7 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar7;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar8 = uVar6 & 0xffff;
  }
  if ((char)uVar8 < '\0') {
    *puVar3 = 2;
    *puVar4 = 0;
  }
  else {
    uVar9 = func_0x00e72a4c(auStack_34,&puStack_40,(int)(char)uVar8,&piStack_38);
    *puVar4 = uVar9;
    if (((puStack_40 == auStack_34) || (piStack_38 != (int *)0x0)) ||
       (cStack_43 = (char)(uVar6 >> 8), cStack_43 != '\0')) {
      *puVar3 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_00487201;
  }
  else if (param_4 == 0) goto LAB_00487201;
  *puVar3 = *puVar3 | 1;
LAB_00487201:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00487230(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 uint *param_7,undefined4 *param_8)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  char cStack_53;
  undefined1 *puStack_50;
  undefined1 auStack_4c [4];
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [32];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb0c0e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_3c = param_4;
  uStack_38 = param_5;
  iStack_44 = param_2;
  iStack_40 = param_3;
  uStack_8 = 0;
  piStack_48 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_48 + 4);
  uStack_14 = uVar2;
  _guard_check_icall(uVar2);
  (*pcVar1)();
  uVar3 = func_0x00488e70(auStack_34,&iStack_44,&iStack_3c,*(undefined4 *)(param_6 + 0x14),
                          auStack_4c);
  uStack_8 = 0xffffffff;
  uVar5 = uVar3;
  if (piStack_48 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_48 + 8);
    _guard_check_icall(uVar2);
    puVar4 = (undefined4 *)(*pcVar1)();
    if (puVar4 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar4;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar5 = uVar3 & 0xffff;
  }
  if ((char)uVar5 < '\0') {
    uVar6 = 0;
    *param_7 = 2;
  }
  else {
    uVar6 = func_0x00e72aff(auStack_34,&puStack_50,(int)(char)uVar5,&piStack_48);
    if (((puStack_50 == auStack_34) || (piStack_48 != (int *)0x0)) ||
       (cStack_53 = (char)(uVar3 >> 8), cStack_53 != '\0')) {
      *param_7 = 2;
    }
  }
  if ((char)iStack_40 == '\0') {
    func_0x0048c000();
  }
  if ((char)uStack_38 == '\0') {
    func_0x0048c000();
  }
  if (iStack_44 == 0) {
    if (iStack_3c != 0) goto LAB_0048739f;
  }
  else if (iStack_3c == 0) goto LAB_0048739f;
  *param_7 = *param_7 | 1;
LAB_0048739f:
  *param_8 = uVar6;
  *param_1 = iStack_44;
  param_1[1] = iStack_40;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004873d0(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,short *param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  int *unaff_FS_OFFSET;
  short *psVar10;
  undefined4 uVar11;
  char cStack_43;
  char *pcStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  char cStack_34;
  char acStack_33 [31];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = param_7;
  iVar2 = param_6;
  puStack_c = &DAT_00eb0c5e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_38 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_38 + 4);
  psVar10 = param_8;
  uStack_14 = uVar4;
  _guard_check_icall(uVar4);
  (*pcVar1)();
  uVar5 = func_0x00488e70(&cStack_34,&param_2,&param_4,*(undefined4 *)(iVar2 + 0x14),auStack_3c);
  uVar11 = 0;
  uStack_8 = 0xffffffff;
  uVar7 = uVar5;
  if (piStack_38 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_38 + 8);
    _guard_check_icall(uVar4);
    puVar6 = (undefined4 *)(*pcVar1)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar6;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar7 = uVar5 & 0xffff;
  }
  if ((char)uVar7 < '\0') {
    *puVar3 = 2;
    *psVar10 = 0;
  }
  else {
    pcVar9 = acStack_33;
    if (cStack_34 != '-') {
      pcVar9 = &cStack_34;
    }
    uVar7 = func_0x00e72aff(pcVar9,&pcStack_40,(int)(char)uVar7,&piStack_38);
    *psVar10 = (short)uVar7;
    if (((pcStack_40 == pcVar9) || (piStack_38 != (int *)0x0)) || (0xffff < uVar7)) {
      sVar8 = -1;
      *puVar3 = 2;
LAB_0048751a:
      *psVar10 = sVar8;
    }
    else if (cStack_34 == '-') {
      sVar8 = -(short)uVar7;
      goto LAB_0048751a;
    }
    cStack_43 = (char)(uVar5 >> 8);
    if (cStack_43 != '\0') {
      *puVar3 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_0048755c;
  }
  else if (param_4 == 0) goto LAB_0048755c;
  *puVar3 = *puVar3 | 1;
LAB_0048755c:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(param_1,psVar10,uVar11);
  return;
}



void FUN_00487590(int *param_1,int param_2,int param_3,int param_4,char param_5,undefined4 *param_6,
                 uint *param_7,undefined1 *param_8)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 ***apppuStack_80 [4];
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 *puStack_68;
  uint *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined4 ***pppuStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  undefined4 auStack_34 [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb0d01;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_64 = param_7;
  uStack_5c = 0;
  puStack_58 = param_6;
  puStack_68 = param_8;
  uStack_14 = uVar3;
  if ((param_6[5] & 0x4000) == 0) {
    uStack_8 = 4;
    piStack_38 = *(int **)(param_6[0xc] + 4);
    pcVar1 = *(code **)(*piStack_38 + 4);
    _guard_check_icall(uVar3);
    (*pcVar1)();
    uStack_5c = 8;
    uVar3 = func_0x00488e70(auStack_34,&param_2,&param_4,puStack_58[5],auStack_3c);
    uStack_60 = (int *)CONCAT22(uStack_60._2_2_,(short)uVar3);
    uStack_5c = 0;
    uStack_8 = 0xffffffff;
    if (piStack_38 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_38 + 8);
      _guard_check_icall();
      puVar6 = (undefined4 *)(*pcVar1)();
      if (puVar6 != (undefined4 *)0x0) {
        pcVar1 = *(code **)*puVar6;
        _guard_check_icall(1);
        (*pcVar1)();
      }
      uVar3 = (uint)uStack_60 & 0xffff;
    }
    if ((char)uVar3 < '\0') {
      *puStack_68 = 0;
      *puStack_64 = 2;
    }
    else {
      iVar5 = func_0x00e72a4c(auStack_34,&puStack_58,(int)(char)uVar3,&piStack_38);
      if (((puStack_58 == auStack_34) || (piStack_38 != (int *)0x0)) || (uStack_60._1_1_ != '\0')) {
        *puStack_68 = 1;
        *puStack_64 = 2;
      }
      else {
        *puStack_68 = iVar5 != 0;
        if ((iVar5 != 0) && (iVar5 != 1)) {
          *puStack_64 = 2;
        }
      }
    }
  }
  else {
    uStack_8 = 0;
    piStack_38 = *(int **)(param_6[0xc] + 4);
    pcVar1 = *(code **)(*piStack_38 + 4);
    _guard_check_icall(uVar3);
    (*pcVar1)();
    uStack_5c = 1;
    uStack_60 = (int *)func_0x00486140(auStack_3c);
    uStack_5c = 0;
    uStack_8 = 0xffffffff;
    if (piStack_38 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_38 + 8);
      _guard_check_icall(uVar3);
      puStack_58 = (undefined4 *)(*pcVar1)();
      if (puStack_58 != (undefined4 *)0x0) {
        pcVar1 = *(code **)*puStack_58;
        _guard_check_icall(1);
        (*pcVar1)();
      }
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 1;
    uStack_40 = 0xf;
    pppuStack_54 = (undefined4 ****)0x0;
    uStack_8 = 2;
    pcVar1 = *(code **)(*uStack_60 + 0x18);
    _guard_check_icall(apppuStack_80);
    (*pcVar1)();
    uStack_5c = 2;
    ppppuVar4 = apppuStack_80;
    if (0xf < uStack_6c) {
      ppppuVar4 = (undefined4 ****)apppuStack_80[0];
    }
    func_0x0046a880(ppppuVar4,uStack_70);
    uStack_5c = 0;
    uStack_8._0_1_ = 1;
    if (0xf < uStack_6c) {
      func_0x0046b1f0(apppuStack_80,apppuStack_80[0],uStack_6c);
    }
    uStack_70 = 0;
    uStack_6c = 0xf;
    apppuStack_80[0] = (undefined4 ***)((uint)apppuStack_80[0] & 0xffffff00);
    func_0x00469a20(0);
    uStack_8._0_1_ = 3;
    pcVar1 = *(code **)(*uStack_60 + 0x1c);
    _guard_check_icall(apppuStack_80);
    (*pcVar1)();
    uStack_5c = 4;
    ppppuVar4 = apppuStack_80;
    if (0xf < uStack_6c) {
      ppppuVar4 = (undefined4 ****)apppuStack_80[0];
    }
    func_0x0046a880(ppppuVar4,uStack_70);
    uStack_5c = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < uStack_6c) {
      func_0x0046b1f0(apppuStack_80,apppuStack_80[0],uStack_6c);
    }
    ppppuVar4 = &pppuStack_54;
    if (0xf < uStack_40) {
      ppppuVar4 = (undefined4 ****)pppuStack_54;
    }
    uStack_70 = 0;
    uStack_6c = 0xf;
    apppuStack_80[0] = (undefined4 ***)((uint)apppuStack_80[0] & 0xffffff00);
    iVar5 = func_0x0048b2a0(&param_2,&param_4,2,ppppuVar4,1);
    if (iVar5 == 0) {
      *puStack_68 = 0;
    }
    else if (iVar5 == 1) {
      *puStack_68 = 1;
    }
    else {
      *puStack_68 = 0;
      *puStack_64 = 2;
    }
    uStack_8 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(&pppuStack_54,pppuStack_54,uStack_40);
    }
    uStack_44 = 0;
    uStack_40 = 0xf;
    pppuStack_54 = (undefined4 ***)((uint)pppuStack_54 & 0xffffff00);
  }
  puVar2 = puStack_64;
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_00487942;
  }
  else if (param_4 == 0) goto LAB_00487942;
  *puVar2 = *puVar2 | 1;
LAB_00487942:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004879b0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)**(undefined4 **)(param_1 + 0x10);
  _guard_check_icall(0);
  (*pcVar1)();
  return;
}



undefined * Catch_00487c6c(void)

{
  func_0x0046a610(4,1);
  return &DAT_00487c85;
}



undefined4 * __thiscall FUN_00487dc0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabde5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::num_get<>::vftable;
  *param_1 = std::locale::facet::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00487e30(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00487e60(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00487e90(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x308);
  }
  return param_1;
}



undefined1 * Catch_00488131(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  uVar2 = func_0x0046b6e0(&DAT_0145c370,"CAST ERROR: ");
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  uVar2 = func_0x0046b6e0(uVar2,uVar3);
  func_0x004849e0(uVar2);
  FUN_00469c30(unaff_EBP + 8);
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
  return &LAB_0048817f;
}



undefined1 * Catch_004882e1(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  uVar2 = func_0x0046b6e0(&DAT_0145c370,"CAST ERROR: ");
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  uVar2 = func_0x0046b6e0(uVar2,uVar3);
  func_0x004849e0(uVar2);
  FUN_00469c30(unaff_EBP + 8);
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
  return &LAB_0048832f;
}



void __fastcall FUN_0048b960(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb128c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(8,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  *puVar2 = stdext::any::holder<>::vftable;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0048b9d0(void)

{
  return &TypeDescriptor_012bdcbc;
}



void __fastcall FUN_0048b9e0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb128c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(8,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  *puVar2 = stdext::any::holder<>::vftable;
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0048ba50(void)

{
  return &TypeDescriptor_012bdcf0;
}



undefined4 * __fastcall FUN_0048ba60(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb12d7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x54,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  uStack_8 = 1;
  *puVar2 = stdext::any::holder<>::vftable;
  func_0x004728b0(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_0048bae0(void)

{
  return &Outfit::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_0048baf0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb131c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x10,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  *puVar2 = stdext::any::holder<>::vftable;
  *(undefined8 *)(puVar2 + 1) = *(undefined8 *)(param_1 + 4);
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_0048bb70(void)

{
  return &Position::RTTI_Type_Descriptor;
}



void __fastcall FUN_0048bb80(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb128c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(8,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  *puVar2 = stdext::any::holder<int>::vftable;
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0048bbf0(void)

{
  return &TypeDescriptor_012bd878;
}



undefined4 * __fastcall FUN_0048bc00(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb1367;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x1c,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  uStack_8 = 1;
  *puVar2 = stdext::any::holder<>::vftable;
  func_0x00469da0(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_0048bc80(void)

{
  return &std::basic_string<>::RTTI_Type_Descriptor;
}



undefined * Catch_0048bf17(void)

{
  func_0x0046a610(4,1);
  return &DAT_0048bf30;
}



undefined4 * __thiscall FUN_0048c3e0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb14ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0048c440(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb14f3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = param_1 + 0xe;
  if (0xf < (uint)param_1[0x13]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x13],uVar2);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0048c4e0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb14ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0048c540(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb1528;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  if (0xf < (uint)param_1[6]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[6],uVar2);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __fastcall FUN_0048cff0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



void __fastcall FUN_0048d260(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined ***pppuVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined ***pppuStack_54;
  uint auStack_50 [6];
  undefined1 auStack_38 [4];
  int *piStack_34;
  int iStack_30;
  int *piStack_2c;
  int *piStack_28;
  uint uStack_24;
  undefined ***pppuStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb17db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  uStack_1c = DAT_0145db28;
  uVar3 = uStack_1c;
  uStack_1c._0_4_ = (int)DAT_0145db28;
  uStack_1c._4_4_ = (int *)((ulonglong)DAT_0145db28 >> 0x20);
  param_1[0xe] = (int)uStack_1c;
  param_1[0xf] = (int)uStack_1c._4_4_;
  *(undefined1 *)(param_1 + 0x10) = 0;
  piStack_28 = param_1;
  uStack_1c = uVar3;
  uStack_14 = uVar4;
  if ((DAT_0145d0c4 & 0x8000000) == 0) {
    iVar8 = 300;
    if ((short)param_1[0xc] != 0x21) {
      iVar8 = 0x4b;
    }
    pcVar2 = *(code **)(*param_1 + 0x40);
    _guard_check_icall(uVar4);
    iVar6 = (*pcVar2)();
    pppuVar7 = (undefined ***)(*(int *)(iVar6 + 0x50) * iVar8);
  }
  else {
    DAT_012bc27c = DAT_012bc27c * 0x343fd + 0x269ec3;
    param_1[0x13] = DAT_012bc27c >> 0x10 & 0x7fff;
    pcVar2 = *(code **)(*param_1 + 0x3c);
    _guard_check_icall(uVar4);
    piVar5 = (int *)(*pcVar2)();
    iVar8 = *piVar5;
    uStack_8 = 0;
    if (*(int *)(iVar8 + 0x38) != 0) {
      LOCK();
      piVar5 = (int *)(*(int *)(iVar8 + 0x38) + 4);
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    iStack_30 = *(int *)(iVar8 + 0x34);
    piVar5 = *(int **)(iVar8 + 0x38);
    uStack_24 = 4;
    piStack_2c = piVar5;
    if (iStack_30 == 0) {
      pppuStack_20 = (undefined ***)0x3e8;
      uStack_24 = 4;
    }
    else {
      pcVar2 = *(code **)(*piStack_28 + 0x3c);
      _guard_check_icall(uVar4);
      (*pcVar2)();
      func_0x00466e70(auStack_38);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      uStack_24 = 5;
      pppuStack_20 = (undefined ***)func_0x0046e3c0(piStack_28[0x13]);
      uStack_24 = 5;
    }
    uStack_8 = 0;
    if ((uStack_24 & 1) != 0) {
      uStack_24 = uStack_24 & 0xfffffffe;
      FUN_00468340();
    }
    uStack_24 = uStack_24 & 0xfffffffb;
    uStack_8 = 0xffffffff;
    pppuVar7 = pppuStack_20;
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar8 = piVar5[1] + -1;
      piVar5[1] = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar2 = *(code **)*piVar5;
        _guard_check_icall(uVar4);
        (*pcVar2)();
        LOCK();
        iVar8 = piVar5[2] + -1;
        piVar5[2] = iVar8;
        UNLOCK();
        pppuVar7 = pppuStack_20;
        if (iVar8 == 0) {
          pcVar2 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar2)();
          pppuVar7 = pppuStack_20;
        }
      }
    }
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0046b930(&uStack_1c);
  uVar4 = uStack_24;
  uStack_24 = uStack_24 | 2;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
    UNLOCK();
  }
  pppuStack_20 = &ppuStack_78;
  piStack_28 = &uStack_74;
  ppuStack_78 = std::_Func_impl_no_alloc<>::vftable;
  uStack_74 = (int)uStack_1c;
  iStack_70 = (int)uStack_1c._4_4_;
  iStack_30 = 0;
  piStack_2c = (int *)0x0;
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  pppuStack_54 = &ppuStack_78;
  uStack_8._0_1_ = 8;
  auStack_50[4] = 0;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[2] = 0;
  auStack_50[3] = 0;
  auStack_50[5] = 0;
  func_0x0046bc40("Effect::onAppear",0x10);
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  FUN_005e4dd0(auStack_38,auStack_50,&ppuStack_78,pppuVar7);
  pppuStack_20 = (undefined ***)piStack_34;
  if (piStack_34 != (int *)0x0) {
    LOCK();
    iVar8 = piStack_34[1] + -1;
    piStack_34[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      pcVar2 = *(code **)*piStack_34;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar8 = (int)pppuStack_20[2] + -1;
      pppuStack_20[2] = (undefined **)iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar2 = *(code **)((int)*pppuStack_20 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_8._0_1_ = 8;
  if (0xf < auStack_50[5]) {
    func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
  }
  auStack_50[4] = 0;
  auStack_50[5] = 0xf;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  if (pppuStack_54 != (undefined ***)0x0) {
    pcVar2 = (code *)(*pppuStack_54)[4];
    _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_78 >> 8),pppuStack_54 != &ppuStack_78));
    (*pcVar2)();
    pppuStack_54 = (undefined ***)0x0;
  }
  uStack_24 = uVar4 & 0xfffffffd;
  uStack_8 = 0xffffffff;
  piVar5 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar8 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar5 + 2;
      iVar8 = *piVar1 + -1;
      *piVar1 = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0048d63f)

void __thiscall FUN_0048d600(int param_1,ushort param_2)

{
  if ((param_2 != 0) && ((uint)param_2 < (uint)(DAT_0145d8bc - DAT_0145d8b8 >> 3))) {
    *(ushort *)(param_1 + 0x30) = param_2;
    return;
  }
  *(undefined2 *)(param_1 + 0x30) = 0;
  return;
}



void __fastcall FUN_0048d650(int param_1)

{
  FUN_005c37e0(*(undefined2 *)(param_1 + 0x30),2);
  return;
}



undefined4 __fastcall FUN_0048d670(int param_1)

{
  return *(undefined4 *)(DAT_0145d8b8 + (uint)*(ushort *)(param_1 + 0x30) * 8);
}



TypeDescriptor * FUN_0048d680(void)

{
  return &`protected:_virtual_void___thiscall_Effect::onAppear(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __thiscall FUN_0048d690(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0048d710(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0048d7a0(undefined4 param_1)

{
  FUN_005ee340(1,param_1);
  return;
}



void __thiscall FUN_0048d7c0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



undefined2 __fastcall FUN_0048d7e0(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



undefined1 __fastcall FUN_0048d7f0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x240);
}



undefined1 __fastcall FUN_0048d800(int param_1)

{
  return *(undefined1 *)(param_1 + 0x126);
}



bool __fastcall FUN_0048d810(int param_1)

{
  return *(char *)(param_1 + 0x4c) == '\0';
}



void __fastcall FUN_0048d820(int param_1)

{
  *(undefined1 *)(param_1 + 0x338) = 1;
  return;
}



void FUN_0048d830(void)

{
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb184d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 1;
  puStack_14 = (undefined1 *)&uStack_28;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_8 = 0xffffffff;
  FUN_00493570();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0048d890(void)

{
  int *unaff_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb187d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_14 = (undefined1 *)&uStack_20;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 0xffffffff;
  FUN_00493760();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __fastcall FUN_0048d8f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x104);
}



int __fastcall FUN_0048d900(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x126) == '\0')) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_0048d920(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x126) == '\0')) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



undefined4 __fastcall FUN_0048d940(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x44);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x238) == '\0') {
      lVar3 = -1;
    }
    else {
      lVar3 = *(longlong *)(iVar1 + 0x248);
      lVar2 = FUN_0083f570();
      lVar3 = func_0x00e87ec0(lVar2 - lVar3,1000,0);
    }
    if (0xffffffff < lVar3) {
      return 0;
    }
    if ((-1 < lVar3) && (4999 < (uint)lVar3)) {
      return 0;
    }
  }
  return 1;
}



undefined4 * __thiscall FUN_0048d9a0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb18be;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_18 = param_2;
  uStack_14 = 0;
  func_0x004a0d30(auStack_24,&param_3,uVar2);
  if (((*(char *)(iStack_1c + 0xd) == '\0') && (*(int *)(iStack_1c + 0x10) <= param_3)) &&
     (iStack_1c != *(int *)(param_1 + 0x20))) {
    puVar3 = (undefined4 *)func_0x00499920(&param_3);
    *param_2 = 0;
    param_2[1] = 0;
    if (puVar3[1] != 0) {
      LOCK();
      piVar1 = (int *)(puVar3[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int __fastcall FUN_0048da60(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 != 0) {
    return CONCAT31(uVar2,*(undefined1 *)(iVar1 + 0x28));
  }
  return (uint)uVar2 << 8;
}



undefined1 __fastcall FUN_0048db40(int param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



void __thiscall
FUN_00490600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
            undefined4 param_9,int param_10)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  int *piStack_24;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb2105;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(param_1 + 0x18) == 0) && (*(char *)(param_1 + 0x30) == '\0')) {
    if (*(int *)(param_1 + 0x104) != 0) {
      func_0x0048e230();
      uVar6 = func_0x00499ea0();
      uStack_8 = 2;
      func_0x0046ffa0(uVar6);
      uStack_8 = 0xffffffff;
      FUN_00468340();
      FUN_004772a0(param_7);
      uVar6 = func_0x0049a040();
      uStack_8 = 3;
      func_0x0046ffa0(uVar6);
      uStack_8 = 0xffffffff;
      FUN_00468340();
      if (*(int *)(param_10 + 0x10) != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        func_0x0049a1c0();
        if (piStack_24 != (int *)0x0) {
          LOCK();
          piStack_24[1] = piStack_24[1] + 1;
          UNLOCK();
        }
        piVar3 = *(int **)(iVar2 + 0x38);
        *(undefined4 *)(iVar2 + 0x34) = uStack_28;
        *(int **)(iVar2 + 0x38) = piStack_24;
        uStack_8 = 4;
        if (piVar3 != (int *)0x0) {
          LOCK();
          iVar2 = piVar3[1] + -1;
          piVar3[1] = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar4 = *(code **)*piVar3;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            iVar2 = piVar3[2] + -1;
            piVar3[2] = iVar2;
            UNLOCK();
            if (iVar2 == 0) {
              pcVar4 = *(code **)(*piVar3 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
        uStack_8 = 0xffffffff;
        if (piStack_24 != (int *)0x0) {
          LOCK();
          iVar2 = piStack_24[1] + -1;
          piStack_24[1] = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar4 = *(code **)*piStack_24;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar3 = piStack_24 + 2;
            iVar2 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              pcVar4 = *(code **)(*piStack_24 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
      FUN_0058dc80(param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_4);
      if ((undefined4 *)(param_1 + 0xa0) != param_7) {
        puVar1 = param_7 + 4;
        if (0xf < (uint)param_7[5]) {
          param_7 = (undefined4 *)*param_7;
        }
        func_0x0046a660(param_7,*puVar1);
      }
      if ((undefined4 *)(param_1 + 0xb8) != param_4) {
        puVar1 = param_4 + 4;
        if (0xf < (uint)param_4[5]) {
          param_4 = (undefined4 *)*param_4;
        }
        func_0x0046a660(param_4,*puVar1);
      }
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    func_0x00469d30("Unable to login into a world while already online or logging.",uVar5);
    uStack_8 = 0;
    func_0x0047d860();
  }
  func_0x00469d30("Must set a valid game protocol version before logging.",uVar5);
  uStack_8 = 1;
  func_0x0047d860();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



void __fastcall FUN_00490830(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *unaff_FS_OFFSET;
  uint auStack_4c [8];
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb2175;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if ((param_1[6] == 0) && ((char)param_1[0xc] == '\0')) {
    puStack_20 = &stack0xfffffffc;
    if (param_1[0x41] != 0) {
      uStack_2c = 0;
      puStack_20 = &stack0xfffffffc;
      func_0x0049a360();
      uStack_14 = 2;
      if ((int)uStack_2c != 0) {
        func_0x0048e230();
        func_0x00499ea0();
        uStack_14._0_1_ = 4;
        func_0x0046ffa0();
        uStack_14._0_1_ = 2;
        FUN_00468340();
        iVar1 = *param_1;
        auStack_4c[0] = 0;
        auStack_4c[1] = 0;
        auStack_4c[2] = 0;
        auStack_4c[3] = 0;
        auStack_4c[4] = 0;
        auStack_4c[5] = 0;
        func_0x0046bc40();
        uStack_14 = CONCAT31(uStack_14._1_3_,5);
        if (*(int *)(iVar1 + 0x140) != *(int *)(iVar1 + 0x144)) {
          *(int *)(iVar1 + 0x144) = *(int *)(iVar1 + 0x140);
        }
        if ((uint *)(iVar1 + 0x128) != auStack_4c) {
          func_0x0046a660();
        }
        if (*(int *)(iVar1 + 0x168) != 0) {
          auStack_4c[6] = 0xffffffff;
          auStack_4c[7] = 0xffffffff;
          func_0x00617c40();
          *(uint *)(iVar1 + 0x14c) = auStack_4c[6];
          *(uint *)(iVar1 + 0x150) = auStack_4c[7];
        }
        *(undefined1 *)(iVar1 + 0x154) = 1;
        if ((uint *)(iVar1 + 0x34) != auStack_4c) {
          func_0x0046a660();
        }
        uStack_14._0_1_ = 2;
        if (0xf < auStack_4c[5]) {
          func_0x0046b1f0();
        }
        auStack_4c[4] = 0;
        auStack_4c[5] = 0xf;
        auStack_4c[0] = auStack_4c[0] & 0xffffff00;
        func_0x0049a040();
        uStack_14._0_1_ = 6;
        func_0x0046ffa0();
        uStack_14._0_1_ = 2;
        FUN_00468340();
        func_0x00468490(&uStack_2c);
        uStack_14 = CONCAT31(uStack_14._1_3_,2);
        func_0x008070f0();
        func_0x0046a660(&DAT_0113cb18,4);
        func_0x0046a660("Record",6);
        uStack_14 = 0xffffffff;
        FUN_00468340();
        *unaff_FS_OFFSET = iStack_1c;
        FUN_008ab370();
        return;
      }
      goto LAB_00490a80;
    }
  }
  else {
    func_0x00469d30();
    uStack_14 = 0;
    func_0x0047d860();
  }
  func_0x00469d30();
  uStack_14 = 1;
  func_0x0047d860();
LAB_00490a80:
  func_0x00469d30();
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  func_0x0047d860();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __fastcall FUN_00490aa0(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  uint auStack_50 [12];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb21b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x005b2760(uVar2);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  auStack_50[4] = 0;
  auStack_50[5] = 0;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[2] = 0;
  auStack_50[3] = 0;
  func_0x0046bc40("onLogout",8);
  uStack_14 = 0;
  auStack_50[10] = 0;
  auStack_50[6] = 0;
  auStack_50[7] = 0;
  auStack_50[8] = 0;
  auStack_50[9] = 0;
  auStack_50[0xb] = 0;
  func_0x0046bc40("g_game",6);
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  uVar2 = func_0x0049b8f0(auStack_50 + 6,auStack_50);
  if (0 < (int)uVar2) {
    func_0x00d66d90(DAT_0145e9f0,~uVar2);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < auStack_50[0xb]) {
    func_0x0046b1f0(auStack_50 + 6,auStack_50[6],auStack_50[0xb]);
  }
  auStack_50[10] = 0;
  auStack_50[0xb] = 0xf;
  auStack_50[6] = auStack_50[6] & 0xffffff00;
  uStack_14 = 0xffffffff;
  if (0xf < auStack_50[5]) {
    func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
  }
  auStack_50[4] = 0;
  auStack_50[5] = 0xf;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  func_0x0048e720();
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __fastcall FUN_00490be0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  uint auStack_50 [12];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb21b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (*(char *)(param_1 + 0x30) != '\0') {
    auStack_50[4] = 0;
    auStack_50[5] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    func_0x0046bc40("onLogout",8,uVar1);
    uStack_14 = 0;
    auStack_50[10] = 0;
    auStack_50[6] = 0;
    auStack_50[7] = 0;
    auStack_50[8] = 0;
    auStack_50[9] = 0;
    auStack_50[0xb] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar1 = func_0x0049b8f0(auStack_50 + 6,auStack_50);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_50[0xb]) {
      func_0x0046b1f0(auStack_50 + 6,auStack_50[6],auStack_50[0xb]);
    }
    auStack_50[10] = 0;
    auStack_50[0xb] = 0xf;
    auStack_50[6] = auStack_50[6] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < auStack_50[5]) {
      func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
    }
    auStack_50[4] = 0;
    auStack_50[5] = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    func_0x005b2760();
    func_0x0048e720();
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __fastcall FUN_00490d20(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  uint auStack_50 [12];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb21b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (*(char *)(param_1 + 0x30) != '\0') {
    auStack_50[4] = 0;
    auStack_50[5] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    func_0x0046bc40("onLogout",8,uVar1);
    uStack_14 = 0;
    auStack_50[10] = 0;
    auStack_50[6] = 0;
    auStack_50[7] = 0;
    auStack_50[8] = 0;
    auStack_50[9] = 0;
    auStack_50[0xb] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar1 = func_0x0049b8f0(auStack_50 + 6,auStack_50);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_50[0xb]) {
      func_0x0046b1f0(auStack_50 + 6,auStack_50[6],auStack_50[0xb]);
    }
    auStack_50[10] = 0;
    auStack_50[0xb] = 0xf;
    auStack_50[6] = auStack_50[6] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < auStack_50[5]) {
      func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
    }
    auStack_50[4] = 0;
    auStack_50[5] = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    func_0x005b2760();
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00490e70(int *param_1,int *param_2,int param_3,int param_4,short param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  uint auStack_68 [6];
  undefined4 uStack_50;
  uint auStack_4c [6];
  int *piStack_34;
  undefined8 uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb2215;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_34 = param_1;
  puVar4 = &stack0xfffffffc;
  if (((((char)param_1[0xc] != '\0') && (puVar4 = &stack0xfffffffc, *param_1 != 0)) &&
      (puVar4 = &stack0xfffffffc, *(char *)(*param_1 + 0x4c) != '\0')) &&
     (((puVar4 = &stack0xfffffffc, *(char *)((int)param_1 + 0x32) == '\0' &&
       (puVar4 = &stack0xfffffffc, param_1[6] != 0)) &&
      ((cVar5 = FUN_008074b0(uStack_24), puVar4 = puStack_20, cVar5 != '\0' &&
       ((cVar5 = FUN_00498910(), puVar4 = puStack_20, cVar5 != '\0' &&
        (uVar10 = param_2[1] - *param_2 >> 2, uVar10 != 0)))))))) {
    if ((((DAT_0145d0c8 & 0x4000000) == 0) || (0x1001 < uVar10)) && (0x7f < uVar10)) {
      auStack_4c[4] = 0;
      auStack_4c[5] = 0;
      auStack_4c[0] = 0;
      auStack_4c[1] = 0;
      auStack_4c[2] = 0;
      auStack_4c[3] = 0;
      func_0x0046bc40("Auto walk path too great",0x18);
      uStack_14 = 0;
      FUN_005ee340(3,auStack_4c);
      uStack_14 = 0xffffffff;
      if (0xf < auStack_4c[5]) {
        func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
      }
      auStack_4c[4] = 0;
      auStack_4c[5] = 0xf;
      auStack_4c[0] = auStack_4c[0] & 0xffffff00;
      puVar4 = puStack_20;
    }
    else {
      if (DAT_0145efc3 != '\0') {
        uStack_30._0_4_ = (undefined4)DAT_0145db28;
        uStack_50 = (undefined4)uStack_30;
        uStack_30 = DAT_0145db28;
        auStack_4c[4] = 0;
        auStack_4c[0] = 0;
        auStack_4c[1] = 0;
        auStack_4c[2] = 0;
        auStack_4c[3] = 0;
        auStack_4c[5] = 0;
        func_0x0046bc40("[%i] Game::autoWalk",0x13);
        uStack_14 = 1;
        uVar6 = func_0x00485670(&uStack_50);
        uStack_14._0_1_ = 2;
        FUN_005ee340(1,uVar6);
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
        FUN_00469ba0();
        uStack_14 = 0xffffffff;
        if (0xf < auStack_4c[5]) {
          func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
        }
        auStack_4c[4] = 0;
        auStack_4c[5] = 0xf;
        auStack_4c[0] = auStack_4c[0] & 0xffffff00;
      }
      if ((param_1[4] != 0) && (*(char *)(param_1[4] + 0x126) == '\0')) {
        FUN_0048d890();
      }
      uStack_50 = CONCAT31(uStack_50._1_3_,4);
      uStack_30 = 0;
      uVar6 = *(undefined4 *)*param_2;
      uVar7 = func_0x00471be0(auStack_4c + 3,uVar6);
      piVar8 = (int *)FUN_00572b50(uVar7);
      if (piVar8[1] != 0) {
        LOCK();
        piVar1 = (int *)(piVar8[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      iVar2 = *piVar8;
      piVar1 = (int *)piVar8[1];
      uStack_30 = *(undefined8 *)piVar8;
      uStack_14 = 3;
      pcVar3 = *(code **)(*(int *)*param_1 + 0x80);
      _guard_check_icall(auStack_4c + 3,0);
      piVar9 = (int *)(*pcVar3)();
      piVar8 = piStack_34;
      if (((((*piVar9 == param_3) && (piVar9[1] == param_4)) && ((short)piVar9[2] == param_5)) &&
          ((iVar2 != 0 && (cVar5 = FUN_005c9620(0), piVar8 = piStack_34, cVar5 != '\0')))) &&
         ((*(char *)(*piStack_34 + 0x240) == '\0' && (cVar5 = FUN_004abf30(uVar6,1), cVar5 != '\0'))
         )) {
        FUN_004ac730(uVar6);
        uStack_50 = CONCAT31(uStack_50._1_3_,5);
        *(undefined1 *)(*piVar8 + 0x338) = 1;
      }
      auStack_68[4] = 0;
      auStack_68[5] = 0;
      auStack_68[0] = 0;
      auStack_68[1] = 0;
      auStack_68[2] = 0;
      auStack_68[3] = 0;
      func_0x0046bc40("onAutoWalk",10);
      uStack_14._0_1_ = 4;
      auStack_4c[4] = 0;
      auStack_4c[0] = 0;
      auStack_4c[1] = 0;
      auStack_4c[2] = 0;
      auStack_4c[3] = 0;
      auStack_4c[5] = 0;
      func_0x0046bc40("g_game",6);
      uStack_14 = CONCAT31(uStack_14._1_3_,5);
      uVar10 = func_0x0049f5d0(auStack_4c,auStack_68,param_2);
      if (0 < (int)uVar10) {
        func_0x00d66d90(DAT_0145e9f0,~uVar10);
      }
      uStack_14._0_1_ = 4;
      if (0xf < auStack_4c[5]) {
        func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
      }
      auStack_4c[4] = 0;
      auStack_4c[5] = 0xf;
      auStack_4c[0] = auStack_4c[0] & 0xffffff00;
      uStack_14 = CONCAT31(uStack_14._1_3_,3);
      if (0xf < auStack_68[5]) {
        func_0x0046b1f0(auStack_68,auStack_68[0],auStack_68[5]);
      }
      auStack_68[4] = 0;
      auStack_68[5] = 0xf;
      auStack_68[0] = auStack_68[0] & 0xffffff00;
      if ((DAT_0145d0c8 & 0x4000000) == 0) {
        func_0x005b29a0(param_2);
      }
      else {
        func_0x005b5330(piVar8[0x12],piVar8[0x13],&param_3,uStack_50);
      }
      uStack_14 = 0xffffffff;
      puVar4 = puStack_20;
      if (piVar1 != (int *)0x0) {
        LOCK();
        iVar2 = piVar1[1] + -1;
        piVar1[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)*piVar1;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          iVar2 = piVar1[2] + -1;
          piVar1[2] = iVar2;
          UNLOCK();
          puVar4 = puStack_20;
          if (iVar2 == 0) {
            pcVar3 = *(code **)(*piVar1 + 4);
            _guard_check_icall();
            (*pcVar3)();
            puVar4 = puStack_20;
          }
        }
      }
    }
  }
  puStack_20 = puVar4;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



// WARNING: Instruction at (ram,0x004918c8) overlaps instruction at (ram,0x004918c7)
// 

void __thiscall FUN_004912b0(int *param_1,int *param_2,char param_3)

{
  int **ppiVar1;
  code *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int extraout_ECX;
  char *pcVar10;
  int **ppiVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  uint auStack_68 [6];
  int *piStack_50;
  int *piStack_4c;
  uint auStack_48 [6];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_8;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb22b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  uStack_28 = CONCAT44(uVar5,(int)uStack_28);
  *unaff_FS_OFFSET = (int)&iStack_1c;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  piStack_50 = param_1;
  puVar3 = &stack0xfffffffc;
  if (((((char)param_1[0xc] != '\0') && (puVar3 = &stack0xfffffffc, *param_1 != 0)) &&
      (puVar3 = &stack0xfffffffc, *(char *)(*param_1 + 0x4c) != '\0')) &&
     (((puVar3 = &stack0xfffffffc, *(char *)((int)param_1 + 0x32) == '\0' &&
       (puVar3 = &stack0xfffffffc, param_1[6] != 0)) &&
      (cVar4 = FUN_008074b0(uVar5), puVar3 = puStack_20, cVar4 != '\0')))) {
    if (DAT_0145efc3 != '\0') {
      uStack_30._0_4_ = (int *)DAT_0145db28;
      piStack_4c = (int *)uStack_30;
      uStack_30 = DAT_0145db28;
      auStack_48[4] = 0;
      auStack_48[0] = 0;
      auStack_48[1] = 0;
      auStack_48[2] = 0;
      auStack_48[3] = 0;
      auStack_48[5] = 0;
      func_0x0046bc40("[%i] Game::walk",0xf);
      uStack_14 = 2;
      uVar6 = func_0x00485670(&piStack_4c);
      uStack_14._0_1_ = 3;
      FUN_005ee340(1,uVar6);
      uStack_14 = CONCAT31(uStack_14._1_3_,2);
      if (0xf < auStack_68[5]) {
        func_0x0046b1f0(auStack_68,auStack_68[0],auStack_68[5]);
      }
      auStack_68[4] = 0;
      auStack_68[5] = 0xf;
      auStack_68[0] = auStack_68[0] & 0xffffff00;
      uStack_14 = 0xffffffff;
      if (0xf < auStack_48[5]) {
        func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
      }
      auStack_48[4] = 0;
      auStack_48[5] = 0xf;
      auStack_48[0] = auStack_48[0] & 0xffffff00;
    }
    auStack_68[4] = 0;
    auStack_68[5] = 0;
    auStack_68[0] = 0;
    auStack_68[1] = 0;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    func_0x0046bc40("onWalk",6);
    uStack_14 = 4;
    auStack_48[4] = 0;
    auStack_48[0] = 0;
    auStack_48[1] = 0;
    auStack_48[2] = 0;
    auStack_48[3] = 0;
    auStack_48[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,5);
    uVar5 = func_0x0049f890(auStack_48,auStack_68,&param_2,&param_3);
    if (0 < (int)uVar5) {
      func_0x00d66d90(DAT_0145e9f0,~uVar5);
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,4);
    if (0xf < auStack_48[5]) {
      func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
    }
    auStack_48[4] = 0;
    auStack_48[5] = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < auStack_68[5]) {
      func_0x0046b1f0(auStack_68,auStack_68[0],auStack_68[5]);
    }
    auStack_68[4] = 0;
    auStack_68[5] = 0xf;
    auStack_68[0] = auStack_68[0] & 0xffffff00;
    if ((DAT_0145d0c8 & 0x4000000) != 0) {
      pcVar2 = *(code **)(*(int *)*piStack_50 + 0x80);
      _guard_check_icall(auStack_48 + 3,0);
      (*pcVar2)();
      piVar12 = piStack_50;
      ppiVar11 = &piStack_50;
      auStack_68[3] = 0;
      bVar13 = param_3 != '\0';
      auStack_68[4] = 0;
      uStack_30 = CONCAT44(piStack_50[6],(int *)uStack_30);
      piStack_50 = param_2;
      piStack_4c = (int *)((int)&piStack_4c - (int)ppiVar11);
      auStack_68[5] = 0;
      uVar5 = (int)piStack_4c >> 2;
      if (uVar5 != 0) {
        uVar14 = SBORROW4(uVar5,0x3fffffff);
        if (0x3fffffff < uVar5) {
          func_0x0046e700();
LAB_004918a9:
          uVar15 = func_0x00463420();
          pcVar10 = (char *)((ulonglong)uVar15 >> 0x20);
          iVar9 = (int)uVar15;
          iVar8 = extraout_ECX;
          if ((bool)uVar14) {
            iVar8 = CONCAT31((int3)((uint)extraout_ECX >> 8),0x17) + -1;
            iVar9 = CONCAT22((short)((ulonglong)uVar15 >> 0x10),
                             CONCAT11((char)((ulonglong)uVar15 >> 8) * '\x02',(char)uVar15));
          }
          *(char *)((int)ppiVar11 + 0xdc004916U) =
               *(char *)((int)ppiVar11 + 0xdc004916U) + (char)((uint)iVar9 >> 8);
          *pcVar10 = *pcVar10 + (char)((ulonglong)uVar15 >> 0x20);
          *(char *)(iVar9 + 0x17) = *(char *)(iVar9 + 0x17) + (char)iVar8 + -3;
          *(char *)((int)ppiVar11 + 0x17U) =
               *(char *)((int)ppiVar11 + 0x17U) + (char)((uint)&stack0xfffffffc >> 8);
          *(char *)(iVar8 + -0x1bffb6ee) =
               *(char *)(iVar8 + -0x1bffb6ee) + (char)((ulonglong)uVar15 >> 0x28);
          in((short)((ulonglong)uVar15 >> 0x20));
          puStack_20 = (undefined1 *)(DAT_0128fd40 ^ (uint)&stack0xfffffff0);
          *unaff_FS_OFFSET = (int)&iStack_1c;
          *(undefined1 *)(iVar8 + 0x2b) = 0;
          if (((*(char *)(iVar8 + 0x2a) != '\0') && (iVar9 = *(int *)(iVar8 + -6), iVar9 != 0)) &&
             ((*(char *)(iVar9 + 0x4c) != '\0' &&
              (((*(char *)(iVar8 + 0x2c) == '\0' && (*(int *)(iVar8 + 0x12) != 0)) &&
               (cVar4 = FUN_008074b0(puStack_20,piVar12,ppiVar11,&stack0xfffffffc), cVar4 != '\0')))
              ))) {
            if ((DAT_0145d0c8 & 0x4000000) != 0) {
              *(undefined4 *)(iVar9 + 0x50) = uStack_8;
            }
            switch(uStack_8) {
            case 0:
              piVar12 = *(int **)(iVar8 + 0x12);
              uStack_28 = 0;
              func_0x005b55f0();
              uStack_14 = 2;
              iVar9 = (int)uStack_28;
              func_0x00803290(1);
              *(undefined1 *)(*(int *)(iVar9 + 0x14) + 0x1c + iVar9) = 0x6f;
              break;
            case 1:
              piVar12 = *(int **)(iVar8 + 0x12);
              uStack_28 = 0;
              func_0x005b55f0();
              uStack_14 = 3;
              iVar9 = (int)uStack_28;
              func_0x00803290(1);
              *(undefined1 *)(*(int *)(iVar9 + 0x14) + 0x1c + iVar9) = 0x70;
              break;
            case 2:
              piVar12 = *(int **)(iVar8 + 0x12);
              uStack_28 = 0;
              func_0x005b55f0();
              uStack_14 = 4;
              iVar9 = (int)uStack_28;
              func_0x00803290(1);
              *(undefined1 *)(*(int *)(iVar9 + 0x14) + 0x1c + iVar9) = 0x71;
              break;
            case 3:
              piVar12 = *(int **)(iVar8 + 0x12);
              uStack_28 = 0;
              func_0x005b55f0();
              uStack_14 = 5;
              iVar9 = (int)uStack_28;
              func_0x00803290(1);
              *(undefined1 *)(*(int *)(iVar9 + 0x14) + 0x1c + iVar9) = 0x72;
              break;
            default:
              goto LAB_00491a8f;
            }
            *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
            *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + 1;
            pcVar2 = *(code **)(*piVar12 + 4);
            _guard_check_icall(&uStack_28,0);
            (*pcVar2)();
            uStack_14 = 0xffffffff;
            uStack_30 = CONCAT44(uStack_28._4_4_,(int *)uStack_30);
            if (uStack_28._4_4_ != (undefined4 *)0x0) {
              LOCK();
              iVar9 = uStack_28._4_4_[1] + -1;
              uStack_28._4_4_[1] = iVar9;
              UNLOCK();
              if (iVar9 == 0) {
                pcVar2 = *(code **)*uStack_28._4_4_;
                _guard_check_icall();
                (*pcVar2)();
                LOCK();
                piVar12 = uStack_30._4_4_ + 2;
                iVar9 = *piVar12;
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  pcVar2 = *(code **)(*uStack_30._4_4_ + 4);
                  _guard_check_icall();
                  (*pcVar2)();
                }
              }
            }
          }
LAB_00491a8f:
          *(undefined1 *)(iVar8 + 0x2b) = 1;
          *unaff_FS_OFFSET = iStack_1c;
          FUN_008ab370();
          return;
        }
        ppiVar11 = (int **)(uVar5 * 4);
        if (ppiVar11 == (int **)0x0) {
          uVar7 = 0;
        }
        else if (ppiVar11 < (int **)0x1000) {
          uVar7 = func_0x008ab47d(ppiVar11);
        }
        else {
          ppiVar1 = (int **)((int)ppiVar11 + 0x23);
          uVar14 = SBORROW4((int)ppiVar1,(int)ppiVar11);
          if (ppiVar1 <= ppiVar11) goto LAB_004918a9;
          iVar8 = func_0x008ab47d(ppiVar1);
          if (iVar8 == 0) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          uVar7 = iVar8 + 0x23U & 0xffffffe0;
          *(int *)(uVar7 - 4) = iVar8;
        }
        auStack_68[5] = uVar7 + (int)ppiVar11;
        uStack_14 = 6;
        auStack_68[3] = uVar7;
        auStack_68[4] = uVar7;
        func_0x008ab0e6(uVar7,&piStack_50,piStack_4c);
        auStack_68[4] = uVar7 + uVar5 * 4;
      }
      uStack_14 = 7;
      func_0x005b5330(piVar12[0x12],piVar12[0x13],auStack_48 + 3,bVar13,auStack_68 + 3);
      uStack_14 = 0xffffffff;
      if (auStack_68[3] != 0) {
        func_0x0046ac90(auStack_68[3],(int)(auStack_68[5] - auStack_68[3]) >> 2);
        auStack_68[3] = 0;
        auStack_68[4] = 0;
        auStack_68[5] = 0;
      }
      *(undefined1 *)((int)piVar12 + 0x31) = 1;
      goto LAB_00491884;
    }
    puVar3 = puStack_20;
    switch(param_2) {
    case (int *)0x0:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 8;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(*(int *)(iVar8 + 0x14) + 0x1c + iVar8) = 0x65;
      break;
    case (int *)0x1:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 9;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar8 + 0x14)) = 0x66;
      break;
    case (int *)0x2:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 10;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar8 + 0x14)) = 0x67;
      break;
    case (int *)0x3:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 0xb;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar8 + 0x14)) = 0x68;
      break;
    case (int *)0x4:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 0xc;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar8 + 0x14)) = 0x6a;
      break;
    case (int *)0x5:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 0xd;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar8 + 0x14)) = 0x6b;
      break;
    case (int *)0x6:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 0xe;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar8 + 0x14)) = 0x6c;
      break;
    case (int *)0x7:
      uStack_30 = 0;
      piVar12 = (int *)piStack_50[6];
      func_0x005b55f0();
      uStack_14 = 0xf;
      iVar8 = (int)(int *)uStack_30;
      func_0x00803290(1);
      *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar8 + 0x14)) = 0x6d;
      break;
    default:
      goto LAB_00491880;
    }
    *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
    *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
    pcVar2 = *(code **)(*piVar12 + 4);
    _guard_check_icall(&uStack_30,0);
    (*pcVar2)();
    uStack_14 = 0xffffffff;
    piStack_4c = uStack_30._4_4_;
    puVar3 = puStack_20;
    if (uStack_30._4_4_ != (int *)0x0) {
      LOCK();
      iVar8 = uStack_30._4_4_[1] + -1;
      uStack_30._4_4_[1] = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar2 = *(code **)*uStack_30._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar12 = piStack_4c + 2;
        iVar8 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        puVar3 = puStack_20;
        if (iVar8 == 1) {
          pcVar2 = *(code **)(*piStack_4c + 4);
          _guard_check_icall();
          (*pcVar2)();
          puVar3 = puStack_20;
        }
      }
    }
  }
LAB_00491880:
  puStack_20 = puVar3;
  *(undefined1 *)((int)piStack_50 + 0x31) = 1;
LAB_00491884:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00491ad0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  char *pcStack_7c;
  uint uStack_78;
  uint uStack_74;
  char *apcStack_64 [4];
  undefined4 uStack_54;
  uint uStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int *piStack_34;
  undefined8 uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb2355;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_74 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_34 = param_1;
  uStack_24 = uStack_74;
  puVar5 = &stack0xfffffffc;
  if (DAT_0145efc3 != '\0') {
    uStack_30._0_4_ = (int)DAT_0145db28;
    uStack_78 = 0xf;
    uStack_30 = CONCAT44((int)uStack_30,(int)uStack_30);
    pcStack_7c = "[%i] Game::stop";
    uStack_3c = 0;
    pcStack_4c = (char *)0x0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0046bc40();
    iStack_14 = 0;
    uStack_78 = func_0x00485670((int)&uStack_30 + 4);
    iStack_14._0_1_ = 1;
    pcStack_7c = (char *)0x1;
    FUN_005ee340();
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < uStack_50) {
      uStack_78 = uStack_50;
      pcStack_7c = apcStack_64[0];
      func_0x0046b1f0(apcStack_64);
    }
    uStack_54 = 0;
    uStack_50 = 0xf;
    apcStack_64[0] = (char *)((uint)apcStack_64[0] & 0xffffff00);
    iStack_14 = 0xffffffff;
    if (0xf < uStack_38) {
      uStack_78 = uStack_38;
      pcStack_7c = pcStack_4c;
      func_0x0046b1f0(&pcStack_4c);
    }
    uStack_3c = 0;
    uStack_38 = 0xf;
    pcStack_4c = (char *)((uint)pcStack_4c & 0xffffff00);
    puVar5 = puStack_20;
  }
  puStack_20 = puVar5;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    uStack_78 = 0x491c23;
    cVar6 = FUN_008074b0();
    if (cVar6 != '\0') {
      if ((param_1[4] != 0) && (*(char *)(param_1[4] + 0x126) == '\0')) {
        uStack_30 = CONCAT44(&pcStack_7c,(int)uStack_30);
        pcStack_7c = (char *)0x0;
        uStack_78 = 0;
        iStack_14 = 0xffffffff;
        FUN_00493760();
      }
      piVar2 = (int *)param_1[6];
      *(undefined1 *)((int)param_1 + 0x31) = 0;
      uStack_30 = 0;
      uStack_78 = 0x491c7c;
      func_0x005b55f0();
      iStack_14 = 5;
      iVar4 = (int)uStack_30;
      uStack_78 = 1;
      pcStack_7c = (char *)0x491c8f;
      func_0x00803290();
      pcStack_7c = (char *)0x0;
      *(undefined1 *)(iVar4 + 0x1c + *(int *)(iVar4 + 0x14)) = 0x69;
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(&uStack_30);
      (*pcVar3)();
      iStack_14 = 0xffffffff;
      piVar2 = uStack_30._4_4_;
      param_1 = piStack_34;
      if (uStack_30._4_4_ != (int *)0x0) {
        LOCK();
        iVar4 = uStack_30._4_4_[1] + -1;
        uStack_30._4_4_[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)*uStack_30._4_4_;
          uStack_78 = 0x491cd8;
          _guard_check_icall();
          uStack_78 = 0x491cdc;
          (*pcVar3)();
          LOCK();
          piVar1 = piVar2 + 2;
          iVar4 = *piVar1 + -1;
          *piVar1 = iVar4;
          UNLOCK();
          param_1 = piStack_34;
          if (iVar4 == 0) {
            pcVar3 = *(code **)(*piVar2 + 4);
            uStack_78 = 0x491cf3;
            _guard_check_icall();
            uStack_78 = 0x491cf7;
            (*pcVar3)();
            param_1 = piStack_34;
          }
        }
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x31) = 1;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00491d20(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined8 uStack_24;
  int iStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb2395;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = param_2;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && ((int *)*param_2 != (int *)0x0)) {
        pcVar2 = *(code **)(*(int *)*param_2 + 0x20);
        _guard_check_icall();
        cVar5 = (*pcVar2)();
        piVar9 = piStack_18;
        if ((cVar5 == '\0') || ((param_3 == '\0' || (param_1[0x41] < 0x3c1)))) {
          piStack_28 = (int *)param_1[6];
          uVar7 = FUN_005ba040();
          uStack_24 = CONCAT44(uVar7,(int)uStack_24);
          pcVar2 = *(code **)(*(int *)*piVar9 + 0xc);
          _guard_check_icall();
          uVar6 = (*pcVar2)();
          uStack_34 = *(undefined8 *)(*piStack_18 + 0x10);
          uStack_2c = *(undefined4 *)(*piStack_18 + 0x18);
          iStack_1c = 0;
          piStack_18 = (int *)0x0;
          func_0x005b55f0();
          iVar3 = iStack_1c;
          uStack_8 = 1;
          func_0x00803290(1);
          piVar9 = piStack_28;
          *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0x8c;
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
          *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
          FUN_005b5560(&iStack_1c,&uStack_34);
          iVar8 = iStack_1c;
          func_0x00803290(2);
          iVar4 = iStack_1c;
          iVar3 = *(int *)(iVar8 + 0x14);
          *(char *)(iVar3 + 0x1d + iVar8) = (char)((ushort)uVar6 >> 8);
          *(char *)(iVar3 + 0x1c + iVar8) = (char)uVar6;
          *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 2;
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 2;
          func_0x00803290(1);
          *(char *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = (char)((ulonglong)uStack_24 >> 0x20);
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
          pcVar2 = *(code **)(*piVar9 + 4);
          _guard_check_icall(&iStack_1c,0);
          (*pcVar2)();
          piVar9 = piStack_18;
        }
        else {
          piStack_28 = (int *)param_1[6];
          pcVar2 = *(code **)(*(int *)*piStack_18 + 0xc);
          _guard_check_icall();
          uVar7 = (*pcVar2)();
          uStack_24 = 0;
          func_0x005b55f0();
          uStack_8 = 0;
          iVar3 = (int)uStack_24;
          func_0x00803290(1);
          *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0x8d;
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
          *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
          iVar3 = (int)uStack_24;
          func_0x00803290(4);
          iVar8 = *(int *)(iVar3 + 0x14) + iVar3;
          *(char *)(iVar8 + 0x1f) = (char)((uint)uVar7 >> 0x18);
          *(char *)(iVar8 + 0x1e) = (char)((uint)uVar7 >> 0x10);
          *(char *)(iVar8 + 0x1d) = (char)((uint)uVar7 >> 8);
          *(char *)(iVar8 + 0x1c) = (char)uVar7;
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 4;
          *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 4;
          pcVar2 = *(code **)(*piStack_28 + 4);
          _guard_check_icall(&uStack_24,0);
          (*pcVar2)();
          piVar9 = uStack_24._4_4_;
        }
        uStack_8 = 0xffffffff;
        if (piVar9 != (int *)0x0) {
          LOCK();
          iVar3 = piVar9[1] + -1;
          piVar9[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)*piVar9;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            piVar1 = piVar9 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar2 = *(code **)(*piVar9 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00491fd0(int *param_1,int *param_2,int *param_3,int param_4)

{
  undefined8 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  int iStack_24;
  int iStack_20;
  short sStack_1c;
  undefined2 uStack_1a;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb23cd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar7 = 1;
  if (0 < param_4) {
    iVar7 = param_4;
  }
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && (piVar2 = (int *)*param_2, piVar2 != (int *)0x0)) {
        sStack_1c = (short)piVar2[6];
        uStack_1a = (undefined2)((uint)piVar2[6] >> 0x10);
        iStack_24 = (int)*(undefined8 *)(piVar2 + 4);
        iStack_20 = (int)((ulonglong)*(undefined8 *)(piVar2 + 4) >> 0x20);
        if ((*param_3 != iStack_24) ||
           ((param_3[1] != iStack_20 || ((short)param_3[2] != sStack_1c)))) {
          pcVar3 = *(code **)(*piVar2 + 0xc);
          _guard_check_icall();
          uStack_2c = (*pcVar3)();
          pcVar3 = *(code **)(*(int *)*param_2 + 0x20);
          _guard_check_icall();
          cVar5 = (*pcVar3)();
          if (cVar5 != '\0') {
            iStack_20 = 0;
            sStack_1c = 0;
            uStack_1a = 0;
            func_0x0046b930(&iStack_20);
            uStack_2c = 99;
            uStack_8 = 0xffffffff;
            FUN_00468340();
          }
          uVar6 = FUN_005ba040();
          uVar1 = *(undefined8 *)(*param_2 + 0x10);
          uVar4 = *(undefined4 *)(*param_2 + 0x18);
          iStack_24 = (int)uVar1;
          iStack_20 = (int)((ulonglong)uVar1 >> 0x20);
          sStack_1c = (short)uVar4;
          uStack_1a = (undefined2)((uint)uVar4 >> 0x10);
          func_0x005b2c80(&iStack_24,uStack_2c,uVar6,param_3,iVar7);
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00492150(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b2c80(param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



void __thiscall FUN_004921b0(int *param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uStack_1c;
  uint uStack_18;
  undefined2 uStack_14;
  undefined8 uStack_10;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar2 = FUN_008074b0();
    if (cVar2 != '\0') {
      cVar2 = FUN_00498910();
      if (cVar2 != '\0') {
        if ((*param_2 != 0) && (0 < param_3)) {
          uVar1 = *(undefined8 *)(*param_2 + 0x10);
          uStack_10._0_2_ = (ushort)uVar1;
          uStack_1c = (uint)(ushort)uStack_10;
          uStack_10._4_2_ = (ushort)((ulonglong)uVar1 >> 0x20);
          uStack_18 = (uint)uStack_10._4_2_;
          uStack_14 = 0xfe;
          uStack_10 = uVar1;
          FUN_00491fd0(param_2,&uStack_1c,param_3);
        }
      }
    }
  }
  return;
}



void __thiscall FUN_00492240(int *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined2 uVar8;
  int *unaff_FS_OFFSET;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb240d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = param_2;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar7 = FUN_008074b0(uStack_14);
    if (cVar7 != '\0') {
      cVar7 = FUN_00498910();
      if ((cVar7 != '\0') && (*param_2 != 0)) {
        piStack_20 = (int *)param_1[6];
        uStack_24 = FUN_005ba040();
        pcVar2 = *(code **)(*(int *)*param_2 + 0xc);
        _guard_check_icall();
        uVar8 = (*pcVar2)();
        uStack_30 = *(undefined8 *)(*piStack_18 + 0x10);
        uStack_28 = *(undefined4 *)(*piStack_18 + 0x18);
        iStack_1c = 0;
        piStack_18 = (int *)0x0;
        func_0x005b55f0();
        iVar3 = iStack_1c;
        uStack_8 = 0;
        func_0x00803290(1);
        piVar4 = piStack_20;
        *(undefined1 *)(iVar3 + 0x1c + *(int *)(iVar3 + 0x14)) = 0x85;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        FUN_005b5560(&iStack_1c,&uStack_30);
        iVar5 = iStack_1c;
        func_0x00803290(2);
        iVar6 = iStack_1c;
        iVar3 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar3 + 0x1d + iVar5) = (char)((ushort)uVar8 >> 8);
        *(char *)(iVar3 + 0x1c + iVar5) = (char)uVar8;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        func_0x00803290(1);
        *(char *)(iVar6 + 0x1c + *(int *)(iVar6 + 0x14)) = (char)uStack_24;
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
        *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall(&iStack_1c,0);
        (*pcVar2)();
        piVar4 = piStack_18;
        uStack_8 = 0xffffffff;
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar3 = piStack_18[1] + -1;
          piStack_18[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)*piStack_18;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            piVar1 = piVar4 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar2 = *(code **)(*piVar4 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00492400(int *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined2 uVar8;
  int *unaff_FS_OFFSET;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb240d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = param_2;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar7 = FUN_008074b0(uStack_14);
    if (cVar7 != '\0') {
      cVar7 = FUN_00498910();
      if ((cVar7 != '\0') && (*param_2 != 0)) {
        piStack_20 = (int *)param_1[6];
        uStack_24 = FUN_005ba040();
        pcVar2 = *(code **)(*(int *)*param_2 + 0xc);
        _guard_check_icall();
        uVar8 = (*pcVar2)();
        uStack_30 = *(undefined8 *)(*piStack_18 + 0x10);
        uStack_28 = *(undefined4 *)(*piStack_18 + 0x18);
        iStack_1c = 0;
        piStack_18 = (int *)0x0;
        func_0x005b55f0();
        iVar3 = iStack_1c;
        uStack_8 = 0;
        func_0x00803290(1);
        piVar4 = piStack_20;
        *(undefined1 *)(iVar3 + 0x1c + *(int *)(iVar3 + 0x14)) = 0x8b;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        FUN_005b5560(&iStack_1c,&uStack_30);
        iVar5 = iStack_1c;
        func_0x00803290(2);
        iVar6 = iStack_1c;
        iVar3 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar3 + 0x1d + iVar5) = (char)((ushort)uVar8 >> 8);
        *(char *)(iVar3 + 0x1c + iVar5) = (char)uVar8;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        func_0x00803290(1);
        *(char *)(iVar6 + 0x1c + *(int *)(iVar6 + 0x14)) = (char)uStack_24;
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
        *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall(&iStack_1c,0);
        (*pcVar2)();
        piVar4 = piStack_18;
        uStack_8 = 0xffffffff;
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar3 = piStack_18[1] + -1;
          piStack_18[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)*piStack_18;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            piVar1 = piVar4 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar2 = *(code **)(*piVar4 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004925c0(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  uint auStack_50 [6];
  undefined8 uStack_38;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb2455;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if ((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
      && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
     ((cVar3 = FUN_008074b0(uVar4), cVar3 != '\0' &&
      ((cVar3 = FUN_00498910(), cVar3 != '\0' && (iVar1 = *param_2, iVar1 != 0)))))) {
    uStack_38 = *(undefined8 *)(iVar1 + 0x10);
    uStack_30 = *(uint *)(iVar1 + 0x18);
    bVar6 = (int)uStack_38 == 0xffff;
    if ((bVar6) &&
       ((uStack_38._4_4_ = (int)((ulonglong)uStack_38 >> 0x20), bVar6 = uStack_38._4_4_ == 0xffff,
        bVar6 && ((short)uStack_30 == 0xff)))) {
      uStack_38 = 0xffff;
      uStack_30 = uStack_30 & 0xffff0000;
    }
    iStack_2c = param_1[6];
    uStack_24 = func_0x004991b0();
    uStack_28 = FUN_005ba040();
    pcVar2 = *(code **)(*(int *)*param_2 + 0xc);
    _guard_check_icall();
    uVar5 = (*pcVar2)();
    func_0x005b33f0(&uStack_38,uVar5,uStack_28,uStack_24);
    iStack_2c = 0;
    uStack_28 = FUN_005ba040();
    pcVar2 = *(code **)(*(int *)*param_2 + 0xc);
    _guard_check_icall();
    uStack_24 = (*pcVar2)();
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    func_0x0046bc40("onUse",5);
    uStack_14 = 0;
    auStack_50[4] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    auStack_50[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar4 = func_0x0049fb70(auStack_50,&uStack_68,&uStack_38,&uStack_24,&uStack_28,&iStack_2c);
    if (0 < (int)uVar4) {
      func_0x00d66d90(DAT_0145e9f0,~uVar4);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_50[5]) {
      func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
    }
    auStack_50[4] = 0;
    auStack_50[5] = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_54) {
      func_0x0046b1f0(&uStack_68,uStack_68,uStack_54);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00492800(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  uint auStack_48 [8];
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb2495;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
       && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
      ((cVar1 = FUN_008074b0(uVar2), cVar1 != '\0' &&
       ((cVar1 = FUN_00498910(), cVar1 != '\0' && ((short)param_2 != 0)))))) &&
     ((param_2 & 0xffff) < (uint)(DAT_0145d8a4 - DAT_0145d8a0 >> 3))) {
    uStack_28 = 0;
    auStack_48[6] = 0xffff;
    auStack_48[7] = 0;
    func_0x005b33f0(auStack_48 + 6,param_2,0,param_3);
    uStack_24 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    func_0x0046bc40("onUse",5);
    uStack_14 = 0;
    auStack_48[4] = 0;
    auStack_48[0] = 0;
    auStack_48[1] = 0;
    auStack_48[2] = 0;
    auStack_48[3] = 0;
    auStack_48[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar2 = func_0x0049fe80(auStack_48,&uStack_60,auStack_48 + 6,&param_2,&uStack_24,&param_3);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_48[5]) {
      func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
    }
    auStack_48[4] = 0;
    auStack_48[5] = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_4c) {
      func_0x0046b1f0(&uStack_60,uStack_60,uStack_4c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004929e0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_54 [3];
  ulonglong uStack_48;
  uint uStack_40;
  undefined8 uStack_3c;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb24d5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)) &&
       ((cVar3 = FUN_008074b0(uVar4), cVar3 != '\0' &&
        ((cVar3 = FUN_00498910(), cVar3 != '\0' && (iVar1 = *param_2, iVar1 != 0)))))) &&
      (piStack_24 = (int *)*param_3, piStack_24 != (int *)0x0)))) {
    uStack_3c = *(undefined8 *)(iVar1 + 0x10);
    uStack_34 = *(uint *)(iVar1 + 0x18);
    bVar6 = (int)uStack_3c == 0xffff;
    if (((bVar6) &&
        (uStack_3c._4_4_ = (int)((ulonglong)uStack_3c >> 0x20), bVar6 = uStack_3c._4_4_ == 0xffff,
        bVar6)) && ((short)uStack_34 == 0xff)) {
      uStack_3c = 0xffff;
      uStack_34 = uStack_34 & 0xffff0000;
    }
    pcVar2 = *(code **)(*piStack_24 + 0x20);
    _guard_check_icall();
    cVar3 = (*pcVar2)();
    if ((cVar3 == '\0') || ((DAT_0145d0f4 < 0x30c && (cVar3 = FUN_00467460(0x6b), cVar3 == '\0'))))
    {
      iStack_30 = param_1[6];
      iStack_2c = FUN_005ba040();
      pcVar2 = *(code **)(*(int *)*param_3 + 0xc);
      _guard_check_icall();
      uStack_28 = (*pcVar2)();
      piStack_24 = (int *)param_4;
      uStack_48 = *(ulonglong *)(*param_3 + 0x10);
      uStack_40 = *(undefined4 *)(*param_3 + 0x18);
      if (param_4 == 0) {
        piStack_24 = (int *)FUN_005ba040();
      }
      pcVar2 = *(code **)(*(int *)*param_2 + 0xc);
      _guard_check_icall();
      uVar5 = (*pcVar2)();
      func_0x005b3540(&uStack_3c,uVar5,piStack_24,&uStack_48,uStack_28,iStack_2c);
    }
    else {
      iStack_2c = param_1[6];
      pcVar2 = *(code **)(*(int *)*param_3 + 0xc);
      _guard_check_icall();
      uStack_28 = (*pcVar2)();
      piStack_24 = (int *)param_4;
      if (param_4 == 0) {
        piStack_24 = (int *)FUN_005ba040();
      }
      pcVar2 = *(code **)(*(int *)*param_2 + 0xc);
      _guard_check_icall();
      uVar5 = (*pcVar2)();
      func_0x005b36c0(&uStack_3c,uVar5,piStack_24,uStack_28);
    }
    pcVar2 = *(code **)(*(int *)*param_2 + 0xc);
    _guard_check_icall();
    iStack_30 = (*pcVar2)();
    uStack_5c = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0046bc40("onUseWith",9);
    uStack_14 = 0;
    auStack_54[0] = 0;
    auStack_54[1] = 0;
    auStack_54[2] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar4 = func_0x004a0180(auStack_54,&uStack_6c,&uStack_3c,&iStack_30,param_3,&param_4);
    if (0 < (int)uVar4) {
      func_0x00d66d90(DAT_0145e9f0,~uVar4);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
    uStack_48 = uStack_48 & 0xffffffff;
    uStack_40 = 0xf;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_58) {
      func_0x0046b1f0(&uStack_6c,uStack_6c,uStack_58);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00492d00(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint auStack_4c [3];
  ulonglong uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb2515;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if ((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
      && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
     ((cVar2 = FUN_008074b0(uVar3), cVar2 != '\0' &&
      ((cVar2 = FUN_00498910(), cVar2 != '\0' &&
       (piStack_24 = (int *)*param_3, piStack_24 != (int *)0x0)))))) {
    uStack_2c = 0;
    uStack_34 = 0xffff;
    uStack_30 = 0;
    pcVar1 = *(code **)(*piStack_24 + 0x20);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    piVar5 = param_3;
    piStack_24 = (int *)param_1[6];
    if (cVar2 == '\0') {
      uStack_28 = FUN_005ba040();
      pcVar1 = *(code **)(*(int *)*piVar5 + 0xc);
      _guard_check_icall();
      uVar4 = (*pcVar1)();
      piVar5 = param_3;
      uStack_40 = *(ulonglong *)(*param_3 + 0x10);
      uStack_38 = *(undefined4 *)(*param_3 + 0x18);
      func_0x005b3540(&uStack_34,param_2,param_4,&uStack_40,uVar4,uStack_28);
    }
    else {
      pcVar1 = *(code **)(*(int *)*param_3 + 0xc);
      _guard_check_icall();
      uVar4 = (*pcVar1)();
      func_0x005b36c0(&uStack_34,param_2,param_4,uVar4);
      piVar5 = param_3;
    }
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    func_0x0046bc40("onUseWith",9);
    uStack_14 = 0;
    auStack_4c[0] = 0;
    auStack_4c[1] = 0;
    auStack_4c[2] = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar3 = func_0x004a0480(auStack_4c,&uStack_64,&uStack_34,&param_2,piVar5,&param_4);
    if (0 < (int)uVar3) {
      func_0x00d66d90(DAT_0145e9f0,~uVar3);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < uStack_38) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_40 = uStack_40 & 0xffffffff;
    uStack_38 = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_50) {
      func_0x0046b1f0(&uStack_64,uStack_64,uStack_50);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00492f40(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb2566;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = **(int **)(param_1 + 0x20);
  cVar2 = *(char *)(iVar3 + 0xd);
  uStack_18 = uVar7;
  do {
    if (cVar2 != '\0') {
      *param_2 = 0;
      param_2[1] = 0;
LAB_0049302b:
      uStack_8 = 0;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    if (*(int *)(iVar3 + 0x14) != 0) {
      uStack_20 = 0;
      func_0x0046f760(&uStack_20,param_3,param_4,uVar7);
      piVar6 = uStack_20._4_4_;
      if ((int)uStack_20 != 0) {
        param_2[1] = 0;
        *param_2 = (int)uStack_20;
        param_2[1] = (int)uStack_20._4_4_;
        uStack_20 = 0;
        goto LAB_0049302b;
      }
      uStack_8 = 0;
      if (uStack_20._4_4_ != (int *)0x0) {
        LOCK();
        iVar5 = uStack_20._4_4_[1] + -1;
        uStack_20._4_4_[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar4 = *(code **)*uStack_20._4_4_;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          piVar1 = piVar6 + 2;
          iVar5 = *piVar1 + -1;
          *piVar1 = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)(*piVar6 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
    }
    func_0x00499be0();
    cVar2 = *(char *)(iVar3 + 0xd);
  } while( true );
}



undefined4 __thiscall FUN_00493080(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_18;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar3 = FUN_008074b0();
    if (cVar3 != '\0') {
      cVar3 = FUN_00498910();
      if ((cVar3 != '\0') && (*param_2 != 0)) {
        if (*param_3 == 0) {
          uStack_8 = func_0x004991b0();
        }
        else {
          uStack_8 = *(undefined4 *)(*param_3 + 0x10);
        }
        iStack_c = param_1[6];
        uVar4 = FUN_005ba040();
        pcVar1 = *(code **)(*(int *)*param_2 + 0xc);
        _guard_check_icall();
        uVar5 = (*pcVar1)();
        uVar2 = uStack_8;
        uStack_18 = *(undefined8 *)(*param_2 + 0x10);
        uStack_10 = *(undefined4 *)(*param_2 + 0x18);
        func_0x005b33f0(&uStack_18,uVar5,uVar4,uStack_8);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}



void __thiscall FUN_00493160(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_18);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if ((cVar6 != '\0') && (*param_2 != 0)) {
        piVar2 = (int *)param_1[6];
        uVar3 = *(undefined4 *)(*param_2 + 0x10);
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar5 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(iVar5 + 0x1c + *(int *)(iVar5 + 0x14)) = 0x88;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
        iVar5 = (int)uStack_20;
        func_0x00803290(1);
        *(char *)(*(int *)(iVar5 + 0x14) + 0x1c + iVar5) = (char)uVar3;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar5 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)*uStack_20._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004932c0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_18);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if ((cVar6 != '\0') && (*param_2 != 0)) {
        piVar2 = (int *)param_1[6];
        uVar3 = *(undefined4 *)(*param_2 + 0x10);
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar5 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(iVar5 + 0x1c + *(int *)(iVar5 + 0x14)) = 0x87;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
        iVar5 = (int)uStack_20;
        func_0x00803290(1);
        *(char *)(*(int *)(iVar5 + 0x14) + 0x1c + iVar5) = (char)uVar3;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar5 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)*uStack_20._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00493420(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_18);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if (cVar6 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        uVar3 = *(undefined4 *)(*param_2 + 0x10);
        func_0x005b55f0();
        uStack_8 = 0;
        iVar5 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar5 + 0x14) + 0x1c + iVar5) = 0xca;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
        iVar5 = (int)uStack_20;
        func_0x00803290(1);
        *(char *)(*(int *)(iVar5 + 0x14) + 0x1c + iVar5) = (char)uVar3;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar5 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)*uStack_20._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * __thiscall FUN_00493570(int *param_1,int *param_2,int *param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eb25e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  piVar6 = &iStack_10;
  if (((((char)param_1[0xc] != '\0') && (piVar6 = (int *)*param_1, piVar6 != (int *)0x0)) &&
      ((char)piVar6[0x13] != '\0')) &&
     (((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)) &&
      ((piVar6 = (int *)FUN_008074b0(uVar5), (char)piVar6 != '\0' &&
       ((piVar6 = (int *)FUN_00498910(), (char)piVar6 != '\0' &&
        (piVar6 = param_2, param_2 != (int *)*param_1)))))))) {
    if (param_2 != (int *)0x0) {
      if (param_2 == (int *)param_1[2]) {
        uStack_1c = 0;
        piStack_18 = (int *)0x0;
        iStack_8._0_1_ = 1;
        func_0x0046ffa0(&uStack_1c);
        piVar6 = piStack_18;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar4 = piStack_18[1] + -1;
          piStack_18[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*piStack_18;
            _guard_check_icall();
            (*pcVar3)();
            LOCK();
            piVar1 = piVar6 + 2;
            iVar4 = *piVar1 + -1;
            *piVar1 = iVar4;
            UNLOCK();
            if (iVar4 == 0) {
              pcVar3 = *(code **)(*piVar6 + 4);
              _guard_check_icall();
              (*pcVar3)();
            }
          }
        }
      }
      if (((param_2 != (int *)0x0) && (param_1[4] != 0)) && (*(char *)(param_1[4] + 0x126) == '\0'))
      {
        FUN_0048d890();
      }
    }
    func_0x00498d60(&param_2);
    piVar6 = (int *)FUN_004adbf0();
    if (param_1[0x41] < 0x3c3) {
      param_1[0x1a] = param_1[0x1a] + 1;
    }
    else if (param_2 != (int *)0x0) {
      pcVar3 = *(code **)(*param_2 + 0xc);
      _guard_check_icall();
      piVar6 = (int *)(*pcVar3)();
      param_1[0x1a] = (int)piVar6;
    }
    if (param_4 == '\0') {
      piStack_18 = (int *)param_1[6];
      iVar4 = param_1[0x1a];
      if (param_2 == (int *)0x0) {
        uVar7 = 0;
      }
      else {
        pcVar3 = *(code **)(*param_2 + 0xc);
        _guard_check_icall();
        uVar7 = (*pcVar3)();
      }
      piVar6 = (int *)func_0x005b3c50(uVar7,iVar4);
    }
  }
  piVar1 = param_3;
  iStack_8 = 0xffffffff;
  if (param_3 != (int *)0x0) {
    LOCK();
    piVar2 = param_3 + 1;
    iVar4 = *piVar2;
    piVar6 = (int *)*piVar2;
    *piVar2 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*param_3;
      _guard_check_icall();
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar2 = piVar1 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int * __thiscall FUN_00493760(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eb2625;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  piVar6 = &iStack_10;
  if ((((((char)param_1[0xc] == '\0') || (piVar2 = (int *)*param_1, piVar2 == (int *)0x0)) ||
       ((char)piVar2[0x13] == '\0')) ||
      ((*(char *)((int)param_1 + 0x32) != '\0' || (param_1[6] == 0)))) ||
     ((piVar6 = (int *)FUN_008074b0(uVar5), (char)piVar6 == '\0' ||
      (piVar6 = param_2, param_2 == piVar2)))) goto LAB_004938e4;
  if (param_2 != (int *)0x0) {
    if (param_2 == (int *)param_1[4]) {
      uStack_1c = 0;
      piStack_18 = (int *)0x0;
      iStack_8._0_1_ = 3;
      func_0x0046ffa0(&uStack_1c);
      piVar6 = piStack_18;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar4 = piStack_18[1] + -1;
        piStack_18[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)*piStack_18;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar2 = piVar6 + 2;
          iVar4 = *piVar2 + -1;
          *piVar2 = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)(*piVar6 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
    }
    if (((param_2 != (int *)0x0) && (param_1[2] != 0)) && (*(char *)(param_1[2] + 0x126) == '\0')) {
      FUN_0048d830();
    }
  }
  func_0x00498f20(&param_2);
  FUN_004adbf0();
  if (param_1[0x41] < 0x3c3) {
    param_1[0x1a] = param_1[0x1a] + 1;
LAB_004938ad:
    iStack_14 = param_1[0x1a];
  }
  else {
    if (param_2 == (int *)0x0) goto LAB_004938ad;
    pcVar3 = *(code **)(*param_2 + 0xc);
    _guard_check_icall();
    iStack_14 = (*pcVar3)();
    param_1[0x1a] = iStack_14;
  }
  piStack_18 = (int *)param_1[6];
  if (param_2 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    pcVar3 = *(code **)(*param_2 + 0xc);
    _guard_check_icall();
    uVar7 = (*pcVar3)();
  }
  piVar6 = (int *)func_0x005b3db0(uVar7,iStack_14);
LAB_004938e4:
  piVar2 = param_3;
  iStack_8 = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x31) = 1;
  if (param_3 != (int *)0x0) {
    LOCK();
    piVar1 = param_3 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*param_3;
      _guard_check_icall();
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void __fastcall FUN_00493940(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint auStack_64 [13];
  int *piStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb267d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puVar4 = &stack0xfffffffc;
  if (((((char)param_1[0xc] != '\0') && (puVar4 = &stack0xfffffffc, *param_1 != 0)) &&
      (puVar4 = &stack0xfffffffc, *(char *)(*param_1 + 0x4c) != '\0')) &&
     ((puVar4 = &stack0xfffffffc, *(char *)((int)param_1 + 0x32) == '\0' &&
      (puVar4 = &stack0xfffffffc, param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_24);
    puVar4 = puStack_20;
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      puVar4 = puStack_20;
      if (cVar5 != '\0') {
        if ((param_1[4] != 0) && (*(char *)(param_1[4] + 0x126) == '\0')) {
          auStack_64[0xc] = 0;
          piStack_30 = (int *)0x0;
          uStack_14 = 0;
          func_0x00498f20(auStack_64 + 0xc);
          uStack_14 = 0xffffffff;
          if (piStack_30 != (int *)0x0) {
            LOCK();
            iVar3 = piStack_30[1] + -1;
            piStack_30[1] = iVar3;
            UNLOCK();
            if (iVar3 == 0) {
              pcVar1 = *(code **)*piStack_30;
              _guard_check_icall();
              (*pcVar1)();
              LOCK();
              iVar3 = piStack_30[2] + -1;
              piStack_30[2] = iVar3;
              UNLOCK();
              if (iVar3 == 0) {
                pcVar1 = *(code **)(*piStack_30 + 4);
                _guard_check_icall();
                (*pcVar1)();
              }
            }
          }
        }
        if ((param_1[2] != 0) && (*(char *)(param_1[2] + 0x126) == '\0')) {
          auStack_64[0xc] = 0;
          piStack_30 = (int *)0x0;
          uStack_14 = 1;
          func_0x00498d60(auStack_64 + 0xc);
          uStack_14 = 0xffffffff;
          if (piStack_30 != (int *)0x0) {
            LOCK();
            iVar3 = piStack_30[1] + -1;
            piStack_30[1] = iVar3;
            UNLOCK();
            if (iVar3 == 0) {
              pcVar1 = *(code **)*piStack_30;
              _guard_check_icall();
              (*pcVar1)();
              LOCK();
              iVar3 = piStack_30[2] + -1;
              piStack_30[2] = iVar3;
              UNLOCK();
              if (iVar3 == 0) {
                pcVar1 = *(code **)(*piStack_30 + 4);
                _guard_check_icall();
                (*pcVar1)();
              }
            }
          }
        }
        FUN_004adbf0();
        piVar2 = (int *)param_1[6];
        uStack_2c = 0;
        func_0x005b55f0();
        uStack_14 = 2;
        iVar3 = (int)uStack_2c;
        func_0x00803290(1);
        uVar8 = 0;
        *(undefined1 *)(iVar3 + 0x1c + *(int *)(iVar3 + 0x14)) = 0xbe;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        pcVar1 = *(code **)(*piVar2 + 4);
        puVar7 = &uStack_2c;
        _guard_check_icall(puVar7,0);
        (*pcVar1)();
        uStack_14 = 0xffffffff;
        piStack_30 = uStack_2c._4_4_;
        if (uStack_2c._4_4_ != (int *)0x0) {
          LOCK();
          iVar3 = uStack_2c._4_4_[1] + -1;
          uStack_2c._4_4_[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar1 = *(code **)*uStack_2c._4_4_;
            _guard_check_icall(puVar7,uVar8);
            (*pcVar1)();
            LOCK();
            piVar2 = piStack_30 + 2;
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar1 = *(code **)(*piStack_30 + 4);
              _guard_check_icall(puVar7,uVar8);
              (*pcVar1)();
            }
          }
        }
        auStack_64[4] = 0;
        auStack_64[5] = 0;
        auStack_64[0] = 0;
        auStack_64[1] = 0;
        auStack_64[2] = 0;
        auStack_64[3] = 0;
        func_0x0046bc40("onCancelAttackAndFollow",0x17);
        uStack_14 = 3;
        auStack_64[10] = 0;
        auStack_64[6] = 0;
        auStack_64[7] = 0;
        auStack_64[8] = 0;
        auStack_64[9] = 0;
        auStack_64[0xb] = 0;
        func_0x0046bc40("g_game",6);
        uStack_14 = CONCAT31(uStack_14._1_3_,4);
        uVar6 = func_0x0049b8f0(auStack_64 + 6,auStack_64);
        if (0 < (int)uVar6) {
          func_0x00d66d90(DAT_0145e9f0,~uVar6);
        }
        uStack_14 = CONCAT31(uStack_14._1_3_,3);
        if (0xf < auStack_64[0xb]) {
          func_0x0046b1f0(auStack_64 + 6,auStack_64[6],auStack_64[0xb]);
        }
        auStack_64[10] = 0;
        auStack_64[0xb] = 0xf;
        auStack_64[6] = auStack_64[6] & 0xffffff00;
        uStack_14 = 0xffffffff;
        if (0xf < auStack_64[5]) {
          func_0x0046b1f0(auStack_64,auStack_64[0],auStack_64[5]);
        }
        auStack_64[4] = 0;
        auStack_64[5] = 0xf;
        auStack_64[0] = auStack_64[0] & 0xffffff00;
        puVar4 = puStack_20;
      }
    }
  }
  puStack_20 = puVar4;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00493c50(int *param_1,int param_2)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if ((cVar1 != '\0') && (*(int *)(param_2 + 0x10) != 0)) {
        FUN_00493cb0(1,0,param_2);
      }
    }
  }
  return;
}



void __thiscall FUN_00493cb0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb26bd;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if ((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
      && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
     ((cVar3 = FUN_008074b0(uVar4), cVar3 != '\0' &&
      ((cVar3 = FUN_00498910(), cVar3 != '\0' && (*(int *)(param_4 + 0x10) != 0)))))) {
    iVar1 = *param_1;
    uStack_2c = *(undefined8 *)(iVar1 + 0x10);
    uVar2 = *(undefined4 *)(iVar1 + 0x50);
    uStack_24 = *(undefined4 *)(iVar1 + 0x18);
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    func_0x0046bc40(&DAT_0112e1b4,0);
    uStack_14 = 0;
    func_0x005b3820(param_2,param_3,&uStack_44,param_4,&uStack_2c,uVar2);
    uStack_14 = 0xffffffff;
    if (0xf < uStack_30) {
      func_0x0046b1f0(&uStack_44,uStack_44,uStack_30);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00493df0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uStack_14;
  undefined4 uStack_c;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar2 = FUN_008074b0();
    if (cVar2 != '\0') {
      cVar2 = FUN_00498910();
      if (((cVar2 != '\0') && (*(int *)(param_3 + 0x10) != 0)) && (*(int *)(param_4 + 0x10) != 0)) {
        iVar1 = *param_1;
        uStack_c = *(undefined4 *)(iVar1 + 0x18);
        uStack_14 = *(undefined8 *)(iVar1 + 0x10);
        func_0x005b3820(param_2,0,param_3,param_4,&uStack_14,*(undefined4 *)(iVar1 + 0x50));
      }
    }
  }
  return;
}



void __thiscall FUN_00493e70(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && (*(int *)(param_2 + 0x10) != 0)) {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x9a;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00493fb0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x97;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004940e0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_18);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if (cVar6 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar3 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0x98;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        iVar5 = (int)uStack_20;
        func_0x00803290(2);
        iVar3 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar3 + 0x1d + iVar5) = (char)((uint)param_2 >> 8);
        *(char *)(iVar3 + 0x1c + iVar5) = (char)param_2;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar3 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar4 = *(code **)*uStack_20._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00494230(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_18);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if (cVar6 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar3 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0x99;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        iVar5 = (int)uStack_20;
        func_0x00803290(2);
        iVar3 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar3 + 0x1d + iVar5) = (char)((uint)param_2 >> 8);
        *(char *)(iVar3 + 0x1c + iVar5) = (char)param_2;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar3 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar4 = *(code **)*uStack_20._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00494380(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x9e;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004944b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xaa;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004945e0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && (*(int *)(param_2 + 0x10) != 0)) {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xab;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00494720(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && (*(int *)(param_2 + 0x10) != 0)) {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xac;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00494860(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xa3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004949c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xa4;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00494b20(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xa5;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00494c80(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xa6;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00494de0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xa7;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00494f10(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xa8;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        if (DAT_0145d0f4 < 0x38e) {
          iVar4 = (int)uStack_20;
          func_0x00803290(1);
          *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        }
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00495080(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xd2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004951b0(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b3f10(param_2);
      }
    }
  }
  return;
}



void __thiscall FUN_00495200(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && (*(int *)(param_2 + 0x10) != 0)) {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xdc;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00495340(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb2738;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_18);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if (cVar6 != '\0') {
        func_0x004a0d30(auStack_24,&param_2);
        iVar4 = param_2;
        if (((*(char *)((int)uStack_20._4_4_ + 0xd) == '\0') &&
            (*(int *)((int)uStack_20._4_4_ + 0x10) <= param_2)) &&
           (uStack_20._4_4_ != (int *)param_1[10])) {
          uVar7 = func_0x0049ad60(uStack_20._4_4_);
          uStack_8 = 0xffffffff;
          func_0x00490010();
          func_0x008ab812(uVar7,0x50);
          piVar2 = (int *)param_1[6];
          uStack_20 = 0;
          func_0x005b55f0();
          uStack_8 = 1;
          iVar5 = (int)uStack_20;
          func_0x00803290(1);
          *(undefined1 *)(*(int *)(iVar5 + 0x14) + 0x1c + iVar5) = 0xdd;
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
          *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
          iVar5 = (int)uStack_20;
          func_0x00803290(4);
          iVar8 = *(int *)(iVar5 + 0x14) + iVar5;
          *(char *)(iVar8 + 0x1f) = (char)((uint)iVar4 >> 0x18);
          *(char *)(iVar8 + 0x1e) = (char)((uint)iVar4 >> 0x10);
          *(char *)(iVar8 + 0x1d) = (char)((uint)iVar4 >> 8);
          *(char *)(iVar8 + 0x1c) = (char)iVar4;
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 4;
          *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 4;
          pcVar3 = *(code **)(*piVar2 + 4);
          _guard_check_icall(&uStack_20,0);
          (*pcVar3)();
          uStack_8 = 0xffffffff;
          piVar2 = uStack_20._4_4_;
          if (uStack_20._4_4_ != (int *)0x0) {
            LOCK();
            iVar4 = uStack_20._4_4_[1] + -1;
            uStack_20._4_4_[1] = iVar4;
            UNLOCK();
            if (iVar4 == 0) {
              pcVar3 = *(code **)*uStack_20._4_4_;
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
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00495500(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int aiStack_14 [4];
  
  puVar1 = param_3;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar2 = FUN_008074b0();
    if (cVar2 != '\0') {
      cVar2 = FUN_00498910();
      if (cVar2 != '\0') {
        func_0x004a0d30(aiStack_14,&param_2);
        if (((*(char *)(aiStack_14[0] + 0xd) == '\0') && (*(int *)(aiStack_14[0] + 0x10) <= param_2)
            ) && (aiStack_14[0] != param_1[10])) {
          iVar3 = func_0x004997d0(&param_2);
          if ((undefined4 *)(iVar3 + 8) != puVar1) {
            puVar5 = puVar1;
            if (0xf < (uint)puVar1[5]) {
              puVar5 = (undefined4 *)*puVar1;
            }
            func_0x0046a660(puVar5,puVar1[4]);
          }
          iVar3 = func_0x004997d0(&param_2);
          *(undefined4 *)(iVar3 + 4) = param_4;
          puVar4 = (undefined1 *)func_0x004997d0(&param_2);
          *puVar4 = (char)param_5;
          if ((param_1[0x35] & 0x100000U) != 0) {
            func_0x005b4580(param_2,puVar1,param_4,param_5);
          }
        }
      }
    }
  }
  return;
}



void __thiscall FUN_00495600(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb21b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if ((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
      && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
     ((cVar1 = FUN_008074b0(uVar2), cVar1 != '\0' &&
      ((cVar1 = FUN_00498910(), cVar1 != '\0' && (param_1[0x1e] != param_2)))))) {
    param_1[0x1e] = param_2;
    func_0x005b3af0(param_1[0x1d],param_2,(char)param_1[0x24],param_1[0x1f]);
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x0046bc40("onChaseModeChange",0x11);
    uStack_14 = 0;
    auStack_38[4] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar2 = func_0x0049c0e0(auStack_38,&uStack_50,&param_2);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&uStack_50,uStack_50,uStack_3c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004957a0(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb21b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if ((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
      && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
     ((cVar1 = FUN_008074b0(uVar2), cVar1 != '\0' &&
      ((cVar1 = FUN_00498910(), cVar1 != '\0' && (param_1[0x1d] != param_2)))))) {
    param_1[0x1d] = param_2;
    func_0x005b3af0(param_2,param_1[0x1e],(char)param_1[0x24],param_1[0x1f]);
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x0046bc40("onFightModeChange",0x11);
    uStack_14 = 0;
    auStack_38[4] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar2 = func_0x0049c0e0(auStack_38,&uStack_50,&param_2);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&uStack_50,uStack_50,uStack_3c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00495940(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb21b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if ((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
      && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
     ((cVar1 = FUN_008074b0(uVar2), cVar1 != '\0' &&
      ((cVar1 = FUN_00498910(), cVar1 != '\0' && ((char)param_1[0x24] != (char)param_2)))))) {
    *(char *)(param_1 + 0x24) = (char)param_2;
    func_0x005b3af0(param_1[0x1d],param_1[0x1e],param_2,param_1[0x1f]);
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x0046bc40("onSafeFightChange",0x11);
    uStack_14 = 0;
    auStack_38[4] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar2 = func_0x0049b620(auStack_38,&uStack_50,&param_2);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&uStack_50,uStack_50,uStack_3c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00495ae0(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb21b5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (((((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0'))
       && ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) &&
      ((cVar1 = FUN_008074b0(uVar2), cVar1 != '\0' &&
       ((cVar1 = FUN_00498910(), cVar1 != '\0' && ((param_1[0x35] & 0x40000U) != 0)))))) &&
     (param_1[0x1f] != param_2)) {
    param_1[0x1f] = param_2;
    func_0x005b3af0(param_1[0x1d],param_1[0x1e],
                    CONCAT31((int3)((param_1[0x35] & 0x40000U) >> 8),(char)param_1[0x24]),param_2);
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x0046bc40("onPVPModeChange",0xf);
    uStack_14 = 0;
    auStack_38[4] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uVar2 = func_0x0049c0e0(auStack_38,&uStack_50,&param_2);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&uStack_50,uStack_50,uStack_3c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00495ca0(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar3 = FUN_008074b0();
    if (cVar3 != '\0') {
      cVar3 = FUN_00498910();
      if (cVar3 != '\0') {
        param_2 = (int *)*param_2;
        if (param_2 != (int *)0x0) {
          iVar2 = param_2[0xd];
          pcVar1 = *(code **)(*param_2 + 0xc);
          _guard_check_icall();
          uVar4 = (*pcVar1)();
          func_0x005b2e10(uVar4,(short)iVar2);
        }
      }
    }
  }
  return;
}



void __thiscall
FUN_00495d20(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar3 = FUN_008074b0();
    if (cVar3 != '\0') {
      cVar3 = FUN_00498910();
      if (cVar3 != '\0') {
        param_2 = (int *)*param_2;
        if (param_2 != (int *)0x0) {
          iVar2 = param_2[0xd];
          pcVar1 = *(code **)(*param_2 + 0xc);
          _guard_check_icall();
          uVar4 = (*pcVar1)();
          func_0x005b2f60(uVar4,(short)iVar2,param_3,param_4,param_5);
        }
      }
    }
  }
  return;
}



void __thiscall FUN_00495da0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar3 = FUN_008074b0();
    if (cVar3 != '\0') {
      cVar3 = FUN_00498910();
      if (cVar3 != '\0') {
        param_2 = (int *)*param_2;
        if (param_2 != (int *)0x0) {
          iVar2 = param_2[0xd];
          pcVar1 = *(code **)(*param_2 + 0xc);
          _guard_check_icall();
          uVar4 = (*pcVar1)();
          func_0x005b3100(uVar4,(short)iVar2,param_3,param_4);
        }
      }
    }
  }
  return;
}



void __fastcall FUN_00495e20(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x7c;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00495f50(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_14;
  undefined4 uStack_c;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar2 = FUN_008074b0();
    if (cVar2 != '\0') {
      cVar2 = FUN_00498910();
      if (((cVar2 != '\0') && (*param_2 != 0)) && ((int *)*param_3 != (int *)0x0)) {
        pcVar1 = *(code **)(*(int *)*param_3 + 0xc);
        _guard_check_icall();
        uVar3 = (*pcVar1)();
        uVar4 = FUN_005ba040();
        pcVar1 = *(code **)(*(int *)*param_2 + 0xc);
        _guard_check_icall();
        uVar5 = (*pcVar1)();
        uStack_14 = *(undefined8 *)(*param_2 + 0x10);
        uStack_c = *(undefined4 *)(*param_2 + 0x18);
        func_0x005b3290(&uStack_14,uVar5,uVar4,uVar3);
      }
    }
  }
  return;
}



void __thiscall FUN_00496030(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x7e;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00496190(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x7f;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004962c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x80;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004963f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb276d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x89;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_1c;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        FUN_00803010(param_3);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00496560(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb27ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x8a;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        FUN_00803010(param_4);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004966f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x9b;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00496830(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x9c;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00496970(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x9d;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00496aa0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xe6;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        if (1000 < DAT_0145d0f4) {
          iVar4 = (int)uStack_20;
          func_0x00803290(1);
          *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 3;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        }
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00496c00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b46f0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  return;
}



void __thiscall
FUN_00496c60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb27ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(param_1 + 0x18);
  uStack_1c = 0;
  func_0x005b55f0(uStack_14);
  uStack_8 = 0;
  iVar4 = (int)uStack_1c;
  func_0x00803290(1);
  *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xe8;
  *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
  *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  FUN_00803010(param_2);
  FUN_00803010(param_3);
  FUN_00803010(param_4);
  FUN_00803010(param_5);
  uVar6 = 0;
  pcVar3 = *(code **)(*piVar2 + 4);
  puVar5 = &uStack_1c;
  _guard_check_icall(puVar5,0);
  (*pcVar3)();
  uStack_8 = 0xffffffff;
  piVar2 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar4 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar5,uVar6);
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(puVar5,uVar6);
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00496d80(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xf0;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00496eb0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_18);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if (cVar6 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar3 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0xf1;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        iVar5 = (int)uStack_20;
        func_0x00803290(2);
        iVar3 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar3 + 0x1d + iVar5) = (char)((uint)param_2 >> 8);
        *(char *)(iVar3 + 0x1c + iVar5) = (char)param_2;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar3 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar4 = *(code **)*uStack_20._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497000(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  if ((((*param_2 != 0) && ((char)param_1[0xc] != '\0')) && (*param_1 != 0)) &&
     (((*(char *)(*param_1 + 0x4c) != '\0' && (*(char *)((int)param_1 + 0x32) == '\0')) &&
      (param_1[6] != 0)))) {
    cVar3 = FUN_008074b0();
    if (cVar3 != '\0') {
      cVar3 = FUN_00498910();
      if (cVar3 != '\0') {
        iVar2 = ((int *)*param_2)[0xd];
        pcVar1 = *(code **)(*(int *)*param_2 + 0xc);
        _guard_check_icall();
        uVar4 = (*pcVar1)();
        func_0x005b2b30(uVar4,(short)iVar2);
      }
    }
  }
  return;
}



void __thiscall FUN_00497080(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b2b30(param_2,param_3);
      }
    }
  }
  return;
}



void __thiscall FUN_004970d0(int *param_1,undefined1 param_2)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b42f0(param_2,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      }
    }
  }
  return;
}



void __thiscall
FUN_00497130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b42f0(param_2,param_3,param_4,param_5,param_6,param_7);
      }
    }
  }
  return;
}



void __thiscall FUN_00497190(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb276d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_14);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if (cVar6 != '\0') {
        piVar2 = (int *)param_1[6];
        uVar7 = FUN_004a8880();
        pcVar3 = *(code **)(*(int *)*param_2 + 0xc);
        _guard_check_icall();
        uVar8 = (*pcVar3)();
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xf3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(iVar4 + 0x1c + *(int *)(iVar4 + 0x14)) = uVar7;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar5 = (int)uStack_1c;
        func_0x00803290(2);
        iVar4 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar4 + 0x1d + iVar5) = (char)((ushort)uVar8 >> 8);
        *(char *)(iVar4 + 0x1c + iVar5) = (char)uVar8;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497340(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xf9;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_4;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004974e0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && (piVar2 = (int *)param_1[6], (DAT_0145d0c4 & 0x4000000) != 0)) {
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xcb;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        FUN_005b5560(&uStack_20,param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497630(int *param_1,undefined1 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_14);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if ((cVar6 != '\0') && (piVar2 = (int *)param_1[6], (DAT_0145d0c4 & 0x100) != 0)) {
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar3 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0xcc;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        iVar3 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = param_2;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        iVar5 = (int)uStack_1c;
        func_0x00803290(2);
        iVar3 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar3 + 0x1d + iVar5) = (char)((uint)param_3 >> 8);
        *(char *)(iVar3 + 0x1c + iVar5) = (char)param_3;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar3 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar4 = *(code **)*uStack_1c._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004977c0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb27ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xfc;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(char *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = (char)param_3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        if (param_3 == 1) {
          FUN_00803010(param_4);
        }
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497960(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b4870(param_2,param_3);
      }
    }
  }
  return;
}



void __thiscall FUN_004979b0(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xfb;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        if ((DAT_0145d0c8 & 0x800) != 0) {
          iVar4 = (int)uStack_1c;
          func_0x00803290(1);
          *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_3;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        }
        FUN_00803010(param_2);
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497b10(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xfa;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        if ((DAT_0145d0c8 & 0x800) != 0) {
          iVar4 = (int)uStack_20;
          func_0x00803290(1);
          *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_2;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        }
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497c70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar6 = FUN_008074b0(uStack_14);
    if (cVar6 != '\0') {
      cVar6 = FUN_00498910();
      if (cVar6 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar3 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0xef;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        FUN_00803010(param_2);
        iVar5 = (int)uStack_1c;
        func_0x00803290(2);
        iVar3 = *(int *)(iVar5 + 0x14);
        *(char *)(iVar3 + 0x1d + iVar5) = (char)((uint)param_3 >> 8);
        *(char *)(iVar3 + 0x1c + iVar5) = (char)param_3;
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 2;
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 2;
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar4)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar3 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar4 = *(code **)*uStack_1c._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497dd0(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xfd;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00497f20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        func_0x005b4a10(param_2,param_3,param_4);
      }
    }
  }
  return;
}



void __fastcall FUN_00497f70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xed;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004980a0(int *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xd5;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(4);
        iVar6 = *(int *)(iVar4 + 0x14) + iVar4;
        *(char *)(iVar6 + 0x1f) = (char)((uint)param_3 >> 0x18);
        *(char *)(iVar6 + 0x1e) = (char)((uint)param_3 >> 0x10);
        *(char *)(iVar6 + 0x1d) = (char)((uint)param_3 >> 8);
        *(char *)(iVar6 + 0x1c) = (char)param_3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 4;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 4;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_4;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00498240(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_18);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_20 = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xd6;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_20;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_20,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_20._4_4_;
        if (uStack_20._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_20._4_4_[1] + -1;
          uStack_20._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_20._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00498390(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if (cVar5 != '\0') {
        piVar2 = (int *)param_1[6];
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0xd7;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004984c0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  char cVar5;
  undefined8 uVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    if ((*(int *)(iVar2 + 0x2c) == 0) && (*(int *)(iVar2 + 0x14) == 0)) {
      if (*(int *)(iVar2 + 0x44) == 0) goto LAB_004985ca;
      cVar5 = *(char *)(*(int *)(iVar2 + 0x44) + 0x238);
    }
    else {
      cVar5 = *(char *)(iVar2 + 0x10) == '\0';
    }
    if ((cVar5 != '\0') && (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x40))) {
      *(undefined1 *)(param_1 + 0x31) = 0;
      uStack_1c = 0;
      func_0x005b55f0(uStack_14);
      uStack_8 = 0;
      iVar2 = (int)uStack_1c;
      func_0x00803290(1);
      *(undefined1 *)(*(int *)(iVar2 + 0x14) + 0x1c + iVar2) = 0x1d;
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
      FUN_00807510(&uStack_1c,0);
      uStack_8 = 0xffffffff;
      piVar4 = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar2 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)*uStack_1c._4_4_;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar1 = piVar4 + 2;
          iVar2 = *piVar1 + -1;
          *piVar1 = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar3 = *(code **)(*piVar4 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *(undefined1 *)(param_1 + 0x31) = 1;
      uVar6 = FUN_0083f570();
      *(undefined8 *)(param_1 + 0x58) = uVar6;
    }
  }
LAB_004985ca:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004985f0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  char cVar5;
  undefined8 uVar6;
  undefined **appuStack_58 [9];
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [8];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb284d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (DAT_0145d008 != 0) {
    if ((*(int *)(DAT_0145d008 + 0x2c) == 0) && (*(int *)(DAT_0145d008 + 0x14) == 0)) {
      if (*(int *)(DAT_0145d008 + 0x44) == 0) goto LAB_00498775;
      cVar5 = *(char *)(*(int *)(DAT_0145d008 + 0x44) + 0x238);
    }
    else {
      cVar5 = *(char *)(DAT_0145d008 + 0x10) == '\0';
    }
    if (cVar5 != '\0') {
      DAT_012bc280 = DAT_012bc280 + 1;
      uVar6 = FUN_0083f570(uVar2);
      puVar3 = (undefined8 *)func_0x00499660(extraout_ECX);
      *puVar3 = uVar6;
      func_0x005b2840(DAT_012bc280,DAT_0145d028,DAT_0145dc9c);
      uVar4 = DAT_0145d060;
      pppuStack_34 = appuStack_58;
      appuStack_58[0] = std::_Func_impl_no_alloc<>::vftable;
      uStack_8 = 1;
      auStack_30[4] = 0;
      auStack_30[0] = 0;
      auStack_30[1] = 0;
      auStack_30[2] = 0;
      auStack_30[3] = 0;
      auStack_30[5] = 0;
      func_0x0046bc40("Game::newPing",0xd);
      uStack_8._0_1_ = 2;
      uVar4 = FUN_005e4dd0(auStack_18,auStack_30,appuStack_58,uVar4);
      uStack_8._0_1_ = 3;
      func_0x0046ffa0(uVar4);
      uStack_8._0_1_ = 2;
      FUN_00468340();
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (0xf < auStack_30[5]) {
        func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
      }
      auStack_30[4] = 0;
      auStack_30[5] = 0xf;
      auStack_30[0] = auStack_30[0] & 0xffffff00;
      uStack_8 = 0xffffffff;
      if (pppuStack_34 != (undefined ***)0x0) {
        pcVar1 = (code *)(*pppuStack_34)[4];
        _guard_check_icall(pppuStack_34 != appuStack_58);
        (*pcVar1)();
      }
    }
  }
LAB_00498775:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00498790(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar5 = FUN_008074b0(uStack_14);
    if (cVar5 != '\0') {
      cVar5 = FUN_00498910();
      if ((cVar5 != '\0') && (piVar2 = (int *)param_1[6], (DAT_0145d0c0 & 0x40000000) != 0)) {
        uStack_1c = 0;
        func_0x005b55f0();
        uStack_8 = 0;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = 0x42;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_2;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        iVar4 = (int)uStack_1c;
        func_0x00803290(1);
        *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x1c + iVar4) = param_3;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(&uStack_1c,0);
        (*pcVar3)();
        uStack_8 = 0xffffffff;
        piVar2 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar4 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*uStack_1c._4_4_;
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
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



uint __fastcall FUN_00498910(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb2885;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (((((*(uint *)(param_1 + 0xdc) & 8) != 0) && (*(char *)(param_1 + 0x31) != '\0')) &&
      (DAT_0145e9f8 != 0)) && ((DAT_0145dc80 == '\0' && (DAT_0145dbad == '\0')))) {
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("caught a lua call to a bot protected game function, the call was cancelled",
                    0x4a,uVar1);
    iStack_14 = 0;
    uVar2 = func_0x00778990(auStack_50,&uStack_38,0);
    iStack_14._0_1_ = 1;
    FUN_005ee340(3,uVar2);
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    FUN_00469ba0();
    iStack_14 = 0xffffffff;
    if (0xf < uStack_24) {
      uStack_24 = func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
    }
    *unaff_FS_OFFSET = iStack_1c;
    return uStack_24 & 0xffffff00;
  }
  *unaff_FS_OFFSET = iStack_1c;
  return 1;
}



undefined4 __fastcall FUN_00498a50(int *param_1)

{
  char cVar1;
  
  if (((((char)param_1[0xc] != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0x4c) != '\0')) &&
     ((*(char *)((int)param_1 + 0x32) == '\0' && (param_1[6] != 0)))) {
    cVar1 = FUN_008074b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_00498910();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



void __thiscall FUN_00498a90(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb28cd;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (*(int *)(param_1 + 0x104) != param_2) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      func_0x00469d30("Unable to change protocol version while online",uVar2);
      uStack_14 = 0;
      func_0x0047d860();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)(param_1 + 0x104) = param_2;
    puStack_20 = &stack0xfffffffc;
    func_0x0058ced0();
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x0046bc40("onProtocolVersionChange",0x17);
    uStack_14 = 1;
    auStack_38[4] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    uVar2 = func_0x0049c0e0(auStack_38,&uStack_50,&param_2);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&uStack_50,uStack_50,uStack_3c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00498c00(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb28cd;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined4 *)(param_1 + 0x10c) = param_2;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x0046bc40("onClientVersionChange",0x15);
    uStack_14 = 1;
    auStack_38[4] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    uVar2 = func_0x0049c0e0(auStack_38,&uStack_50,&param_2);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&uStack_50,uStack_50,uStack_3c);
    }
    *unaff_FS_OFFSET = iStack_1c;
    return;
  }
  func_0x00469d30("Unable to change client version while online",uVar2);
  uStack_14 = 0;
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00499373)

int __fastcall FUN_004992d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte ****ppppbVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  byte ***pppbStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  bool bStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00eb29ee;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_28 = 0;
  iVar4 = *(int *)(param_1 + 0x128);
  if (-1 < iVar4) goto LAB_004995ef;
  uStack_14 = 0;
  iStack_30 = 0;
  pppbStack_40 = (byte ***)0x0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  func_0x0046bc40("windows",7,uVar2);
  ppppbVar5 = &pppbStack_40;
  if (0xf < uStack_2c) {
    ppppbVar5 = (byte ****)pppbStack_40;
  }
  uStack_28 = 1;
  if (iStack_30 == 7) {
    pcVar6 = "windows";
    uVar2 = 3;
    do {
      if (*ppppbVar5 != *(byte ****)pcVar6) goto LAB_00499399;
      ppppbVar5 = ppppbVar5 + 1;
      pcVar6 = (char *)((byte *)pcVar6 + 4);
      bVar7 = 3 < uVar2;
      uVar2 = uVar2 - 4;
    } while (bVar7);
    if (uVar2 == 0xfffffffc) {
LAB_004993cd:
      uVar2 = 0;
    }
    else {
LAB_00499399:
      bVar7 = *(byte *)ppppbVar5 < (byte)*pcVar6;
      if ((*(byte *)ppppbVar5 == *pcVar6) &&
         ((uVar2 == 0xfffffffd ||
          ((bVar7 = *(byte *)((int)ppppbVar5 + 1) < ((byte *)pcVar6)[1],
           *(byte *)((int)ppppbVar5 + 1) == ((byte *)pcVar6)[1] &&
           ((uVar2 == 0xfffffffe ||
            ((bVar7 = *(byte *)((int)ppppbVar5 + 2) < ((byte *)pcVar6)[2],
             *(byte *)((int)ppppbVar5 + 2) == ((byte *)pcVar6)[2] &&
             ((uVar2 == 0xffffffff ||
              (bVar7 = *(byte *)((int)ppppbVar5 + 3) < ((byte *)pcVar6)[3],
              *(byte *)((int)ppppbVar5 + 3) == ((byte *)pcVar6)[3])))))))))))) goto LAB_004993cd;
      uVar2 = -(uint)bVar7 | 1;
    }
    bStack_21 = uVar2 == 0;
  }
  else {
    bStack_21 = false;
  }
  uStack_28 = 0;
  uStack_14 = 0xffffffff;
  if (0xf < uStack_2c) {
    func_0x0046b1f0(&pppbStack_40,pppbStack_40,uStack_2c);
  }
  iStack_30 = 0;
  uStack_2c = 0xf;
  pppbStack_40 = (byte ***)((uint)pppbStack_40 & 0xffffff00);
  if (bStack_21 != false) {
    *unaff_FS_OFFSET = iStack_1c;
    return 0x14;
  }
  puVar3 = (undefined4 *)FUN_005dd190(auStack_58);
  uStack_14 = 1;
  puVar1 = puVar3 + 4;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  bStack_21 = (bool)func_0x0046cf20(puVar3,*puVar1,&DAT_0113cd34,3);
  uStack_14 = 0xffffffff;
  if (0xf < uStack_44) {
    func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
  }
  uStack_48 = 0;
  uStack_44 = 0xf;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  if (bStack_21 != false) {
    *unaff_FS_OFFSET = iStack_1c;
    return 0x16;
  }
  puVar3 = (undefined4 *)FUN_005dd190(auStack_58);
  uStack_14 = 2;
  puVar1 = puVar3 + 4;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  bStack_21 = (bool)func_0x0046cf20(puVar3,*puVar1,"android",7);
  uStack_14 = 0xffffffff;
  if (0xf < uStack_44) {
    func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
  }
  uStack_48 = 0;
  uStack_44 = 0xf;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  if (bStack_21 != false) {
    *unaff_FS_OFFSET = iStack_1c;
    return 0x17;
  }
  puVar3 = (undefined4 *)FUN_005dd190(auStack_58);
  uStack_14 = 3;
  puVar1 = puVar3 + 4;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  bStack_21 = (bool)func_0x0046cf20(puVar3,*puVar1,&DAT_0113cd40,3);
  uStack_14 = 0xffffffff;
  FUN_00469ba0();
  if (bStack_21 != false) {
    *unaff_FS_OFFSET = iStack_1c;
    return 0x18;
  }
  puVar3 = (undefined4 *)FUN_005dd190(auStack_58);
  uStack_14 = 4;
  puVar1 = puVar3 + 4;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  bStack_21 = (bool)func_0x0046cf20(puVar3,*puVar1,&DAT_0113cd4c,3);
  uStack_14 = 0xffffffff;
  FUN_00469ba0();
  iVar4 = (uint)(bStack_21 != false) * 4 + 0x15;
LAB_004995ef:
  *unaff_FS_OFFSET = iStack_1c;
  return iVar4;
}



void __fastcall FUN_0049a8f0(int param_1)

{
  code *pcVar1;
  
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0xc);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



undefined4 * __thiscall FUN_0049ab40(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xe8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0049ab70(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xe0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0049aba0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0049abd0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x580);
  }
  return param_1;
}



undefined4 __thiscall FUN_004a0e50(undefined4 param_1,byte param_2)

{
  func_0x004a0e80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x140);
  }
  return param_1;
}



void __thiscall FUN_004a1100(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != '\0') {
    func_0x008ab812(param_1,8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_004a1150(void)

{
  return &`public:_void___thiscall_Game::newPing(void)'::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void thunk_FUN_004985f0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  char cVar5;
  undefined8 uVar6;
  undefined **appuStack_58 [9];
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [8];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb284d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (DAT_0145d008 != 0) {
    if ((*(int *)(DAT_0145d008 + 0x2c) == 0) && (*(int *)(DAT_0145d008 + 0x14) == 0)) {
      if (*(int *)(DAT_0145d008 + 0x44) == 0) goto LAB_00498775;
      cVar5 = *(char *)(*(int *)(DAT_0145d008 + 0x44) + 0x238);
    }
    else {
      cVar5 = *(char *)(DAT_0145d008 + 0x10) == '\0';
    }
    if (cVar5 != '\0') {
      DAT_012bc280 = DAT_012bc280 + 1;
      uVar6 = FUN_0083f570(uVar2);
      puVar3 = (undefined8 *)func_0x00499660(extraout_ECX);
      *puVar3 = uVar6;
      func_0x005b2840(DAT_012bc280,DAT_0145d028,DAT_0145dc9c);
      uVar4 = DAT_0145d060;
      pppuStack_34 = appuStack_58;
      appuStack_58[0] = std::_Func_impl_no_alloc<>::vftable;
      uStack_8 = 1;
      auStack_30[4] = 0;
      auStack_30[0] = 0;
      auStack_30[1] = 0;
      auStack_30[2] = 0;
      auStack_30[3] = 0;
      auStack_30[5] = 0;
      func_0x0046bc40("Game::newPing",0xd);
      uStack_8._0_1_ = 2;
      uVar4 = FUN_005e4dd0(auStack_18,auStack_30,appuStack_58,uVar4);
      uStack_8._0_1_ = 3;
      func_0x0046ffa0(uVar4);
      uStack_8._0_1_ = 2;
      FUN_00468340();
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (0xf < auStack_30[5]) {
        func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
      }
      auStack_30[4] = 0;
      auStack_30[5] = 0xf;
      auStack_30[0] = auStack_30[0] & 0xffffff00;
      uStack_8 = 0xffffffff;
      if (pppuStack_34 != (undefined ***)0x0) {
        pcVar1 = (code *)(*pppuStack_34)[4];
        _guard_check_icall(pppuStack_34 != appuStack_58);
        (*pcVar1)();
      }
    }
  }
LAB_00498775:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004a1170(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



TypeDescriptor * FUN_004a1180(void)

{
  return &`protected:_void___thiscall_Game::processPingBack(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004a1190(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  char cVar5;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _DAT_0145d048 = CONCAT44(_DAT_0145d04c,_DAT_0145d048);
  if (DAT_0145d008 != 0) {
    if ((*(int *)(DAT_0145d008 + 0x2c) == 0) && (*(int *)(DAT_0145d008 + 0x14) == 0)) {
      _DAT_0145d048 = CONCAT44(_DAT_0145d04c,_DAT_0145d048);
      if (*(int *)(DAT_0145d008 + 0x44) == 0) goto LAB_004985ca;
      cVar5 = *(char *)(*(int *)(DAT_0145d008 + 0x44) + 0x238);
    }
    else {
      cVar5 = *(char *)(DAT_0145d008 + 0x10) == '\0';
    }
    _DAT_0145d048 = CONCAT44(_DAT_0145d04c,_DAT_0145d048);
    if ((cVar5 != '\0') &&
       (_DAT_0145d048 = CONCAT44(_DAT_0145d04c,_DAT_0145d048), iRam0145d034 == iRam0145d030)) {
      DAT_0145d021 = 0;
      uStack_1c = 0;
      func_0x005b55f0(uStack_14);
      uStack_8 = 0;
      iVar3 = (int)uStack_1c;
      func_0x00803290(1);
      *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = 0x1d;
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
      FUN_00807510(&uStack_1c,0);
      uStack_8 = 0xffffffff;
      piVar4 = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar3 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)*uStack_1c._4_4_;
          _guard_check_icall();
          (*pcVar2)();
          LOCK();
          piVar1 = piVar4 + 2;
          iVar3 = *piVar1 + -1;
          *piVar1 = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)(*piVar4 + 4);
            _guard_check_icall();
            (*pcVar2)();
          }
        }
      }
      iRam0145d030 = iRam0145d030 + 1;
      DAT_0145d021 = 1;
      _DAT_0145d048 = FUN_0083f570();
    }
  }
LAB_004985ca:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004a11a0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



TypeDescriptor * FUN_004a11b0(void)

{
  return &`protected:_void___thiscall_Game::processGameStart(void)'::__l2::<lambda_3>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_004a11c0(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  uint auStack_44 [12];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar3 = (int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb1ce5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = FUN_0048d940(uVar2);
  if ((cVar1 == '\0') && (*(char *)(*piVar3 + 0x100) == '\0')) {
    uStack_11 = 1;
    auStack_44[4] = 0;
    auStack_44[0] = 0;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    auStack_44[5] = 0;
    func_0x0046bc40("onConnectionFailing",0x13);
    uStack_8 = 0;
    auStack_44[10] = 0;
    auStack_44[6] = 0;
    auStack_44[7] = 0;
    auStack_44[8] = 0;
    auStack_44[9] = 0;
    auStack_44[0xb] = 0;
    func_0x0046bc40("g_game",6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    uVar2 = func_0x0049b620(auStack_44 + 6,auStack_44,&uStack_11);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < auStack_44[0xb]) {
      func_0x0046b1f0(auStack_44 + 6,auStack_44[6],auStack_44[0xb]);
    }
    auStack_44[10] = 0;
    auStack_44[0xb] = 0xf;
    auStack_44[6] = auStack_44[6] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (0xf < auStack_44[5]) {
      func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
    }
    *(undefined1 *)(*piVar3 + 0x100) = 1;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  cVar1 = FUN_0048d940(uVar2);
  if ((cVar1 != '\0') && (*(char *)(*piVar3 + 0x100) != '\0')) {
    uStack_11 = 0;
    auStack_44[10] = 0;
    auStack_44[6] = 0;
    auStack_44[7] = 0;
    auStack_44[8] = 0;
    auStack_44[9] = 0;
    auStack_44[0xb] = 0;
    func_0x0046bc40("onConnectionFailing",0x13);
    uStack_8 = 2;
    auStack_44[4] = 0;
    auStack_44[0] = 0;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    auStack_44[5] = 0;
    func_0x0046bc40("g_game",6);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    uVar2 = func_0x0049b620(auStack_44,auStack_44 + 6,&uStack_11);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    if (0xf < auStack_44[5]) {
      func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
    }
    auStack_44[4] = 0;
    auStack_44[5] = 0xf;
    auStack_44[0] = auStack_44[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (0xf < auStack_44[0xb]) {
      func_0x0046b1f0(auStack_44 + 6,auStack_44[6],auStack_44[0xb]);
    }
    *(undefined1 *)(*piVar3 + 0x100) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_004a11d0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_004a11f0(void)

{
  return &`protected:_void___thiscall_Game::processGameStart(void)'::__l8::<lambda_2>::
          RTTI_Type_Descriptor;
}



void FUN_004a1200(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



TypeDescriptor * FUN_004a1210(void)

{
  return &`protected:_void___thiscall_Game::processGameStart(void)'::__l5::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_004a1220(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void __thiscall
FUN_004a1c20(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x004a2920(uStack_14);
  uStack_8 = 0;
  if ((undefined4 *)((int)uStack_1c + 8) != param_2) {
    puVar5 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar5 = (undefined4 *)*param_2;
    }
    func_0x0046a660(puVar5,param_2[4]);
  }
  func_0x004a27a0(param_2);
  *(undefined4 *)((int)uStack_1c + 0x28) = param_3;
  *(undefined4 *)((int)uStack_1c + 0x2c) = param_4;
  *(undefined4 *)((int)uStack_1c + 0x30) = param_5;
  *(undefined4 *)((int)uStack_1c + 0x34) = param_6;
  *(undefined4 *)((int)uStack_1c + 0x38) = param_7;
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 == *(int **)(param_1 + 8)) {
    func_0x00488a10(piVar2,&uStack_1c);
  }
  else {
    *piVar2 = 0;
    piVar2[1] = 0;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    *piVar2 = (int)uStack_1c;
    piVar2[1] = (int)uStack_1c._4_4_;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  }
  uStack_8 = 0xffffffff;
  piVar2 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar4 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*uStack_1c._4_4_;
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
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_004a1d60(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
