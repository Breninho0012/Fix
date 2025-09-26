  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2fcbd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_14 = (undefined1 *)&uStack_28;
  puStack_18 = (undefined1 *)&uStack_28;
  if (*(int *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_28 = *(undefined4 *)(param_1 + 0x14);
  uStack_24 = *(undefined4 *)(param_1 + 0x18);
  uStack_20 = *(undefined4 *)(param_1 + 0x1c);
  uStack_8 = 0xffffffff;
  func_0x00823350(param_1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0082bc60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [52];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f30585;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_48,0,0x30);
  func_0x00829f00(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0082ac00();
  if (param_2 != '\0') {
    func_0x00829230();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00651810();
  uStack_8 = 0xffffffff;
  func_0x0082ac00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0082bd10(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f305c5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00829fc0(param_1 + 4,uStack_14,&uStack_15,param_1,param_1,0,0,0,0,0,0,0,0);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0082ab40();
  if (param_2 != '\0') {
    func_0x00829bd0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00829af0();
  uStack_8 = 0xffffffff;
  func_0x0082ab40();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0082c9c0(int param_1)

{
  func_0x008283e0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34),0);
  return;
}



void FUN_0082c9f0(int param_1)

{
  func_0x00828300(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34),0);
  return;
}



void FUN_0082ca20(int param_1)

{
  func_0x00828210(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34),0);
  return;
}



void __thiscall FUN_0082ca50(undefined4 param_1,int param_2)

{
  func_0x00828060(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),
                  *(undefined4 *)(param_2 + 0x2c),0,param_1);
  return;
}



void FUN_0082ca80(int param_1)

{
  func_0x00827f80(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34),0);
  return;
}



