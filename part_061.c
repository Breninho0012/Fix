    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void Catch_All_00de3f35(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de3fa0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  char *pcVar6;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c425;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de40c2;
  piVar1 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar1);
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00de40e0:
    piVar3[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = piVar3[0x55];
  if (iVar4 == 0x7fffffff) goto LAB_00de40e0;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (param_4 == (int *)0x0)) {
    pcVar6 = "NULL pointer";
    uVar5 = 0xa003;
LAB_00de4087:
    func_0x00dbfd90(piStack_18,uVar5,pcVar6);
  }
  else if (param_1 == 0x1004) {
    *param_2 = piVar3[0x6a];
    *param_3 = piVar3[0x6b];
    *param_4 = piVar3[0x6c];
  }
  else {
    if (param_1 != 0x1006) {
      pcVar6 = "Invalid listener 3-float property";
      uVar5 = 0xa002;
      goto LAB_00de4087;
    }
    *param_2 = piVar3[0x6d];
    *param_3 = piVar3[0x6e];
    *param_4 = piVar3[0x6f];
  }
  func_0x00e730b2(piVar1);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de40c2:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de40d4(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de40f0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  char *pcVar6;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c465;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de421e;
  piVar1 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar1);
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00de423c:
    piVar3[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = piVar3[0x55];
  if (iVar4 == 0x7fffffff) goto LAB_00de423c;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (param_4 == (int *)0x0)) {
    pcVar6 = "NULL pointer";
    uVar5 = 0xa003;
LAB_00de41e3:
    func_0x00dbfd90(piStack_18,uVar5,pcVar6);
  }
  else if (param_1 == 0x1004) {
    *param_2 = (int)(float)piVar3[0x6a];
    *param_3 = (int)(float)piVar3[0x6b];
    *param_4 = (int)(float)piVar3[0x6c];
  }
  else {
    if (param_1 != 0x1006) {
      pcVar6 = "Invalid listener 3-integer property";
      uVar5 = 0xa002;
      goto LAB_00de41e3;
    }
    *param_2 = (int)(float)piVar3[0x6d];
    *param_3 = (int)(float)piVar3[0x6e];
    *param_4 = (int)(float)piVar3[0x6f];
  }
  func_0x00e730b2(piVar1);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de421e:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de4230(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de4250(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c4a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de434f;
  piVar1 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar1);
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00de436d:
    piVar3[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = piVar3[0x55];
  if (iVar4 == 0x7fffffff) goto LAB_00de436d;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (param_2 == (int *)0x0) {
    func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
  }
  else {
    if (param_1 == 0x100a) {
      iVar4 = piVar3[0x76];
    }
    else {
      if (param_1 != 0x20004) {
        func_0x00dbfd90(piStack_18,0xa002,"Invalid listener float property");
        goto LAB_00de431f;
      }
      iVar4 = piVar3[0x77];
    }
    *param_2 = iVar4;
  }
LAB_00de431f:
  func_0x00e730b2(piVar1);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de434f:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de4361(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de4380(int *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = param_1;
  puStack_c = &DAT_00f6c4e5;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((int)param_1 < 0x100b) {
    if (param_1 == (int *)0x100a) {
LAB_00de44ff:
      FUN_00de4250(param_1,param_2);
      goto LAB_00de450b;
    }
    if ((param_1 == (int *)0x1004) || (param_1 == (int *)0x1006)) {
      FUN_00de3fa0(param_1,param_2,param_2 + 1,param_2 + 2);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else if (param_1 == (int *)0x20004) goto LAB_00de44ff;
  func_0x00dc77d0(&param_1);
  piVar4 = param_1;
  uStack_8._0_1_ = 1;
  if (param_1 != (int *)0x0) {
    piVar1 = param_1 + 0x4a;
    iVar5 = func_0x00e7307f(piVar1);
    if (iVar5 == 0) {
      iVar5 = piVar4[0x55];
      if (iVar5 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        if (param_2 == (int *)0x0) {
          func_0x00dbfd90(param_1,0xa003,"NULL pointer");
        }
        else if (piVar3 == (int *)0x100f) {
          *param_2 = piVar4[0x70];
          param_2[1] = piVar4[0x71];
          param_2[2] = piVar4[0x72];
          param_2[3] = piVar4[0x73];
          param_2[4] = piVar4[0x74];
          param_2[5] = piVar4[0x75];
        }
        else {
          func_0x00dbfd90(param_1,0xa002,"Invalid listener float-vector property");
        }
        func_0x00e730b2(piVar1);
        piVar3 = param_1;
        if (param_1 != (int *)0x0) {
          LOCK();
          iVar5 = *param_1;
          *param_1 = *param_1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (param_1 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piVar3);
            *unaff_FS_OFFSET = iStack_10;
            return;
          }
        }
        goto LAB_00de450b;
      }
    }
    else {
      iVar5 = func_0x00e7304a(5);
    }
    piVar4[0x55] = iVar5 + -1;
    func_0x00e7304a(6);
    func_0x008aaff0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_00de450b:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de452f(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de4540(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  char *pcVar6;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c525;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de4604:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar4 = piStack_18 + 0x4a;
  iVar3 = func_0x00e7307f(piVar4);
  if (iVar3 == 0) {
    iVar3 = piVar2[0x55];
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      if (param_2 == 0) {
        pcVar6 = "NULL pointer";
        uVar5 = 0xa003;
      }
      else {
        pcVar6 = "Invalid listener integer property";
        uVar5 = 0xa002;
      }
      func_0x00dbfd90(piStack_18,uVar5,pcVar6);
      func_0x00e730b2(piVar4);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar3 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de4604;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  piVar2[0x55] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00de4616(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de4630(int *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = param_1;
  puStack_c = &DAT_00f6c565;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((param_1 == (int *)0x1004) || (param_1 == (int *)0x1006)) {
    FUN_00de40f0(param_1,param_2,param_2 + 1,param_2 + 2);
  }
  else {
    func_0x00dc77d0(&param_1);
    piVar4 = param_1;
    uStack_8._0_1_ = 1;
    if (param_1 != (int *)0x0) {
      piVar1 = param_1 + 0x4a;
      iVar5 = func_0x00e7307f(piVar1);
      if (iVar5 == 0) {
        iVar5 = piVar4[0x55];
        if (iVar5 != 0x7fffffff) {
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          if (param_2 == (int *)0x0) {
            func_0x00dbfd90(param_1,0xa003,"NULL pointer");
          }
          else if (piVar3 == (int *)0x100f) {
            *param_2 = (int)(float)piVar4[0x70];
            param_2[1] = (int)(float)piVar4[0x71];
            param_2[2] = (int)(float)piVar4[0x72];
            param_2[3] = (int)(float)piVar4[0x73];
            param_2[4] = (int)(float)piVar4[0x74];
            param_2[5] = (int)(float)piVar4[0x75];
          }
          else {
            func_0x00dbfd90(param_1,0xa002,"Invalid listener integer-vector property");
          }
          func_0x00e730b2(piVar1);
          piVar3 = param_1;
          if (param_1 != (int *)0x0) {
            LOCK();
            iVar5 = *param_1;
            *param_1 = *param_1 + -1;
            UNLOCK();
            if ((iVar5 == 1) && (param_1 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piVar3);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00de4797;
        }
      }
      else {
        iVar5 = func_0x00e7304a(5);
      }
      piVar4[0x55] = iVar5 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_00de4797:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de47bb(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de47d0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c5a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de499a;
  piVar1 = piStack_18 + 0x4a;
  iVar5 = func_0x00e7307f(piVar1);
  if (iVar5 != 0) {
    iVar5 = func_0x00e7304a(5);
LAB_00de49b8:
    piVar3[0x55] = iVar5 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = piVar3[0x55];
  if (iVar5 == 0x7fffffff) goto LAB_00de49b8;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (param_1 == 0x1004) {
    sVar4 = func_0x00e87c3c(param_2);
    if (0 < sVar4) {
LAB_00de4955:
      pcVar7 = "Listener position out of range";
      goto LAB_00de495a;
    }
    sVar4 = func_0x00e87c3c(param_3);
    if (0 < sVar4) goto LAB_00de4955;
    sVar4 = func_0x00e87c3c(param_4);
    if (0 < sVar4) goto LAB_00de4955;
    piVar3[0x6a] = param_2;
    piVar3[0x6b] = param_3;
    piVar3[0x6c] = param_4;
    func_0x00de3f40(piStack_18);
  }
  else {
    if (param_1 == 0x1006) {
      sVar4 = func_0x00e87c3c(param_2);
      if (sVar4 < 1) {
        sVar4 = func_0x00e87c3c(param_3);
        if (sVar4 < 1) {
          sVar4 = func_0x00e87c3c(param_4);
          if (sVar4 < 1) {
            piVar3[0x6d] = param_2;
            piVar3[0x6e] = param_3;
            piVar3[0x6f] = param_4;
            func_0x00de3f40(piStack_18);
            goto LAB_00de496a;
          }
        }
      }
      pcVar7 = "Listener velocity out of range";
LAB_00de495a:
      uVar6 = 0xa003;
    }
    else {
      pcVar7 = "Invalid listener 3-float property";
      uVar6 = 0xa002;
    }
    func_0x00dbfd90(piStack_18,uVar6,pcVar7);
  }
LAB_00de496a:
  func_0x00e730b2(piVar1);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar5 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de499a:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de49ac(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de49d0(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c5e5;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((param_1 == (int *)0x1004) || (param_1 == (int *)0x1006)) {
    FUN_00de47d0(param_1,(float)param_2,(float)param_3,(float)param_4);
  }
  else {
    func_0x00dc77d0(&param_1);
    piVar2 = param_1;
    uStack_8._0_1_ = 1;
    if (param_1 != (int *)0x0) {
      piVar4 = param_1 + 0x4a;
      iVar3 = func_0x00e7307f(piVar4);
      if (iVar3 == 0) {
        iVar3 = piVar2[0x55];
        if (iVar3 != 0x7fffffff) {
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          func_0x00dbfd90(param_1,0xa002,"Invalid listener 3-integer property");
          func_0x00e730b2(piVar4);
          piVar2 = param_1;
          if (param_1 != (int *)0x0) {
            LOCK();
            iVar3 = *param_1;
            *param_1 = *param_1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (param_1 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piVar2);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00de4aee;
        }
      }
      else {
        iVar3 = func_0x00e7304a(5);
      }
      piVar2[0x55] = iVar3 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_00de4aee:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de4b12(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de4b20(int param_1,float param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c625;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de4c6e;
  piVar1 = piStack_18 + 0x4a;
  iVar5 = func_0x00e7307f(piVar1);
  if (iVar5 != 0) {
    iVar5 = func_0x00e7304a(5);
LAB_00de4c8c:
    piVar3[0x55] = iVar5 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = piVar3[0x55];
  if (iVar5 == 0x7fffffff) goto LAB_00de4c8c;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (param_1 == 0x100a) {
    if (0.0 <= param_2) {
      sVar4 = func_0x00e87c3c(param_2);
      if (sVar4 < 1) {
        piVar3[0x76] = (int)param_2;
        func_0x00de3f80(piStack_18);
        goto LAB_00de4c3e;
      }
    }
    pcVar7 = "Listener gain out of range";
LAB_00de4c2e:
    uVar6 = 0xa003;
LAB_00de4c33:
    func_0x00dbfd90(piStack_18,uVar6,pcVar7);
  }
  else {
    if (param_1 != 0x20004) {
      pcVar7 = "Invalid listener float property";
      uVar6 = 0xa002;
      goto LAB_00de4c33;
    }
    if ((param_2 < 1.1754944e-38) || (3.4028235e+38 < param_2)) {
      pcVar7 = "Listener meters per unit out of range";
      goto LAB_00de4c2e;
    }
    piVar3[0x77] = (int)param_2;
    func_0x00de3f80(piStack_18);
  }
LAB_00de4c3e:
  func_0x00e730b2(piVar1);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar5 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de4c6e:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de4c80(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de4ca0(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = param_2;
  puStack_c = &DAT_00f6c665;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 != (int *)0x0) {
    if (param_1 < 0x100b) {
      if (param_1 == 0x100a) {
LAB_00de4d3c:
        FUN_00de4b20(param_1,*param_2);
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      if ((param_1 == 0x1004) || (param_1 == 0x1006)) {
        FUN_00de47d0(param_1,*param_2,param_2[1],param_2[2]);
        goto LAB_00de4d23;
      }
    }
    else if (param_1 == 0x20004) goto LAB_00de4d3c;
  }
  func_0x00dc77d0(&param_2);
  piVar4 = param_2;
  uStack_8._0_1_ = 1;
  if (param_2 == (int *)0x0) goto LAB_00de4d23;
  if (piVar3 == (int *)0x0) {
    func_0x00dbfd90(param_2,0xa003,"NULL pointer");
  }
  else {
    piVar1 = param_2 + 0x4a;
    iVar6 = func_0x00e7307f(piVar1);
    if (iVar6 != 0) {
      iVar6 = func_0x00e7304a(5);
LAB_00de4f6e:
      piVar4[0x55] = iVar6 + -1;
      func_0x00e7304a(6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = piVar4[0x55];
    if (iVar6 == 0x7fffffff) goto LAB_00de4f6e;
    uStack_8._0_1_ = 2;
    if (param_1 == 0x100f) {
      iVar6 = *piVar3;
      sVar5 = func_0x00e87c3c(iVar6);
      if (sVar5 < 1) {
        sVar5 = func_0x00e87c3c(piVar3[1]);
        if (sVar5 < 1) {
          sVar5 = func_0x00e87c3c(piVar3[2]);
          if (sVar5 < 1) {
            sVar5 = func_0x00e87c3c(piVar3[3]);
            if (sVar5 < 1) {
              sVar5 = func_0x00e87c3c(piVar3[4]);
              if (sVar5 < 1) {
                sVar5 = func_0x00e87c3c(piVar3[5]);
                if (sVar5 < 1) {
                  piVar4[0x70] = iVar6;
                  piVar4[0x71] = piVar3[1];
                  piVar4[0x72] = piVar3[2];
                  piVar4[0x73] = piVar3[3];
                  piVar4[0x74] = piVar3[4];
                  piVar4[0x75] = piVar3[5];
                  func_0x00de3f40(param_2);
                  func_0x00e730b2(piVar1);
                  goto LAB_00de4d8f;
                }
              }
            }
          }
        }
      }
      func_0x00dbfd90(param_2,0xa003,"Listener orientation out of range");
      func_0x00e730b2(piVar1);
    }
    else {
      func_0x00dbfd90(param_2,0xa002,"Invalid listener float-vector property");
      func_0x00e730b2(piVar1);
    }
  }
LAB_00de4d8f:
  piVar3 = param_2;
  if (param_2 != (int *)0x0) {
    LOCK();
    iVar6 = *param_2;
    *param_2 = *param_2 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (param_2 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar3);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00de4d23:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de4f62(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de4f80(void)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c6a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de5032:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar4 = piStack_18 + 0x4a;
  iVar3 = func_0x00e7307f(piVar4);
  if (iVar3 == 0) {
    iVar3 = piVar2[0x55];
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      func_0x00dbfd90(piStack_18,0xa002,"Invalid listener integer property");
      func_0x00e730b2(piVar4);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar3 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de5032;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  piVar2[0x55] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00de5044(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de5060(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = param_2;
  puStack_c = &DAT_00f6c6e5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_40;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 != (int *)0x0) {
    if ((param_1 == 0x1004) || (param_1 == 0x1006)) {
      FUN_00de47d0(param_1,(float)*param_2,(float)param_2[1],(float)param_2[2]);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    if (param_1 == 0x100f) {
      fStack_30 = (float)*param_2;
      fStack_2c = (float)param_2[1];
      fStack_28 = (float)param_2[2];
      fStack_24 = (float)param_2[3];
      fStack_20 = (float)param_2[4];
      fStack_1c = (float)param_2[5];
      puStack_14 = (undefined1 *)&uStack_40;
      FUN_00de4ca0(0x100f,&fStack_30);
      goto LAB_00de50ec;
    }
  }
  puStack_14 = (undefined1 *)&uStack_40;
  func_0x00dc77d0(&param_2);
  piVar3 = param_2;
  uStack_8._0_1_ = 1;
  if (param_2 != (int *)0x0) {
    piVar5 = param_2 + 0x4a;
    piStack_18 = piVar5;
    iVar4 = func_0x00e7307f(piVar5);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x55];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        if (piVar2 == (int *)0x0) {
          pcVar7 = "NULL pointer";
          uVar6 = 0xa003;
        }
        else {
          pcVar7 = "Invalid listener integer-vector property";
          uVar6 = 0xa002;
        }
        func_0x00dbfd90(param_2,uVar6,pcVar7);
        func_0x00e730b2(piVar5);
        piVar2 = param_2;
        if (param_2 != (int *)0x0) {
          LOCK();
          iVar4 = *param_2;
          *param_2 = *param_2 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (param_2 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piVar2);
            *unaff_FS_OFFSET = iStack_10;
            return;
          }
        }
        goto LAB_00de50ec;
      }
    }
    else {
      iVar4 = func_0x00e7304a(5);
    }
    piVar3[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_00de50ec:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de51fa(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00de55d0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = effect_exception::vftable;
  *param_1 = al::base_exception::vftable;
  uVar1 = param_1[8];
  if (0xf < uVar1) {
    iVar2 = param_1[3];
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
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  return;
}



undefined4 * __thiscall FUN_00de55e0(undefined4 *param_1,byte param_2)

{
  *param_1 = effect_exception::vftable;
  func_0x00e05e80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



void FUN_00de59b0(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c755;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if (param_1 < 0) {
      func_0x00dbfd90(piStack_18,0xa003,"Deleting %d effects",param_1);
      piVar7 = piStack_18;
    }
    else {
      piVar7 = piStack_18;
      if (0 < param_1) {
        iVar1 = piStack_18[0x48];
        iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
        if (iVar3 != 0) {
          iVar3 = func_0x00e7304a(5);
LAB_00de5b51:
          *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
          func_0x00e7304a(6);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar3 = *(int *)(iVar1 + 0x1a518);
        if (iVar3 == 0x7fffffff) goto LAB_00de5b51;
        uStack_8._0_1_ = 2;
        piVar7 = param_2 + param_1;
        piVar8 = param_2;
        if (param_2 != piVar7) {
          do {
            if ((*piVar8 != 0) && (iVar3 = func_0x00de5940(iVar1,*piVar8), iVar3 == 0)) break;
            piVar8 = piVar8 + 1;
          } while (piVar8 != piVar7);
        }
        if (piVar8 == piVar7) {
          if (param_2 != piVar7) {
            do {
              if ((*param_2 != 0) && (iVar3 = func_0x00de5940(iVar1,*param_2), iVar3 != 0)) {
                uVar9 = *(int *)(iVar3 + 0x74) - 1;
                puVar6 = (uint *)((uVar9 >> 6) * 0x10 + *(int *)(iVar1 + 0x1a51c));
                uVar4 = 1 << (uVar9 & 0x1f);
                uVar5 = 0;
                if (0x1f < (uVar9 & 0x3f)) {
                  uVar5 = uVar4;
                }
                uVar4 = uVar4 ^ uVar5;
                if (0x3f < (uVar9 & 0x3f)) {
                  uVar5 = uVar4;
                }
                *puVar6 = *puVar6 | uVar4;
                puVar6[1] = puVar6[1] | uVar5;
              }
              param_2 = param_2 + 1;
            } while (param_2 != piVar7);
          }
        }
        else {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",*piVar8);
        }
        func_0x00e730b2(iVar1 + 0x1a4ec);
        piVar7 = piStack_18;
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piVar7 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piVar7);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de5b45(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de5b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c795;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de5c87:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a518);
    if (iVar3 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar3 = func_0x00de5940(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
      }
      else {
        uStack_8._0_1_ = 3;
        (**(code **)(*(int *)(iVar3 + 0x70) + 8))(iVar3 + 4,param_2,param_3);
      }
      func_0x00e730b2(iVar1 + 0x1a4ec);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de5c87;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_00de5c2c(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de5c54;
}



void Catch_All_00de5c99(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de5cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c7d5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de5ddf:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a518);
    if (iVar3 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar3 = func_0x00de5940(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
      }
      else {
        uStack_8._0_1_ = 3;
        (**(code **)(*(int *)(iVar3 + 0x70) + 0xc))(iVar3 + 4,param_2,param_3);
      }
      func_0x00e730b2(iVar1 + 0x1a4ec);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de5ddf;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_00de5d84(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de5dac;
}



void Catch_All_00de5df1(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de5e10(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  bool bVar5;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c815;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de5f88:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a518);
    if (iVar3 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar3 = func_0x00de5940(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
      }
      else if (param_2 == 0x8001) {
        if (param_3 == 0) {
LAB_00de5f09:
          func_0x00de56e0(iVar3,param_3);
        }
        else {
          piVar4 = &DAT_010db8e0;
          do {
            if ((param_3 == piVar4[1]) && ((&DAT_013e0240)[*piVar4] == '\0')) goto LAB_00de5f09;
            bVar5 = piVar4 != (int *)&UNK_010dba48;
            piVar4 = piVar4 + 6;
          } while (bVar5);
          func_0x00dbfd90(piStack_18,0xa003,"Effect type 0x%04x not supported",param_3);
        }
      }
      else {
        uStack_8._0_1_ = 3;
        (*(code *)**(undefined4 **)(iVar3 + 0x70))(iVar3 + 4,param_2,param_3);
      }
      func_0x00e730b2(iVar1 + 0x1a4ec);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de5f88;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_00de5f2d(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de5f55;
}



void Catch_All_00de5f9a(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de5fc0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c855;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == 0x8001) {
    FUN_00de5e10(param_1,0x8001,*param_3);
  }
  else {
    puStack_14 = (undefined1 *)&uStack_34;
    func_0x00dc77d0(&piStack_18);
    uStack_8._0_1_ = 1;
    if (piStack_18 != (int *)0x0) {
      iVar1 = piStack_18[0x48];
      iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar1 + 0x1a518);
        if (iVar3 != 0x7fffffff) {
          uStack_8._0_1_ = 2;
          iVar3 = func_0x00de5940(iVar1,param_1);
          if (iVar3 == 0) {
            func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
          }
          else {
            uStack_8._0_1_ = 3;
            (**(code **)(*(int *)(iVar3 + 0x70) + 4))(iVar3 + 4,param_2,param_3);
          }
          func_0x00e730b2(iVar1 + 0x1a4ec);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00de6118;
        }
      }
      else {
        iVar3 = func_0x00e7304a(5);
      }
      *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_00de6118:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de6096(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de60be;
}



void Catch_All_00de613c(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6150(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint extraout_EDX;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint uStack_5c;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint *puStack_24;
  int iStack_20;
  uint *puStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c89d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_5c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_5c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de63c6;
  if ((int)param_1 < 0) {
    func_0x00dbfd90(piStack_18,0xa003,"Generating %d effects",param_1);
LAB_00de61bf:
    if (piStack_18 == (int *)0x0) goto LAB_00de63c6;
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00de63c6;
    func_0x00ddc830();
  }
  else {
    if ((int)param_1 < 1) goto LAB_00de61bf;
    iVar7 = piStack_18[0x48];
    iVar1 = iVar7 + 0x1a4ec;
    iStack_34 = iVar1;
    iStack_20 = iVar7;
    iVar3 = func_0x00e7307f(iVar1);
    if (iVar3 != 0) {
      iVar3 = func_0x00e7304a(5);
LAB_00de65a3:
      *(int *)(iVar7 + 0x1a518) = iVar3 + -1;
      func_0x00e7304a(6);
LAB_00de65ae:
      func_0x0046e700();
LAB_00de65b3:
      func_0x0046e700();
LAB_00de65b8:
      func_0x0062c530();
      func_0x00e87d2e(auStack_4c,&DAT_0125c4dc);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = *(int *)(iVar7 + 0x1a518);
    if (iVar3 == 0x7fffffff) goto LAB_00de65a3;
    puStack_30 = *(uint **)(iVar7 + 0x1a520);
    puStack_24 = *(uint **)(iVar7 + 0x1a51c);
    uStack_8._0_1_ = 2;
    puStack_1c = (uint *)0x0;
    if (puStack_24 != puStack_30) {
      do {
        uVar10 = *puStack_24;
        uVar4 = uVar10 >> 1 & 0x55555555;
        uStack_28 = uVar10 - uVar4;
        uStack_2c = (puStack_24[1] - (puStack_24[1] >> 1 & 0x55555555)) - (uint)(uVar10 < uVar4);
        uVar10 = uStack_28 >> 2 & 0x33333333;
        uVar4 = uVar10 + (uStack_28 & 0x33333333);
        uVar11 = (uStack_2c >> 2 & 0x33333333) + (uStack_2c & 0x33333333) +
                 (uint)CARRY4(uVar10,uStack_28 & 0x33333333);
        uVar10 = uVar4 >> 4 | uVar11 * 0x10000000;
        func_0x00e87d70(uVar10 + uVar4 & 0xf0f0f0f,
                        (uVar11 >> 4) + uVar11 + (uint)CARRY4(uVar10,uVar4) & 0xf0f0f0f,
                        &DAT_01010101,&DAT_01010101);
        puStack_24 = puStack_24 + 4;
        puStack_1c = (uint *)((int)puStack_1c + (extraout_EDX >> 0x18));
      } while (puStack_24 != puStack_30);
    }
    for (; puStack_1c < param_1; puStack_1c = puStack_1c + 0x10) {
      puVar8 = *(undefined4 **)(iVar7 + 0x1a520);
      if (0x1ffffff < (uint)((int)puVar8 - *(int *)(iVar7 + 0x1a51c) >> 4)) {
LAB_00de636f:
        puVar6 = &DAT_0112e1b4;
        if (param_1 != (uint *)0x1) {
          puVar6 = &DAT_01141e74;
        }
        func_0x00dbfd90(piStack_18,0xa005,"Failed to allocate %d effect%s",param_1,puVar6);
        goto LAB_00de6396;
      }
      if (puVar8 == *(undefined4 **)(iVar7 + 0x1a524)) {
        func_0x00de52a0(puVar8);
      }
      else {
        puVar8[3] = 0;
        *puVar8 = 0xffffffff;
        puVar8[1] = 0xffffffff;
        puVar8[2] = 0;
        *(int *)(iVar7 + 0x1a520) = *(int *)(iVar7 + 0x1a520) + 0x10;
      }
      iVar3 = *(int *)(iStack_20 + 0x1a520);
      *(undefined4 *)(iVar3 + -0x10) = 0xffffffff;
      *(undefined4 *)(iVar3 + -0xc) = 0xffffffff;
      iVar5 = func_0x00ddbae0(4,0x1e00);
      *(int *)(iVar3 + -8) = iVar5;
      if (iVar5 == 0) {
        func_0x00de5450((int *)(iVar7 + 0x1a51c),*(int *)(iVar7 + 0x1a520) + -0x10);
        *(int *)(iVar7 + 0x1a520) = *(int *)(iVar7 + 0x1a520) + -0x10;
        goto LAB_00de636f;
      }
    }
    if (param_1 != (uint *)0x1) {
      puStack_40 = (undefined4 *)0x0;
      puStack_3c = (undefined4 *)0x0;
      puStack_38 = (undefined4 *)0x0;
      uStack_8._0_1_ = 3;
      if (param_1 < (uint *)0x40000000) {
        puVar8 = (undefined4 *)func_0x00ddbb30(4,(int)param_1 * 4);
        if (puVar8 == (undefined4 *)0x0) goto LAB_00de65b8;
        func_0x008ab0e6(puVar8,puStack_40,(int)puStack_3c - (int)puStack_40);
        if (puStack_40 != (undefined4 *)0x0) {
          func_0x00ddbb20(puStack_40);
        }
        puStack_38 = puVar8 + (int)param_1;
        puStack_40 = puVar8;
        puStack_3c = puVar8;
        do {
          uStack_28 = func_0x00de5610(iStack_20);
          puVar8 = puStack_3c;
          if (puStack_3c == puStack_38) {
            uStack_2c = (int)puStack_3c - (int)puStack_40 >> 2;
            if (uStack_2c == 0x3fffffff) goto LAB_00de65b3;
            puStack_1c = (uint *)(uStack_2c + 1);
            uVar10 = (int)puStack_38 - (int)puStack_40 >> 2;
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              puStack_30 = (uint *)0x3fffffff;
            }
            else {
              puStack_30 = (uint *)((uVar10 >> 1) + uVar10);
              if (puStack_30 < puStack_1c) {
                puStack_30 = puStack_1c;
              }
            }
            puStack_24 = puStack_30;
            puVar9 = (undefined4 *)func_0x00dbbb00(&puStack_40,&puStack_30);
            puStack_30 = puVar9 + uStack_2c;
            *puStack_30 = *(uint *)(uStack_28 + 0x74);
            if (puVar8 == puStack_3c) {
              func_0x008ab0e6(puVar9,puStack_40,(int)puStack_3c - (int)puStack_40);
            }
            else {
              func_0x008ab0e6(puVar9,puStack_40,(int)puVar8 - (int)puStack_40);
              func_0x008ab0e6(puStack_30 + 1,puVar8,(int)puStack_3c - (int)puVar8);
            }
            if (puStack_40 != (undefined4 *)0x0) {
              func_0x00ddbb20(puStack_40);
            }
            puStack_3c = puVar9 + (int)puStack_1c;
            puStack_38 = puVar9 + (int)puStack_24;
            puStack_40 = puVar9;
          }
          else {
            *puStack_3c = *(undefined4 *)(uStack_28 + 0x74);
            puStack_3c = puStack_3c + 1;
          }
          puVar8 = puStack_40;
          param_1 = (uint *)((int)param_1 + -1);
        } while (param_1 != (uint *)0x0);
        func_0x008ab0e6(param_2,puStack_40,(int)puStack_3c - (int)puStack_40);
        if (puVar8 != (undefined4 *)0x0) {
          func_0x00ddbb20(puVar8);
        }
        goto LAB_00de6396;
      }
      goto LAB_00de65ae;
    }
    iVar7 = func_0x00de5610(iStack_20);
    *param_2 = *(undefined4 *)(iVar7 + 0x74);
LAB_00de6396:
    func_0x00e730b2(iVar1);
    if (piStack_18 == (int *)0x0) goto LAB_00de63c6;
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00de63c6;
    func_0x00ddc830();
  }
  func_0x00ddbb20(piStack_18);
LAB_00de63c6:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de6597(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  func_0x0046e700();
  func_0x0046e700();
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x48,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de65d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c8d5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de66ef:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a518);
    if (iVar3 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar3 = func_0x00de5940(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
      }
      else {
        uStack_8._0_1_ = 3;
        (**(code **)(*(int *)(iVar3 + 0x70) + 0x18))(iVar3 + 4,param_2,param_3);
      }
      func_0x00e730b2(iVar1 + 0x1a4ec);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de66ef;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_00de6694(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de66bc;
}



void Catch_All_00de6701(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c915;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de683f:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a518);
    if (iVar3 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar3 = func_0x00de5940(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
      }
      else {
        uStack_8._0_1_ = 3;
        (**(code **)(*(int *)(iVar3 + 0x70) + 0x1c))(iVar3 + 4,param_2,param_3);
      }
      func_0x00e730b2(iVar1 + 0x1a4ec);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de683f;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_00de67e4(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de680c;
}



void Catch_All_00de6851(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6870(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c955;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00de69a1:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a518);
    if (iVar3 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      puVar4 = (undefined4 *)func_0x00de5940(iVar1,param_1);
      if (puVar4 == (undefined4 *)0x0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
      }
      else if (param_2 == 0x8001) {
        *param_3 = *puVar4;
      }
      else {
        uStack_8._0_1_ = 3;
        (**(code **)(puVar4[0x1c] + 0x10))(puVar4 + 1,param_2,param_3);
      }
      func_0x00e730b2(iVar1 + 0x1a4ec);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00de69a1;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_00de6946(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de696e;
}



void Catch_All_00de69b3(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de69d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c995;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == 0x8001) {
    FUN_00de6870(param_1,0x8001,param_3);
  }
  else {
    puStack_14 = (undefined1 *)&uStack_34;
    func_0x00dc77d0(&piStack_18);
    uStack_8._0_1_ = 1;
    if (piStack_18 != (int *)0x0) {
      iVar1 = piStack_18[0x48];
      iVar3 = func_0x00e7307f(iVar1 + 0x1a4ec);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar1 + 0x1a518);
        if (iVar3 != 0x7fffffff) {
          uStack_8._0_1_ = 2;
          iVar3 = func_0x00de5940(iVar1,param_1);
          if (iVar3 == 0) {
            func_0x00dbfd90(piStack_18,0xa001,"Invalid effect ID %u",param_1);
          }
          else {
            uStack_8._0_1_ = 3;
            (**(code **)(*(int *)(iVar3 + 0x70) + 0x14))(iVar3 + 4,param_2,param_3);
          }
          func_0x00e730b2(iVar1 + 0x1a4ec);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00de6b26;
        }
      }
      else {
        iVar3 = func_0x00e7304a(5);
      }
      *(int *)(iVar1 + 0x1a518) = iVar3 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_00de6b26:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de6aa6(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de6ace;
}



void Catch_All_00de6b4a(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00de6b50(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c9cd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
LAB_00de6c09:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  iVar4 = piStack_18[0x48];
  iVar1 = iVar4 + 0x1a4ec;
  iVar3 = func_0x00e7307f(iVar1);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar4 + 0x1a518);
    if (iVar3 != 0x7fffffff) {
      if (param_1 != 0) {
        iVar4 = func_0x00de5940(iVar4,param_1);
        if (iVar4 == 0) {
          func_0x00e730b2(iVar1);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
            }
          }
          goto LAB_00de6c09;
        }
      }
      func_0x00e730b2(iVar1);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar4 + 0x1a518) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}



void Catch_All_00de6c61(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6c80(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de7770(auStack_2c,0xa002,"Invalid low-pass integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6cc0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de7770(auStack_2c,0xa002,"Invalid low-pass integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6d00(int param_1,int param_2,float param_3)

{
  code *pcVar1;
  int extraout_ECX;
  float in_XMM1_Da;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 4) = param_3;
      FUN_008ab370();
      return;
    }
    func_0x00de7770(auStack_2c,0xa003,"Low-pass gain %f out of range",(double)param_3);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
    param_2 = extraout_ECX;
    in_XMM1_Da = param_3;
  }
  else if (param_2 == 2) {
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 8) = param_3;
      FUN_008ab370();
      return;
    }
    goto LAB_00de6de4;
  }
  func_0x00de7770(auStack_2c,0xa002,"Invalid low-pass float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  param_3 = in_XMM1_Da;
LAB_00de6de4:
  func_0x00de7770(auStack_2c,0xa003,"Low-pass gainhf %f out of range",(double)param_3);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6e20(int param_1,int param_2,float *param_3)

{
  code *pcVar1;
  int extraout_EDX;
  float fVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar2 = *param_3;
  if (param_2 == 1) {
    if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
      *(float *)(param_1 + 4) = fVar2;
      FUN_008ab370();
      return;
    }
    func_0x00de7770(auStack_2c,0xa003,"Low-pass gain %f out of range",(double)fVar2);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
    param_2 = extraout_EDX;
  }
  else if (param_2 == 2) {
    if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
      *(float *)(param_1 + 8) = fVar2;
      FUN_008ab370();
      return;
    }
    goto LAB_00de6f00;
  }
  func_0x00de7770(auStack_2c,0xa002,"Invalid low-pass float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
LAB_00de6f00:
  func_0x00de7770(auStack_2c,0xa003,"Low-pass gainhf %f out of range",(double)fVar2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6f40(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 4);
    FUN_008ab370();
    return;
  }
  if (param_2 == 2) {
    *param_3 = *(undefined4 *)(param_1 + 8);
    FUN_008ab370();
    return;
  }
  func_0x00de7770(auStack_2c,0xa002,"Invalid low-pass float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de6fc0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de7770(auStack_2c,0xa002,"Invalid high-pass integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7000(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de7770(auStack_2c,0xa002,"Invalid high-pass integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7040(int param_1,int param_2,float param_3)

{
  code *pcVar1;
  int extraout_ECX;
  float in_XMM1_Da;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 4) = param_3;
      FUN_008ab370();
      return;
    }
    func_0x00de7770(auStack_2c,0xa003,"High-pass gain %f out of range",(double)param_3);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
    param_2 = extraout_ECX;
    in_XMM1_Da = param_3;
  }
  else if (param_2 == 2) {
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 0x10) = param_3;
      FUN_008ab370();
      return;
    }
    goto LAB_00de7124;
  }
  func_0x00de7770(auStack_2c,0xa002,"Invalid high-pass float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  param_3 = in_XMM1_Da;
LAB_00de7124:
  func_0x00de7770(auStack_2c,0xa003,"High-pass gainlf %f out of range",(double)param_3);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7160(int param_1,int param_2,float *param_3)

{
  code *pcVar1;
  int extraout_EDX;
  float fVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar2 = *param_3;
  if (param_2 == 1) {
    if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
      *(float *)(param_1 + 4) = fVar2;
      FUN_008ab370();
      return;
    }
    func_0x00de7770(auStack_2c,0xa003,"High-pass gain %f out of range",(double)fVar2);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
    param_2 = extraout_EDX;
  }
  else if (param_2 == 2) {
    if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
      *(float *)(param_1 + 0x10) = fVar2;
      FUN_008ab370();
      return;
    }
    goto LAB_00de7240;
  }
  func_0x00de7770(auStack_2c,0xa002,"Invalid high-pass float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
LAB_00de7240:
  func_0x00de7770(auStack_2c,0xa003,"High-pass gainlf %f out of range",(double)fVar2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7280(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 4);
    FUN_008ab370();
    return;
  }
  if (param_2 == 2) {
    *param_3 = *(undefined4 *)(param_1 + 0x10);
    FUN_008ab370();
    return;
  }
  func_0x00de7770(auStack_2c,0xa002,"Invalid high-pass float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7300(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de7770(auStack_2c,0xa002,"Invalid band-pass integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7340(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de7770(auStack_2c,0xa002,"Invalid band-pass integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7380(int param_1,int param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  int extraout_EDX;
  float in_XMM1_Da;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 4) = param_3;
      FUN_008ab370();
      return;
    }
    func_0x00de7770(auStack_2c,0xa003,"Band-pass gain %f out of range",(double)param_3);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
    param_2 = extraout_EDX;
    fVar2 = param_3;
LAB_00de747b:
    param_3 = fVar2;
    func_0x00de7770(auStack_2c,0xa002,"Invalid band-pass float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
  }
  else {
    if (param_2 == 2) {
      if ((0.0 <= param_3) && (param_3 <= 1.0)) {
        *(float *)(param_1 + 0x10) = param_3;
        FUN_008ab370();
        return;
      }
      goto LAB_00de74d1;
    }
    fVar2 = in_XMM1_Da;
    if (param_2 != 3) goto LAB_00de747b;
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 8) = param_3;
      FUN_008ab370();
      return;
    }
  }
  func_0x00de7770(auStack_2c,0xa003,"Band-pass gainhf %f out of range",(double)param_3);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
LAB_00de74d1:
  func_0x00de7770(auStack_2c,0xa003,"Band-pass gainlf %f out of range",(double)param_3);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7510(int param_1,int param_2,float *param_3)

{
  code *pcVar1;
  int extraout_EDX;
  float fVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar2 = *param_3;
  if (param_2 == 1) {
    if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
      *(float *)(param_1 + 4) = fVar2;
      FUN_008ab370();
      return;
    }
    func_0x00de7770(auStack_2c,0xa003,"Band-pass gain %f out of range",(double)fVar2);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
    param_2 = extraout_EDX;
LAB_00de7601:
    func_0x00de7770(auStack_2c,0xa002,"Invalid band-pass float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
  }
  else {
    if (param_2 == 2) {
      if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
        *(float *)(param_1 + 0x10) = fVar2;
        FUN_008ab370();
        return;
      }
      goto LAB_00de7657;
    }
    if (param_2 != 3) goto LAB_00de7601;
    if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
      *(float *)(param_1 + 8) = fVar2;
      FUN_008ab370();
      return;
    }
  }
  func_0x00de7770(auStack_2c,0xa003,"Band-pass gainhf %f out of range",(double)fVar2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
LAB_00de7657:
  func_0x00de7770(auStack_2c,0xa003,"Band-pass gainlf %f out of range",(double)fVar2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7690(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 4);
    FUN_008ab370();
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      *param_3 = *(undefined4 *)(param_1 + 8);
      FUN_008ab370();
      return;
    }
    func_0x00de7770(auStack_2c,0xa002,"Invalid band-pass float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_01284238);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  FUN_008ab370();
  return;
}



void FUN_00de7730(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de7770(auStack_2c,0xa002,"Invalid null filter property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_01284238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00de77f0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6abcd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1,uVar1);
  uStack_8 = 0;
  *param_1 = al::base_exception::vftable;
  func_0x00469da0(param_2 + 0xc);
  *param_1 = _anon_0DA7D40F::filter_exception::vftable;
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00de7880(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = _anon_0DA7D40F::filter_exception::vftable;
  *param_1 = al::base_exception::vftable;
  uVar1 = param_1[8];
  if (0xf < uVar1) {
    iVar2 = param_1[3];
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
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  return;
}



undefined4 * __thiscall FUN_00de7890(undefined4 *param_1,byte param_2)

{
  *param_1 = _anon_0DA7D40F::filter_exception::vftable;
  func_0x00e05e80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



void FUN_00de79e0(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  uint uStack_38;
  int *piStack_20;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ca05;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_20);
  uStack_8._0_1_ = 1;
  if (piStack_20 != (int *)0x0) {
    if (param_1 < 0) {
      func_0x00dbfd90(piStack_20,0xa003,"Deleting %d filters",param_1);
      piVar5 = piStack_20;
    }
    else {
      piVar5 = piStack_20;
      if (0 < param_1) {
        iVar1 = piStack_20[0x48];
        iStack_1c = iVar1;
        iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
        if (iVar3 != 0) {
          iVar3 = func_0x00e7304a(5);
LAB_00de7c2f:
          *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
          func_0x00e7304a(6);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar3 = *(int *)(iVar1 + 0x1a554);
        if (iVar3 == 0x7fffffff) goto LAB_00de7c2f;
        uStack_8._0_1_ = 2;
        piStack_18 = param_2 + param_1;
        piVar5 = param_2;
        if (param_2 != piStack_18) {
          do {
            if (*piVar5 != 0) {
              uVar6 = *piVar5 - 1;
              uVar7 = uVar6 & 0x3f;
              if ((uint)(*(int *)(iStack_1c + 0x1a55c) - *(int *)(iStack_1c + 0x1a558) >> 4) <=
                  uVar6 >> 6) break;
              puVar4 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iStack_1c + 0x1a558));
              uVar6 = 1 << (uVar6 & 0x1f);
              uVar8 = 0;
              if (0x1f < uVar7) {
                uVar8 = uVar6;
              }
              uVar6 = uVar6 ^ uVar8;
              if (0x3f < uVar7) {
                uVar8 = uVar6;
              }
              if (((uVar6 & *puVar4) != 0 || (uVar8 & puVar4[1]) != 0) ||
                 (uVar7 * 0x20 + puVar4[2] == 0)) break;
            }
            piVar5 = piVar5 + 1;
          } while (piVar5 != piStack_18);
        }
        if (piVar5 == piStack_18) {
          if (param_2 != piStack_18) {
            do {
              if (*param_2 != 0) {
                uVar6 = *param_2 - 1;
                uVar7 = uVar6 & 0x3f;
                if (uVar6 >> 6 <
                    (uint)(*(int *)(iStack_1c + 0x1a55c) - *(int *)(iStack_1c + 0x1a558) >> 4)) {
                  puVar4 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iStack_1c + 0x1a558));
                  uVar6 = 1 << (uVar6 & 0x1f);
                  uVar8 = 0;
                  if (0x1f < uVar7) {
                    uVar8 = uVar6;
                  }
                  uVar6 = uVar6 ^ uVar8;
                  if (0x3f < uVar7) {
                    uVar8 = uVar6;
                  }
                  if ((uVar6 & *puVar4) == 0 && (uVar8 & puVar4[1]) == 0) {
                    iVar3 = uVar7 * 0x20 + puVar4[2];
                  }
                  else {
                    iVar3 = 0;
                  }
                }
                else {
                  iVar3 = 0;
                }
                if (iVar3 != 0) {
                  uVar8 = *(int *)(iVar3 + 0x1c) - 1;
                  puVar4 = (uint *)(*(int *)(iStack_1c + 0x1a558) + (uVar8 >> 6) * 0x10);
                  uVar6 = 1 << (uVar8 & 0x1f);
                  uVar7 = 0;
                  if (0x1f < (uVar8 & 0x3f)) {
                    uVar7 = uVar6;
                  }
                  uVar6 = uVar6 ^ uVar7;
                  if (0x3f < (uVar8 & 0x3f)) {
                    uVar7 = uVar6;
                  }
                  *puVar4 = *puVar4 | uVar6;
                  puVar4[1] = puVar4[1] | uVar7;
                }
              }
              param_2 = param_2 + 1;
            } while (param_2 != piStack_18);
          }
        }
        else {
          func_0x00dbfd90(piStack_20,0xa001,"Invalid filter ID %u",*piVar5);
        }
        func_0x00e730b2(iVar1 + 0x1a528);
        piVar5 = piStack_20;
      }
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piVar5 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piVar5);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de7c23(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7c40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ca45;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de7da8;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00de7dc6:
    *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a554);
  if (iVar3 == 0x7fffffff) goto LAB_00de7dc6;
  uVar6 = param_1 - 1;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uVar7 = uVar6 & 0x3f;
  if (uVar6 >> 6 < (uint)(*(int *)(iVar1 + 0x1a55c) - *(int *)(iVar1 + 0x1a558) >> 4)) {
    puVar5 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iVar1 + 0x1a558));
    uVar6 = 1 << (uVar6 & 0x1f);
    uVar4 = 0;
    if (0x1f < uVar7) {
      uVar4 = uVar6;
    }
    uVar6 = uVar6 ^ uVar4;
    if (0x3f < uVar7) {
      uVar4 = uVar6;
    }
    if (((uVar6 & *puVar5) != 0 || (uVar4 & puVar5[1]) != 0) ||
       (iVar3 = uVar7 * 0x20 + puVar5[2], iVar3 == 0)) goto LAB_00de7d60;
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    (**(code **)(*(int *)(iVar3 + 0x18) + 8))(iVar3,param_2,param_3);
  }
  else {
LAB_00de7d60:
    func_0x00dbfd90(piStack_18,0xa001,"Invalid filter ID %u",param_1);
  }
  func_0x00e730b2(iVar1 + 0x1a528);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de7da8:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de7d33(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de7d5b;
}



void Catch_All_00de7dba(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ca85;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de7f40;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00de7f5e:
    *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a554);
  if (iVar3 == 0x7fffffff) goto LAB_00de7f5e;
  uVar6 = param_1 - 1;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uVar7 = uVar6 & 0x3f;
  if (uVar6 >> 6 < (uint)(*(int *)(iVar1 + 0x1a55c) - *(int *)(iVar1 + 0x1a558) >> 4)) {
    puVar5 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iVar1 + 0x1a558));
    uVar6 = 1 << (uVar6 & 0x1f);
    uVar4 = 0;
    if (0x1f < uVar7) {
      uVar4 = uVar6;
    }
    uVar6 = uVar6 ^ uVar4;
    if (0x3f < uVar7) {
      uVar4 = uVar6;
    }
    if (((uVar6 & *puVar5) != 0 || (uVar4 & puVar5[1]) != 0) ||
       (iVar3 = uVar7 * 0x20 + puVar5[2], iVar3 == 0)) goto LAB_00de7ef8;
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    (**(code **)(*(int *)(iVar3 + 0x18) + 0xc))(iVar3,param_2,param_3);
  }
  else {
LAB_00de7ef8:
    func_0x00dbfd90(piStack_18,0xa001,"Invalid filter ID %u",param_1);
  }
  func_0x00e730b2(iVar1 + 0x1a528);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de7f40:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de7ecb(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de7ef3;
}



void Catch_All_00de7f52(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de7f70(int param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  char *pcVar9;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cac5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de810f;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00de812d:
    *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a554);
  if (iVar3 == 0x7fffffff) goto LAB_00de812d;
  uVar6 = param_1 - 1;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uVar7 = uVar6 & 0x3f;
  if (uVar6 >> 6 < (uint)(*(int *)(iVar1 + 0x1a55c) - *(int *)(iVar1 + 0x1a558) >> 4)) {
    puVar5 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iVar1 + 0x1a558));
    uVar6 = 1 << (uVar6 & 0x1f);
    uVar4 = 0;
    if (0x1f < uVar7) {
      uVar4 = uVar6;
    }
    uVar6 = uVar6 ^ uVar4;
    if (0x3f < uVar7) {
      uVar4 = uVar6;
    }
    if (((uVar6 & *puVar5) != 0 || (uVar4 & puVar5[1]) != 0) ||
       (iVar3 = uVar7 * 0x20 + puVar5[2], iVar3 == 0)) goto LAB_00de80c7;
    if (param_2 == 0x8001) {
      if ((((param_3 == 0) || (param_3 == 1)) || (param_3 == 2)) || (param_3 == 3)) {
        func_0x00de7970(iVar3,param_3);
        goto LAB_00de80df;
      }
      pcVar9 = "Invalid filter type 0x%04x";
      uVar8 = 0xa003;
      goto LAB_00de80d4;
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    (*(code *)**(undefined4 **)(iVar3 + 0x18))(iVar3,param_2,param_3);
  }
  else {
LAB_00de80c7:
    pcVar9 = "Invalid filter ID %u";
    uVar8 = 0xa001;
    param_3 = param_1;
LAB_00de80d4:
    func_0x00dbfd90(piStack_18,uVar8,pcVar9,param_3);
  }
LAB_00de80df:
  func_0x00e730b2(iVar1 + 0x1a528);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de810f:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de809a(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de80c2;
}



void Catch_All_00de8121(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de8140(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cb05;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == 0x8001) {
    FUN_00de7f70(param_1,0x8001,*param_3);
  }
  else {
    puStack_14 = (undefined1 *)&uStack_34;
    func_0x00dc77d0(&piStack_18);
    uStack_8._0_1_ = 1;
    if (piStack_18 != (int *)0x0) {
      iVar1 = piStack_18[0x48];
      iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar1 + 0x1a554);
        if (iVar3 != 0x7fffffff) {
          uStack_8._0_1_ = 2;
          iVar3 = func_0x00dd1500(iVar1,param_1);
          if (iVar3 == 0) {
            func_0x00dbfd90(piStack_18,0xa001,"Invalid filter ID %u",param_1);
          }
          else {
            uStack_8._0_1_ = 3;
            (**(code **)(*(int *)(iVar3 + 0x18) + 4))(iVar3,param_2,param_3);
          }
          func_0x00e730b2(iVar1 + 0x1a528);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00de8297;
        }
      }
      else {
        iVar3 = func_0x00e7304a(5);
      }
      *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_00de8297:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de8215(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de823d;
}



void Catch_All_00de82bb(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de82d0(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint extraout_EDX;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint uStack_5c;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint *puStack_24;
  int iStack_20;
  uint *puStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cb4d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_5c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_5c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de8546;
  if ((int)param_1 < 0) {
    func_0x00dbfd90(piStack_18,0xa003,"Generating %d filters",param_1);
LAB_00de833f:
    if (piStack_18 == (int *)0x0) goto LAB_00de8546;
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00de8546;
    func_0x00ddc830();
  }
  else {
    if ((int)param_1 < 1) goto LAB_00de833f;
    iVar7 = piStack_18[0x48];
    iVar1 = iVar7 + 0x1a528;
    iStack_34 = iVar1;
    iStack_20 = iVar7;
    iVar3 = func_0x00e7307f(iVar1);
    if (iVar3 != 0) {
      iVar3 = func_0x00e7304a(5);
LAB_00de8727:
      *(int *)(iVar7 + 0x1a554) = iVar3 + -1;
      func_0x00e7304a(6);
LAB_00de8732:
      func_0x0046e700();
LAB_00de8737:
      func_0x0046e700();
LAB_00de873c:
      func_0x0062c530();
      func_0x00e87d2e(auStack_4c,&DAT_0125c4dc);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = *(int *)(iVar7 + 0x1a554);
    if (iVar3 == 0x7fffffff) goto LAB_00de8727;
    puStack_30 = *(uint **)(iVar7 + 0x1a55c);
    puStack_24 = *(uint **)(iVar7 + 0x1a558);
    uStack_8._0_1_ = 2;
    puStack_1c = (uint *)0x0;
    if (puStack_24 != puStack_30) {
      do {
        uVar10 = *puStack_24;
        uVar4 = uVar10 >> 1 & 0x55555555;
        uStack_28 = uVar10 - uVar4;
        uStack_2c = (puStack_24[1] - (puStack_24[1] >> 1 & 0x55555555)) - (uint)(uVar10 < uVar4);
        uVar10 = uStack_28 >> 2 & 0x33333333;
        uVar4 = uVar10 + (uStack_28 & 0x33333333);
        uVar11 = (uStack_2c >> 2 & 0x33333333) + (uStack_2c & 0x33333333) +
                 (uint)CARRY4(uVar10,uStack_28 & 0x33333333);
        uVar10 = uVar4 >> 4 | uVar11 * 0x10000000;
        func_0x00e87d70(uVar10 + uVar4 & 0xf0f0f0f,
                        (uVar11 >> 4) + uVar11 + (uint)CARRY4(uVar10,uVar4) & 0xf0f0f0f,
                        &DAT_01010101,&DAT_01010101);
        puStack_24 = puStack_24 + 4;
        puStack_1c = (uint *)((int)puStack_1c + (extraout_EDX >> 0x18));
      } while (puStack_24 != puStack_30);
    }
    for (; puStack_1c < param_1; puStack_1c = puStack_1c + 0x10) {
      puVar8 = *(undefined4 **)(iVar7 + 0x1a55c);
      if (0x1ffffff < (uint)((int)puVar8 - *(int *)(iVar7 + 0x1a558) >> 4)) {
LAB_00de84ef:
        puVar6 = &DAT_0112e1b4;
        if (param_1 != (uint *)0x1) {
          puVar6 = &DAT_01141e74;
        }
        func_0x00dbfd90(piStack_18,0xa005,"Failed to allocate %d filter%s",param_1,puVar6);
        goto LAB_00de8516;
      }
      if (puVar8 == *(undefined4 **)(iVar7 + 0x1a560)) {
        func_0x00de52a0(puVar8);
      }
      else {
        puVar8[3] = 0;
        *puVar8 = 0xffffffff;
        puVar8[1] = 0xffffffff;
        puVar8[2] = 0;
        *(int *)(iVar7 + 0x1a55c) = *(int *)(iVar7 + 0x1a55c) + 0x10;
      }
      iVar3 = *(int *)(iStack_20 + 0x1a55c);
      *(undefined4 *)(iVar3 + -0x10) = 0xffffffff;
      *(undefined4 *)(iVar3 + -0xc) = 0xffffffff;
      iVar5 = func_0x00ddbae0(4,0x800);
      *(int *)(iVar3 + -8) = iVar5;
      if (iVar5 == 0) {
        func_0x00de5450((int *)(iVar7 + 0x1a558),*(int *)(iVar7 + 0x1a55c) + -0x10);
        *(int *)(iVar7 + 0x1a55c) = *(int *)(iVar7 + 0x1a55c) + -0x10;
        goto LAB_00de84ef;
      }
    }
    if (param_1 != (uint *)0x1) {
      puStack_40 = (undefined4 *)0x0;
      puStack_3c = (undefined4 *)0x0;
      puStack_38 = (undefined4 *)0x0;
      uStack_8._0_1_ = 3;
      if (param_1 < (uint *)0x40000000) {
        puVar8 = (undefined4 *)func_0x00ddbb30(4,(int)param_1 * 4);
        if (puVar8 == (undefined4 *)0x0) goto LAB_00de873c;
        func_0x008ab0e6(puVar8,puStack_40,(int)puStack_3c - (int)puStack_40);
        if (puStack_40 != (undefined4 *)0x0) {
          func_0x00ddbb20(puStack_40);
        }
        puStack_38 = puVar8 + (int)param_1;
        puStack_40 = puVar8;
        puStack_3c = puVar8;
        do {
          uStack_28 = func_0x00de78c0(iStack_20);
          puVar8 = puStack_3c;
          if (puStack_3c == puStack_38) {
            uStack_2c = (int)puStack_3c - (int)puStack_40 >> 2;
            if (uStack_2c == 0x3fffffff) goto LAB_00de8737;
            puStack_1c = (uint *)(uStack_2c + 1);
            uVar10 = (int)puStack_38 - (int)puStack_40 >> 2;
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              puStack_30 = (uint *)0x3fffffff;
            }
            else {
              puStack_30 = (uint *)((uVar10 >> 1) + uVar10);
              if (puStack_30 < puStack_1c) {
                puStack_30 = puStack_1c;
              }
            }
            puStack_24 = puStack_30;
            puVar9 = (undefined4 *)func_0x00dbbb00(&puStack_40,&puStack_30);
            puStack_30 = puVar9 + uStack_2c;
            *puStack_30 = *(uint *)(uStack_28 + 0x1c);
            if (puVar8 == puStack_3c) {
              func_0x008ab0e6(puVar9,puStack_40,(int)puStack_3c - (int)puStack_40);
            }
            else {
              func_0x008ab0e6(puVar9,puStack_40,(int)puVar8 - (int)puStack_40);
              func_0x008ab0e6(puStack_30 + 1,puVar8,(int)puStack_3c - (int)puVar8);
            }
            if (puStack_40 != (undefined4 *)0x0) {
              func_0x00ddbb20(puStack_40);
            }
            puStack_3c = puVar9 + (int)puStack_1c;
            puStack_38 = puVar9 + (int)puStack_24;
            puStack_40 = puVar9;
          }
          else {
            *puStack_3c = *(undefined4 *)(uStack_28 + 0x1c);
            puStack_3c = puStack_3c + 1;
          }
          puVar8 = puStack_40;
          param_1 = (uint *)((int)param_1 + -1);
        } while (param_1 != (uint *)0x0);
        func_0x008ab0e6(param_2,puStack_40,(int)puStack_3c - (int)puStack_40);
        if (puVar8 != (undefined4 *)0x0) {
          func_0x00ddbb20(puVar8);
        }
        goto LAB_00de8516;
      }
      goto LAB_00de8732;
    }
    iVar7 = func_0x00de78c0(iStack_20);
    if (iVar7 != 0) {
      *param_2 = *(undefined4 *)(iVar7 + 0x1c);
    }
LAB_00de8516:
    func_0x00e730b2(iVar1);
    if (piStack_18 == (int *)0x0) goto LAB_00de8546;
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00de8546;
    func_0x00ddc830();
  }
  func_0x00ddbb20(piStack_18);
LAB_00de8546:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00de871b(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  func_0x0046e700();
  func_0x0046e700();
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x48,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de8760(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cb85;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de88c0;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00de88de:
    *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a554);
  if (iVar3 == 0x7fffffff) goto LAB_00de88de;
  uVar6 = param_1 - 1;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uVar7 = uVar6 & 0x3f;
  if (uVar6 >> 6 < (uint)(*(int *)(iVar1 + 0x1a55c) - *(int *)(iVar1 + 0x1a558) >> 4)) {
    puVar5 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iVar1 + 0x1a558));
    uVar6 = 1 << (uVar6 & 0x1f);
    uVar4 = 0;
    if (0x1f < uVar7) {
      uVar4 = uVar6;
    }
    uVar6 = uVar6 ^ uVar4;
    if (0x3f < uVar7) {
      uVar4 = uVar6;
    }
    if (((uVar6 & *puVar5) != 0 || (uVar4 & puVar5[1]) != 0) ||
       (iVar3 = uVar7 * 0x20 + puVar5[2], iVar3 == 0)) goto LAB_00de8878;
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x18))(iVar3,param_2,param_3);
  }
  else {
LAB_00de8878:
    func_0x00dbfd90(piStack_18,0xa001,"Invalid filter ID %u",param_1);
  }
  func_0x00e730b2(iVar1 + 0x1a528);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de88c0:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de884b(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de8873;
}



void Catch_All_00de88d2(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de88f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cbc5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de8a50;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00de8a6e:
    *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a554);
  if (iVar3 == 0x7fffffff) goto LAB_00de8a6e;
  uVar6 = param_1 - 1;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uVar7 = uVar6 & 0x3f;
  if (uVar6 >> 6 < (uint)(*(int *)(iVar1 + 0x1a55c) - *(int *)(iVar1 + 0x1a558) >> 4)) {
    puVar5 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iVar1 + 0x1a558));
    uVar6 = 1 << (uVar6 & 0x1f);
    uVar4 = 0;
    if (0x1f < uVar7) {
      uVar4 = uVar6;
    }
    uVar6 = uVar6 ^ uVar4;
    if (0x3f < uVar7) {
      uVar4 = uVar6;
    }
    if (((uVar6 & *puVar5) != 0 || (uVar4 & puVar5[1]) != 0) ||
       (iVar3 = uVar7 * 0x20 + puVar5[2], iVar3 == 0)) goto LAB_00de8a08;
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x1c))(iVar3,param_2,param_3);
  }
  else {
LAB_00de8a08:
    func_0x00dbfd90(piStack_18,0xa001,"Invalid filter ID %u",param_1);
  }
  func_0x00e730b2(iVar1 + 0x1a528);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de8a50:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de89db(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de8a03;
}



void Catch_All_00de8a62(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de8a80(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cc05;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00de8bf6;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00de8c14:
    *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a554);
  if (iVar3 == 0x7fffffff) goto LAB_00de8c14;
  uVar6 = param_1 - 1;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uVar7 = uVar6 & 0x3f;
  if (uVar6 >> 6 < (uint)(*(int *)(iVar1 + 0x1a55c) - *(int *)(iVar1 + 0x1a558) >> 4)) {
    puVar5 = (uint *)((uVar6 >> 6) * 0x10 + *(int *)(iVar1 + 0x1a558));
    uVar6 = 1 << (uVar6 & 0x1f);
    uVar4 = 0;
    if (0x1f < uVar7) {
      uVar4 = uVar6;
    }
    uVar6 = uVar6 ^ uVar4;
    if (0x3f < uVar7) {
      uVar4 = uVar6;
    }
    if (((uVar6 & *puVar5) != 0 || (uVar4 & puVar5[1]) != 0) ||
       (puVar8 = (undefined4 *)(uVar7 * 0x20 + puVar5[2]), puVar8 == (undefined4 *)0x0))
    goto LAB_00de8bae;
    if (param_2 == 0x8001) {
      *param_3 = *puVar8;
    }
    else {
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      (**(code **)(puVar8[6] + 0x10))(puVar8,param_2,param_3);
    }
  }
  else {
LAB_00de8bae:
    func_0x00dbfd90(piStack_18,0xa001,"Invalid filter ID %u",param_1);
  }
  func_0x00e730b2(iVar1 + 0x1a528);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00de8bf6:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de8b81(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de8ba9;
}



void Catch_All_00de8c08(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00de8c20(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cc45;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == 0x8001) {
    FUN_00de8a80(param_1,0x8001,param_3);
  }
  else {
    puStack_14 = (undefined1 *)&uStack_34;
    func_0x00dc77d0(&piStack_18);
    uStack_8._0_1_ = 1;
    if (piStack_18 != (int *)0x0) {
      iVar1 = piStack_18[0x48];
      iVar3 = func_0x00e7307f(iVar1 + 0x1a528);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar1 + 0x1a554);
        if (iVar3 != 0x7fffffff) {
          uStack_8._0_1_ = 2;
          iVar3 = func_0x00dd1500(iVar1,param_1);
          if (iVar3 == 0) {
            func_0x00dbfd90(piStack_18,0xa001,"Invalid filter ID %u",param_1);
          }
          else {
            uStack_8._0_1_ = 3;
            (**(code **)(*(int *)(iVar3 + 0x18) + 0x14))(iVar3,param_2,param_3);
          }
          func_0x00e730b2(iVar1 + 0x1a528);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00de8d75;
        }
      }
      else {
        iVar3 = func_0x00e7304a(5);
      }
      *(int *)(iVar1 + 0x1a554) = iVar3 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_00de8d75:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00de8cf5(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00dbfd90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar1 + 0x24),&DAT_0112e274,
                  piVar2);
  return &DAT_00de8d1d;
}



void Catch_All_00de8d99(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00de8da0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cc7d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
LAB_00de8e59:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  iVar4 = piStack_18[0x48];
  iVar1 = iVar4 + 0x1a528;
  iVar3 = func_0x00e7307f(iVar1);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar4 + 0x1a554);
    if (iVar3 != 0x7fffffff) {
      if (param_1 != 0) {
        iVar4 = func_0x00dd1500(iVar4,param_1);
        if (iVar4 == 0) {
          func_0x00e730b2(iVar1);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
            }
          }
          goto LAB_00de8e59;
        }
      }
      func_0x00e730b2(iVar1);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar4 + 0x1a554) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}



void Catch_All_00de8eb1(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00de9980(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxFxSlotException::vftable;
  return param_1;
}



void FUN_00dec640(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cda5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dec716;
  piVar4 = piStack_18 + 0x8c;
  iVar3 = func_0x00e7307f(piVar4);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dec785:
    piVar2[0x97] = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = piVar2[0x97];
  if (iVar3 == 0x7fffffff) goto LAB_00dec785;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iStack_1c = func_0x00dea360(piStack_18,param_1);
  if (iStack_1c == 0) {
    func_0x00dbfd90(piStack_18,0xa001,"Invalid effect slot ID %u",param_1);
LAB_00dec6e6:
    func_0x00e730b2(piVar4);
  }
  else {
    if (*(int *)(iStack_1c + 0x88) == 0x1012) goto LAB_00dec6e6;
    *(undefined1 *)(iStack_1c + 0x84) = 0;
    func_0x00dec4e0(piStack_18);
    func_0x00de9fa0(&iStack_1c,&piStack_18,piStack_18);
    *(undefined4 *)(iStack_1c + 0x88) = 0x1012;
    func_0x00e730b2(piVar4);
  }
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dec716:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dec779(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dec7a0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  uint uStack_50;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cded;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_50 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_50;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8._0_1_ = 1;
  if (piStack_1c != (int *)0x0) {
    if (param_1 < 0) {
      func_0x00dbfd90(piStack_1c,0xa003,"Playing %d effect slots",param_1);
    }
    else if (0 < param_1) {
      func_0x00dc6b10(param_1,&uStack_15);
      piVar5 = piStack_1c;
      piVar8 = piStack_1c + 0x8c;
      uStack_8._0_1_ = 2;
      iVar2 = func_0x00e7307f(piVar8);
      if (iVar2 != 0) {
        iVar2 = func_0x00e7304a(5);
LAB_00dec9d4:
        piVar5[0x97] = iVar2 + -1;
        func_0x00e7304a(6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar2 = piVar5[0x97];
      if (iVar2 == 0x7fffffff) goto LAB_00dec9d4;
      uStack_8._0_1_ = 3;
      for (uVar4 = 0; uVar3 = (int)piStack_3c - (int)piStack_40 >> 2, uVar4 < uVar3;
          uVar4 = uVar4 + 1) {
        iVar2 = *(int *)(uVar4 * 4 + param_2);
        uVar3 = iVar2 - 1;
        uVar9 = uVar3 & 0x3f;
        if ((uint)(piStack_1c[0x89] - piStack_1c[0x88] >> 4) <= uVar3 >> 6) {
LAB_00dec90c:
          func_0x00dbfd90(piStack_1c,0xa001,"Invalid effect slot ID %u",iVar2);
          goto LAB_00dec922;
        }
        puVar6 = (uint *)((uVar3 >> 6) * 0x10 + piStack_1c[0x88]);
        uVar3 = 1 << (uVar3 & 0x1f);
        uVar7 = 0;
        if (0x1f < uVar9) {
          uVar7 = uVar3;
        }
        uVar3 = uVar3 ^ uVar7;
        if (0x3f < uVar9) {
          uVar7 = uVar3;
        }
        if (((uVar3 & *puVar6) != 0 || (uVar7 & puVar6[1]) != 0) ||
           (iVar10 = uVar9 * 0x134 + puVar6[2], iVar10 == 0)) goto LAB_00dec90c;
        if (*(int *)(iVar10 + 0x88) != 0x1012) {
          *(undefined1 *)(iVar10 + 0x84) = 0;
          func_0x00dec4e0(piStack_1c);
        }
        piStack_40[uVar4] = iVar10;
      }
      func_0x00de9fa0(piStack_40,piStack_40 + uVar3,piStack_1c);
      piVar5 = piStack_40;
      if (piStack_40 != piStack_3c) {
        do {
          iVar2 = *piVar5;
          piVar5 = piVar5 + 1;
          *(undefined4 *)(iVar2 + 0x88) = 0x1012;
        } while (piVar5 != piStack_3c);
      }
LAB_00dec922:
      func_0x00e730b2(piVar8);
      if (piStack_40 != (int *)0x0) {
        func_0x00ddbb20(piStack_40);
      }
    }
    if (piStack_1c != (int *)0x0) {
      LOCK();
      iVar2 = *piStack_1c;
      *piStack_1c = *piStack_1c + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piStack_1c != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_1c);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dec9c8(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dec9e0(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ce25;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00decab5:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x8c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x97];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iStack_1c = func_0x00dea360(piStack_18,param_1);
      if (iStack_1c == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid effect slot ID %u",param_1);
        func_0x00e730b2(piVar5);
      }
      else {
        func_0x00dea3c0(&iStack_1c,&piStack_18,piVar3);
        *(undefined4 *)(iStack_1c + 0x88) = 0x1014;
        func_0x00e730b2(piVar5);
      }
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar4 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00decab5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar2[0x97] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00decaf5(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00decb10(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint uStack_4c;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ce6d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_4c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_4c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8._0_1_ = 1;
  if (piStack_1c != (int *)0x0) {
    if (param_1 < 0) {
      func_0x00dbfd90(piStack_1c,0xa003,"Stopping %d effect slots",param_1);
    }
    else if (0 < param_1) {
      func_0x00dc6b10(param_1,&uStack_15);
      piVar5 = piStack_1c;
      piVar10 = piStack_1c + 0x8c;
      uStack_8._0_1_ = 2;
      iVar2 = func_0x00e7307f(piVar10);
      if (iVar2 != 0) {
        iVar2 = func_0x00e7304a(5);
LAB_00decd24:
        piVar5[0x97] = iVar2 + -1;
        func_0x00e7304a(6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar2 = piVar5[0x97];
      if (iVar2 == 0x7fffffff) goto LAB_00decd24;
      uStack_8._0_1_ = 3;
      for (uVar9 = 0; uVar3 = (int)piStack_38 - (int)piStack_3c >> 2, uVar9 < uVar3;
          uVar9 = uVar9 + 1) {
        iVar2 = *(int *)(param_2 + uVar9 * 4);
        uVar3 = iVar2 - 1;
        uVar11 = uVar3 & 0x3f;
        if ((uint)(piStack_1c[0x89] - piStack_1c[0x88] >> 4) <= uVar3 >> 6) {
LAB_00decc52:
          func_0x00dbfd90(piStack_1c,0xa001,"Invalid effect slot ID %u",iVar2);
          goto LAB_00decc68;
        }
        puVar7 = (uint *)((uVar3 >> 6) * 0x10 + piStack_1c[0x88]);
        uVar3 = 1 << (uVar3 & 0x1f);
        uVar8 = 0;
        if (0x1f < uVar11) {
          uVar8 = uVar3;
        }
        uVar3 = uVar3 ^ uVar8;
        if (0x3f < uVar11) {
          uVar8 = uVar3;
        }
        if (((uVar3 & *puVar7) != 0 || (uVar8 & puVar7[1]) != 0) ||
           (iVar4 = uVar11 * 0x134 + puVar7[2], iVar4 == 0)) goto LAB_00decc52;
        piStack_3c[uVar9] = iVar4;
      }
      func_0x00dea3c0(piStack_3c,piStack_3c + uVar3,piStack_1c);
      piVar5 = piStack_3c;
      if (piStack_3c != piStack_38) {
        do {
          piVar6 = piVar5 + 1;
          *(undefined4 *)(*piVar5 + 0x88) = 0x1014;
          piVar5 = piVar6;
        } while (piVar6 != piStack_38);
      }
LAB_00decc68:
      func_0x00e730b2(piVar10);
      if (piStack_3c != (int *)0x0) {
        func_0x00ddbb20(piStack_3c);
      }
    }
    if (piStack_1c != (int *)0x0) {
      LOCK();
      iVar2 = *piStack_1c;
      *piStack_1c = *piStack_1c + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piStack_1c != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_1c);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00decd18(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00decd30(int param_1,int param_2,float param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 uVar7;
  char *pcVar8;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cead;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dece3b;
  piVar6 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar6);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00deceec;
    unaff_EDI = piStack_18 + 0x8c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x97];
      if (iVar4 == 0x7fffffff) goto LAB_00decefe;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      pfVar5 = (float *)func_0x00dea360(piStack_18,param_1);
      if (pfVar5 == (float *)0x0) {
        pcVar8 = "Invalid effect slot ID %u";
        uVar7 = 0xa001;
LAB_00decdf9:
        func_0x00dbfd90(piStack_18,uVar7,pcVar8,param_1);
      }
      else {
        if (param_2 != 2) {
          pcVar8 = "Invalid effect slot float property 0x%04x";
          uVar7 = 0xa002;
          param_1 = param_2;
          goto LAB_00decdf9;
        }
        if ((0.0 <= param_3) && (param_3 <= 1.0)) {
          if (*pfVar5 != param_3) {
            *pfVar5 = param_3;
            func_0x00dea650(pfVar5,piStack_18);
          }
          func_0x00e730b2(unaff_EDI);
          func_0x00e730b2(piVar6);
          func_0x00dbbf30();
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        func_0x00dbfd90(piStack_18,0xa003,"Effect slot gain out of range");
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(piVar6);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar4 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
LAB_00dece3b:
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00deceec:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00decefe:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00decee0(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00decf10(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cee5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == 2) {
    FUN_00decd30(param_1,2,*param_3);
  }
  else {
    puStack_14 = (undefined1 *)&uStack_2c;
    func_0x00dc77d0(&piStack_18);
    piVar2 = piStack_18;
    uStack_8._0_1_ = 1;
    if (piStack_18 != (int *)0x0) {
      piVar5 = piStack_18 + 0x8c;
      iVar4 = func_0x00e7307f(piVar5);
      piVar3 = piStack_18;
      if (iVar4 == 0) {
        iVar4 = piVar2[0x97];
        if (iVar4 != 0x7fffffff) {
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          iVar4 = func_0x00dea360(piStack_18,param_1);
          if (iVar4 == 0) {
            pcVar7 = "Invalid effect slot ID %u";
            uVar6 = 0xa001;
          }
          else {
            pcVar7 = "Invalid effect slot float-vector property 0x%04x";
            uVar6 = 0xa002;
            param_1 = param_2;
          }
          func_0x00dbfd90(piVar3,uVar6,pcVar7,param_1);
          func_0x00e730b2(piVar5);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar4 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00ded029;
        }
      }
      else {
        iVar4 = func_0x00e7304a(5);
      }
      piVar2[0x97] = iVar4 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_00ded029:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00ded04d(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00ded060(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *unaff_ESI;
  int *piVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  uint uStack_bc;
  undefined4 auStack_ac [27];
  int *piStack_40;
  char cStack_38;
  int *piStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  uint *puStack_24;
  uint *puStack_20;
  int *piStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cf45;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_bc = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_bc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_bc;
  func_0x00dc77d0(&piStack_1c);
  piVar11 = piStack_1c;
  uStack_8._0_1_ = 1;
  if (piStack_1c == (int *)0x0) goto LAB_00ded2de;
  piVar12 = piStack_1c + 0x4a;
  piStack_40 = piVar12;
  iVar4 = func_0x00e7307f(piVar12);
  piVar3 = piStack_1c;
  if (iVar4 == 0) {
    iVar4 = piVar11[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ded655;
    uStack_8._0_1_ = 2;
    unaff_ESI = piStack_1c + 0x8c;
    piStack_34 = unaff_ESI;
    iVar4 = func_0x00e7307f(unaff_ESI);
    piVar11 = piStack_1c;
    if (iVar4 == 0) {
      iVar4 = piVar3[0x97];
      if (iVar4 == 0x7fffffff) goto LAB_00ded667;
      uStack_8._0_1_ = 3;
      puStack_30 = (uint *)func_0x00dea360(piStack_1c,param_1);
      puStack_20 = puStack_30;
      if (puStack_30 == (uint *)0x0) {
        func_0x00dbfd90(piVar11,0xa001,"Invalid effect slot ID %u",param_1);
        func_0x00e730b2(piVar3 + 0x8c);
        func_0x00e730b2(piVar12);
        if (piStack_1c != (int *)0x0) {
          LOCK();
          iVar4 = *piStack_1c;
          *piStack_1c = *piStack_1c + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piStack_1c != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_1c);
          }
        }
        goto LAB_00ded2de;
      }
      if (param_2 < 0x100a) {
        if (param_2 == 0x1009) {
          puStack_24 = (uint *)piVar11[0x48];
          if (puStack_30[0x22] == 0x1012) {
            func_0x00dbfd90(piVar11,0xa004,"Setting buffer on playing effect slot %u",
                            puStack_30[0x25]);
          }
          else {
            if (puStack_30[3] == 0) {
              bVar13 = param_3 == 0;
            }
            else {
              bVar13 = *(int *)(puStack_30[3] + 0x60) == param_3;
            }
            if (!bVar13) {
              func_0x005797f0(puStack_24 + 0x692c);
              piVar11 = (int *)0x0;
              uStack_8._0_1_ = 5;
              if (param_3 != 0) {
                uVar10 = param_3 - 1;
                uVar6 = uVar10 & 0x3f;
                if (uVar10 >> 6 < (uint)((int)(puStack_24[0x6939] - puStack_24[0x6938]) >> 4)) {
                  puStack_30 = (uint *)((uVar10 >> 6) * 0x10 + puStack_24[0x6938]);
                  uVar10 = 1 << (uVar10 & 0x1f);
                  uVar8 = 0;
                  if (0x1f < uVar6) {
                    uVar8 = uVar10;
                  }
                  uVar10 = uVar10 ^ uVar8;
                  if (0x3f < uVar6) {
                    uVar8 = uVar10;
                  }
                  if (((uVar10 & *puStack_30) == 0 && (uVar8 & puStack_30[1]) == 0) &&
                     (piVar11 = (int *)(uVar6 * 0x68 + puStack_30[2]), piVar11 != (int *)0x0)) {
                    if (*piVar11 != 0) {
                      func_0x00dbfd90(piStack_1c,0xa004,"Callback buffer not valid for effects");
                      goto LAB_00ded2b9;
                    }
                    LOCK();
                    piVar11[0x17] = piVar11[0x17] + 1;
                    UNLOCK();
                    goto LAB_00ded49f;
                  }
                }
                func_0x00dbfd90(piStack_1c,0xa003,"Invalid buffer ID");
                goto LAB_00ded2b9;
              }
LAB_00ded49f:
              if (puStack_20[3] != 0) {
                piVar1 = (int *)(puStack_20[3] + 0x5c);
                LOCK();
                *piVar1 = *piVar1 + -1;
                UNLOCK();
              }
              puStack_20[3] = (uint)piVar11;
              func_0x00dc6ba0();
              uStack_8 = CONCAT31(uStack_8._1_3_,6);
              (**(code **)(*(int *)puStack_20[0x20] + 4))
                        (-(uint)(puStack_24 != (uint *)0x0) & (uint)(puStack_24 + 4),piVar11);
              if (cStack_38 != '\0') {
                func_0x00e0c6d0();
              }
              uStack_8._0_1_ = 3;
              func_0x00e730b2(uStack_28);
LAB_00ded61a:
              if ((*(char *)((int)piStack_1c + 0x125) == '\0') && (puStack_20[0x22] == 0x1012)) {
                func_0x00dec4e0(piStack_1c);
              }
              else {
                *(undefined1 *)(puStack_20 + 0x21) = 1;
              }
            }
          }
          goto LAB_00ded1cf;
        }
        if (param_2 != 1) {
          if (param_2 != 3) goto LAB_00ded52c;
          if ((param_3 != 1) && (param_3 != 0)) {
            pcVar16 = "Effect slot auxiliary send auto out of range";
            goto LAB_00ded1c1;
          }
          if ((bool)(char)puStack_30[1] != (param_3 != 0)) {
            *(bool *)(puStack_30 + 1) = param_3 != 0;
            goto LAB_00ded61a;
          }
          goto LAB_00ded1cf;
        }
        puStack_24 = (uint *)piVar11[0x48];
        func_0x005797f0(puStack_24 + 0x693b);
        uStack_8._0_1_ = 4;
        if (param_3 == 0) {
          memset(auStack_ac,0,0x6c);
          puVar15 = auStack_ac;
          uVar14 = 0;
LAB_00ded319:
          iVar4 = func_0x00dec200(uVar14,puVar15,piStack_1c);
          uStack_8._0_1_ = 3;
          func_0x00e730b2(uStack_28);
          if (iVar4 != 0) {
            pcVar16 = "Effect initialization failed";
            piVar11 = piStack_1c;
            goto LAB_00ded1c7;
          }
          if (puStack_20[0x22] != 0x1011) goto LAB_00ded61a;
          *(undefined1 *)(puStack_20 + 0x21) = 0;
          func_0x00dec4e0(piStack_1c);
          func_0x00de9fa0(&puStack_20,&piStack_1c,piStack_1c);
          puStack_20[0x22] = 0x1012;
          func_0x00e730b2(piVar3 + 0x8c);
          func_0x00e730b2(piVar12);
        }
        else {
          uVar10 = param_3 - 1;
          uVar6 = uVar10 & 0x3f;
          puVar5 = (uint *)puStack_24[0x6947];
          if (uVar10 >> 6 < (uint)((int)(puStack_24[0x6948] - (int)puVar5) >> 4)) {
            puVar9 = puVar5 + (uVar10 >> 6) * 4;
            uVar10 = 1 << (uVar10 & 0x1f);
            uVar8 = 0;
            if (0x1f < uVar6) {
              uVar8 = uVar10;
            }
            uVar10 = uVar10 ^ uVar8;
            if (0x3f < uVar6) {
              uVar8 = uVar10;
            }
            if ((uVar10 & *puVar9) == 0 && (uVar8 & puVar9[1]) == 0) {
              puVar7 = (undefined4 *)(puVar9[2] + uVar6 * 0x78);
            }
            else {
              puVar7 = (undefined4 *)0x0;
            }
          }
          else {
            puVar7 = (undefined4 *)0x0;
          }
          puStack_24 = puVar5;
          if (puVar7 != (undefined4 *)0x0) {
            puVar15 = puVar7 + 1;
            uVar14 = *puVar7;
            goto LAB_00ded319;
          }
          func_0x00dbfd90(piStack_1c,0xa003,"Invalid effect ID %u",param_3);
LAB_00ded2b9:
          func_0x00e730b2(uStack_28);
          func_0x00e730b2(piVar3 + 0x8c);
          func_0x00e730b2(piVar12);
        }
      }
      else {
        if (param_2 == 0x199c) {
          puVar5 = (uint *)func_0x00dea360(piVar11,param_3);
          if ((param_3 == 0) || (puVar5 != (uint *)0x0)) {
            puStack_24 = (uint *)puStack_30[2];
            puVar9 = puVar5;
            if (puStack_24 != puVar5) {
              for (; puVar9 != (uint *)0x0; puVar9 = (uint *)puVar9[2]) {
                if (puVar9 == puStack_30) {
                  func_0x00dbfd90(piVar11,0xa004,
                                  "Setting target of effect slot ID %u to %u creates circular chain"
                                  ,puStack_30[0x25],puVar5[0x25]);
                  goto LAB_00ded1cf;
                }
              }
              if (puStack_24 == (uint *)0x0) {
                puVar9 = puStack_30;
                if (puVar5 != (uint *)0x0) {
                  LOCK();
                  puVar5[0x23] = puVar5[0x23] + 1;
                  UNLOCK();
                  puVar9 = puStack_20;
                }
                puVar9[2] = (uint)puVar5;
                goto LAB_00ded61a;
              }
              if (puVar5 != (uint *)0x0) {
                LOCK();
                puVar5[0x23] = puVar5[0x23] + 1;
                UNLOCK();
              }
              LOCK();
              puStack_24[0x23] = puStack_24[0x23] - 1;
              UNLOCK();
              puStack_20[2] = (uint)puVar5;
              func_0x00dec4e0(piStack_1c);
            }
            goto LAB_00ded1cf;
          }
          pcVar16 = "Invalid effect slot target ID";
LAB_00ded1c1:
          iVar4 = 0xa003;
        }
        else {
          if (param_2 != 0x199d) {
LAB_00ded52c:
            func_0x00dbfd90(piVar11,0xa002,"Invalid effect slot integer property 0x%04x",param_2);
            goto LAB_00ded1cf;
          }
          pcVar16 = "AL_EFFECTSLOT_STATE_SOFT is read-only";
          iVar4 = 0xa004;
        }
LAB_00ded1c7:
        func_0x00dbfd90(piVar11,iVar4,pcVar16);
LAB_00ded1cf:
        func_0x00e730b2(piVar3 + 0x8c);
        func_0x00e730b2(piVar12);
      }
      func_0x00dbbf30();
LAB_00ded2de:
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ded655:
    piVar11[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ded667:
  unaff_ESI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00ded649(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00ded680(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = param_2;
  puStack_c = &DAT_00f6cf85;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 < 0x100a) {
    if ((param_2 != 0x1009) && (param_2 != 1)) {
      bVar4 = param_2 == 3;
LAB_00ded6e3:
      if (!bVar4) {
        func_0x00dc77d0(&param_2);
        uStack_8._0_1_ = 1;
        if (param_2 != 0) {
          func_0x005797f0(param_2 + 0x230);
          iVar2 = param_2;
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          iVar3 = func_0x00dea360(param_2,param_1);
          if (iVar3 == 0) {
            func_0x00dbfd90(iVar2,0xa001,"Invalid effect slot ID %u",param_1);
            func_0x00e730b2(uStack_18);
            func_0x00dbbf30();
            *unaff_FS_OFFSET = iStack_10;
            return;
          }
          func_0x00dbfd90(iVar2,0xa002,"Invalid effect slot integer-vector property 0x%04x",iVar1);
          func_0x00e730b2(uStack_18);
          func_0x00dbbf30();
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        goto LAB_00ded7ae;
      }
    }
  }
  else if (param_2 != 0x199c) {
    bVar4 = param_2 == 0x199d;
    goto LAB_00ded6e3;
  }
  FUN_00ded060(param_1,param_2,*param_3);
LAB_00ded7ae:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00ded7c0(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00ded7d0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  uint uStack_44;
  int *piStack_34;
  int *piStack_30;
  int *piStack_20;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6cfcd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  piVar8 = piStack_1c;
  uStack_8._0_1_ = 1;
  if (piStack_1c == (int *)0x0) goto LAB_00ded8d5;
  if (param_1 < 0) {
    func_0x00dbfd90(piStack_1c,0xa003,"Deleting %d effect slots",param_1);
    piVar8 = piStack_1c;
  }
  else if (0 < param_1) {
    piVar7 = piStack_1c + 0x8c;
    iVar2 = func_0x00e7307f(piVar7);
    piVar9 = piStack_1c;
    if (iVar2 != 0) {
      iVar2 = func_0x00e7304a(5);
LAB_00dedb16:
      piVar8[0x97] = iVar2 + -1;
      func_0x00e7304a(6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = piVar8[0x97];
    if (iVar2 == 0x7fffffff) goto LAB_00dedb16;
    uStack_8._0_1_ = 2;
    if (param_1 == 1) {
      uVar12 = *param_2;
      piStack_20 = (int *)func_0x00dea360(piStack_1c,uVar12);
      if (piStack_20 == (int *)0x0) {
        pcVar13 = "Invalid effect slot ID %u";
        uVar11 = 0xa001;
        piStack_1c = piVar9;
      }
      else {
        if (piStack_20[0x23] == 0) {
          func_0x00dea3c0(&piStack_20,&piStack_1c,piStack_1c);
          func_0x00dea310(piStack_1c,piStack_20);
          goto LAB_00ded9a1;
        }
        uVar12 = *param_2;
        pcVar13 = "Deleting in-use effect slot %u";
        uVar11 = 0xa004;
      }
      func_0x00dbfd90(piStack_1c,uVar11,pcVar13,uVar12);
      func_0x00e730b2(piVar7);
      func_0x00dbbf30();
      goto LAB_00ded8d5;
    }
    func_0x00dc6b10(param_1,&uStack_15);
    uStack_8._0_1_ = 3;
    for (uVar6 = 0; piVar8 = piStack_1c, uVar6 < (uint)((int)piStack_30 - (int)piStack_34 >> 2);
        uVar6 = uVar6 + 1) {
      piStack_20 = (int *)(uVar6 * 4);
      iVar2 = func_0x00dea360(piStack_1c,*(undefined4 *)((int)piStack_20 + (int)param_2));
      if (iVar2 == 0) {
        uVar12 = *(undefined4 *)((int)piStack_20 + (int)param_2);
        pcVar13 = "Invalid effect slot ID %u";
        uVar11 = 0xa001;
LAB_00ded974:
        func_0x00dbfd90(piVar8,uVar11,pcVar13,uVar12);
        if (piStack_34 != (int *)0x0) {
          func_0x00ddbb20(piStack_34);
        }
        goto LAB_00ded9a1;
      }
      if (*(int *)(iVar2 + 0x8c) != 0) {
        uVar12 = *(undefined4 *)((int)piStack_20 + (int)param_2);
        pcVar13 = "Deleting in-use effect slot %u";
        uVar11 = 0xa004;
        piVar8 = piStack_1c;
        goto LAB_00ded974;
      }
      piStack_34[uVar6] = iVar2;
    }
    piVar8 = piStack_34 + 1;
    piVar9 = piStack_30;
    piVar3 = piStack_30;
    if (piVar8 != piStack_30) {
      do {
        piVar3 = (int *)func_0x00e72280(piVar8,piVar9,piVar8[-1]);
        if (piVar3 != piVar9) {
          piVar3 = (int *)func_0x00e723e0(piVar3,piVar9,piVar8[-1]);
        }
      } while ((piVar8 != piVar3) && (piVar8 = piVar8 + 1, piVar9 = piVar3, piVar8 != piVar3));
    }
    if (piVar3 != piStack_30) {
      piStack_30 = piVar3;
    }
    func_0x00dea3c0(piStack_34,piStack_34 + ((int)piStack_30 - (int)piStack_34 >> 2),piStack_1c);
    piStack_20 = piStack_34;
    if (piStack_34 != piStack_30) {
      do {
        piVar8 = piStack_1c;
        uVar10 = *(int *)(*piStack_20 + 0x94) - 1;
        func_0x00de9a30();
        uVar6 = 1 << (uVar10 & 0x1f);
        puVar5 = (uint *)(piVar8[0x88] + (uVar10 >> 6) * 0x10);
        uVar4 = 0;
        if (0x1f < (uVar10 & 0x3f)) {
          uVar4 = uVar6;
        }
        uVar6 = uVar6 ^ uVar4;
        if (0x3f < (uVar10 & 0x3f)) {
          uVar4 = uVar6;
        }
        *puVar5 = *puVar5 | uVar6;
        puVar5[1] = puVar5[1] | uVar4;
        piStack_20 = piStack_20 + 1;
        piVar8 = piVar8 + 0x8b;
        *piVar8 = *piVar8 + -1;
      } while (piStack_20 != piStack_30);
    }
    if (piStack_34 != (int *)0x0) {
      func_0x00ddbb20(piStack_34);
    }
LAB_00ded9a1:
    func_0x00e730b2(piVar7);
    piVar8 = piStack_1c;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    iVar2 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar8 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar8);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00ded8d5:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dedb0a(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dedb30(uint param_1,undefined4 *param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  uint uStack_58;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  uint uStack_20;
  uint uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d00d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_58 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_58;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dedc2b;
  if ((int)param_1 < 0) {
    func_0x00dbfd90(piStack_18,0xa003,"Generating %d effect slots",param_1);
  }
  else if (0 < (int)param_1) {
    piVar8 = piStack_18 + 0x8c;
    piStack_30 = piVar8;
    iVar4 = func_0x00e7307f(piVar8);
    if (iVar4 == 0) {
      iVar4 = piVar2[0x97];
      if (iVar4 == 0x7fffffff) goto LAB_00dede59;
      uStack_8._0_1_ = 2;
      if ((uint)(*(int *)(piStack_18[0x48] + 0x1a480) - piStack_18[0x8b]) < param_1) {
        func_0x00dbfd90(piStack_18,0xa005,"Exceeding %u effect slot limit (%u + %d)",
                        *(int *)(piStack_18[0x48] + 0x1a480),piStack_18[0x8b]);
        func_0x00e730b2(piVar8);
        goto LAB_00dedc07;
      }
      cVar3 = func_0x00dea190(piStack_18,param_1);
      if (cVar3 == '\0') {
        puVar5 = &DAT_0112e1b4;
        if (param_1 != 1) {
          puVar5 = &DAT_01141e74;
        }
        func_0x00dbfd90(piStack_18,0xa005,"Failed to allocate %d effectslot%s",param_1,puVar5);
LAB_00dedc71:
        func_0x00e730b2(piVar8);
        func_0x00dbbf30();
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      if (param_1 == 1) {
        iVar4 = func_0x00dea0d0(piStack_18);
        *param_2 = *(undefined4 *)(iVar4 + 0x94);
        goto LAB_00dedc71;
      }
      puStack_3c = (undefined4 *)0x0;
      puStack_38 = (undefined4 *)0x0;
      puStack_34 = (undefined4 *)0x0;
      uStack_8._0_1_ = 3;
      if (param_1 < 0x40000000) {
        puVar6 = (undefined4 *)func_0x00ddbb30(4,param_1 * 4);
        if (puVar6 != (undefined4 *)0x0) {
          func_0x008ab0e6(puVar6,puStack_3c,(int)puStack_38 - (int)puStack_3c);
          if (puStack_3c != (undefined4 *)0x0) {
            func_0x00ddbb20(puStack_3c);
          }
          puStack_34 = puVar6 + param_1;
          puStack_3c = puVar6;
          puStack_38 = puVar6;
          do {
            iStack_28 = func_0x00dea0d0(piStack_18);
            puVar6 = puStack_38;
            if (puStack_38 == puStack_34) {
              puStack_24 = (undefined4 *)((int)puStack_38 - (int)puStack_3c >> 2);
              if (puStack_24 == (undefined4 *)0x3fffffff) goto LAB_00dede69;
              uStack_2c = (int)puStack_24 + 1;
              uStack_20 = (int)puStack_34 - (int)puStack_3c >> 2;
              if (0x3fffffff - (uStack_20 >> 1) < uStack_20) {
                uStack_20 = 0x3fffffff;
              }
              else {
                uStack_20 = (uStack_20 >> 1) + uStack_20;
                if (uStack_20 < uStack_2c) {
                  uStack_20 = uStack_2c;
                }
              }
              uStack_1c = uStack_20;
              puVar7 = (undefined4 *)func_0x00dbbb00(&puStack_3c,&uStack_20);
              puStack_24 = puVar7 + (int)puStack_24;
              *puStack_24 = *(undefined4 *)(iStack_28 + 0x94);
              if (puVar6 == puStack_38) {
                func_0x008ab0e6(puVar7,puStack_3c,(int)puStack_38 - (int)puStack_3c);
              }
              else {
                func_0x008ab0e6(puVar7,puStack_3c,(int)puVar6 - (int)puStack_3c);
                func_0x008ab0e6(puStack_24 + 1,puVar6,(int)puStack_38 - (int)puVar6);
              }
              if (puStack_3c != (undefined4 *)0x0) {
                func_0x00ddbb20(puStack_3c);
              }
              puStack_38 = puVar7 + uStack_2c;
              puStack_34 = puVar7 + uStack_1c;
              puStack_3c = puVar7;
            }
            else {
              *puStack_38 = *(undefined4 *)(iStack_28 + 0x94);
              puStack_38 = puStack_38 + 1;
            }
            puVar6 = puStack_3c;
            param_1 = param_1 - 1;
          } while (param_1 != 0);
          func_0x008ab0e6(param_2,puStack_3c,(int)puStack_38 - (int)puStack_3c);
          if (puVar6 != (undefined4 *)0x0) {
            func_0x00ddbb20(puVar6);
          }
          goto LAB_00dedc71;
        }
        goto LAB_00dede6e;
      }
    }
    else {
      iVar4 = func_0x00e7304a(5);
LAB_00dede59:
      piVar2[0x97] = iVar4 + -1;
      func_0x00e7304a(6);
    }
    func_0x0046e700();
LAB_00dede69:
    func_0x0046e700();
LAB_00dede6e:
    func_0x0062c530();
    func_0x00e87d2e(auStack_48,&DAT_0125c4dc);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_00dedc07:
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dedc2b:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dede4d(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  func_0x0046e700();
  func_0x0046e700();
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x44,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dede90(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined4 uVar7;
  char *pcVar8;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d045;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dedf64;
  piVar6 = piStack_18 + 0x8c;
  iVar4 = func_0x00e7307f(piVar6);
  piVar3 = piStack_18;
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00dedfa2:
    piVar2[0x97] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = piVar2[0x97];
  if (iVar4 == 0x7fffffff) goto LAB_00dedfa2;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  puVar5 = (undefined4 *)func_0x00dea360(piStack_18,param_1);
  if (puVar5 == (undefined4 *)0x0) {
    pcVar8 = "Invalid effect slot ID %u";
    uVar7 = 0xa001;
LAB_00dedf2b:
    func_0x00dbfd90(piVar3,uVar7,pcVar8,param_1);
  }
  else {
    if (param_2 != 2) {
      pcVar8 = "Invalid effect slot float property 0x%04x";
      uVar7 = 0xa002;
      param_1 = param_2;
      goto LAB_00dedf2b;
    }
    *param_3 = *puVar5;
  }
  func_0x00e730b2(piVar6);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dedf64:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dedf96(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dedfb0(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d085;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == 2) {
    FUN_00dede90(param_1,2,param_3);
  }
  else {
    puStack_14 = (undefined1 *)&uStack_2c;
    func_0x00dc77d0(&piStack_18);
    piVar2 = piStack_18;
    uStack_8._0_1_ = 1;
    if (piStack_18 != (int *)0x0) {
      piVar5 = piStack_18 + 0x8c;
      iVar4 = func_0x00e7307f(piVar5);
      piVar3 = piStack_18;
      if (iVar4 == 0) {
        iVar4 = piVar2[0x97];
        if (iVar4 != 0x7fffffff) {
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          iVar4 = func_0x00dea360(piStack_18,param_1);
          if (iVar4 == 0) {
            pcVar7 = "Invalid effect slot ID %u";
            uVar6 = 0xa001;
          }
          else {
            pcVar7 = "Invalid effect slot float-vector property 0x%04x";
            uVar6 = 0xa002;
            param_1 = param_2;
          }
          func_0x00dbfd90(piVar3,uVar6,pcVar7,param_1);
          func_0x00e730b2(piVar5);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar4 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_00dee0bf;
        }
      }
      else {
        iVar4 = func_0x00e7304a(5);
      }
      piVar2[0x97] = iVar4 + -1;
      func_0x00e7304a(6);
      func_0x008aaff0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_00dee0bf:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dee0e3(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dee0f0(int param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d0c5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dee1c4;
  piVar5 = piStack_18 + 0x8c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00dee264:
    piVar2[0x97] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = piVar2[0x97];
  if (iVar4 == 0x7fffffff) goto LAB_00dee264;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iVar4 = func_0x00dea360(piStack_18,param_1);
  if (iVar4 == 0) {
    pcVar7 = "Invalid effect slot ID %u";
    uVar6 = 0xa001;
LAB_00dee18b:
    func_0x00dbfd90(piVar3,uVar6,pcVar7,param_1);
  }
  else if (param_2 < 0x199d) {
    if (param_2 == 0x199c) {
      if (*(int *)(iVar4 + 8) == 0) {
LAB_00dee1ff:
        *param_3 = 0;
      }
      else {
        *param_3 = *(uint *)(*(int *)(iVar4 + 8) + 0x94);
      }
    }
    else if (param_2 == 3) {
      *param_3 = (uint)(*(char *)(iVar4 + 4) != '\0');
    }
    else {
      if (param_2 != 0x1009) goto LAB_00dee238;
      if (*(int *)(iVar4 + 0xc) == 0) goto LAB_00dee1ff;
      *param_3 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x60);
    }
  }
  else {
    if (param_2 != 0x199d) {
LAB_00dee238:
      pcVar7 = "Invalid effect slot integer property 0x%04x";
      uVar6 = 0xa002;
      param_1 = param_2;
      goto LAB_00dee18b;
    }
    *param_3 = *(uint *)(iVar4 + 0x88);
  }
  func_0x00e730b2(piVar5);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dee1c4:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dee258(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dee270(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = param_2;
  puStack_c = &DAT_00f6d105;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 < 0x100a) {
    if ((param_2 != 0x1009) && (param_2 != 1)) {
      bVar4 = param_2 == 3;
LAB_00dee2d3:
      if (!bVar4) {
        func_0x00dc77d0(&param_2);
        uStack_8._0_1_ = 1;
        if (param_2 != 0) {
          func_0x005797f0(param_2 + 0x230);
          iVar2 = param_2;
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          iVar3 = func_0x00dea360(param_2,param_1);
          if (iVar3 == 0) {
            func_0x00dbfd90(iVar2,0xa001,"Invalid effect slot ID %u",param_1);
            func_0x00e730b2(uStack_18);
            func_0x00dbbf30();
            *unaff_FS_OFFSET = iStack_10;
            return;
          }
          func_0x00dbfd90(iVar2,0xa002,"Invalid effect slot integer-vector property 0x%04x",iVar1);
          func_0x00e730b2(uStack_18);
          func_0x00dbbf30();
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        goto LAB_00dee39c;
      }
    }
  }
  else if (param_2 != 0x199c) {
    bVar4 = param_2 == 0x199d;
    goto LAB_00dee2d3;
  }
  FUN_00dee0f0(param_1,param_2,param_3);
LAB_00dee39c:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dee3ae(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dee3c0(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d13d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
LAB_00dee4b7:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  piVar5 = piStack_18 + 0x8c;
  iVar3 = func_0x00e7307f(piVar5);
  if (iVar3 == 0) {
    iVar3 = piVar2[0x97];
    if (iVar3 != 0x7fffffff) {
      iVar3 = func_0x00dea360(piStack_18,param_1);
      if (iVar3 != 0) {
        func_0x00e730b2(piVar5);
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar3 = *piStack_18;
          *piStack_18 = *piStack_18 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_18);
          }
        }
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      func_0x00e730b2(piVar5);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar3 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dee4b7;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  piVar2[0x97] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



void Catch_All_00dee4cb(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dee4f0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  (*(code *)param_1[1])(*param_1,uVar1);
  func_0x00e744e0();
  if (param_1 != (undefined4 *)0x0) {
    func_0x008ab812(param_1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



// WARNING: Instruction at (ram,0x00deea39) overlaps instruction at (ram,0x00deea38)
// 
// WARNING: Control flow encountered bad instruction data

void FUN_00dee550(code *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 ****ppppuVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  code **ppcVar13;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1b8 [16];
  code *pcStack_1a8;
  uint uStack_1a4;
  undefined4 *puStack_1a0;
  int iStack_19c;
  int iStack_198;
  code *pcStack_194;
  code *pcStack_190;
  undefined1 uStack_18a;
  bool bStack_189;
  int *piStack_188;
  code *pcStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 ***apppuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 ***pppuStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined1 auStack_2f [24];
  undefined1 auStack_17 [3];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6d18b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_190 = param_1;
  pcStack_194 = (code *)0x0;
  iStack_19c = *(int *)(param_1 + 0xe8);
  pcVar12 = param_1 + 0x170;
  uStack_14 = uVar3;
  while( true ) {
    while( true ) {
      piVar4 = (int *)func_0x00e19070(auStack_1b8,uVar3);
      puStack_1a0 = (undefined4 *)*piVar4;
      iStack_198 = piVar4[1];
      if (iStack_198 != 0) break;
      func_0x00e33b60();
    }
    pcStack_1a8 = pcVar12;
    iVar5 = func_0x00e7307f(pcVar12);
    if (iVar5 != 0) break;
    iVar5 = *(int *)(pcVar12 + 0x2c);
    if (iVar5 == 0x7fffffff) goto LAB_00deea38_1;
    piVar4 = (int *)(iStack_19c + 4);
    uStack_8 = 0;
    piStack_188 = piVar4;
    do {
      puVar9 = puStack_1a0;
      iStack_198 = iStack_198 + -1;
      puStack_1a0 = puStack_1a0 + 0x3e;
      ppcVar13 = &pcStack_184;
      for (iVar5 = 0x3e; pcVar12 = pcStack_184, iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppcVar13 = (code *)*puVar9;
        puVar9 = puVar9 + 1;
        ppcVar13 = ppcVar13 + 1;
      }
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      bStack_189 = pcStack_184 == (code *)0x81;
      if (pcStack_184 == (code *)0x81) break;
      if (pcStack_184 == (code *)0x80) {
        if (uStack_180 != (undefined4 *)0x0) {
          piVar1 = uStack_180 + 1;
          LOCK();
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          piVar4 = piStack_188;
          if (iVar5 == 1) {
            puVar9 = uStack_180;
            if (piVar1 == (int *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            if (puVar9 != (undefined4 *)0x0) {
              (**(code **)*puVar9)(1);
              piVar4 = piStack_188;
            }
          }
        }
      }
      else {
        param_1 = *(code **)(pcStack_190 + 0x1a0);
        uStack_1a4 = *(uint *)(pcStack_190 + 0xec);
        if (param_1 != (code *)0x0) {
          if ((code *)0x2 < pcStack_184) goto LAB_00deea3d;
          piVar4 = piStack_188;
          if (((&uStack_1a4)[(uint)pcStack_184 >> 5] & 1 << ((byte)pcStack_184 & 0x1f)) != 0) {
            if (pcStack_184 == (code *)0x0) {
              uVar6 = func_0x0046ca80(auStack_17,uStack_180);
              func_0x0046cac0(uVar6,auStack_17,&uStack_18a);
              param_1 = pcStack_194;
              uStack_8._0_1_ = 1;
              piVar4 = (int *)func_0x005df0b0(0,"Source ID ",10);
              param_1 = (code *)((uint)param_1 | 7);
              pppuStack_5c = (undefined4 ***)*piVar4;
              iStack_58 = piVar4[1];
              iStack_54 = piVar4[2];
              iStack_50 = piVar4[3];
              iStack_4c = piVar4[4];
              uStack_48 = piVar4[5];
              piVar4[4] = 0;
              piVar4[5] = 0xf;
              *(undefined1 *)piVar4 = 0;
              uStack_8 = CONCAT31(uStack_8._1_3_,3);
              pcStack_194 = param_1;
              if (0xf < uStack_78) {
                uVar10 = uStack_78 + 1;
                uVar11 = uStack_8c;
                if (0xfff < uVar10) {
                  uVar11 = *(uint *)(uStack_8c - 4);
                  uVar10 = uStack_78 + 0x24;
                  if (0x1f < (uStack_8c - uVar11) - 4) goto LAB_00deea38;
                }
                func_0x008ab812(uVar11,uVar10);
              }
              uStack_7c = 0;
              uStack_78 = 0xf;
              uStack_8c = uStack_8c & 0xffffff00;
              func_0x0046a880(" state has changed to ",0x16);
              switch(iStack_17c) {
              case 0:
                func_0x0046a880("AL_INITIAL",10);
                pcVar12 = (code *)0x1011;
                break;
              case 1:
                func_0x0046a880("AL_STOPPED",10);
                pcVar12 = (code *)0x1014;
                break;
              case 2:
                func_0x0046a880("AL_PLAYING",10);
                pcVar12 = (code *)0x1012;
                break;
              case 3:
                func_0x0046a880("AL_PAUSED",9);
                pcVar12 = (code *)0x1013;
              }
              param_1 = pcStack_190;
              ppppuVar8 = &pppuStack_5c;
              if (0xf < uStack_48) {
                ppppuVar8 = (undefined4 ****)pppuStack_5c;
              }
              (**(code **)(pcStack_190 + 0x1a0))
                        (0x19a5,uStack_180,pcVar12,iStack_4c,ppppuVar8,
                         *(undefined4 *)(pcStack_190 + 0x1a4));
              uStack_8 = uStack_8 & 0xffffff00;
              piVar4 = piStack_188;
              if (0xf < uStack_48) {
                uVar11 = uStack_48 + 1;
                ppppuVar8 = (undefined4 ****)pppuStack_5c;
                if (0xfff < uVar11) {
                  ppppuVar8 = (undefined4 ****)pppuStack_5c[-1];
                  uVar11 = uStack_48 + 0x24;
                  if (0x1f < (uint)((int)pppuStack_5c + (-4 - (int)ppppuVar8))) goto LAB_00deea38;
                }
                func_0x008ab812(ppppuVar8,uVar11);
                piVar4 = piStack_188;
              }
            }
            else if (pcStack_184 == (code *)0x1) {
              uVar6 = func_0x0046ca80(auStack_2f,iStack_17c);
              func_0x0046cac0(uVar6,auStack_2f,&uStack_18a);
              pcStack_194 = (code *)((uint)pcStack_194 | 0x18);
              uStack_8._0_1_ = 4;
              if (iStack_17c == 1) {
                pcVar7 = " buffer completed";
                uVar6 = 0x11;
              }
              else {
                pcVar7 = " buffers completed";
                uVar6 = 0x12;
              }
              func_0x0046a880(pcVar7,uVar6);
              ppppuVar8 = apppuStack_74;
              if (0xf < uStack_60) {
                ppppuVar8 = (undefined4 ****)apppuStack_74[0];
              }
              (**(code **)(pcStack_190 + 0x1a0))
                        (0x19a4,uStack_180,iStack_17c,uStack_64,ppppuVar8,
                         *(undefined4 *)(pcStack_190 + 0x1a4));
              uStack_8 = (uint)uStack_8._1_3_ << 8;
              if (0xf < uStack_60) {
                uVar11 = uStack_60 + 1;
                ppppuVar8 = (undefined4 ****)apppuStack_74[0];
                if (0xfff < uVar11) {
                  ppppuVar8 = (undefined4 ****)apppuStack_74[0][-1];
                  uVar11 = uStack_60 + 0x24;
                  if (0x1f < (uint)((int)apppuStack_74[0] + (-4 - (int)ppppuVar8)))
                  goto LAB_00deea38;
                }
                func_0x008ab812(ppppuVar8,uVar11);
              }
              uStack_64 = 0;
              uStack_60 = 0xf;
              apppuStack_74[0] = (undefined4 ***)((uint)apppuStack_74[0] & 0xffffff00);
              piVar4 = piStack_188;
            }
            else if (pcStack_184 == (code *)0x2) {
              pcVar7 = (char *)&uStack_180;
              do {
                cVar2 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar2 != '\0');
              (*param_1)(0x19a6,0,0,(int)pcVar7 - ((int)&uStack_180 + 1),&uStack_180,
                         *(undefined4 *)(pcStack_190 + 0x1a4));
              piVar4 = piStack_188;
            }
          }
        }
      }
    } while (iStack_198 != 0);
    param_1 = pcStack_190;
    uStack_8 = 0xffffffff;
    pcVar12 = pcStack_190 + 0x170;
    func_0x00e730b2(pcVar12);
    if (bStack_189 != false) {
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  func_0x00e7304a(5);
LAB_00deea38:
  func_0x008aaf66();
LAB_00deea3d:
  iVar5 = func_0x0046a370();
LAB_00deea38_1:
  *(int *)(pcVar12 + 0x2c) = iVar5 + -1;
  uVar6 = func_0x00e7304a(6);
  *(undefined4 *)param_1 = uVar6;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00deea60(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  undefined4 auStack_20 [2];
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d1cd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_18 = (int *)func_0x008ab47d(8);
  if (piStack_18 == (int *)0x0) {
    piStack_18 = (int *)0x0;
  }
  else {
    *piStack_18 = param_1;
    piStack_18[1] = (int)FUN_00dee550;
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar2 = func_0x008aafea(0,0,FUN_00dee4f0,piStack_18,0,auStack_20);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      *(int *)(param_1 + 0xdc) = iVar2;
      *(undefined4 *)(param_1 + 0xe0) = auStack_20[0];
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    func_0x008aaff0();
  }
  auStack_20[0] = 0;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 Catch_00deeb06(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (0 < DAT_012ba4e8) {
    uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 4))();
    func_0x00ddf410(1,DAT_013e0188,"Failed to start event thread: %s\n",uVar1);
  }
  return 0xdeeaf4;
}



undefined4 Catch_All_00deeb33(void)

{
  if (0 < DAT_012ba4e8) {
    func_0x00ddf410(1,DAT_013e0188,"Failed to start event thread! Expect problems.\n");
  }
  return 0xdeeaf4;
}



void FUN_00deec30(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d205;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00deed1b:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00deed39;
    unaff_EDI = piStack_18 + 0x5c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x67];
      if (iVar4 != 0x7fffffff) {
        piStack_18[0x68] = param_1;
        piStack_18[0x69] = param_2;
        func_0x00e730b2(unaff_EDI);
        func_0x00e730b2(piVar5);
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar4 = *piStack_18;
          *piStack_18 = *piStack_18 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_18);
          }
        }
        goto LAB_00deed1b;
      }
      goto LAB_00deed4b;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00deed39:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00deed4b:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00deed2d(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00deed60(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  bool bVar5;
  uint uStack_30;
  undefined4 uStack_20;
  uint uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d23d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00deeeaa;
  if (param_1 < 0) {
    func_0x00dbfd90(piStack_18,0xa003,"Controlling %d events",param_1);
  }
  else if (0 < param_1) {
    if (param_2 != (int *)0x0) {
      uVar3 = 0;
      piVar1 = param_2 + param_1;
      uStack_1c = 0;
      if (param_2 == piVar1) {
LAB_00deeebc:
        uStack_8._0_1_ = 1;
        uVar3 = piStack_18[0x3b];
        if (param_3 == '\0') {
          do {
            LOCK();
            uVar4 = piStack_18[0x3b];
            if (uVar3 == uVar4) {
              piStack_18[0x3b] = ~uStack_1c & uVar3 & 7;
              uVar4 = uVar3;
            }
            UNLOCK();
            bVar5 = uVar4 != uVar3;
            uVar3 = uVar4;
          } while (bVar5);
          func_0x005797f0(piStack_18 + 0x5c);
          func_0x00e730b2(uStack_20);
        }
        else {
          do {
            LOCK();
            uVar4 = piStack_18[0x3b];
            if (uVar3 == uVar4) {
              piStack_18[0x3b] = uVar3 | uStack_1c;
              uVar4 = uVar3;
            }
            UNLOCK();
            bVar5 = uVar4 != uVar3;
            uVar3 = uVar4;
          } while (bVar5);
        }
      }
      else {
        do {
          iVar2 = *param_2;
          if (iVar2 == 0x19a4) {
            uVar3 = uVar3 | 2;
            bVar5 = true;
            uStack_1c = uVar3;
          }
          else if (iVar2 == 0x19a5) {
            uVar3 = uVar3 | 1;
            bVar5 = true;
            uStack_1c = uVar3;
          }
          else if (iVar2 == 0x19a6) {
            uVar3 = uVar3 | 4;
            bVar5 = true;
            uStack_1c = uVar3;
          }
          else {
            bVar5 = false;
          }
          uStack_8._0_1_ = 1;
        } while ((bVar5) && (param_2 = param_2 + 1, param_2 != piVar1));
        if (param_2 == piVar1) goto LAB_00deeebc;
        func_0x00dbfd90(piStack_18,0xa002,"Invalid event type 0x%04x",*param_2);
      }
      func_0x00dbbf30();
      goto LAB_00deeeaa;
    }
    func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
  }
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00deeeaa:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00deef26(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



bool FUN_00deef30(int param_1)

{
  return param_1 == 0;
}



undefined4 * FUN_00deef40(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f69f5e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_8 = 0;
  if (param_2 == 0) {
    func_0x0046a880("No Output",10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00deefd0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  if (param_3 != 0) {
    *param_1 = 0;
    return;
  }
  puVar2 = (undefined4 *)func_0x00ddbb30(4,0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = param_2;
    *puVar2 = _anon_C4E39C11::NullBackend::vftable;
    *(undefined1 *)(puVar2 + 2) = 1;
    *(undefined8 *)(puVar2 + 3) = 0;
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00def040(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  (**(code **)(param_1 + 4))(uVar1);
  func_0x00e744e0();
  if (param_1 != 0) {
    func_0x008ab812(param_1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



int __thiscall FUN_00def0a0(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x008aaff0();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x14);
  }
  return param_1;
}



undefined ** FUN_00def0e0(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e0250) {
    func_0x008ab40d(&DAT_013e0250);
    if (DAT_013e0250 == -1) {
      func_0x008ab7fd(FUN_00f75900);
      func_0x008ab3bc(&DAT_013e0250);
    }
  }
  return &PTR_vftable_012ba670;
}



// WARNING: Removing unreachable block (ram,0x00def425)
// WARNING: Removing unreachable block (ram,0x00def43f)
// WARNING: Removing unreachable block (ram,0x00def47b)

undefined4 __fastcall FUN_00def140(int param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_24;
  int iStack_20;
  uint uStack_10;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  uVar3 = (uint)(*(int *)(*(int *)(param_1 + 4) + 8) * 1000) / *(uint *)(*(int *)(param_1 + 4) + 4)
          >> 1;
  func_0x00e18030();
  func_0x00e33a80("alsoft-mixer");
  uStack_8 = 0;
  func_0x0046ede0(&uStack_10);
  lVar2 = CONCAT44(uStack_c,uStack_10);
  if (*(char *)(param_1 + 8) != '\0') {
    return 0;
  }
  iStack_20 = uStack_8._4_4_;
  uStack_24 = (uint)uStack_8;
  do {
    if (**(char **)(param_1 + 4) == '\0') {
      return 0;
    }
    lVar7 = func_0x00e728cb();
    lVar8 = func_0x00e728b4();
    uVar13 = (undefined4)((ulonglong)lVar8 >> 0x20);
    if (lVar7 == 10000000) {
      lVar8 = lVar8 * 100;
    }
    else {
      if (lVar7 == 24000000) {
        uVar11 = func_0x00e87ec0(lVar8,24000000,0);
        lVar10 = func_0x00e87d70(uVar11,24000000,0);
        uVar9 = func_0x00e87d70(lVar8 - lVar10,1000000000,0);
        uVar13 = 0;
        uVar12 = 24000000;
      }
      else {
        uVar11 = func_0x00e87fa0(lVar8,lVar7);
        uVar12 = extraout_ECX;
        uVar9 = func_0x00e87d70(extraout_ECX,uVar13,1000000000,0);
      }
      lVar8 = func_0x00e87ec0(uVar9,uVar12,uVar13);
      lVar10 = (uVar11 & 0xffffffff) * 1000000000;
      lVar8 = lVar8 + CONCAT44((int)(uVar11 >> 0x20) * 1000000000 + (int)((ulonglong)lVar10 >> 0x20)
                               ,(int)lVar10);
    }
    iVar5 = *(int *)(param_1 + 4);
    uVar9 = func_0x00e87d70(*(undefined4 *)(iVar5 + 4),0,lVar8 - lVar2);
    uVar9 = func_0x00e87ec0(uVar9,1000000000,0);
    uStack_10 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar4 = (uint)uVar9;
    bVar6 = -1 < (int)((uStack_10 - iStack_20) - (uint)(uVar4 < uStack_24));
    if ((uStack_10 - iStack_20 != (uint)(uVar4 < uStack_24) && bVar6) ||
       ((bVar6 && (*(uint *)(iVar5 + 8) <= uVar4 - uStack_24)))) {
      do {
        do {
          func_0x00e04c70(0,*(undefined4 *)(iVar5 + 8),0);
          iVar5 = *(int *)(param_1 + 4);
          uVar1 = *(uint *)(iVar5 + 8);
          bVar6 = CARRY4(uStack_24,uVar1);
          uStack_24 = uStack_24 + uVar1;
          iStack_20 = iStack_20 + (uint)bVar6;
          bVar6 = -1 < (int)((uStack_10 - iStack_20) - (uint)(uVar4 < uStack_24));
        } while (uStack_10 - iStack_20 != (uint)(uVar4 < uStack_24) && bVar6);
      } while ((bVar6) && (uVar1 <= uVar4 - uStack_24));
      uStack_10 = *(uint *)(iVar5 + 4);
      if ((-1 < iStack_20) && ((0 < iStack_20 || (uStack_10 <= uStack_24)))) {
        uVar9 = func_0x00e87ec0(uStack_24,iStack_20,uStack_10,0);
        func_0x00e87d70(uVar9,1000000000,0);
        uVar9 = func_0x00e87d70((int)((ulonglong)lVar7 >> 0x20),0,uVar9);
        bVar6 = uStack_24 < (uint)uVar9;
        uStack_24 = uStack_24 - (uint)uVar9;
        iStack_20 = (iStack_20 - (int)((ulonglong)uVar9 >> 0x20)) - (uint)bVar6;
      }
    }
    else {
      func_0x0046ede0(&uStack_8);
      lVar8 = uStack_8;
      if (uVar3 != 0) {
        lVar8 = func_0x00e87d70(uVar3,0,1000000,0);
        iVar5 = 0x7fffffff - (int)((ulonglong)lVar8 >> 0x20);
        if ((iVar5 < uStack_8._4_4_) ||
           ((iVar5 <= uStack_8._4_4_ && (-(int)lVar8 - 1U <= (uint)uStack_8)))) {
          lVar8 = 0x7fffffffffffffff;
        }
        else {
          lVar8 = lVar8 + uStack_8;
        }
      }
      while( true ) {
        lVar10 = func_0x00e728cb();
        uStack_10 = (uint)lVar10;
        lVar7 = func_0x00e728b4();
        if (lVar10 == 10000000) {
          lVar7 = lVar7 * 100;
        }
        else {
          if (lVar10 == 24000000) {
            uVar11 = func_0x00e87ec0(lVar7,24000000,0);
            lVar10 = func_0x00e87d70(uVar11,24000000,0);
            uVar13 = unaff_EDI;
            uVar12 = unaff_EBP;
            uVar9 = func_0x00e87d70(lVar7 - lVar10,1000000000,0);
            unaff_EDI = 0;
            unaff_EBP = 24000000;
          }
          else {
            uVar11 = func_0x00e87fa0(lVar7,lVar10);
            uVar9 = func_0x00e87d70(extraout_ECX_00,(int)lVar7,1000000000,0);
            uVar13 = unaff_EDI;
            uVar12 = unaff_EBP;
          }
          lVar7 = func_0x00e87ec0(uVar9,unaff_EBP,unaff_EDI);
          lVar10 = (uVar11 & 0xffffffff) * 1000000000;
          lVar7 = lVar7 + CONCAT44((int)(uVar11 >> 0x20) * 1000000000 +
                                   (int)((ulonglong)lVar10 >> 0x20),(int)lVar10);
          unaff_EDI = uVar13;
          unaff_EBP = uVar12;
        }
        if (lVar8 <= lVar7) break;
        lVar7 = lVar8 - lVar7;
        if (lVar7 < 0x4e94914f0001) {
          uVar9 = func_0x00e87ec0(lVar7,1000000,0);
          iVar5 = (int)uVar9;
          lVar10 = func_0x00e87d70(uVar9,1000000,0);
          if (lVar10 < lVar7) {
            iVar5 = iVar5 + 1;
          }
          func_0x00e754f7(iVar5);
        }
        else {
          func_0x00e754f7(86400000);
        }
      }
    }
  } while (*(char *)(param_1 + 8) == '\0');
  return 0;
}



void __thiscall FUN_00def540(int param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  int *apiStack_34 [2];
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)apiStack_34;
  if (param_2 != (byte *)0x0) {
    pcVar8 = "No Output";
    pbVar5 = param_2;
    do {
      bVar2 = *pbVar5;
      bVar12 = bVar2 < (byte)*pcVar8;
      if (bVar2 != *pcVar8) {
LAB_00def5e4:
        uVar6 = -(uint)bVar12 | 1;
        goto LAB_00def5e9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar12 = bVar2 < ((byte *)pcVar8)[1];
      if (bVar2 != ((byte *)pcVar8)[1]) goto LAB_00def5e4;
      pbVar5 = pbVar5 + 2;
      pcVar8 = (char *)((byte *)pcVar8 + 2);
    } while (bVar2 != 0);
    uVar6 = 0;
LAB_00def5e9:
    pbVar5 = param_2;
    if (uVar6 == 0) goto LAB_00def55f;
LAB_00def6a6:
    func_0x00e0c6f0(auStack_2c,0,"Device name \"%s\" not found",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012818e0);
LAB_00def6ca:
    func_0x00463570();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar5 = (byte *)"No Output";
LAB_00def55f:
  iVar3 = *(int *)(param_1 + 4);
  piVar11 = (int *)(iVar3 + 0x20);
  pbVar9 = pbVar5;
  do {
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar2 != 0);
  uVar6 = *(uint *)(iVar3 + 0x34);
  uVar10 = (int)pbVar9 - (int)(pbVar5 + 1);
  if (uVar10 <= uVar6) {
    if (0xf < uVar6) {
      piVar11 = (int *)*piVar11;
    }
    *(uint *)(iVar3 + 0x30) = uVar10;
    apiStack_34[0] = piVar11;
    func_0x008ab0e6(piVar11,pbVar5,uVar10);
    *(undefined1 *)((int)apiStack_34[0] + uVar10) = 0;
    FUN_008ab370();
    return;
  }
  if (0x7fffffff < uVar10) goto LAB_00def6ca;
  apiStack_34[0] = (int *)(uVar10 | 0xf);
  if (apiStack_34[0] < (int *)0x80000000) {
    if (0x7fffffff - (uVar6 >> 1) < uVar6) {
      apiStack_34[0] = (int *)0x7fffffff;
    }
    else {
      piVar1 = (int *)((uVar6 >> 1) + uVar6);
      if (apiStack_34[0] < piVar1) {
        apiStack_34[0] = piVar1;
      }
    }
  }
  else {
    apiStack_34[0] = (int *)0x7fffffff;
  }
  param_2 = (byte *)func_0x0046cf00(piVar11,apiStack_34);
  *(uint *)(iVar3 + 0x30) = uVar10;
  *(int **)(iVar3 + 0x34) = apiStack_34[0];
  memcpy(param_2,pbVar5,uVar10);
  param_2[uVar10] = 0;
  if (uVar6 < 0x10) goto LAB_00def68a;
  iVar3 = *piVar11;
  uVar10 = uVar6 + 1;
  iVar7 = iVar3;
  if (0xfff < uVar10) {
    iVar7 = *(int *)(iVar3 + -4);
    uVar10 = uVar6 + 0x24;
    if (0x1f < (iVar3 - iVar7) - 4U) {
      func_0x008aaf66();
      goto LAB_00def6a6;
    }
  }
  func_0x008ab812(iVar7,uVar10);
LAB_00def68a:
  *piVar11 = (int)param_2;
  FUN_008ab370();
  return;
}



undefined1 FUN_00def6d0(void)

{
  func_0x00e0c860();
  return 1;
}



void __fastcall FUN_00def6e0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  uint uStack_60;
  undefined4 uStack_48;
  int *piStack_44;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d26d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_60 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_60;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  uStack_18 = uStack_60;
  piStack_44 = (int *)func_0x008ab47d(8);
  if (piStack_44 == (int *)0x0) {
    piStack_44 = (int *)0x0;
  }
  else {
    *piStack_44 = param_1;
    piStack_44[1] = (int)FUN_00def140;
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar2 = func_0x008aafea(0,0,FUN_00def040,piStack_44,0,&uStack_48);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(int *)(param_1 + 0xc) = iVar2;
      *(undefined4 *)(param_1 + 0x10) = uStack_48;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    func_0x008aaff0();
  }
  uStack_48 = 0;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_00def78a(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar2 = (**(code **)(**(int **)(unaff_EBP + -0x4c) + 4))();
  func_0x00e0c6f0(unaff_EBP + -0x3c,1,"Failed to start mixing thread: %s",uVar2);
  func_0x00e87d2e(unaff_EBP + -0x3c,&DAT_012818e0);
  func_0x008aaff0();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00def7d0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  LOCK();
  cVar1 = *(char *)(param_1 + 8);
  *(char *)(param_1 + 8) = '\x01';
  UNLOCK();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = func_0x00bbb310();
    if (iVar4 == iVar3) {
      func_0x00e7304a(5);
    }
    else {
      iVar4 = func_0x00e74718(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        return;
      }
    }
    func_0x00e7304a(2);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}



bool FUN_00def820(void)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  undefined4 *puVar8;
  uint uStack_34;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6da07;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar7 = DAT_012ba6d8 < 0;
  if (bVar7) {
    uStack_8 = 0;
    iVar4 = func_0x008ab47d(0xb0);
    uStack_8._0_1_ = 1;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)func_0x00deff90(&uStack_15);
    }
    uStack_8._0_1_ = 2;
    uVar3 = (undefined1)uStack_8;
    uStack_8._0_1_ = 2;
    if (puVar5 == (undefined4 *)0x0) {
      uStack_8._0_1_ = uVar3;
      func_0x00837270(4);
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    piVar1 = puVar5 + 1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      if ((undefined4 *)puVar5[0x1e] == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)*puVar5;
        puVar8 = (undefined4 *)0x1;
      }
      else {
        puVar6 = *(undefined4 **)puVar5[0x1e];
        puVar8 = puVar5;
      }
      (*(code *)*puVar6)(puVar8);
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    DAT_012ba6d8 = func_0x00df45a0();
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar5 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        if ((undefined4 *)puVar5[0x1e] == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)*puVar5;
          puVar5 = (undefined4 *)0x1;
        }
        else {
          puVar6 = *(undefined4 **)puVar5[0x1e];
        }
        (*(code *)*puVar6)(puVar5);
      }
    }
    bVar7 = DAT_012ba6d8 < 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return !bVar7;
}



undefined4 Catch_All_00def91b(void)

{
  return 0xdef8f9;
}



undefined4 FUN_00def930(int param_1)

{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}



undefined4 * FUN_00def950(undefined4 *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_20 [2];
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6dca6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 1;
  iStack_18 = func_0x00df2030(uVar7);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_8 = 1;
  uStack_14 = 1;
  if (iStack_18 < 0) {
    *unaff_FS_OFFSET = iStack_10;
    return param_1;
  }
  if (param_2 == 0) {
    piVar8 = (int *)func_0x00df6830(apuStack_20,5);
    piVar1 = (int *)*piVar8;
    uStack_8 = 3;
    if ((piVar1 == (int *)0x0) || (((char)piVar8[1] != '\0' && ((char)piVar1[0x1b] != '\0')))) {
LAB_00defb73:
      func_0x00837270(4);
      pcVar2 = (code *)swi(3);
      puVar10 = (undefined4 *)(*pcVar2)();
      return puVar10;
    }
    (**(code **)(*piVar1 + 4))();
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    puVar10 = DAT_013e0288;
    puVar11 = DAT_013e028c;
    if (apuStack_20[0] != (undefined4 *)0x0) {
      LOCK();
      iVar3 = apuStack_20[0][1] + -1;
      apuStack_20[0][1] = iVar3;
      UNLOCK();
      puVar10 = DAT_013e0288;
      puVar11 = DAT_013e028c;
      if (iVar3 == 0) {
        if ((undefined4 *)apuStack_20[0][0x1e] == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*apuStack_20[0];
          apuStack_20[0] = (undefined4 *)0x1;
        }
        else {
          puVar10 = *(undefined4 **)apuStack_20[0][0x1e];
        }
        (*(code *)*puVar10)(apuStack_20[0]);
        puVar10 = DAT_013e0288;
        puVar11 = DAT_013e028c;
      }
    }
    for (; puVar5 = DAT_013e028c, bVar4 = puVar10 != DAT_013e028c, DAT_013e028c = puVar11, bVar4;
        puVar10 = puVar10 + 0x12) {
      puVar11 = puVar10;
      if (0xf < (uint)puVar10[5]) {
        puVar11 = (undefined4 *)*puVar10;
      }
      pcVar6 = "OpenAL Soft on ";
      do {
        pcVar9 = pcVar6;
        pcVar6 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      func_0x0046a880("OpenAL Soft on ",pcVar9 + -0x10dc750);
      func_0x0046a880(puVar11,puVar10[4] + 1);
      puVar11 = DAT_013e028c;
      DAT_013e028c = puVar5;
    }
  }
  else if (param_2 == 1) {
    piVar8 = (int *)func_0x00df6830(apuStack_20,6);
    piVar1 = (int *)*piVar8;
    uStack_8 = 4;
    if ((piVar1 == (int *)0x0) || (((char)piVar8[1] != '\0' && ((char)piVar1[0x1b] != '\0'))))
    goto LAB_00defb73;
    (**(code **)(*piVar1 + 4))();
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    puVar10 = DAT_013e0268;
    puVar11 = DAT_013e026c;
    if (apuStack_20[0] != (undefined4 *)0x0) {
      LOCK();
      iVar3 = apuStack_20[0][1] + -1;
      apuStack_20[0][1] = iVar3;
      UNLOCK();
      puVar10 = DAT_013e0268;
      puVar11 = DAT_013e026c;
      if (iVar3 == 0) {
        if ((undefined4 *)apuStack_20[0][0x1e] == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*apuStack_20[0];
          apuStack_20[0] = (undefined4 *)0x1;
        }
        else {
          puVar10 = *(undefined4 **)apuStack_20[0][0x1e];
        }
        (*(code *)*puVar10)(apuStack_20[0]);
        puVar10 = DAT_013e0268;
        puVar11 = DAT_013e026c;
      }
    }
    for (; puVar5 = DAT_013e026c, bVar4 = puVar10 != DAT_013e026c, DAT_013e026c = puVar11, bVar4;
        puVar10 = puVar10 + 0x12) {
      puVar11 = puVar10;
      if (0xf < (uint)puVar10[5]) {
        puVar11 = (undefined4 *)*puVar10;
      }
      pcVar6 = "OpenAL Soft on ";
      do {
        pcVar9 = pcVar6;
        pcVar6 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      func_0x0046a880("OpenAL Soft on ",pcVar9 + -0x10dc750);
      func_0x0046a880(puVar11,puVar10[4] + 1);
      puVar11 = DAT_013e026c;
      DAT_013e026c = puVar5;
    }
  }
  uStack_8 = 5;
  func_0x00df1f50();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00defb80(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)func_0x00ddbb30(4,0x9c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = param_2;
      *puVar2 = _anon_D5D252C0::WasapiPlayback::vftable;
      puVar2[2] = _anon_D5D252C0::WasapiPlayback::vftable;
      puVar2[3] = 0x80004005;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      *(undefined8 *)(puVar2 + 0x15) = 0;
      puVar2[0x17] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1e] = 0;
      *(undefined8 *)(puVar2 + 0x1f) = 0;
      puVar2[0x21] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x22] = 0xffffffff;
      puVar2[0x18] = 2;
      puVar2[0x23] = 0;
      *(undefined1 *)(puVar2 + 0x24) = 1;
      *(undefined8 *)(puVar2 + 0x25) = 0;
      *param_1 = puVar2;
      return;
    }
    func_0x0062c530();
    func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  }
  else {
    if (param_3 != 1) {
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined4 *)func_0x00ddbb30(4,0x44);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = param_2;
      *puVar2 = _anon_D5D252C0::WasapiCapture::vftable;
      puVar2[2] = _anon_D5D252C0::WasapiCapture::vftable;
      puVar2[3] = 0x80004005;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined1 *)(puVar2 + 8) = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(undefined1 *)(puVar2 + 0xe) = 1;
      *(undefined8 *)(puVar2 + 0xf) = 0;
      *param_1 = puVar2;
      return;
    }
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00df0410(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  (**(code **)(param_1 + 8))(uVar1);
  func_0x00e744e0();
  if (param_1 != 0) {
    func_0x008ab812(param_1,0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __thiscall FUN_00df0af0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = Concurrency::invalid_operation::vftable;
  return param_1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int __fastcall FUN_00df1700(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_94 [32];
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined4 *puStack_68;
  uint uStack_64;
  undefined **ppuStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined ***pppuStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6d476;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_24 = (undefined1 *)0x0;
  puStack_68 = &uStack_2c;
  uStack_6c = 0xdf173f;
  (**(code **)(*(int *)*param_1 + 8))();
  iStack_8 = 1;
  iStack_18 = 0;
  puStack_24 = (undefined1 *)0x1;
  uStack_6c = 0xdf175c;
  _guard_check_icall();
  bVar6 = iStack_18 == *(int *)(*param_1 + 8);
  iStack_8._0_1_ = 2;
  uStack_6c = 0xdf1773;
  _guard_check_icall();
  uVar3 = iStack_8._1_3_;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (bVar6) {
    uStack_6c = 0xffffffff;
    iStack_70 = *param_1;
    uStack_74 = 0xdf1787;
    iVar5 = FUN_00df3cc0();
  }
  else {
    iStack_50 = *param_1;
    if (piStack_28 != (int *)0x0) {
      LOCK();
      piStack_28[1] = piStack_28[1] + 1;
      UNLOCK();
    }
    uStack_4c = uStack_2c;
    pppuStack_30 = &ppuStack_54;
    ppuStack_54 = std::_Func_impl_no_alloc<>::vftable;
    piStack_48 = piStack_28;
    uStack_1c = 0;
    iStack_18 = 0;
    uStack_6c = 0;
    puStack_24 = auStack_94;
    iStack_70 = 0;
    iStack_8._0_1_ = 6;
    puVar4 = auStack_94;
    iStack_20 = iStack_50;
    iStack_8._1_3_ = uVar3;
    if (pppuStack_30 != (undefined ***)0x0) {
      iStack_70 = FUN_00df2a90(auStack_94);
      puVar4 = puStack_24;
    }
    puStack_24 = puVar4;
    iStack_8 = CONCAT31(iStack_8._1_3_,5);
    iVar5 = func_0x00e757f2();
    if (pppuStack_30 != (undefined ***)0x0) {
      uStack_6c = (uint)(pppuStack_30 != &ppuStack_54);
      iStack_70 = 0xdf184d;
      iVar5 = (*(code *)(*pppuStack_30)[4])();
    }
  }
  if (piStack_28 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_28 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      uStack_6c = 0xdf17a0;
      iVar5 = (**(code **)*piStack_28)();
      LOCK();
      piVar1 = piStack_28 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uStack_6c = 0xdf17af;
        iVar5 = (**(code **)(*piStack_28 + 4))();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



undefined4 Catch_All_00df1852(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = func_0x0062c5e0(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  func_0x00df2830(uVar1);
  func_0x00e75356(unaff_EBP + -0x18);
  return 0xdf1787;
}



undefined4 * __thiscall FUN_00df19f0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Associated_state<long>::vftable;
  if ((*(char *)((int)param_1 + 0x75) != '\0') && (param_1[0x1c] == 0)) {
    func_0x00e7465d(param_1 + 5);
  }
  func_0x00e75356(param_1 + 3);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00df1a40(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x1c];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[2] + -1;
    piVar1[2] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *param_1 = Concurrency::details::_RefCounter::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00df1a80(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = Concurrency::details::_PPLTaskHandle<>::vftable;
  _guard_check_icall(uVar4);
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  *param_1 = Concurrency::details::_TaskProcHandle::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00df1b20(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = Concurrency::details::_PPLTaskHandle<>::vftable;
  _guard_check_icall(uVar4);
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  *param_1 = Concurrency::details::_TaskProcHandle::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00df1bc0(undefined4 param_1,byte param_2)

{
  func_0x00df0c30();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00df1bf0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x110);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00df1c20(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00df1c50(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::_Task_async_state<long>::vftable;
  uStack_8 = 0;
  if (param_1[0x2a] != 0) {
    FUN_00df4110();
    piVar2 = (int *)param_1[0x2b];
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar4 = piVar2[1] + -1;
      piVar2[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        (**(code **)*piVar2)();
        LOCK();
        piVar1 = piVar2 + 2;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*piVar2 + 4))();
        }
      }
    }
    func_0x00df0c30();
    if ((param_2 & 1) != 0) {
      func_0x008ab812(param_1,0xb0);
    }
    *unaff_FS_OFFSET = iStack_10;
    return param_1;
  }
  func_0x00df3830(uVar5);
  pcVar3 = (code *)swi(3);
  puVar6 = (undefined4 *)(*pcVar3)();
  return puVar6;
}



undefined4 * __thiscall FUN_00df1d00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = Concurrency::details::_Task_impl<>::vftable;
  if (param_1[0x13] != 0) {
    func_0x00df2ea0(param_1[0x13],uVar4);
    piVar2 = (int *)param_1[0x13];
    LOCK();
    piVar3 = piVar2 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[0x13] = 0;
  }
  piVar3 = (int *)param_1[0x3f];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x10))(piVar3 != param_1 + 0x36);
    param_1[0x3f] = 0;
  }
  func_0x00df12f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x100);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00df1dc0(undefined4 param_1,uint param_2)

{
  func_0x00df0f00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x44);
  }
  return param_1;
}



int __thiscall FUN_00df1e00(int param_1,uint param_2)

{
  param_1 = param_1 + -8;
  func_0x00df0f00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x44);
  }
  return param_1;
}



undefined4 __thiscall FUN_00df1e10(undefined4 param_1,uint param_2)

{
  func_0x00df1040();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x9c);
  }
  return param_1;
}



int __thiscall FUN_00df1e50(int param_1,uint param_2)

{
  param_1 = param_1 + -8;
  func_0x00df1040();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x9c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00df1ec0(undefined4 *param_1,byte param_2)

{
  *param_1 = Concurrency::details::_RefCounter::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00df1ef0(undefined4 *param_1,byte param_2)

{
  *param_1 = Concurrency::details::_TaskProcHandle::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall FUN_00df1f20(undefined4 param_1,byte param_2)

{
  func_0x00df12f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd0);
  }
  return param_1;
}



void FUN_00df2510(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d4fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 8))();
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
      param_1[9] = 0;
    }
    func_0x008ab812(param_1,0x28);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00e701bd(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __fastcall FUN_00df2590(int param_1)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f6d520;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
    puStack_14 = (undefined1 *)&uStack_2c;
    uStack_18 = (**(code **)(**(int **)(param_1 + 0xa4) + 8))();
    func_0x00df3ec0(&uStack_18,0);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 Catch_All_00df25f8(void)

{
  undefined1 auStack_c [8];
  undefined4 uStack_4;
  
  uStack_4 = 0;
  func_0x0062c5e0(auStack_c);
  func_0x00df3dc0();
  return 0xdf25e6;
}



void FUN_00df2620(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d54d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 0x10),uVar1);
  uStack_8 = 2;
  func_0x00e756ac(param_1);
  func_0x008ab812(param_1,0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall
FUN_00df2680(int param_1,char param_2,char param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iVar7;
  undefined **ppuStack_3c;
  int iStack_38;
  undefined ***pppuStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6d585;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1 + 0x14;
  iVar7 = iVar1;
  iVar5 = func_0x00e7307f(iVar1,uStack_14);
  if (iVar5 != 0) {
    iVar5 = func_0x00e7304a(5);
LAB_00df2820:
    *(int *)(param_1 + 0x40) = iVar5 + -1;
    func_0x00e7304a(6);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar5 == 0x7fffffff) goto LAB_00df2820;
  uStack_8 = 0;
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 4) != 3) && (*(int *)(param_1 + 4) != 4)) {
      if (*(int *)(param_1 + 4) != 2) goto LAB_00df2726;
      if (param_2 != '\0') goto LAB_00df272c;
    }
  }
  else if (*(int *)(param_1 + 4) != 4) {
    if (param_5[1] != 0) {
      LOCK();
      piVar2 = (int *)(param_5[1] + 4);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    uVar3 = param_5[1];
    piVar2 = *(int **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc) = *param_5;
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar5 = piVar2[1] + -1;
      piVar2[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        (**(code **)*piVar2)();
        LOCK();
        iVar5 = piVar2[2] + -1;
        piVar2[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
    }
LAB_00df2726:
    if (param_2 == '\0') {
      iVar5 = *(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 2;
      _guard_check_icall();
      iVar6 = 2;
      if (iVar5 != 1) {
        iVar6 = 0;
      }
    }
    else {
LAB_00df272c:
      *(undefined4 *)(param_1 + 4) = 4;
      iVar6 = 1;
    }
    uStack_8 = 0xffffffff;
    func_0x00e730b2(iVar1);
    if (iVar6 == 1) {
      func_0x00df2980();
      if (*(int *)(param_1 + 0x44) != 0) {
        pppuStack_18 = &ppuStack_3c;
        ppuStack_3c = std::_Func_impl_no_alloc<>::vftable;
        uStack_8 = 1;
        iStack_38 = param_1;
        func_0x00df3b80(pppuStack_18,0x10);
        if (pppuStack_18 != (undefined ***)0x0) {
          (*(code *)(*pppuStack_18)[4])(pppuStack_18 != &ppuStack_3c);
        }
      }
    }
    else if ((iVar6 == 2) && (*(int **)(param_1 + 0xfc) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0xfc) + 8))();
    }
    goto LAB_00df275d;
  }
  func_0x00e730b2(iVar1);
LAB_00df275d:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(iVar7);
  return;
}



void __thiscall FUN_00df29d0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



undefined4 * __fastcall FUN_00df29f0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6d615;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x30,uVar1);
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  puVar2[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2);
    puVar2[0xb] = uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



void __thiscall FUN_00df2a70(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



undefined4 * __thiscall FUN_00df2a90(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  return param_2;
}



void __thiscall FUN_00df2ad0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00df2af0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_00463030(8,param_2,param_1 + 4);
  func_0x00defd50();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00df2e00(int param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x30);
  }
  return;
}



void __thiscall FUN_00df2e40(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x10);
  }
  return;
}



void __fastcall FUN_00df2e90(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(1);
  }
  return;
}



void __fastcall FUN_00df3020(int param_1)

{
  (*(code *)**(undefined4 **)(param_1 + 0x10))(0);
  return;
}



void __fastcall FUN_00df3030(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x0097db60();
    func_0x00e75356(param_1 + 0x10);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  _guard_check_icall(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00df3040(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}



void __fastcall FUN_00df3050(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 4);
  pcStack_c = FUN_00f6d520;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar2 + 0xa4);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    puStack_14 = (undefined1 *)&uStack_2c;
    uStack_18 = (**(code **)(*piVar1 + 8))();
    func_0x00df3ec0(&uStack_18,0);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00e701bd();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



uint __fastcall FUN_00df3060(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined1 auStack_10 [12];
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    return uVar2 & 0xffffff00;
  }
  func_0x00e7002b();
  func_0x00e87d2e(auStack_10,&DAT_01287084);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int __fastcall FUN_00df3080(int param_1)

{
  int iVar1;
  uint3 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_94 [32];
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined4 *puStack_68;
  uint uStack_64;
  undefined **ppuStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined ***pppuStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar5 = (int *)(param_1 + 4);
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6d476;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_24 = (undefined1 *)0x0;
  puStack_68 = &uStack_2c;
  uStack_6c = 0xdf173f;
  (**(code **)(*(int *)*piVar5 + 8))();
  iStack_8 = 1;
  iStack_18 = 0;
  puStack_24 = (undefined1 *)0x1;
  uStack_6c = 0xdf175c;
  _guard_check_icall();
  bVar6 = iStack_18 == *(int *)(*piVar5 + 8);
  iStack_8._0_1_ = 2;
  uStack_6c = 0xdf1773;
  _guard_check_icall();
  uVar2 = iStack_8._1_3_;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (bVar6) {
    uStack_6c = 0xffffffff;
    iStack_70 = *piVar5;
    uStack_74 = 0xdf1787;
    iVar4 = FUN_00df3cc0();
  }
  else {
    iStack_50 = *piVar5;
    if (piStack_28 != (int *)0x0) {
      LOCK();
      piStack_28[1] = piStack_28[1] + 1;
      UNLOCK();
    }
    uStack_4c = uStack_2c;
    pppuStack_30 = &ppuStack_54;
    ppuStack_54 = std::_Func_impl_no_alloc<>::vftable;
    piStack_48 = piStack_28;
    uStack_1c = 0;
    iStack_18 = 0;
    uStack_6c = 0;
    puStack_24 = auStack_94;
    iStack_70 = 0;
    iStack_8._0_1_ = 6;
    puVar3 = auStack_94;
    iStack_20 = iStack_50;
    iStack_8._1_3_ = uVar2;
    if (pppuStack_30 != (undefined ***)0x0) {
      iStack_70 = FUN_00df2a90(auStack_94);
      puVar3 = puStack_24;
    }
    puStack_24 = puVar3;
    iStack_8 = CONCAT31(iStack_8._1_3_,5);
    iVar4 = func_0x00e757f2();
    if (pppuStack_30 != (undefined ***)0x0) {
      uStack_6c = (uint)(pppuStack_30 != &ppuStack_54);
      iStack_70 = 0xdf184d;
      iVar4 = (*(code *)(*pppuStack_30)[4])();
    }
  }
  if (piStack_28 != (int *)0x0) {
    LOCK();
    piVar5 = piStack_28 + 1;
    iVar1 = *piVar5;
    iVar4 = *piVar5;
    *piVar5 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      uStack_6c = 0xdf17a0;
      iVar4 = (**(code **)*piStack_28)();
      LOCK();
      piVar5 = piStack_28 + 2;
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        uStack_6c = 0xdf17af;
        iVar4 = (**(code **)(*piStack_28 + 4))();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4;
}



void __fastcall FUN_00df3090(int param_1)

{
  FUN_00df3cc0(*(undefined4 *)(param_1 + 4),0xffffffff);
  return;
}



int * __fastcall FUN_00df30a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6d72d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar7 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar7;
  piVar3 = *(int **)(iVar2 + 0x44);
  *(undefined4 *)(iVar2 + 0x44) = 0;
  while (piVar3 != (int *)0x0) {
    piVar4 = (int *)piVar3[1];
    (**(code **)(*piVar3 + 8))(&piStack_18,uVar6);
    uStack_8 = 0;
    if ((*(int *)(iVar2 + 4) == 4) && ((char)piVar3[4] == '\0')) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        (**(code **)(*piStack_18 + 4))(1,0,0,piStack_18 + 3);
        piVar7 = (int *)(**(code **)*piVar3)(1);
      }
      else {
        (**(code **)(*piStack_18 + 4))(1,1,1,iVar2 + 0xc);
        piVar7 = (int *)(**(code **)*piVar3)(1);
      }
    }
    else {
      piVar7 = (int *)func_0x00df3ac0(piVar3);
    }
    piVar5 = piStack_14;
    uStack_8 = 0xffffffff;
    piVar3 = piVar4;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar4 = piStack_14 + 1;
      iVar1 = *piVar4;
      piVar7 = (int *)*piVar4;
      *piVar4 = iVar1 + -1;
      UNLOCK();
      if (iVar1 + -1 == 0) {
        (**(code **)*piStack_14)();
        LOCK();
        piVar4 = piVar5 + 2;
        iVar1 = *piVar4;
        piVar7 = (int *)*piVar4;
        *piVar4 = iVar1 + -1;
        UNLOCK();
        if (iVar1 + -1 == 0) {
          piVar7 = (int *)(**(code **)(*piVar5 + 4))();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar7;
}



HRESULT FUN_00df30b0(void)

{
  HRESULT HVar1;
  int *piStack_4;
  
  HVar1 = CoInitializeEx((LPVOID)0x0,0);
  if (HVar1 < 0) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Failed to initialize COM: 0x%08lx\n",HVar1);
    }
    return HVar1;
  }
  piStack_4 = (int *)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_010e7078,(LPUNKNOWN)0x0,1,(IID *)&DAT_010e7088,&piStack_4);
  if (HVar1 < 0) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Failed to create IMMDeviceEnumerator instance: 0x%08lx\n",
                      HVar1);
    }
    CoUninitialize();
    return HVar1;
  }
  (**(code **)(*piStack_4 + 8))(piStack_4);
  CoUninitialize();
  return 0;
}



void __thiscall FUN_00df3150(int param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x75) = 1;
  if (param_3 != '\0') {
    uVar1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    func_0x00e745a1(param_1 + 0x44,uVar1,(undefined4 *)(param_1 + 0x70));
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  func_0x00e7323d(param_1 + 0x44);
  return;
}



int __fastcall FUN_00df31a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d6cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(param_1 + 0x70);
  piVar6 = (int *)0x0;
  piVar5 = (int *)0x0;
  iVar4 = param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    do {
      if (iVar2 == 0) goto LAB_00df3214;
      LOCK();
      iVar4 = *(int *)(iVar1 + 4);
      if (iVar2 == iVar4) {
        *(int *)(iVar1 + 4) = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      bVar7 = iVar4 != iVar2;
      iVar2 = iVar4;
    } while (bVar7);
    piVar6 = *(int **)(param_1 + 0x6c);
    piVar5 = *(int **)(param_1 + 0x70);
  }
LAB_00df3214:
  uStack_8 = 0;
  if (piVar6 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar6 + 4))(0,0,0,piVar6 + 3,uVar3);
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    piVar6 = piVar5 + 1;
    iVar1 = *piVar6;
    iVar4 = *piVar6;
    *piVar6 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      iVar4 = (**(code **)*piVar5)();
      LOCK();
      piVar6 = piVar5 + 2;
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        iVar4 = (**(code **)(*piVar5 + 4))();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4;
}



int * __thiscall FUN_00df32f0(int *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EBX;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  char cStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3f8bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = param_1 + 5;
  cStack_14 = '\0';
  iVar4 = func_0x00e7307f(piStack_18,uVar3);
  if (iVar4 == 0) {
    iVar4 = param_1[0x10];
    if (iVar4 == 0x7fffffff) goto LAB_00df33e0;
    cStack_14 = '\x01';
    uStack_8 = 0;
    if ((param_2 != '\0') && ((char)param_1[0x1b] != '\0')) goto LAB_00df33eb;
    unaff_EBX = param_1 + 3;
    cVar2 = func_0x00e7542f(unaff_EBX);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x1b) = 1;
      if (*(char *)((int)param_1 + 0x76) == '\0') {
        *(undefined1 *)((int)param_1 + 0x76) = 1;
        (**(code **)(*param_1 + 0x10))(&piStack_18);
      }
      if (param_1[0x1c] == 0) {
        do {
          func_0x00e73265(param_1 + 0x11,piStack_18);
        } while (param_1[0x1c] == 0);
      }
      cVar2 = func_0x00e7542f(unaff_EBX);
      if (cVar2 == '\0') {
        if (cStack_14 != '\0') {
          func_0x00e730b2(piStack_18);
        }
        *unaff_FS_OFFSET = iStack_10;
        return param_1 + 2;
      }
      goto LAB_00df3402;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00df33e0:
    param_1[0x10] = iVar4 + -1;
    func_0x00e7304a(6);
LAB_00df33eb:
    func_0x00837270(2);
  }
  func_0x0062c5a0(unaff_EBX);
  func_0x0062c660();
LAB_00df3402:
  func_0x0062c5a0(unaff_EBX);
  func_0x0062c660();
  pcVar1 = (code *)swi(3);
  piVar5 = (int *)(*pcVar1)();
  return piVar5;
}



int * __thiscall FUN_00df3420(int *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EBX;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  char cStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3f8bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1[0x2a] == 0) {
    func_0x00df3830(uVar3);
LAB_00df3521:
    iVar4 = func_0x00e7304a(5);
LAB_00df3528:
    unaff_EDI[0xb] = iVar4 + -1;
    func_0x00e7304a(6);
LAB_00df3533:
    func_0x00837270(2);
  }
  else {
    FUN_00df4110();
    unaff_EDI = param_1 + 5;
    cStack_14 = '\0';
    piStack_18 = unaff_EDI;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00df3521;
    iVar4 = param_1[0x10];
    if (iVar4 == 0x7fffffff) goto LAB_00df3528;
    cStack_14 = '\x01';
    uStack_8 = 0;
    if ((param_2 != '\0') && ((char)param_1[0x1b] != '\0')) goto LAB_00df3533;
    unaff_EBX = param_1 + 3;
    cVar2 = func_0x00e7542f(unaff_EBX);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x1b) = 1;
      if (*(char *)((int)param_1 + 0x76) == '\0') {
        *(undefined1 *)((int)param_1 + 0x76) = 1;
        (**(code **)(*param_1 + 0x10))(&piStack_18);
      }
      if (param_1[0x1c] == 0) {
        do {
          func_0x00e73265(param_1 + 0x11,piStack_18);
        } while (param_1[0x1c] == 0);
      }
      cVar2 = func_0x00e7542f(unaff_EBX);
      if (cVar2 == '\0') {
        if (cStack_14 != '\0') {
          func_0x00e730b2(piStack_18);
        }
        *unaff_FS_OFFSET = iStack_10;
        return param_1 + 2;
      }
      goto LAB_00df354a;
    }
  }
  func_0x0062c5a0(unaff_EBX);
  func_0x0062c660();
LAB_00df354a:
  func_0x0062c5a0(unaff_EBX);
  func_0x0062c660();
  pcVar1 = (code *)swi(3);
  piVar5 = (int *)(*pcVar1)();
  return piVar5;
}



undefined4 * __thiscall FUN_00df37c0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_2;
}



void __thiscall FUN_00df3810(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



void FUN_00df3970(int *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d6fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  (**(code **)(*param_1 + 4))(uVar1);
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00df3cc0(int param_1,int *param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d7f5;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_3 == -1) {
    uStack_8 = 1;
    (**(code **)(*param_2 + 4))();
    if (param_2 != (int *)0x0) {
      (**(code **)*param_2)(1);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (*(undefined4 **)(param_1 + 0xb0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xb0))();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00df8500(FUN_00df3970,param_2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 Catch_00df3d72(void)

{
  return 0xdf3d18;
}



undefined4 Catch_00df3d78(void)

{
  return 0xdf3d18;
}



undefined4 Catch_All_00df3d7e(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) == 0) {
    uVar1 = func_0x0062c5e0(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    func_0x00df2830(uVar1);
    func_0x00e75356(unaff_EBP + -0x18);
  }
  return 0xdf3d18;
}



TypeDescriptor * FUN_00df3f70(void)

{
  return &`public:___thiscall_std::_Task_async_state<long>::_Task_async_state<long><>(class_std::_Fake_no_copy_callable_adapter<>&&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00df3f80(void)

{
  return &`class_std::function<>___cdecl_Concurrency::details::_MakeVoidToUnitFunc(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00df3f90(void)

{
  return &`public:_void___thiscall_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(struct_Concurrency::details::_ContinuationTaskHandleBase*)'
          ::__l5::<lambda_1>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00df3fa0(void)

{
  return &`public:___thiscall_`public:_void___thiscall_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(struct_Concurrency::details::_ContinuationTaskHandleBase*)'::`5'::<lambda_1>::operator()(void)const_'
          ::__l8::<lambda_1>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00df3fb0(void)

{
  return &`public:_virtual_bool___thiscall_Concurrency::details::_Task_impl<>::_CancelAndRunContinuations(bool,bool,bool,class_std::shared_ptr<>_const&)'
          ::__l34::<lambda_1>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00df3fc0(void)

{
  return &std::_Fake_no_copy_callable_adapter<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00df3fd0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  char cStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6d86d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = param_1 + 5;
  cStack_14 = 0;
  iVar3 = func_0x00e7307f(piStack_18,uVar2);
  if (iVar3 == 0) {
    iVar3 = param_1[0x10];
    if (iVar3 != 0x7fffffff) {
      cStack_14 = '\x01';
      uStack_8 = 0;
      if (*(char *)((int)param_1 + 0x76) == '\0') {
        *(undefined1 *)((int)param_1 + 0x76) = 1;
        (**(code **)(*param_1 + 0x10))(&piStack_18);
      }
      if (param_1[0x1c] == 0) {
        do {
          func_0x00e73265(param_1 + 0x11,piStack_18);
        } while (param_1[0x1c] == 0);
      }
      if (cStack_14 != '\0') {
        func_0x00e730b2(piStack_18);
      }
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  param_1[0x10] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int __fastcall FUN_00df4090(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  char *pcStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0xa8);
  if (iVar2 == 0) {
    pcStack_10 = "This function cannot be called on a default constructed task";
    func_0x00df0b20();
    func_0x00e87d2e();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  puStack_c = &DAT_00f6d89d;
  pcStack_10 = (char *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&pcStack_10;
  if (*(char *)(iVar2 + 8) == '\0') {
    uStack_8 = 0;
    func_0x00df40b0();
    uStack_8 = 0xffffffff;
    if (*(char *)(iVar2 + 9) == '\0') goto LAB_00df4187;
  }
  uStack_8 = 0xffffffff;
  func_0x00df40b0();
LAB_00df4187:
  if (*(int *)(iVar2 + 0xc) != 0) {
    FUN_005beae0();
    func_0x00df3940();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = *(int *)(iVar2 + 4);
  *unaff_FS_OFFSET = (int)pcStack_10;
  return (iVar2 == 4) + 1;
}



int __fastcall FUN_00df4110(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d89d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 8) == '\0') {
    uStack_8 = 0;
    func_0x00df40b0();
    uStack_8 = 0xffffffff;
    if (*(char *)(param_1 + 9) == '\0') goto LAB_00df4187;
  }
  uStack_8 = 0xffffffff;
  func_0x00df40b0();
LAB_00df4187:
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005beae0();
    func_0x00df3940();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return (iVar2 == 4) + 1;
}



undefined * Catch_00df4161(void)

{
  return &DAT_00df416d;
}



undefined * Catch_00df4167(void)

{
  return &DAT_00df416d;
}



void Catch_All_00df41ae(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  cVar2 = func_0x00df3710();
  if (cVar2 == '\0') {
    uVar3 = func_0x0062c5e0(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    func_0x00df2830(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    func_0x0062c590();
  }
  FUN_005beae0();
  func_0x00df3940();
  FUN_005beae0();
  func_0x00df3940();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint __fastcall FUN_00df44b0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  return *piVar1 - piVar1[1] & piVar1[3];
}



uint __thiscall FUN_00df44c0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x34);
  uVar3 = *piVar1 - piVar1[1] & piVar1[3];
  if (uVar3 != 0) {
    uVar2 = piVar1[3];
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    uVar3 = uVar2 & piVar1[1];
    if (uVar2 + 1 < uVar3 + param_3) {
      uVar5 = uVar2 & uVar3 + param_3;
      uVar2 = (uVar2 - uVar3) + 1;
    }
    else {
      uVar5 = 0;
      uVar2 = param_3;
    }
    iVar4 = piVar1[4] * uVar2;
    if (iVar4 != 0) {
      func_0x008ab0e6(param_2,(int)piVar1 + piVar1[4] * uVar3 + 0x30,iVar4);
      param_2 = iVar4 + param_2;
    }
    iVar4 = uVar3 + uVar2;
    if (uVar5 != 0) {
      if (piVar1[4] * uVar5 != 0) {
        func_0x008ab0e6(param_2,piVar1 + 0xc,piVar1[4] * uVar5);
      }
      iVar4 = iVar4 + uVar5;
    }
    piVar1[1] = iVar4;
    return param_3;
  }
  return 0;
}



void __fastcall FUN_00df44d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int aiStack_18 [3];
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6d925;
  aiStack_18[2] = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(aiStack_18 + 2);
  aiStack_18[1] = 0;
  piVar1 = (int *)(param_1 + 0xc);
  uStack_8 = 0;
  if (aiStack_18 + 1 != piVar1) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2,uVar3);
    }
    *piVar1 = 0;
  }
  aiStack_18[0] = 0;
  piVar1 = (int *)(param_1 + 8);
  uStack_8 = 2;
  if (aiStack_18 != piVar1) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *piVar1 = 0;
    *unaff_FS_OFFSET = aiStack_18[2];
    return;
  }
  *unaff_FS_OFFSET = aiStack_18[2];
  return;
}