void FUN_0082cab0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f307d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_50,0,0x38);
  func_0x0082b980(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x34);
  uStack_28 = *(undefined8 *)(param_1 + 0x2c);
  uStack_1c = *(undefined4 *)(param_1 + 0x38);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0082c800();
  if (param_2 != '\0') {
    func_0x008283e0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0082c800();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0082cbb0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f307d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_50,0,0x38);
  func_0x0082b980(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x34);
  uStack_28 = *(undefined8 *)(param_1 + 0x2c);
  uStack_1c = *(undefined4 *)(param_1 + 0x38);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0082c800();
  if (param_2 != '\0') {
    func_0x00828300(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0082c800();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0082ccb0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f307d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_50,0,0x38);
  func_0x0082b980(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x34);
  uStack_28 = *(undefined8 *)(param_1 + 0x2c);
  uStack_1c = *(undefined4 *)(param_1 + 0x38);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0082c800();
  if (param_2 != '\0') {
    func_0x00828210(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0082c800();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0082cdb0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f30825;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_48,0,0x30);
  func_0x0082ba40(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x2c);
  uStack_28 = *(undefined8 *)(param_1 + 0x24);
  uStack_1c = *(undefined4 *)(param_1 + 0x30);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0082c8f0();
  if (param_2 != '\0') {
    func_0x00828060(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00827ef0();
  uStack_8 = 0xffffffff;
  func_0x0082c8f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0082ce90(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f307d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_50,0,0x38);
  func_0x0082b980(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x34);
  uStack_28 = *(undefined8 *)(param_1 + 0x2c);
  uStack_1c = *(undefined4 *)(param_1 + 0x38);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0082c800();
  if (param_2 != '\0') {
    func_0x00827f80(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0082c800();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_0082d9cb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x84);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  func_0x0046bc40("ERROR_ENCODE",0xc);
  *(uint *)(unaff_EBP + -0x80) = *(uint *)(unaff_EBP + -0x80) | 1;
  return &DAT_0082d9fb;
}



undefined1 * Catch_0082ddda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  func_0x0046bc40("Exception occurred while sending security data",0x2e);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (0xf < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x0046b1f0(unaff_EBP + -0x60,*(undefined4 *)(unaff_EBP + -0x60),
                    *(uint *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x60) = 0;
  return &LAB_0082dc31;
}



undefined * Catch_0082ea06(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x148) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  uVar2 = func_0x00469d30(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uVar2 = func_0x005f2a30(unaff_EBP + -0x160,"[ANTIBOT] Failed to load configuration: ",uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00469ba0();
  return &DAT_0082ea77;
}



undefined * Catch_0082ec58(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x34);
  pcVar2 = *(code **)(*piVar1 + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  uVar3 = func_0x00469d30(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  func_0x005f2a30(unaff_EBP + -0x30,"Exception in performInitialSecurityCheck: ",uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00469ba0();
  pcVar2 = *(code **)(*piVar1 + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  uVar3 = func_0x00469d30(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  func_0x005f2a30(unaff_EBP + -0x4c,
                  "System exception during initial security check - unexpected error occurred while performing startup security validation: "
                  ,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  func_0x0082da30();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00469ba0();
  return &DAT_0082ed07;
}



undefined * Catch_0082ef5b(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x78);
  pcVar2 = *(code **)(*piVar1 + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  uVar3 = func_0x00469d30(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  func_0x005f2a30(unaff_EBP + -0x74,"Exception in checkProcesses: ",uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  pcVar2 = *(code **)(*piVar1 + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  uVar3 = func_0x00469d30(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  func_0x005f2a30(unaff_EBP + -0x74,
                  "System exception during process monitoring - error occurred while scanning running processes for threats: "
                  ,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  func_0x0082da30();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  return &DAT_0082f00a;
}



undefined * Catch_0082f25b(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x78);
  pcVar2 = *(code **)(*piVar1 + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  uVar3 = func_0x00469d30(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  func_0x005f2a30(unaff_EBP + -0x74,"Exception in checkWindows: ",uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  pcVar2 = *(code **)(*piVar1 + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  uVar3 = func_0x00469d30(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  func_0x005f2a30(unaff_EBP + -0x74,
                  "System exception during window monitoring - error occurred while scanning active windows for threats: "
                  ,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  func_0x0082da30();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  return &DAT_0082f30a;
}



undefined * Catch_0082f6d4(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x288) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  uVar2 = func_0x00469d30(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  func_0x005f2a30(unaff_EBP + -0x2b8,"Exception in checkClientInstanceLimit: ",uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00469ba0();
  return &DAT_0082f73f;
}



undefined * Catch_0082faa8(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xbc) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  uVar2 = func_0x00469d30(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  func_0x005f2a30(unaff_EBP + -0x88,"Exception in checkVirtualMachine: ",uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00469ba0();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  func_0x0046bc40("VM check failed due to exception - assuming physical hardware",0x3d);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(unaff_EBP + -0x2c,*(undefined4 *)(unaff_EBP + -0x2c),
                    *(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x2c) = 0;
  return &DAT_0082fb71;
}



void FUN_0082fc80(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint uStack_1c4;
  undefined1 auStack_184 [24];
  undefined1 auStack_16c [24];
  undefined1 auStack_154 [24];
  undefined1 auStack_13c [24];
  undefined1 auStack_124 [24];
  undefined1 auStack_10c [24];
  undefined1 auStack_f4 [24];
  undefined1 auStack_dc [24];
  undefined1 auStack_c4 [24];
  undefined1 auStack_ac [24];
  undefined1 auStack_94 [24];
  undefined1 auStack_7c [60];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint auStack_30 [7];
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3134c;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_1c4;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[4] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("Starting simplified monitoring loop...",0x26);
  uStack_8 = 0;
  func_0x0082d160();
  uStack_8 = 0xffffffff;
  if (0xf < auStack_30[5]) {
    func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
  }
  auStack_30[4] = 0;
  auStack_30[5] = 0xf;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  uVar6 = 0;
  uStack_34 = 0;
  auStack_30[6] = DAT_012bc100;
  uVar4 = DAT_012bc100;
  do {
    if ((DAT_0145cecc == '\0') || (DAT_0145cece != '\0')) {
      auStack_30[0] = 0;
      auStack_30[1] = 0;
      auStack_30[2] = 0;
      auStack_30[3] = 0;
      auStack_30[4] = 0;
      auStack_30[5] = 0;
      func_0x0046bc40("Monitoring loop ended",0x15);
      uStack_8 = 0x13;
      func_0x0082d160();
      uStack_8 = 0xffffffff;
      if (0xf < auStack_30[5]) {
        func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
      }
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    uStack_8 = 1;
    uVar2 = uVar6 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    if (uVar2 == 0) {
      uVar3 = func_0x00464a50(auStack_13c,uVar6);
      uStack_8._0_1_ = 2;
      uVar3 = func_0x005f2a30(auStack_124,"Cycle ",uVar3);
      uStack_8._0_1_ = 3;
      func_0x0046b5c0(auStack_10c,uVar3,": Starting process check");
      uStack_8._0_1_ = 4;
      func_0x0082d160();
      uStack_8._0_1_ = 3;
      FUN_00469ba0();
      uStack_8._0_1_ = 2;
      FUN_00469ba0();
      uStack_8._0_1_ = 1;
      FUN_00469ba0();
      cVar1 = func_0x0082ed30();
      if (cVar1 != '\0') {
        func_0x00469d30("Threat detected in process check - exiting monitoring");
        uStack_8._0_1_ = 5;
        func_0x0082d160();
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        FUN_00469ba0();
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      uVar3 = func_0x00464a50(auStack_184,uVar6);
      uStack_8._0_1_ = 6;
      uVar3 = func_0x005f2a30(auStack_16c,"Cycle ",uVar3);
      uStack_8._0_1_ = 7;
      func_0x0046b5c0(auStack_154,uVar3,": Process check completed");
      uStack_8._0_1_ = 8;
      func_0x0082d160();
      uStack_8._0_1_ = 7;
      FUN_00469ba0();
      uStack_8._0_1_ = 6;
      FUN_00469ba0();
LAB_0082ffa8:
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      FUN_00469ba0();
      uVar4 = auStack_30[6];
    }
    else if (uVar2 == 1) {
      uVar3 = func_0x00464a50(auStack_ac,uVar6);
      uStack_8._0_1_ = 9;
      uVar3 = func_0x005f2a30(auStack_94,"Cycle ",uVar3);
      uStack_8._0_1_ = 10;
      func_0x0046b5c0(auStack_7c,uVar3,": Starting window check");
      uStack_8._0_1_ = 0xb;
      func_0x0082d160();
      uStack_8._0_1_ = 10;
      FUN_00469ba0();
      uStack_8._0_1_ = 9;
      FUN_00469ba0();
      uStack_8._0_1_ = 1;
      FUN_00469ba0();
      cVar1 = func_0x0082f030();
      if (cVar1 != '\0') {
        func_0x00469d30("Threat detected in window check - exiting monitoring");
        uStack_8._0_1_ = 0xc;
        func_0x0082d160();
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        FUN_00469ba0();
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      uVar3 = func_0x00464a50(auStack_f4,uVar6);
      uStack_8._0_1_ = 0xd;
      uVar3 = func_0x005f2a30(auStack_dc,"Cycle ",uVar3);
      uStack_8._0_1_ = 0xe;
      func_0x0046b5c0(auStack_c4,uVar3,": Window check completed");
      uStack_8._0_1_ = 0xf;
      func_0x0082d160();
      uStack_8._0_1_ = 0xe;
      FUN_00469ba0();
      uStack_8._0_1_ = 0xd;
      FUN_00469ba0();
      goto LAB_0082ffa8;
    }
    uVar6 = uVar6 + 1;
    iVar5 = 0;
    uStack_34 = uVar6;
    while (((iStack_38 = iVar5, iVar5 < (int)uVar4 && (DAT_0145cecc != '\0')) &&
           (DAT_0145cece == '\0'))) {
      uStack_40 = 1;
      uStack_3c = 0;
      func_0x008307a0();
      iVar5 = iVar5 + 1;
      uVar4 = auStack_30[6];
    }
    uStack_8 = 0xffffffff;
  } while( true );
}



undefined * Catch_0082fff9(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x48) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  uVar2 = func_0x00469d30(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  func_0x005f2a30(unaff_EBP + -0x198,"Exception in monitoring loop: ",uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  func_0x0082d160();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00469ba0();
  *(undefined4 *)(unaff_EBP + -0x44) = 5;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  func_0x008307a0();
  return &DAT_00830077;
}



undefined1 * Catch_008302a0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x14) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  uVar2 = func_0x00469d30(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uVar2 = func_0x005f2a30(unaff_EBP + -0x2c,"[ANTIBOT] Exception during initialization: ",uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00469ba0();
  return &LAB_00830302;
}



TypeDescriptor * FUN_008309e0(void)

{
  return &`void___cdecl_showSecurityAlert(class_std::basic_string<>_const&)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_008309f0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint auStack_28 [7];
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece995;
  auStack_28[6] = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_28 + 6);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  func_0x0046bc40("onExit",6,uVar1);
  uStack_8 = 0;
  auStack_28[4] = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[5] = 0;
  func_0x0046bc40("g_app",5);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar2 = func_0x0049b8f0(auStack_28,&uStack_40);
  if (0 < iVar2) {
    func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_28[5]) {
    func_0x0046b1f0(auStack_28,auStack_28[0],auStack_28[5]);
  }
  auStack_28[4] = 0;
  auStack_28[5] = 0xf;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_2c) {
    func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
  }
  DAT_0145dc6d = 1;
  *unaff_FS_OFFSET = auStack_28[6];
  return;
}



void FUN_00830a00(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00830a10(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iVar2;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3149d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar2 = param_1;
  func_0x0082dec0(uVar1);
  func_0x00e744e0();
  uStack_8 = 0xffffffff;
  if (param_1 != 0) {
    func_0x008ab812(param_1,1);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(iVar2,uVar1);
  return;
}



void FUN_00830a90(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 *puVar3;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f314dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  pcVar1 = (code *)*param_1;
  puVar3 = param_1;
  _guard_check_icall(uVar2);
  (*pcVar1)();
  func_0x00e744e0();
  uStack_8 = 0xffffffff;
  func_0x008ab812(param_1,4);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar3,uVar2);
  return;
}



int __cdecl vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    // 0x430b10  168  vsprintf_s
  iVar1 = _vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}



void Catch_00834e68(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar3 = *(undefined4 **)(unaff_EBP + -0x44);
  func_0x0056f3c0(uVar2,*puVar3,*(undefined4 *)(unaff_EBP + -0x40),uVar1);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  func_0x004e7c10(uVar2,*puVar3,uVar1);
  *puVar3 = *(undefined4 *)(unaff_EBP + -0x30);
  func_0x00e87d2e(0,0);
  func_0x0046e700();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  iVar4 = *(int *)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x20) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
  iVar5 = *(int *)(unaff_EBP + -0x4c);
  *(int *)(unaff_EBP + -0x18) = iVar4 + iVar5 * 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x0056f3c0(iVar4 + iVar5 * 0x18,iVar5 * 0x30 + iVar4,iVar4,uVar1);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar3 = *(undefined4 **)(unaff_EBP + -0x44);
  func_0x005e0700(iVar4 + iVar5 * 0x18);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x30);
  func_0x004e7c10(uVar2,*puVar3,uVar1);
  *puVar3 = uVar2;
  func_0x00e87d2e(0,0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



void Catch_00834eb7(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  iVar2 = *(int *)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
  iVar3 = *(int *)(unaff_EBP + -0x4c);
  *(int *)(unaff_EBP + -0x18) = iVar2 + iVar3 * 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x0056f3c0(iVar2 + iVar3 * 0x18,iVar3 * 0x30 + iVar2,iVar2,uVar1);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar4 = *(undefined4 **)(unaff_EBP + -0x44);
  func_0x005e0700(iVar2 + iVar3 * 0x18);
  uVar5 = *(undefined4 *)(unaff_EBP + -0x30);
  func_0x004e7c10(uVar5,*puVar4,uVar1);
  *puVar4 = uVar5;
  func_0x00e87d2e(0,0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



void __fastcall FUN_00835310(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0xc);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00835330(undefined4 param_1,byte param_2)

{
  func_0x0083aa80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4c);
  }
  return param_1;
}



undefined4 FUN_00835470(void)

{
  return 0xffffffff;
}



undefined4 __thiscall FUN_00835480(undefined4 param_1,byte param_2)

{
  func_0x008353b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x24);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008354b0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3229d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = OggSoundFile::vftable;
  uStack_8 = 0;
  func_0x00e57f10(param_1 + 10,uVar1);
  uStack_8 = 0xffffffff;
  func_0x008353b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2f8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00835530(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  uStack_c = 0;
  if (0 < param_3) {
    do {
      iVar1 = func_0x00e59480(param_1 + 0x28,param_2,param_3,0,2,1,&uStack_c);
      if (iVar1 == 0) break;
      param_3 = param_3 - iVar1;
      param_2 = param_2 + iVar1;
    } while (0 < param_3);
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_008355a0(int param_1)

{
  func_0x00e58090(param_1 + 0x28,0,0);
  return;
}



void FUN_008355c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x005e6260(param_1,param_2,param_3);
  return;
}



undefined4 FUN_008355e0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    func_0x005e64e0(param_2);
    return 0;
  }
  if (param_4 == 1) {
    if (*(char *)(param_1 + 0x31) == '\0') {
      iVar1 = func_0x00e43b30(*(undefined4 *)(param_1 + 0x28));
      func_0x005e64e0(param_2 + iVar1);
      return 0;
    }
    func_0x005e64e0(param_2 + *(int *)(param_1 + 0x2c));
    return 0;
  }
  if (param_4 != 2) {
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x31) == '\0') {
    iVar1 = func_0x00e42920(*(undefined4 *)(param_1 + 0x28));
    func_0x005e64e0(param_2 + iVar1);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  func_0x005e64e0(param_2 + iVar1);
  return 0;
}



undefined4 FUN_008356b0(void)

{
  func_0x005e6090();
  return 0;
}



undefined4 FUN_008356c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    uVar1 = func_0x00e43b30(*(undefined4 *)(param_1 + 0x28));
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



void __thiscall
FUN_00835c00(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [20];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  uint uStack_34;
  undefined1 auStack_20 [8];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3236e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  if ((((DAT_0145eca0 == 0) || (DAT_0145eca4 == 0)) || (DAT_0145ecdc == '\0')) ||
     (*(char *)(param_1 + 0x2c) == '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar3 = (undefined1 *)param_1;
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(param_1 + 0x24) + 8);
      fStack_38 = 1.2063627e-38;
      puStack_18 = (undefined1 *)param_1;
      _guard_check_icall();
      fStack_38 = 1.2063633e-38;
      (*pcVar2)();
      puVar3 = puStack_18;
    }
    puStack_18 = auStack_54;
    fStack_38 = param_5 * *(float *)((int)puVar3 + 0x34);
    uStack_3c = param_4;
    func_0x00469da0(param_3);
    uStack_8 = 0;
    uStack_3c = FUN_00837fe0(auStack_20,param_3);
    uStack_8 = 2;
    uStack_40 = 0x835cd6;
    func_0x0046ffa0();
    uStack_8 = uStack_8 & 0xffffff00;
    uStack_40 = 0x835ce2;
    FUN_00468340();
    *param_2 = 0;
    param_2[1] = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    param_2[1] = *(undefined4 *)(param_1 + 0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __thiscall FUN_00835d40(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = func_0x008364b0(uVar5);
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar6 = **(int **)(param_1 + 0x24);
    if (0.0 < param_2) {
      pcVar3 = *(code **)(iVar6 + 0x30);
      _guard_check_icall(2,param_2);
      iVar6 = (*pcVar3)();
      *unaff_FS_OFFSET = iStack_10;
      return iVar6;
    }
    pcVar3 = *(code **)(iVar6 + 8);
    _guard_check_icall();
    (*pcVar3)();
    uStack_18 = 0;
    piStack_14 = (int *)0x0;
    uStack_8 = 0;
    iVar6 = func_0x0046ffa0(&uStack_18);
    piVar4 = piStack_14;
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_14 + 1;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_14;
        _guard_check_icall();
        iVar6 = (*pcVar3)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piVar4 + 4);
          _guard_check_icall();
          iVar6 = (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



// WARNING: Removing unreachable block (ram,0x00835fc1)
// WARNING: Removing unreachable block (ram,0x00835fcf)
// WARNING: Removing unreachable block (ram,0x00835fdf)
// WARNING: Removing unreachable block (ram,0x00835fe5)

void __thiscall FUN_00835e50(int param_1,undefined4 param_2,uint param_3,float param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined4 auStack_6c [3];
  undefined4 uStack_60;
  int *piStack_5c;
  int *piStack_58;
  uint uStack_54;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f323c9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_1c = param_1;
  uStack_14 = uStack_54;
  if (*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01464f78) {
    piStack_58 = &DAT_01464f78;
    piStack_5c = (int *)0x836087;
    func_0x008ab40d();
    if (DAT_01464f78 == -1) {
      uStack_8 = 0;
      piStack_58 = (int *)0x8360a3;
      piStack_58 = (int *)func_0x00e7543d();
      piStack_5c = (int *)0x8360ae;
      func_0x00808dc0();
      uStack_8 = 0xffffffff;
      piStack_5c = &DAT_01464f78;
      uStack_60 = 0x8360bf;
      func_0x008ab3bc();
    }
  }
  iVar3 = iStack_1c;
  if (param_4 == 0.0) {
    param_4 = 1.0;
  }
  puStack_18 = (undefined1 *)auStack_6c;
  puVar1 = (undefined4 *)(iStack_1c + 0x10);
  func_0x00469da0(param_2);
  uStack_8 = 0xffffffff;
  func_0x00838a20(&uStack_3c);
  uStack_24 = param_3;
  fStack_20 = param_4;
  uStack_8 = 3;
  if (*(uint *)(iVar3 + 0x18) <= *(int *)(iVar3 + 0x20) + 1U) {
    func_0x00836590(extraout_ECX);
  }
  uVar4 = *(int *)(iVar3 + 0x18) - 1U & *(uint *)(iVar3 + 0x1c);
  *(uint *)(iVar3 + 0x1c) = uVar4;
  puStack_18 = (undefined1 *)(*(int *)(iVar3 + 0x20) + uVar4);
  uVar4 = *(int *)(iVar3 + 0x18) - 1U & (uint)puStack_18;
  if (*(int *)(*(int *)(iVar3 + 0x14) + uVar4 * 4) == 0) {
    uVar5 = func_0x008ab47d(0x20);
    *(undefined4 *)(*(int *)(iVar3 + 0x14) + uVar4 * 4) = uVar5;
  }
  puVar2 = *(uint **)(*(int *)(iVar3 + 0x14) + (*(int *)(iVar3 + 0x18) - 1U & (uint)puStack_18) * 4)
  ;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *puVar2 = uStack_3c;
  puVar2[1] = uStack_38;
  puVar2[2] = uStack_34;
  puVar2[3] = uStack_30;
  *(ulonglong *)(puVar2 + 4) = CONCAT44(uStack_28,uStack_2c);
  uStack_3c = uStack_3c & 0xffffff00;
  puVar2[6] = uStack_24;
  puVar2[7] = (uint)fStack_20;
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
  uStack_8 = 0xffffffff;
  puStack_18 = *(undefined1 **)(iVar3 + 0x1c);
  uStack_2c = 0;
  uVar5 = *puVar1;
  if (iStack_1c == -0x10) {
    uVar5 = 0;
  }
  uStack_28 = 0xf;
  func_0x00836720(uVar5,0,puStack_18,*puVar1,0,*(int *)(iVar3 + 0x20) + (int)puStack_18);
  *unaff_FS_OFFSET = iStack_10;
  auStack_6c[0] = 0x836077;
  FUN_008ab370();
  return;
}



int __thiscall FUN_00836380(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = CONCAT31((int3)((uint)&iStack_10 >> 8),param_2);
  if (*(char *)(param_1 + 0x2c) != param_2) {
    if (param_2 != '\0') {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      iVar6 = func_0x008360d0();
      *unaff_FS_OFFSET = iStack_10;
      return iVar6;
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)(param_1 + 0x24) + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
      uStack_18 = 0;
      piStack_14 = (int *)0x0;
      uStack_8 = 0;
      iVar6 = func_0x0046ffa0(&uStack_18);
      piVar4 = piStack_14;
      uStack_8 = 0xffffffff;
      if (piStack_14 != (int *)0x0) {
        LOCK();
        piVar1 = piStack_14 + 1;
        iVar2 = *piVar1;
        iVar6 = *piVar1;
        *piVar1 = iVar2 + -1;
        UNLOCK();
        if (iVar2 + -1 == 0) {
          pcVar3 = *(code **)*piStack_14;
          _guard_check_icall();
          iVar6 = (*pcVar3)();
          LOCK();
          piVar1 = piVar4 + 2;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            pcVar3 = *(code **)(*piVar4 + 4);
            _guard_check_icall();
            iVar6 = (*pcVar3)();
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __thiscall FUN_00836470(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x24) + 0x20);
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



undefined4 * __thiscall FUN_008370a0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x308);
  }
  return param_1;
}



char * __fastcall FUN_00837230(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    return "broken promise";
  case 2:
    return "future already retrieved";
  case 3:
    return "promise already satisfied";
  case 4:
    return "no state";
  default:
    return (char *)0x0;
  }
}



undefined4 * __thiscall FUN_00837290(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabbe5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar2);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::future_error::vftable;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = uVar1;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



char * FUN_00837320(void)

{
  return "future";
}



undefined4 * FUN_00837330(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabc2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  switch(param_2) {
  case 1:
    pcVar4 = "broken promise";
    break;
  case 2:
    pcVar4 = "future already retrieved";
    break;
  case 3:
    pcVar4 = "promise already satisfied";
    break;
  case 4:
    pcVar4 = "no state";
    break;
  default:
    pcVar3 = (char *)func_0x00e70786(param_2,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    func_0x0046bc40(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    goto LAB_008373f2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
LAB_008373f2:
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00837430(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f32623;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar4 = piVar1[1] + -1;
    piVar1[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar5);
      (*pcVar2)();
      LOCK();
      iVar4 = piVar1[2] + -1;
      piVar1[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x008364b0();
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x008ab812(uVar3,8);
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00837df0(int param_1,char param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  if ((*(char *)(param_1 + 0x3c) != param_2) &&
     (*(char *)(param_1 + 0x3c) = param_2, param_2 == '\0')) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00dc2470(*(int *)(param_1 + 4));
    }
    puVar1 = *(undefined4 **)(param_1 + 0x34);
    for (puVar3 = *(undefined4 **)(param_1 + 0x30); puVar3 != puVar1; puVar3 = puVar3 + 2) {
      pcVar2 = *(code **)(*(int *)*puVar3 + 8);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}



void __thiscall FUN_00837e50(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined1 auStack_64 [24];
  uint uStack_4c;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f3288d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_4c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puStack_18 = auStack_64;
  uStack_14 = uStack_4c;
  func_0x00469da0(&param_2);
  uStack_8 = uStack_8 & 0xffffff00;
  uVar2 = func_0x00838a20(auStack_40);
  uStack_8._0_1_ = 2;
  func_0x00469bd0(uVar2);
  uStack_8 = (uint)uStack_8._1_3_ << 8;
  if (0xf < uStack_2c) {
    func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
  }
  uStack_30 = 0;
  uStack_2c = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  puStack_18 = (undefined1 *)0x0;
  func_0x0062c1a0(&puStack_18,&param_2);
  if (puStack_18 == *(undefined1 **)(param_1 + 0x14)) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00dc2470(*(int *)(param_1 + 4));
    }
    uStack_20 = 0;
    func_0x00836a70();
    uStack_8._0_1_ = 3;
    if (((int)uStack_20 != 0) && (*(int *)((int)uStack_20 + 0x20) < 0x186a1)) {
      uStack_28 = 0;
      func_0x008391a0();
      uStack_8 = CONCAT31(uStack_8._1_3_,4);
      cVar1 = func_0x00835870(&uStack_20);
      if (cVar1 != '\0') {
        func_0x00626200(&param_2,&uStack_28);
        func_0x004683d0();
      }
      uStack_8._0_1_ = 3;
      FUN_00468340();
    }
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    FUN_00468340();
  }
  uStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = param_2 & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00837fe0(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined8 param_7,float param_8,undefined4 param_9)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  uint uStack_54;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f32911;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = 0;
  iStack_14 = 1;
  iStack_34 = param_1;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    uStack_30 = 1;
    iStack_14 = 0;
    puStack_20 = &stack0xfffffffc;
    if (0xf < param_7._4_4_) {
      puStack_20 = &stack0xfffffffc;
      func_0x0046b1f0();
    }
    goto LAB_0083826e;
  }
  puVar3 = &stack0xfffffffc;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dc2470();
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  func_0x00469da0(&param_3);
  iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
  iStack_14._0_1_ = 1;
  puVar4 = (undefined4 *)func_0x00838a20(&uStack_4c);
  iStack_14._0_1_ = 3;
  if (&param_3 != (int **)puVar4) {
    if (0xf < param_7._4_4_) {
      uVar7 = param_7._4_4_ + 1;
      piVar6 = param_3;
      if (0xfff < uVar7) {
        piVar6 = (int *)param_3[-1];
        uVar7 = param_7._4_4_ + 0x24;
        if ((undefined1 *)0x1f < (undefined1 *)((int)param_3 + (-4 - (int)piVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(piVar6,uVar7);
    }
    param_3 = (int *)*puVar4;
    param_4 = puVar4[1];
    param_5 = puVar4[2];
    param_6 = puVar4[3];
    param_7 = *(undefined8 *)(puVar4 + 4);
    puVar4[4] = 0;
    puVar4[5] = 0xf;
    *(undefined1 *)puVar4 = 0;
  }
  iStack_14._0_1_ = 1;
  if (0xf < piStack_38) {
    func_0x0046b1f0(&uStack_4c,uStack_4c,piStack_38);
  }
  piStack_3c = (int *)0x0;
  piStack_38 = (int *)0xf;
  uStack_4c = uStack_4c & 0xffffff00;
  uStack_2c = 0;
  func_0x00838600(&uStack_2c,&param_3);
  iStack_14._0_1_ = 4;
  uVar2 = (undefined1)iStack_14;
  iStack_14._0_1_ = 4;
  if ((int *)uStack_2c == (int *)0x0) {
    piStack_3c = (int *)uStack_2c;
    piStack_38 = (int *)uStack_2c;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    func_0x0046bc40("unable to play \'%s\'",0x13);
    iStack_14._0_1_ = 5;
    func_0x00484eb0(&param_3);
    iStack_14._0_1_ = 6;
    FUN_005ee340();
    iStack_14._0_1_ = 5;
    if (0xf < uStack_54) {
      func_0x0046b1f0();
    }
    iStack_14._0_1_ = 4;
    if (&DAT_0000000f < piStack_38) {
      func_0x0046b1f0();
    }
    piStack_3c = (int *)0x0;
    piStack_38 = (int *)0xf;
    uStack_4c = uStack_4c & 0xffffff00;
    *param_2 = 0;
    param_2[1] = 0;
    uStack_30 = 1;
    iStack_14._0_1_ = 1;
    FUN_00468340();
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (param_7._4_4_ < 0x10) goto LAB_0083826e;
    if (0xfff < param_7._4_4_ + 1) {
      iVar5 = (int)param_3 - param_3[-1];
joined_r0x00838399:
      if (0x1f < iVar5 - 4U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    iStack_14._0_1_ = uVar2;
    if ((int **)((int *)uStack_2c + 6) != &param_3) {
      piVar6 = (int *)&param_3;
      if (0xf < param_7._4_4_) {
        piVar6 = param_3;
      }
      func_0x0046a660(piVar6,(undefined4)param_7);
    }
    pcVar1 = *(code **)(*(int *)uStack_2c + 0x18);
    _guard_check_icall(1);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)uStack_2c + 0x20);
    uVar8 = param_9;
    _guard_check_icall(param_9);
    (*pcVar1)();
    if (0.0 < param_8) {
      pcVar1 = *(code **)(*(int *)uStack_2c + 0x30);
      _guard_check_icall(1,param_8);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)uStack_2c + 4);
    _guard_check_icall(uVar8);
    (*pcVar1)();
    func_0x00835360(&uStack_2c);
    uStack_30 = 1;
    *param_2 = (int *)uStack_2c;
    param_2[1] = 0;
    param_2[1] = uStack_2c._4_4_;
    uStack_2c = 0;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (param_7._4_4_ < 0x10) goto LAB_0083826e;
    if (0xfff < param_7._4_4_ + 1) {
      iVar5 = (int)param_3 - param_3[-1];
      goto joined_r0x00838399;
    }
  }
  func_0x008ab812();
LAB_0083826e:
  param_7 = 0xf00000000;
  param_3 = (int *)((uint)param_3 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_008383b0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int *piStack_20;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f32966;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dc2470(*(int *)(param_1 + 4),uVar3);
  }
  piVar4 = (int *)func_0x00588c20(&stack0x00000008);
  if (*piVar4 == 0) {
    uVar5 = func_0x00839360();
    uStack_8 = 1;
    func_0x00588c20(&stack0x00000008,uVar5);
    func_0x0046ffa0();
    uStack_8 = uStack_8 & 0xffffff00;
    if (piStack_20 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_20[1] + -1;
      piStack_20[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)*piStack_20;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar2 = piStack_20[2] + -1;
        piStack_20[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*piStack_20 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
  }
  puVar6 = (undefined4 *)func_0x00588c20(&stack0x00000008);
  *param_2 = 0;
  param_2[1] = 0;
  if (puVar6[1] != 0) {
    LOCK();
    piVar4 = (int *)(puVar6[1] + 4);
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *param_2 = *puVar6;
  param_2[1] = puVar6[1];
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __fastcall FUN_008384d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f329ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dc2470(*(int *)(param_1 + 4),uVar5);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x34);
  for (puVar6 = *(undefined4 **)(param_1 + 0x30); puVar6 != puVar2; puVar6 = puVar6 + 2) {
    pcVar3 = *(code **)(*(int *)*puVar6 + 8);
    _guard_check_icall();
    (*pcVar3)();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  for (puVar6 = (undefined4 *)*puVar2; puVar6 != puVar2; puVar6 = (undefined4 *)*puVar6) {
    if (puVar6[4] != 0) {
      LOCK();
      piVar1 = (int *)(puVar6[4] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = (int *)puVar6[4];
    uStack_8 = 1;
    FUN_00835d40(0);
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        iVar4 = piVar1[2] + -1;
        piVar1[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_008387c2(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x60) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  func_0x0046bc40("failed to load sound source: \'%s\'",0x21);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uVar3 = func_0x00485670(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(unaff_EBP + -0x54,*(undefined4 *)(unaff_EBP + -0x54),
                    *(uint *)(unaff_EBP + -0x40));
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x54) = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x3c);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  return &DAT_0083887e;
}



undefined * Catch_0083890c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  func_0x00469d30(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_005ee340(3,unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00469ba0();
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
  return &DAT_00838963;
}



void __thiscall FUN_00838d20(int param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x79) = 1;
  if (param_3 != '\0') {
    uVar1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    func_0x00e745a1(param_1 + 0x48,uVar1,(undefined4 *)(param_1 + 0x74));
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 1;
  func_0x00e7323d(param_1 + 0x48);
  return;
}



void __thiscall FUN_00838d70(int *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f32b7d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = func_0x00e7307f();
  if (iVar3 == 0) {
    iVar3 = param_1[0x11];
    if (iVar3 == 0x7fffffff) goto LAB_00838e8e;
    uStack_8 = 0;
    if ((param_2 != '\0') && ((char)param_1[0x1c] != '\0')) goto LAB_00838e99;
    unaff_EBX = param_1 + 4;
    cVar2 = func_0x00e7542f();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      if (*(char *)((int)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((int)param_1 + 0x7a) = 1;
        pcVar1 = *(code **)(*param_1 + 0x10);
        _guard_check_icall();
        (*pcVar1)();
      }
      iVar3 = param_1[0x1d];
      while (iVar3 == 0) {
        func_0x00e73265();
        iVar3 = param_1[0x1d];
      }
      cVar2 = func_0x00e7542f();
      if (cVar2 == '\0') {
        uStack_8 = 0xffffffff;
        func_0x00e730b2();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      goto LAB_00838ebb;
    }
  }
  else {
    iVar3 = func_0x00e7304a();
LAB_00838e8e:
    param_1[0x11] = iVar3 + -1;
    func_0x00e7304a();
LAB_00838e99:
    func_0x00837270();
  }
  func_0x0062c5a0(unaff_EBX);
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0062c660();
LAB_00838ebb:
  func_0x0062c5a0(unaff_EBX);
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0062c660();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00838ee0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f32bbd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = ZEXT48(param_1 + 6);
  iVar2 = func_0x00e7307f(param_1 + 6,uStack_14);
  if (iVar2 == 0) {
    iVar2 = param_1[0x11];
    if (iVar2 != 0x7fffffff) {
      uStack_1c._0_5_ = CONCAT14(1,(undefined4)uStack_1c);
      uStack_8 = 0;
      if (*(char *)((int)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((int)param_1 + 0x7a) = 1;
        pcVar1 = *(code **)(*param_1 + 0x10);
        _guard_check_icall(&uStack_1c);
        (*pcVar1)();
      }
      if (param_1[0x1d] == 0) {
        do {
          func_0x00e73265(param_1 + 0x12,(undefined4)uStack_1c);
        } while (param_1[0x1d] == 0);
      }
      uStack_8 = 0xffffffff;
      if (uStack_1c._4_1_ != '\0') {
        func_0x00e730b2((undefined4)uStack_1c);
      }
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar2 = func_0x00e7304a(5);
  }
  param_1[0x11] = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00839020(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f32c0b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::_Associated_state<>::vftable;
  uStack_8 = 1;
  if ((*(char *)((int)param_1 + 0x79) != '\0') && (param_1[0x1d] == 0)) {
    func_0x00e7465d(param_1 + 6,uVar4);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00e75356(param_1 + 4);
  uStack_8 = 0xffffffff;
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar2)();
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
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __fastcall FUN_00839f90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eda3e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar6 = FUN_00dbe1b0(1,param_1 + 0x14,uVar5);
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      iVar6 = (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



undefined4 * __thiscall FUN_0083a010(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x88);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0083a040(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0083a070(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0083a0a0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



void __fastcall FUN_0083a480(int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_74;
  undefined8 uStack_70;
  undefined1 **ppuStack_68;
  undefined **ppuStack_64;
  uint uStack_60;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined **ppuStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar4 = (int *)(param_1 + 0xc);
  puStack_c = &DAT_00f3322d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_60 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  iVar3 = *piVar4;
  piStack_3c = piVar4;
  uStack_14 = uStack_60;
  if ((iVar3 == 0) ||
     (((*(char *)(param_1 + 0x10) != '\0' && (*(char *)(iVar3 + 0x70) != '\0')) ||
      (*(int *)(iVar3 + 0x74) != 0)))) {
LAB_0083a8d9:
    iStack_8 = 0xffffffff;
    ppuStack_64 = (undefined **)0x83a8e7;
    func_0x00838990();
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  ppuStack_64 = (undefined **)&uStack_2c;
  ppuStack_20 = (undefined **)0x0;
  puStack_38 = &DAT_0112e1b4;
  ppuStack_68 = &puStack_38;
  uStack_34 = CONCAT31(uStack_34._1_3_,1);
  uStack_24 = 0;
  ppuStack_30 = std::exception::vftable;
  uStack_2c = 0;
  uStack_70 = CONCAT44(0x83a730,(undefined4)uStack_70);
  __std_exception_copy();
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  ppuStack_30 = std::future_error::vftable;
  uStack_24 = 1;
  ppuStack_20 = &PTR_vftable_012bc31c;
  iStack_8._0_1_ = 3;
  piStack_3c = (int *)&ppuStack_74;
  uStack_1c = CONCAT44(&ppuStack_74,(undefined4)uStack_1c);
  ppuStack_74 = std::exception::vftable;
  uStack_70 = 0;
  __std_exception_copy(&uStack_2c,&uStack_70);
  ppuStack_74 = std::future_error::vftable;
  ppuStack_68 = (undefined1 **)uStack_24;
  ppuStack_64 = ppuStack_20;
  iStack_8._0_1_ = 3;
  func_0x008390f0(auStack_4c);
  iStack_8._0_1_ = 7;
  uVar2 = (undefined1)iStack_8;
  iStack_8._0_1_ = 7;
  piVar4 = (int *)*piVar4;
  piStack_3c = piVar4;
  if ((piVar4 == (int *)0x0) ||
     ((*(char *)(param_1 + 0x10) != '\0' && ((char)piVar4[0x1c] != '\0')))) {
    ppuStack_64 = (undefined **)0x4;
    ppuStack_68 = (undefined1 **)0x83a909;
    iStack_8._0_1_ = uVar2;
    func_0x00837270();
LAB_0083a909:
    ppuStack_64 = (undefined **)0x5;
    ppuStack_68 = (undefined1 **)0x83a910;
    iVar3 = func_0x00e7304a();
  }
  else {
    ppuStack_64 = (undefined **)auStack_4c;
    puStack_38 = (undefined1 *)0x0;
    ppuStack_68 = &puStack_38;
    uStack_34 = 0;
    uStack_70 = CONCAT44(0x83a7f1,(undefined4)uStack_70);
    func_0x00e7522e();
    iStack_8._0_1_ = 8;
    uStack_1c = ZEXT48(piVar4 + 6);
    uStack_70 = CONCAT44(piVar4 + 6,0x83a80d);
    iVar3 = func_0x00e7307f();
    if (iVar3 != 0) goto LAB_0083a909;
    iVar3 = piVar4[0x11];
    if (iVar3 != 0x7fffffff) {
      uStack_1c._0_5_ = CONCAT14(1,(undefined4)uStack_1c);
      iStack_8._0_1_ = 9;
      ppuStack_64 = &puStack_38;
      ppuStack_68 = (undefined1 **)&uStack_44;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_70 = CONCAT44(0x83a849,(undefined4)uStack_70);
      func_0x00e7522e();
      iStack_8._0_1_ = 10;
      if (*(char *)((int)piVar4 + 0x79) == '\0') {
        ppuStack_64 = (undefined **)&uStack_44;
        ppuStack_68 = (undefined1 **)(piVar4 + 4);
        uStack_70 = CONCAT44(0x83a867,(undefined4)uStack_70);
        func_0x00e7521e();
        pcVar1 = *(code **)(*piVar4 + 0x14);
        ppuStack_68 = (undefined1 **)&uStack_1c;
        ppuStack_64 = (undefined **)0x0;
        uStack_70 = CONCAT44(0x83a87d,(undefined4)uStack_70);
        _guard_check_icall();
        uStack_70 = CONCAT44(0x83a882,(undefined4)uStack_70);
        (*pcVar1)();
        iStack_8._0_1_ = 9;
        uStack_70 = CONCAT44(&uStack_44,0x83a88f);
        func_0x00e75356();
        iStack_8._0_1_ = 8;
        if (uStack_1c._4_1_ != '\0') {
          uStack_70 = CONCAT44((int)uStack_1c,0x83a8a4);
          func_0x00e730b2();
        }
        iStack_8._0_1_ = 7;
        uStack_70._4_4_ = &puStack_38;
        uStack_70._0_4_ = 0x83a8b4;
        func_0x00e75356();
        iStack_8._0_1_ = 3;
        uStack_70 = CONCAT44(uStack_70._4_4_,auStack_4c);
        ppuStack_74 = (undefined **)0x83a8c1;
        func_0x00e75356();
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        ppuStack_30 = std::exception::vftable;
        uStack_70 = CONCAT44(&uStack_2c,0x83a8d6);
        __std_exception_destroy();
        goto LAB_0083a8d9;
      }
      goto LAB_0083a91b;
    }
  }
  ppuStack_64 = (undefined **)0x6;
  piVar4[0x11] = iVar3 + -1;
  ppuStack_68 = (undefined1 **)0x83a91b;
  func_0x00e7304a();
LAB_0083a91b:
  ppuStack_64 = (undefined **)0x3;
  ppuStack_68 = (undefined1 **)0x83a922;
  func_0x00837270();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_0083a490(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



void __thiscall FUN_0083a4c0(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00839e60(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0083a520(void)

{
  return &`public:_class_std::shared_future<>___thiscall_AsyncDispatcher::schedule<>(class_`private:_class_std::shared_ptr<>___thiscall_SoundManager::createSoundSource(class_std::basic_string<>_const&)'::`8'::<lambda_1>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



int __fastcall FUN_0083a530(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(param_1 + 4);
  uVar5 = func_0x008388c0(auStack_18,uVar4);
  uStack_8 = 0;
  iVar6 = *piVar2;
  if ((iVar6 != 0) && (((char)piVar2[1] == '\0' || (*(char *)(iVar6 + 0x70) == '\0')))) {
    iVar6 = func_0x0083a0d0(uVar5,iVar6);
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar2 = piStack_14 + 1;
      iVar1 = *piVar2;
      iVar6 = *piVar2;
      *piVar2 = iVar1 + -1;
      UNLOCK();
      if (iVar1 + -1 == 0) {
        pcVar3 = *(code **)*piStack_14;
        _guard_check_icall();
        iVar6 = (*pcVar3)();
        LOCK();
        piVar2 = piStack_14 + 2;
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          pcVar3 = *(code **)(*piStack_14 + 4);
          _guard_check_icall();
          iVar6 = (*pcVar3)();
        }
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return iVar6;
  }
  func_0x00837270(4);
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}



undefined4 * __fastcall FUN_0083a5f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f331a3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x24,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)(param_1 + 8);
  uStack_8 = 1;
  func_0x00469da0(param_1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



void __fastcall FUN_0083ab60(int param_1)

{
  FUN_00dd9770(*(undefined4 *)(param_1 + 0x10));
  return;
}



int __fastcall FUN_0083ab70(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eadefd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = FUN_00dda830(*(undefined4 *)(param_1 + 0x10),uVar5);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00ddb4e0(*(undefined4 *)(param_1 + 0x10),0x1009,0);
    uStack_18 = 0;
    piStack_14 = (int *)0x0;
    uStack_8 = 0;
    iVar6 = func_0x0046ffa0(&uStack_18);
    piVar4 = piStack_14;
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_14 + 1;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_14;
        _guard_check_icall();
        iVar6 = (*pcVar3)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piVar4 + 4);
          _guard_check_icall();
          iVar6 = (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __fastcall FUN_0083ac40(int param_1)

{
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  uStack_c = 0x1012;
  FUN_00dd86b0(*(undefined4 *)(param_1 + 0x10),0x1010,&uStack_c);
  FUN_008ab370();
  return;
}



void __thiscall FUN_0083ac90(int param_1,undefined1 param_2)

{
  FUN_00ddb4e0(*(undefined4 *)(param_1 + 0x10),0x1007,param_2);
  return;
}



void __thiscall FUN_0083acb0(int param_1,undefined1 param_2)

{
  FUN_00ddb4e0(*(undefined4 *)(param_1 + 0x10),0x202,param_2);
  return;
}



void __thiscall FUN_0083acd0(int param_1,undefined4 param_2)

{
  FUN_00ddb1e0(*(undefined4 *)(param_1 + 0x10),0x1020,param_2);
  return;
}



void __thiscall FUN_0083ad00(int param_1,undefined4 param_2)

{
  FUN_00ddb1e0(*(undefined4 *)(param_1 + 0x10),0x100a,param_2);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



void __thiscall FUN_0083ad30(int param_1,undefined4 param_2)

{
  FUN_00ddb1e0(*(undefined4 *)(param_1 + 0x10),0x1003,param_2);
  return;
}



void __thiscall FUN_0083ad60(int param_1,int *param_2)

{
  FUN_00dd8ea0(*(undefined4 *)(param_1 + 0x10),0x1004,(float)*param_2,(float)param_2[1],0);
  return;
}



void __thiscall FUN_0083ada0(int param_1,int *param_2)

{
  FUN_00dd8ea0(*(undefined4 *)(param_1 + 0x10),0x1006,(float)*param_2,(float)param_2[1],0);
  return;
}



void __thiscall FUN_0083ade0(int *param_1,int param_2,float param_3)

{
  code *pcVar1;
  uint *puVar2;
  float in_XMM0_Da;
  float fVar3;
  undefined1 auStack_10 [12];
  
  puVar2 = (uint *)func_0x0046ede0(auStack_10);
  func_0x00e87ec0(*puVar2 - DAT_0145e648,(puVar2[1] - DAT_0145e64c) - (uint)(*puVar2 < DAT_0145e648)
                  ,1000000,0);
  func_0x008abfd0();
  in_XMM0_Da = in_XMM0_Da * 0.001;
  if (param_1[0xe] != 0) {
    if (param_1[0xe] == 1) {
      fVar3 = 1.0 - (in_XMM0_Da - (float)param_1[0xf]) / (float)param_1[0x10];
    }
    else {
      fVar3 = (in_XMM0_Da - (float)param_1[0xf]) / (float)param_1[0x10];
    }
    in_XMM0_Da = in_XMM0_Da - fVar3 * param_3;
  }
  param_1[0xf] = (int)in_XMM0_Da;
  param_1[0xe] = param_2;
  param_1[0x10] = (int)param_3;
  param_1[0x11] = param_1[0x12];
  if (param_2 == 1) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    _guard_check_icall(0);
    (*pcVar1)();
  }
  return;
}



void __fastcall FUN_0083aeb0(int *param_1)

{
  code *pcVar1;
  float in_XMM0_Da;
  float fVar2;
  float fVar3;
  
  FUN_0083f530();
  func_0x008abfd0();
  if (param_1[0xe] == 1) {
    fVar2 = in_XMM0_Da * 0.001 - (float)param_1[0xf];
    if (fVar2 < (float)param_1[0x10]) {
      pcVar1 = *(code **)(*param_1 + 0x20);
      _guard_check_icall((fVar2 / (float)param_1[0x10]) * (float)param_1[0x11]);
      (*pcVar1)();
      return;
    }
LAB_0083af46:
    param_1[0xe] = 0;
    return;
  }
  if (param_1[0xe] == 2) {
    fVar3 = in_XMM0_Da * 0.001 - (float)param_1[0xf];
    fVar2 = (float)param_1[0x10];
    pcVar1 = *(code **)(*param_1 + 0x20);
    if (fVar2 <= fVar3) {
      _guard_check_icall(param_1[0x11]);
      (*pcVar1)();
      pcVar1 = *(code **)(*param_1 + 8);
      _guard_check_icall();
      (*pcVar1)();
      goto LAB_0083af46;
    }
    _guard_check_icall(((fVar2 - fVar3) / fVar2) * (float)param_1[0x11]);
    (*pcVar1)();
  }
  return;
}



undefined1 __fastcall FUN_0083af80(int param_1)

{
  return *(undefined1 *)(param_1 + 0x79);
}



void __thiscall FUN_0083b110(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f333a6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = StreamSoundSource::vftable;
  iStack_8 = 2;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  if (*(char *)((int)param_1 + 0x7b) == '\0') {
    FUN_0083ab70(uStack_14);
    FUN_00dd86b0(param_1[4],0x1015,&iStack_18);
    iVar3 = 0;
    if (0 < iStack_18) {
      do {
        FUN_00ddabb0(param_1[4],1,&puStack_1c);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iStack_18);
    }
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  puStack_1c = param_1 + 0x15;
  iStack_8._0_1_ = 1;
  func_0x008ab4ad(puStack_1c,8,4,FUN_00468340);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar2)();
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
  }
  iStack_8 = 0xffffffff;
  func_0x0083aa80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0083b280(int param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_14 [4];
  int iStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_14;
  *(undefined1 *)(param_1 + 0x79) = 1;
  if (*(int **)(param_1 + 0x4c) == (int *)0x0) {
    *(undefined1 *)(param_1 + 0x7b) = 1;
    FUN_008ab370();
    return;
  }
  if (*(char *)(param_1 + 0x7a) != '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 8);
    _guard_check_icall();
    (*pcVar1)();
    *(undefined1 *)(param_1 + 0x7a) = 0;
  }
  FUN_00dd86b0(*(undefined4 *)(param_1 + 0x10),0x1015,&iStack_10);
  iVar4 = 0;
  if (-iStack_10 != -4 && -1 < -iStack_10 + 4) {
    piVar3 = (int *)(param_1 + 0x54);
    do {
      cVar2 = func_0x0083b600(*(undefined4 *)(*piVar3 + 8));
      if (cVar2 == '\0') break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 < 4 - iStack_10);
  }
  FUN_00dd9770(*(undefined4 *)(param_1 + 0x10));
  FUN_008ab370();
  return;
}



void __fastcall FUN_0083b340(int param_1)

{
  int iVar1;
  undefined1 auStack_10 [4];
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x79) = 0;
  if (*(char *)(param_1 + 0x7b) == '\0') {
    FUN_0083ab70();
    FUN_00dd86b0(*(undefined4 *)(param_1 + 0x10),0x1015,&iStack_c);
    iVar1 = 0;
    if (0 < iStack_c) {
      do {
        FUN_00ddabb0(*(undefined4 *)(param_1 + 0x10),1,auStack_10);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iStack_c);
    }
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_0083b3b0(int *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *unaff_FS_OFFSET;
  float in_XMM0_Da;
  float fVar4;
  float fVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  char *pcStack_48;
  undefined1 **ppuStack_44;
  uint uStack_40;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 *puStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f33425;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uStack_40;
  if (*(char *)((int)param_1 + 0x7b) != '\0') goto LAB_0083b5d7;
  ppuStack_44 = (undefined1 **)0x83b3eb;
  FUN_0083f530();
  ppuStack_44 = (undefined1 **)0x83b3f2;
  func_0x008abfd0();
  if (param_1[0xe] == 1) {
    fVar4 = in_XMM0_Da * 0.001 - (float)param_1[0xf];
    if (fVar4 < (float)param_1[0x10]) {
      pcVar3 = *(code **)(*param_1 + 0x20);
      ppuStack_44 = (undefined1 **)((fVar4 / (float)param_1[0x10]) * (float)param_1[0x11]);
LAB_0083b494:
      pcStack_48 = (char *)0x83b49c;
      _guard_check_icall();
      pcStack_48 = (char *)0x83b4a0;
      (*pcVar3)();
    }
    else {
      param_1[0xe] = 0;
    }
  }
  else if (param_1[0xe] == 2) {
    fVar5 = in_XMM0_Da * 0.001 - (float)param_1[0xf];
    fVar4 = (float)param_1[0x10];
    ppuStack_44 = (undefined1 **)param_1[0x11];
    pcVar3 = *(code **)(*param_1 + 0x20);
    if (fVar5 < fVar4) {
      ppuStack_44 = (undefined1 **)(((fVar4 - fVar5) / fVar4) * (float)ppuStack_44);
      goto LAB_0083b494;
    }
    pcStack_48 = (char *)0x83b462;
    _guard_check_icall();
    pcStack_48 = (char *)0x83b466;
    (*pcVar3)();
    pcVar3 = *(code **)(*param_1 + 8);
    pcStack_48 = (char *)0x83b473;
    _guard_check_icall();
    pcStack_48 = (char *)0x83b477;
    (*pcVar3)();
    param_1[0xe] = 0;
  }
  ppuStack_44 = (undefined1 **)&iStack_18;
  iStack_18 = 0;
  pcStack_48 = (char *)0x1016;
  puStack_4c = (uint *)param_1[4];
  uStack_50 = 0x83b4b8;
  FUN_00dd86b0();
  iVar2 = 0;
  if (0 < iStack_18) {
    do {
      ppuStack_44 = &puStack_1c;
      pcStack_48 = (char *)0x1;
      puStack_4c = (uint *)param_1[4];
      uStack_50 = 0x83b4d0;
      FUN_00ddabb0();
      ppuStack_44 = (undefined1 **)puStack_1c;
      pcStack_48 = (char *)0x83b4dd;
      cVar1 = func_0x0083b600();
      if (cVar1 == '\0') break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_18);
  }
  pcVar3 = *(code **)(*param_1 + 0xc);
  ppuStack_44 = (undefined1 **)0x83b4f4;
  _guard_check_icall();
  ppuStack_44 = (undefined1 **)0x83b4f8;
  cVar1 = (*pcVar3)();
  if ((cVar1 == '\0') && (*(char *)((int)param_1 + 0x79) != '\0')) {
    if (((char)param_1[0x1e] == '\0') && (*(char *)((int)param_1 + 0x7a) != '\0')) {
      pcVar3 = *(code **)(*param_1 + 8);
    }
    else {
      if (iStack_18 == 0) {
        ppuStack_44 = (undefined1 **)0x15;
        uStack_24 = 0;
        pcStack_48 = "audio buffer underrun";
        uStack_20 = 0;
        pcStack_34 = (char *)0x0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        puStack_4c = (uint *)0x83b54d;
        func_0x0046bc40();
        uStack_8 = 0;
        puStack_1c = (undefined1 *)&uStack_60;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        puStack_4c = (uint *)0x0;
        func_0x0046bc40("?update@StreamSoundSource@@UAEXXZ",0x21);
        uStack_8 = uStack_8 & 0xffffff00;
        func_0x005eea60(3,&pcStack_34);
        uStack_8 = 0xffffffff;
        if (0xf < uStack_20) {
          ppuStack_44 = (undefined1 **)uStack_20;
          pcStack_48 = pcStack_34;
          puStack_4c = (uint *)&pcStack_34;
          uStack_50 = 0x83b5ab;
          func_0x0046b1f0();
        }
        uStack_24 = 0;
        uStack_20 = 0xf;
        pcStack_34 = (char *)((uint)pcStack_34 & 0xffffff00);
      }
      else if ((char)param_1[0x1e] == '\0') goto LAB_0083b5d7;
      pcVar3 = *(code **)(*param_1 + 4);
    }
    ppuStack_44 = (undefined1 **)0x83b5d3;
    _guard_check_icall();
    ppuStack_44 = (undefined1 **)0x83b5d7;
    (*pcVar3)();
  }
LAB_0083b5d7:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_0083ce80(void)

{
  func_0x0046a610(4,1);
  return &DAT_0083ce99;
}



undefined * Catch_0083d1ee(void)

{
  func_0x0046a610(4,1);
  return &DAT_0083d207;
}



undefined4 FUN_0083f0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x0083e2e0(param_1,param_3,param_4);
  return param_1;
}



void FUN_0083f110(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f341f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_3 == 4) {
LAB_0083f1f7:
    *param_2 = (int)&boost::algorithm::detail::token_finderF<>::RTTI_Type_Descriptor;
    *(undefined2 *)(param_2 + 1) = 0;
  }
  else {
    if (param_3 == 0) {
      func_0x0083da70(param_1);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    if (param_3 == 1) {
      func_0x0083da70(param_1);
      if ((uint)param_1[2] < 9) goto LAB_0083f206;
      iVar2 = *param_1;
    }
    else {
      if (param_3 != 2) {
        if (param_3 == 3) {
          iVar2 = __std_type_info_compare(*param_2 + 4,0x1325714,uVar1);
          if (iVar2 != 0) {
            param_1 = (int *)0x0;
          }
          *param_2 = (int)param_1;
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        goto LAB_0083f1f7;
      }
      if ((uint)param_2[2] < 9) goto LAB_0083f206;
      iVar2 = *param_2;
    }
    uStack_8 = 0xffffffff;
    if (iVar2 != 0) {
      func_0x008ab37e(iVar2);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_0083f206:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0083f530(void)

{
  uint *puVar1;
  undefined1 auStack_10 [12];
  
  puVar1 = (uint *)func_0x0046ede0(auStack_10);
  func_0x00e87ec0(*puVar1 - DAT_0145e648,(puVar1[1] - DAT_0145e64c) - (uint)(*puVar1 < DAT_0145e648)
                  ,1000000,0);
  return;
}



void FUN_0083f570(void)

{
  uint *puVar1;
  undefined1 auStack_10 [12];
  
  puVar1 = (uint *)func_0x0046ede0(auStack_10);
  func_0x00e87ec0(*puVar1 - DAT_0145e648,(puVar1[1] - DAT_0145e64c) - (uint)(*puVar1 < DAT_0145e648)
                  ,1000,0);
  return;
}



undefined8 * __thiscall
FUN_00840430(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 *puStack_1c;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f34556;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  uStack_8 = 0;
  uStack_2c = 1;
  piStack_30 = (int *)*param_4;
  if (piStack_30 != (int *)0x0) {
    uStack_20 = *(uint *)(param_1 + 0x28);
    piVar8 = (int *)(param_1 + 0x14);
    uStack_24 = *(undefined4 *)(param_1 + 0x24);
    piStack_14 = piVar8;
    if (0xf < uStack_20) {
      piStack_14 = (int *)*piVar8;
    }
    piStack_18 = (int *)(param_1 + 0x14);
    puStack_1c = (undefined4 *)((int)param_2 + 4);
    cVar4 = func_0x0046cf20(piStack_14,uStack_24,"parent",6,uVar5);
    if (cVar4 == '\0') {
      piVar9 = piVar8;
      if (0xf < uStack_20) {
        piVar8 = (int *)*piVar8;
        piVar9 = piStack_18;
      }
      cVar4 = func_0x0046cf20(piVar8,uStack_24,&DAT_011a08d0,4,uVar5);
      if (cVar4 == '\0') {
        piVar8 = piVar9;
        if (0xf < uStack_20) {
          piVar8 = (int *)*piVar9;
        }
        cVar4 = func_0x0046cf20(piVar8,uStack_24,&DAT_011a08d8,4,uVar5);
        if (cVar4 == '\0') {
          uVar7 = FUN_00858dc0(&uStack_34,piVar9);
          uStack_8 = 5;
        }
        else {
          uVar7 = FUN_00858ca0(&uStack_34,param_3);
          uStack_8 = 4;
        }
        func_0x0046ffa0(uVar7);
        uStack_8 = uStack_8 >> 8;
      }
      else {
        puVar6 = (undefined4 *)FUN_00858b70(auStack_28,param_3);
        uVar7 = *puVar6;
        uVar2 = puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        uStack_34 = *(undefined4 *)param_2;
        *(undefined4 *)param_2 = uVar7;
        piStack_30 = (int *)*puStack_1c;
        *puStack_1c = uVar2;
        uStack_8._1_3_ = 0;
        uStack_8._0_1_ = 2;
        piStack_14 = piStack_30;
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
            piVar8 = piStack_14 + 2;
            iVar3 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar1 = *(code **)(*piStack_14 + 4);
              _guard_check_icall();
              (*pcVar1)();
            }
          }
        }
        uStack_8 = (uint)uStack_8._1_3_;
      }
      uStack_8 = uStack_8 << 8;
      FUN_00468340();
    }
    else {
      if (param_4[1] != 0) {
        LOCK();
        piVar8 = (int *)(param_4[1] + 4);
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      uVar7 = param_4[1];
      uStack_34 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = *param_4;
      piStack_30 = *(int **)((int)param_2 + 4);
      *(undefined4 *)((int)param_2 + 4) = uVar7;
      uStack_8 = 0;
      if (piStack_30 != (int *)0x0) {
        LOCK();
        iVar3 = piStack_30[1] + -1;
        piStack_30[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar1 = *(code **)*piStack_30;
          piStack_14 = piStack_30;
          _guard_check_icall();
          (*pcVar1)();
          LOCK();
          piVar8 = piStack_14 + 2;
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            pcVar1 = *(code **)(*piStack_14 + 4);
            _guard_check_icall();
            (*pcVar1)();
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int __thiscall FUN_008406c0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_14;
  int iStack_10;
  
  iVar1 = *param_2;
  iStack_10 = *(int *)(iVar1 + 0x40);
  iVar4 = *(int *)(iVar1 + 0x48);
  iVar5 = *(int *)(iVar1 + 0x4c);
  iStack_14 = *(int *)(iVar1 + 0x44);
  iVar2 = *param_3;
  if (iVar1 == iVar2) {
    iStack_10 = *(int *)(iVar2 + 0x200) + *(int *)(iVar2 + 0x40);
    iVar4 = *(int *)(iVar2 + 0x48) - *(int *)(iVar2 + 0x1f8);
    iStack_14 = *(int *)(iVar2 + 500) + *(int *)(iVar2 + 0x44);
    iVar5 = *(int *)(iVar2 + 0x4c) - *(int *)(iVar2 + 0x1fc);
  }
  iVar6 = *(int *)(param_1 + 0x10) + -1;
  iVar3 = 0;
  switch(iVar6) {
  case 0:
    iVar3 = iStack_14;
    break;
  case 1:
    iVar3 = iVar5;
    break;
  case 2:
    iVar3 = iStack_10;
    break;
  case 3:
    iVar3 = iVar4;
    break;
  case 4:
    iVar3 = (iVar5 - iStack_14) / 2 + iStack_14;
    break;
  case 5:
    iVar3 = (iVar4 - iStack_10) / 2 + iStack_10;
  }
  if (iVar1 == iVar2) {
    switch(iVar6) {
    case 0:
    case 1:
    case 4:
      iVar3 = iVar3 - *(int *)(iVar2 + 100);
      break;
    case 2:
    case 3:
    case 5:
      return iVar3 - *(int *)(iVar2 + 0x60);
    }
  }
  return iVar3;
}



void __thiscall FUN_00840a20(int param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uVar2 = *param_2;
  uStack_8 = ((((uVar2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^
              uVar2 >> 0x10 & 0xff) * 0x1000193 ^ uVar2 >> 0x18) * 0x1000193;
  iVar4 = func_0x005850c0(auStack_10,param_2,uStack_8);
  piVar3 = *(int **)(iVar4 + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x2c) + (*(uint *)(param_1 + 0x38) & uStack_8) * 8);
    if ((int *)piVar1[1] == piVar3) {
      if ((int *)*piVar1 == piVar3) {
        iVar4 = *(int *)(param_1 + 0x24);
        *piVar1 = iVar4;
        piVar1[1] = iVar4;
      }
      else {
        piVar1[1] = piVar3[1];
      }
    }
    else if ((int *)*piVar1 == piVar3) {
      *piVar1 = *piVar3;
    }
    iVar4 = *piVar3;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    *(int *)piVar3[1] = iVar4;
    *(int *)(iVar4 + 4) = piVar3[1];
    func_0x005d8390();
    func_0x008ab812(piVar3,0x18);
  }
  FUN_008439e0();
  return;
}



void FUN_00840af0(undefined4 param_1,undefined4 param_2)

{
  func_0x00840910(param_1,6,param_2,6);
  func_0x00840910(param_1,5,param_2,5);
  return;
}



void FUN_00840b30(undefined4 param_1,undefined4 param_2)

{
  func_0x00840910(param_1,3,param_2,3);
  func_0x00840910(param_1,4,param_2,4);
  func_0x00840910(param_1,1,param_2,1);
  func_0x00840910(param_1,2,param_2,2);
  return;
}



void __thiscall FUN_00840b80(int param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uVar2 = *param_2;
  uStack_8 = ((((uVar2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^
              uVar2 >> 0x10 & 0xff) * 0x1000193 ^ uVar2 >> 0x18) * 0x1000193;
  iVar4 = func_0x005850c0(auStack_10,param_2,uStack_8);
  piVar3 = *(int **)(iVar4 + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x2c) + (*(uint *)(param_1 + 0x38) & uStack_8) * 8);
    if ((int *)piVar1[1] == piVar3) {
      if ((int *)*piVar1 == piVar3) {
        iVar4 = *(int *)(param_1 + 0x24);
        *piVar1 = iVar4;
        piVar1[1] = iVar4;
      }
      else {
        piVar1[1] = piVar3[1];
      }
    }
    else if ((int *)*piVar1 == piVar3) {
      *piVar1 = *piVar3;
    }
    iVar4 = *piVar3;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    *(int *)piVar3[1] = iVar4;
    *(int *)(iVar4 + 4) = piVar3[1];
    func_0x005d8390();
    func_0x008ab812(piVar3,0x18);
  }
  FUN_008439e0();
  return;
}



void FUN_00840b90(int *param_1,int *param_2,int param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint auStack_b8 [4];
  undefined4 uStack_a8;
  uint uStack_a4;
  uint auStack_a0 [4];
  undefined4 uStack_90;
  uint uStack_8c;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  int *piStack_70;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  uint auStack_60 [7];
  int iStack_44;
  uint uStack_40;
  int *piStack_3c;
  int *piStack_38;
  char cStack_31;
  int *piStack_30;
  char cStack_2a;
  char cStack_29;
  int iStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3460c;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_30 = param_1;
  piStack_70 = param_2;
  uStack_40 = 0;
  uStack_8 = 0;
  uStack_24 = 0;
  FUN_0046e7a0();
  uStack_8._0_1_ = 1;
  if ((int)uStack_24 != 0) {
    if (param_3 != *piStack_30) {
      if (param_3 == 0) {
        func_0x004683d0();
      }
      if ((*(int *)(*piStack_30 + 0x50) != 0) || (*(int *)(*piStack_30 + 0x54) != 0)) {
        iStack_6c = (((*(int *)((int)uStack_24 + 0x48) - *(int *)((int)uStack_24 + 0x200)) -
                     *(int *)((int)uStack_24 + 0x1f8)) - *(int *)((int)uStack_24 + 0x40)) + 1;
        piStack_68 = (int *)((((*(int *)((int)uStack_24 + 0x4c) - *(int *)((int)uStack_24 + 0x44)) -
                              *(int *)((int)uStack_24 + 0x1fc)) - *(int *)((int)uStack_24 + 500)) +
                            1);
        func_0x0085e3b0();
      }
      iVar2 = *piStack_30;
      cStack_29 = '\0';
      cStack_2a = '\0';
      auStack_60[2] = *(int *)(iVar2 + 0x40);
      auStack_60[4] = *(int *)(iVar2 + 0x48);
      auStack_60[3] = *(int *)(iVar2 + 0x44);
      auStack_60[5] = *(int *)(iVar2 + 0x4c);
      piStack_64 = *(int **)(*piStack_70 + 8);
      piVar6 = *(int **)(*piStack_70 + 0xc);
      auStack_60[6] = auStack_60[3];
      iStack_44 = auStack_60[2];
      piStack_3c = piVar6;
      if (piStack_64 != piVar6) {
        do {
          if (((undefined4 *)*piStack_64)[4] != 0) {
            uStack_1c = 0;
            pcVar1 = (code *)**(undefined4 **)*piStack_64;
            _guard_check_icall(&uStack_1c);
            (*pcVar1)();
            uVar4 = auStack_60[6];
            iVar2 = iStack_44;
            if ((int)uStack_1c != 0) {
              if (piStack_38[7] != 0) {
                LOCK();
                piVar6 = (int *)(piStack_38[7] + 4);
                *piVar6 = *piVar6 + 1;
                UNLOCK();
              }
              iStack_6c = piStack_38[6];
              piVar6 = (int *)piStack_38[7];
              cStack_31 = (int)uStack_1c != iStack_6c;
              uStack_40 = uStack_40 & 0xfffffffd;
              uStack_8._0_1_ = 6;
              piStack_68 = piVar6;
              if (piVar6 != (int *)0x0) {
                LOCK();
                iVar2 = piVar6[1] + -1;
                piVar6[1] = iVar2;
                UNLOCK();
                if (iVar2 == 0) {
                  pcVar1 = *(code **)*piVar6;
                  _guard_check_icall();
                  (*pcVar1)();
                  LOCK();
                  iVar2 = piVar6[2] + -1;
                  piVar6[2] = iVar2;
                  UNLOCK();
                  if (iVar2 == 0) {
                    pcVar1 = *(code **)(*piVar6 + 4);
                    _guard_check_icall();
                    (*pcVar1)();
                  }
                }
              }
              piVar6 = piStack_38;
              if (cStack_31 != '\0') {
                iStack_28 = 0;
                func_0x008414e0();
                if ((iStack_28 != piVar6[9]) &&
                   (*(char *)(*(int *)(iStack_28 + 0x10) + 0x14) == '\0')) {
                  pcVar1 = *(code **)(*piVar6 + 0x2c);
                  if (param_4 != (int *)0x0) {
                    LOCK();
                    param_4[1] = param_4[1] + 1;
                    UNLOCK();
                  }
                  uStack_8._0_1_ = 6;
                  _guard_check_icall(&uStack_1c,(int *)(iStack_28 + 0x10));
                  (*pcVar1)();
                }
              }
              pcVar1 = *(code **)(*(int *)*piStack_64 + 4);
              _guard_check_icall();
              iVar5 = (*pcVar1)();
              uVar4 = auStack_60[6];
              iVar2 = iStack_44;
              switch(*(undefined4 *)(*piStack_64 + 0xc)) {
              case 1:
                auStack_60[3] = *(int *)(*piStack_30 + 0x1e4) + iVar5;
                uVar4 = auStack_60[3];
                if (cStack_29 == '\0') {
                  cStack_29 = '\x01';
                  auStack_60[5] = auStack_60[5] + (auStack_60[3] - auStack_60[6]);
                  uVar4 = auStack_60[3];
                }
                break;
              case 2:
                if (cStack_29 == '\0') {
                  iVar5 = iVar5 - *(int *)(*piStack_30 + 0x1ec);
                  auStack_60[3] = auStack_60[6] + (iVar5 - auStack_60[5]);
                  cStack_29 = '\x01';
                  auStack_60[5] = iVar5;
                  uVar4 = auStack_60[3];
                }
                else {
                  auStack_60[5] = iVar5 - *(int *)(*piStack_30 + 0x1ec);
                }
                break;
              case 3:
                auStack_60[2] = *(int *)(*piStack_30 + 0x1f0) + iVar5;
                iVar2 = auStack_60[2];
                if (cStack_2a == '\0') {
                  cStack_2a = '\x01';
                  auStack_60[4] = auStack_60[4] + (auStack_60[2] - iStack_44);
                  iVar2 = auStack_60[2];
                }
                break;
              case 4:
                if (cStack_2a == '\0') {
                  iVar5 = iVar5 - *(int *)(*piStack_30 + 0x1e8);
                  auStack_60[2] = iStack_44 + (iVar5 - auStack_60[4]);
                  cStack_2a = '\x01';
                  auStack_60[4] = iVar5;
                  iVar2 = auStack_60[2];
                }
                else {
                  auStack_60[4] = iVar5 - *(int *)(*piStack_30 + 0x1e8);
                }
                break;
              case 5:
                cStack_29 = '\x01';
                auStack_60[3] =
                     ((*(int *)(*piStack_30 + 0x1e4) - *(int *)(*piStack_30 + 0x1ec)) + iVar5) -
                     (int)(auStack_60[5] - auStack_60[6]) / 2;
                auStack_60[5] = (auStack_60[5] - auStack_60[6]) + auStack_60[3];
                uVar4 = auStack_60[3];
                break;
              case 6:
                cStack_2a = '\x01';
                auStack_60[2] =
                     ((*(int *)(*piStack_30 + 0x1f0) - *(int *)(*piStack_30 + 0x1e8)) + iVar5) -
                     (int)(auStack_60[4] - iStack_44) / 2;
                auStack_60[4] = (auStack_60[4] - iStack_44) + auStack_60[2];
                iVar2 = auStack_60[2];
              }
            }
            iStack_44 = iVar2;
            auStack_60[6] = uVar4;
            uStack_8._0_1_ = 1;
            piVar3 = uStack_1c._4_4_;
            piVar6 = piStack_3c;
            if (uStack_1c._4_4_ != (int *)0x0) {
              LOCK();
              iVar2 = uStack_1c._4_4_[1] + -1;
              uStack_1c._4_4_[1] = iVar2;
              UNLOCK();
              if (iVar2 == 0) {
                pcVar1 = *(code **)*uStack_1c._4_4_;
                _guard_check_icall();
                (*pcVar1)();
                LOCK();
                piVar6 = piVar3 + 2;
                iVar2 = *piVar6 + -1;
                *piVar6 = iVar2;
                UNLOCK();
                piVar6 = piStack_3c;
                if (iVar2 == 0) {
                  pcVar1 = *(code **)(*piVar3 + 4);
                  _guard_check_icall();
                  (*pcVar1)();
                  piVar6 = piStack_3c;
                }
              }
            }
          }
          piStack_64 = piStack_64 + 2;
        } while (piStack_64 != piVar6);
      }
      cStack_29 = FUN_00857930();
      *(undefined1 *)(*piStack_70 + 0x14) = 1;
      goto LAB_00840d99;
    }
    uStack_8._0_1_ = 2;
    func_0x00469da0();
    uStack_40 = 4;
    uStack_8._0_1_ = 3;
    func_0x00469da0();
    uStack_40 = 0xc;
    auStack_60[4] = 0;
    auStack_60[0] = 0;
    auStack_60[1] = 0;
    auStack_60[2] = 0;
    auStack_60[3] = 0;
    auStack_60[5] = 0;
    func_0x0046bc40("child \'%s\' of parent widget \'%s\' is recursively anchored to itself, please fix this"
                    ,0x53);
    uStack_8._0_1_ = 4;
    func_0x00579f20(auStack_88,auStack_a0);
    uStack_8._0_1_ = 5;
    FUN_005ee340();
    uStack_8._0_1_ = 4;
    if (0xf < uStack_a4) {
      func_0x0046b1f0(auStack_b8);
    }
    uStack_a8 = 0;
    uStack_a4 = 0xf;
    auStack_b8[0] = auStack_b8[0] & 0xffffff00;
    uStack_8._0_1_ = 3;
    if (0xf < auStack_60[5]) {
      func_0x0046b1f0(auStack_60);
    }
    auStack_60[4] = 0;
    auStack_60[5] = 0xf;
    auStack_60[0] = auStack_60[0] & 0xffffff00;
    uStack_40 = 4;
    uStack_8._0_1_ = 2;
    if (0xf < uStack_74) {
      func_0x0046b1f0(auStack_88);
    }
    uStack_78 = 0;
    uStack_74 = 0xf;
    auStack_88[0] = auStack_88[0] & 0xffffff00;
    uStack_40 = 0;
    uStack_8._0_1_ = 1;
    if (0xf < uStack_8c) {
      func_0x0046b1f0(auStack_a0);
    }
    uStack_90 = 0;
    uStack_8c = 0xf;
    auStack_a0[0] = auStack_a0[0] & 0xffffff00;
  }
  cStack_29 = 0;
LAB_00840d99:
  uStack_8._0_1_ = 0;
  piStack_38 = uStack_24._4_4_;
  if (uStack_24._4_4_ != (int *)0x0) {
    LOCK();
    iVar2 = uStack_24._4_4_[1] + -1;
    uStack_24._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*uStack_24._4_4_;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_38[2] + -1;
      piStack_38[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_38 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piStack_38 = param_4;
  if (param_4 != (int *)0x0) {
    LOCK();
    iVar2 = param_4[1] + -1;
    param_4[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*param_4;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      piVar6 = piStack_38 + 2;
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar1 = *(code **)(*piStack_38 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_00841240(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3464d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)param_1[9];
  uVar6 = 0;
  for (puVar5 = (undefined4 *)*puVar1; puVar5 != puVar1; puVar5 = (undefined4 *)*puVar5) {
    *(undefined1 *)(puVar5[4] + 0x14) = 0;
  }
  puVar1 = (undefined4 *)param_1[9];
  uVar7 = uVar6;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    puVar5 = (undefined4 *)puVar2[4];
    if (*(char *)(puVar5 + 5) == '\0') {
      pcVar3 = *(code **)(*param_1 + 0x2c);
      uStack_8 = 0xffffffff;
      _guard_check_icall(puVar2 + 2,puVar2 + 4);
      cVar4 = (*pcVar3)();
      puVar5 = (undefined4 *)0x0;
      uVar7 = uVar6;
      if (cVar4 != '\0') {
        uVar7 = 1;
        uVar6 = uVar7;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return CONCAT31((int3)((uint)puVar5 >> 8),uVar7);
}



int __fastcall FUN_00841550(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecd923;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x34),uVar6);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iVar7 = param_1 + 0x10;
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar2 = piVar4 + 2;
    iVar3 = *piVar2;
    iVar7 = *piVar2;
    *piVar2 = iVar3 + -1;
    UNLOCK();
    if (iVar3 + -1 == 0) {
      pcVar5 = *(code **)(*piVar4 + 4);
      _guard_check_icall();
      iVar7 = (*pcVar5)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



undefined4 * __thiscall FUN_00841560(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 __thiscall FUN_00841670(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3476d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8590(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_008416d0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f347cf;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  func_0x0080ff70(&piStack_20,uStack_14);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar5 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar5 + 0x2c);
      uStack_28 = 1;
      pppuVar3 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar3 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar3,uStack_34,"spacing",7);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar4 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar4 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar5 + 0x2c);
        uStack_28 = 2;
        pppuVar3 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar3 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar3,uStack_4c,"fit-children",0xc);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar4 = uStack_48;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
          uVar4 = extraout_ECX_00;
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar1 = func_0x005bee00(uVar4);
          *(undefined1 *)(param_1 + 0x20) = uVar1;
          goto LAB_00841823;
        }
      }
      else {
        uVar2 = func_0x005cc550(uVar4);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
LAB_00841823:
        FUN_008439e0();
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00841990(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3476d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8590(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_008419f0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  uint auStack_104 [4];
  undefined4 uStack_f4;
  uint uStack_f0;
  uint auStack_ec [4];
  undefined4 uStack_dc;
  uint uStack_d8;
  uint auStack_d4 [4];
  undefined4 uStack_c4;
  uint uStack_c0;
  uint auStack_bc [4];
  undefined4 uStack_ac;
  uint uStack_a8;
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 **appuStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 **appuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f348db;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  func_0x0080ff70(&piStack_20,uStack_14);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar7 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar7 + 0x2c);
      uStack_28 = 1;
      pppuVar5 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar5 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar5,uStack_34,"direction",9);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 4;
        func_0x00469da0(*piVar7 + 0x2c);
        uStack_28 = 2;
        pppuVar5 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar5 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar5,uStack_4c,"spacing",7);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar6 = uStack_48;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
          uVar6 = extraout_ECX;
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          uStack_8._0_1_ = 5;
          func_0x00469da0(*piVar7 + 0x2c);
          uStack_28 = 4;
          pppuVar5 = appuStack_74;
          if (0xf < uStack_60) {
            pppuVar5 = (undefined4 ***)appuStack_74[0];
          }
          cStack_21 = func_0x0046cf20(pppuVar5,uStack_64,"auto-spacing",0xc);
          uStack_28 = 0;
          uStack_8._0_1_ = 0;
          uVar6 = uStack_60;
          if (0xf < uStack_60) {
            func_0x0046b1f0(appuStack_74,appuStack_74[0],uStack_60);
            uVar6 = extraout_ECX_00;
          }
          uStack_64 = 0;
          uStack_60 = 0xf;
          appuStack_74[0] = (undefined4 **)((uint)appuStack_74[0] & 0xffffff00);
          if (cStack_21 == '\0') {
            uStack_8._0_1_ = 6;
            func_0x00469da0(*piVar7 + 0x2c);
            uStack_28 = 8;
            pppuVar5 = appuStack_8c;
            if (0xf < uStack_78) {
              pppuVar5 = (undefined4 ***)appuStack_8c[0];
            }
            cStack_21 = func_0x0046cf20(pppuVar5,uStack_7c,"align-items",0xb);
            uStack_28 = 0;
            uStack_8._0_1_ = 0;
            if (0xf < uStack_78) {
              func_0x0046b1f0(appuStack_8c,appuStack_8c[0],uStack_78);
            }
            uStack_7c = 0;
            uStack_78 = 0xf;
            appuStack_8c[0] = (undefined4 **)((uint)appuStack_8c[0] & 0xffffff00);
            if (cStack_21 != '\0') {
              puVar3 = (undefined4 *)func_0x005ba8a0(auStack_d4,1);
              uStack_8._0_1_ = 7;
              puVar1 = puVar3 + 4;
              if (0xf < (uint)puVar3[5]) {
                puVar3 = (undefined4 *)*puVar3;
              }
              cStack_21 = func_0x0046cf20(puVar3,*puVar1,"start",5);
              uStack_8._0_1_ = 0;
              if (0xf < uStack_c0) {
                func_0x0046b1f0(auStack_d4,auStack_d4[0],uStack_c0);
              }
              uStack_c4 = 0;
              uStack_c0 = 0xf;
              auStack_d4[0] = auStack_d4[0] & 0xffffff00;
              if (cStack_21 == '\0') {
                puVar3 = (undefined4 *)func_0x005ba8a0(auStack_ec,1);
                uStack_8._0_1_ = 8;
                puVar1 = puVar3 + 4;
                if (0xf < (uint)puVar3[5]) {
                  puVar3 = (undefined4 *)*puVar3;
                }
                cStack_21 = func_0x0046cf20(puVar3,*puVar1,"stretch",7);
                uStack_8._0_1_ = 0;
                if (0xf < uStack_d8) {
                  func_0x0046b1f0(auStack_ec,auStack_ec[0],uStack_d8);
                }
                uStack_dc = 0;
                uStack_d8 = 0xf;
                auStack_ec[0] = auStack_ec[0] & 0xffffff00;
                if (cStack_21 == '\0') {
                  puVar3 = (undefined4 *)func_0x005ba8a0(auStack_104,1);
                  uStack_8._0_1_ = 9;
                  puVar1 = puVar3 + 4;
                  if (0xf < (uint)puVar3[5]) {
                    puVar3 = (undefined4 *)*puVar3;
                  }
                  cStack_21 = func_0x0046cf20(puVar3,*puVar1,"center",6);
                  uStack_8._0_1_ = 0;
                  if (0xf < uStack_f0) {
                    func_0x0046b1f0(auStack_104,auStack_104[0],uStack_f0);
                  }
                  uStack_f4 = 0;
                  uStack_f0 = 0xf;
                  auStack_104[0] = auStack_104[0] & 0xffffff00;
                  if (cStack_21 != '\0') {
                    *(undefined4 *)(param_1 + 0x24) = 2;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x24) = 1;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x24) = 0;
              }
            }
          }
          else {
            uVar2 = func_0x005bee00(uVar6);
            *(undefined1 *)(param_1 + 0x2c) = uVar2;
          }
        }
        else {
          uVar4 = func_0x005cc550(uVar6);
          *(undefined4 *)(param_1 + 0x28) = uVar4;
          FUN_008439e0();
        }
      }
      else {
        puVar3 = (undefined4 *)func_0x005ba8a0(auStack_a4,1);
        uStack_8._0_1_ = 2;
        puVar1 = puVar3 + 4;
        if (0xf < (uint)puVar3[5]) {
          puVar3 = (undefined4 *)*puVar3;
        }
        cStack_21 = func_0x0046cf20(puVar3,*puVar1,&DAT_011a0960,3);
        uStack_8._0_1_ = 0;
        if (0xf < uStack_90) {
          func_0x0046b1f0(auStack_a4,auStack_a4[0],uStack_90);
        }
        uStack_94 = 0;
        uStack_90 = 0xf;
        auStack_a4[0] = auStack_a4[0] & 0xffffff00;
        if (cStack_21 == '\0') {
          puVar3 = (undefined4 *)func_0x005ba8a0(auStack_bc,1);
          uStack_8._0_1_ = 3;
          puVar1 = puVar3 + 4;
          if (0xf < (uint)puVar3[5]) {
            puVar3 = (undefined4 *)*puVar3;
          }
          cStack_21 = func_0x0046cf20(puVar3,*puVar1,"column",6);
          uStack_8._0_1_ = 0;
          if (0xf < uStack_a8) {
            func_0x0046b1f0(auStack_bc,auStack_bc[0],uStack_a8);
          }
          uStack_ac = 0;
          uStack_a8 = 0xf;
          auStack_bc[0] = auStack_bc[0] & 0xffffff00;
          if (cStack_21 != '\0') {
            *(undefined4 *)(param_1 + 0x20) = 1;
            FUN_008439e0();
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x20) = 0;
          FUN_008439e0();
        }
      }
      piVar7 = piVar7 + 2;
    } while (piVar7 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00841f70(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [100];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int *piStack_94;
  uint uStack_90;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 *puStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f34925;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_90 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_48 = auStack_100;
  piStack_94 = (int *)&uStack_1c;
  uStack_1c = 0;
  uStack_98 = 0x841fb5;
  iStack_4c = param_1;
  uStack_14 = uStack_90;
  FUN_0046e7a0();
  uStack_8 = 0;
  if ((int)uStack_1c == 0) {
    puStack_48 = (undefined1 *)0x0;
  }
  else {
    piStack_94 = &uStack_30;
    iStack_20 = 0;
    uStack_30 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_98 = 0x841fe4;
    FUN_0077fbc0();
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    iStack_50 = *(int *)((int)uStack_1c + 0x40) + *(int *)((int)uStack_1c + 0x200);
    iStack_64 = *(int *)((int)uStack_1c + 0x4c) - *(int *)((int)uStack_1c + 0x1fc);
    iStack_68 = *(int *)((int)uStack_1c + 0x48) - *(int *)((int)uStack_1c + 0x1f8);
    iStack_54 = *(int *)((int)uStack_1c + 500) + *(int *)((int)uStack_1c + 0x44);
    iStack_3c = iStack_68 - iStack_50;
    iStack_58 = iStack_64 - iStack_54;
    iVar5 = *(int *)((int)uStack_1c + 0xac) + -1;
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = iStack_3c;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar5 = iStack_58;
    }
    uStack_60 = uStack_24;
    iStack_5c = iVar5 + 1 + iVar6 * *(int *)(param_1 + 0x28);
    uStack_44 = iStack_20 + uStack_24;
    iStack_38 = 0;
    iStack_40 = 0;
    iVar6 = 0;
    iVar5 = 0;
    uVar7 = uStack_24;
    if (uStack_24 != uStack_44) {
      do {
        piVar2 = (int *)(*(int *)(iStack_2c + (uVar7 >> 1 & iStack_28 - 1U) * 4) + (uVar7 & 1) * 8);
        iVar6 = *piVar2;
        if (*(char *)(iVar6 + 0x6a) != '\0') {
          if ((*(int *)(iVar6 + 0x50) != 0) || (*(int *)(iVar6 + 0x54) != 0)) {
            iStack_70 = iStack_3c + 1;
            uStack_6c = iStack_58 + 1;
            piStack_94 = &iStack_70;
            uStack_98 = 0x8420ab;
            func_0x0085e3b0();
          }
          iVar6 = *piVar2;
          if (*(int *)(iStack_4c + 0x20) == 0) {
            iVar6 = *(int *)(iVar6 + 0x48) - *(int *)(iVar6 + 0x40);
          }
          else {
            iVar6 = *(int *)(iVar6 + 0x4c) - *(int *)(iVar6 + 0x44);
          }
          iStack_38 = iStack_38 + 1 + iVar6;
          iStack_40 = iStack_40 + 1;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iStack_40;
        iVar5 = iStack_38;
        param_1 = iStack_4c;
      } while (uVar7 != uStack_44);
    }
    iStack_40 = *(int *)(param_1 + 0x28);
    if (((*(char *)(param_1 + 0x2c) != '\0') && (1 < iVar6)) &&
       (iStack_40 = (iStack_5c - iVar5) / (iVar6 + -1), iStack_40 < 0)) {
      iStack_40 = 0;
    }
    iVar6 = 0;
    uStack_6c = iStack_20 + uStack_24;
    iStack_34 = 0;
    uStack_44 = 0;
    iStack_38 = 0;
    uStack_60 = uStack_24;
    if (uStack_24 != uStack_6c) {
      do {
        iStack_58 = *(int *)(*(int *)(iStack_2c + (uStack_60 >> 1 & iStack_28 - 1U) * 4) +
                            (uStack_60 & 1) * 8);
        if (*(char *)(iStack_58 + 0x6a) != '\0') {
          iStack_74 = *(int *)(iStack_58 + 0x4c) - *(int *)(iStack_58 + 0x44);
          iStack_78 = *(int *)(iStack_58 + 0x48) - *(int *)(iStack_58 + 0x40);
          iStack_3c = iStack_74 + 1;
          iVar5 = iStack_78 + 1;
          if (*(int *)(iStack_4c + 0x20) == 0) {
            if (iStack_5c < iStack_34 + iVar5) {
              iStack_34 = 0;
              uStack_44 = uStack_44 + iStack_40 + iVar6;
              iStack_38 = 0;
            }
            iStack_7c = (iStack_54 + uStack_44) - *(int *)((int)uStack_1c + 100);
            iStack_80 = (iStack_50 - *(int *)((int)uStack_1c + 0x60)) + iStack_34;
            iStack_34 = iStack_34 + iStack_40 + iVar5;
            if (iStack_38 < iStack_3c) {
              iStack_38 = iStack_3c;
            }
            if (*(int *)(iStack_4c + 0x24) == 1) {
              iStack_78 = iStack_78 + iStack_80;
              iStack_74 = (iStack_64 - iStack_54) + iStack_7c;
            }
            else {
              if (*(int *)(iStack_4c + 0x24) == 2) {
                iStack_7c = iStack_7c + (((iStack_64 - iStack_3c) - iStack_54) + 1) / 2;
              }
              iStack_78 = iStack_78 + iStack_80;
              iStack_74 = iStack_74 + iStack_7c;
            }
          }
          else if (*(int *)(iStack_4c + 0x20) == 1) {
            if (iStack_5c < iStack_34 + iStack_3c) {
              iStack_34 = 0;
              uStack_44 = uStack_44 + iStack_40 + iVar6;
              iStack_38 = 0;
            }
            iStack_7c = (iStack_54 + iStack_34) - *(int *)((int)uStack_1c + 100);
            iStack_80 = uStack_44 + (iStack_50 - *(int *)((int)uStack_1c + 0x60));
            iStack_34 = iStack_34 + iStack_3c + iStack_40;
            if (iStack_38 < iVar5) {
              iStack_38 = iVar5;
            }
            if (*(int *)(iStack_4c + 0x24) == 1) {
              iStack_78 = (iStack_68 - iStack_50) + iStack_80;
              iStack_74 = iStack_74 + iStack_7c;
            }
            else {
              if (*(int *)(iStack_4c + 0x24) == 2) {
                iStack_80 = iStack_80 + (((iStack_68 - iStack_50) - iVar5) + 1) / 2;
              }
              iStack_78 = iStack_78 + iStack_80;
              iStack_74 = iStack_74 + iStack_7c;
            }
          }
          else {
            iStack_74 = -1;
            iStack_78 = -1;
            iStack_7c = 0;
            iStack_80 = 0;
          }
          iStack_74 = iStack_74 - *(int *)(iStack_58 + 0x1ec);
          iStack_78 = iStack_78 - *(int *)(iStack_58 + 0x1e8);
          iStack_80 = iStack_80 + *(int *)(iStack_58 + 0x1f0);
          iStack_7c = iStack_7c + *(int *)(iStack_58 + 0x1e4);
          piStack_94 = &iStack_80;
          uStack_98 = 0x8422e9;
          cVar4 = FUN_00857930();
          puStack_48 = (undefined1 *)((uint)puStack_48 & 0xff);
          iVar6 = iStack_38;
          if (cVar4 != '\0') {
            puStack_48 = (undefined1 *)0x1;
          }
        }
        uStack_60 = uStack_60 + 1;
      } while (uStack_60 != uStack_6c);
    }
    uStack_8 = uStack_8 & 0xffffff00;
    piStack_94 = (int *)0x842322;
    func_0x00792a10();
    piStack_94 = (int *)&DAT_00000008;
    uStack_98 = uStack_30;
    uStack_30 = 0;
    uStack_9c = 0x842334;
    func_0x008ab812();
  }
  uStack_8 = 0xffffffff;
  piVar2 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar3 = *(code **)*uStack_1c._4_4_;
      piStack_94 = (int *)0x84235e;
      _guard_check_icall();
      piStack_94 = (int *)0x842362;
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar6 = *piVar1 + -1;
      *piVar1 = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        piStack_94 = (int *)0x842379;
        _guard_check_icall();
        piStack_94 = (int *)0x84237d;
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_008424b0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3476d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8590(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00842510(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ***pppuVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [8];
  undefined4 **appuStack_104 [4];
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 **appuStack_ec [4];
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 **appuStack_d4 [4];
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 **appuStack_bc [4];
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 **appuStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 **appuStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 **appuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f34a8a;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  func_0x0080ff70(&piStack_20,uStack_14);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar6 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar6 + 0x2c);
      uStack_28 = 1;
      pppuVar4 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar4 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar4,uStack_34,"cell-size",9);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar5 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar5 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 2;
        pppuVar4 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar4 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_4c,"cell-width",10);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_48;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
          uVar5 = extraout_ECX_00;
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar3 = func_0x005cc550(uVar5);
          *(undefined4 *)(param_1 + 0x20) = uVar3;
          goto LAB_00842ad0;
        }
        uStack_8._0_1_ = 3;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 4;
        pppuVar4 = appuStack_74;
        if (0xf < uStack_60) {
          pppuVar4 = (undefined4 ***)appuStack_74[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_64,"cell-height",0xb);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_60;
        if (0xf < uStack_60) {
          func_0x0046b1f0(appuStack_74,appuStack_74[0],uStack_60);
          uVar5 = extraout_ECX_01;
        }
        uStack_64 = 0;
        uStack_60 = 0xf;
        appuStack_74[0] = (undefined4 **)((uint)appuStack_74[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar3 = func_0x005cc550(uVar5);
          *(undefined4 *)(param_1 + 0x24) = uVar3;
          goto LAB_00842ad0;
        }
        uStack_8._0_1_ = 4;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 8;
        pppuVar4 = appuStack_8c;
        if (0xf < uStack_78) {
          pppuVar4 = (undefined4 ***)appuStack_8c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_7c,"cell-spacing",0xc);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_78;
        if (0xf < uStack_78) {
          func_0x0046b1f0(appuStack_8c,appuStack_8c[0],uStack_78);
          uVar5 = extraout_ECX_02;
        }
        uStack_7c = 0;
        uStack_78 = 0xf;
        appuStack_8c[0] = (undefined4 **)((uint)appuStack_8c[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar3 = func_0x005cc550(uVar5);
          *(undefined4 *)(param_1 + 0x28) = uVar3;
          goto LAB_00842ad0;
        }
        uStack_8._0_1_ = 5;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 0x10;
        pppuVar4 = appuStack_a4;
        if (0xf < uStack_90) {
          pppuVar4 = (undefined4 ***)appuStack_a4[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_94,"num-columns",0xb);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_90;
        if (0xf < uStack_90) {
          func_0x0046b1f0(appuStack_a4,appuStack_a4[0],uStack_90);
          uVar5 = extraout_ECX_03;
        }
        uStack_94 = 0;
        uStack_90 = 0xf;
        appuStack_a4[0] = (undefined4 **)((uint)appuStack_a4[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar3 = func_0x005cc550(uVar5);
          *(undefined4 *)(param_1 + 0x2c) = uVar3;
          goto LAB_00842ad0;
        }
        uStack_8._0_1_ = 6;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 0x20;
        pppuVar4 = appuStack_bc;
        if (0xf < uStack_a8) {
          pppuVar4 = (undefined4 ***)appuStack_bc[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_ac,"num-lines",9);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_a8;
        if (0xf < uStack_a8) {
          func_0x0046b1f0(appuStack_bc,appuStack_bc[0],uStack_a8);
          uVar5 = extraout_ECX_04;
        }
        uStack_ac = 0;
        uStack_a8 = 0xf;
        appuStack_bc[0] = (undefined4 **)((uint)appuStack_bc[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar3 = func_0x005cc550(uVar5);
          *(undefined4 *)(param_1 + 0x30) = uVar3;
          goto LAB_00842ad0;
        }
        uStack_8._0_1_ = 7;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 0x40;
        pppuVar4 = appuStack_d4;
        if (0xf < uStack_c0) {
          pppuVar4 = (undefined4 ***)appuStack_d4[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_c4,"fit-children",0xc);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_c0;
        if (0xf < uStack_c0) {
          func_0x0046b1f0(appuStack_d4,appuStack_d4[0],uStack_c0);
          uVar5 = extraout_ECX_05;
        }
        uStack_c4 = 0;
        uStack_c0 = 0xf;
        appuStack_d4[0] = (undefined4 **)((uint)appuStack_d4[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar1 = func_0x005bee00(uVar5);
          *(undefined1 *)(param_1 + 0x35) = uVar1;
          goto LAB_00842ad0;
        }
        uStack_8._0_1_ = 8;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 0x80;
        pppuVar4 = appuStack_ec;
        if (0xf < uStack_d8) {
          pppuVar4 = (undefined4 ***)appuStack_ec[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_dc,"auto-spacing",0xc);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_d8;
        if (0xf < uStack_d8) {
          func_0x0046b1f0(appuStack_ec,appuStack_ec[0],uStack_d8);
          uVar5 = extraout_ECX_06;
        }
        uStack_dc = 0;
        uStack_d8 = 0xf;
        appuStack_ec[0] = (undefined4 **)((uint)appuStack_ec[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar1 = func_0x005bee00(uVar5);
          *(undefined1 *)(param_1 + 0x34) = uVar1;
          goto LAB_00842ad0;
        }
        uStack_8._0_1_ = 9;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 0x100;
        pppuVar4 = appuStack_104;
        if (0xf < uStack_f0) {
          pppuVar4 = (undefined4 ***)appuStack_104[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_f4,&DAT_011a0984,4);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar5 = uStack_f0;
        if (0xf < uStack_f0) {
          func_0x0046b1f0(appuStack_104,appuStack_104[0],uStack_f0);
          uVar5 = extraout_ECX_07;
        }
        uStack_f4 = 0;
        uStack_f0 = 0xf;
        appuStack_104[0] = (undefined4 **)((uint)appuStack_104[0] & 0xffffff00);
        if (cStack_21 != '\0') {
          uVar1 = func_0x005bee00(uVar5);
          *(undefined1 *)(param_1 + 0x36) = uVar1;
          goto LAB_00842ad0;
        }
      }
      else {
        puVar2 = (undefined4 *)func_0x005d31a0(auStack_10c,uVar5);
        *(undefined4 *)(param_1 + 0x20) = *puVar2;
        *(undefined4 *)(param_1 + 0x24) = puVar2[1];
LAB_00842ad0:
        FUN_008439e0();
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00842b50(int param_1)

{
  undefined ***pppuVar1;
  int *piVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  int *piVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [40];
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  uint *puStack_d0;
  undefined8 uStack_cc;
  uint uStack_c4;
  undefined **ppuStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined ***pppuStack_90;
  uint auStack_8c [7];
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined ***pppuStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  undefined ***pppuStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined ***pppuStack_24;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f34b2c;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_c4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_34 = auStack_100;
  uStack_1c = 0;
  uStack_cc = (double)CONCAT44(&uStack_1c,0x842b98);
  iStack_4c = param_1;
  uStack_14 = uStack_c4;
  FUN_0046e7a0();
  uStack_8 = 0;
  if ((int)uStack_1c == 0) {
    puStack_34 = (undefined1 *)0x0;
    goto LAB_00842f9d;
  }
  iStack_20 = 0;
  uStack_30 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  pppuStack_24 = (undefined ***)0x0;
  uStack_cc = (double)CONCAT44(&uStack_30,0x842bca);
  FUN_0077fbc0();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar9 = (int)uStack_1c;
  iStack_38 = *(int *)(param_1 + 0x2c);
  iStack_5c = (int)uStack_1c;
  iStack_44 = *(int *)((int)uStack_1c + 0x40) + *(int *)((int)uStack_1c + 0x200);
  piStack_60 = (int *)(*(int *)((int)uStack_1c + 0x44) + *(int *)((int)uStack_1c + 500));
  iStack_3c = *(int *)((int)uStack_1c + 0x48) - *(int *)((int)uStack_1c + 0x1f8);
  if ((*(char *)(param_1 + 0x36) == '\0') || (*(int *)(param_1 + 0x20) < 1)) {
    if (iStack_38 < 1) goto LAB_00842c73;
  }
  else {
    iStack_38 = ((iStack_3c - iStack_44) + 1 + *(int *)(param_1 + 0x28)) /
                (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20));
    if (iStack_38 < 1) {
LAB_00842c73:
      iStack_38 = 1;
    }
    else {
      *(int *)(param_1 + 0x2c) = iStack_38;
      pppuStack_54 = (undefined ***)
                     ((float)((double)iStack_20 + (double)(&DAT_011a2c10)[-(iStack_20 >> 0x1f)]) /
                     (float)iStack_38);
      uStack_cc = (double)(float)pppuStack_54;
      puStack_d0 = (uint *)0x842c5f;
      func_0x008ab09a();
      uStack_cc = (double)CONCAT44(0x842c67,(undefined4)uStack_cc);
      uVar8 = func_0x00e882e0();
      *(undefined4 *)(param_1 + 0x30) = uVar8;
    }
  }
  iStack_40 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0x34) != '\0') && (1 < iStack_38)) {
    iStack_40 = (((iStack_3c - *(int *)(param_1 + 0x20) * iStack_38) - iStack_44) + 1) /
                (iStack_38 + -1);
  }
  pppuStack_64 = (undefined ***)(iStack_20 + (int)pppuStack_24);
  iStack_48 = 0;
  iStack_50 = 0;
  pppuStack_54 = pppuStack_24;
  if (pppuStack_24 != pppuStack_64) {
    do {
      iStack_3c = *(int *)(*(int *)(iStack_2c + ((uint)pppuStack_54 >> 1 & iStack_28 - 1U) * 4) +
                          ((uint)pppuStack_54 & 1) * 8);
      if (*(char *)(iStack_3c + 0x6a) != '\0') {
        iVar9 = (iStack_40 + *(int *)(param_1 + 0x24)) * (iStack_48 / iStack_38);
        iStack_50 = iVar9 + *(int *)(param_1 + 0x24);
        iVar9 = iVar9 - *(int *)(iStack_5c + 100);
        iVar10 = ((iStack_48 % iStack_38) * (iStack_40 + *(int *)(iStack_4c + 0x20)) -
                 *(int *)(iStack_5c + 0x60)) + iStack_44;
        auStack_8c[6] = *(int *)(iStack_3c + 0x1f0) + iVar10;
        iStack_70 = (int)piStack_60 + *(int *)(iStack_3c + 0x1e4) + iVar9;
        iStack_6c = *(int *)(iStack_4c + 0x20) + -1 + (iVar10 - *(int *)(iStack_3c + 0x1e8));
        iStack_68 = (int)piStack_60 +
                    *(int *)(iStack_4c + 0x24) + -1 + (iVar9 - *(int *)(iStack_3c + 0x1ec));
        uStack_cc = (double)CONCAT44(auStack_8c + 6,0x842d65);
        cVar7 = FUN_00857930();
        puStack_34 = (undefined1 *)((uint)puStack_34 & 0xff);
        if (cVar7 != '\0') {
          puStack_34 = (undefined1 *)0x1;
        }
        iStack_48 = iStack_48 + 1;
        iVar9 = (int)uStack_1c;
        param_1 = iStack_4c;
        if ((0 < *(int *)(iStack_4c + 0x30)) &&
           (*(int *)(iStack_4c + 0x2c) * *(int *)(iStack_4c + 0x30) <= iStack_48)) break;
        iStack_5c = (int)uStack_1c;
      }
      pppuStack_54 = (undefined ***)((int)pppuStack_54 + 1);
    } while (pppuStack_54 != pppuStack_64);
  }
  iVar10 = iStack_50 + *(int *)(iVar9 + 0x1fc) + *(int *)(iVar9 + 500);
  if ((*(char *)(param_1 + 0x35) != '\0') &&
     (iVar10 != (*(int *)(iVar9 + 0x4c) - *(int *)(iVar9 + 0x44)) + 1)) {
    iStack_b0 = iVar9;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
      iStack_b0 = (int)uStack_1c;
    }
    pppuStack_64 = &ppuStack_b4;
    piStack_60 = &iStack_b0;
    ppuStack_b4 = std::_Func_impl_no_alloc<>::vftable;
    iStack_ac = (int)uStack_1c._4_4_;
    iStack_70 = 0;
    iStack_6c = 0;
    uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
    pppuStack_90 = &ppuStack_b4;
    uStack_8._0_1_ = 7;
    uStack_cc = 5.94250142568228e-313;
    auStack_8c[4] = 0;
    auStack_8c[0] = 0;
    auStack_8c[1] = 0;
    auStack_8c[2] = 0;
    auStack_8c[3] = 0;
    auStack_8c[5] = 0;
    puStack_d0 = (uint *)0x842ea8;
    iStack_a8 = iVar10;
    iStack_68 = iVar10;
    func_0x0046bc40();
    uStack_8 = CONCAT31(uStack_8._1_3_,8);
    uStack_cc = (double)ZEXT48(&ppuStack_b4);
    puStack_d0 = auStack_8c;
    puStack_d4 = auStack_58;
    uStack_d8 = 0x842eca;
    FUN_005e5070();
    pppuVar5 = pppuStack_54;
    if (pppuStack_54 != (undefined ***)0x0) {
      LOCK();
      ppuVar4 = (undefined **)((int)pppuStack_54[1] + -1);
      pppuStack_54[1] = ppuVar4;
      UNLOCK();
      if (ppuVar4 == (undefined **)0x0) {
        pcVar3 = (code *)**pppuStack_54;
        uStack_cc = (double)CONCAT44(0x842ee7,(undefined4)uStack_cc);
        _guard_check_icall();
        uStack_cc = (double)CONCAT44(0x842eeb,(undefined4)uStack_cc);
        (*pcVar3)();
        LOCK();
        pppuVar1 = pppuVar5 + 2;
        ppuVar4 = (undefined **)((int)*pppuVar1 + -1);
        *pppuVar1 = ppuVar4;
        UNLOCK();
        if (ppuVar4 == (undefined **)0x0) {
          pcVar3 = (code *)(*pppuVar5)[1];
          uStack_cc = (double)CONCAT44(0x842f02,(undefined4)uStack_cc);
          _guard_check_icall();
          uStack_cc = (double)CONCAT44(0x842f06,(undefined4)uStack_cc);
          (*pcVar3)();
        }
      }
    }
    uStack_8._0_1_ = 7;
    if (0xf < auStack_8c[5]) {
      uStack_cc = (double)CONCAT44(auStack_8c[5],auStack_8c[0]);
      puStack_d0 = auStack_8c;
      puStack_d4 = (undefined1 *)0x842f25;
      func_0x0046b1f0();
    }
    auStack_8c[4] = 0;
    auStack_8c[5] = 0xf;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    uStack_8._0_1_ = 3;
    if (pppuStack_90 != (undefined ***)0x0) {
      pcVar3 = (code *)(*pppuStack_90)[4];
      uStack_cc._4_4_ = CONCAT31((int3)((uint)&ppuStack_b4 >> 8),pppuStack_90 != &ppuStack_b4);
      uStack_cc._0_4_ = 0x842f64;
      _guard_check_icall();
      uStack_cc = (double)CONCAT44(uStack_cc._4_4_,0x842f68);
      (*pcVar3)();
      pppuStack_90 = (undefined ***)0x0;
    }
    uStack_8 = (uint)uStack_8._1_3_ << 8;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_cc = (double)CONCAT44(0x842f82,(undefined4)uStack_cc);
  func_0x00792a10();
  uStack_cc = (double)CONCAT44(8,uStack_30);
  uStack_30 = 0;
  puStack_d0 = (uint *)0x842f94;
  func_0x008ab812();
LAB_00842f9d:
  uStack_8 = 0xffffffff;
  piVar6 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar9 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar9;
    UNLOCK();
    if (iVar9 == 0) {
      pcVar3 = *(code **)*uStack_1c._4_4_;
      uStack_cc = (double)CONCAT44(0x842fbe,(undefined4)uStack_cc);
      _guard_check_icall();
      uStack_cc = (double)CONCAT44(0x842fc2,(undefined4)uStack_cc);
      (*pcVar3)();
      LOCK();
      piVar2 = piVar6 + 2;
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        pcVar3 = *(code **)(*piVar6 + 4);
        uStack_cc = (double)CONCAT44(0x842fda,(undefined4)uStack_cc);
        _guard_check_icall();
        uStack_cc = (double)CONCAT44(0x842fde,(undefined4)uStack_cc);
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



TypeDescriptor * FUN_00843000(void)

{
  return &`protected:_virtual_bool___thiscall_UIGridLayout::internalUpdate(void)'::__l27::<lambda_1>
          ::RTTI_Type_Descriptor;
}



void __fastcall FUN_00843010(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0xc) != (*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44)) + 1) {
    FUN_0077f6b0((*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x40)) + 1,*(int *)(param_1 + 0xc));
  }
  return;
}



undefined4 * __thiscall FUN_00843040(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



void __thiscall FUN_008430d0(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_00843160(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 ***pppuVar4;
  uint extraout_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece116;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  uStack_14 = uVar3;
  FUN_008416d0(param_1);
  func_0x0080ff70(&piStack_20,uVar3);
  iStack_8 = 0;
  piStack_2c = piStack_1c;
  piVar5 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      iStack_8._0_1_ = 1;
      func_0x00469da0(*piVar5 + 0x2c);
      uStack_24 = 1;
      pppuVar4 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar4 = (undefined4 ***)appuStack_44[0];
      }
      cVar1 = func_0x0046cf20(pppuVar4,uStack_34,"align-right",0xb);
      uStack_24 = 0;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      uVar3 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar3 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cVar1 != '\0') {
        uVar2 = func_0x005bee00(uVar3);
        *(undefined1 *)(iStack_28 + 0x2c) = uVar2;
        FUN_008439e0();
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piStack_2c);
  }
  iStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_008432b0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined ***pppuStack_98;
  uint auStack_94 [7];
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  undefined ***pppuStack_58;
  int *piStack_54;
  int iStack_50;
  int iStack_4c;
  undefined ***pppuStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined ***pppuStack_24;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f34bfc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  iStack_44 = param_1;
  uStack_14 = uVar6;
  FUN_0046e7a0(&uStack_1c);
  uStack_8 = 0;
  if ((int)uStack_1c == 0) {
    uStack_34 = 0;
  }
  else {
    iStack_20 = 0;
    uStack_30 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    pppuStack_24 = (undefined ***)0x0;
    uStack_34 = FUN_0077fbc0(&uStack_30);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (*(char *)(param_1 + 0x2c) != '\0') {
      uStack_34 = func_0x008437e0(uStack_30,0,pppuStack_24,uStack_30,0,(int)pppuStack_24 + iStack_20
                                  ,uVar6);
    }
    uStack_34 = uStack_34 & 0xffffff00;
    iStack_4c = (int)uStack_1c;
    iStack_40 = *(int *)((int)uStack_1c + 0x4c) - *(int *)((int)uStack_1c + 0x1fc);
    auStack_94[6] = *(int *)((int)uStack_1c + 0x200) + *(int *)((int)uStack_1c + 0x40);
    iStack_78 = *(int *)((int)uStack_1c + 0x48) - *(int *)((int)uStack_1c + 0x1f8);
    iVar10 = *(int *)((int)uStack_1c + 0x44) + *(int *)((int)uStack_1c + 500);
    iStack_38 = iStack_78;
    if (*(char *)(iStack_44 + 0x2c) == '\0') {
      iStack_38 = auStack_94[6];
    }
    pppuStack_48 = (undefined ***)(iStack_20 + (int)pppuStack_24);
    iStack_3c = 0;
    pppuStack_58 = pppuStack_24;
    iVar9 = (int)uStack_1c;
    if (pppuStack_24 != pppuStack_48) {
      do {
        piStack_54 = (int *)(*(int *)(iStack_2c + ((uint)pppuStack_58 >> 1 & iStack_28 - 1U) * 4) +
                            ((uint)pppuStack_58 & 1) * 8);
        iVar7 = *piStack_54;
        if (*(char *)(iVar7 + 0x6a) != '\0') {
          if ((*(int *)(iVar7 + 0x50) != 0) || (*(int *)(iVar7 + 0x54) != 0)) {
            iStack_74 = (iStack_78 - auStack_94[6]) + 1;
            piStack_70 = (int *)((iStack_40 - iVar10) + 1);
            func_0x0085e3b0(&iStack_74);
            iStack_4c = (int)uStack_1c;
          }
          iVar9 = *piStack_54;
          iVar7 = *(int *)(iVar9 + 0x44);
          iStack_50 = (*(int *)(iVar9 + 0x4c) - iVar7) + 1;
          piStack_5c = (int *)(*(int *)(iVar9 + 0x48) - *(int *)(iVar9 + 0x40));
          if (*(char *)(iStack_44 + 0x2c) == '\0') {
            iVar8 = *(int *)(iVar9 + 0x1f0);
          }
          else {
            iVar8 = ((*(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x1e8)) - *(int *)(iVar9 + 0x48)) +
                    -1;
          }
          iStack_38 = iStack_38 + iVar8;
          iStack_3c = iStack_3c + iVar8;
          if (*(char *)(iVar9 + 0x6c) == '\0') {
            iStack_50 = (((iStack_40 - *(int *)(iVar9 + 0x1ec)) - *(int *)(iVar9 + 0x1e4)) - iVar10)
                        + 1;
            iVar9 = (((iStack_40 - iVar10) - iStack_50) + 1) / 2;
LAB_008434e3:
            iStack_68 = iVar9 + iVar10;
          }
          else {
            if ((*(uint *)(iVar9 + 0x328) & 4) != 0) {
              iVar9 = *(int *)(iVar9 + 0x1e4);
              goto LAB_008434e3;
            }
            if ((*(uint *)(iVar9 + 0x328) & 8) == 0) {
              iVar9 = ((((iVar7 - *(int *)(iVar9 + 0x1e4)) - *(int *)(iVar9 + 0x4c)) - iVar10) -
                      *(int *)(iVar9 + 0x1ec)) + iStack_40;
              if (iVar9 < 0) {
                iVar9 = iVar9 + 1;
              }
              iStack_68 = (iVar9 >> 1) + iVar10;
              if (iStack_68 < iVar10) {
                iStack_68 = iVar10;
              }
            }
            else {
              iStack_68 = iStack_40 + -1 +
                          ((iVar7 - *(int *)(iVar9 + 0x4c)) - *(int *)(iVar9 + 0x1ec));
              if (iStack_68 < iVar10) {
                iStack_68 = iVar10;
              }
            }
          }
          iStack_6c = iStack_38 - *(int *)(iStack_4c + 0x60);
          iStack_68 = iStack_68 - *(int *)(iStack_4c + 100);
          iStack_64 = iStack_6c + (int)piStack_5c;
          iStack_60 = iStack_50 + -1 + iStack_68;
          cVar5 = FUN_00857930(&iStack_6c);
          uStack_34 = uStack_34 & 0xff;
          if (cVar5 != '\0') {
            uStack_34 = 1;
          }
          iVar9 = *piStack_54;
          if (*(char *)(iStack_44 + 0x2c) == '\0') {
            iVar7 = *(int *)(iStack_44 + 0x24);
            iVar9 = ((*(int *)(iVar9 + 0x1e8) + *(int *)(iVar9 + 0x48)) - *(int *)(iVar9 + 0x40)) +
                    1;
          }
          else {
            iVar9 = -*(int *)(iVar9 + 0x1f0);
            uVar6 = (int)*(uint *)(iStack_44 + 0x24) >> 0x1f;
            iVar7 = -((*(uint *)(iStack_44 + 0x24) ^ uVar6) - uVar6);
          }
          iStack_38 = iStack_38 + iVar9 + iVar7;
          iStack_3c = iStack_3c + iVar9 + iVar7;
          iStack_4c = (int)uStack_1c;
          iVar9 = (int)uStack_1c;
        }
        pppuStack_58 = (undefined ***)((int)pppuStack_58 + 1);
      } while (pppuStack_58 != pppuStack_48);
    }
    iVar10 = iStack_3c +
             ((*(int *)(iVar9 + 0x200) + *(int *)(iVar9 + 0x1f8)) - *(int *)(iStack_44 + 0x24));
    if ((*(char *)(iStack_44 + 0x20) != '\0') &&
       (iVar10 != (*(int *)(iVar9 + 0x48) - *(int *)(iVar9 + 0x40)) + 1)) {
      iStack_b8 = iVar9;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
        UNLOCK();
        iStack_b8 = (int)uStack_1c;
      }
      pppuStack_48 = &ppuStack_bc;
      piStack_5c = &iStack_b8;
      ppuStack_bc = std::_Func_impl_no_alloc<>::vftable;
      iStack_b4 = (int)uStack_1c._4_4_;
      iStack_68 = 0;
      iStack_64 = 0;
      uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
      pppuStack_98 = &ppuStack_bc;
      uStack_8._0_1_ = 7;
      auStack_94[4] = 0;
      auStack_94[0] = 0;
      auStack_94[1] = 0;
      auStack_94[2] = 0;
      auStack_94[3] = 0;
      auStack_94[5] = 0;
      iStack_b0 = iVar10;
      iStack_60 = iVar10;
      func_0x0046bc40("UIHorizontalLayout::internalUpdate",0x22);
      uStack_8 = CONCAT31(uStack_8._1_3_,8);
      FUN_005e5070(&iStack_74,auStack_94,&ppuStack_bc,0);
      piVar3 = piStack_70;
      if (piStack_70 != (int *)0x0) {
        LOCK();
        iVar10 = piStack_70[1] + -1;
        piStack_70[1] = iVar10;
        UNLOCK();
        if (iVar10 == 0) {
          pcVar2 = *(code **)*piStack_70;
          _guard_check_icall();
          (*pcVar2)();
          LOCK();
          piVar1 = piVar3 + 2;
          iVar10 = *piVar1 + -1;
          *piVar1 = iVar10;
          UNLOCK();
          if (iVar10 == 0) {
            pcVar2 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar2)();
          }
        }
      }
      uStack_8._0_1_ = 7;
      if (0xf < auStack_94[5]) {
        func_0x0046b1f0(auStack_94,auStack_94[0],auStack_94[5]);
      }
      auStack_94[4] = 0;
      auStack_94[5] = 0xf;
      auStack_94[0] = auStack_94[0] & 0xffffff00;
      uStack_8._0_1_ = 3;
      if (pppuStack_98 != (undefined ***)0x0) {
        pcVar2 = (code *)(*pppuStack_98)[4];
        _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_bc >> 8),pppuStack_98 != &ppuStack_bc));
        (*pcVar2)();
        pppuStack_98 = (undefined ***)0x0;
      }
      uStack_8 = (uint)uStack_8._1_3_ << 8;
    }
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x00792a10();
    uVar4 = uStack_30;
    uStack_30 = 0;
    func_0x008ab812(uVar4,8);
  }
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar10 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar10;
    UNLOCK();
    if (iVar10 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



TypeDescriptor * FUN_00843880(void)

{
  return &`protected:_virtual_bool___thiscall_UIHorizontalLayout::internalUpdate(void)'::__l34::
          <lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00843890(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0xc) != (*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x40)) + 1) {
    FUN_0077f6b0(*(int *)(param_1 + 0xc),(*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44)) + 1);
  }
  return;
}



undefined4 * __thiscall FUN_008438c0(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



void __thiscall FUN_00843950(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void __fastcall FUN_008439e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined ***pppuStack_64;
  uint auStack_5c [6];
  int *piStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined ***pppuStack_38;
  int *piStack_34;
  uint uStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  if ((param_1[6] != 0) && (param_1[4] == 0)) {
    if ((char)param_1[5] != '\0') {
      puStack_20 = &stack0xfffffffc;
      uStack_14 = 0xffffffff;
      puStack_18 = &DAT_00f34cea;
      iStack_1c = *unaff_FS_OFFSET;
      uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
      *unaff_FS_OFFSET = (int)&iStack_1c;
      uStack_30 = 0;
      piStack_44 = param_1;
      uStack_24 = uVar5;
      puVar4 = &stack0xfffffffc;
      if ((param_1[4] == 0) && (puVar4 = &stack0xfffffffc, *(char *)((int)param_1 + 0x15) == '\0'))
      {
        piVar6 = (int *)FUN_0046e7a0(&uStack_2c);
        iVar2 = *piVar6;
        uStack_14 = 0xffffffff;
        FUN_00468340(uVar5);
        puVar4 = puStack_20;
        if (iVar2 != 0) {
          uStack_2c = 0;
          uStack_14 = 1;
          puVar7 = (undefined8 *)func_0x00468610(&uStack_40);
          pppuStack_38 = *(undefined ****)puVar7;
          piVar6 = *(int **)((int)puVar7 + 4);
          uStack_2c = *puVar7;
          *(undefined4 *)puVar7 = 0;
          *(undefined4 *)((int)puVar7 + 4) = 0;
          uStack_30 = 1;
          uStack_14._0_1_ = 1;
          uStack_14._1_3_ = 0;
          piStack_34 = piStack_3c;
          if (piStack_3c != (int *)0x0) {
            LOCK();
            iVar2 = piStack_3c[1] + -1;
            piStack_3c[1] = iVar2;
            UNLOCK();
            if (iVar2 == 0) {
              pcVar3 = *(code **)*piStack_3c;
              _guard_check_icall();
              (*pcVar3)();
              LOCK();
              iVar2 = piStack_34[2] + -1;
              piStack_34[2] = iVar2;
              UNLOCK();
              if (iVar2 == 0) {
                pcVar3 = *(code **)(*piStack_34 + 4);
                _guard_check_icall();
                (*pcVar3)();
              }
            }
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            piVar6[1] = piVar6[1] + 1;
            UNLOCK();
          }
          piStack_34 = &uStack_84;
          ppuStack_88 = std::_Func_impl_no_alloc<>::vftable;
          uStack_40 = 0;
          piStack_3c = (int *)0x0;
          pppuStack_64 = &ppuStack_88;
          uStack_14._0_1_ = 9;
          auStack_5c[4] = 0;
          auStack_5c[0] = 0;
          auStack_5c[1] = 0;
          auStack_5c[2] = 0;
          auStack_5c[3] = 0;
          auStack_5c[5] = 0;
          uStack_84 = pppuStack_38;
          piStack_80 = piVar6;
          pppuStack_38 = &ppuStack_88;
          func_0x0046bc40("UILayout::updateLater",0x15);
          uStack_14._0_1_ = 10;
          FUN_005e5070(auStack_90,auStack_5c,&ppuStack_88,0);
          FUN_00468340();
          uStack_14._0_1_ = 9;
          if (0xf < auStack_5c[5]) {
            func_0x0046b1f0(auStack_5c,auStack_5c[0],auStack_5c[5]);
          }
          auStack_5c[4] = 0;
          auStack_5c[5] = 0xf;
          auStack_5c[0] = auStack_5c[0] & 0xffffff00;
          uStack_14 = CONCAT31(uStack_14._1_3_,5);
          func_0x00464b40();
          uStack_30 = uStack_30 & 0xfffffffe;
          *(undefined1 *)((int)piStack_44 + 0x15) = 1;
          uStack_14 = 0xffffffff;
          puVar4 = puStack_20;
          if (piVar6 != (int *)0x0) {
            LOCK();
            iVar2 = piVar6[1] + -1;
            piVar6[1] = iVar2;
            UNLOCK();
            if (iVar2 == 0) {
              pcVar3 = *(code **)*piVar6;
              _guard_check_icall();
              (*pcVar3)();
              LOCK();
              piVar1 = piVar6 + 2;
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar4 = puStack_20;
              if (iVar2 == 1) {
                pcVar3 = *(code **)(*piVar6 + 4);
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
    *(undefined1 *)(param_1 + 5) = 1;
    pcVar3 = *(code **)(*param_1 + 0x28);
    _guard_check_icall();
    (*pcVar3)();
    pcVar3 = *(code **)(*(int *)param_1[6] + 0x18);
    _guard_check_icall();
    (*pcVar3)();
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



void __fastcall FUN_00843a30(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined ***pppuStack_64;
  uint auStack_5c [7];
  undefined4 uStack_40;
  int *piStack_3c;
  undefined ***pppuStack_38;
  int *piStack_34;
  uint uStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f34cea;
  iStack_1c = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = 0;
  auStack_5c[6] = param_1;
  uStack_24 = uVar5;
  puVar4 = &stack0xfffffffc;
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (puVar4 = &stack0xfffffffc, *(char *)(param_1 + 0x15) == '\0')) {
    piVar6 = (int *)FUN_0046e7a0(&uStack_2c);
    iVar2 = *piVar6;
    uStack_14 = 0xffffffff;
    FUN_00468340(uVar5);
    puVar4 = puStack_20;
    if (iVar2 != 0) {
      uStack_2c = 0;
      uStack_14 = 1;
      puVar7 = (undefined8 *)func_0x00468610(&uStack_40);
      pppuStack_38 = *(undefined ****)puVar7;
      piVar6 = *(int **)((int)puVar7 + 4);
      uStack_2c = *puVar7;
      *(undefined4 *)puVar7 = 0;
      *(undefined4 *)((int)puVar7 + 4) = 0;
      uStack_30 = 1;
      uStack_14._0_1_ = 1;
      uStack_14._1_3_ = 0;
      piStack_34 = piStack_3c;
      if (piStack_3c != (int *)0x0) {
        LOCK();
        iVar2 = piStack_3c[1] + -1;
        piStack_3c[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)*piStack_3c;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          iVar2 = piStack_34[2] + -1;
          piStack_34[2] = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar3 = *(code **)(*piStack_34 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        piVar6[1] = piVar6[1] + 1;
        UNLOCK();
      }
      piStack_34 = &uStack_84;
      ppuStack_88 = std::_Func_impl_no_alloc<>::vftable;
      uStack_40 = 0;
      piStack_3c = (int *)0x0;
      pppuStack_64 = &ppuStack_88;
      uStack_14._0_1_ = 9;
      auStack_5c[4] = 0;
      auStack_5c[0] = 0;
      auStack_5c[1] = 0;
      auStack_5c[2] = 0;
      auStack_5c[3] = 0;
      auStack_5c[5] = 0;
      uStack_84 = pppuStack_38;
      piStack_80 = piVar6;
      pppuStack_38 = &ppuStack_88;
      func_0x0046bc40("UILayout::updateLater",0x15);
      uStack_14._0_1_ = 10;
      FUN_005e5070(auStack_90,auStack_5c,&ppuStack_88,0);
      FUN_00468340();
      uStack_14._0_1_ = 9;
      if (0xf < auStack_5c[5]) {
        func_0x0046b1f0(auStack_5c,auStack_5c[0],auStack_5c[5]);
      }
      auStack_5c[4] = 0;
      auStack_5c[5] = 0xf;
      auStack_5c[0] = auStack_5c[0] & 0xffffff00;
      uStack_14 = CONCAT31(uStack_14._1_3_,5);
      func_0x00464b40();
      uStack_30 = uStack_30 & 0xfffffffe;
      *(undefined1 *)(auStack_5c[6] + 0x15) = 1;
      uStack_14 = 0xffffffff;
      puVar4 = puStack_20;
      if (piVar6 != (int *)0x0) {
        LOCK();
        iVar2 = piVar6[1] + -1;
        piVar6[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)*piVar6;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar1 = piVar6 + 2;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar4 = puStack_20;
          if (iVar2 == 1) {
            pcVar3 = *(code **)(*piVar6 + 4);
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



TypeDescriptor * FUN_00843cd0(void)

{
  return &`public:_void___thiscall_UILayout::updateLater(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_00843ce0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined ***pppuStack_64;
  uint auStack_5c [6];
  int *piStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined ***pppuStack_38;
  int *piStack_34;
  uint uStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x15) = 0;
  piStack_44 = *(int **)(param_1 + 4);
  if ((piStack_44[6] != 0) && (piStack_44[4] == 0)) {
    if ((char)piStack_44[5] != '\0') {
      puStack_20 = &stack0xfffffffc;
      uStack_14 = 0xffffffff;
      puStack_18 = &DAT_00f34cea;
      iStack_1c = *unaff_FS_OFFSET;
      uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
      *unaff_FS_OFFSET = (int)&iStack_1c;
      uStack_30 = 0;
      uStack_24 = uVar5;
      puVar4 = &stack0xfffffffc;
      if ((piStack_44[4] == 0) &&
         (puVar4 = &stack0xfffffffc, *(char *)((int)piStack_44 + 0x15) == '\0')) {
        piVar6 = (int *)FUN_0046e7a0(&uStack_2c);
        iVar2 = *piVar6;
        uStack_14 = 0xffffffff;
        FUN_00468340(uVar5);
        puVar4 = puStack_20;
        if (iVar2 != 0) {
          uStack_2c = 0;
          uStack_14 = 1;
          puVar7 = (undefined8 *)func_0x00468610(&uStack_40);
          pppuStack_38 = *(undefined ****)puVar7;
          piVar6 = *(int **)((int)puVar7 + 4);
          uStack_2c = *puVar7;
          *(undefined4 *)puVar7 = 0;
          *(undefined4 *)((int)puVar7 + 4) = 0;
          uStack_30 = 1;
          uStack_14._0_1_ = 1;
          uStack_14._1_3_ = 0;
          piStack_34 = piStack_3c;
          if (piStack_3c != (int *)0x0) {
            LOCK();
            iVar2 = piStack_3c[1] + -1;
            piStack_3c[1] = iVar2;
            UNLOCK();
            if (iVar2 == 0) {
              pcVar3 = *(code **)*piStack_3c;
              _guard_check_icall();
              (*pcVar3)();
              LOCK();
              iVar2 = piStack_34[2] + -1;
              piStack_34[2] = iVar2;
              UNLOCK();
              if (iVar2 == 0) {
                pcVar3 = *(code **)(*piStack_34 + 4);
                _guard_check_icall();
                (*pcVar3)();
              }
            }
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            piVar6[1] = piVar6[1] + 1;
            UNLOCK();
          }
          piStack_34 = &uStack_84;
          ppuStack_88 = std::_Func_impl_no_alloc<>::vftable;
          uStack_40 = 0;
          piStack_3c = (int *)0x0;
          pppuStack_64 = &ppuStack_88;
          uStack_14._0_1_ = 9;
          auStack_5c[4] = 0;
          auStack_5c[0] = 0;
          auStack_5c[1] = 0;
          auStack_5c[2] = 0;
          auStack_5c[3] = 0;
          auStack_5c[5] = 0;
          uStack_84 = pppuStack_38;
          piStack_80 = piVar6;
          pppuStack_38 = &ppuStack_88;
          func_0x0046bc40("UILayout::updateLater",0x15);
          uStack_14._0_1_ = 10;
          FUN_005e5070(auStack_90,auStack_5c,&ppuStack_88,0);
          FUN_00468340();
          uStack_14._0_1_ = 9;
          if (0xf < auStack_5c[5]) {
            func_0x0046b1f0(auStack_5c,auStack_5c[0],auStack_5c[5]);
          }
          auStack_5c[4] = 0;
          auStack_5c[5] = 0xf;
          auStack_5c[0] = auStack_5c[0] & 0xffffff00;
          uStack_14 = CONCAT31(uStack_14._1_3_,5);
          func_0x00464b40();
          uStack_30 = uStack_30 & 0xfffffffe;
          *(undefined1 *)((int)piStack_44 + 0x15) = 1;
          uStack_14 = 0xffffffff;
          puVar4 = puStack_20;
          if (piVar6 != (int *)0x0) {
            LOCK();
            iVar2 = piVar6[1] + -1;
            piVar6[1] = iVar2;
            UNLOCK();
            if (iVar2 == 0) {
              pcVar3 = *(code **)*piVar6;
              _guard_check_icall();
              (*pcVar3)();
              LOCK();
              piVar1 = piVar6 + 2;
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar4 = puStack_20;
              if (iVar2 == 1) {
                pcVar3 = *(code **)(*piVar6 + 4);
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
    *(undefined1 *)(piStack_44 + 5) = 1;
    pcVar3 = *(code **)(*piStack_44 + 0x28);
    _guard_check_icall();
    (*pcVar3)();
    pcVar3 = *(code **)(*(int *)piStack_44[6] + 0x18);
    _guard_check_icall();
    (*pcVar3)();
    *(undefined1 *)(piStack_44 + 5) = 0;
  }
  return;
}



void __thiscall FUN_00843cf0(int param_1,undefined4 *param_2)

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



void __thiscall FUN_00843d70(int param_1,undefined4 *param_2)

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



void __fastcall FUN_00846e20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = param_1 + 0x8c;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(uint *)(param_1 + 0x94) != 0) {
    if (*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0xa8) >> 3) {
      func_0x00626370(**(undefined4 **)(param_1 + 0x90),*(undefined4 **)(param_1 + 0x90));
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x90);
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)*puVar1;
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      func_0x00626a20(uVar3);
      func_0x008ab812(puVar1,0x28);
      puVar1 = puVar2;
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x90);
    *(int *)(*(int *)(param_1 + 0x90) + 4) = *(int *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = 0;
    iStack_14 = *(int *)(param_1 + 0x90);
    func_0x0046c050(&iStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00846e30(void)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  undefined1 auStack_5c [28];
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined1 auStack_30 [12];
  int iStack_24;
  int iStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3558d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  uStack_18 = uStack_6c;
  func_0x00469d30(&DAT_011a0ce0);
  uStack_8._0_1_ = 2;
  uVar1 = FUN_005fe700(auStack_5c,&stack0x00000004,auStack_30);
  uStack_8._0_1_ = 3;
  func_0x00469bd0(uVar1);
  uStack_8._0_1_ = 2;
  FUN_00469ba0();
  uStack_8._0_1_ = 1;
  FUN_00469ba0();
  uStack_38 = 0;
  func_0x0080da60();
  uStack_8._0_1_ = 4;
  func_0x0080ff70(&iStack_24);
  uStack_8._0_1_ = 5;
  iStack_3c = iStack_20;
  for (; iStack_40 = iStack_24, iStack_24 != iStack_3c; iStack_24 = iStack_24 + 8) {
    func_0x008471d0(iStack_24);
  }
  uStack_8._0_1_ = 4;
  FUN_00482c00();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FUN_00468340();
  uStack_8 = 0xffffffff;
  FUN_00469ba0();
  *unaff_FS_OFFSET = iStack_10;
  uStack_6c = 0x847004;
  FUN_008ab370();
  return;
}



undefined * Catch_00846f35(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x40) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  func_0x0046bc40("Failed to import UI styles from \'%s\': %s",0x28);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uVar2 = func_0x004852c0(unaff_EBP + 8,unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(unaff_EBP + -0x2c,*(undefined4 *)(unaff_EBP + -0x2c),
                    *(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x2c) = 0;
  return &DAT_00846fdb;
}



void __fastcall FUN_00847010(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  uint uStack_84;
  undefined1 auStack_30 [12];
  int iStack_24;
  int iStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f355fd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_84 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_84;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  uStack_18 = uStack_84;
  uVar1 = func_0x00778b00(auStack_30,param_1);
  uStack_8._0_1_ = 2;
  func_0x0080db90(uVar1);
  uStack_8._0_1_ = 4;
  FUN_00469ba0();
  func_0x0080ff70(&iStack_24);
  uStack_8._0_1_ = 5;
  for (iVar2 = iStack_24; iVar2 != iStack_20; iVar2 = iVar2 + 8) {
    func_0x008471d0(iVar2);
  }
  uStack_8._0_1_ = 4;
  FUN_00482c00();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FUN_00468340();
  uStack_8 = 0xffffffff;
  FUN_00469ba0();
  *unaff_FS_OFFSET = iStack_10;
  uStack_84 = 0x8471c5;
  FUN_008ab370();
  return;
}



undefined * Catch_008470dd(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x40) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
  uVar2 = func_0x00778b00(unaff_EBP + -0x70,extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  func_0x0046bc40("Failed to import UI styles from \'%s\': %s",0x28);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar2 = func_0x004852c0(uVar2,unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(unaff_EBP + -0x2c,*(undefined4 *)(unaff_EBP + -0x2c),
                    *(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x2c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00469ba0();
  return &DAT_0084719c;
}



void __thiscall FUN_00847a30(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_44 [8];
  int iStack_24;
  char cStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3579e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_24 = param_1 + 0x8c;
  auStack_44[6] = 0;
  uStack_1c = CONCAT44(param_2,(undefined4)uStack_1c);
  auStack_44[7] = param_3;
  uVar4 = 0;
  if (*(int *)(param_3 + 0x10) != 0) {
    do {
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x10));
  }
  iVar2 = func_0x0046d8e0();
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iStack_24 + 4);
  }
  if (iVar2 == *(int *)(param_1 + 0x90)) {
    auStack_44[4] = 0;
    auStack_44[5] = 0;
    auStack_44[0] = 0;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    func_0x0046bc40();
    uStack_8 = 1;
    cStack_1d = func_0x0083d540();
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < auStack_44[5]) {
      func_0x0046b1f0();
    }
    auStack_44[4] = 0;
    auStack_44[5] = 0xf;
    auStack_44[0] = auStack_44[0] & 0xffffff00;
    if (cStack_1d != '\0') {
      uStack_1c = 0;
      func_0x00469da0(param_3);
      uStack_8 = 0;
      func_0x0080f400();
      uStack_8 = 3;
      auStack_44[0] = 0;
      auStack_44[1] = 0;
      auStack_44[2] = 0;
      auStack_44[3] = 0;
      auStack_44[4] = 0;
      auStack_44[5] = 0;
      func_0x0046bc40();
      uStack_8._0_1_ = 4;
      func_0x0077e8a0();
      uStack_8._0_1_ = 3;
      if (0xf < auStack_44[5]) {
        func_0x0046b1f0(auStack_44,auStack_44[0]);
      }
      auStack_44[4] = 0;
      auStack_44[5] = 0xf;
      auStack_44[0] = auStack_44[0] & 0xffffff00;
      func_0x00626200(auStack_44[7]);
      func_0x004683d0();
      *param_2 = (undefined4)uStack_1c;
      param_2[1] = 0;
      param_2[1] = uStack_1c._4_4_;
      uStack_1c = 0;
      uStack_8 = (uint)uStack_8._1_3_ << 8;
      goto LAB_00847c7e;
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar3 = (undefined4 *)func_0x00626200();
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
  uStack_8 = 0;
LAB_00847c7e:
  auStack_44[6] = 1;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00847ca0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_4c [4];
  int *piStack_48;
  undefined4 *puStack_44;
  uint auStack_40 [6];
  int *piStack_28;
  uint uStack_24;
  char cStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f35830;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_44 = param_1;
  uStack_24 = 0;
  uStack_1c = 0;
  uStack_14 = uVar2;
  FUN_00847a30(&uStack_1c,param_2);
  uStack_8 = 1;
  if ((int)uStack_1c == 0) {
LAB_00847d53:
    cStack_1d = '\0';
  }
  else {
    auStack_40[4] = 0;
    auStack_40[5] = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    func_0x0046bc40("__class",7,uVar2);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    uStack_24 = 1;
    piVar3 = (int *)func_0x0080f520(auStack_4c,auStack_40);
    uStack_24 = 3;
    if (*piVar3 == 0) goto LAB_00847d53;
    cStack_1d = '\x01';
  }
  uStack_8 = 2;
  if ((uStack_24 & 2) != 0) {
    uStack_24 = uStack_24 & 0xfffffffd;
    piStack_28 = piStack_48;
    if (piStack_48 != (int *)0x0) {
      LOCK();
      iVar1 = piStack_48[1] + -1;
      piStack_48[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar4 = *(code **)*piStack_48;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        iVar1 = piStack_28[2] + -1;
        piStack_28[2] = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar4 = *(code **)(*piStack_28 + 4);
          _guard_check_icall();
          (*pcVar4)();
        }
      }
    }
  }
  uStack_8 = 1;
  if ((uStack_24 & 1) != 0) {
    uStack_24 = uStack_24 & 0xfffffffe;
    if (0xf < auStack_40[5]) {
      func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
    }
    auStack_40[4] = 0;
    auStack_40[5] = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
  }
  if (cStack_1d == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0);
    uStack_24 = uStack_24 | 4;
    uStack_8 = uStack_8 & 0xffffff00;
    piStack_28 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_00847f21;
    LOCK();
    iVar1 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_00847f21;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar3 = piStack_28 + 2;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 != 1) goto LAB_00847f21;
    pcVar4 = *(code **)(*piStack_28 + 4);
  }
  else {
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[4] = 0;
    auStack_40[5] = 0;
    func_0x0046bc40("__class",7);
    uStack_8._0_1_ = 4;
    func_0x005f4390(param_1,auStack_40);
    uStack_24 = uStack_24 | 4;
    uStack_8._0_1_ = 1;
    if (0xf < auStack_40[5]) {
      func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
    }
    auStack_40[4] = 0;
    auStack_40[5] = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    piStack_28 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_00847f21;
    LOCK();
    iVar1 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_00847f21;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar3 = piStack_28 + 2;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 != 1) goto LAB_00847f21;
    pcVar4 = *(code **)(*piStack_28 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_00847f21:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00847f40(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint uStack_154;
  undefined1 auStack_12c [12];
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined1 auStack_108 [176];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined1 auStack_38 [12];
  int iStack_2c;
  int iStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f358e3;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_154 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_154;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_110 = param_1;
  uStack_114 = param_1;
  uStack_118 = param_3;
  uStack_10c = 0;
  uStack_8 = 1;
  uStack_18 = uStack_154;
  memset(auStack_108,0,0xb0);
  func_0x004687a0(1);
  uStack_8._0_1_ = 2;
  func_0x0046a640(0,0);
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  func_0x00607620(param_2,*puVar1,0);
  func_0x005d2a90(0,0,0);
  uStack_40 = 0;
  func_0x00469d30("(string)");
  uStack_8._0_1_ = 3;
  func_0x0080dd00(auStack_38);
  uStack_8._0_1_ = 5;
  FUN_00469ba0();
  uStack_20 = 0;
  uStack_8._0_1_ = 6;
  func_0x0080ff70(&iStack_2c);
  uStack_8._0_1_ = 7;
  iStack_120 = iStack_28;
  iVar5 = iStack_2c;
  do {
    iStack_11c = iVar5;
    if (iVar5 == iStack_120) {
      uStack_8._0_1_ = 6;
      FUN_00482c00();
      func_0x0047a510(&uStack_20);
      uStack_10c = uStack_10c | 1;
      uStack_8._0_1_ = 5;
      FUN_00468340();
      uStack_8._0_1_ = 2;
      FUN_00468340();
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      func_0x004673c0();
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    func_0x005ba660(auStack_58);
    uStack_8._0_1_ = 8;
    iVar3 = func_0x005dd4d0(&DAT_011a0cbc,0);
    if (iVar3 == -1) {
      if ((int)uStack_20 != 0) {
        func_0x00469d30("cannot have multiple main widgets in otui files");
        uStack_8 = CONCAT31(uStack_8._1_3_,9);
        func_0x0047d860();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = FUN_00848790(auStack_12c,iVar5,uStack_118);
      uStack_8._0_1_ = 10;
      func_0x0046ffa0(uVar4);
      uStack_8._0_1_ = 8;
      FUN_00468340();
    }
    else {
      func_0x008471d0(iVar5);
    }
    uStack_8._0_1_ = 7;
    FUN_00469ba0();
    iVar5 = iVar5 + 8;
  } while( true );
}



undefined * Catch_00848164(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x120) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x10c) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("failed to load UI from string: %s",0x21);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar3 = func_0x00485670(unaff_EBP + -0x10c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x110);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(uint *)(unaff_EBP + -0x108) = *(uint *)(unaff_EBP + -0x108) | 1;
  return &DAT_0084822f;
}



void FUN_00848280(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000020;
  uint uStack_d8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [12];
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  char cStack_71;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  int iStack_2c;
  int iStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f359ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_d8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_d8;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_7c = param_1;
  uStack_80 = param_1;
  uStack_84 = in_stack_00000020;
  uStack_78 = 0;
  iStack_8._0_1_ = 2;
  iStack_8._1_3_ = 0;
  uStack_18 = uStack_d8;
  func_0x00469d30(&DAT_011a0ce0);
  iStack_8._0_1_ = 3;
  uVar2 = FUN_005fe700(auStack_70,&stack0x00000008,auStack_58);
  iStack_8._0_1_ = 4;
  func_0x00469bd0(uVar2);
  iStack_8._0_1_ = 3;
  FUN_00469ba0();
  iStack_8._0_1_ = 2;
  FUN_00469ba0();
  uStack_40 = 0;
  func_0x0080da60();
  uStack_20 = 0;
  iStack_8._0_1_ = 6;
  func_0x0080ff70(&iStack_2c);
  iStack_8._0_1_ = 7;
  iStack_8c = iStack_28;
  iVar4 = iStack_2c;
  do {
    iStack_88 = iVar4;
    if (iVar4 == iStack_8c) {
      iStack_8._0_1_ = 6;
      FUN_00482c00();
      func_0x0047a510(&uStack_20);
      uStack_78 = uStack_78 | 1;
      iStack_8._0_1_ = 5;
      FUN_00468340();
      iStack_8._0_1_ = 2;
      FUN_00468340();
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00469ba0();
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    func_0x005ba660(auStack_58);
    iStack_8._0_1_ = 8;
    func_0x00469d30("$var-");
    iStack_8._0_1_ = 9;
    cStack_71 = func_0x0083d540(uStack_7c);
    iStack_8._0_1_ = 8;
    FUN_00469ba0();
    if (cStack_71 == '\0') {
      iVar3 = func_0x005dd4d0(&DAT_011a0cbc,0);
      if (iVar3 == -1) {
        if ((int)uStack_20 != 0) {
          func_0x00469d30("cannot have multiple main widgets in otui files");
          iStack_8 = CONCAT31(iStack_8._1_3_,0xc);
          func_0x0047d860();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar2 = FUN_00848790(auStack_98,iVar4,uStack_84);
        iStack_8._0_1_ = 0xd;
        func_0x0046ffa0(uVar2);
        iStack_8._0_1_ = 8;
        FUN_00468340();
      }
      else {
        func_0x008471d0(iVar4);
      }
    }
    else {
      func_0x00482f60(auStack_70,5,0xffffffff);
      iStack_8._0_1_ = 10;
      uVar2 = func_0x0077d440(auStack_b0);
      iStack_8._0_1_ = 0xb;
      FUN_0077f1c0(auStack_70,uVar2);
      iStack_8._0_1_ = 10;
      FUN_00469ba0();
      iStack_8._0_1_ = 8;
      FUN_00469ba0();
    }
    iStack_8._0_1_ = 7;
    FUN_00469ba0();
    iVar4 = iVar4 + 8;
  } while( true );
}



undefined * Catch_008484d4(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x8c) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x78) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("failed to load UI from \'%s\': %s",0x1f);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uVar3 = func_0x004852c0(unaff_EBP + 0xc,unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x7c);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(uint *)(unaff_EBP + -0x74) = *(uint *)(unaff_EBP + -0x74) | 1;
  return &DAT_00848597;
}



void FUN_008485f0(undefined4 param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f35a1e;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_2);
  iStack_8 = 0;
  func_0x0080f400();
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  FUN_00848790();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FUN_00468340();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_0084869b(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x4c) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  func_0x0046bc40("failed to create widget from style \'%s\': %s",0x2b);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar3 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0x2c),unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(unaff_EBP + -0x44,*(undefined4 *)(unaff_EBP + -0x44),
                    *(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x44) = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) | 1;
  return &DAT_00848754;
}



void FUN_00848790(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_8c [4];
  int *piStack_88;
  int *piStack_84;
  int *piStack_7c;
  int *piStack_78;
  uint uStack_74;
  uint auStack_70 [6];
  int *piStack_58;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  undefined8 uStack_3c;
  uint auStack_34 [3];
  int *piStack_28;
  int *piStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f35af5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_84 = param_1;
  uStack_74 = 0;
  piStack_58 = param_2;
  piStack_78 = param_1;
  piStack_7c = param_3;
  uStack_3c = 0;
  iStack_8 = 1;
  func_0x00469da0(*param_2 + 0x2c,uStack_14);
  uStack_74 = 2;
  FUN_00847a30(&uStack_3c,auStack_70);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  uStack_74 = 0;
  iStack_8._0_1_ = 3;
  if (0xf < auStack_70[5]) {
    func_0x0046b1f0(auStack_70,auStack_70[0],auStack_70[5]);
  }
  auStack_70[4] = 0;
  auStack_70[5] = 0xf;
  auStack_70[0] = auStack_70[0] & 0xffffff00;
  if ((int)uStack_3c != 0) {
    uStack_1c = 0;
    func_0x008100a0(&uStack_1c);
    iStack_8._0_1_ = 7;
    func_0x0080fd90(piStack_58);
    piStack_24 = (int *)0x0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    piStack_28 = (int *)0x0;
    uStack_20 = 0;
    func_0x0046bc40("__class",7);
    iStack_8._0_1_ = 8;
    func_0x005f4390(auStack_54,auStack_34);
    iStack_8._0_1_ = 10;
    if (0xf < uStack_20) {
      func_0x0046b1f0(auStack_34,auStack_34[0],uStack_20);
    }
    piStack_24 = (int *)0x0;
    uStack_20 = 0xf;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    param_1[0] = 0;
    param_1[1] = 0;
    auStack_70[0] = 0;
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[3] = 0;
    auStack_70[4] = 0;
    auStack_70[5] = 0;
    func_0x0046bc40("create",6);
    iStack_8._0_1_ = 0xb;
    func_0x00849490(param_1,auStack_54,auStack_70);
    uStack_74 = uStack_74 | 1;
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if (0xf < auStack_70[5]) {
      func_0x0046b1f0(auStack_70,auStack_70[0],auStack_70[5]);
    }
    auStack_70[4] = 0;
    auStack_70[5] = 0xf;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    if (*piStack_7c != 0) {
      FUN_00852c20(param_1);
    }
    if (*param_1 != 0) {
      auStack_70[4] = 0;
      auStack_70[0] = 0;
      auStack_70[1] = 0;
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[5] = 0;
      func_0x0046bc40("onCreate",8);
      iStack_8 = CONCAT31(iStack_8._1_3_,0xc);
      uVar3 = func_0x00470bf0(auStack_70);
      if (0 < (int)uVar3) {
        func_0x00d66d90(DAT_0145e9f0,~uVar3);
      }
      iStack_8._0_1_ = 10;
      if (0xf < auStack_70[5]) {
        func_0x0046b1f0(auStack_70,auStack_70[0],auStack_70[5]);
      }
      auStack_70[4] = 0;
      auStack_70[5] = 0xf;
      auStack_70[0] = auStack_70[0] & 0xffffff00;
      FUN_00857dd0(&uStack_1c);
      func_0x0080ff70(&piStack_28);
      iStack_8._0_1_ = 0xd;
      piStack_7c = piStack_24;
      piVar5 = piStack_28;
      if (piStack_28 != piStack_24) {
        do {
          if (*(char *)(*piVar5 + 0x78) == '\0') {
            FUN_00848790(auStack_8c,piVar5,piStack_78);
            piStack_58 = piStack_88;
            if (piStack_88 != (int *)0x0) {
              LOCK();
              iVar2 = piStack_88[1] + -1;
              piStack_88[1] = iVar2;
              UNLOCK();
              if (iVar2 == 0) {
                pcVar1 = *(code **)*piStack_88;
                _guard_check_icall();
                (*pcVar1)();
                LOCK();
                iVar2 = piStack_58[2] + -1;
                piStack_58[2] = iVar2;
                UNLOCK();
                if (iVar2 == 0) {
                  pcVar1 = *(code **)(*piStack_58 + 4);
                  _guard_check_icall();
                  (*pcVar1)();
                }
              }
            }
            func_0x0080f9f0(piVar5);
          }
          piVar5 = piVar5 + 2;
        } while (piVar5 != piStack_7c);
      }
      iStack_8._0_1_ = 10;
      if (piStack_28 != (int *)0x0) {
        func_0x00485920(piStack_28);
        func_0x0046e710(piStack_28,(int)(uStack_20 - (int)piStack_28) >> 3);
        piStack_28 = (int *)0x0;
        piStack_24 = (int *)0x0;
        uStack_20 = 0;
      }
      auStack_70[4] = 0;
      auStack_70[0] = 0;
      auStack_70[1] = 0;
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[5] = 0;
      func_0x0046bc40("onSetup",7);
      iStack_8 = CONCAT31(iStack_8._1_3_,0x10);
      uVar3 = func_0x00470bf0(auStack_70);
      if (0 < (int)uVar3) {
        func_0x00d66d90(DAT_0145e9f0,~uVar3);
      }
      iStack_8._0_1_ = 10;
      if (0xf < auStack_70[5]) {
        func_0x0046b1f0(auStack_70,auStack_70[0],auStack_70[5]);
      }
      auStack_70[4] = 0;
      auStack_70[5] = 0xf;
      auStack_70[0] = auStack_70[0] & 0xffffff00;
      iStack_8._0_1_ = 7;
      if (0xf < uStack_40) {
        func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
      }
      uStack_44 = 0;
      uStack_40 = 0xf;
      auStack_54[0] = auStack_54[0] & 0xffffff00;
      iStack_8._0_1_ = 3;
      piStack_58 = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar2 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)*uStack_1c._4_4_;
          _guard_check_icall();
          (*pcVar1)();
          LOCK();
          iVar2 = piStack_58[2] + -1;
          piStack_58[2] = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar1 = *(code **)(*piStack_58 + 4);
            _guard_check_icall();
            (*pcVar1)();
          }
        }
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      piStack_58 = uStack_3c._4_4_;
      if (uStack_3c._4_4_ != (int *)0x0) {
        LOCK();
        iVar2 = uStack_3c._4_4_[1] + -1;
        uStack_3c._4_4_[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)*uStack_3c._4_4_;
          _guard_check_icall();
          (*pcVar1)();
          LOCK();
          piVar5 = piStack_58 + 2;
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            pcVar1 = *(code **)(*piStack_58 + 4);
            _guard_check_icall();
            (*pcVar1)();
          }
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    func_0x00469d30("unable to create widget of type \'%s\'");
    iStack_8._0_1_ = 0xe;
    func_0x00484eb0(auStack_54);
    iStack_8._0_1_ = 0xf;
    func_0x0047d860();
  }
  FUN_005beae0();
  uVar4 = func_0x005ba660(auStack_34);
  iStack_8._0_1_ = 4;
  func_0x00469d30("\'%s\' is not a defined style");
  iStack_8._0_1_ = 5;
  func_0x00484eb0(uVar4);
  iStack_8 = CONCAT31(iStack_8._1_3_,6);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined1 * Catch_0084902a(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x9c) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x88) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("failed to merge style from \'%s\': %s",0x23);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  uVar2 = func_0x004852c0(unaff_EBP + 8,unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  return &LAB_00848fd4;
}



TypeDescriptor * FUN_0084a670(void)

{
  return &`protected:_void___thiscall_UIManager::onWidgetDestroy(class_std::shared_ptr<>_const&)'::
          __l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0084a680(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int aiStack_90 [9];
  int *piStack_6c;
  undefined4 auStack_68 [5];
  undefined1 auStack_54 [4];
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  uint auStack_44 [6];
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f353d9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0077a550(uStack_14);
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x008491a0(*(int *)(param_1 + 4) + 0xcc);
  iStack_8 = 0;
  func_0x00792a10();
  func_0x007929c0(&uStack_28);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  piStack_6c = (int *)0x0;
  iStack_8._0_1_ = 3;
  piVar4 = (int *)func_0x008ab47d(0x18);
  iStack_8._0_1_ = 4;
  piStack_4c = piVar4 + 1;
  *piVar4 = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_48 = piVar4;
  piStack_2c = piVar4;
  func_0x008491a0(auStack_68);
  piStack_2c = (int *)0x0;
  iStack_8._0_1_ = 7;
  auStack_44[4] = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  auStack_44[5] = 0;
  piStack_6c = piVar4;
  func_0x0046bc40("UIManager::onWidgetDestroy::<lambda_1>::operator ()",0x33);
  iStack_8 = CONCAT31(iStack_8._1_3_,8);
  FUN_005e4dd0(auStack_54,auStack_44,aiStack_90,1);
  if (piStack_50 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_50[1] + -1;
    piStack_50[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_50;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_50[2] + -1;
      piStack_50[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_50 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  iStack_8._0_1_ = 7;
  if (0xf < auStack_44[5]) {
    func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
  }
  auStack_44[4] = 0;
  auStack_44[5] = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  iStack_8._0_1_ = 2;
  if (piStack_6c != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_6c + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_90 >> 8),piStack_6c != aiStack_90));
    (*pcVar1)();
    piStack_6c = (int *)0x0;
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x00792a10();
  uVar3 = auStack_68[0];
  auStack_68[0] = 0;
  func_0x008ab812(uVar3,8);
  iStack_8 = 0xffffffff;
  func_0x00792a10();
  uVar3 = uStack_28;
  uStack_28 = 0;
  func_0x008ab812(uVar3,8);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084a690(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_0084a6b0(int param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f35d98;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00792a10(uVar2);
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x008ab812(uVar1,8);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0084a730(void)

{
  return &`public:___thiscall_`protected:_void___thiscall_UIManager::onWidgetDestroy(class_std::shared_ptr<>_const&)'::`2'::<lambda_1>::operator()(void)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0084a740(int param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e8 [4];
  int *piStack_e4;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  uint auStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  uint auStack_b0 [4];
  undefined4 uStack_a0;
  uint uStack_9c;
  uint auStack_98 [4];
  undefined4 uStack_88;
  uint uStack_84;
  uint auStack_80 [7];
  int *piStack_64;
  int iStack_60;
  uint uStack_5c;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 ***pppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  uint *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f354f9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar9 = 0;
  uStack_14 = 0;
  iStack_60 = param_1 + 4;
  func_0x0077a550(uVar4);
  uStack_28 = *(uint *)(param_1 + 0x10);
  uStack_5c = *(int *)(param_1 + 0x14) + uStack_28;
  iVar5 = param_1 + 4;
  if (uStack_28 != uStack_5c) {
    do {
      piVar10 = (int *)(*(int *)(*(int *)(iVar5 + 4) +
                                (uStack_28 >> 1 & *(int *)(iVar5 + 8) - 1U) * 4) +
                       (uStack_28 & 1) * 8);
      iVar5 = piVar10[1];
      if (iVar5 == 0) {
        iStack_20 = 0;
LAB_00846941:
        iStack_20 = iStack_20 + -1;
        iStack_8 = 0;
        piStack_1c = piVar10;
        func_0x00469da0(*piVar10 + 0x28);
        uStack_14 = uVar9 | 0x20;
        iStack_8._0_1_ = 1;
        func_0x00469da0(*piVar10 + 0x84);
        iVar5 = *piVar10;
        iStack_8._0_1_ = 2;
        uVar3 = (undefined1)iStack_8;
        iStack_8._0_1_ = 2;
        if (*(int *)(iVar5 + 0x80) != 0) {
          LOCK();
          piVar10 = (int *)(*(int *)(iVar5 + 0x80) + 4);
          *piVar10 = *piVar10 + 1;
          UNLOCK();
        }
        auStack_80[6] = *(int *)(iVar5 + 0x7c);
        uStack_14 = uVar9 | 0xe0;
        piVar10 = *(int **)(iVar5 + 0x80);
        piStack_64 = piVar10;
        piStack_24 = piVar10;
        if (auStack_80[6] == 0) {
          auStack_80[4] = 0;
          auStack_80[5] = 0;
          auStack_80[0] = 0;
          auStack_80[1] = 0;
          auStack_80[2] = 0;
          auStack_80[3] = 0;
          iStack_8._0_1_ = uVar3;
          func_0x0046bc40(&DAT_0112e1b4,0);
          puStack_18 = auStack_80;
          uVar9 = uVar9 | 0xe4;
        }
        else {
          FUN_0077fac0(auStack_e8);
          iStack_8 = CONCAT31(iStack_8._1_3_,3);
          uStack_14 = uVar9 | 0xe1;
          puStack_18 = (uint *)FUN_005cc780(auStack_e0);
          uVar9 = uVar9 | 0xe3;
        }
        iStack_8 = 6;
        uStack_14 = uVar9;
        func_0x00469da0(*piStack_1c + 0x10);
        uStack_14 = uVar9 | 0x10;
        pppuStack_40 = (undefined4 ****)0x0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        func_0x0046bc40("widget \'%s\' (parent: \'%s\' (%s), source: \'%s\') destroyed but still have %d reference(s) left"
                        ,0x5b);
        iStack_8._0_1_ = 8;
        ppppuVar7 = &pppuStack_40;
        if (0xf < uStack_2c) {
          ppppuVar7 = (undefined4 ****)pppuStack_40;
        }
        iVar5 = func_0x0084a230(ppppuVar7,auStack_98,puStack_18,auStack_b0,auStack_c8,&iStack_20);
        iVar6 = iVar5 + 1;
        if (SCARRY4(iVar5,1)) {
          iVar6 = -1;
        }
        func_0x00469c80(iVar6,0);
        ppppuVar7 = &pppuStack_40;
        if (0xf < uStack_2c) {
          ppppuVar7 = (undefined4 ****)pppuStack_40;
        }
        uStack_14 = uVar9 | 0x18;
        uVar8 = func_0x0084a230(ppppuVar7,auStack_98,puStack_18,auStack_b0,auStack_c8,&iStack_20);
        func_0x004698c0(uVar8,0);
        FUN_005ee340(2,auStack_58);
        uStack_14 = (uVar9 | 0x18) & 0xfffffff7;
        iStack_8._0_1_ = 7;
        if (0xf < uStack_44) {
          func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
        }
        uStack_48 = 0;
        uStack_44 = 0xf;
        auStack_58[0] = auStack_58[0] & 0xffffff00;
        iStack_8._0_1_ = 6;
        if (0xf < uStack_2c) {
          func_0x0046b1f0(&pppuStack_40,pppuStack_40,uStack_2c);
        }
        uStack_14 = uStack_14 & 0xffffffef;
        uStack_30 = 0;
        uStack_2c = 0xf;
        pppuStack_40 = (undefined4 ***)((uint)pppuStack_40 & 0xffffff00);
        iStack_8 = CONCAT31(iStack_8._1_3_,5);
        if (0xf < uStack_84) {
          func_0x0046b1f0(auStack_98,auStack_98[0],uStack_84);
        }
        uStack_88 = 0;
        uStack_84 = 0xf;
        auStack_98[0] = auStack_98[0] & 0xffffff00;
        iStack_8 = 4;
        if ((uStack_14 & 4) != 0) {
          uStack_14 = uStack_14 & 0xfffffffb;
          if (0xf < auStack_80[5]) {
            func_0x0046b1f0(auStack_80,auStack_80[0],auStack_80[5]);
          }
          auStack_80[4] = 0;
          auStack_80[5] = 0xf;
          auStack_80[0] = auStack_80[0] & 0xffffff00;
        }
        iStack_8 = 3;
        if ((uStack_14 & 2) != 0) {
          uStack_14 = uStack_14 & 0xfffffffd;
          if (0xf < uStack_cc) {
            func_0x0046b1f0(auStack_e0,auStack_e0[0],uStack_cc);
          }
          uStack_d0 = 0;
          uStack_cc = 0xf;
          auStack_e0[0] = auStack_e0[0] & 0xffffff00;
        }
        piVar2 = piStack_e4;
        iStack_8 = 2;
        if (((uStack_14 & 1) != 0) && (uStack_14 = uStack_14 & 0xfffffffe, piStack_e4 != (int *)0x0)
           ) {
          LOCK();
          iVar5 = piStack_e4[1] + -1;
          piStack_e4[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar1 = *(code **)*piStack_e4;
            _guard_check_icall();
            (*pcVar1)();
            LOCK();
            piVar10 = piVar2 + 2;
            iVar5 = *piVar10 + -1;
            *piVar10 = iVar5;
            UNLOCK();
            piVar10 = piStack_24;
            if (iVar5 == 0) {
              pcVar1 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar1)();
              piVar10 = piStack_24;
            }
          }
        }
        uStack_14 = uStack_14 & 0xffffff7f;
        iStack_8._0_1_ = 1;
        if (piVar10 != (int *)0x0) {
          LOCK();
          iVar5 = piVar10[1] + -1;
          piVar10[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar1 = *(code **)*piVar10;
            _guard_check_icall();
            (*pcVar1)();
            LOCK();
            iVar5 = piVar10[2] + -1;
            piVar10[2] = iVar5;
            UNLOCK();
            if (iVar5 == 0) {
              pcVar1 = *(code **)(*piVar10 + 4);
              _guard_check_icall();
              (*pcVar1)();
            }
          }
        }
        uStack_14 = uStack_14 & 0xffffffbf;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (0xf < uStack_9c) {
          func_0x0046b1f0(auStack_b0,auStack_b0[0],uStack_9c);
        }
        uStack_14 = uStack_14 & 0xffffffdf;
        uStack_a0 = 0;
        uStack_9c = 0xf;
        auStack_b0[0] = auStack_b0[0] & 0xffffff00;
        iStack_8 = 0xffffffff;
        if (0xf < uStack_b4) {
          func_0x0046b1f0(auStack_c8,auStack_c8[0],uStack_b4);
        }
        uStack_b8 = 0;
        uStack_b4 = 0xf;
        auStack_c8[0] = auStack_c8[0] & 0xffffff00;
        uVar9 = uStack_14;
      }
      else if (*(int *)(iVar5 + 4) != 1) {
        iStack_20 = *(int *)(iVar5 + 4);
        goto LAB_00846941;
      }
      uStack_28 = uStack_28 + 1;
      iVar5 = iStack_60;
    } while (uStack_28 != uStack_5c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __fastcall FUN_0084a750(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f35de0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x18,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x007929c0(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_0084a7d0(void)

{
  return &`public:_void___thiscall_UIManager::updateHoveredText(bool)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0084a7e0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined4 ***pppuVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [16];
  int iStack_34;
  undefined4 **appuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar7 = (int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f35225;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar7;
  uStack_14 = uVar5;
  if (((*piVar1 != 0) && (piVar1[8] != 0)) &&
     (*(undefined1 *)((int)piVar1 + 0x89) = 0,
     (*(uint *)(*(int *)(*piVar7 + 0x20) + 0xf8) >> 1 & 1) != 0)) {
    uStack_4c = DAT_0145eaec;
    uStack_48 = DAT_0145eaf0;
    FUN_0085dc60(appuStack_2c,&uStack_4c);
    uStack_8 = 0;
    iVar2 = *piVar7;
    cVar4 = func_0x005b97f0(appuStack_2c,iVar2 + 0x28,uVar5);
    if (cVar4 != '\0') {
      func_0x00469da0(iVar2 + 0x28);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if ((undefined4 ***)(*piVar7 + 0x28) != appuStack_2c) {
        pppuVar6 = appuStack_2c;
        if (0xf < uStack_18) {
          pppuVar6 = (undefined4 ***)appuStack_2c[0];
        }
        func_0x0046a660(pppuVar6,uStack_1c);
      }
      if (iStack_34 != 0) {
        pcVar3 = *(code **)(**(int **)(*piVar7 + 0x20) + 100);
        _guard_check_icall(auStack_44,0);
        (*pcVar3)();
      }
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x38) != 0) {
        pcVar3 = *(code **)(**(int **)(iVar2 + 0x20) + 100);
        _guard_check_icall(iVar2 + 0x28,1);
        (*pcVar3)();
      }
      uStack_8 = uStack_8 & 0xffffff00;
      FUN_00469ba0();
    }
    uStack_8 = 0xffffffff;
    if (0xf < uStack_18) {
      func_0x0046b1f0(appuStack_2c,appuStack_2c[0],uStack_18);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084a7f0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0084a810(void)

{
  return &`public:_void___thiscall_UIManager::updateHoveredWidget(bool)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0084a820(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_3c [4];
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piStack_34 = (int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f351e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar4;
  if (*(int *)*piStack_34 != 0) {
    *(undefined1 *)((int *)*piStack_34 + 0x22) = 0;
    uStack_24 = 0;
    uStack_8 = 0;
    uStack_1c = CONCAT44(DAT_0145eaf0,DAT_0145eaec);
    piVar5 = (int *)FUN_00859310(auStack_3c,&uStack_1c,0);
    piStack_30 = (int *)piVar5[1];
    piVar1 = (int *)*piVar5;
    uStack_24 = *(undefined8 *)piVar5;
    *piVar5 = 0;
    piVar5[1] = 0;
    piStack_2c = (int *)0x0;
    uStack_8 = uStack_8 & 0xffffff00;
    piStack_28 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_38[1] + -1;
      piStack_38[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_38;
        _guard_check_icall(uVar4);
        (*pcVar2)();
        LOCK();
        iVar3 = piStack_28[2] + -1;
        piStack_28[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piStack_28 + 4);
          _guard_check_icall(uVar4);
          (*pcVar2)();
        }
      }
    }
    piVar5 = piVar1;
    if ((piVar1 != (int *)0x0) && ((~(byte)((uint)piVar1[0x42] >> 4) & 1) == 0)) {
      uStack_1c = 0;
      uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
      piVar5 = (int *)0x0;
      uStack_24 = 0;
      uStack_8._0_1_ = 3;
      piStack_2c = piVar1;
      piStack_28 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        LOCK();
        iVar3 = piStack_30[1] + -1;
        piStack_30[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)*piStack_30;
          _guard_check_icall(uVar4);
          (*pcVar2)();
          LOCK();
          iVar3 = piStack_30[2] + -1;
          piStack_30[2] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)(*piStack_30 + 4);
            _guard_check_icall(uVar4);
            (*pcVar2)();
          }
        }
      }
      uStack_8 = (uint)uStack_8._1_3_ << 8;
    }
    iVar3 = *piStack_34;
    if (piVar5 != *(int **)(iVar3 + 0x20)) {
      if (*(int *)(iVar3 + 0x24) != 0) {
        LOCK();
        piVar1 = (int *)(*(int *)(iVar3 + 0x24) + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      piVar1 = *(int **)(iVar3 + 0x20);
      piStack_30 = *(int **)(iVar3 + 0x24);
      uStack_1c = *(undefined8 *)(iVar3 + 0x20);
      uStack_8 = CONCAT31(uStack_8._1_3_,5);
      piStack_28 = piVar1;
      func_0x004683d0(&uStack_24);
      if (piVar1 != (int *)0x0) {
        func_0x00859ee0(4);
        pcVar2 = *(code **)(*piVar1 + 0x24);
        _guard_check_icall(0);
        (*pcVar2)();
        if ((((uint)piStack_28[0x3e] >> 1 & 1) != 0) && (*(int *)(*piStack_34 + 0x38) != 0)) {
          pcVar2 = *(code **)(*piStack_28 + 100);
          _guard_check_icall(*piStack_34 + 0x28,0);
          (*pcVar2)();
          func_0x005e72a0();
        }
      }
      if (piVar5 != (int *)0x0) {
        func_0x00859ee0(4);
        pcVar2 = *(code **)(*piVar5 + 0x24);
        _guard_check_icall(1);
        (*pcVar2)();
      }
      piVar1 = piStack_30;
      uStack_8 = uStack_8 & 0xffffff00;
      if (piStack_30 != (int *)0x0) {
        LOCK();
        iVar3 = piStack_30[1] + -1;
        piStack_30[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)*piStack_30;
          _guard_check_icall();
          (*pcVar2)();
          LOCK();
          piVar5 = piVar1 + 2;
          iVar3 = *piVar5 + -1;
          *piVar5 = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)(*piVar1 + 4);
            _guard_check_icall();
            (*pcVar2)();
          }
        }
      }
    }
    uStack_8 = 0xffffffff;
    piVar1 = uStack_24._4_4_;
    if (uStack_24._4_4_ != (int *)0x0) {
      LOCK();
      iVar3 = uStack_24._4_4_[1] + -1;
      uStack_24._4_4_[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*uStack_24._4_4_;
        _guard_check_icall(uVar4);
        (*pcVar2)();
        LOCK();
        piVar5 = piVar1 + 2;
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084a830(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



undefined4 __thiscall FUN_0084a940(undefined4 param_1,byte param_2)

{
  func_0x0084a970();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



int __thiscall FUN_0084aa00(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f35e9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    func_0x0046ab40(iVar1,(*(int *)(param_1 + 0x38) - iVar1 >> 2) * -0x33333333,uVar4);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00618eb0();
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = piVar2[1] + -1;
    piVar2[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar1 = piVar2[2] + -1;
      piVar2[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_0084b030(undefined4 param_1,byte param_2)

{
  func_0x0084b060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4a8);
  }
  return param_1;
}



void __thiscall FUN_0084b1f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  int iStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int *piStack_28;
  char cStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f3608d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (param_2 != 1) goto LAB_0084b7b7;
  iVar9 = param_1 + 0x40;
  func_0x008673d0(iVar9,uVar7);
  func_0x00867470(iVar9);
  func_0x00869510(iVar9);
  func_0x008675b0(iVar9);
  piStack_28 = (int *)(*(int *)(param_1 + 0x338) + 0x3c);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x42c) >> 4);
  if (*piStack_28 == 0) goto LAB_0084b7b7;
  puStack_30 = puVar10;
  if ((puVar10 == (undefined4 *)0x0) &&
     (((((0.001 < ABS(*(float *)(param_1 + 0x488) - DAT_0145f21c) ||
         (0.001 < ABS(*(float *)(param_1 + 0x48c) - DAT_0145f220))) ||
        (0.001 < ABS(*(float *)(param_1 + 0x490) - DAT_0145f224))) ||
       (0.001 < ABS(*(float *)(param_1 + 0x494) - DAT_0145f228))) &&
      (*(int *)(param_1 + 0x480) != 0)))) {
    func_0x00617900(param_1 + 0x470,param_1 + 0x3a0,*(undefined4 *)(param_1 + 0x498),param_1 + 0x488
                    ,0);
  }
  cStack_21 = *(char *)(param_1 + 0x46c);
  if (cStack_21 != '\0') {
    *(undefined1 *)(param_1 + 0x46c) = 0;
  }
  if (((0.001 < ABS(*(float *)(param_1 + 0x10c) - DAT_0145f21c)) ||
      (0.001 < ABS(*(float *)(param_1 + 0x110) - DAT_0145f220))) ||
     ((0.001 < ABS(*(float *)(param_1 + 0x114) - DAT_0145f224) ||
      (0.001 < ABS(*(float *)(param_1 + 0x118) - DAT_0145f228))))) {
    if (cStack_21 != '\0') {
      if (*(char *)(param_1 + 0x444) != '\0') {
        func_0x006194c0(1);
      }
      **(undefined4 **)(param_1 + 0x450) = 0;
      **(undefined4 **)(param_1 + 0x448) = 0;
      if (0 < (int)puVar10) {
        iStack_2c = 0;
        do {
          piVar11 = (int *)(*(int *)(param_1 + 0x42c) + iStack_2c);
          if ((*piVar11 <= piVar11[2]) && (piVar11[1] <= piVar11[3])) {
            iStack_34 = *(int *)(param_1 + 0x438) + iStack_2c;
            if (*(char *)(param_1 + 0x444) != '\0') {
              func_0x006194c0(0);
            }
            func_0x00616b10(piVar11);
            func_0x00616b10(iStack_34);
          }
          iStack_2c = iStack_2c + 0x10;
          puStack_30 = (undefined4 *)((int)puStack_30 + -1);
        } while (puStack_30 != (undefined4 *)0x0);
      }
    }
    iVar9 = *(int *)(param_1 + 0x34c);
    if (iVar9 == *(int *)(param_1 + 0x350)) {
      func_0x0084aae0(param_1 + 0x444,piStack_28,param_1 + 0x10c);
    }
    else if (*(int *)(param_1 + 0x350) - iVar9 == 0x14) {
      func_0x0084aae0(param_1 + 0x444,piStack_28,iVar9 + 4);
    }
    else {
      iStack_34 = DAT_0145ec98;
      puVar10 = (undefined4 *)func_0x008ab47d(0x3c);
      _iStack_40 = CONCAT44(puVar10,iStack_40);
      *puVar10 = DrawQueueItem::vftable;
      puVar10[1] = 0;
      puVar10[2] = 0;
      if (piStack_28[1] != 0) {
        LOCK();
        piVar11 = (int *)(piStack_28[1] + 4);
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
      puVar10[1] = *piStack_28;
      puVar10[2] = piStack_28[1];
      uVar6 = DAT_012bc278;
      uVar5 = DAT_012bc274;
      uVar4 = DAT_012bc270;
      puVar10[3] = DAT_012bc26c;
      puVar10[4] = uVar4;
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
      uStack_14._1_3_ = 0;
      uStack_14._0_1_ = 2;
      *puVar10 = DrawQueueItemColoredTextureCoords::vftable;
      func_0x00471e10(param_1 + 0x444);
      uStack_14 = CONCAT31(uStack_14._1_3_,3);
      func_0x0061ba80(param_1 + 0x34c);
      uStack_14 = 0xffffffff;
      puVar1 = *(undefined4 **)(iStack_34 + 4);
      puStack_30 = puVar10;
      if (puVar1 == *(undefined4 **)(iStack_34 + 8)) {
        func_0x0047c520(puVar1,&puStack_30);
      }
      else {
        *puVar1 = puVar10;
        *(int *)(iStack_34 + 4) = *(int *)(iStack_34 + 4) + 4;
      }
    }
    if ((**(uint **)(param_1 + 0x390) & 0xfffffffe) != 0) {
      func_0x00472530(param_1 + 0x38c,param_1 + 0x10c);
    }
  }
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
      -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404)) {
    if (cStack_21 != '\0') {
      if (*(char *)(param_1 + 0x458) != '\0') {
        func_0x006194c0(1);
      }
      **(undefined4 **)(param_1 + 0x464) = 0;
      **(undefined4 **)(param_1 + 0x45c) = 0;
      puStack_30 = *(undefined4 **)(param_1 + 0x404);
      if ((int)puStack_30 < *(int *)(param_1 + 0x408)) {
        iStack_2c = (int)puStack_30 << 4;
        do {
          _iStack_40 = CONCAT44(*(int *)(param_1 + 0x438) + iStack_2c,iStack_40);
          iStack_34 = *(int *)(param_1 + 0x42c) + iStack_2c;
          if (*(char *)(param_1 + 0x458) != '\0') {
            func_0x006194c0(0);
          }
          func_0x00616b10(iStack_34);
          func_0x00616b10(puStack_3c);
          puStack_30 = (undefined4 *)((int)puStack_30 + 1);
          iStack_2c = iStack_2c + 0x10;
        } while ((int)puStack_30 < *(int *)(param_1 + 0x408));
      }
    }
    func_0x00472530(param_1 + 0x458,param_1 + 0x41c);
    func_0x0084aae0(param_1 + 0x458,piStack_28,param_1 + 0x40c);
  }
  if ((((*(char *)(param_1 + 0x69) == '\0') || (*(char *)(param_1 + 0x3dc) == '\0')) ||
      (*(char *)(param_1 + 0x3db) == '\0')) ||
     (((*(byte *)(param_1 + 0x108) & 1) == 0 || (*(int *)(param_1 + 0x3b0) < 0))))
  goto LAB_0084b7b7;
  iStack_40 = (int)DAT_0145db28;
  iVar9 = iStack_40 - *(int *)(param_1 + 0x3d0);
  if (0x14d < iVar9) {
    if (0x299 < iVar9) {
      puStack_3c = (undefined4 *)((ulonglong)DAT_0145db28 >> 0x20);
      *(int *)(param_1 + 0x3d0) = iStack_40;
      *(undefined4 **)(param_1 + 0x3d4) = puStack_3c;
    }
    goto LAB_0084b7b7;
  }
  iVar9 = *(int *)(param_1 + 0x3b0);
  if (iVar9 == 0) {
    if (((*(byte *)(param_1 + 0x328) & 2) == 0) || (*(int *)(param_1 + 0x308) == 0)) {
      iStack_44 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
      iStack_48 = *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x40);
      goto LAB_0084b73d;
    }
    iStack_48 = **(int **)(param_1 + 0x42c);
    iStack_44 = (*(int **)(param_1 + 0x42c))[1];
    iVar8 = *(int *)(*(int *)(param_1 + 0x338) + 0x20) + -1 + iStack_44;
  }
  else {
    iStack_44 = *(int *)(*(int *)(param_1 + 0x42c) + -0xc + iVar9 * 0x10);
    iStack_48 = *(int *)(*(int *)(param_1 + 0x42c) + -8 + iVar9 * 0x10);
LAB_0084b73d:
    iVar8 = *(int *)(*(int *)(param_1 + 0x338) + 0x20) + -1 + iStack_44;
  }
  iVar2 = *(int *)(param_1 + 0x408);
  iVar3 = *(int *)(param_1 + 0x404);
  _iStack_40 = CONCAT44(iVar8,iStack_48);
  if (((iVar2 == iVar3 || iVar2 - iVar3 < 0) || (iVar9 < iVar3)) ||
     (iVar8 = param_1 + 0x40c, iVar2 < iVar9)) {
    iVar8 = param_1 + 0x10c;
  }
  func_0x00472440(&iStack_48,iVar8);
LAB_0084b7b7:
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_0084c030(int param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_2 = *(uint *)(param_1 + 0x308);
  }
  if (param_2 != *(uint *)(param_1 + 0x3b0)) {
    if (*(uint *)(param_1 + 0x308) <= param_2) {
      param_2 = *(uint *)(param_1 + 0x308);
    }
    *(uint *)(param_1 + 0x3b0) = param_2;
    func_0x0084b7d0(1,param_1);
  }
  return;
}



void __thiscall FUN_0084c070(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != *(int *)(param_1 + 0x404)) || (param_3 != *(int *)(param_1 + 0x408))) {
    iVar3 = param_2;
    if (param_2 <= param_3) {
      iVar3 = param_3;
      param_3 = param_2;
    }
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x308);
    }
    iVar2 = *(int *)(param_1 + 0x308);
    *(undefined1 *)(param_1 + 0x46c) = 1;
    if (iVar2 < param_3) {
      param_3 = iVar2;
    }
    iVar1 = 0;
    if (0 < param_3) {
      iVar1 = param_3;
    }
    *(int *)(param_1 + 0x404) = iVar1;
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x408) = iVar2;
  }
  return;
}



void __fastcall FUN_0084c0e0(int param_1)

{
  *(undefined1 *)(param_1 + 0x3d8) = 1;
  func_0x0084b7d0(1);
  return;
}



// WARNING: Removing unreachable block (ram,0x0084ba01)
// WARNING: Removing unreachable block (ram,0x0084ba0e)
// WARNING: Removing unreachable block (ram,0x0084ba1c)
// WARNING: Removing unreachable block (ram,0x0084bb69)
// WARNING: Removing unreachable block (ram,0x0084ba26)
// WARNING: Removing unreachable block (ram,0x0084ba6b)
// WARNING: Removing unreachable block (ram,0x0084ba6f)
// WARNING: Removing unreachable block (ram,0x0084baa6)
// WARNING: Removing unreachable block (ram,0x0084bac4)
// WARNING: Removing unreachable block (ram,0x0084bad2)
// WARNING: Removing unreachable block (ram,0x0084bad5)
// WARNING: Removing unreachable block (ram,0x0084bae8)
// WARNING: Removing unreachable block (ram,0x0084baeb)
// WARNING: Removing unreachable block (ram,0x0084bb08)
// WARNING: Removing unreachable block (ram,0x0084bb1e)
// WARNING: Removing unreachable block (ram,0x0084bb21)
// WARNING: Removing unreachable block (ram,0x0084bb26)
// WARNING: Removing unreachable block (ram,0x0084bb2a)
// WARNING: Removing unreachable block (ram,0x0084bb2f)
// WARNING: Removing unreachable block (ram,0x0084bb46)
// WARNING: Removing unreachable block (ram,0x0084bb34)
// WARNING: Removing unreachable block (ram,0x0084bb41)

void __thiscall FUN_0084c100(int *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int ****ppppiVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int *piStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  char cStack_31;
  int ***apppiStack_30 [4];
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  param_1[0xed] = *param_2;
  param_1[0xee] = param_2[1];
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f360bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = uVar3;
  if ((char)param_1[0xff] == '\0') goto LAB_0084c005;
  FUN_0084d010(apppiStack_30);
  uStack_8 = 0;
  if ((int ****)(param_1 + 0xc4) != apppiStack_30) {
    ppppiVar5 = apppiStack_30;
    if (0xf < uStack_1c) {
      ppppiVar5 = (int ****)apppiStack_30[0];
    }
    func_0x0046a660(ppppiVar5,iStack_20,uVar3);
  }
  iStack_70 = iStack_20;
  if ((param_1[0x10] <= param_1[0x12]) && (param_1[0x11] <= param_1[0x13])) {
    *(undefined1 *)(param_1 + 0x11b) = 1;
    iStack_3c = -1;
    iStack_38 = -1;
    piStack_84 = (int *)func_0x00617c40(apppiStack_30,param_1[0xca],&iStack_3c);
    iStack_8c = param_1[0xce] + 0x44;
    iStack_88 = param_1[0xce] + 0x1044;
    if ((param_1[0x12] < param_1[0x10]) ||
       (((param_1[0x13] < param_1[0x11] || (*(char *)((int)param_1 + 0x336) != '\0')) ||
        (*(char *)((int)param_1 + 0x335) != '\0')))) {
      iVar6 = iStack_3c + param_1[0x80] + param_1[0x7e] + param_1[0xcb];
      iVar7 = (param_1[0x12] - param_1[0x10]) + 1;
      iStack_4c = iStack_38 + param_1[0xcc] + param_1[0x7f] + param_1[0x7d];
      iVar4 = (param_1[0x13] - param_1[0x11]) + 1;
      iVar8 = iVar6;
      if ((0 < iVar7) &&
         ((*(char *)((int)param_1 + 0x336) == '\0' || ((char)param_1[0xcd] != '\0')))) {
        iVar8 = iVar7;
      }
      if ((iVar4 < 1) || (*(char *)((int)param_1 + 0x335) != '\0')) {
        iVar4 = iStack_4c;
      }
      iStack_44 = iVar6;
      FUN_0077f6b0(iVar8,iVar4);
    }
    else {
      iStack_4c = iStack_38;
      iStack_44 = iStack_3c;
      iVar6 = iStack_3c;
    }
    iVar4 = iStack_70;
    if (iStack_70 != param_1[0x10c] - param_1[0x10b] >> 4) {
      func_0x005bf020(iStack_70,param_1 + 0x10b);
      func_0x005bf020(iVar4,param_1 + 0x10e);
    }
    iStack_5c = param_1[0xed];
    iStack_58 = param_1[0xee];
    iStack_40 = param_1[0x10];
    iStack_38 = iStack_5c;
    if (iVar6 <= (((param_1[0x12] - iStack_40) - param_1[0x7e]) - param_1[0x80]) + 1) {
      param_1[0xed] = 0;
      iStack_38 = 0;
    }
    iStack_74 = param_1[0x13];
    iStack_48 = param_1[0x11];
    if (iStack_4c <= (((iStack_74 - param_1[0x7f]) - param_1[0x7d]) - iStack_48) + 1) {
      param_1[0xee] = 0;
    }
    *(undefined1 *)((int)param_1 + 0x3db) = 0;
    if ((param_1[0xec] < 1) || (iStack_70 < 1)) {
LAB_0084bc31:
      *(undefined1 *)((int)param_1 + 0x3db) = 1;
    }
    else {
      iStack_68 = param_1[0xee];
      iStack_64 = (((param_1[0x12] + param_1[0x80] * -2) - param_1[0x7e]) - iStack_40) + iStack_38;
      iStack_60 = (iStack_68 - iStack_48) + iStack_74;
      ppppiVar5 = apppiStack_30;
      if (0xf < uStack_1c) {
        ppppiVar5 = (int ****)apppiStack_30[0];
      }
      piVar9 = (int *)(iStack_88 + (uint)*(byte *)((int)ppppiVar5 + param_1[0xec] + -1) * 8);
      iStack_3c = *(int *)(*piStack_84 + -8 + param_1[0xec] * 8);
      iVar8 = *(int *)(*piStack_84 + -4 + param_1[0xec] * 8);
      iVar6 = piVar9[1];
      iVar4 = iStack_3c + -1;
      iVar7 = *piVar9;
      iStack_6c = iStack_38;
      iStack_38 = iVar8;
      cVar2 = func_0x004686b0(&iStack_3c,iVar8);
      if ((cVar2 != '\0') &&
         (iStack_3c = iVar4 + iVar7, iStack_38 = iVar8 + -1 + iVar6,
         cVar2 = func_0x004686b0(&iStack_3c,extraout_ECX), cVar2 != '\0')) goto LAB_0084bc31;
    }
    if ((param_1[0xed] != iStack_5c) || (cStack_31 = '\0', param_1[0xee] != iStack_58)) {
      cStack_31 = '\x01';
    }
    iStack_7c = param_1[0x13] - param_1[0x7f];
    iStack_64 = param_1[0x12] - param_1[0x7e];
    iStack_68 = param_1[0x7d] + param_1[0x11];
    iStack_6c = param_1[0x80] + param_1[0x10];
    iVar4 = (iStack_7c - iStack_68) + 1;
    param_1[0xe9] = iStack_68;
    param_1[0xe8] = iStack_6c;
    iVar8 = (iStack_64 - iStack_6c) + 1;
    param_1[0xea] = iStack_64;
    param_1[0xeb] = iStack_7c;
    if ((param_1[0xef] != iVar8) || (param_1[0xf0] != iVar4)) {
      param_1[0xef] = iVar8;
      param_1[0xf0] = iVar4;
      cStack_31 = '\x01';
    }
    iVar4 = iStack_44;
    if (iStack_44 < param_1[0xef]) {
      iVar4 = param_1[0xf0];
    }
    iVar8 = iStack_4c;
    if (iStack_4c < param_1[0xf0]) {
      iVar8 = param_1[0xf0];
    }
    if ((iVar4 != param_1[0xf1]) || (iVar8 != param_1[0xf2])) {
      param_1[0xf1] = iVar4;
      param_1[0xf2] = iVar8;
      cStack_31 = '\x01';
    }
    uVar3 = param_1[0xca];
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 0x20) != 0) {
        iVar4 = (((iStack_7c - iStack_4c) - iStack_68) + 1) / 2;
        param_1[0xe9] = param_1[0xe9] + iVar4;
        param_1[0xeb] = param_1[0xeb] + iVar4;
      }
    }
    else {
      iVar4 = ((iStack_7c - iStack_4c) - iStack_68) + 1;
      param_1[0xe9] = param_1[0xe9] + iVar4;
      param_1[0xeb] = param_1[0xeb] + iVar4;
    }
    if ((uVar3 & 2) == 0) {
      if ((uVar3 & 0x10) != 0) {
        iVar4 = (((iStack_64 - iStack_44) - iStack_6c) + 1) / 2;
        param_1[0xe8] = param_1[0xe8] + iVar4;
        param_1[0xea] = param_1[0xea] + iVar4;
      }
    }
    else {
      iVar4 = ((iStack_64 - iStack_44) - iStack_6c) + 1;
      param_1[0xe8] = param_1[0xe8] + iVar4;
      param_1[0xea] = param_1[0xea] + iVar4;
    }
    iStack_38 = 0;
    iStack_60 = iStack_7c;
    iStack_58 = iStack_64;
    if (0 < iStack_70) {
      iStack_5c = 0;
      do {
        ppppiVar5 = apppiStack_30;
        if (0xf < uStack_1c) {
          ppppiVar5 = (int ****)apppiStack_30[0];
        }
        uVar3 = (uint)*(byte *)((int)ppppiVar5 + iStack_38);
        piVar9 = (int *)(param_1[0x10b] + iStack_5c);
        piVar9[2] = *piVar9 + -1;
        piVar9[3] = piVar9[1] + -1;
        if (0x1f < uVar3) {
          iVar4 = *(int *)(*piStack_84 + iStack_38 * 8);
          iVar8 = *(int *)(*piStack_84 + 4 + iStack_38 * 8);
          iStack_50 = iVar4 + -1 + *(int *)(iStack_88 + uVar3 * 8);
          piVar9 = (int *)(uVar3 * 0x10 + iStack_8c);
          iStack_54 = *(int *)(iStack_88 + 4 + uVar3 * 8) + -1 + iVar8;
          iStack_80 = *piVar9;
          iStack_74 = piVar9[1];
          iStack_48 = piVar9[2];
          iStack_40 = piVar9[3];
          uVar3 = param_1[0xca];
          if ((uVar3 & 8) == 0) {
            if ((uVar3 & 0x20) != 0) {
              iVar6 = (iStack_7c - iStack_4c) - iStack_68;
              iVar7 = iVar6 + 1;
              if (iVar7 < 0) {
                iVar7 = iVar6 + 2;
              }
              iVar8 = iVar8 + (iVar7 >> 1);
              iStack_54 = iStack_54 + (iVar7 >> 1);
            }
          }
          else {
            iVar6 = (iStack_7c - iStack_4c) - iStack_68;
            iVar8 = iVar8 + 1 + iVar6;
            iStack_54 = iStack_54 + 1 + iVar6;
          }
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 0x10) != 0) {
              iVar6 = (iStack_58 - iStack_44) - iStack_6c;
              iVar7 = iVar6 + 1;
              if (iVar7 < 0) {
                iVar7 = iVar6 + 2;
              }
              iVar7 = iVar7 >> 1;
              goto LAB_0084be86;
            }
          }
          else {
            iVar4 = iVar4 + 1;
            iVar7 = (iStack_58 - iStack_44) - iStack_6c;
            iStack_50 = iStack_50 + 1;
LAB_0084be86:
            iVar4 = iVar4 + iVar7;
            iStack_50 = iStack_50 + iVar7;
          }
          iVar6 = param_1[0xee];
          if ((iVar6 <= iStack_54) && (iVar7 = param_1[0xed], iVar7 <= iStack_50)) {
            if (iVar8 < iVar6) {
              iStack_74 = iStack_74 + (iVar6 - iVar8);
              iVar8 = iVar6;
            }
            if (iVar4 < iVar7) {
              iStack_80 = iStack_80 + (iVar7 - iVar4);
              iVar4 = iVar7;
            }
            iVar4 = iVar4 + iStack_6c + -iVar7;
            iVar8 = iVar8 + iStack_68 + -iVar6;
            iStack_94 = iStack_50 + -iVar7 + iStack_6c;
            iStack_90 = iStack_54 + -iVar6 + iStack_68;
            iStack_9c = iVar4;
            iStack_98 = iVar8;
            iStack_54 = iStack_90;
            iStack_50 = iStack_94;
            cVar2 = func_0x005cfa60(&iStack_9c);
            if (cVar2 != '\0') {
              iVar6 = iStack_54;
              if (iStack_7c < iStack_54) {
                iStack_40 = iStack_40 + (iStack_7c - iStack_54);
                iVar6 = iStack_7c;
              }
              iVar7 = iStack_50;
              if (iStack_58 < iStack_50) {
                iStack_48 = iStack_48 + (iStack_58 - iStack_50);
                iVar7 = iStack_58;
              }
              piVar9 = (int *)(param_1[0x10b] + iStack_5c);
              piVar9[2] = iVar7;
              *piVar9 = iVar4;
              piVar9[1] = iVar8;
              piVar9[3] = iVar6;
              piVar9 = (int *)(param_1[0x10e] + iStack_5c);
              *piVar9 = iStack_80;
              piVar9[1] = iStack_74;
              piVar9[2] = iStack_48;
              piVar9[3] = iStack_40;
            }
          }
        }
        iStack_5c = iStack_5c + 0x10;
        iStack_38 = iStack_38 + 1;
      } while (iStack_38 < iStack_70);
    }
    if (((*(byte *)(param_1 + 0x3e) & 1) != 0) || (((uint)param_1[0x3e] >> 1 & 1) != 0)) {
      func_0x0086c7c0(param_1 + 0x10b);
    }
    if (cStack_31 != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x74);
      _guard_check_icall(param_1 + 0xed,param_1 + 0xef,param_1 + 0xf1);
      (*pcVar1)();
    }
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(apppiStack_30,apppiStack_30[0],uStack_1c);
  }
  iStack_20 = 0;
  uStack_1c = 0xf;
  apppiStack_30[0] = (int ***)((uint)apppiStack_30[0] & 0xffffff00);
LAB_0084c005:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084c130(int param_1,int ***param_2)

{
  int ***pppiVar1;
  int iVar2;
  int ***pppiVar3;
  int *unaff_FS_OFFSET;
  int ***in_stack_00000014;
  uint in_stack_00000018;
  int *piStack_9c;
  undefined4 uStack_98;
  int **ppiStack_94;
  undefined *puStack_90;
  int **ppiStack_8c;
  int *piStack_88;
  int **ppiStack_84;
  undefined *puStack_80;
  int **ppiStack_7c;
  int **ppiStack_78;
  uint uStack_74;
  uint uStack_70;
  uint auStack_64 [6];
  int **ppiStack_4c;
  int **ppiStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  char cStack_2d;
  int **ppiStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f3613d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_70 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uStack_70;
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
      -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404)) {
    uStack_74 = 0;
    ppiStack_78 = (int **)0x84c17a;
    FUN_0084c830();
  }
  if (-1 < *(int *)(param_1 + 0x3b0)) {
    if (*(char *)(param_1 + 0x3da) == '\0') {
      uStack_74 = 1;
      uStack_38 = 0;
      ppiStack_78 = (int **)&DAT_0113c2f0;
      uStack_34 = 0;
      ppiStack_48 = (int **)0x0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      ppiStack_7c = (int **)0x84c1b8;
      func_0x0046bc40();
      iStack_8._0_1_ = 1;
      ppiStack_7c = (int **)0x1;
      puStack_80 = &DAT_0113d23c;
      auStack_64[4] = 0;
      auStack_64[0] = 0;
      auStack_64[1] = 0;
      auStack_64[2] = 0;
      auStack_64[3] = 0;
      auStack_64[5] = 0;
      ppiStack_84 = (int **)0x84c1e0;
      func_0x0046bc40();
      iStack_8._0_1_ = 2;
      ppiStack_84 = (int **)&ppiStack_48;
      piStack_88 = (int *)0x84c1f3;
      func_0x0083cf70();
      iStack_8._0_1_ = 1;
      if (0xf < auStack_64[5]) {
        uStack_74 = auStack_64[5];
        ppiStack_78 = (int **)auStack_64[0];
        ppiStack_7c = (int **)auStack_64;
        puStack_80 = (undefined *)0x84c20f;
        func_0x0046b1f0();
      }
      auStack_64[4] = 0;
      auStack_64[5] = 0xf;
      auStack_64[0] = auStack_64[0] & 0xffffff00;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_34) {
        uStack_74 = uStack_34;
        ppiStack_78 = ppiStack_48;
        ppiStack_7c = (int **)&ppiStack_48;
        puStack_80 = (undefined *)0x84c23d;
        func_0x0046b1f0();
      }
      uStack_38 = 0;
      uStack_34 = 0xf;
      ppiStack_48 = (int **)((uint)ppiStack_48 & 0xffffff00);
    }
    uStack_74 = 0;
    auStack_64[4] = 0;
    ppiStack_78 = (int **)&DAT_0112e1b4;
    auStack_64[5] = 0;
    auStack_64[0] = 0;
    auStack_64[1] = 0;
    auStack_64[2] = 0;
    auStack_64[3] = 0;
    ppiStack_7c = (int **)0x84c276;
    func_0x0046bc40();
    iStack_8._0_1_ = 3;
    ppiStack_7c = (int **)0x1;
    puStack_80 = &DAT_011a0d74;
    uStack_38 = 0;
    ppiStack_48 = (int **)0x0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    ppiStack_84 = (int **)0x84c29e;
    func_0x0046bc40();
    iStack_8._0_1_ = 4;
    ppiStack_84 = (int **)auStack_64;
    piStack_88 = (int *)0x84c2b1;
    func_0x0083cf70();
    iStack_8._0_1_ = 3;
    if (0xf < uStack_34) {
      ppiStack_84 = (int **)uStack_34;
      piStack_88 = (int *)ppiStack_48;
      ppiStack_8c = (int **)&ppiStack_48;
      puStack_90 = (undefined *)0x84c2cd;
      func_0x0046b1f0();
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    ppiStack_48 = (int **)((uint)ppiStack_48 & 0xffffff00);
    iStack_8._0_1_ = 0;
    if (0xf < auStack_64[5]) {
      ppiStack_84 = (int **)auStack_64[5];
      piStack_88 = (int *)auStack_64[0];
      ppiStack_8c = (int **)auStack_64;
      puStack_90 = (undefined *)0x84c2fb;
      func_0x0046b1f0();
    }
    ppiStack_84 = (int **)0x2;
    auStack_64[4] = 0;
    piStack_88 = (int *)&DAT_0119c998;
    auStack_64[5] = 0xf;
    auStack_64[0] = auStack_64[0] & 0xffffff00;
    ppiStack_2c = (int **)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    ppiStack_8c = (int **)0x84c334;
    func_0x0046bc40();
    iStack_8._0_1_ = 5;
    ppiStack_8c = (int **)0x1;
    puStack_90 = &DAT_0113d240;
    uStack_38 = 0;
    ppiStack_48 = (int **)0x0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    ppiStack_94 = (int **)0x84c35c;
    func_0x0046bc40();
    iStack_8._0_1_ = 6;
    ppiStack_94 = (int **)&ppiStack_2c;
    uStack_98 = 0x84c36f;
    func_0x0083cf70();
    iStack_8._0_1_ = 5;
    if (0xf < uStack_34) {
      uStack_74 = uStack_34;
      ppiStack_78 = ppiStack_48;
      ppiStack_7c = (int **)&ppiStack_48;
      puStack_80 = (undefined *)0x84c38b;
      func_0x0046b1f0();
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    ppiStack_48 = (int **)((uint)ppiStack_48 & 0xffffff00);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_18) {
      uStack_74 = uStack_18;
      ppiStack_78 = ppiStack_2c;
      ppiStack_7c = (int **)&ppiStack_2c;
      puStack_80 = (undefined *)0x84c3b9;
      func_0x0046b1f0();
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    ppiStack_2c = (int **)((uint)ppiStack_2c & 0xffffff00);
    if ((in_stack_00000014 != (int ***)0x0) &&
       ((*(undefined1 **)(param_1 + 0x3f8) == (undefined1 *)0x0 ||
        ((undefined1 *)(*(int *)(param_1 + 0x308) + (int)in_stack_00000014) <=
         *(undefined1 **)(param_1 + 0x3f8))))) {
      if ((*(int *)(param_1 + 0x3f0) != 0) &&
         (pppiVar3 = (int ***)0x0, in_stack_00000014 != (int ***)0x0)) {
        do {
          ppiStack_4c = (int **)(param_1 + 0x3e0);
          pppiVar1 = (int ***)&param_2;
          if (0xf < in_stack_00000018) {
            pppiVar1 = param_2;
          }
          cStack_2d = *(char *)((int)pppiVar1 + (int)pppiVar3);
          if (0xf < *(uint *)(param_1 + 0x3f4)) {
            ppiStack_4c = (int **)*ppiStack_4c;
          }
          if (*(uint *)(param_1 + 0x3f0) == 0) goto LAB_0084c4f4;
          ppiStack_78 = (int **)(int)cStack_2d;
          puStack_80 = (undefined *)0x84c448;
          ppiStack_7c = ppiStack_4c;
          uStack_74 = *(uint *)(param_1 + 0x3f0);
          iVar2 = func_0x00e87d3a();
          if ((iVar2 == 0) || (iVar2 - (int)ppiStack_4c == -1)) goto LAB_0084c4f4;
          pppiVar3 = (int ***)((int)pppiVar3 + 1);
        } while (pppiVar3 < in_stack_00000014);
      }
      uStack_74 = param_1 + 0x2f8;
      ppiStack_78 = (int **)0x84c47a;
      func_0x00469da0();
      iStack_8._0_1_ = 7;
      ppiStack_78 = (int **)in_stack_00000014;
      ppiStack_7c = (int **)&param_2;
      if (0xf < in_stack_00000018) {
        ppiStack_7c = (int **)param_2;
      }
      puStack_80 = *(undefined **)(param_1 + 0x3b0);
      ppiStack_84 = (int **)0x84c49b;
      func_0x005df0b0();
      *(int *)(param_1 + 0x3b0) = (int)(*(int *)(param_1 + 0x3b0) + (int)in_stack_00000014);
      ppiStack_84 = (int **)0x0;
      ppiStack_4c = &piStack_9c;
      func_0x00469da0(&ppiStack_2c);
      iStack_8._0_1_ = 7;
      puStack_90 = (undefined *)0x84c4c6;
      FUN_0086b520();
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_18) {
        uStack_74 = uStack_18;
        ppiStack_78 = ppiStack_2c;
        ppiStack_7c = (int **)&ppiStack_2c;
        puStack_80 = (undefined *)0x84c4df;
        func_0x0046b1f0();
      }
      uStack_1c = 0;
      uStack_18 = 0xf;
      ppiStack_2c = (int **)((uint)ppiStack_2c & 0xffffff00);
    }
  }
LAB_0084c4f4:
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    uStack_74 = in_stack_00000018;
    ppiStack_78 = (int **)param_2;
    ppiStack_7c = (int **)&param_2;
    puStack_80 = (undefined *)0x84c510;
    func_0x0046b1f0();
  }
  in_stack_00000014 = (int ***)0x0;
  in_stack_00000018 = 0xf;
  param_2 = (int ***)((uint)param_2 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084c6f0(int param_1,char param_2)

{
  uint uVar1;
  undefined4 ***pppuVar2;
  int *unaff_FS_OFFSET;
  undefined4 auStack_58 [3];
  undefined4 uStack_4c;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_44;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 *puStack_30;
  undefined4 **appuStack_2c [4];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f361d5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_3c = param_1 + 0x2f8;
  uStack_40 = 0x84c72a;
  uStack_14 = uStack_38;
  func_0x00469da0();
  uStack_8 = 0;
  uVar1 = *(uint *)(param_1 + 0x3b0);
  if (((int)uVar1 < 0) || (uStack_1c == 0)) goto LAB_0084c7a4;
  if (uVar1 < uStack_1c) {
    if (param_2 != '\0') {
      pppuVar2 = appuStack_2c;
      if (0xf < uStack_18) {
        pppuVar2 = (undefined4 ***)appuStack_2c[0];
      }
      uStack_40 = (int)pppuVar2 + uVar1;
      goto LAB_0084c775;
    }
    if (0 < (int)uVar1) goto LAB_0084c75f;
  }
  else {
LAB_0084c75f:
    *(uint *)(param_1 + 0x3b0) = uVar1 - 1;
    pppuVar2 = appuStack_2c;
    if (0xf < uStack_18) {
      pppuVar2 = (undefined4 ***)appuStack_2c[0];
    }
    uStack_40 = (uVar1 - 1) + (int)pppuVar2;
LAB_0084c775:
    ppuStack_44 = &puStack_30;
    ppuStack_48 = (undefined4 ***)0x84c782;
    func_0x0084efa0();
  }
  uStack_40 = 0;
  puStack_30 = auStack_58;
  func_0x00469da0(appuStack_2c);
  uStack_8 = uStack_8 & 0xffffff00;
  FUN_0086b520();
LAB_0084c7a4:
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    uStack_40 = uStack_18;
    ppuStack_44 = appuStack_2c[0];
    ppuStack_48 = appuStack_2c;
    uStack_4c = 0x84c7c0;
    func_0x0046b1f0();
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  uStack_38 = 0x84c7eb;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0084c800(int param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)DAT_0145db28;
  uStack_8 = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
  *(undefined4 *)(param_1 + 0x3d0) = uStack_c;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_8;
  return;
}



void __fastcall FUN_0084c830(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eee475;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x408) == *(int *)(param_1 + 0x404) ||
      *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404) < 0) {
    FUN_0084c6f0();
  }
  else {
    func_0x00469da0();
    uStack_8 = 0;
    func_0x005a8790();
    uVar2 = *(uint *)(param_1 + 0x404);
    if ((int)uVar2 < 0) {
      uVar2 = *(uint *)(param_1 + 0x308);
    }
    if (uVar2 != *(uint *)(param_1 + 0x3b0)) {
      if (*(uint *)(param_1 + 0x308) <= uVar2) {
        uVar2 = *(uint *)(param_1 + 0x308);
      }
      *(uint *)(param_1 + 0x3b0) = uVar2;
      func_0x0084b7d0();
    }
    if ((*(int *)(param_1 + 0x404) != 0) || (*(int *)(param_1 + 0x408) != 0)) {
      *(undefined1 *)(param_1 + 0x46c) = 1;
      iVar3 = 0;
      if (*(int *)(param_1 + 0x308) < 0) {
        iVar3 = *(int *)(param_1 + 0x308);
      }
      iVar1 = 0;
      if (0 < iVar3) {
        iVar1 = iVar3;
      }
      *(int *)(param_1 + 0x404) = iVar1;
      *(int *)(param_1 + 0x408) = iVar1;
    }
    func_0x00469da0(auStack_2c);
    uStack_8 = uStack_8 & 0xffffff00;
    FUN_0086b520();
    uStack_8 = 0xffffffff;
    if (0xf < uStack_18) {
      func_0x0046b1f0();
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084c990(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede2ad;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
      -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404)) {
    FUN_0084c830();
  }
  func_0x00469da0(param_2);
  uStack_8 = 0xffffffff;
  FUN_0084c130(param_2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * __thiscall FUN_0084ca10(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f36226;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  uStack_8 = 0;
  uStack_14 = 1;
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
      -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404)) {
    piVar6 = (int *)FUN_0084d2d0(auStack_2c);
    uStack_8 = 1;
    if (param_2 != piVar6) {
      uVar1 = param_2[5];
      if (0xf < uVar1) {
        iVar2 = *param_2;
        uVar8 = uVar1 + 1;
        iVar7 = iVar2;
        if (0xfff < uVar8) {
          iVar7 = *(int *)(iVar2 + -4);
          uVar8 = uVar1 + 0x24;
          if (0x1f < (iVar2 - iVar7) - 4U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(iVar7,uVar8,uVar5);
      }
      param_2[4] = 0;
      param_2[5] = 0xf;
      *(undefined1 *)param_2 = 0;
      iVar2 = piVar6[1];
      iVar7 = piVar6[2];
      iVar4 = piVar6[3];
      *param_2 = *piVar6;
      param_2[1] = iVar2;
      param_2[2] = iVar7;
      param_2[3] = iVar4;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(piVar6 + 4);
      piVar6[4] = 0;
      piVar6[5] = 0xf;
      *(undefined1 *)piVar6 = 0;
    }
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < uStack_18) {
      func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    pcVar3 = *(code **)(DAT_0145ea60 + 0x50);
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
    _guard_check_icall(param_2);
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 FUN_0084cb70(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac47e;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  FUN_0084ca10(param_1);
  uStack_8 = 0;
  FUN_0084c830(0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0084cbe0(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 *puStack_34;
  uint uStack_30;
  undefined8 uStack_20;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36265;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_18 = 0;
  uStack_20 = 0;
  uStack_38 = 0x84cc2a;
  puStack_34 = (undefined8 *)(param_1 + 0x340);
  uStack_14 = uStack_30;
  func_0x0061ba80();
  uStack_8 = 0;
  puVar4 = &uStack_20;
  uStack_38 = 0;
  puVar2 = &uStack_50;
  iVar1 = ((((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x32c)) - *(int *)(param_1 + 0x200)) -
           *(int *)(param_1 + 0x1f8)) - *(int *)(param_1 + 0x40)) + 1;
  iVar3 = param_1 + 0x2f8;
  func_0x00618000(&uStack_50,iVar3,iVar1,puVar4);
  uStack_8 = uStack_8 & 0xffffff00;
  FUN_0086b520(puVar2,iVar3,iVar1,puVar4);
  if ((undefined8 *)(param_1 + 0x340) != &uStack_20) {
    iStack_48 = (uStack_20._4_4_ - (int)uStack_20 >> 2) * -0x33333333;
    iStack_4c = (int)uStack_20;
    uStack_50 = 0x84cc9c;
    func_0x0084f020();
  }
  uStack_8 = 0xffffffff;
  if ((int)uStack_20 != 0) {
    iStack_48 = (iStack_18 - (int)uStack_20 >> 2) * -0x33333333;
    iStack_4c = (int)uStack_20;
    uStack_50 = 0x84ccbf;
    func_0x0046ab40();
    uStack_20 = 0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  uStack_3c = 0x84cceb;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084ccf0(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == '\0') {
    iVar2 = *(int *)(param_1 + 0x3b0) + -1;
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x308);
    }
    *(int *)(param_1 + 0x3b0) = iVar2;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x3b0) + 1;
    uVar3 = 0;
    if (uVar1 <= *(uint *)(param_1 + 0x308)) {
      uVar3 = uVar1;
    }
    *(uint *)(param_1 + 0x3b0) = uVar3;
  }
  uStack_c = (undefined4)DAT_0145db28;
  uStack_8 = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
  *(undefined4 *)(param_1 + 0x3d4) = uStack_8;
  *(undefined4 *)(param_1 + 0x3d0) = uStack_c;
  func_0x0084b7d0(1);
  return;
}



void __thiscall FUN_0084cd60(int param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_c;
  
  iVar7 = 0;
  uStack_c = *(int *)(param_1 + 0x3b0) - 1;
  if (param_2 == '\0') {
    if (-1 < (int)uStack_c) {
      do {
        puVar4 = (undefined4 *)(param_1 + 0x2f8);
        if (0xf < *(uint *)(param_1 + 0x30c)) {
          puVar4 = *(undefined4 **)(param_1 + 0x2f8);
        }
        if (*(char *)((int)puVar4 + uStack_c) == '\n') break;
        iVar7 = iVar7 + 1;
        uStack_c = uStack_c - 1;
      } while (-1 < (int)uStack_c);
    }
    uVar1 = *(uint *)(param_1 + 0x308);
    bVar2 = false;
    uVar3 = *(uint *)(param_1 + 0x3b0);
    uStack_c = uVar1;
    uVar6 = uVar1;
    if ((int)uVar3 < (int)uVar1) {
      uVar8 = uVar3;
      do {
        uVar8 = uVar8 + 1;
        iVar5 = param_1 + 0x2f8;
        if (0xf < *(uint *)(param_1 + 0x30c)) {
          iVar5 = *(int *)(param_1 + 0x2f8);
        }
        if (*(char *)(iVar5 + uVar3) == '\n') {
          uVar6 = uVar3;
          if (bVar2) break;
          bVar2 = true;
          uStack_c = uVar8;
        }
        uVar3 = uVar3 + 1;
        uVar6 = uVar1;
      } while ((int)uVar3 < (int)uVar1);
    }
    uStack_c = uStack_c + iVar7;
  }
  else {
    uVar6 = 0;
    bVar2 = false;
    if ((int)uStack_c < 1) {
LAB_0084cdc7:
      uStack_c = uStack_c + iVar7;
    }
    else {
      do {
        iVar5 = param_1 + 0x2f8;
        if (0xf < *(uint *)(param_1 + 0x30c)) {
          iVar5 = *(int *)(param_1 + 0x2f8);
        }
        if (*(char *)(iVar5 + uStack_c) == '\n') {
          if (bVar2) {
            uStack_c = uStack_c + 1;
            goto LAB_0084cdc7;
          }
          bVar2 = true;
          uVar6 = uStack_c;
        }
        else if (!bVar2) {
          iVar7 = iVar7 + 1;
        }
        uStack_c = uStack_c - 1;
      } while (0 < (int)uStack_c);
      uStack_c = uStack_c + iVar7;
    }
  }
  if (uStack_c < uVar6) {
    uVar6 = uStack_c;
  }
  *(uint *)(param_1 + 0x3b0) = uVar6;
  uStack_18 = (undefined4)DAT_0145db28;
  uStack_14 = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
  *(undefined4 *)(param_1 + 0x3d4) = uStack_14;
  *(undefined4 *)(param_1 + 0x3d0) = uStack_18;
  func_0x0084b7d0(1);
  return;
}



int __thiscall FUN_0084cea0(int param_1,int param_2,int param_3)
