  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc5b30(undefined4 param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  BOOL BVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  longlong lVar13;
  int *piVar14;
  uint uStack_54;
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 uStack_1d;
  int *piStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b175;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_54;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_54;
  func_0x00dcb020(&piStack_1c,param_1);
  piVar12 = piStack_1c;
  uStack_8._0_1_ = 1;
  if ((param_3 < 1) || (param_4 == (longlong *)0x0)) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_1c,0xa004
                     );
    }
    if ((DAT_013e01b0 != '\0') && (BVar11 = IsDebuggerPresent(), BVar11 != 0)) {
      DebugBreak();
    }
    if (piVar12 == (int *)0x0) {
      piVar12 = &DAT_013e01ac;
    }
    else {
      piVar12 = piVar12 + 0x692b;
    }
    LOCK();
    *piVar12 = 0xa004;
    UNLOCK();
  }
  else {
    if ((piStack_1c != (int *)0x0) && (*(char *)((int)piStack_1c + 0x11) != '\x01')) {
      func_0x005797f0(piStack_1c + 0x6910);
      piVar12 = piStack_1c;
      uStack_8._0_1_ = 3;
      if (param_2 < 0x1601) {
        if (param_2 == 0x1600) {
          do {
            do {
            } while ((piStack_1c[0x690c] & 1U) != 0);
            iStack_24 = piStack_1c[0x3f];
            iVar8 = piStack_1c[0x3e];
          } while (piStack_1c[0x690c] != piStack_1c[0x690c]);
          piVar14 = (int *)0x0;
          lVar13 = func_0x00e87db0((ulonglong)(uint)piStack_1c[0x3c] * 1000000000,piStack_1c[5],0);
          *param_4 = lVar13 + CONCAT44(iStack_24,iVar8);
        }
        else if (param_2 == 0x1002) {
          iVar8 = func_0x00dc7220(piStack_1c);
          *(int *)param_4 = iVar8;
          *(int *)((int)param_4 + 4) = iVar8 >> 0x1f;
          piVar14 = piStack_1c;
        }
        else {
          if (param_2 != 0x1003) goto LAB_00dc5f17;
          piVar14 = piStack_1c;
          iVar8 = func_0x00dc7220(piStack_1c);
          if (param_3 < iVar8) {
            func_0x00dcb0d0();
          }
          else {
            *(undefined4 *)param_4 = 0x1007;
            *(undefined4 *)((int)param_4 + 4) = 0;
            *(int *)(param_4 + 1) = piVar12[5];
            *(undefined4 *)((int)param_4 + 0xc) = 0;
            cVar1 = *(char *)((int)piVar12 + 0x11);
            *(undefined4 *)((int)param_4 + 0x14) = 0;
            if (cVar1 == '\x02') {
              *(undefined4 *)(param_4 + 2) = 0x1990;
              iVar8 = func_0x00dc75d0((char)piVar12[8]);
              *(int *)(param_4 + 3) = iVar8;
              *(int *)((int)param_4 + 0x1c) = iVar8 >> 0x1f;
              *(undefined4 *)(param_4 + 4) = 0x1991;
              *(undefined4 *)((int)param_4 + 0x24) = 0;
              iVar8 = func_0x00dc76c0(*(undefined1 *)((int)piStack_1c + 0x21));
              iStack_24 = 6;
              *(int *)(param_4 + 5) = iVar8;
              *(int *)((int)param_4 + 0x2c) = iVar8 >> 0x1f;
              if ((char)piStack_1c[8] == '\b') {
                *(undefined4 *)(param_4 + 6) = 0x1997;
                *(undefined4 *)((int)param_4 + 0x34) = 0;
                iVar8 = func_0x00dc7480(*(undefined1 *)((int)piStack_1c + 0x2d));
                *(int *)(param_4 + 7) = iVar8;
                *(int *)((int)param_4 + 0x3c) = iVar8 >> 0x1f;
                *(undefined4 *)(param_4 + 8) = 0x1998;
                *(undefined4 *)((int)param_4 + 0x44) = 0;
                iVar8 = func_0x00dc7520(*(undefined1 *)((int)piStack_1c + 0x2e));
                iStack_24 = 0xc;
                *(int *)(param_4 + 9) = iVar8;
                *(int *)((int)param_4 + 0x4c) = iVar8 >> 0x1f;
                *(undefined4 *)(param_4 + 10) = 0x1999;
                *(undefined4 *)((int)param_4 + 0x54) = 0;
                *(int *)(param_4 + 0xb) = piStack_1c[9];
                *(undefined4 *)((int)param_4 + 0x5c) = 0;
              }
            }
            else {
              *(undefined4 *)(param_4 + 2) = 0x1008;
              uVar2 = piVar12[5];
              iStack_24 = 6;
              uVar3 = piVar12[6];
              *(undefined4 *)((int)param_4 + 0x1c) = 0;
              *(uint *)(param_4 + 3) = uVar2 / uVar3;
              *(undefined4 *)(param_4 + 4) = 0x1009;
              *(undefined4 *)((int)param_4 + 0x24) = 0;
              *(undefined4 *)(param_4 + 5) = 0;
              *(undefined4 *)((int)param_4 + 0x2c) = 0;
              piStack_1c = piVar12;
            }
            *(undefined4 *)(param_4 + iStack_24) = 0x1010;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 1) * 4) = 0;
            *(int *)(param_4 + iStack_24 + 1) = piStack_1c[0x691d];
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 3) * 4) = 0;
            *(undefined4 *)(param_4 + iStack_24 + 2) = 0x1011;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 5) * 4) = 0;
            *(int *)(param_4 + iStack_24 + 3) = piStack_1c[0x691e];
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 7) * 4) = 0;
            *(undefined4 *)(param_4 + iStack_24 + 4) = 0x20003;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 9) * 4) = 0;
            *(int *)(param_4 + iStack_24 + 5) = piStack_1c[0x13];
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 0xb) * 4) = 0;
            *(undefined4 *)(param_4 + iStack_24 + 6) = 0x1992;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 0xd) * 4) = 0;
            iVar8 = piStack_1c[0x6902];
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 0xf) * 4) = 0;
            *(uint *)(param_4 + iStack_24 + 7) = (uint)(iVar8 != 0);
            *(undefined4 *)(param_4 + iStack_24 + 8) = 0x1993;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 0x11) * 4) = 0;
            iVar8 = piStack_1c[0x692a];
            *(int *)(param_4 + iStack_24 + 9) = iVar8;
            *(int *)((int)param_4 + (iStack_24 * 2 + 0x13) * 4) = iVar8 >> 0x1f;
            *(undefined4 *)(param_4 + iStack_24 + 10) = 0x199a;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 0x15) * 4) = 0;
            iVar8 = piStack_1c[0x6908];
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 0x17) * 4) = 0;
            *(uint *)(param_4 + iStack_24 + 0xb) = (uint)(iVar8 != 0);
            iStack_24 = iStack_24 + 0xc;
            puVar9 = (undefined4 *)
                     func_0x00dc77a0(auStack_44,
                                     -(uint)(piStack_1c != (int *)0x0) & (uint)(piStack_1c + 4),
                                     piStack_1c[0x691c]);
            iVar8 = iStack_24;
            uVar4 = *puVar9;
            uVar5 = puVar9[1];
            uVar6 = puVar9[2];
            uVar7 = puVar9[3];
            *(undefined4 *)(param_4 + iStack_24) = 0x1600;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 1) * 4) = 0;
            *(undefined4 *)(param_4 + iStack_24 + 1) = uVar4;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 3) * 4) = uVar5;
            *(undefined4 *)(param_4 + iStack_24 + 2) = 0x1601;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 5) * 4) = 0;
            *(undefined4 *)(param_4 + iStack_24 + 3) = uVar6;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 7) * 4) = uVar7;
            *(undefined4 *)(param_4 + iStack_24 + 4) = 0x19ac;
            *(undefined4 *)((int)param_4 + (iStack_24 * 2 + 9) * 4) = 0;
            iVar10 = func_0x00e05e00();
            *(int *)(param_4 + iVar8 + 5) = iVar10;
            *(int *)((int)param_4 + (iVar8 * 2 + 0xb) * 4) = iVar10 >> 0x1f;
            *(undefined4 *)(param_4 + iVar8 + 6) = 0;
            *(undefined4 *)((int)param_4 + (iVar8 * 2 + 0xd) * 4) = 0;
          }
        }
      }
      else if (param_2 == 0x1601) {
        piVar14 = (int *)piStack_1c[0x691c];
        iVar8 = func_0x00dc77a0();
        uVar4 = *(undefined4 *)(iVar8 + 0xc);
        *(undefined4 *)param_4 = *(undefined4 *)(iVar8 + 8);
        *(undefined4 *)((int)param_4 + 4) = uVar4;
      }
      else if (param_2 == 0x1602) {
        if (param_3 < 2) {
          piVar14 = (int *)0xa004;
          func_0x00dcb0d0(piStack_1c,0xa004);
        }
        else {
          piVar14 = (int *)piStack_1c[0x691c];
          puVar9 = (undefined4 *)func_0x00dc77a0();
          uVar4 = puVar9[1];
          uVar5 = puVar9[2];
          uVar6 = puVar9[3];
          *(undefined4 *)param_4 = *puVar9;
          *(undefined4 *)((int)param_4 + 4) = uVar4;
          *(undefined4 *)(param_4 + 1) = uVar5;
          *(undefined4 *)((int)param_4 + 0xc) = uVar6;
        }
      }
      else {
LAB_00dc5f17:
        piVar14 = (int *)&uStack_1d;
        func_0x00dc6b10(param_3,piVar14);
        uStack_8._0_1_ = 4;
        iVar8 = func_0x00dc7840(piStack_1c,param_2,iStack_30,
                                iStack_30 + (iStack_2c - iStack_30 >> 2) * 4);
        if (iVar8 != 0) {
          func_0x00dc68e0(iStack_30,iVar8,param_4);
        }
        func_0x00dbbf60();
      }
      func_0x00e730b2(uStack_34,piVar14);
      func_0x00dc6cd0();
      goto LAB_00dc601b;
    }
    func_0x00dc6b10(param_3,&uStack_1d);
    uStack_8._0_1_ = 2;
    iVar8 = func_0x00dc7840(piStack_1c,param_2,iStack_30,
                            iStack_30 + (iStack_2c - iStack_30 >> 2) * 4);
    if (iVar8 != 0) {
      func_0x00dc68e0(iStack_30,iVar8,param_4);
    }
    if (iStack_30 != 0) {
      func_0x00ddbb20(iStack_30);
      iStack_30 = 0;
      iStack_2c = 0;
      uStack_28 = 0;
    }
  }
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar8 = *piStack_1c;
    *piStack_1c = *piStack_1c + -1;
    UNLOCK();
    if ((iVar8 == 1) && (piStack_1c != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_1c);
    }
  }
LAB_00dc601b:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Catch_All_00dc6136(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc6140(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  BOOL BVar7;
  undefined4 uVar8;
  int *piVar9;
  int *unaff_ESI;
  int *unaff_FS_OFFSET;
  uint uStack_40;
  int *piStack_1c;
  undefined4 *puStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar9 = param_2;
  puStack_c = &DAT_00f6b435;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_40;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8._0_1_ = 0;
  uStack_8._1_3_ = 0;
  puVar4 = &uStack_40;
  if (param_2 != (int *)0x0) {
    puVar4 = &uStack_40;
    if ((char)*param_2 != '\0') {
      iVar5 = func_0x00e0aef0(param_2,"OpenAL Soft");
      puVar4 = (uint *)puStack_14;
      if (iVar5 != 0) goto LAB_00dc6192;
    }
    puStack_14 = (undefined1 *)puVar4;
    piVar9 = (int *)0x0;
    puVar4 = (uint *)puStack_14;
  }
LAB_00dc6192:
  puStack_14 = (undefined1 *)puVar4;
  iVar5 = func_0x00e7307f(&DAT_012ba570);
  if (iVar5 == 0) {
    if (DAT_012ba59c == 0x7fffffff) goto LAB_00dc6528;
    uStack_8._0_1_ = 1;
    func_0x00dcb020(&param_2,param_1);
    piVar6 = param_2;
    uStack_8._0_1_ = 2;
    uVar3 = (undefined1)uStack_8;
    uStack_8._0_1_ = 2;
    if ((param_2 == (int *)0x0) || (*(char *)((int)param_2 + 0x11) != '\0')) {
      uStack_8._0_1_ = uVar3;
      func_0x00e730b2(&DAT_012ba570);
      piVar9 = param_2;
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",param_2,0xa001)
        ;
      }
      if (DAT_013e01b0 != '\0') {
        BVar7 = IsDebuggerPresent();
        if (BVar7 != 0) {
          DebugBreak();
        }
      }
      piVar6 = param_2;
      if (piVar9 == (int *)0x0) {
        piVar9 = &DAT_013e01ac;
      }
      else {
        piVar9 = piVar9 + 0x692b;
      }
      LOCK();
      *piVar9 = 0xa001;
      UNLOCK();
      if (param_2 != (int *)0x0) {
        LOCK();
        iVar5 = *param_2;
        *param_2 = *param_2 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (param_2 != (int *)0x0)) {
          func_0x00e05820();
          func_0x00ddbb20(piVar6);
          *unaff_FS_OFFSET = iStack_10;
          return 0;
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    unaff_ESI = param_2 + 0x6910;
    iVar5 = func_0x00e7307f(unaff_ESI);
    if (iVar5 == 0) {
      iVar5 = piVar6[0x691b];
      if (iVar5 != 0x7fffffff) {
        uStack_8._0_1_ = 3;
        if (((uint)param_2[0x12] >> 4 & 1) != 0) {
          (**(code **)(*(int *)param_2[0x691c] + 0xc))();
          param_2[0x12] = param_2[0x12] & 0xffffffef;
        }
        puStack_18 = (undefined4 *)0x0;
        uStack_8 = CONCAT31(uStack_8._1_3_,5);
        piVar6 = (int *)(**(code **)(*DAT_013e01a4 + 0xc))
                                  (&piStack_1c,-(uint)(param_2 != (int *)0x0) & (uint)(param_2 + 4),
                                   0);
        puVar1 = (undefined4 *)*piVar6;
        *piVar6 = 0;
        puStack_18 = puVar1;
        if (piStack_1c != (int *)0x0) {
          (**(code **)(*piStack_1c + 0x1c))(1);
        }
        (**(code **)*puVar1)(piVar9);
        uStack_8 = 4;
        func_0x00e730b2(&DAT_012ba570);
        puStack_18 = (undefined4 *)0x0;
        piVar9 = (int *)param_2[0x691c];
        param_2[0x691c] = (int)puVar1;
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0x1c))(1);
        }
        if (2 < DAT_012ba4e8) {
          piVar9 = param_2 + 0xc;
          if (0xf < (uint)param_2[0x11]) {
            piVar9 = (int *)*piVar9;
          }
          func_0x00ddf410(3,DAT_013e0188,"Reopened device %p, \"%s\"\n",param_2,piVar9);
        }
        func_0x00dc8520(param_2,param_3);
        func_0x00e730b2(unaff_ESI);
        piVar9 = param_2;
        if (param_2 != (int *)0x0) {
          LOCK();
          iVar5 = *param_2;
          *param_2 = *param_2 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (param_2 != (int *)0x0)) {
            func_0x00e05820();
            func_0x00ddbb20(piVar9);
          }
        }
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      goto LAB_00dc6540;
    }
  }
  else {
    func_0x00e7304a(5);
LAB_00dc6528:
    DAT_012ba59c = 0x7ffffffe;
    func_0x00e7304a(6);
  }
  iVar5 = func_0x00e7304a(5);
LAB_00dc6540:
  unaff_ESI[0xb] = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return uVar8;
}



undefined * Catch_00dc6340(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  func_0x00e730b2(&DAT_012ba570);
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x1c))(1);
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (1 < DAT_012ba4e8) {
    piVar3 = (int *)(iVar2 + 0xc);
    if (0xf < *(uint *)(iVar2 + 0x20)) {
      piVar3 = (int *)*piVar3;
    }
    func_0x00ddf410(2,DAT_013e0188,"Failed to reopen playback device: %s\n",piVar3);
  }
  func_0x00dcb0d0(*(undefined4 *)(unaff_EBP + 0xc),(*(int *)(iVar2 + 0x24) == 2) + 0xa004);
  if (((*(char *)(*(int *)(unaff_EBP + 0xc) + 0x10) != '\0') &&
      ((*(uint *)(*(int *)(unaff_EBP + 0xc) + 0x48) >> 3 & 1) == 0)) &&
     (**(int **)(*(int *)(unaff_EBP + 0xc) + 0x1a434) != 0)) {
    *(undefined1 *)(unaff_EBP + -4) = 7;
    (**(code **)(**(int **)(*(int *)(unaff_EBP + 0xc) + 0x1a470) + 8))();
    puVar1 = (uint *)(*(int *)(unaff_EBP + 0xc) + 0x48);
    *puVar1 = *puVar1 | 0x10;
  }
  return &DAT_00dc6445;
}



undefined4 Catch_00dc63f2(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (0 < DAT_012ba4e8) {
    piVar2 = (int *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      piVar2 = (int *)*piVar2;
    }
    func_0x00ddf410(1,DAT_013e0188,&DAT_0102b618,piVar2);
  }
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00e04820(*(int *)(unaff_EBP + 0xc) + 0x10,&DAT_0112e274,piVar2);
  return 0xdc63ec;
}



void Catch_All_00dc651c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00dc6bc0(undefined4 *param_1,int param_2)

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
  *param_1 = al::backend_exception::vftable;
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00dc6c50(undefined4 *param_1,int param_2)

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
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00dc7040(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x128) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x10c);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}



void __fastcall FUN_00dc70b0(int param_1)

{
  if (*(int *)(param_1 + 0x200) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0x200));
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  if (*(int *)(param_1 + 500) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 500));
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x174) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x174))(1);
  }
  return;
}



undefined4 __thiscall FUN_00dc72e0(undefined4 param_1,byte param_2)

{
  FUN_00e0c770();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 __thiscall FUN_00dc7300(undefined4 param_1,byte param_2)

{
  func_0x00e05e80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x24);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00dc9927)
// WARNING: Removing unreachable block (ram,0x00dc9935)
// WARNING: Removing unreachable block (ram,0x00dc9937)
// WARNING: Removing unreachable block (ram,0x00dc996f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_00dc87d0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  double *pdVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  double *pdVar12;
  undefined1 auVar13 [4];
  uint uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined4 extraout_ECX;
  undefined3 uVar22;
  undefined3 extraout_var;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  double *pdVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  uint uVar23;
  int unaff_EBX;
  undefined4 unaff_EBP;
  undefined *puVar24;
  char *pcVar25;
  undefined2 *puVar26;
  int iVar27;
  undefined4 *puVar28;
  double *pdVar29;
  int *unaff_FS_OFFSET;
  bool bVar30;
  float10 fVar31;
  float10 extraout_ST0;
  float fVar32;
  double dVar33;
  undefined8 uVar34;
  undefined4 unaff_retaddr;
  uint uStack_1e8;
  undefined1 auStack_1d8 [16];
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined1 auStack_1bc [16];
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  char cStack_dc;
  double *pdStack_d8;
  char acStack_d4 [28];
  undefined8 uStack_b8;
  undefined2 uStack_ae;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined8 uStack_a8;
  double *pdStack_a0;
  uint *puStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined1 auStack_90 [4];
  double *pdStack_8c;
  int *piStack_88;
  double *pdStack_84;
  double *pdStack_80;
  uint uStack_7c;
  undefined2 uStack_78;
  double *pdStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6c;
  double *pdStack_68;
  int *piStack_64;
  char cStack_5e;
  undefined1 uStack_5d;
  double *pdStack_5c;
  double *pdStack_58;
  double *pdStack_54;
  undefined2 uStack_50;
  double *pdStack_4c;
  undefined2 uStack_48;
  undefined2 auStack_42 [21];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  puStack_c = &DAT_00f6ad38;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1e8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_1e8;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pdStack_4c = param_1;
  pdStack_d8 = param_1;
  pdStack_74 = param_2;
  uStack_18 = uStack_1e8;
  if (((param_2 == (double *)0x0) || (*(int *)param_2 == 0)) &&
     (*(char *)((int)param_1 + 0x11) == '\x02')) {
    puStack_14 = (undefined1 *)&uStack_1e8;
    if (1 < DAT_012ba4e8) {
      puStack_14 = (undefined1 *)&uStack_1e8;
      func_0x00ddf410();
    }
    goto LAB_00dcaddb;
  }
  pdStack_58 = *(double **)((int)param_1 + 0x1a474);
  pdStack_5c = *(double **)(param_1 + 0x348f);
  pdStack_68 = *(double **)((int)param_1 + 0x4c);
  piStack_64 = (int *)((uint)piStack_64 & 0xffff0000);
  uStack_94 = uStack_94 & 0xffff0000;
  uStack_a8 = 0;
  uStack_50 = 0;
  uStack_78 = uStack_78 & 0xff;
  uStack_5d = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  puStack_9c = (uint *)0x3c0;
  pdStack_a0 = (double *)0xb40;
  pdStack_84 = (double *)0xffffffff;
  piStack_88 = (int *)0x0;
  if (*(char *)((int)param_1 + 0x11) == '\x02') {
    uStack_98 = 0;
    uStack_a8 = 0;
    puStack_14 = (undefined1 *)&uStack_1e8;
  }
  else {
    func_0x00dfc5c0(auStack_90);
    if (auStack_90[0] == '\0') {
      puVar8 = (uint *)0x3c0;
      uStack_98 = (uint)uStack_a8._4_4_;
      uStack_a8 = CONCAT44((undefined4)uStack_a8,(undefined4)uStack_a8);
    }
    else {
      uStack_b8 = (double)CONCAT71(uStack_b8._1_7_,1);
      pdVar7 = pdStack_8c;
      if (pdStack_8c < 8000) {
        pdVar7 = (double *)0x1f40;
      }
      uStack_98 = 0x2ee00;
      if (pdVar7 < 0x2ee00) {
        uStack_98 = (uint)pdVar7;
      }
      uStack_a8 = CONCAT44((undefined4)uStack_b8,(undefined4)uStack_a8);
      puVar8 = (uint *)func_0x008abe00();
      puStack_9c = puVar8;
    }
    func_0x00dfc5c0(auStack_90);
    param_1 = pdStack_4c;
    if (auStack_90[0] != '\0') {
      pdVar7 = pdStack_8c;
      if (pdStack_8c < (uint *)0x40) {
        pdVar7 = (double *)0x40;
      }
      puVar8 = (uint *)0x2000;
      puStack_9c = (uint *)0x2000;
      if (pdVar7 < (uint *)0x2000) {
        puVar8 = (uint *)pdVar7;
        puStack_9c = (uint *)pdVar7;
      }
    }
    func_0x00dfc5c0(auStack_90);
    if (auStack_90[0] == '\0') {
      pdStack_a0 = (double *)((int)puVar8 * 3);
    }
    else {
      pdVar7 = pdStack_8c;
      if (pdStack_8c < 2) {
        pdVar7 = (double *)0x2;
      }
      uVar19 = 0x10;
      if (pdVar7 < 0x10) {
        uVar19 = (uint)pdVar7;
      }
      pdStack_a0 = (double *)(uVar19 * (int)puVar8);
    }
    func_0x00dfc540(acStack_d4);
    uStack_8 = 0;
    if (acStack_d4[0] != '\0') {
      puVar24 = &DAT_010d57b8;
      do {
        iVar9 = func_0x00e0aef0();
        if (iVar9 == 0) break;
        puVar24 = puVar24 + 9;
      } while (puVar24 != &UNK_010d57f7);
      param_1 = pdStack_4c;
      if (puVar24 == &UNK_010d57f7) {
        if (0 < DAT_012ba4e8) {
          func_0x00ddf410(1);
          param_1 = pdStack_4c;
        }
      }
      else {
        uStack_5d = puVar24[8];
        uStack_78 = CONCAT11(1,(undefined1)uStack_78);
      }
    }
    uStack_8 = 0xffffffff;
    if (acStack_d4[0] != '\0') {
      func_0x00dc0110();
    }
    func_0x00dfc540(acStack_d4);
    uStack_8 = 1;
    if (acStack_d4[0] != '\0') {
      pcVar25 = "mono";
      do {
        iVar9 = func_0x00e0aef0();
        if (iVar9 == 0) break;
        pcVar25 = pcVar25 + 0x12;
      } while (pcVar25 != "Missing attributes for loopback device\n");
      param_1 = pdStack_4c;
      if (pcVar25 == "Missing attributes for loopback device\n") {
        if (0 < DAT_012ba4e8) {
          func_0x00ddf410(1);
          param_1 = pdStack_4c;
        }
      }
      else {
        piStack_88 = (int *)(uint)(byte)pcVar25[0x11];
        uStack_50 = CONCAT11(pcVar25[0x10],1);
      }
    }
    uStack_8 = 0xffffffff;
    if (acStack_d4[0] != '\0') {
      func_0x00dc0110();
    }
    func_0x00dfc540(acStack_d4);
    uStack_8 = 2;
    if (acStack_d4[0] != '\0') {
      iVar9 = func_0x00e0aef0();
      if (iVar9 == 0) {
        uStack_6c = 1;
        uStack_48 = 1;
      }
      else {
        iVar9 = func_0x00e0aef0();
        if (iVar9 == 0) {
          uStack_6c = 0x101;
          uStack_48 = 1;
        }
        else {
          iVar9 = func_0x00e0aef0();
          if ((iVar9 == 0) || (iVar9 = func_0x00e0aef0(), iVar9 == 0)) {
            uStack_6c = 0x101;
            uStack_48 = 0x101;
          }
          else {
            iVar9 = func_0x00e0aef0();
            if (iVar9 != 0) {
              param_1 = pdStack_4c;
              if (0 < DAT_012ba4e8) {
                func_0x00ddf410(1);
                param_1 = pdStack_4c;
              }
              goto LAB_00dc8cc5;
            }
            uStack_6c = 0x101;
            uStack_48 = 0x201;
          }
        }
      }
      uStack_70 = uStack_48;
      param_1 = pdStack_4c;
    }
LAB_00dc8cc5:
    uStack_8 = 0xffffffff;
    if (acStack_d4[0] != '\0') {
      func_0x00dc0110();
    }
    func_0x00dfc540(acStack_d4);
    uStack_8 = 3;
    if (acStack_d4[0] != '\0') {
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410();
      }
      iVar9 = func_0x00e0aef0();
      if (iVar9 == 0) {
        uStack_48 = 0x201;
        piStack_64 = (int *)CONCAT22(piStack_64._2_2_,0x201);
        param_1 = pdStack_4c;
      }
      else {
        iVar9 = func_0x00e0aef0();
        if (iVar9 == 0) {
          uStack_48 = 1;
          piStack_64 = (int *)CONCAT22(piStack_64._2_2_,1);
          param_1 = pdStack_4c;
        }
        else {
          iVar9 = func_0x00e0aef0();
          param_1 = pdStack_4c;
          if ((iVar9 != 0) && (0 < DAT_012ba4e8)) {
            func_0x00ddf410(1);
            param_1 = pdStack_4c;
          }
        }
      }
    }
    uStack_8._0_1_ = 0xff;
    uStack_8._1_3_ = 0xffffff;
    if (acStack_d4[0] != '\0') {
      func_0x00dc0110();
    }
  }
  pdVar7 = pdStack_74;
  func_0x00dfc540(acStack_d4);
  uStack_8 = 4;
  if (acStack_d4[0] != '\0') {
    iVar9 = func_0x00e0aef0();
    if ((iVar9 == 0) || (iVar9 = func_0x00e0aef0(), iVar9 == 0)) {
      uStack_48 = 1;
    }
    else {
      iVar9 = func_0x00e0aef0();
      if (iVar9 == 0) {
        uStack_48 = 0x101;
      }
      else {
        iVar9 = func_0x00e0aef0();
        if (iVar9 != 0) {
          param_1 = pdStack_4c;
          if (0 < DAT_012ba4e8) {
            func_0x00ddf410(1);
            param_1 = pdStack_4c;
          }
          goto LAB_00dc8edb;
        }
        uStack_48 = 0x201;
      }
    }
    piStack_64 = (int *)CONCAT22(piStack_64._2_2_,uStack_48);
    param_1 = pdStack_4c;
  }
LAB_00dc8edb:
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  if (acStack_d4[0] != '\0') {
    func_0x00dc0110();
  }
  if ((pdVar7 != (double *)0x0) && (iVar9 = *(int *)pdVar7, iVar9 != 0)) {
    cStack_5e = '\0';
    iVar27 = 0x19ad;
    uStack_48 = uStack_48 & 0xff;
    uStack_7c = 0;
    pdStack_54 = (double *)0x0;
    pdVar7 = pdStack_74;
    do {
      if (iVar9 < 0x1991) {
        if (iVar9 == 0x1990) {
          if (2 < DAT_012ba4e8) {
            func_0x00ddf410(3,DAT_013e0188);
          }
          if (*(char *)((int)pdStack_4c + 0x11) == '\x02') {
            puVar11 = (undefined2 *)func_0x00dc7320();
            uStack_50 = *puVar11;
          }
        }
        else if (iVar9 == 0x1007) {
          if (2 < DAT_012ba4e8) {
            func_0x00ddf410(3,DAT_013e0188);
          }
          uStack_7c = *(uint *)((int)pdVar7 + 4);
        }
        else if (iVar9 == 0x1010) {
          if (2 < DAT_012ba4e8) {
            func_0x00ddf410(3,DAT_013e0188);
          }
          pdStack_58 = (double *)0x0;
          if (*(uint *)((int)pdVar7 + 4) < 0x80000000) {
            pdStack_58 = *(double **)((int)pdVar7 + 4);
          }
        }
        else {
          if (iVar9 != 0x1011) goto LAB_00dc93d8;
          if (2 < DAT_012ba4e8) {
            func_0x00ddf410(3,DAT_013e0188);
          }
          pdStack_5c = (double *)0x0;
          if (*(uint *)((int)pdVar7 + 4) < 0x80000000) {
            pdStack_5c = *(double **)((int)pdVar7 + 4);
          }
        }
      }
      else if (iVar9 < 0x19ad) {
        if (iVar9 == 0x19ac) {
          if (2 < DAT_012ba4e8) {
            func_0x00ddf410(3,DAT_013e0188);
          }
          iVar27 = *(int *)((int)pdVar7 + 4);
        }
        else {
          switch(iVar9) {
          case 0x1991:
            if (2 < DAT_012ba4e8) {
              func_0x00ddf410(3,DAT_013e0188);
            }
            if (*(char *)((int)pdStack_4c + 0x11) == '\x02') {
              puVar11 = (undefined2 *)func_0x00dc73d0();
              uStack_78._1_1_ = (char)((ushort)*puVar11 >> 8);
              uStack_5d = uStack_78._1_1_;
              uStack_78._0_1_ = (undefined1)*puVar11;
              uStack_78 = CONCAT11((undefined1)uStack_78,(undefined1)uStack_78);
            }
            break;
          case 0x1992:
            if (2 < DAT_012ba4e8) {
              func_0x00ddf410(3,DAT_013e0188);
            }
            iVar9 = *(int *)((int)pdVar7 + 4);
            if (iVar9 == 0) {
              uStack_aa = 1;
              uStack_48 = 1;
              cStack_5e = '\x01';
            }
            else if (iVar9 == 1) {
              uStack_ac = 0x101;
              uStack_48 = 0x101;
              cStack_5e = '\x01';
            }
            else if (iVar9 == 2) {
              cStack_5e = '\0';
            }
            break;
          default:
            goto LAB_00dc93d8;
          case 0x1996:
            if (2 < DAT_012ba4e8) {
              func_0x00ddf410(3,DAT_013e0188);
            }
            pdStack_84 = *(double **)((int)pdVar7 + 4);
            break;
          case 0x1997:
            if (2 < DAT_012ba4e8) {
              func_0x00ddf410(3,DAT_013e0188);
            }
            if (*(char *)((int)pdStack_4c + 0x11) == '\x02') {
              if (*(int *)((int)pdVar7 + 4) == 0) {
                uStack_6c = 1;
              }
              else if (*(int *)((int)pdVar7 + 4) == 1) {
                uStack_6c = 0x101;
              }
              else {
                if (1 < DAT_012ba4e8) {
                  func_0x00ddf410(2);
                }
                uStack_6c = 0;
              }
            }
            break;
          case 0x1998:
            if (2 < DAT_012ba4e8) {
              func_0x00ddf410(3,DAT_013e0188);
            }
            if (*(char *)((int)pdStack_4c + 0x11) == '\x02') {
              iVar9 = *(int *)((int)pdVar7 + 4);
              if (iVar9 == 0) {
                uStack_70 = 1;
              }
              else if (iVar9 == 1) {
                uStack_70 = 0x101;
              }
              else if (iVar9 == 2) {
                uStack_70 = 0x201;
              }
              else {
                if (1 < DAT_012ba4e8) {
                  func_0x00ddf410(2);
                }
                uStack_70 = 0;
              }
            }
            break;
          case 0x1999:
            if (2 < DAT_012ba4e8) {
              func_0x00ddf410(3,DAT_013e0188);
            }
            if (*(char *)((int)pdStack_4c + 0x11) == '\x02') {
              piStack_88 = *(int **)((int)pdVar7 + 4);
            }
            break;
          case 0x199a:
            if (2 < DAT_012ba4e8) {
              func_0x00ddf410(3,DAT_013e0188);
            }
            iVar9 = *(int *)((int)pdVar7 + 4);
            if (iVar9 == 0) {
              uStack_ae = 1;
              uStack_94 = CONCAT22(uStack_94._2_2_,1);
            }
            else if (iVar9 == 1) {
              auStack_42[0] = 0x101;
              uStack_94 = CONCAT22(uStack_94._2_2_,0x101);
            }
            else if (iVar9 == 2) {
              uStack_94 = uStack_94 & 0xffffff00;
            }
          }
        }
      }
      else if (iVar9 == 0x20003) {
        if (2 < DAT_012ba4e8) {
          func_0x00ddf410(3,DAT_013e0188);
        }
        pdStack_68 = *(double **)((int)pdVar7 + 4);
        if (pdStack_68 < (double *)0x80000000) {
          if (&DAT_00000006 < pdStack_68) {
            pdStack_68 = (double *)&DAT_00000006;
          }
        }
        else {
          pdStack_68 = (double *)0x0;
        }
      }
      else {
LAB_00dc93d8:
        if (2 < DAT_012ba4e8) {
          func_0x00ddf410(3,DAT_013e0188,"0x%04X = %d (0x%x)\n");
        }
      }
      param_1 = pdStack_4c;
      pdStack_54 = (double *)((int)pdStack_54 + 2);
      pdVar7 = (double *)((int)pdStack_74 + (int)pdStack_54 * 4);
      iVar9 = *(int *)pdVar7;
    } while (iVar9 != 0);
    cVar4 = (char)((uint)piStack_64 >> 8);
    if (*(char *)((int)pdStack_4c + 0x11) == '\x02') {
      if ((((char)uStack_50 == '\0') || (uStack_78._1_1_ == '\0')) || (0x2cec0 < uStack_7c - 8000))
      goto LAB_00dcaddb;
      if (uStack_50._1_1_ == '\b') {
        if ((((char)uStack_6c == '\0') || ((char)uStack_70 == '\0')) || (2 < (int)piStack_88 - 1U))
        goto LAB_00dcaddb;
      }
      else if (uStack_50._1_1_ == '\x01') {
        if (cStack_5e != '\0') {
          if (uStack_48._1_1_ == '\0') {
            if (((char)piStack_64 != '\0') && (cVar4 != '\x02')) goto LAB_00dc94f0;
            auStack_42[0] = 1;
          }
          else {
            auStack_42[0] = 0x201;
          }
          piStack_64 = (int *)CONCAT22(piStack_64._2_2_,auStack_42[0]);
        }
LAB_00dc94f0:
        if (iVar27 == 0x19ae) {
          auStack_42[0] = 1;
        }
        else if (iVar27 == 0x19af) {
          auStack_42[0] = 0x101;
        }
        else {
          if (iVar27 != 0x19b2) goto LAB_00dc9526;
          auStack_42[0] = 0x201;
        }
        piStack_64 = (int *)CONCAT22(piStack_64._2_2_,auStack_42[0]);
      }
LAB_00dc9526:
      uStack_b8 = (double)CONCAT71(uStack_b8._1_7_,1);
      uStack_98 = uStack_7c;
      uStack_a8 = CONCAT44((undefined4)uStack_b8,(undefined4)uStack_a8);
    }
    else {
      if (cStack_5e != '\0') {
        if (uStack_48._1_1_ == '\0') {
          if (((char)piStack_64 != '\0') && (cVar4 != '\x02')) goto LAB_00dc9579;
          auStack_42[0] = 1;
        }
        else {
          auStack_42[0] = 0x201;
        }
        piStack_64 = (int *)CONCAT22(piStack_64._2_2_,auStack_42[0]);
      }
LAB_00dc9579:
      if (iVar27 != 0x19ad) {
        if (iVar27 < 0x19af) {
          if (iVar27 != 0x19ae) {
            switch(iVar27) {
            case 0x1500:
              auStack_42[0] = 1;
              uStack_50 = 1;
              break;
            case 0x1501:
              auStack_42[0] = 0x101;
              uStack_50 = 0x101;
              break;
            case 0x1503:
              auStack_42[0] = 0x201;
              uStack_50 = 0x201;
              break;
            case 0x1504:
              auStack_42[0] = 0x301;
              uStack_50 = 0x301;
              break;
            case 0x1505:
              auStack_42[0] = 0x401;
              uStack_50 = 0x401;
              break;
            case 0x1506:
              auStack_42[0] = 0x501;
              uStack_50 = 0x501;
            }
            goto LAB_00dc965c;
          }
          auStack_42[0] = 1;
        }
        else if (iVar27 == 0x19af) {
          auStack_42[0] = 0x101;
        }
        else {
          if (iVar27 != 0x19b2) goto LAB_00dc965c;
          auStack_42[0] = 0x201;
        }
        uStack_50 = 0x101;
        piStack_64 = (int *)CONCAT22(piStack_64._2_2_,auStack_42[0]);
      }
LAB_00dc965c:
      if (uStack_7c != 0) {
        uVar19 = 48000;
        if (uStack_a8._4_1_ != '\0') {
          uVar19 = uStack_98;
        }
        uVar23 = uStack_7c;
        if ((int)uStack_7c < 8000) {
          uVar23 = 8000;
        }
        uStack_98 = 0x2ee00;
        if ((int)uVar23 < 0x2ee00) {
          uStack_98 = uVar23;
        }
        uStack_b8 = (double)(int)uStack_98 /
                    ((double)(int)uVar19 + (double)(&DAT_011a2c10)[-((int)uVar19 >> 0x1f)]);
        puStack_9c = (uint *)func_0x008abe00();
        pdStack_a0 = (double *)func_0x008abe00();
        uStack_b8 = (double)CONCAT71(uStack_b8._1_7_,1);
        uStack_a8 = CONCAT44((undefined4)uStack_b8,(undefined4)uStack_a8);
      }
    }
    if ((*(uint *)(param_1 + 9) >> 4 & 1) != 0) {
      (**(code **)(**(int **)(param_1 + 0x348e) + 0xc))();
    }
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xffffffef;
    func_0x00dc8770();
  }
  if ((*(uint *)(param_1 + 9) >> 4 & 1) != 0) goto LAB_00dcaddb;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  memset(auStack_1bc + 4,0,0x98);
  pdVar7 = pdStack_4c;
  puVar15 = (undefined4 *)(auStack_1bc + 4);
  pdVar12 = param_1 + 0xb;
  for (iVar9 = 0x26; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pdVar12 = *puVar15;
    puVar15 = puVar15 + 1;
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  puVar15 = *(undefined4 **)(pdStack_4c + 0x3482);
  *(undefined4 *)(pdStack_4c + 0x3482) = 0;
  if (puVar15 != (undefined4 *)0x0) {
    (**(code **)*puVar15)();
  }
  iVar9 = *(int *)((int)pdVar7 + 0x1a414);
  *(undefined4 *)((int)pdVar7 + 0x1a414) = 0;
  if (iVar9 != 0) {
    if (*(int *)(iVar9 + 0x2008) != 0) {
      func_0x00ddbb20();
      *(undefined4 *)(iVar9 + 0x2008) = 0;
      *(undefined4 *)(iVar9 + 0x200c) = 0;
      *(undefined4 *)(iVar9 + 0x2010) = 0;
    }
    if (*(int *)(iVar9 + 0x2000) != 0) {
      func_0x00ddbb20();
    }
    func_0x00ddbb20();
  }
  iVar9 = *(int *)(pdVar7 + 0x3483);
  *(undefined4 *)(pdVar7 + 0x3483) = 0;
  if (iVar9 != 0) {
    func_0x00ddbb20();
  }
  iVar9 = *(int *)(pdVar7 + 0x3484);
  *(undefined4 *)((int)pdVar7 + 0x1a41c) = 0;
  *(undefined4 *)(pdVar7 + 0x3484) = 0;
  if (iVar9 != 0) {
    func_0x00e0b6b0();
    func_0x00ddbb20();
  }
  iVar9 = *(int *)((int)pdVar7 + 0x1a424);
  *(undefined4 *)((int)pdVar7 + 0x1a424) = 0;
  if (iVar9 != 0) {
    func_0x00ddbb20();
  }
  pdVar29 = pdStack_4c;
  for (pdVar12 = pdVar7 + 0x2fda; pdVar12 != pdVar7 + 0x345a; pdVar12 = pdVar12 + 1) {
    *(undefined4 *)pdVar12 = 0;
    *(undefined4 *)((int)pdVar12 + 4) = 0;
  }
  *(undefined4 *)((int)pdVar7 + 0x1a2dc) = 0;
  *(undefined4 *)(pdVar7 + 0x345c) = 0;
  puVar15 = (undefined4 *)((int)pdVar7 + 0x1a2dc);
  puVar28 = (undefined4 *)((int)pdVar7 + 0x1a2e4);
  for (iVar9 = 0x1e; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar28 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar28 = puVar28 + 1;
  }
  *(undefined4 *)((int)pdStack_4c + 0x1a35c) = 0;
  *(undefined4 *)(pdStack_4c + 0x346c) = 0;
  *(undefined4 *)((int)pdStack_4c + 0x1a364) = 0;
  *(undefined4 *)(pdStack_4c + 0x346d) = 0;
  *(undefined4 *)((int)pdStack_4c + 0x1a36c) = 0;
  *(undefined4 *)(pdStack_4c + 0x346e) = 0;
                    // WARNING: Read-only address (ram,0x010d6060) is written
  *(undefined4 *)((int)pdStack_4c + 0x1a374) = 0;
  *(undefined4 *)(pdStack_4c + 0x346f) = 0;
  *(undefined4 *)((int)pdStack_4c + 0x1a37c) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3470) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a384) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3471) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a38c) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3472) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a394) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3473) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a39c) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3474) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3a4) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3475) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3ac) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3476) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3b4) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3477) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3bc) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3478) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3c4) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x3479) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3cc) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x347a) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3d4) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x347b) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3dc) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x347c) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3e4) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x347d) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3ec) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x347e) = 0xffffffff;
  *(undefined4 *)((int)pdStack_4c + 0x1a3f4) = 0xffffffff;
  *(undefined4 *)(pdStack_4c + 0x347f) = 0xffffffff;
  _auStack_90 = 0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
                    // WARNING: Read-only address (ram,0x010d6060) is written
  *(undefined4 *)((int)pdStack_4c + 0x1a3fc) = 0;
  *(undefined4 *)(pdStack_4c + 0x3480) = 0;
  if (*(int *)(pdStack_4c + 0x345a) != *(int *)((int)pdStack_4c + 0x1a2d4)) {
    *(int *)((int)pdStack_4c + 0x1a2d4) = *(int *)(pdStack_4c + 0x345a);
  }
  func_0x00dcc390();
  uVar10 = func_0x00dc8770();
  *(undefined4 *)(pdVar29 + 0x20) = 0;
  *(undefined4 *)((int)pdVar29 + 0x104) = 0;
  *(undefined4 *)(pdVar29 + 0x3485) = 0;
  *(undefined4 *)((int)pdVar29 + 0x1a42c) = 0x56ce;
  *(undefined4 *)(pdVar29 + 0x3495) = 0;
  if (*(char *)((int)pdVar29 + 0x11) == '\x02') {
    pdVar12 = (double *)CONCAT31((int3)((uint)uVar10 >> 8),uStack_50._1_1_);
    *(uint *)((int)pdVar29 + 0x14) = uStack_98;
    *(char *)(pdVar29 + 4) = uStack_50._1_1_;
    *(undefined1 *)((int)pdVar29 + 0x21) = uStack_5d;
    if (uStack_50._1_1_ == '\b') {
      *(int **)((int)pdVar29 + 0x24) = piStack_88;
      *(char *)((int)pdVar29 + 0x2d) = uStack_6c._1_1_;
      pdVar12 = (double *)CONCAT31((int3)((uint)piStack_88 >> 8),uStack_70._1_1_);
      *(byte *)((int)pdVar29 + 0x2e) = uStack_70._1_1_;
    }
    *(uint *)(pdVar29 + 9) = *(uint *)(pdVar29 + 9) | 7;
  }
  else {
    uVar5 = 6;
    if (uStack_78._1_1_ != '\0') {
      uVar5 = uStack_5d;
    }
    *(undefined4 *)((int)pdVar29 + 0x24) = 0;
    cVar4 = '\x01';
    if ((char)uStack_50 != '\0') {
      cVar4 = uStack_50._1_1_;
    }
    *(undefined1 *)((int)pdVar29 + 0x21) = uVar5;
    *(double **)((int)pdVar29 + 0x1c) = pdStack_a0;
    *(uint **)(pdVar29 + 3) = puStack_9c;
    uVar19 = 48000;
    if (uStack_a8._4_1_ != '\0') {
      uVar19 = uStack_98;
    }
    *(char *)(pdVar29 + 4) = cVar4;
    *(uint *)((int)pdVar29 + 0x14) = uVar19;
    if (uStack_a8._4_1_ == '\0') {
      uVar19 = *(uint *)(pdVar29 + 9) & 0xfffffffe;
    }
    else {
      uVar19 = *(uint *)(pdVar29 + 9) | 1;
    }
    pdVar12 = (double *)(uVar19 & 0xfffffffd);
    pdVar7 = (double *)(uVar19 | 2);
    if ((char)uStack_50 == '\0') {
      pdVar7 = pdVar12;
    }
    if (uStack_78._1_1_ == '\0') {
      uVar19 = (uint)pdVar7 & 0xfffffffb;
    }
    else {
      uVar19 = (uint)pdVar7 | 4;
    }
    *(uint *)(pdVar29 + 9) = uVar19;
    if (cVar4 == '\b') {
      piVar21 = piStack_88;
      if (piStack_88 == (int *)0x0) {
        piVar21 = (int *)0x1;
      }
      piVar17 = (int *)0x3;
      if (piVar21 < (int *)0x3) {
        piVar17 = piVar21;
      }
      cVar4 = '\x01';
      if ((char)uStack_6c != '\0') {
        cVar4 = uStack_6c._1_1_;
      }
      *(int **)((int)pdVar29 + 0x24) = piVar17;
      pdVar12 = (double *)0x1;
      if ((char)uStack_70 != '\0') {
        pdVar12 = (double *)(uint)uStack_70._1_1_;
      }
      *(char *)((int)pdVar29 + 0x2d) = cVar4;
      *(char *)((int)pdVar29 + 0x2e) = (char)pdVar12;
      pdStack_74 = pdVar12;
      if (((int *)0x3 < piVar17) && ((cVar4 == '\0' || ((char)pdVar12 == '\0')))) {
        if (0 < DAT_012ba4e8) {
          pdVar12 = (double *)func_0x00ddf410(1,DAT_013e0188);
        }
        *(undefined4 *)((int)pdVar29 + 0x24) = 3;
      }
    }
  }
  if (2 < DAT_012ba4e8) {
    puVar26 = &DAT_0114209c;
    piVar21 = *(int **)(pdVar29 + 9);
    pdStack_74 = (double *)CONCAT31((int3)((uint)pdVar12 >> 8),*(undefined1 *)(pdStack_4c + 4));
    puVar11 = &DAT_0114209c;
    if (((ulonglong)pdVar29[9] & 1) == 0) {
      puVar11 = (undefined2 *)&DAT_0112e1b4;
    }
    piStack_88 = piVar21;
    uVar10 = func_0x00dfeae0(*(undefined1 *)((int)pdStack_4c + 0x21),puVar11);
    puVar11 = &DAT_0114209c;
    if (((uint)piVar21 >> 2 & 1) == 0) {
      puVar11 = (undefined2 *)&DAT_0112e1b4;
    }
    uVar10 = func_0x00dfea60(pdStack_74,puVar11,uVar10);
    if (((uint)piStack_88 >> 1 & 1) == 0) {
      puVar26 = (undefined2 *)&DAT_0112e1b4;
    }
    func_0x00ddf410(3,DAT_013e0188,"Pre-reset: %s%s, %s%s, %s%uhz, %u / %u buffer\n",puVar26,uVar10)
    ;
    pdVar29 = pdStack_4c;
  }
  pdVar7 = *(double **)((int)pdVar29 + 0x14);
  pdStack_74 = (double *)CONCAT31(pdStack_74._1_3_,*(undefined1 *)(pdVar29 + 4));
  piStack_88 = (int *)CONCAT31(piStack_88._1_3_,*(undefined1 *)((int)pdVar29 + 0x21));
  uStack_8._0_1_ = 5;
  uStack_8._1_3_ = 0;
  cVar4 = (**(code **)(**(int **)(pdVar29 + 0x348e) + 4))();
  if (cVar4 == '\0') {
    func_0x00e0c6f0();
    cVar4 = (undefined1 *)0xfffffff3 < &stack0xfffffe0c;
    func_0x00e87d2e();
LAB_00dcae6d:
    func_0x0062c530();
    func_0x00e87d2e(auStack_114,&DAT_0125c4dc);
LAB_00dcae89:
    func_0x0062c530();
    func_0x00e87d2e(auStack_120,&DAT_0125c4dc);
LAB_00dcaea5:
    uVar19 = func_0x00585aa0(1);
LAB_00dcaeac:
    *(uint *)((int)pdVar29 + 0x2c) = uVar19 - 1;
    func_0x00e7304a(6);
LAB_00dcaeb7:
    uVar19 = func_0x00e7304a(5);
LAB_00dcaebe:
    *(uint *)((int)pdVar7 + 0x2c) = uVar19 - 1;
    func_0x00e7304a(6);
LAB_00dcaec9:
    *(undefined4 *)((int)pdVar7 + 0x2c) = 0x7ffffffe;
    uVar34 = func_0x00e7304a(6);
    iVar9 = (int)((ulonglong)uVar34 >> 0x20);
    pdVar12 = (double *)uVar34;
    *(int *)((int)pdVar12 + -0x6d91ff24) = iVar9;
    dVar33 = *pdVar12;
    dVar1 = *pdVar12;
    dVar2 = *pdVar12;
    uVar5 = in((short)((ulonglong)uVar34 >> 0x20));
    pdVar12 = (double *)CONCAT31((int3)((ulonglong)uVar34 >> 8),uVar5);
    dVar3 = *pdVar12;
    *(char *)(extraout_ECX_03 + -0x6dd5ff24) =
         *(char *)(extraout_ECX_03 + -0x6dd5ff24) + -0x24 + cVar4;
    pcVar25 = (char *)(unaff_EBX + iVar9 * 4);
    *pcVar25 = *pcVar25 + (char)((ulonglong)uVar34 >> 8);
    return extraout_ST0 + (float10)dVar33 + (float10)dVar1 + (float10)dVar2 + (float10)dVar3 +
           (float10)*pdVar12 + (float10)(double)CONCAT44(unaff_retaddr,unaff_EBP) + (float10)*pdVar7
    ;
  }
  uVar22 = (undefined3)((uint)extraout_ECX >> 8);
  uStack_8 = 0xffffffff;
  if ((*(char *)(pdVar29 + 4) != (char)pdStack_74) && ((*(uint *)(pdVar29 + 9) >> 1 & 1) != 0)) {
    if (0 < DAT_012ba4e8) {
      func_0x00dfea60();
      func_0x00dfea60();
      func_0x00ddf410(1,DAT_013e0188);
    }
    func_0x00dcc360();
    uVar22 = extraout_var;
  }
  uVar10 = CONCAT31(uVar22,*(char *)((int)pdVar29 + 0x21));
  if ((*(char *)((int)pdVar29 + 0x21) != (char)piStack_88) &&
     ((*(uint *)(pdVar29 + 9) >> 2 & 1) != 0)) {
    if (0 < DAT_012ba4e8) {
      func_0x00dfeae0();
      func_0x00dfeae0();
      func_0x00ddf410(1,DAT_013e0188);
    }
    func_0x00dcc360();
    uVar10 = extraout_ECX_00;
  }
  if ((*(double **)((int)pdVar29 + 0x14) != pdVar7) && (((ulonglong)pdVar29[9] & 1) != 0)) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188);
    }
    func_0x00dcc360();
    uVar10 = extraout_ECX_01;
  }
  if (2 < DAT_012ba4e8) {
    pdStack_74 = (double *)CONCAT31((int3)((uint)uVar10 >> 8),*(undefined1 *)(pdVar29 + 4));
    uVar10 = func_0x00dfeae0(*(undefined1 *)((int)pdVar29 + 0x21));
    uVar10 = func_0x00dfea60(pdStack_74,uVar10);
    func_0x00ddf410(3,DAT_013e0188,"Post-reset: %s, %s, %uhz, %u / %u buffer\n",uVar10);
  }
  if (*(char *)((int)pdVar29 + 0x11) != '\x02') {
    func_0x00dc68b0();
    uStack_8 = 7;
    if (acStack_d4[0] != '\0') {
      iVar9 = func_0x00e0aef0();
      if (iVar9 == 0) {
        *(uint *)(pdVar29 + 9) = *(uint *)(pdVar29 + 9) | 0x20;
      }
      else {
        iVar9 = func_0x00e0aef0();
        if (iVar9 == 0) {
          func_0x00dcc360();
        }
        else {
          iVar9 = func_0x00e0aef0();
          if ((iVar9 != 0) && (0 < DAT_012ba4e8)) {
            func_0x00ddf410(1);
          }
        }
      }
    }
    uStack_8 = 0xffffffff;
    if (acStack_d4[0] != '\0') {
      func_0x00dc0110();
    }
  }
  func_0x00e08e70();
  func_0x00dfc5c0(auStack_90);
  if (auStack_90[0] == '\0') {
    pdVar7 = pdStack_58;
    if ((double *)(0x7fffffff - (int)pdStack_5c) < pdStack_58) {
      pdVar7 = (double *)(0x7fffffff - (int)pdStack_5c);
    }
    pdVar12 = (double *)0x100;
    if ((double *)0x100 < (double *)((int)pdVar7 + (int)pdStack_5c)) {
      pdVar12 = (double *)((int)pdVar7 + (int)pdStack_5c);
    }
  }
  else if (pdStack_8c == (double *)0x0) {
    pdVar12 = (double *)0x100;
  }
  else {
    pdVar12 = (double *)&DAT_00000010;
    if (&DAT_00000010 < pdStack_8c) {
      pdVar12 = pdStack_8c;
    }
  }
  *(double **)((int)pdVar29 + 0x1a47c) = pdVar12;
  pdVar7 = pdStack_5c;
  if (pdVar12 < pdStack_5c) {
    pdVar7 = pdVar12;
  }
  *(double **)(pdVar29 + 0x348f) = pdVar7;
  *(int *)((int)pdVar29 + 0x1a474) = (int)pdVar12 - (int)pdVar7;
  func_0x00dfc500(auStack_90);
  pdVar7 = pdStack_68;
  if (auStack_90[0] != '\0') {
    pdVar12 = pdStack_8c;
    if (_auStack_90 < 0) {
      pdVar12 = (double *)0x0;
    }
    pdVar18 = (double *)&DAT_00000006;
    if ((int)pdVar12 < 6) {
      pdVar18 = pdVar12;
    }
    if (pdVar18 < pdStack_68) {
      pdVar7 = pdVar18;
    }
  }
  *(double **)((int)pdVar29 + 0x4c) = pdVar7;
  if (2 < DAT_012ba4e8) {
    func_0x00ddf410(3,DAT_013e0188,"Max sources: %d (%d + %d), effect slots: %d, sends: %d\n",
                    *(undefined4 *)((int)pdVar29 + 0x1a47c),*(undefined4 *)((int)pdVar29 + 0x1a474))
    ;
  }
  switch(*(undefined1 *)(pdVar29 + 4)) {
  case 1:
    if (*(int *)(pdVar29 + 0x3482) == 0) {
      *(undefined **)((int)pdVar29 + 0x1a374) = &DAT_012ba5a0;
      *(undefined **)(pdVar29 + 0x346f) = &DAT_012ba5e8;
    }
    break;
  case 2:
    *(undefined **)((int)pdVar29 + 0x1a374) = &DAT_012ba5e8;
    *(undefined **)(pdVar29 + 0x346f) = &DAT_012ba618;
    break;
  case 3:
  case 7:
    *(undefined **)(pdVar29 + 0x346f) = &DAT_012ba63c;
    *(undefined **)((int)pdVar29 + 0x1a374) = &DAT_012ba618;
    break;
  case 4:
    *(undefined **)((int)pdVar29 + 0x1a374) = &DAT_012ba63c;
    *(undefined **)(pdVar29 + 0x346f) = &DAT_012ba654;
    break;
  case 5:
  case 6:
    *(undefined **)((int)pdVar29 + 0x1a374) = &DAT_012ba654;
    *(undefined1 **)(pdVar29 + 0x346f) = &DAT_012ba660;
  }
  _auStack_90 = 0;
  if (*(int **)(pdVar29 + 0x3482) == (int *)0x0) {
    auStack_90 = (undefined1  [4])0x0;
    auVar13 = auStack_90;
  }
  else {
    auVar13 = (undefined1  [4])(**(code **)(**(int **)(pdVar29 + 0x3482) + 4))();
  }
  pdStack_5c = (double *)0x0;
  pdVar7 = pdStack_4c + 6;
  if (0xf < *(uint *)((int)pdStack_4c + 0x44)) {
    pdVar7 = *(double **)pdVar7;
  }
  cVar4 = func_0x00dfcab0(pdVar7);
  if (cVar4 != '\0') {
    pcVar25 = (char *)func_0x00dc6850();
    if ((*pcVar25 == '\0') || (*(int *)(pcVar25 + 4) < 1)) {
      switch(*(undefined1 *)((int)pdStack_4c + 0x21)) {
      case 0:
      case 1:
        break;
      case 2:
      case 3:
        break;
      default:
        goto LAB_00dca0c9;
      }
    }
    dVar33 = 2.0;
    func_0x00e879bf();
    *(float *)(pdStack_4c + 0x3485) = (float)dVar33;
  }
LAB_00dca0c9:
  if (0.0 < *(float *)(pdStack_4c + 0x3485)) {
    if (2 < DAT_012ba4e8) {
      fVar31 = (float10)func_0x00e87c42();
      pdStack_58 = (double *)(float)(fVar31 + (float10)0.5);
      func_0x00ddf410(3,DAT_013e0188,"Dithering enabled (%d-bit, %g)\n");
    }
  }
  else if (2 < DAT_012ba4e8) {
    func_0x00ddf410();
  }
  if ((char)uStack_94 == '\0') {
    func_0x00dfc420(auStack_42);
    uStack_94 = CONCAT22(uStack_94._2_2_,auStack_42[0]);
    if ((char)auStack_42[0] != '\0') goto LAB_00dca1b9;
    uVar6 = auStack_42[0];
    switch(*(undefined1 *)((int)pdStack_4c + 0x21)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      auStack_42[0] = 0x101;
      uStack_94 = CONCAT22(uStack_94._2_2_,0x101);
      uVar6 = 1;
    }
    if ((char)uVar6 != '\0') goto LAB_00dca1b9;
LAB_00dca1c6:
    if (2 < DAT_012ba4e8) {
      func_0x00ddf410();
    }
  }
  else {
LAB_00dca1b9:
    if ((char)(uStack_94 >> 8) == '\0') goto LAB_00dca1c6;
    fVar32 = 1.0;
    switch(*(undefined1 *)((int)pdStack_4c + 0x21)) {
    case 0:
    case 1:
      fVar32 = 0.9921875;
      break;
    case 2:
    case 3:
      fVar32 = 0.9999695;
    }
    if (0.0 < *(float *)(pdStack_4c + 0x3485)) {
      fVar32 = fVar32 - 1.0 / *(float *)(pdStack_4c + 0x3485);
    }
    dVar33 = (double)fVar32;
    func_0x00e87c48();
    pdStack_68 = (double *)((float)dVar33 * 20.0);
    piVar21 = (int *)func_0x00e0b6d0(&pdStack_58,
                                     *(int *)(pdStack_4c + 0x3480) -
                                     *(int *)((int)pdStack_4c + 0x1a3fc) >> 0xc,
                                     (float)((double)*(int *)((int)pdStack_4c + 0x14) +
                                            (double)(&DAT_011a2c10)
                                                    [-(*(int *)((int)pdStack_4c + 0x14) >> 0x1f)]),1
                                     ,1,1,1,1,0x3a83126f,0x3b03126f,0,0,pdStack_68,0x7f800000);
    pdStack_5c = (double *)*piVar21;
    *piVar21 = 0;
    pdStack_84 = pdStack_58;
    if (pdStack_58 != (double *)0x0) {
      func_0x00e0b6b0();
      func_0x00ddbb20();
    }
    pdStack_58 = (double *)0x0;
    uStack_8 = 8;
    func_0x00dc6f40();
    pdStack_58 = (double *)0x0;
    uVar19 = *(uint *)((int)pdStack_5c + 8);
    bVar30 = CARRY4((uint)auVar13,uVar19);
    auVar13 = (undefined1  [4])((int)auVar13 + uVar19);
    pdVar7 = (double *)(((int)uVar19 >> 0x1f) + (uint)bVar30);
    iVar9 = *(int *)(pdStack_4c + 0x3484);
    *(double **)(pdStack_4c + 0x3484) = pdStack_5c;
    pdStack_5c = pdVar7;
    if (iVar9 != 0) {
      func_0x00e0b6b0();
      func_0x00ddbb20();
    }
    if (2 < DAT_012ba4e8) {
      func_0x00ddf410(3,DAT_013e0188);
    }
    uStack_8 = 0xffffffff;
  }
  uVar34 = func_0x00e87d70(auVar13);
  pdVar7 = pdStack_4c;
  uVar34 = func_0x00e87ec0(uVar34,*(undefined4 *)((int)pdStack_4c + 0x14),0);
  uVar19 = *(uint *)(pdVar7 + 0x20);
  iVar9 = (uint)uVar34 + *(int *)(pdVar7 + 0x20);
  *(int *)(pdVar7 + 0x20) = iVar9;
  iVar27 = (int)((ulonglong)uVar34 >> 0x20) + *(int *)((int)pdVar7 + 0x104) +
           (uint)CARRY4((uint)uVar34,uVar19);
  *(int *)((int)pdVar7 + 0x104) = iVar27;
  if (2 < DAT_012ba4e8) {
    func_0x00ddf410(3,DAT_013e0188,"Fixed device latency: %lldns\n",iVar9,iVar27);
  }
  uStack_e0 = 0;
  cStack_dc = 0;
  func_0x00e0c6a0();
  cStack_dc = '\x01';
  piVar21 = *(int **)((int)pdVar7 + 0x1a434);
  uStack_8._0_1_ = 9;
  uStack_8._1_3_ = 0;
  piStack_88 = piVar21 + 1;
  piStack_64 = piVar21 + *piVar21 + 1;
  if (piStack_88 != piStack_64) {
    do {
      pdVar12 = (double *)(-(uint)(*piStack_88 != 0) & *piStack_88 - 0x10U);
      pdVar7 = pdVar12 + 0x25;
      uStack_b8 = (double)(CONCAT44((int)((ulonglong)uStack_b8 >> 0x20),pdVar7) & 0xffffff00ffffffff
                          );
      pdStack_54 = pdVar12;
      iVar9 = func_0x00e7307f(pdVar7);
      cVar4 = '\0';
      if (iVar9 != 0) goto LAB_00dcaeb7;
      cVar4 = *(uint *)((int)pdVar12 + 0x154) < 0x7fffffff;
      if (*(uint *)((int)pdVar12 + 0x154) == 0x7fffffff) goto LAB_00dcaec9;
      uStack_b8._0_5_ = CONCAT14(1,(undefined4)uStack_b8);
      pdVar7 = pdVar12 + 0x46;
      uStack_8._0_1_ = 10;
      uStack_7c = uStack_7c & 0xffffff00;
      pdStack_80 = pdVar7;
      iVar9 = func_0x00e7307f(pdVar7);
      cVar4 = '\0';
      if (iVar9 != 0) goto LAB_00dcaeb7;
      uVar19 = *(uint *)((int)pdVar12 + 0x25c);
      cVar4 = uVar19 < 0x7fffffff;
      if (uVar19 == 0x7fffffff) goto LAB_00dcaebe;
      uStack_7c = CONCAT31(uStack_7c._1_3_,1);
      pdVar7 = *(double **)(pdVar12 + 0x23);
      pdVar12 = *(double **)((int)pdVar12 + 0x114);
      pdStack_84 = pdVar7;
      if (pdVar12 != pdVar7) {
        do {
          pcVar25 = *(char **)pdVar12;
          uVar19 = 0;
          while (*pcVar25 == '\0') {
            uVar19 = uVar19 + 1;
            pcVar25 = pcVar25 + 0x134;
            if (3 < uVar19) goto LAB_00dca4e1;
          }
          pdVar12 = (double *)((int)pdVar12 + 4);
        } while (pdVar12 != pdVar7);
LAB_00dca4e1:
        if ((pdVar12 != pdVar7) && (pdStack_58 = (double *)((int)pdVar12 + 4), pdStack_58 != pdVar7)
           ) {
          do {
            pcVar25 = *(char **)pdStack_58;
            uVar19 = 0;
            do {
              if (*pcVar25 != '\0') {
                if (pdVar12 != pdStack_58) {
                  uVar10 = *(undefined4 *)pdStack_58;
                  *(undefined4 *)pdStack_58 = 0;
                  iVar9 = *(int *)pdVar12;
                  *(undefined4 *)pdVar12 = uVar10;
                  if (iVar9 != 0) {
                    uStack_8._0_1_ = 0xc;
                    func_0x008ab4ad(iVar9,0x134,*(undefined4 *)(iVar9 + -4),FUN_00dc7040);
                    func_0x00ddbb20(iVar9 + -4);
                    pdVar7 = pdStack_84;
                  }
                }
                pdVar12 = (double *)((int)pdVar12 + 4);
                break;
              }
              uVar19 = uVar19 + 1;
              pcVar25 = pcVar25 + 0x134;
            } while (uVar19 < 4);
            pdStack_58 = (double *)((int)pdStack_58 + 4);
          } while (pdStack_58 != pdVar7);
        }
      }
      pdStack_5c = *(double **)(pdStack_54 + 0x23);
      if (pdVar12 != pdStack_5c) {
        pdStack_58 = *(double **)(pdStack_54 + 0x23);
        pdStack_5c = pdVar12;
        if (pdVar12 != pdStack_58) {
          do {
            iVar9 = *(int *)pdVar12;
            if (iVar9 != 0) {
              uStack_8._0_1_ = 0xe;
              func_0x008ab4ad(iVar9,0x134,*(undefined4 *)(iVar9 + -4),FUN_00dc7040);
              func_0x00ddbb20(iVar9 + -4);
            }
            pdVar12 = (double *)((int)pdVar12 + 4);
          } while (pdVar12 != pdStack_58);
        }
        *(double **)(pdStack_54 + 0x23) = pdStack_5c;
      }
      uStack_8._0_1_ = 0xb;
      pdStack_58 = *(double **)((int)pdStack_54 + 0x114);
      if (pdStack_58 != pdStack_5c) {
        do {
          pdVar7 = (double *)0x0;
          do {
            iVar9 = *(int *)pdStack_58;
            iVar27 = *(int *)((int)pdVar7 + iVar9 + 0x128);
            if (iVar27 != *(int *)((int)pdVar7 + iVar9 + 300)) {
              *(int *)((int)pdVar7 + iVar9 + 300) = iVar27;
            }
            pdStack_68 = *(double **)pdStack_58;
            iVar9 = *(int *)((int)((int)pdVar7 + 300) + (int)pdStack_68);
            if (iVar9 != *(int *)((int)(pdVar7 + 0x26) + (int)pdStack_68)) {
              iVar27 = *(int *)((int)(pdVar7 + 0x25) + (int)pdStack_68);
              if (iVar27 == iVar9) {
                if (iVar27 != 0) {
                  func_0x00ddbb20(iVar27);
                  *(undefined4 *)((int)(pdVar7 + 0x25) + (int)pdStack_68) = 0;
                  *(undefined4 *)((int)((int)pdVar7 + 300) + (int)pdStack_68) = 0;
                  *(undefined4 *)((int)(pdVar7 + 0x26) + (int)pdStack_68) = 0;
                }
              }
              else {
                pdVar29 = (double *)(iVar9 - iVar27 >> 0xc);
                cVar4 = pdVar29 < (double *)0xfffff;
                if ((double *)0xfffff < pdVar29) goto LAB_00dcae89;
                pdStack_74 = (double *)((int)pdVar29 << 0xc);
                pdStack_84 = (double *)func_0x00ddbb30(0x10,pdStack_74);
                cVar4 = '\0';
                if (pdStack_84 == (double *)0x0) goto LAB_00dcae6d;
                func_0x008ab0e6(pdStack_84,*(int *)((int)(pdVar7 + 0x25) + (int)pdStack_68),
                                *(int *)((int)((int)pdVar7 + 300) + (int)pdStack_68) -
                                *(int *)((int)(pdVar7 + 0x25) + (int)pdStack_68));
                if (*(int *)((int)(pdVar7 + 0x25) + (int)pdStack_68) != 0) {
                  func_0x00ddbb20(*(int *)((int)(pdVar7 + 0x25) + (int)pdStack_68));
                }
                *(double **)((int)(pdVar7 + 0x25) + (int)pdStack_68) = pdStack_84;
                *(double **)((int)((int)pdVar7 + 300) + (int)pdStack_68) =
                     pdStack_84 + (int)pdVar29 * 0x200;
                *(int *)((int)(pdVar7 + 0x26) + (int)pdStack_68) = (int)pdStack_84 + (int)pdStack_74
                ;
              }
            }
            iVar9 = *(int *)pdStack_58;
            *(undefined4 *)((int)pdVar7 + iVar9 + 0x88) = 0;
            *(undefined4 *)((int)pdVar7 + iVar9 + 0x8c) = 0;
            pdVar7 = (double *)((int)pdVar7 + 0x134);
          } while (pdVar7 < (double *)0x4d0);
          pdStack_58 = (double *)((int)pdStack_58 + 4);
        } while (pdStack_58 != pdStack_5c);
      }
      pdVar7 = *(double **)(pdStack_54 + 0x4c);
      pdVar29 = pdStack_54;
      if (pdVar7 != (double *)0x0) {
        func_0x00e08dc0(*(undefined4 *)(pdVar7 + 0x12),pdStack_54);
        piVar21 = *(int **)(pdVar7 + 0x10);
        iVar9 = *(int *)(pdStack_4c + 0x346c);
        piVar21[2] = *(int *)((int)pdStack_4c + 0x1a35c);
        piVar21[3] = iVar9;
        (**(code **)(*piVar21 + 4))(pdStack_4c + 2,*(undefined4 *)((int)pdVar7 + 0xc));
        pdVar29 = pdStack_54;
        func_0x00dec4e0(pdStack_54);
      }
      piVar21 = *(int **)(pdVar29 + 0x1b);
      if (piVar21 != (int *)0x0) {
        iVar9 = *piVar21;
        if (iVar9 != 0) {
          memset(piVar21 + iVar9 + 1,0,iVar9 * 4);
        }
      }
      pdStack_84 = *(double **)((int)pdVar29 + 0x224);
      pdStack_68 = *(double **)(pdVar29 + 0x44);
      if (pdStack_68 != pdStack_84) {
        do {
          uVar19 = ~*(uint *)pdStack_68;
          pdStack_5c = (double *)~*(uint *)((int)pdStack_68 + 4);
          if (uVar19 != 0 || pdStack_5c != (double *)0x0) {
            do {
              uVar23 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                }
              }
              if (uVar19 == 0) {
                uVar23 = 0;
                if (pdStack_5c != (double *)0x0) {
                  for (; ((uint)pdStack_5c >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                  }
                }
                if (pdStack_5c != (double *)0x0) {
                  uVar23 = uVar23 + 0x20;
                }
              }
              pdVar7 = (double *)(uVar23 * 0x134 + *(int *)(pdStack_68 + 1));
              uVar14 = 1 << (uVar23 & 0x1f);
              uVar20 = 0;
              if (0x1f < uVar23) {
                uVar20 = uVar14;
              }
              uVar14 = uVar14 ^ uVar20;
              if (0x3f < uVar23) {
                uVar20 = uVar14;
              }
              uVar19 = uVar19 & ~uVar14;
              pdStack_5c = (double *)((uint)pdStack_5c & ~uVar20);
              pdStack_58 = pdVar7;
              func_0x00e08dc0(*(undefined4 *)(pdVar7 + 0x12),pdStack_54);
              piVar21 = *(int **)(pdVar7 + 0x10);
              iVar9 = *(int *)((int)pdStack_4c + 0x1a35c);
              piVar21[3] = *(int *)(pdStack_4c + 0x346c);
              piVar21[2] = iVar9;
              (**(code **)(*piVar21 + 4))(pdStack_4c + 2,*(undefined4 *)((int)pdVar7 + 0xc));
              func_0x00dec4e0(pdStack_54);
            } while (uVar19 != 0 || pdStack_5c != (double *)0x0);
          }
          pdStack_68 = pdStack_68 + 2;
          pdVar29 = pdStack_54;
        } while (pdStack_68 != pdStack_84);
      }
      cVar4 = '\0';
      if (pdVar29 + 0x46 == (double *)0x0) goto LAB_00dcaea5;
      func_0x00e730b2(pdVar29 + 0x46);
      pdVar12 = pdVar29 + 0x3e;
      uStack_7c = uStack_7c & 0xffffff00;
      pdVar7 = *(double **)((int)pdStack_4c + 0x4c);
      _auStack_90 = ZEXT45(pdVar12);
      pdStack_74 = pdVar7;
      iVar9 = func_0x00e7307f(pdVar12);
      cVar4 = '\0';
      if (iVar9 != 0) goto LAB_00dcaeb7;
      uVar19 = *(uint *)((int)pdVar29 + 0x21c);
      cVar4 = uVar19 < 0x7fffffff;
      pdVar29 = pdVar12;
      if (uVar19 == 0x7fffffff) goto LAB_00dcaeac;
      _auStack_90 = CONCAT14(1,auStack_90);
      uStack_8._0_1_ = 0xf;
      puStack_9c = *(uint **)((int)pdStack_54 + 0x1e4);
      for (puVar8 = *(uint **)(pdStack_54 + 0x3c); puVar8 != puStack_9c; puVar8 = puVar8 + 4) {
        pdVar7 = (double *)~*puVar8;
        pdStack_5c = (double *)~puVar8[1];
        if (pdVar7 != (double *)0x0 || pdStack_5c != (double *)0x0) {
          pdStack_58 = (double *)((int)pdStack_74 * 0x18);
          do {
            uVar19 = 0;
            if (pdVar7 != (double *)0x0) {
              for (; ((uint)pdVar7 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            if (pdVar7 == (double *)0x0) {
              uVar19 = 0;
              if (pdStack_5c != (double *)0x0) {
                for (; ((uint)pdStack_5c >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                }
              }
              if (pdStack_5c != (double *)0x0) {
                uVar19 = uVar19 + 0x20;
              }
            }
            iVar9 = uVar19 * 0x990 + puVar8[2];
            uVar23 = 1 << (uVar19 & 0x1f);
            uVar14 = 0;
            if (0x1f < uVar19) {
              uVar14 = uVar23;
            }
            uVar23 = uVar23 ^ uVar14;
            if (0x3f < uVar19) {
              uVar14 = uVar23;
            }
            pdVar7 = (double *)((uint)pdVar7 & ~uVar23);
            pdStack_5c = (double *)((uint)pdStack_5c & ~uVar14);
            puVar15 = (undefined4 *)((int)pdStack_58 + iVar9 + 0xa8);
            if (puVar15 != (undefined4 *)(iVar9 + 0x138)) {
              puVar15 = puVar15 + 2;
              do {
                if (puVar15[-2] != 0) {
                  piVar21 = (int *)(puVar15[-2] + 0x8c);
                  LOCK();
                  *piVar21 = *piVar21 + -1;
                  UNLOCK();
                }
                puVar15[-2] = 0;
                puVar15[-1] = 0x3f800000;
                *puVar15 = 0x3f800000;
                puVar15[1] = 0x459c4000;
                puVar15[2] = 0x3f800000;
                puVar15[3] = 0x437a0000;
                puVar28 = puVar15 + 4;
                puVar15 = puVar15 + 6;
              } while (puVar28 != (undefined4 *)(iVar9 + 0x138));
            }
            *(undefined1 *)(iVar9 + 0x160) = 1;
            pdStack_84 = pdVar7;
          } while (pdVar7 != (double *)0x0 || pdStack_5c != (double *)0x0);
        }
        pdVar7 = pdStack_74;
      }
      pdStack_68 = (double *)(*(int *)(pdStack_54 + 0x1a) + 4);
      pdVar12 = (double *)((int)pdStack_68 + *(int *)((int)pdStack_54 + 0xd4) * 4);
      uStack_a8 = CONCAT44(pdVar12,(undefined4)uStack_a8);
      if (pdStack_68 != pdVar12) {
        uStack_94 = (int)pdVar7 * 0x18;
        uStack_98 = (int)pdVar7 * 0xc;
        do {
          pdStack_5c = *(double **)pdStack_68;
          for (puVar15 = (undefined4 *)(uStack_94 + 0xa4 + (int)pdStack_5c);
              puVar15 != (undefined4 *)((int)pdStack_5c + 0x134); puVar15 = puVar15 + 6) {
                    // WARNING: Read-only address (ram,0x010d6060) is written
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[2] = 0;
            puVar15[3] = 0;
            *(undefined8 *)(puVar15 + 4) = 0;
          }
                    // WARNING: Read-only address (ram,0x010d6060) is written
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_104 = 0;
          for (puVar16 = (undefined8 *)((int)pdStack_5c + uStack_98 + 0x1ac);
              puVar16 != (undefined8 *)((int)pdStack_5c + 500);
              puVar16 = (undefined8 *)((int)puVar16 + 0xc)) {
            *puVar16 = 0;
            *(undefined4 *)(puVar16 + 1) = 0;
          }
          pdStack_a0 = *(double **)((int)pdStack_5c + 0x204);
          pdVar7 = *(double **)(pdStack_5c + 0x40);
          if (pdVar7 != pdStack_a0) {
            pdStack_84 = pdVar7 + 0x1dc;
            puVar8 = (uint *)(((int)pdStack_74 + -6) * 0xb8);
            puStack_9c = puVar8;
            do {
              pdStack_58 = pdVar7;
              memset(auStack_1a0,0,0x80);
              uStack_1c8 = 0;
              uStack_1c4 = 0;
              uStack_1c0 = 0;
              uStack_1ac = 0;
              uStack_1a4 = 0;
              auStack_1d8 = _DAT_010d6060;
              auStack_1bc = _DAT_010d6060;
              pdVar12 = (double *)((int)puVar8 + (int)pdStack_84);
              while (pdVar12 != pdStack_84) {
                pdVar18 = pdVar12 + 0x17;
                puVar15 = (undefined4 *)auStack_1d8;
                pdVar29 = pdVar12;
                for (iVar9 = 0x2e; pdVar12 = pdVar18, pdVar7 = pdStack_58, puVar8 = puStack_9c,
                    iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(undefined4 *)pdVar29 = *puVar15;
                  puVar15 = puVar15 + 1;
                  pdVar29 = (double *)((int)pdVar29 + 4);
                }
              }
              pdVar7 = pdVar7 + 0x1dc;
              pdStack_84 = pdStack_84 + 0x1dc;
            } while (pdVar7 != pdStack_a0);
          }
          LOCK();
          pdStack_58 = *(double **)pdStack_5c;
          *(undefined4 *)pdStack_5c = 0;
          UNLOCK();
          if (pdStack_58 != (double *)0x0) {
            iVar9 = *(int *)((int)pdStack_54 + 0x24);
            do {
              *(int *)(pdStack_58 + 0x26) = iVar9;
              LOCK();
              iVar27 = *(int *)((int)pdStack_54 + 0x24);
              if (iVar9 == iVar27) {
                *(int *)((int)pdStack_54 + 0x24) = (int)pdStack_58;
                iVar27 = iVar9;
              }
              UNLOCK();
              bVar30 = iVar27 != iVar9;
              iVar9 = iVar27;
            } while (bVar30);
          }
          LOCK();
          if (*(int *)(pdStack_5c + 0x27) == 2) {
            *(int *)(pdStack_5c + 0x27) = 0;
          }
          UNLOCK();
          if (*(int *)((int)pdStack_5c + 0x134) != 0) {
            func_0x00de2cb0(pdStack_4c + 2);
          }
          pdStack_68 = (double *)((int)pdStack_68 + 4);
        } while (pdStack_68 != uStack_a8._4_4_);
      }
      pdVar7 = *(double **)(pdStack_54 + 0x21);
      pdVar29 = *(double **)((int)pdStack_54 + 0x10c);
      if (pdVar7 != pdVar29) {
        do {
          if (*(int *)pdVar7 != 0) {
            func_0x00ddbb20(*(int *)pdVar7);
          }
          pdVar7 = (double *)((int)pdVar7 + 4);
        } while (pdVar7 != pdVar29);
        *(undefined4 *)((int)pdStack_54 + 0x10c) = *(undefined4 *)(pdStack_54 + 0x21);
      }
      *(undefined4 *)((int)pdStack_54 + 0x24) = 0;
      cVar4 = '\0';
      if (pdStack_54 + 0x3e == (double *)0x0) goto LAB_00dcaea5;
      func_0x00e730b2(pdStack_54 + 0x3e);
      pdVar7 = pdStack_54;
      _auStack_90 = (uint5)(uint)auStack_90;
      *(undefined1 *)((int)pdStack_54 + 0x124) = 0;
      func_0x00dc02a0(pdStack_54);
      func_0x00dd3d80(pdVar7);
      uStack_8._0_1_ = 9;
      func_0x00e730b2(pdVar7 + 0x25);
      piStack_88 = piStack_88 + 1;
      pdVar7 = pdStack_4c;
    } while (piStack_88 != piStack_64);
  }
  func_0x00e0c6d0();
  if ((*(uint *)(pdVar7 + 9) >> 3 & 1) == 0) {
    uStack_8 = CONCAT31(uStack_8._1_3_,0x10);
    (**(code **)(**(int **)(pdVar7 + 0x348e) + 8))();
    *(uint *)(pdVar7 + 9) = *(uint *)(pdVar7 + 9) | 0x10;
    uStack_8._0_1_ = 9;
    uStack_8._1_3_ = 0;
    if (2 < DAT_012ba4e8) {
      pdStack_d8 = (double *)
                   CONCAT31((int3)((uint)extraout_ECX_02 >> 8),*(undefined1 *)(pdVar7 + 4));
      uVar10 = func_0x00dfeae0(*(undefined1 *)((int)pdVar7 + 0x21));
      uVar10 = func_0x00dfea60(pdStack_d8,uVar10);
      func_0x00ddf410(3,DAT_013e0188,"Post-start: %s, %s, %uhz, %u / %u buffer\n",uVar10);
    }
  }
  if (cStack_dc != '\0') {
    func_0x00e0c6d0();
  }
LAB_00dcaddb:
  *unaff_FS_OFFSET = iStack_10;
  fVar31 = (float10)FUN_008ab370();
  return fVar31;
}



undefined * Catch_00dcad71(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (0 < DAT_012ba4e8) {
    uVar1 = FUN_00466930();
    func_0x00ddf410(1,DAT_013e0188,&DAT_0102b618,uVar1);
  }
  uVar1 = FUN_00466930();
  func_0x00e04820(*(int *)(unaff_EBP + -0xd4) + 0x10,&DAT_0112e274,uVar1);
  return &DAT_00dcadc2;
}



undefined * Catch_00dcadf7(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0xf4);
  if (0 < DAT_012ba4e8) {
    uVar2 = (**(code **)(*piVar1 + 4))();
    func_0x00ddf410(1,DAT_013e0188,"Device error: %s\n",uVar2);
  }
  uVar2 = (**(code **)(*piVar1 + 4))();
  func_0x00e04820(*(int *)(unaff_EBP + -0xd4) + 0x10,&DAT_0112e274,uVar2);
  return &DAT_00dcadd6;
}



undefined4 * __thiscall FUN_00dce4f0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxException::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00dce520(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxSourceException::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00dce580(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_64173675::check_exception::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00dce5b0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_64173675::check_size_exception::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00dce600(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_64173675::check_value_exception::vftable;
  return param_1;
}



void __fastcall thunk_FUN_00dce7f0(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  return;
}



void __fastcall FUN_00dce7f0(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  return;
}



undefined4 __thiscall FUN_00dced20(undefined4 param_1,byte param_2)

{
  FUN_00dce7f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00dced40(undefined4 *param_1,byte param_2)

{
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



void FUN_00dcfc10(float *param_1,undefined1 *param_2,undefined1 *param_3,double *param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  int *unaff_FS_OFFSET;
  bool bVar4;
  float10 fVar5;
  double in_XMM0_Qa;
  double dVar6;
  uint uStack_74;
  double dStack_64;
  uint uStack_5c;
  undefined1 *puStack_58;
  int iStack_54;
  double *pdStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  undefined1 auStack_2c [20];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_74 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_74;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pdStack_50 = param_4;
  iStack_54 = *(int *)(param_2 + 0x120);
  puStack_58 = param_2;
  uStack_8 = 0;
  uStack_4c = param_5;
  puStack_48 = param_2;
  puStack_44 = param_3;
  uStack_18 = uStack_74;
  if ((int)param_3 < 0x1002) {
    if (param_3 == (undefined1 *)0x1001) {
      puStack_14 = (undefined1 *)&uStack_74;
      func_0x00dce880(1);
      *param_4 = (double)param_1[5];
      goto LAB_00dcfcba;
    }
    bVar4 = param_3 == (undefined1 *)0x202;
LAB_00dcfc7c:
    if (bVar4) {
LAB_00dd0260:
      puStack_14 = (undefined1 *)&uStack_74;
      func_0x00dce880(1);
      cVar2 = FUN_00dd0940(param_1,puStack_58,param_3,&iStack_30,auStack_2c);
      if (cVar2 != '\0') {
        *param_4 = (double)iStack_30;
      }
      goto LAB_00dcfcba;
    }
    goto LAB_00dcfc82;
  }
  if (0x1201 < (int)param_3) {
    if ((int)param_3 < 0xc001) {
      if (param_3 == (undefined1 *)0xc000) {
        puStack_14 = (undefined1 *)&uStack_74;
        func_0x00dce880(1);
        *param_4 = (double)param_1[0x20];
        goto LAB_00dcfcba;
      }
      if (0x19b1 < (int)param_3) {
        if (((param_3 == (undefined1 *)0x2009) || (param_3 == (undefined1 *)0x200a)) ||
           (param_3 == &DAT_0000200b)) {
          puStack_14 = (undefined1 *)&uStack_74;
          func_0x00dce880(1);
          fVar5 = (float10)func_0x00dcf3b0(param_1,param_3);
          *param_4 = (double)fVar5;
          goto LAB_00dcfcba;
        }
        goto LAB_00dcfc82;
      }
      if (param_3 == (undefined1 *)0x19b1) {
        puStack_14 = (undefined1 *)&uStack_74;
        func_0x00dce880(1);
        *param_4 = (double)param_1[0x24];
        goto LAB_00dcfcba;
      }
      if ((int)param_3 < 0x1215) {
        if (param_3 == (undefined1 *)0x1214) goto LAB_00dd0260;
        if (param_3 == (undefined1 *)0x1203) {
          puStack_14 = (undefined1 *)&uStack_74;
          func_0x00dce880(2);
          fVar5 = (float10)func_0x00dcf970(param_1,puStack_58,&puStack_48);
          *param_4 = (double)fVar5;
          func_0x008abf00();
          param_4[1] = in_XMM0_Qa / 1000000000.0;
          goto LAB_00dcfcba;
        }
        bVar4 = param_3 == (undefined1 *)0x1212;
      }
      else {
        bVar4 = param_3 == (undefined1 *)0x19b0;
      }
    }
    else {
      if (0x20007 < (int)param_3) {
        switch(param_3) {
        case (undefined1 *)0x20008:
          puStack_14 = (undefined1 *)&uStack_74;
          func_0x00dce880(1);
          *param_4 = (double)param_1[0x1f];
          break;
        case (undefined1 *)0x20009:
          func_0x00dce880(1);
          *param_4 = (double)param_1[0x1d];
          break;
        case (undefined1 *)0x2000a:
        case (undefined1 *)0x2000b:
        case (undefined1 *)0x2000c:
          goto LAB_00dd0260;
        default:
          goto LAB_00dcfc82;
        }
        goto LAB_00dcfcba;
      }
      if (param_3 == (undefined1 *)0x20007) {
        puStack_14 = (undefined1 *)&uStack_74;
        func_0x00dce880(1);
        *param_4 = (double)param_1[0x1e];
        goto LAB_00dcfcba;
      }
      bVar4 = param_3 == (undefined1 *)0xd000;
    }
    goto LAB_00dcfc7c;
  }
  if (param_3 == (undefined1 *)0x1201) {
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(2);
    fVar5 = (float10)func_0x00dcf970(param_1,puStack_58,&puStack_48);
    iVar1 = iStack_54;
    *param_4 = (double)fVar5;
    func_0x005797f0(iStack_54 + 0x1a440);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    (**(code **)(**(int **)(iVar1 + 0x1a470) + 0x18))(&dStack_64);
    puVar3 = (uint *)(iVar1 + 0x100);
    if (iVar1 == 0) {
      puVar3 = (uint *)&DAT_000000f0;
    }
    bVar4 = CARRY4(uStack_5c,*puVar3);
    uStack_5c = uStack_5c + *puVar3;
    puStack_58 = puStack_58 + (uint)bVar4 + puVar3[1];
    uStack_38 = CONCAT44(puStack_58,uStack_5c);
    uStack_40 = dStack_64;
    dVar6 = dStack_64;
    func_0x00e730b2(iStack_54);
    if ((puStack_48 != (undefined1 *)uStack_40) || (puStack_44 != uStack_40._4_4_)) {
      uStack_5c = (int)(undefined1 *)uStack_40 - (int)puStack_48;
      puStack_58 = uStack_40._4_4_ +
                   (-(uint)((undefined1 *)uStack_40 < puStack_48) - (int)puStack_44);
      func_0x00dce190(&uStack_38,&uStack_5c);
    }
    func_0x008abf00();
    param_4[1] = dVar6 / 1000000000.0;
    goto LAB_00dcfcba;
  }
  switch(param_3) {
  case (undefined1 *)0x1002:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[6];
    break;
  case (undefined1 *)0x1003:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)*param_1;
    break;
  case (undefined1 *)0x1004:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(3);
    *param_4 = (double)param_1[0xb];
    param_4[1] = (double)param_1[0xc];
    param_4[2] = (double)param_1[0xd];
    break;
  case (undefined1 *)0x1005:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(3);
    *param_4 = (double)param_1[0x11];
    param_4[1] = (double)param_1[0x12];
    param_4[2] = (double)param_1[0x13];
    break;
  case (undefined1 *)0x1006:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(3);
    *param_4 = (double)param_1[0xe];
    param_4[1] = (double)param_1[0xf];
    param_4[2] = (double)param_1[0x10];
    break;
  case (undefined1 *)0x1007:
  case (undefined1 *)0x1010:
  case (undefined1 *)0x1015:
  case (undefined1 *)0x1016:
  case (undefined1 *)0x1027:
  case (undefined1 *)0x1033:
    goto LAB_00dd0260;
  case (undefined1 *)0x100a:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[1];
    break;
  case (undefined1 *)0x100d:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[3];
    break;
  case (undefined1 *)0x100e:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[4];
    break;
  case (undefined1 *)0x100f:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(6);
    *param_4 = (double)param_1[0x14];
    param_4[1] = (double)param_1[0x15];
    param_4[2] = (double)param_1[0x16];
    param_4[3] = (double)param_1[0x17];
    param_4[4] = (double)param_1[0x18];
    param_4[5] = (double)param_1[0x19];
    break;
  case (undefined1 *)0x1020:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[7];
    break;
  case (undefined1 *)0x1021:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[9];
    break;
  case (undefined1 *)0x1022:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[2];
    break;
  case (undefined1 *)0x1023:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    *param_4 = (double)param_1[8];
    break;
  case (undefined1 *)0x1024:
  case (undefined1 *)0x1025:
  case (undefined1 *)0x1026:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(1);
    fVar5 = (float10)func_0x00dcf4e0(param_1,param_3,puStack_58);
    *param_4 = (double)fVar5;
    break;
  case (undefined1 *)0x1030:
    puStack_14 = (undefined1 *)&uStack_74;
    func_0x00dce880(2);
    *param_4 = (double)param_1[0x21];
    param_4[1] = (double)param_1[0x22];
    break;
  case (undefined1 *)0x1031:
    if (DAT_013e01b8 == '\0') {
      puStack_14 = (undefined1 *)&uStack_74;
      func_0x00dce880(1);
      *param_4 = (double)param_1[0x23];
      break;
    }
  default:
LAB_00dcfc82:
    puStack_14 = (undefined1 *)&uStack_74;
    if (0 < DAT_012ba4e8) {
      puStack_14 = (undefined1 *)&uStack_74;
      func_0x00ddf410(1,DAT_013e0188,"Unexpected property: 0x%04x\n",param_3);
    }
    func_0x00dbfd90(puStack_58,0xa002,"Invalid source double property 0x%04x",param_3);
  }
LAB_00dcfcba:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 Catch_00dd02a4(void)

{
  return 0xdcfcb8;
}



void FUN_00dd0340(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,int *param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uStack_ac;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  uint uStack_94;
  undefined1 *puStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  char cStack_71;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  uint uStack_68;
  undefined1 *puStack_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [12];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b5ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_ac = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_ac;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_78 = param_1;
  piStack_8c = param_4;
  iStack_7c = *(int *)(param_2 + 0x120);
  puStack_90 = param_2;
  uStack_8 = 0;
  uStack_88 = param_5;
  puStack_84 = param_2;
  puStack_80 = param_3;
  uStack_18 = uStack_ac;
  if ((int)param_3 < 0x1002) {
    if (param_3 != (undefined1 *)0x1001) {
      bVar6 = param_3 == (undefined1 *)0x202;
      goto LAB_00dd03bf;
    }
    goto LAB_00dd0765;
  }
  if (0x1200 < (int)param_3) {
    if (0xd000 < (int)param_3) {
      switch(param_3) {
      case (undefined1 *)0x20005:
        goto LAB_00dd0813;
      case (undefined1 *)0x20006:
        func_0x00dce880(3);
        cStack_71 = FUN_00dd0940(uStack_78,param_2,param_3,&iStack_30,auStack_24);
        if (cStack_71 != '\0') {
          *param_4 = iStack_30;
          param_4[1] = 0;
          param_4[2] = iStack_2c;
          param_4[3] = 0;
          param_4[4] = iStack_28;
          param_4[5] = 0;
        }
        goto LAB_00dd03fa;
      case (undefined1 *)0x20007:
      case (undefined1 *)0x20008:
      case (undefined1 *)0x20009:
        goto LAB_00dd0765;
      case (undefined1 *)0x2000a:
      case (undefined1 *)0x2000b:
      case (undefined1 *)0x2000c:
        goto LAB_00dd07ca;
      default:
        goto LAB_00dd03c5;
      }
    }
    if (param_3 != (undefined1 *)0xd000) {
      if (0x19b1 < (int)param_3) {
        if ((int)param_3 < 0x200c) {
          if (((param_3 == &DAT_0000200b) || (param_3 == (undefined1 *)0x2009)) ||
             (param_3 == (undefined1 *)0x200a)) {
            puStack_14 = (undefined1 *)&uStack_ac;
            func_0x00dce880(1);
            func_0x00dcf3b0(uStack_78,param_3);
            uVar7 = func_0x00e88370();
            *(undefined8 *)param_4 = uVar7;
            goto LAB_00dd03fa;
          }
        }
        else if (param_3 == (undefined1 *)0xc000) goto LAB_00dd0765;
        goto LAB_00dd03c5;
      }
      if (param_3 == (undefined1 *)0x19b1) goto LAB_00dd0765;
      if ((int)param_3 < 0x1215) {
        if (param_3 == (undefined1 *)0x1214) goto LAB_00dd07ca;
        if (param_3 == (undefined1 *)0x1202) {
          puStack_14 = (undefined1 *)&uStack_ac;
          func_0x00dce880(2);
          uVar7 = func_0x00dcf7a0(uStack_78,puStack_90,&puStack_84);
          *(undefined8 *)param_4 = uVar7;
          param_4[2] = (int)puStack_84;
          param_4[3] = (int)puStack_80;
          goto LAB_00dd03fa;
        }
        bVar6 = param_3 == (undefined1 *)0x1212;
      }
      else {
        bVar6 = param_3 == (undefined1 *)0x19b0;
      }
LAB_00dd03bf:
      if (!bVar6) goto LAB_00dd03c5;
    }
LAB_00dd07ca:
    puStack_14 = (undefined1 *)&uStack_ac;
    func_0x00dce880(1);
    cStack_71 = FUN_00dd0940(uStack_78,param_2,param_3,&iStack_30,&iStack_2c);
    if (cStack_71 != '\0') {
      *param_4 = iStack_30;
      param_4[1] = iStack_30 >> 0x1f;
    }
    goto LAB_00dd03fa;
  }
  if (param_3 == (undefined1 *)0x1200) {
    puStack_14 = (undefined1 *)&uStack_ac;
    func_0x00dce880(2);
    uVar7 = func_0x00dcf7a0(uStack_78,puStack_90,&puStack_84);
    iVar5 = iStack_7c;
    *(undefined8 *)param_4 = uVar7;
    func_0x005797f0(iStack_7c + 0x1a440);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    (**(code **)(**(int **)(iVar5 + 0x1a470) + 0x18))(&puStack_9c);
    puVar4 = (uint *)(iVar5 + 0x100);
    if (iVar5 == 0) {
      puVar4 = (uint *)&DAT_000000f0;
    }
    bVar6 = CARRY4(uStack_94,*puVar4);
    uStack_94 = uStack_94 + *puVar4;
    puStack_90 = puStack_90 + (uint)bVar6 + puVar4[1];
    puStack_70 = puStack_9c;
    puStack_6c = puStack_98;
    uStack_68 = uStack_94;
    puStack_64 = puStack_90;
    func_0x00e730b2(iStack_7c);
    if ((puStack_84 == puStack_70) && (puStack_80 == puStack_6c)) {
      param_4[2] = uStack_68;
      param_4[3] = (int)puStack_64;
    }
    else {
      uStack_94 = (int)puStack_70 - (int)puStack_84;
      puStack_90 = puStack_6c + (-(uint)(puStack_70 < puStack_84) - (int)puStack_80);
      puVar4 = (uint *)func_0x00dce190(&uStack_68,&uStack_94);
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      param_4[2] = uStack_68 - *puVar4;
      param_4[3] = (int)(puStack_64 + (-(uint)(uStack_68 < uVar1) - uVar2));
    }
    goto LAB_00dd03fa;
  }
  switch(param_3) {
  case (undefined1 *)0x1004:
  case (undefined1 *)0x1005:
  case (undefined1 *)0x1006:
    puStack_14 = (undefined1 *)&uStack_ac;
    func_0x00dce880(3);
    cStack_71 = FUN_00dcfc10(uStack_78,param_2,param_3,auStack_60,auStack_48);
    if (cStack_71 != '\0') {
      uVar7 = func_0x008abe00();
      *(undefined8 *)param_4 = uVar7;
      uVar7 = func_0x008abe00();
      *(undefined8 *)(param_4 + 2) = uVar7;
      uVar7 = func_0x008abe00();
      *(undefined8 *)(param_4 + 4) = uVar7;
    }
    break;
  case (undefined1 *)0x1007:
  case (undefined1 *)0x1010:
  case (undefined1 *)0x1015:
  case (undefined1 *)0x1016:
  case (undefined1 *)0x1027:
  case (undefined1 *)0x1033:
    goto LAB_00dd07ca;
  case (undefined1 *)0x1009:
LAB_00dd0813:
    puStack_14 = (undefined1 *)&uStack_ac;
    func_0x00dce880(1);
    cVar3 = FUN_00dd0940(uStack_78,param_2,param_3,&iStack_30,&iStack_2c);
    if (cVar3 != '\0') {
      *param_4 = iStack_30;
      param_4[1] = 0;
    }
    break;
  case (undefined1 *)0x100f:
    puStack_14 = (undefined1 *)&uStack_ac;
    func_0x00dce880(6);
    cStack_71 = FUN_00dcfc10(uStack_78,param_2,param_3,auStack_60,&iStack_30);
    if (cStack_71 != '\0') {
      iVar5 = 0;
      do {
        uVar7 = func_0x008abe00();
        *(int *)(iVar5 + (int)param_4) = (int)uVar7;
        *(int *)(iVar5 + 4 + (int)param_4) = (int)((ulonglong)uVar7 >> 0x20);
        iVar5 = iVar5 + 8;
      } while (iVar5 < 0x30);
    }
    break;
  case (undefined1 *)0x1031:
    if (DAT_013e01b8 != '\0') {
      puStack_14 = (undefined1 *)&uStack_ac;
      func_0x00dce880(2);
      uVar8 = 0x1026;
code_r0x00dd0466:
      func_0x00dcf4e0(uStack_78,uVar8,puStack_90);
      uVar7 = func_0x00e88370();
      *(undefined8 *)param_4 = uVar7;
      param_4[2] = *param_4;
      param_4[3] = param_4[1];
      break;
    }
  case (undefined1 *)0x1002:
  case (undefined1 *)0x1003:
  case (undefined1 *)0x100a:
  case (undefined1 *)0x100d:
  case (undefined1 *)0x100e:
  case (undefined1 *)0x1020:
  case (undefined1 *)0x1021:
  case (undefined1 *)0x1022:
  case (undefined1 *)0x1023:
  case (undefined1 *)0x1024:
  case (undefined1 *)0x1025:
  case (undefined1 *)0x1026:
LAB_00dd0765:
    puStack_14 = (undefined1 *)&uStack_ac;
    func_0x00dce880(1);
    cStack_71 = FUN_00dcfc10(uStack_78,param_2,param_3,auStack_60,auStack_58);
    if (cStack_71 != '\0') {
      uVar7 = func_0x008abe00();
      *(undefined8 *)param_4 = uVar7;
    }
    break;
  case (undefined1 *)0x1032:
    if (DAT_013e01b8 != '\0') {
      puStack_14 = (undefined1 *)&uStack_ac;
      func_0x00dce880(2);
      uVar8 = 0x1025;
      goto code_r0x00dd0466;
    }
  default:
LAB_00dd03c5:
    puStack_14 = (undefined1 *)&uStack_ac;
    if (0 < DAT_012ba4e8) {
      puStack_14 = (undefined1 *)&uStack_ac;
      func_0x00ddf410(1,DAT_013e0188,"Unexpected property: 0x%04x\n",param_3);
    }
    func_0x00dbfd90(param_2,0xa002,"Invalid source integer64 property 0x%04x",param_3);
  }
LAB_00dd03fa:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 Catch_00dd08c5(void)

{
  return 0xdd03f8;
}



void FUN_00dd0940(int param_1,char *param_2,undefined1 *param_3,uint *param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int extraout_ECX;
  char extraout_DL;
  uint uVar6;
  int iVar7;
  uint uVar8;
  double *pdVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  undefined8 extraout_MM0;
  float10 fVar11;
  double dVar12;
  uint uStack_ec;
  double adStack_48 [6];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b66b;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_ec = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_ec;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_ec;
  if ((int)param_3 < 0x1002) {
    if (param_3 != (undefined1 *)0x1001) {
      if (param_3 == (undefined1 *)0x202) {
        puStack_14 = (undefined1 *)&uStack_ec;
        func_0x00dce810();
        *param_4 = (uint)*(byte *)(param_1 + 0x68);
        goto LAB_00dd0d97;
      }
      goto LAB_00dd0d62;
    }
    goto LAB_00dd0f4c;
  }
  if (0x1212 < (int)param_3) {
    if (0xd000 < (int)param_3) {
      switch(param_3) {
      case (undefined1 *)0x20007:
      case (undefined1 *)0x20008:
      case (undefined1 *)0x20009:
        goto LAB_00dd0f4c;
      case (undefined1 *)0x2000a:
        puStack_14 = (undefined1 *)&uStack_ec;
        func_0x00dce810();
        *param_4 = (uint)*(byte *)(param_1 + 0x6f);
        break;
      case (undefined1 *)0x2000b:
        puStack_14 = (undefined1 *)&uStack_ec;
        func_0x00dce810();
        *param_4 = (uint)*(byte *)(param_1 + 0x70);
        break;
      case (undefined1 *)0x2000c:
        func_0x00dce810();
        *param_4 = (uint)*(byte *)(param_1 + 0x71);
        break;
      default:
        goto LAB_00dd0d62;
      }
      goto LAB_00dd0d97;
    }
    if (param_3 == (undefined1 *)0xd000) {
      puStack_14 = (undefined1 *)&uStack_ec;
      func_0x00dce810();
      switch(*(undefined1 *)(param_1 + 0x6a)) {
      case 0:
        *param_4 = 0;
        break;
      case 1:
        *param_4 = 0xd001;
        break;
      case 2:
        *param_4 = 0xd002;
        break;
      case 3:
        *param_4 = 0xd003;
        break;
      case 4:
        *param_4 = 0xd004;
        break;
      case 5:
        *param_4 = 0xd005;
        break;
      case 6:
        *param_4 = 0xd006;
        break;
      default:
        goto LAB_00dd1060;
      }
      goto LAB_00dd0d97;
    }
    if ((int)param_3 < 0x200a) {
      if (param_3 != (undefined1 *)0x2009) {
        if (param_3 == (undefined1 *)0x1214) {
          puStack_14 = (undefined1 *)&uStack_ec;
          func_0x00dce810();
          cVar2 = *(char *)(param_1 + 0x6d);
          if (cVar2 != '\0') {
            if (cVar2 != '\x01') {
              if (cVar2 != '\x02') goto LAB_00dd101c;
              goto LAB_00dd0bc7;
            }
LAB_00dd0bd8:
            *param_4 = 1;
            goto LAB_00dd0d97;
          }
        }
        else {
          if (param_3 != (undefined1 *)0x19b0) {
            bVar10 = param_3 == (undefined1 *)0x19b1;
            goto LAB_00dd0d5c;
          }
          puStack_14 = (undefined1 *)&uStack_ec;
          func_0x00dce810();
          if (*(char *)(param_1 + 0x6e) != '\0') {
            if (*(char *)(param_1 + 0x6e) != '\x01') goto LAB_00dd0fd2;
            goto LAB_00dd0bd8;
          }
        }
        goto LAB_00dd0a87;
      }
    }
    else if ((param_3 != (undefined1 *)0x200a) && (param_3 != &DAT_0000200b)) {
      bVar10 = param_3 == (undefined1 *)0xc000;
LAB_00dd0d5c:
      if (!bVar10) goto LAB_00dd0d62;
      goto LAB_00dd0f4c;
    }
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    fVar11 = (float10)func_0x00dcf3b0();
    dVar12 = 2147483647.0;
    if ((double)fVar11 <= 2147483647.0) {
      dVar12 = (double)fVar11;
    }
    *param_4 = (int)dVar12;
    goto LAB_00dd0d97;
  }
  if (param_3 == (undefined1 *)0x1212) {
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    *param_4 = (uint)*(byte *)(param_1 + 0x6b);
    goto LAB_00dd0d97;
  }
  switch(param_3) {
  case (undefined1 *)0x1004:
  case (undefined1 *)0x1005:
  case (undefined1 *)0x1006:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    cVar2 = FUN_00dcfc10();
    if (cVar2 != '\0') {
      *param_4 = (int)adStack_48[0];
      param_4[1] = (int)adStack_48[1];
      param_4[2] = (int)adStack_48[2];
    }
    break;
  case (undefined1 *)0x1007:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    *param_4 = (uint)*(byte *)(param_1 + 0x69);
    break;
  case (undefined1 *)0x1009:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    if ((*(int *)(param_1 + 0x144) == 0x1028) || (*(int *)(param_1 + 0x148) == 0x1011)) {
      if (*(int *)(param_1 + 0x15c) != 0) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x150) +
                        (*(int *)(param_1 + 0x154) - 1U & *(uint *)(param_1 + 0x158)) * 4);
        goto code_r0x00dd0a6d;
      }
    }
    else {
      iVar7 = func_0x00dcfbc0();
      if (iVar7 != 0) {
        iVar7 = *(int *)(iVar7 + 0x148);
code_r0x00dd0a6d:
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
          *param_4 = *(uint *)(*(int *)(iVar7 + 0x20) + 0x60);
          break;
        }
      }
    }
    goto LAB_00dd0a87;
  case (undefined1 *)0x100f:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    cVar2 = FUN_00dcfc10();
    if (cVar2 != '\0') {
      iVar7 = 0;
      pdVar9 = adStack_48;
      do {
        dVar12 = *pdVar9;
        pdVar9 = pdVar9 + 1;
        *(int *)((int)param_4 + iVar7) = (int)dVar12;
        iVar7 = iVar7 + 4;
      } while (iVar7 < 0x18);
    }
    break;
  case (undefined1 *)0x1010:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    iVar7 = func_0x00dcfbc0();
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x148) == 0x1012)) {
      *(undefined4 *)(param_1 + 0x148) = 0x1014;
    }
    *param_4 = *(uint *)(param_1 + 0x148);
    break;
  case (undefined1 *)0x1015:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    *param_4 = *(uint *)(param_1 + 0x15c);
    break;
  case (undefined1 *)0x1016:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    if ((*(char *)(param_1 + 0x69) == '\0') && (*(int *)(param_1 + 0x144) == 0x1029)) {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x148) != 0x1011) {
        iVar7 = 0;
        iVar3 = func_0x00dcfbc0();
        if (iVar3 != 0) {
          iVar7 = *(int *)(iVar3 + 0x148);
        }
        uVar5 = *(uint *)(param_1 + 0x158);
        uVar6 = *(int *)(param_1 + 0x15c) + uVar5;
        if (uVar5 != uVar6) {
          do {
            if (*(int *)(*(int *)(param_1 + 0x150) + (*(int *)(param_1 + 0x154) - 1U & uVar5) * 4)
                == iVar7) break;
            uVar5 = uVar5 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar5 != uVar6);
        }
      }
      *param_4 = uVar8;
    }
    else {
      *param_4 = 0;
    }
    break;
  case (undefined1 *)0x1027:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    *param_4 = *(uint *)(param_1 + 0x144);
    break;
  case (undefined1 *)0x1031:
    if (DAT_013e01b8 != '\0') {
      puStack_14 = (undefined1 *)&uStack_ec;
      func_0x00dce810();
      fVar11 = (float10)func_0x00dcf4e0();
      dVar12 = 2147483647.0;
      if ((double)fVar11 <= 2147483647.0) {
        dVar12 = (double)fVar11;
      }
LAB_00dd0c1c:
      *param_4 = (int)dVar12;
      param_4[1] = (int)dVar12;
      break;
    }
  case (undefined1 *)0x1002:
  case (undefined1 *)0x1003:
  case (undefined1 *)0x100a:
  case (undefined1 *)0x100d:
  case (undefined1 *)0x100e:
  case (undefined1 *)0x1020:
  case (undefined1 *)0x1021:
  case (undefined1 *)0x1022:
  case (undefined1 *)0x1023:
  case (undefined1 *)0x1024:
  case (undefined1 *)0x1025:
  case (undefined1 *)0x1026:
LAB_00dd0f4c:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    cVar2 = FUN_00dcfc10();
    if (cVar2 != '\0') {
      *param_4 = (int)adStack_48[0];
    }
    break;
  case (undefined1 *)0x1032:
    if (DAT_013e01b8 != '\0') {
      puStack_14 = (undefined1 *)&uStack_ec;
      func_0x00dce810();
      fVar11 = (float10)func_0x00dcf4e0();
      dVar12 = 2147483647.0;
      if ((double)fVar11 <= 2147483647.0) {
        dVar12 = (double)fVar11;
      }
      goto LAB_00dd0c1c;
    }
  default:
LAB_00dd0d62:
    puStack_14 = (undefined1 *)&uStack_ec;
    if (0 < DAT_012ba4e8) {
      puStack_14 = (undefined1 *)&uStack_ec;
      func_0x00ddf410();
    }
    func_0x00dbfd90();
    break;
  case (undefined1 *)0x1033:
    puStack_14 = (undefined1 *)&uStack_ec;
    func_0x00dce810();
    cVar2 = *(char *)(param_1 + 0x6c);
    if (cVar2 != '\0') {
      if (cVar2 != '\x01') {
        if (cVar2 != '\x02') {
          func_0x00464a50();
          uStack_8._0_1_ = 1;
          func_0x005f2a30();
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          func_0x00463580();
          func_0x00e87d2e();
LAB_00dd0fd2:
          func_0x00464a50();
          uStack_8._0_1_ = 7;
          func_0x005f2a30();
          uStack_8 = CONCAT31(uStack_8._1_3_,8);
          func_0x00463580();
          func_0x00e87d2e();
LAB_00dd101c:
          func_0x00464a50();
          uStack_8._0_1_ = 5;
          func_0x005f2a30();
          uStack_8 = CONCAT31(uStack_8._1_3_,6);
          func_0x00463580();
          func_0x00e87d2e();
LAB_00dd1060:
          func_0x00464a50();
          uStack_8._0_1_ = 3;
          func_0x005f2a30();
          uStack_8 = CONCAT31(uStack_8._1_3_,4);
          func_0x00463580();
          puVar4 = (undefined8 *)func_0x00e87d2e();
          paddusw(extraout_MM0,*puVar4);
          *param_2 = *param_2 + extraout_DL;
          (&stack0x0a94ffdc)[extraout_ECX] =
               (&stack0x0a94ffdc)[extraout_ECX] + (char)((uint)param_3 >> 8);
          pcVar1 = (code *)swi(1);
          (*pcVar1)();
          return;
        }
LAB_00dd0bc7:
        *param_4 = 2;
        break;
      }
      goto LAB_00dd0bd8;
    }
LAB_00dd0a87:
    *param_4 = 0;
  }
LAB_00dd0d97:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 Catch_00dd0f88(void)

{
  return 0xdd0d95;
}



void FUN_00dd1650(float *param_1,int param_2,undefined1 *param_3,float *param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  float *pfVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  uint uStack_38;
  undefined4 uStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_3;
  iVar1 = param_2;
  pcStack_c = FUN_00f6b6a0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_24 = param_5;
  iStack_20 = param_2;
  puStack_1c = param_3;
  iStack_18 = param_2;
  if ((int)param_3 < 0x1002) {
    if (param_3 == (undefined1 *)0x1001) {
      puStack_14 = (undefined1 *)&uStack_38;
      func_0x00dce810(1);
      if ((*param_4 < 0.0) || (360.0 < *param_4)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      func_0x00dce8f0(uVar6);
      param_1[5] = *param_4;
      func_0x00dcee10(param_1,iVar1);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    bVar7 = param_3 == (undefined1 *)0x202;
    goto LAB_00dd16b1;
  }
  if ((int)param_3 < 0x1202) {
    puStack_14 = (undefined1 *)&uStack_38;
    if (param_3 != (undefined1 *)0x1201) {
      switch(param_3) {
      case (undefined1 *)0x1002:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        if ((*param_4 < 0.0) || (360.0 < *param_4)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        func_0x00dce8f0(uVar6);
        param_1[6] = *param_4;
        func_0x00dcee10(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1003:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        func_0x00dce8f0(0.0 <= *param_4);
        *param_1 = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1004:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(3);
        pfVar3 = param_4;
        param_3 = (undefined1 *)*param_4;
        sVar5 = func_0x00e87c3c(param_3);
        if (sVar5 < 1) {
          param_3 = (undefined1 *)pfVar3[1];
          sVar5 = func_0x00e87c3c(param_3);
          if (sVar5 < 1) {
            param_3 = (undefined1 *)pfVar3[2];
            sVar5 = func_0x00e87c3c(param_3);
            if (sVar5 < 1) {
              uVar6 = 1;
              goto LAB_00dd1cb7;
            }
          }
        }
        uVar6 = 0;
LAB_00dd1cb7:
        func_0x00dce8f0(uVar6);
        param_1[0xb] = *param_4;
        param_1[0xc] = param_4[1];
        param_1[0xd] = param_4[2];
        func_0x00dcee10(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1005:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(3);
        pfVar3 = param_4;
        param_3 = (undefined1 *)*param_4;
        sVar5 = func_0x00e87c3c(param_3);
        if (sVar5 < 1) {
          param_3 = (undefined1 *)pfVar3[1];
          sVar5 = func_0x00e87c3c(param_3);
          if (sVar5 < 1) {
            param_3 = (undefined1 *)pfVar3[2];
            sVar5 = func_0x00e87c3c(param_3);
            if (sVar5 < 1) {
              uVar6 = 1;
              goto LAB_00dd1e07;
            }
          }
        }
        uVar6 = 0;
LAB_00dd1e07:
        func_0x00dce8f0(uVar6);
        param_1[0x11] = *param_4;
        param_1[0x12] = param_4[1];
        param_1[0x13] = param_4[2];
        func_0x00dcee10(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1006:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(3);
        pfVar3 = param_4;
        param_3 = (undefined1 *)*param_4;
        sVar5 = func_0x00e87c3c(param_3);
        if (sVar5 < 1) {
          param_3 = (undefined1 *)pfVar3[1];
          sVar5 = func_0x00e87c3c(param_3);
          if (sVar5 < 1) {
            param_3 = (undefined1 *)pfVar3[2];
            sVar5 = func_0x00e87c3c(param_3);
            if (sVar5 < 1) {
              uVar6 = 1;
              goto LAB_00dd1d5f;
            }
          }
        }
        uVar6 = 0;
LAB_00dd1d5f:
        func_0x00dce8f0(uVar6);
        param_1[0xe] = *param_4;
        param_1[0xf] = param_4[1];
        param_1[0x10] = param_4[2];
        func_0x00dcee10(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1007:
      case (undefined1 *)0x1010:
      case (undefined1 *)0x1027:
      case (undefined1 *)0x1033:
        goto LAB_00dd2222;
      case (undefined1 *)0x100a:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        func_0x00dce8f0(0.0 <= *param_4);
        param_1[1] = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x100d:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        func_0x00dce8f0(0.0 <= *param_4);
        param_1[3] = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x100e:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        func_0x00dce8f0(0.0 <= *param_4);
        param_1[4] = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x100f:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(6);
        pfVar3 = param_4;
        param_3 = (undefined1 *)*param_4;
        sVar5 = func_0x00e87c3c(param_3);
        if (sVar5 < 1) {
          param_3 = (undefined1 *)pfVar3[1];
          sVar5 = func_0x00e87c3c(param_3);
          if (sVar5 < 1) {
            param_3 = (undefined1 *)pfVar3[2];
            sVar5 = func_0x00e87c3c(param_3);
            if (sVar5 < 1) {
              param_3 = (undefined1 *)pfVar3[3];
              sVar5 = func_0x00e87c3c(param_3);
              if (sVar5 < 1) {
                param_3 = (undefined1 *)pfVar3[4];
                sVar5 = func_0x00e87c3c(param_3);
                if (sVar5 < 1) {
                  param_3 = (undefined1 *)pfVar3[5];
                  sVar5 = func_0x00e87c3c(param_3);
                  if (sVar5 < 1) {
                    uVar6 = 1;
                    goto LAB_00dd1f0d;
                  }
                }
              }
            }
          }
        }
        uVar6 = 0;
LAB_00dd1f0d:
        func_0x00dce8f0(uVar6);
        param_1[0x14] = *param_4;
        param_1[0x15] = param_4[1];
        param_1[0x16] = param_4[2];
        param_1[0x17] = param_4[3];
        param_1[0x18] = param_4[4];
        param_1[0x19] = param_4[5];
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1015:
      case (undefined1 *)0x1016:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        param_2 = func_0x008abcb0();
        FUN_00dd2740(param_1,iVar1,puVar2,&param_2,&param_3);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1020:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        func_0x00dce8f0(0.0 <= *param_4);
        param_1[7] = *param_4;
        func_0x00dcee10(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1021:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        func_0x00dce8f0(0.0 <= *param_4);
        param_1[9] = *param_4;
        func_0x00dcee10(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1022:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        if ((*param_4 < 0.0) || (1.0 < *param_4)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        func_0x00dce8f0(uVar6);
        param_1[2] = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1023:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        func_0x00dce8f0(0.0 <= *param_4);
        param_1[8] = *param_4;
        func_0x00dcee10(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1024:
      case (undefined1 *)0x1025:
      case (undefined1 *)0x1026:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        param_3 = (undefined1 *)*param_4;
        sVar5 = func_0x00e87c3c(param_3);
        func_0x00dce8f0(sVar5 < 1);
        param_3 = (undefined1 *)func_0x00dcfbc0(param_1,iVar1);
        if (param_3 == (undefined1 *)0x0) {
LAB_00dd1b1e:
          param_1[0x50] = (float)puVar2;
          *(double *)(param_1 + 0x4e) = (double)*param_4;
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        func_0x00dcf0f0(&uStack_24,param_1 + 0x53,puVar2,(double)*param_4);
        if ((char)uStack_24 == '\0') {
          func_0x00dbfd90(iVar1,0xa003,"Invalid offset");
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        cVar4 = func_0x00dd3600(param_3,&iStack_20,param_1,iVar1,*(undefined4 *)(iVar1 + 0x120));
        if (cVar4 == '\0') goto LAB_00dd1b1e;
        goto LAB_00dd16ea;
      case (undefined1 *)0x1030:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(2);
        pfVar3 = param_4;
        param_3 = (undefined1 *)*param_4;
        sVar5 = func_0x00e87c3c(param_3);
        if (sVar5 < 1) {
          param_3 = (undefined1 *)pfVar3[1];
          sVar5 = func_0x00e87c3c(param_3);
          if (sVar5 < 1) {
            uVar6 = 1;
            goto LAB_00dd1c0f;
          }
        }
        uVar6 = 0;
LAB_00dd1c0f:
        func_0x00dce8f0(uVar6);
        param_1[0x21] = *param_4;
        param_1[0x22] = param_4[1];
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x1031:
        if (DAT_013e01b8 == '\0') {
          puStack_14 = (undefined1 *)&uStack_38;
          func_0x00dce810(1);
          param_3 = (undefined1 *)*param_4;
          if (((float)param_3 < 0.0) || (sVar5 = func_0x00e87c3c(param_3), 0 < sVar5)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          func_0x00dce8f0(uVar6);
          param_1[0x23] = *param_4;
          func_0x00dd3ee0(param_1,iVar1);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
      goto LAB_00dd16b7;
    }
  }
  else {
    if ((int)param_3 < 0xc001) {
      if (param_3 == (undefined1 *)0xc000) {
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        if ((*param_4 < 0.0) || (1.0 < *param_4)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        func_0x00dce8f0(uVar6);
        param_1[0x20] = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      if ((int)param_3 < 0x19b2) {
        if (param_3 == (undefined1 *)0x19b1) {
          puStack_14 = (undefined1 *)&uStack_38;
          func_0x00dce810(1);
          if ((*param_4 < 0.0) || (1.0 < *param_4)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          func_0x00dce8f0(uVar6);
          param_1[0x24] = *param_4;
          func_0x00dd3ee0(param_1,iVar1);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        if ((int)param_3 < 0x1215) {
          if (param_3 == (undefined1 *)0x1214) goto LAB_00dd2222;
          puStack_14 = (undefined1 *)&uStack_38;
          if (param_3 == (undefined1 *)0x1203) goto LAB_00dd16e1;
          bVar7 = param_3 == (undefined1 *)0x1212;
        }
        else {
          bVar7 = param_3 == (undefined1 *)0x19b0;
        }
LAB_00dd16b1:
        if (bVar7) {
LAB_00dd2222:
          puStack_14 = (undefined1 *)&uStack_38;
          func_0x00dce810(1);
          param_2 = (int)*param_4;
          FUN_00dd2740(param_1,iVar1,puVar2,&param_2,&param_3);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
      else {
        if ((param_3 == (undefined1 *)0x2009) || (param_3 == (undefined1 *)0x200a))
        goto LAB_00dd2222;
        puStack_14 = (undefined1 *)&uStack_38;
        if (param_3 == &DAT_0000200b) goto LAB_00dd16e1;
      }
    }
    else {
      if ((int)param_3 < 0x20008) {
        if (param_3 == (undefined1 *)0x20007) {
          puStack_14 = (undefined1 *)&uStack_38;
          func_0x00dce810(1);
          if ((*param_4 < 0.0) || (10.0 < *param_4)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          func_0x00dce8f0(uVar6);
          param_1[0x1e] = *param_4;
          func_0x00dd3ee0(param_1,iVar1);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
        bVar7 = param_3 == (undefined1 *)0xd000;
        goto LAB_00dd16b1;
      }
      switch(param_3) {
      case (undefined1 *)0x20008:
        puStack_14 = (undefined1 *)&uStack_38;
        func_0x00dce810(1);
        if ((*param_4 < 0.0) || (10.0 < *param_4)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        func_0x00dce8f0(uVar6);
        param_1[0x1f] = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x20009:
        func_0x00dce810(1);
        if ((*param_4 < 0.0) || (1.0 < *param_4)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        func_0x00dce8f0(uVar6);
        param_1[0x1d] = *param_4;
        func_0x00dd3ee0(param_1,iVar1);
        *unaff_FS_OFFSET = iStack_10;
        return;
      case (undefined1 *)0x2000a:
      case (undefined1 *)0x2000b:
      case (undefined1 *)0x2000c:
        goto LAB_00dd2222;
      }
    }
LAB_00dd16b7:
    puStack_14 = (undefined1 *)&uStack_38;
    if (0 < DAT_012ba4e8) {
      puStack_14 = (undefined1 *)&uStack_38;
      func_0x00ddf410(1,DAT_013e0188,"Unexpected property: 0x%04x\n",param_3);
    }
  }
LAB_00dd16e1:
  func_0x00dbfd90(iVar1);
LAB_00dd16ea:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 Catch_00dd2265(void)

{
  return 0xdd16ea;
}



void FUN_00dd2310(undefined4 param_1,undefined4 param_2,undefined1 *param_3,uint *param_4)

{
  uint *puVar1;
  int *unaff_FS_OFFSET;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uStack_74;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  uint auStack_24 [3];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f6b6c0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_74 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_74;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_74;
  if ((int)param_3 < 0x1002) {
    if (param_3 != (undefined1 *)0x1001) {
      bVar2 = param_3 == (undefined1 *)0x202;
      goto LAB_00dd237a;
    }
    goto LAB_00dd2415;
  }
  if ((int)param_3 < 0x1201) {
    if (param_3 == (undefined1 *)0x1200) goto LAB_00dd23dc;
    switch(param_3) {
    case (undefined1 *)0x1002:
    case (undefined1 *)0x1003:
    case (undefined1 *)0x100a:
    case (undefined1 *)0x100d:
    case (undefined1 *)0x100e:
    case (undefined1 *)0x1020:
    case (undefined1 *)0x1021:
    case (undefined1 *)0x1022:
    case (undefined1 *)0x1023:
LAB_00dd2415:
      puStack_14 = (undefined1 *)&uStack_74;
      func_0x00dce880(1);
      func_0x008abfd0();
      FUN_00dd1650(param_1,param_2,param_3,auStack_30,auStack_2c);
      goto LAB_00dd23f0;
    case (undefined1 *)0x1004:
    case (undefined1 *)0x1005:
    case (undefined1 *)0x1006:
      puStack_14 = (undefined1 *)&uStack_74;
      func_0x00dce880(3);
      func_0x008abfd0();
      func_0x008abfd0();
      func_0x008abfd0();
      puVar1 = auStack_24;
      goto LAB_00dd2497;
    case (undefined1 *)0x1007:
    case (undefined1 *)0x1024:
    case (undefined1 *)0x1025:
    case (undefined1 *)0x1026:
    case (undefined1 *)0x1033:
      goto LAB_00dd25c0;
    case (undefined1 *)0x1009:
      goto LAB_00dd261d;
    case (undefined1 *)0x100f:
      puStack_14 = (undefined1 *)&uStack_74;
      func_0x00dce880(6);
      func_0x008abfd0();
      func_0x008abfd0();
      func_0x008abfd0();
      func_0x008abfd0();
      func_0x008abfd0();
      func_0x008abfd0();
      puVar1 = &uStack_18;
LAB_00dd2497:
      FUN_00dd1650(param_1,param_2,param_3,auStack_30,puVar1);
      goto LAB_00dd23f0;
    case (undefined1 *)0x1031:
      if (DAT_013e01b8 == '\0') goto LAB_00dd2415;
    case (undefined1 *)0x1010:
    case (undefined1 *)0x1015:
    case (undefined1 *)0x1016:
    case (undefined1 *)0x1027:
LAB_00dd23dc:
      pcVar4 = "Setting read-only source property 0x%04x";
      uVar3 = 0xa004;
      puStack_14 = (undefined1 *)&uStack_74;
      break;
    case (undefined1 *)0x1032:
      if (DAT_013e01b8 != '\0') goto LAB_00dd23dc;
    default:
LAB_00dd2380:
      puStack_14 = (undefined1 *)&uStack_74;
      if (0 < DAT_012ba4e8) {
        puStack_14 = (undefined1 *)&uStack_74;
        func_0x00ddf410(1,DAT_013e0188,"Unexpected property: 0x%04x\n",param_3);
      }
      pcVar4 = "Invalid source integer64 property 0x%04x";
      uVar3 = 0xa002;
    }
    func_0x00dbfd90(param_2,uVar3,pcVar4,param_3);
LAB_00dd23f0:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  if (0xd000 < (int)param_3) {
    switch(param_3) {
    case (undefined1 *)0x20005:
      goto LAB_00dd261d;
    case (undefined1 *)0x20006:
      func_0x00dce880(3);
      if (((param_4[1] == 0) && (param_4[3] == 0)) && (param_4[5] == 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      func_0x00dce8f0(uVar3);
      uStack_48 = *param_4;
      uStack_44 = param_4[2];
      uStack_40 = param_4[4];
      FUN_00dd2740(param_1,param_2,param_3,&uStack_48,auStack_3c);
      goto LAB_00dd23f0;
    case (undefined1 *)0x20007:
    case (undefined1 *)0x20008:
    case (undefined1 *)0x20009:
      goto LAB_00dd2415;
    case (undefined1 *)0x2000a:
    case (undefined1 *)0x2000b:
    case (undefined1 *)0x2000c:
      goto LAB_00dd25c0;
    default:
      goto LAB_00dd2380;
    }
  }
  if (param_3 != (undefined1 *)0xd000) {
    if (0x19b1 < (int)param_3) {
      if ((int)param_3 < 0x200c) {
        if (param_3 == &DAT_0000200b) goto LAB_00dd2415;
        if ((param_3 == (undefined1 *)0x2009) || (param_3 == (undefined1 *)0x200a))
        goto LAB_00dd23dc;
      }
      else if (param_3 == (undefined1 *)0xc000) goto LAB_00dd2415;
      goto LAB_00dd2380;
    }
    if (param_3 == (undefined1 *)0x19b1) goto LAB_00dd2415;
    if ((int)param_3 < 0x1215) {
      if (param_3 == (undefined1 *)0x1214) goto LAB_00dd25c0;
      if (param_3 == (undefined1 *)0x1202) goto LAB_00dd23dc;
      bVar2 = param_3 == (undefined1 *)0x1212;
    }
    else {
      bVar2 = param_3 == (undefined1 *)0x19b0;
    }
LAB_00dd237a:
    if (!bVar2) goto LAB_00dd2380;
  }
LAB_00dd25c0:
  puStack_14 = (undefined1 *)&uStack_74;
  func_0x00dce880(1);
  if (param_4[1] + (uint)(0x7fffffff < *param_4) == 0) {
    uVar3 = 1;
  }
  else {
LAB_00dd25ea:
    uVar3 = 0;
  }
LAB_00dd25ec:
  func_0x00dce8f0(uVar3);
  uStack_48 = *param_4;
  FUN_00dd2740(param_1,param_2,param_3,&uStack_48,&uStack_44);
  goto LAB_00dd23f0;
LAB_00dd261d:
  puStack_14 = (undefined1 *)&uStack_74;
  func_0x00dce880(1);
  if (param_4[1] != 0) goto LAB_00dd25ea;
  uVar3 = 1;
  goto LAB_00dd25ec;
}



undefined4 Catch_00dd26b4(void)

{
  return 0xdd23f0;
}



void FUN_00dd2740(int param_1,uint param_2,undefined1 *param_3,uint *param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  uint3 uVar7;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  undefined4 uVar12;
  undefined8 uVar13;
  uint uStack_7c;
  undefined1 auStack_6c [4];
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  char cStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  uint *puStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined1 *puStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b725;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_7c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_7c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_44 = param_4;
  iStack_48 = *(int *)(param_2 + 0x120);
  iStack_40 = param_5;
  uStack_8 = 0;
  uStack_3c = param_2;
  puStack_38 = param_3;
  uStack_34 = param_2;
  iStack_50 = 0;
  uStack_18 = uStack_7c;
  func_0x00dce1e0();
  uStack_58 = 0;
  cStack_54 = '\0';
  uStack_8._0_1_ = 2;
  if ((int)param_3 < 0x1002) {
    if (param_3 != (undefined1 *)0x1001) {
      if (param_3 == (undefined1 *)0x202) {
        func_0x00dce810(1);
        uVar11 = *param_4;
        uVar7 = (uint3)(uVar11 >> 8);
        if ((uVar11 == 0) || (uVar11 == 1)) {
          iVar5 = CONCAT31(uVar7,1);
        }
        else {
          iVar5 = (uint)uVar7 << 8;
        }
        func_0x00dce8f0(iVar5);
        *(bool *)(param_1 + 0x68) = *param_4 != 0;
        func_0x00dcee10(param_1,param_2);
        goto LAB_00dd2975;
      }
      goto LAB_00dd3530;
    }
    goto LAB_00dd34f7;
  }
  if ((int)param_3 < 0x1213) {
    if (param_3 == (undefined1 *)0x1212) {
      func_0x00dce810(1);
      func_0x00dce8f0(*param_4 < 7);
      *(char *)(param_1 + 0x6b) = (char)*param_4;
      func_0x00dd3ee0(param_1,param_2);
      goto LAB_00dd2975;
    }
    switch(param_3) {
    case (undefined1 *)0x1004:
    case (undefined1 *)0x1005:
    case (undefined1 *)0x1006:
      func_0x00dce810(3);
      fStack_30 = (float)(int)*param_4;
      fStack_2c = (float)(int)param_4[1];
      fStack_28 = (float)(int)param_4[2];
      FUN_00dd1650(param_1,param_2,param_3,&fStack_30,&fStack_24);
      break;
    case (undefined1 *)0x1007:
      func_0x00dce810(1);
      uVar11 = *param_4;
      uVar7 = (uint3)(uVar11 >> 8);
      if ((uVar11 == 0) || (uVar11 == 1)) {
        iVar5 = CONCAT31(uVar7,1);
      }
      else {
        iVar5 = (uint)uVar7 << 8;
      }
      func_0x00dce8f0(iVar5);
      *(bool *)(param_1 + 0x69) = *param_4 != 0;
      iVar5 = func_0x00dcfbc0(param_1,param_2);
      if (iVar5 != 0) {
        if (*(char *)(param_1 + 0x69) == '\0') {
          *(undefined4 *)(iVar5 + 0x14c) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x14c) =
               *(undefined4 *)
                (*(int *)(param_1 + 0x150) +
                (*(int *)(param_1 + 0x154) - 1U & *(uint *)(param_1 + 0x158)) * 4);
        }
        do {
        } while ((*(uint *)(iStack_48 + 0x1a430) & 1) != 0);
      }
      break;
    case (undefined1 *)0x1009:
      func_0x00dce810(1);
      iVar3 = func_0x00dcfbc0();
      iVar5 = iStack_48;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x148) == 0x1012)) {
        *(undefined4 *)(param_1 + 0x148) = 0x1014;
      }
      if ((*(int *)(param_1 + 0x148) == 0x1012) || (*(int *)(param_1 + 0x148) == 0x1013)) {
        func_0x00dbfd90(param_2,0xa004,"Setting buffer on playing or paused source %u",
                        *(undefined4 *)(param_1 + 0x168));
        break;
      }
      if (*param_4 == 0) {
        *(undefined4 *)(param_1 + 0x144) = 0x1030;
        func_0x00dd71d0(auStack_6c);
LAB_00dd2b19:
        uVar11 = iStack_5c + uStack_60;
        for (; uStack_60 != uVar11; uStack_60 = uStack_60 + 1) {
          iVar5 = *(int *)(*(int *)(iStack_68 + (iStack_64 - 1U & uStack_60) * 4) + 0x20);
          if (iVar5 != 0) {
            piVar4 = (int *)(iVar5 + 0x5c);
            LOCK();
            *piVar4 = *piVar4 + -1;
            UNLOCK();
          }
        }
        break;
      }
      func_0x005797f0(iStack_48 + 0x1a4b0);
      uStack_8._0_1_ = 3;
      uStack_4c = *param_4;
      piVar4 = (int *)func_0x00dbca40(iVar5,uStack_4c);
      if (piVar4 == (int *)0x0) {
        uVar13 = CONCAT44(uStack_4c,"Invalid buffer ID %u");
        uVar12 = 0xa003;
      }
      else if ((piVar4[0x12] == 0) || ((piVar4[0x12] & 4U) != 0)) {
        if ((*piVar4 == 0) || (piVar4[0x17] == 0)) {
          func_0x00dce1e0();
          uStack_8._0_1_ = 4;
          func_0x00dcc5a0();
          *(int *)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                  + 4) = *piVar4;
          *(int *)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                  + 8) = piVar4[1];
          *(int *)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                  + 0xc) = piVar4[7];
          *(int *)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                  + 0x10) = piVar4[6];
          *(int *)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                  + 0x14) = piVar4[0x15];
          *(int *)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                  + 0x18) = piVar4[0x16];
          *(int *)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                  + 0x1c) = piVar4[2];
          *(int **)(*(int *)(iStack_40 + ((uint)(puStack_38 + (uStack_34 - 1)) & uStack_3c - 1) * 4)
                   + 0x20) = piVar4;
          LOCK();
          piVar4[0x17] = piVar4[0x17] + 1;
          UNLOCK();
          *(undefined4 *)(param_1 + 0x144) = 0x1028;
          func_0x00dd71d0();
          func_0x00dd71d0(&puStack_44);
          func_0x00dce650();
          func_0x00e730b2(iStack_48);
          goto LAB_00dd2b19;
        }
        uVar13 = CONCAT44(piVar4[0x18],"Setting already-set callback buffer %u");
        uVar12 = 0xa004;
      }
      else {
        uVar13 = CONCAT44(piVar4[0x18],"Setting non-persistently mapped buffer %u");
        uVar12 = 0xa004;
      }
      func_0x00dbfd90(param_2,uVar12,uVar13);
LAB_00dd296d:
      func_0x00e730b2();
      break;
    case (undefined1 *)0x100f:
      func_0x00dce810(6);
      fStack_30 = (float)(int)*param_4;
      fStack_2c = (float)(int)param_4[1];
      fStack_28 = (float)(int)param_4[2];
      fStack_24 = (float)(int)param_4[3];
      fStack_20 = (float)(int)param_4[4];
      fStack_1c = (float)(int)param_4[5];
      FUN_00dd1650(param_1,param_2,param_3,&fStack_30,&uStack_18);
      break;
    case (undefined1 *)0x1010:
    case (undefined1 *)0x1015:
    case (undefined1 *)0x1016:
    case (undefined1 *)0x1027:
      goto LAB_00dd2faa;
    case (undefined1 *)0x1024:
    case (undefined1 *)0x1025:
    case (undefined1 *)0x1026:
      func_0x00dce810(1);
      uVar11 = param_2;
      uStack_4c = func_0x00dcfbc0();
      if (uStack_4c != 0) {
        func_0x00dcf0f0(&iStack_40,param_1 + 0x14c,param_3,(double)(int)*param_4,uVar11);
        if ((char)iStack_40 == '\0') {
          func_0x00dbfd90(param_2,0xa003,"Invalid source offset");
          break;
        }
        cVar1 = func_0x00dd3600(uStack_4c,&uStack_3c,param_1,param_2,iStack_48);
        if (cVar1 != '\0') break;
      }
      *(undefined1 **)(param_1 + 0x140) = param_3;
      *(double *)(param_1 + 0x138) = (double)(int)*param_4;
      break;
    case (undefined1 *)0x1031:
      if (DAT_013e01b8 != '\0') {
        func_0x00dbfd90(param_2,0xa004,"Setting read-only source property 0x%04x",param_3);
        break;
      }
    case (undefined1 *)0x1002:
    case (undefined1 *)0x1003:
    case (undefined1 *)0x100a:
    case (undefined1 *)0x100d:
    case (undefined1 *)0x100e:
    case (undefined1 *)0x1020:
    case (undefined1 *)0x1021:
    case (undefined1 *)0x1022:
    case (undefined1 *)0x1023:
LAB_00dd34f7:
      func_0x00dce810(1);
      fStack_30 = (float)(int)*param_4;
      FUN_00dd1650(param_1,param_2,param_3,&fStack_30,&fStack_2c);
      break;
    case (undefined1 *)0x1032:
      if (DAT_013e01b8 != '\0') {
        func_0x00dbfd90(param_2,0xa004,"Setting read-only source property 0x%04x",param_3);
        break;
      }
    default:
LAB_00dd3530:
      if (0 < DAT_012ba4e8) {
        func_0x00ddf410(1,DAT_013e0188,"Unexpected property: 0x%04x\n",param_3);
      }
      func_0x00dbfd90(param_2,0xa002,"Invalid source integer property 0x%04x",param_3);
      break;
    case (undefined1 *)0x1033:
      func_0x00dce810(1);
      uVar11 = *param_4;
      if (uVar11 == 0) {
        *(undefined1 *)(param_1 + 0x6c) = 0;
        func_0x00dd3ee0();
      }
      else if (uVar11 == 1) {
        *(undefined1 *)(param_1 + 0x6c) = 1;
        func_0x00dd3ee0();
      }
      else if (uVar11 == 2) {
        *(undefined1 *)(param_1 + 0x6c) = 2;
        func_0x00dd3ee0();
      }
      else {
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410(2,DAT_013e0188,"Unsupported direct mode: 0x%04x\n",uVar11);
        }
        func_0x00dbfd90(param_2,0xa003,"Unsupported AL_DIRECT_CHANNELS_SOFT: 0x%04x\n",*param_4);
      }
    }
  }
  else {
    if ((int)param_3 < 0x20006) {
      if (param_3 == (undefined1 *)0x20005) {
        func_0x00dce810(1);
        iVar5 = iStack_48;
        if (*param_4 == 0) {
          *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x9c) = 0x459c4000;
          *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
          *(undefined4 *)(param_1 + 0xa4) = 0x437a0000;
          func_0x00dd3ee0();
          goto LAB_00dd2975;
        }
        func_0x005797f0(iStack_48 + 0x1a528);
        uStack_8._0_1_ = 5;
        uStack_4c = *param_4;
        iVar5 = func_0x00dd1500(iVar5,uStack_4c);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar5 + 4);
          *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar5 + 8);
          *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar5 + 0xc);
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar5 + 0x10);
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar5 + 0x14);
          uStack_8._0_1_ = 2;
          func_0x00e730b2();
          func_0x00dd3ee0(param_1,param_2);
          goto LAB_00dd2975;
        }
        func_0x00dbfd90(param_2,0xa003,"Invalid filter ID %u",uStack_4c);
        goto LAB_00dd296d;
      }
      if (0x200a < (int)param_3) {
        if ((param_3 == &DAT_0000200b) || (param_3 == (undefined1 *)0xc000)) goto LAB_00dd34f7;
        if (param_3 != (undefined1 *)0xd000) goto LAB_00dd3530;
        func_0x00dce810(1);
        uVar11 = *param_4;
        if ((int)uVar11 < 0xd002) {
          if (uVar11 == 0xd001) {
            uVar2 = 1;
          }
          else {
            if (uVar11 != 0) goto LAB_00dd304f;
            uVar2 = 0;
          }
        }
        else {
          switch(uVar11) {
          case 0xd002:
            uVar2 = 2;
            break;
          case 0xd003:
            uVar2 = 3;
            break;
          case 0xd004:
            uVar2 = 4;
            break;
          case 0xd005:
            uVar2 = 5;
            break;
          case 0xd006:
            uVar2 = 6;
            break;
          default:
LAB_00dd304f:
            func_0x00dbfd90(param_2,0xa003,"Distance model out of range: 0x%04x",uVar11);
            goto LAB_00dd2975;
          }
        }
        *(undefined1 *)(param_1 + 0x6a) = uVar2;
        if (*(char *)(param_2 + 0x15d) != '\0') {
          func_0x00dd3ee0(param_1,param_2);
        }
        goto LAB_00dd2975;
      }
      if (param_3 == (undefined1 *)0x200a) {
LAB_00dd2faa:
        func_0x00dbfd90(param_2,0xa004,"Setting read-only source property 0x%04x",param_3);
        goto LAB_00dd2975;
      }
      if ((int)param_3 < 0x19b2) {
        if (param_3 == (undefined1 *)0x19b1) goto LAB_00dd34f7;
        if (param_3 == (undefined1 *)0x1214) {
          func_0x00dce810(1);
          uVar11 = *param_4;
          if (uVar11 == 0) {
            *(undefined1 *)(param_1 + 0x6d) = 0;
            func_0x00dd3ee0();
          }
          else if (uVar11 == 1) {
            *(undefined1 *)(param_1 + 0x6d) = 1;
            func_0x00dd3ee0();
          }
          else if (uVar11 == 2) {
            *(undefined1 *)(param_1 + 0x6d) = 2;
            func_0x00dd3ee0();
          }
          else {
            if (1 < DAT_012ba4e8) {
              func_0x00ddf410(2,DAT_013e0188,"Unsupported spatialize mode: 0x%04x\n",uVar11);
            }
            func_0x00dbfd90(param_2,0xa003,"Unsupported AL_SOURCE_SPATIALIZE_SOFT: 0x%04x\n",
                            *param_4);
          }
          goto LAB_00dd2975;
        }
        if (param_3 == (undefined1 *)0x19b0) {
          func_0x00dce810(1);
          uVar11 = param_2;
          iVar5 = func_0x00dcfbc0();
          if ((iVar5 == 0) && (*(int *)(param_1 + 0x148) == 0x1012)) {
            *(undefined4 *)(param_1 + 0x148) = 0x1014;
          }
          if ((*(int *)(param_1 + 0x148) == 0x1012) || (*(int *)(param_1 + 0x148) == 0x1013)) {
            func_0x00dbfd90(param_2,0xa004,"Modifying stereo mode on playing or paused source %u",
                            *(undefined4 *)(param_1 + 0x168),uVar11);
          }
          else {
            uVar8 = *param_4;
            if (uVar8 == 0) {
              *(undefined1 *)(param_1 + 0x6e) = 0;
            }
            else if (uVar8 == 1) {
              *(undefined1 *)(param_1 + 0x6e) = 1;
            }
            else {
              if (1 < DAT_012ba4e8) {
                func_0x00ddf410(2,DAT_013e0188,"Unsupported stereo mode: 0x%04x\n",uVar8);
              }
              func_0x00dbfd90(param_2,0xa003,"Unsupported AL_STEREO_MODE_SOFT: 0x%04x\n",*param_4,
                              uVar11);
            }
          }
          goto LAB_00dd2975;
        }
      }
      else if (param_3 == (undefined1 *)0x2009) goto LAB_00dd2faa;
      goto LAB_00dd3530;
    }
    switch(param_3) {
    case (undefined1 *)0x20006:
      func_0x00dce810(3);
      puVar6 = (undefined4 *)func_0x005e0c90(param_2 + 0x230);
      if (&uStack_58 != puVar6) {
        uStack_58 = *puVar6;
        cStack_54 = *(char *)(puVar6 + 1);
        *puVar6 = 0;
        *(undefined1 *)(puVar6 + 1) = 0;
      }
      if ((char)uStack_34 != '\0') {
        func_0x00e730b2();
      }
      iVar5 = iStack_48;
      uStack_34 = *param_4;
      if (uStack_34 == 0) {
LAB_00dd32f7:
        uVar11 = param_4[1];
        if (uVar11 < *(uint *)(iStack_48 + 0x4c)) {
          if (param_4[2] == 0) {
            *(undefined4 *)(param_1 + 0xac + uVar11 * 0x18) = 0x3f800000;
            *(undefined4 *)(param_1 + 0xb0 + uVar11 * 0x18) = 0x3f800000;
            *(undefined4 *)(param_1 + 0xb4 + uVar11 * 0x18) = 0x459c4000;
            *(undefined4 *)(param_1 + 0xb8 + uVar11 * 0x18) = 0x3f800000;
            *(undefined4 *)(param_1 + 0xbc + uVar11 * 0x18) = 0x437a0000;
          }
          else {
            func_0x005797f0();
            uStack_8._0_1_ = 6;
            iVar5 = func_0x00dd1500(iVar5,param_4[2]);
            if (iVar5 == 0) {
              func_0x00dbfd90(param_2,0xa003,"Invalid filter ID %u",param_4[2]);
              func_0x00e730b2(uStack_4c);
              goto joined_r0x00dd3375;
            }
            uVar11 = param_4[1];
            uStack_8._0_1_ = 2;
            *(undefined4 *)(param_1 + 0xac + uVar11 * 0x18) = *(undefined4 *)(iVar5 + 4);
            *(undefined4 *)(param_1 + 0xb0 + uVar11 * 0x18) = *(undefined4 *)(iVar5 + 8);
            *(undefined4 *)(param_1 + 0xb4 + uVar11 * 0x18) = *(undefined4 *)(iVar5 + 0xc);
            *(undefined4 *)(param_1 + 0xb8 + uVar11 * 0x18) = *(undefined4 *)(iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0xbc + uVar11 * 0x18) = *(undefined4 *)(iVar5 + 0x14);
            func_0x00e730b2(uStack_4c);
          }
          iVar5 = *(int *)(param_1 + (param_4[1] + 7) * 0x18);
          if (((iVar5 == 0) || (iStack_50 == iVar5)) ||
             ((*(int *)(param_1 + 0x148) != 0x1012 && (*(int *)(param_1 + 0x148) != 0x1013)))) {
            if (iStack_50 != 0) {
              LOCK();
              *(int *)(iStack_50 + 0x8c) = *(int *)(iStack_50 + 0x8c) + 1;
              UNLOCK();
            }
            iVar5 = *(int *)(param_1 + (param_4[1] + 7) * 0x18);
            if (iVar5 != 0) {
              piVar4 = (int *)(iVar5 + 0x8c);
              LOCK();
              *piVar4 = *piVar4 + -1;
              UNLOCK();
            }
            *(int *)(param_1 + (param_4[1] + 7) * 0x18) = iStack_50;
            func_0x00dd3ee0(param_1,param_2);
          }
          else {
            if (iStack_50 != 0) {
              LOCK();
              *(int *)(iStack_50 + 0x8c) = *(int *)(iStack_50 + 0x8c) + 1;
              UNLOCK();
            }
            iVar5 = *(int *)(param_1 + 0xa8 + param_4[1] * 0x18);
            if (iVar5 != 0) {
              piVar4 = (int *)(iVar5 + 0x8c);
              LOCK();
              *piVar4 = *piVar4 + -1;
              UNLOCK();
            }
            *(int *)(param_1 + (param_4[1] + 7) * 0x18) = iStack_50;
            iVar5 = func_0x00dcfbc0(param_1,param_2);
            if (iVar5 == 0) {
              *(undefined1 *)(param_1 + 0x160) = 1;
            }
            else {
              func_0x00dd3f50(param_1,iVar5,param_2);
            }
          }
        }
        else {
          func_0x00dbfd90(param_2,0xa003,"Invalid send %u",uVar11);
        }
      }
      else {
        uVar11 = uStack_34 - 1;
        uVar8 = uVar11 & 0x3f;
        if (uVar11 >> 6 < (uint)(*(int *)(param_2 + 0x224) - *(int *)(param_2 + 0x220) >> 4)) {
          puVar10 = (uint *)((uVar11 >> 6) * 0x10 + *(int *)(param_2 + 0x220));
          uVar11 = 1 << (uVar11 & 0x1f);
          uVar9 = 0;
          if (0x1f < uVar8) {
            uVar9 = uVar11;
          }
          uVar11 = uVar11 ^ uVar9;
          if (0x3f < uVar8) {
            uVar9 = uVar11;
          }
          if (((uVar11 & *puVar10) == 0 && (uVar9 & puVar10[1]) == 0) &&
             (iStack_50 = uVar8 * 0x134 + puVar10[2], iStack_50 != 0)) goto LAB_00dd32f7;
        }
        func_0x00dbfd90(param_2,0xa003,"Invalid effect ID %u",uStack_34);
      }
joined_r0x00dd3375:
      if (cStack_54 == '\0') break;
      goto LAB_00dd296d;
    case (undefined1 *)0x20007:
    case (undefined1 *)0x20008:
    case (undefined1 *)0x20009:
      goto LAB_00dd34f7;
    case (undefined1 *)0x2000a:
      func_0x00dce810(1);
      uVar11 = *param_4;
      uVar7 = (uint3)(uVar11 >> 8);
      if ((uVar11 == 0) || (uVar11 == 1)) {
        iVar5 = CONCAT31(uVar7,1);
      }
      else {
        iVar5 = (uint)uVar7 << 8;
      }
      func_0x00dce8f0(iVar5);
      *(bool *)(param_1 + 0x6f) = *param_4 != 0;
      func_0x00dd3ee0(param_1,param_2);
      break;
    case (undefined1 *)0x2000b:
      func_0x00dce810(1);
      uVar11 = *param_4;
      uVar7 = (uint3)(uVar11 >> 8);
      if ((uVar11 == 0) || (uVar11 == 1)) {
        iVar5 = CONCAT31(uVar7,1);
      }
      else {
        iVar5 = (uint)uVar7 << 8;
      }
      func_0x00dce8f0(iVar5);
      *(bool *)(param_1 + 0x70) = *param_4 != 0;
      func_0x00dd3ee0(param_1,param_2);
      break;
    case (undefined1 *)0x2000c:
      func_0x00dce810(1);
      uVar11 = *param_4;
      uVar7 = (uint3)(uVar11 >> 8);
      if ((uVar11 == 0) || (uVar11 == 1)) {
        iVar5 = CONCAT31(uVar7,1);
      }
      else {
        iVar5 = (uint)uVar7 << 8;
      }
      func_0x00dce8f0(iVar5);
      *(bool *)(param_1 + 0x71) = *param_4 != 0;
      func_0x00dd3ee0(param_1,param_2);
      break;
    default:
      goto LAB_00dd3530;
    }
  }
LAB_00dd2975:
  func_0x00dce650();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 Catch_00dd3568(void)

{
  return 0xdd297d;
}



char * FUN_00dd73a0(void)

{
  return "check_size_exception";
}



char * FUN_00dd73b0(void)

{
  return "check_value_exception";
}



void FUN_00dd73c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b795;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar13 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if (param_1 < 0) {
      func_0x00dbfd90(piStack_18,0xa003,"Deleting %d sources",param_1);
      piVar13 = piStack_18;
    }
    else if (0 < param_1) {
      piVar12 = piStack_18 + 0x7c;
      iVar5 = func_0x00e7307f(piVar12);
      piVar14 = piStack_18;
      if (iVar5 != 0) {
        iVar5 = func_0x00e7304a(5);
LAB_00dd7615:
        piVar13[0x87] = iVar5 + -1;
        func_0x00e7304a(6);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar5 = piVar13[0x87];
      if (iVar5 == 0x7fffffff) goto LAB_00dd7615;
      uStack_8._0_1_ = 2;
      puVar1 = param_2 + param_1;
      puVar11 = param_2;
      if (param_2 != puVar1) {
        do {
          iVar5 = func_0x00dd1560(piVar14,*puVar11);
          if (iVar5 == 0) {
            func_0x00dbfd90(piVar14,0xa001,"Invalid source ID %u",*puVar11);
            goto LAB_00dd756f;
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar1);
        for (; param_2 != puVar1; param_2 = param_2 + 1) {
          iVar5 = func_0x00dd1560(piVar14,*param_2);
          if (iVar5 != 0) {
            uVar6 = *(int *)(iVar5 + 0x168) - 1;
            if ((*(uint *)(iVar5 + 0x164) < (uint)((piVar14[0x35] << 2) >> 2)) &&
               (iVar3 = *(int *)(piVar14[0x34] + 4 + *(uint *)(iVar5 + 0x164) * 4),
               *(int *)(iVar3 + 0x134) == *(int *)(iVar5 + 0x168))) {
              if (iVar3 != 0) {
                iVar9 = piVar14[0xb];
                if (iVar9 == piVar14[0xc]) {
                  func_0x00e0a7a0();
                  iVar9 = piVar14[0xb];
                }
                LOCK();
                iVar2 = *(int *)(iVar9 + 0x10);
                *(int *)(iVar9 + 0x10) = 0;
                UNLOCK();
                piVar14[0xb] = iVar2;
                *(undefined1 *)(iVar3 + 0x13c) = 1;
                *(int *)(iVar9 + 4) = iVar3;
                *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar5 + 0x168);
                *(undefined4 *)(iVar9 + 0xc) = 1;
                func_0x00dd15c0(piVar14,iVar9);
              }
            }
            else {
              *(undefined4 *)(iVar5 + 0x164) = 0xffffffff;
            }
            func_0x00dcca70(iVar5);
            uVar7 = 1 << (uVar6 & 0x1f);
            puVar10 = (uint *)(piVar14[0x78] + (uVar6 >> 6) * 0x10);
            uVar8 = 0;
            if (0x1f < (uVar6 & 0x3f)) {
              uVar8 = uVar7;
            }
            uVar7 = uVar7 ^ uVar8;
            if (0x3f < (uVar6 & 0x3f)) {
              uVar8 = uVar7;
            }
            *puVar10 = *puVar10 | uVar7;
            puVar10[1] = puVar10[1] | uVar8;
            piVar14[0x7b] = piVar14[0x7b] + -1;
            piVar14 = piStack_18;
          }
        }
      }
LAB_00dd756f:
      func_0x00e730b2(piVar12);
      piVar13 = piStack_18;
    }
    if (piVar13 != (int *)0x0) {
      LOCK();
      iVar5 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (piVar13 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piVar13);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dd7609(void)

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



void FUN_00dd7630(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint extraout_EDX;
  uint uVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  uint uStack_58;
  undefined1 auStack_48 [12];
  uint *puStack_3c;
  uint *puStack_38;
  uint *puStack_34;
  undefined4 uStack_30;
  char cStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  uint *puStack_20;
  uint *puStack_1c;
  uint *puStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b7dd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_58 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_58;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&puStack_18);
  uStack_8._0_1_ = 1;
  if (puStack_18 != (uint *)0x0) {
    if ((int)param_1 < 0) {
      func_0x00dbfd90(puStack_18,0xa003,"Generating %d sources",param_1);
    }
    else if (0 < (int)param_1) {
      func_0x005e0c90(puStack_18 + 0x7c);
      puVar7 = puStack_18;
      uStack_8._0_1_ = 2;
      if (param_1 <= (uint *)(*(int *)(puStack_18[0x48] + 0x1a47c) - puStack_18[0x7b])) {
        puStack_20 = puStack_18;
        puStack_1c = (uint *)0x0;
        puStack_28 = (uint *)puStack_18[0x79];
        puStack_24 = (uint *)puStack_18[0x78];
        puVar8 = puVar7;
        if (puStack_24 != puStack_28) {
          do {
            uVar4 = *puStack_24;
            uVar3 = uVar4 >> 1 & 0x55555555;
            uVar9 = uVar4 - uVar3;
            uVar4 = (puStack_24[1] - (puStack_24[1] >> 1 & 0x55555555)) - (uint)(uVar4 < uVar3);
            uVar10 = uVar9 & 0x33333333;
            uVar3 = uVar9 >> 2 & 0x33333333;
            uVar9 = uVar3 + uVar10;
            uVar3 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333) + (uint)CARRY4(uVar3,uVar10);
            uVar4 = uVar9 >> 4 | uVar3 * 0x10000000;
            func_0x00e87d70(uVar4 + uVar9 & 0xf0f0f0f,
                            (uVar3 >> 4) + uVar3 + (uint)CARRY4(uVar4,uVar9) & 0xf0f0f0f,
                            &DAT_01010101,&DAT_01010101);
            puStack_1c = (uint *)((int)puStack_1c + (extraout_EDX >> 0x18));
            puStack_24 = puStack_24 + 4;
          } while (puStack_24 != puStack_28);
        }
        for (; puStack_1c < param_1; puStack_1c = puStack_1c + 0x10) {
          puVar1 = (undefined4 *)puVar7[0x79];
          if (0x1ffffff < (uint)((int)((int)puVar1 - puVar7[0x78]) >> 4)) {
LAB_00dd7873:
            puVar6 = &DAT_0112e1b4;
            if (param_1 != (uint *)0x1) {
              puVar6 = &DAT_01141e74;
            }
            func_0x00dbfd90(puVar8,0xa005,"Failed to allocate %d source%s",param_1,puVar6);
            goto LAB_00dd7898;
          }
          if (puVar1 == (undefined4 *)puVar7[0x7a]) {
            func_0x00dcc660(puVar1);
          }
          else {
            puVar1[3] = 0;
            *puVar1 = 0xffffffff;
            puVar1[1] = 0xffffffff;
            puVar1[2] = 0;
            puVar7[0x79] = puVar7[0x79] + 0x10;
          }
          uVar4 = puStack_20[0x79];
          *(undefined4 *)(uVar4 - 0x10) = 0xffffffff;
          *(undefined4 *)(uVar4 - 0xc) = 0xffffffff;
          iVar5 = func_0x00ddbae0(8,0x26400);
          *(int *)(uVar4 - 8) = iVar5;
          if (iVar5 == 0) {
            func_0x00dcc960(puVar7 + 0x78,puVar7[0x79] - 0x10);
            puVar7[0x79] = puVar7[0x79] - 0x10;
            puVar8 = puStack_18;
            goto LAB_00dd7873;
          }
          puVar7 = puStack_20;
          puVar8 = puStack_18;
        }
        if (param_1 != (uint *)0x1) {
          puStack_3c = (uint *)0x0;
          puStack_38 = (uint *)0x0;
          puStack_34 = (uint *)0x0;
          uStack_8._0_1_ = 3;
          if (param_1 < (uint *)0x40000000) {
            puVar7 = (uint *)func_0x00ddbb30(4,(int)param_1 * 4);
            if (puVar7 != (uint *)0x0) {
              func_0x008ab0e6(puVar7,puStack_3c,(int)puStack_38 - (int)puStack_3c);
              if (puStack_3c != (uint *)0x0) {
                func_0x00ddbb20(puStack_3c);
              }
              puStack_34 = puVar7 + (int)param_1;
              puStack_3c = puVar7;
              puStack_38 = puVar7;
              do {
                puStack_24 = (uint *)func_0x00dced70(puStack_18);
                puVar7 = puStack_38;
                if (puStack_38 == puStack_34) {
                  iVar5 = (int)puStack_38 - (int)puStack_3c >> 2;
                  if (iVar5 == 0x3fffffff) goto LAB_00dd7ab5;
                  puStack_1c = (uint *)(iVar5 + 1);
                  uVar4 = (int)puStack_34 - (int)puStack_3c >> 2;
                  if (0x3fffffff - (uVar4 >> 1) < uVar4) {
                    puStack_28 = (uint *)0x3fffffff;
                  }
                  else {
                    puStack_28 = (uint *)((uVar4 >> 1) + uVar4);
                    if (puStack_28 < puStack_1c) {
                      puStack_28 = puStack_1c;
                    }
                  }
                  puStack_20 = puStack_28;
                  puVar8 = (uint *)func_0x00dbbb00(&puStack_3c,&puStack_28);
                  puStack_28 = puVar8 + iVar5;
                  *puStack_28 = puStack_24[0x5a];
                  if (puVar7 == puStack_38) {
                    func_0x008ab0e6(puVar8,puStack_3c,(int)puStack_38 - (int)puStack_3c);
                  }
                  else {
                    func_0x008ab0e6(puVar8,puStack_3c,(int)puVar7 - (int)puStack_3c);
                    func_0x008ab0e6(puStack_28 + 1,puVar7,(int)puStack_38 - (int)puVar7);
                  }
                  if (puStack_3c != (uint *)0x0) {
                    func_0x00ddbb20(puStack_3c);
                  }
                  puStack_38 = puVar8 + (int)puStack_1c;
                  puStack_34 = puVar8 + (int)puStack_20;
                  puStack_3c = puVar8;
                }
                else {
                  *puStack_38 = puStack_24[0x5a];
                  puStack_38 = puStack_38 + 1;
                }
                func_0x00dd65d0(puStack_18);
                puVar7 = puStack_3c;
                param_1 = (uint *)((int)param_1 + -1);
              } while (param_1 != (uint *)0x0);
              func_0x008ab0e6(param_2,puStack_3c,(int)puStack_38 - (int)puStack_3c);
              if (puVar7 != (uint *)0x0) {
                func_0x00ddbb20(puVar7);
              }
              goto LAB_00dd7898;
            }
          }
          else {
            func_0x0046e700();
LAB_00dd7ab5:
            func_0x0046e700();
          }
          func_0x0062c530();
          func_0x00e87d2e(auStack_48,&DAT_0125c4dc);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = func_0x00dced70(puVar8);
        *param_2 = *(undefined4 *)(iVar5 + 0x168);
        func_0x00dd65d0(puStack_18);
LAB_00dd7898:
        if (cStack_2c != '\0') {
          func_0x00e730b2(uStack_30);
        }
        func_0x00dbbf30();
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      func_0x00dbfd90(puStack_18,0xa005,"Exceeding %u source limit (%u + %d)",
                      *(int *)(puStack_18[0x48] + 0x1a47c),puStack_18[0x7b],param_1);
      if (cStack_2c != '\0') {
        func_0x00e730b2(uStack_30);
      }
    }
    if (puStack_18 != (uint *)0x0) {
      LOCK();
      uVar4 = *puStack_18;
      *puStack_18 = *puStack_18 - 1;
      UNLOCK();
      if ((uVar4 == 1) && (puStack_18 != (uint *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(puStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dd7aab(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  func_0x008aaff0();
  func_0x0046e700();
  func_0x0046e700();
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x44,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dd7ae0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_54;
  int *piStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b815;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_54;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_54;
  func_0x00dc77d0(&piStack_34);
  piVar2 = piStack_34;
  uStack_8._0_1_ = 1;
  if (piStack_34 == (int *)0x0) {
LAB_00dd7c36:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar6 = piStack_34 + 0x7c;
  iVar5 = func_0x00e7307f(piVar6);
  piVar3 = piStack_34;
  if (iVar5 == 0) {
    iVar5 = piVar2[0x87];
    if (iVar5 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar5 = func_0x00dd1560(piStack_34,param_1);
      if (iVar5 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (((param_3 == (undefined8 *)0x0) || (param_4 == (undefined8 *)0x0)) ||
              (param_5 == (undefined8 *)0x0)) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        cVar4 = FUN_00dcfc10(iVar5,piStack_34,param_2,&uStack_30,&uStack_18);
        if (cVar4 != '\0') {
          *param_3 = uStack_30;
          *param_4 = uStack_28;
          *param_5 = uStack_20;
        }
      }
      func_0x00e730b2(piVar6);
      if (piStack_34 != (int *)0x0) {
        LOCK();
        iVar5 = *piStack_34;
        *piStack_34 = *piStack_34 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (piStack_34 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_34);
        }
      }
      goto LAB_00dd7c36;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd7c52(void)

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



void FUN_00dd7c70(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                 )

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_54;
  int *piStack_34;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b855;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_54;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_54;
  func_0x00dc77d0(&piStack_34);
  piVar2 = piStack_34;
  uStack_8._0_1_ = 1;
  if (piStack_34 == (int *)0x0) {
LAB_00dd7dd2:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar6 = piStack_34 + 0x7c;
  iVar5 = func_0x00e7307f(piVar6);
  piVar3 = piStack_34;
  if (iVar5 == 0) {
    iVar5 = piVar2[0x87];
    if (iVar5 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar5 = func_0x00dd1560(piStack_34,param_1);
      if (iVar5 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (((param_3 == (float *)0x0) || (param_4 == (float *)0x0)) || (param_5 == (float *)0x0)
              ) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        cVar4 = FUN_00dcfc10(iVar5,piStack_34,param_2,&dStack_30,&uStack_18);
        if (cVar4 != '\0') {
          *param_3 = (float)dStack_30;
          *param_4 = (float)dStack_28;
          *param_5 = (float)dStack_20;
        }
      }
      func_0x00e730b2(piVar6);
      if (piStack_34 != (int *)0x0) {
        LOCK();
        iVar5 = *piStack_34;
        *piStack_34 = *piStack_34 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (piStack_34 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_34);
        }
      }
      goto LAB_00dd7dd2;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd7dee(void)

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



void FUN_00dd7e10(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_48;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b895;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_48 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_48;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_48;
  func_0x00dc77d0(&piStack_28);
  piVar2 = piStack_28;
  uStack_8._0_1_ = 1;
  if (piStack_28 == (int *)0x0) {
LAB_00dd7f5a:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar6 = piStack_28 + 0x7c;
  iVar5 = func_0x00e7307f(piVar6);
  piVar3 = piStack_28;
  if (iVar5 == 0) {
    iVar5 = piVar2[0x87];
    if (iVar5 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar5 = func_0x00dd1560(piStack_28,param_1);
      if (iVar5 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) ||
              (param_5 == (undefined4 *)0x0)) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        cVar4 = FUN_00dd0940(iVar5,piStack_28,param_2,&uStack_24,&uStack_18);
        if (cVar4 != '\0') {
          *param_3 = uStack_24;
          *param_4 = uStack_20;
          *param_5 = uStack_1c;
        }
      }
      func_0x00e730b2(piVar6);
      if (piStack_28 != (int *)0x0) {
        LOCK();
        iVar5 = *piStack_28;
        *piStack_28 = *piStack_28 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (piStack_28 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_28);
        }
      }
      goto LAB_00dd7f5a;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd7f76(void)

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



void FUN_00dd7f90(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_54;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b8d5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_54;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_54;
  func_0x00dc77d0(&piStack_34);
  piVar2 = piStack_34;
  uStack_8._0_1_ = 1;
  if (piStack_34 == (int *)0x0) {
LAB_00dd80ec:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar6 = piStack_34 + 0x7c;
  iVar5 = func_0x00e7307f(piVar6);
  piVar3 = piStack_34;
  if (iVar5 == 0) {
    iVar5 = piVar2[0x87];
    if (iVar5 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar5 = func_0x00dd1560(piStack_34,param_1);
      if (iVar5 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) ||
              (param_5 == (undefined4 *)0x0)) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        cVar4 = FUN_00dd0340(iVar5,piStack_34,param_2,&uStack_30,&uStack_18);
        if (cVar4 != '\0') {
          *param_3 = uStack_30;
          param_3[1] = uStack_2c;
          *param_4 = uStack_28;
          param_4[1] = uStack_24;
          *param_5 = uStack_20;
          param_5[1] = uStack_1c;
        }
      }
      func_0x00e730b2(piVar6);
      if (piStack_34 != (int *)0x0) {
        LOCK();
        iVar5 = *piStack_34;
        *piStack_34 = *piStack_34 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (piStack_34 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_34);
        }
      }
      goto LAB_00dd80ec;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd8108(void)

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



void FUN_00dd8120(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b915;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd822e:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x7c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x87];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar4 = func_0x00dd1560(piStack_18,param_1);
      if (iVar4 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == 0) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        FUN_00dcfc10(iVar4,piStack_18,param_2,param_3,param_3 + 8);
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
      goto LAB_00dd822e;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd8240(void)

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



void FUN_00dd8260(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b955;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd8334:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x7c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x87];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar4 = func_0x00dd1560(piStack_18,param_1);
      if (iVar4 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == 0) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        uVar6 = func_0x00dcee90(param_2);
        FUN_00dcfc10(iVar4,piStack_18,(int)((ulonglong)uVar6 >> 0x20),param_3,
                     param_3 + (int)uVar6 * 8);
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
      goto LAB_00dd8334;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd838a(void)

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



void FUN_00dd83b0(undefined4 param_1,undefined4 param_2,float *param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  double dStack_24;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b995;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd84d1:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar6 = piStack_18 + 0x7c;
  piStack_1c = piVar6;
  iVar5 = func_0x00e7307f(piVar6);
  piVar3 = piStack_18;
  if (iVar5 == 0) {
    iVar5 = piVar2[0x87];
    if (iVar5 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar5 = func_0x00dd1560(piStack_18,param_1);
      if (iVar5 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == (float *)0x0) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        cVar4 = FUN_00dcfc10(iVar5,piStack_18,param_2,&dStack_24,&piStack_1c);
        if (cVar4 != '\0') {
          *param_3 = (float)dStack_24;
        }
      }
      func_0x00e730b2(piVar6);
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
      goto LAB_00dd84d1;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd84e3(void)

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



void FUN_00dd8500(undefined4 param_1,undefined4 param_2,float *param_3)

{
  double *pdVar1;
  double *pdVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  int *piStack_4c;
  double adStack_48 [6];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b9d5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_6c;
  func_0x00dc77d0(&piStack_4c);
  piVar4 = piStack_4c;
  uStack_8._0_1_ = 1;
  if (piStack_4c == (int *)0x0) {
LAB_00dd85dd:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar9 = piStack_4c + 0x7c;
  iVar7 = func_0x00e7307f(piVar9);
  piVar5 = piStack_4c;
  if (iVar7 == 0) {
    iVar7 = piVar4[0x87];
    if (iVar7 != 0x7fffffff) {
      uStack_8._0_1_ = 2;
      iVar7 = func_0x00dd1560(piStack_4c,param_1);
      if (iVar7 == 0) {
        func_0x00dbfd90(piVar5,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == (float *)0x0) {
        func_0x00dbfd90(piVar5,0xa003,"NULL pointer");
      }
      else {
        iVar8 = func_0x00dcefd0(param_2);
        cVar6 = FUN_00dcfc10(iVar7,piStack_4c,param_2,adStack_48,adStack_48 + iVar8);
        if ((cVar6 != '\0') && (iVar8 != 0)) {
          pdVar1 = adStack_48;
          *param_3 = (float)adStack_48[0];
          while (iVar8 = iVar8 + -1, iVar8 != 0) {
            param_3 = param_3 + 1;
            pdVar2 = pdVar1 + 1;
            pdVar1 = pdVar1 + 1;
            *param_3 = (float)*pdVar2;
          }
        }
      }
      func_0x00e730b2(piVar9);
      if (piStack_4c != (int *)0x0) {
        LOCK();
        iVar7 = *piStack_4c;
        *piStack_4c = *piStack_4c + -1;
        UNLOCK();
        if ((iVar7 == 1) && (piStack_4c != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_4c);
        }
      }
      goto LAB_00dd85dd;
    }
  }
  else {
    iVar7 = func_0x00e7304a(5);
  }
  piVar4[0x87] = iVar7 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void Catch_All_00dd868e(void)

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



void FUN_00dd86b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ba15;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd87be:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x7c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x87];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar4 = func_0x00dd1560(piStack_18,param_1);
      if (iVar4 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == 0) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        FUN_00dd0940(iVar4,piStack_18,param_2,param_3,param_3 + 4);
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
      goto LAB_00dd87be;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd87d0(void)

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



void FUN_00dd87f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ba55;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd88fe:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x7c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x87];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar4 = func_0x00dd1560(piStack_18,param_1);
      if (iVar4 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == 0) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        FUN_00dd0340(iVar4,piStack_18,param_2,param_3,param_3 + 8);
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
      goto LAB_00dd88fe;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd8910(void)

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



void FUN_00dd8930(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ba95;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd8a04:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x7c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x87];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar4 = func_0x00dd1560(piStack_18,param_1);
      if (iVar4 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == 0) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        uVar6 = func_0x00dd12a0(param_2);
        FUN_00dd0340(iVar4,piStack_18,(int)((ulonglong)uVar6 >> 0x20),param_3,
                     param_3 + (int)uVar6 * 8);
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
      goto LAB_00dd8a04;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd8a5a(void)

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



void FUN_00dd8a80(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bad5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd8b54:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x7c;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x87];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar4 = func_0x00dd1560(piStack_18,param_1);
      if (iVar4 == 0) {
        func_0x00dbfd90(piVar3,0xa001,"Invalid source ID %u",param_1);
      }
      else if (param_3 == 0) {
        func_0x00dbfd90(piVar3,0xa003,"NULL pointer");
      }
      else {
        uVar6 = func_0x00dd13d0(param_2);
        FUN_00dd0940(iVar4,piStack_18,(int)((ulonglong)uVar6 >> 0x20),param_3,
                     param_3 + (int)uVar6 * 4);
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
      goto LAB_00dd8b54;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd8baa(void)

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



undefined4 FUN_00dd8bd0(undefined4 param_1)

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
  
  puStack_c = &DAT_00f6bb0d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
LAB_00dd8cc7:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  piVar5 = piStack_18 + 0x7c;
  iVar3 = func_0x00e7307f(piVar5);
  if (iVar3 == 0) {
    iVar3 = piVar2[0x87];
    if (iVar3 != 0x7fffffff) {
      iVar3 = func_0x00dd1560(piStack_18,param_1);
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
      goto LAB_00dd8cc7;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



void Catch_All_00dd8cdb(void)

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



void FUN_00dd8d00(undefined4 param_1,undefined4 param_2,double param_3,double param_4,double param_5
                 )

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_44;
  int *piStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bb4d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_44;
  func_0x00dc77d0(&piStack_28);
  piVar2 = piStack_28;
  uStack_8._0_1_ = 1;
  if (piStack_28 == (int *)0x0) {
LAB_00dd8e57:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar5 = piStack_28 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_28;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00dd8e7f;
    unaff_EDI = piStack_28 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8._0_1_ = 3;
        iVar4 = func_0x00dd1560(piStack_28,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_28,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          fStack_24 = (float)param_3;
          fStack_20 = (float)param_4;
          fStack_1c = (float)param_5;
          FUN_00dd1650(iVar4,piStack_28,param_2,&fStack_24,&uStack_18);
        }
        func_0x00e730b2(unaff_EDI);
        func_0x00e730b2(piVar5);
        if (piStack_28 != (int *)0x0) {
          LOCK();
          iVar4 = *piStack_28;
          *piStack_28 = *piStack_28 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piStack_28 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_28);
          }
        }
        goto LAB_00dd8e57;
      }
      goto LAB_00dd8e91;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00dd8e7f:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00dd8e91:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd8e73(void)

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



void FUN_00dd8ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_44;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bb9d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_44;
  func_0x00dc77d0(&piStack_28);
  piVar2 = piStack_28;
  uStack_8._0_1_ = 1;
  if (piStack_28 == (int *)0x0) {
LAB_00dd8feb:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar5 = piStack_28 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_28;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00dd9013;
    unaff_EDI = piStack_28 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8._0_1_ = 3;
        iVar4 = func_0x00dd1560(piStack_28,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_28,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          uStack_24 = param_3;
          uStack_20 = param_4;
          uStack_1c = param_5;
          FUN_00dd1650(iVar4,piStack_28,param_2,&uStack_24,&uStack_18);
        }
        func_0x00e730b2(unaff_EDI);
        func_0x00e730b2(piVar5);
        if (piStack_28 != (int *)0x0) {
          LOCK();
          iVar4 = *piStack_28;
          *piStack_28 = *piStack_28 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piStack_28 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_28);
          }
        }
        goto LAB_00dd8feb;
      }
      goto LAB_00dd9025;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00dd9013:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00dd9025:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd9007(void)

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



void FUN_00dd9040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_44;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bbed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_44;
  func_0x00dc77d0(&piStack_28);
  piVar2 = piStack_28;
  uStack_8._0_1_ = 1;
  if (piStack_28 == (int *)0x0) {
LAB_00dd917f:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar5 = piStack_28 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_28;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00dd91a7;
    unaff_EDI = piStack_28 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8._0_1_ = 3;
        iVar4 = func_0x00dd1560(piStack_28,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_28,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          uStack_24 = param_3;
          uStack_20 = param_4;
          uStack_1c = param_5;
          FUN_00dd2740(iVar4,piStack_28,param_2,&uStack_24,&uStack_18);
        }
        func_0x00e730b2(unaff_EDI);
        func_0x00e730b2(piVar5);
        if (piStack_28 != (int *)0x0) {
          LOCK();
          iVar4 = *piStack_28;
          *piStack_28 = *piStack_28 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piStack_28 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_28);
          }
        }
        goto LAB_00dd917f;
      }
      goto LAB_00dd91b9;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00dd91a7:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00dd91b9:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd919b(void)

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



void FUN_00dd91d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_50;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_50 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_50;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_50;
  func_0x00dc77d0(&piStack_34);
  piVar2 = piStack_34;
  uStack_8._0_1_ = 1;
  if (piStack_34 == (int *)0x0) {
LAB_00dd9321:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar5 = piStack_34 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_34;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00dd9349;
    unaff_EDI = piStack_34 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8._0_1_ = 3;
        iVar4 = func_0x00dd1560(piStack_34,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_34,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          uStack_30 = param_3;
          uStack_2c = param_4;
          uStack_28 = param_5;
          uStack_24 = param_6;
          uStack_20 = param_7;
          uStack_1c = param_8;
          FUN_00dd2310(iVar4,piStack_34,param_2,&uStack_30,&uStack_18);
        }
        func_0x00e730b2(unaff_EDI);
        func_0x00e730b2(piVar5);
        if (piStack_34 != (int *)0x0) {
          LOCK();
          iVar4 = *piStack_34;
          *piStack_34 = *piStack_34 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piStack_34 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_34);
          }
        }
        goto LAB_00dd9321;
      }
      goto LAB_00dd935b;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00dd9349:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00dd935b:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd933d(void)

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



void FUN_00dd9370(void)

{
  FUN_00dd9380(1,&stack0x00000004);
  return;
}



void FUN_00dd9380(uint param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  uint uStack_7c;
  int aiStack_6c [8];
  int *piStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bc8d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_7c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_7c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_1c != (int *)0x0) {
    if ((int)param_1 < 0) {
      func_0x00dbfd90(piStack_1c,0xa003,"Pausing %d sources",param_1);
    }
    else if (0 < (int)param_1) {
      piStack_4c = (int *)0x0;
      iStack_48 = 0;
      uStack_44 = 0;
      uStack_8._0_1_ = 2;
      if (param_1 < 9) {
        piVar10 = aiStack_6c + param_1;
        piVar7 = aiStack_6c;
      }
      else {
        func_0x00dcc7b0(param_1,&uStack_15);
        piVar10 = piStack_4c + (iStack_48 - (int)piStack_4c >> 2);
        piVar7 = piStack_4c;
      }
      piVar3 = piStack_1c;
      piVar8 = piStack_1c + 0x7c;
      piStack_3c = piVar8;
      piStack_2c = piVar7;
      piStack_28 = piVar10;
      piStack_20 = piVar10;
      iVar4 = func_0x00e7307f(piVar8);
      if (iVar4 != 0) {
        iVar4 = func_0x00e7304a(5);
LAB_00dd9763:
        piVar3[0x87] = iVar4 + -1;
        func_0x00e7304a(6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = piVar3[0x87];
      if (iVar4 == 0x7fffffff) goto LAB_00dd9763;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      for (; piVar7 != piVar10; piVar7 = piVar7 + 1) {
        uVar5 = *param_2 - 1;
        piStack_38 = (int *)(uVar5 & 0x3f);
        if ((uint)(piStack_1c[0x79] - piStack_1c[0x78] >> 4) <= uVar5 >> 6) {
LAB_00dd9501:
          *piVar7 = 0;
LAB_00dd9507:
          func_0x00dbfd90(piStack_1c,0xa001,"Invalid source ID %u",*param_2);
          goto LAB_00dd9521;
        }
        puVar9 = (uint *)((uVar5 >> 6) * 0x10 + piStack_1c[0x78]);
        uVar5 = 1 << (uVar5 & 0x1f);
        uVar6 = 0;
        if (&DAT_0000001f < piStack_38) {
          uVar6 = uVar5;
        }
        uVar5 = uVar5 ^ uVar6;
        if ((int *)0x3f < piStack_38) {
          uVar6 = uVar5;
        }
        if ((uVar5 & *puVar9) != 0 || (uVar6 & puVar9[1]) != 0) goto LAB_00dd9501;
        iVar4 = (int)piStack_38 * 0x990 + puVar9[2];
        *piVar7 = iVar4;
        if (iVar4 == 0) goto LAB_00dd9507;
        param_2 = param_2 + 1;
        piVar10 = piStack_28;
      }
      piVar10 = (int *)0x0;
      piStack_28 = (int *)0x0;
      for (piStack_38 = piStack_2c; piVar7 = piStack_1c, piStack_38 != piStack_20;
          piStack_38 = piStack_38 + 1) {
        iVar4 = *piStack_38;
        if ((*(uint *)(iVar4 + 0x164) < (uint)((piStack_1c[0x35] << 2) >> 2)) &&
           (iStack_34 = *(int *)(piStack_1c[0x34] + 4 + *(uint *)(iVar4 + 0x164) * 4),
           *(int *)(iStack_34 + 0x134) == *(int *)(iVar4 + 0x168))) {
          if (iStack_34 == 0) goto LAB_00dd95f4;
LAB_00dd960e:
          if (*(int *)(iVar4 + 0x148) == 0x1012) {
            if (piVar10 == (int *)0x0) {
              piVar10 = (int *)piStack_1c[0xb];
              if (piVar10 == (int *)piStack_1c[0xc]) {
                piStack_28 = piVar10;
                func_0x00e0a7a0();
                piVar10 = (int *)piVar7[0xb];
              }
              LOCK();
              iVar1 = piVar10[4];
              piVar10[4] = 0;
              UNLOCK();
              piVar7[0xb] = iVar1;
              piStack_28 = piVar10;
            }
            else {
              piStack_30 = piStack_1c;
              iStack_24 = piStack_1c[0xb];
              if (iStack_24 == piStack_1c[0xc]) {
                func_0x00e0a7a0();
                iStack_24 = piStack_30[0xb];
              }
              LOCK();
              iVar1 = *(int *)(iStack_24 + 0x10);
              *(int *)(iStack_24 + 0x10) = 0;
              UNLOCK();
              piStack_30[0xb] = iVar1;
              piVar10[4] = iStack_24;
              piVar10 = (int *)piVar10[4];
            }
            piVar10[1] = iStack_34;
            piVar10[2] = *(int *)(iVar4 + 0x168);
            piVar10[3] = 3;
          }
        }
        else {
          *(undefined4 *)(iVar4 + 0x164) = 0xffffffff;
          iStack_34 = 0;
LAB_00dd95f4:
          if (*(int *)(iVar4 + 0x148) == 0x1012) {
            *(undefined4 *)(iVar4 + 0x148) = 0x1014;
            goto LAB_00dd960e;
          }
        }
      }
      if (piStack_28 != (int *)0x0) {
        func_0x00dd15c0(piStack_1c,piStack_28);
        for (piVar10 = piStack_2c; piVar10 != piStack_20; piVar10 = piVar10 + 1) {
          iVar4 = *piVar10;
          piStack_38 = (int *)piStack_1c[0x34];
          if ((*(uint *)(iVar4 + 0x164) < (uint)((piStack_1c[0x35] << 2) >> 2)) &&
             (*(int *)(piStack_38[*(uint *)(iVar4 + 0x164) + 1] + 0x134) == *(int *)(iVar4 + 0x168))
             ) {
            if (piStack_38[*(uint *)(iVar4 + 0x164) + 1] == 0) goto LAB_00dd971e;
LAB_00dd9734:
            if (*(int *)(iVar4 + 0x148) == 0x1012) {
              *(undefined4 *)(iVar4 + 0x148) = 0x1013;
            }
          }
          else {
            *(undefined4 *)(iVar4 + 0x164) = 0xffffffff;
LAB_00dd971e:
            if (*(int *)(iVar4 + 0x148) == 0x1012) {
              *(undefined4 *)(iVar4 + 0x148) = 0x1014;
              goto LAB_00dd9734;
            }
          }
        }
      }
LAB_00dd9521:
      func_0x00e730b2(piVar8);
      if (piStack_4c != (int *)0x0) {
        func_0x00ddbb20(piStack_4c);
        piStack_4c = (int *)0x0;
        iStack_48 = 0;
        uStack_44 = 0;
      }
    }
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
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dd9757(void)

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



void FUN_00dd9770(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bcc5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dd9846:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar4 = piStack_18 + 0x7c;
  iVar3 = func_0x00e7307f(piVar4);
  if (iVar3 == 0) {
    iVar3 = piVar2[0x87];
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iStack_1c = func_0x00dd1560(piStack_18,param_1);
      if (iStack_1c == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
      }
      else {
        func_0x00dd3830(piStack_18,&iStack_1c,&piStack_18,0,0x80000000);
      }
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
      goto LAB_00dd9846;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  piVar2[0x87] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dd987c(void)

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



void FUN_00dd98a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bd05;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if ((param_3 < 1) && (param_3 < 0)) {
      func_0x00dbfd90(piStack_18,0xa003,"Invalid time point %lld",param_2,param_3);
    }
    else {
      piVar4 = piStack_18 + 0x7c;
      iVar3 = func_0x00e7307f(piVar4);
      if (iVar3 != 0) {
        iVar3 = func_0x00e7304a(5);
LAB_00dd99df:
        piVar2[0x87] = iVar3 + -1;
        func_0x00e7304a(6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = piVar2[0x87];
      if (iVar3 == 0x7fffffff) goto LAB_00dd99df;
      uStack_8._0_1_ = 2;
      iStack_1c = func_0x00dd1560(piStack_18,param_1);
      if (iStack_1c == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        func_0x00e730b2(piVar4);
      }
      else {
        func_0x00dd3830(piStack_18,&iStack_1c,&piStack_18,param_2,param_3);
        func_0x00e730b2(piVar4);
      }
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
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dd99d3(void)

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



void FUN_00dd99f0(uint param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *unaff_FS_OFFSET;
  uint uStack_74;
  int aiStack_64 [8];
  int *piStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_20;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bd4d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_74 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_74;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_1c != (int *)0x0) {
    if ((int)param_1 < 0) {
      func_0x00dbfd90(piStack_1c,0xa003,"Playing %d sources",param_1);
    }
    else if (0 < (int)param_1) {
      if ((param_4 < 1) && (param_4 < 0)) {
        func_0x00dbfd90(piStack_1c,0xa003,"Invalid time point %lld",param_3,param_4);
      }
      else {
        piStack_44 = (int *)0x0;
        iStack_40 = 0;
        uStack_3c = 0;
        uStack_8._0_1_ = 2;
        if (param_1 < 9) {
          piStack_28 = aiStack_64 + param_1;
          piVar2 = aiStack_64;
        }
        else {
          func_0x00dcc7b0(param_1,&uStack_15);
          piStack_28 = piStack_44 + (iStack_40 - (int)piStack_44 >> 2);
          piVar2 = piStack_44;
        }
        uStack_34 = 0;
        piStack_2c = piVar2;
        piStack_20 = piStack_28;
        func_0x005797f0(piStack_1c + 0x7c);
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        for (; piVar2 != piStack_20; piVar2 = piVar2 + 1) {
          iVar1 = func_0x00dd1560(piStack_1c,*param_2);
          *piVar2 = iVar1;
          if (iVar1 == 0) {
            func_0x00dbfd90(piStack_1c,0xa001,"Invalid source ID %u",*param_2);
            goto LAB_00dd9b5f;
          }
          param_2 = param_2 + 1;
        }
        func_0x00dd3830(piStack_1c,piStack_2c,piStack_2c + ((int)piStack_28 - (int)piStack_2c >> 2),
                        param_3,param_4);
LAB_00dd9b5f:
        func_0x00e730b2(uStack_30);
        if (piStack_44 != (int *)0x0) {
          func_0x00ddbb20(piStack_44);
          piStack_44 = (int *)0x0;
          iStack_40 = 0;
          uStack_3c = 0;
        }
      }
    }
    if (piStack_1c != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_1c;
      *piStack_1c = *piStack_1c + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piStack_1c != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_1c);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dd9bc9(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dd9bd0(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  int *unaff_FS_OFFSET;
  uint uStack_70;
  int aiStack_60 [8];
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int *piStack_30;
  uint uStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_70 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_70;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_1c != (int *)0x0) {
    if ((int)param_1 < 0) {
      func_0x00dbfd90(piStack_1c,0xa003,"Playing %d sources",param_1);
    }
    else if (0 < (int)param_1) {
      piStack_40 = (int *)0x0;
      iStack_3c = 0;
      uStack_38 = 0;
      uStack_8._0_1_ = 2;
      if (param_1 < 9) {
        piVar8 = aiStack_60 + param_1;
        piVar6 = aiStack_60;
      }
      else {
        func_0x00dcc7b0(param_1,&uStack_15);
        piVar8 = piStack_40 + (iStack_3c - (int)piStack_40 >> 2);
        piVar6 = piStack_40;
      }
      piVar2 = piStack_1c;
      piVar7 = piStack_1c + 0x7c;
      piStack_30 = piVar7;
      piStack_28 = piVar6;
      piStack_24 = piVar8;
      piStack_20 = piVar8;
      iVar3 = func_0x00e7307f(piVar7);
      if (iVar3 != 0) {
        iVar3 = func_0x00e7304a(5);
LAB_00dd9e13:
        piVar2[0x87] = iVar3 + -1;
        func_0x00e7304a(6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = piVar2[0x87];
      if (iVar3 == 0x7fffffff) goto LAB_00dd9e13;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
        uVar4 = *param_2 - 1;
        uStack_2c = uVar4 & 0x3f;
        if ((uint)(piStack_1c[0x79] - piStack_1c[0x78] >> 4) <= uVar4 >> 6) {
LAB_00dd9d51:
          *piVar6 = 0;
LAB_00dd9d57:
          func_0x00dbfd90(piStack_1c,0xa001,"Invalid source ID %u",*param_2);
          goto LAB_00dd9d71;
        }
        puVar9 = (uint *)((uVar4 >> 6) * 0x10 + piStack_1c[0x78]);
        uVar4 = 1 << (uVar4 & 0x1f);
        uVar5 = 0;
        if (0x1f < uStack_2c) {
          uVar5 = uVar4;
        }
        uVar4 = uVar4 ^ uVar5;
        if (0x3f < uStack_2c) {
          uVar5 = uVar4;
        }
        if ((uVar4 & *puVar9) != 0 || (uVar5 & puVar9[1]) != 0) goto LAB_00dd9d51;
        iVar3 = uStack_2c * 0x990 + puVar9[2];
        *piVar6 = iVar3;
        if (iVar3 == 0) goto LAB_00dd9d57;
        param_2 = param_2 + 1;
        piVar8 = piStack_20;
      }
      func_0x00dd3830(piStack_1c,piStack_28,piStack_28 + ((int)piStack_24 - (int)piStack_28 >> 2),0,
                      0x80000000);
LAB_00dd9d71:
      func_0x00e730b2(piVar7);
      if (piStack_40 != (int *)0x0) {
        func_0x00ddbb20(piStack_40);
        piStack_40 = (int *)0x0;
        iStack_3c = 0;
        uStack_38 = 0;
      }
    }
    if (piStack_1c != (int *)0x0) {
      LOCK();
      iVar3 = *piStack_1c;
      *piStack_1c = *piStack_1c + -1;
      UNLOCK();
      if ((iVar3 == 1) && (piStack_1c != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_1c);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dd9e07(void)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00dd9e20(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar7;
  undefined4 uVar5;
  int *piVar6;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int unaff_ESI;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  char *pcVar15;
  uint uStack_68;
  undefined1 auStack_58 [12];
  int iStack_4c;
  undefined1 uStack_48;
  int *piStack_44;
  int *piStack_40;
  uint *puStack_3c;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  int *piStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  char cStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bdcd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_68 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_68;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  piVar6 = piStack_1c;
  uStack_8._0_1_ = 1;
  if (piStack_1c == (int *)0x0) goto LAB_00dd9eaf;
  if (param_2 < 0) {
    func_0x00dbfd90(piStack_1c,0xa003,"Queueing %d buffers",param_2);
    piVar6 = piStack_1c;
LAB_00dd9e8b:
    if (piVar6 == (int *)0x0) goto LAB_00dd9eaf;
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if ((iVar3 != 1) || (piVar6 == (int *)0x0)) goto LAB_00dd9eaf;
    func_0x00ddc830();
  }
  else {
    if (param_2 < 1) goto LAB_00dd9e8b;
    piVar14 = piStack_1c + 0x7c;
    piStack_44 = piVar14;
    iVar3 = func_0x00e7307f(piVar14);
    piVar12 = piStack_1c;
    if (iVar3 != 0) {
      iVar3 = func_0x00e7304a(5);
LAB_00dda458:
      piVar6[0x87] = iVar3 + -1;
      func_0x00e7304a(6);
LAB_00dda463:
      iVar3 = func_0x00e7304a(5);
LAB_00dda46a:
      *(int *)(unaff_ESI + 0x2c) = iVar3 + -1;
      func_0x00e7304a(6);
LAB_00dda475:
      func_0x0062c530();
      func_0x00e87d2e(auStack_58,&DAT_0125c4dc);
LAB_00dda48b:
      func_0x00585aa0(1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = piVar6[0x87];
    if (iVar3 == 0x7fffffff) goto LAB_00dda458;
    uStack_8._0_1_ = 2;
    iStack_20 = func_0x00dd1560(piStack_1c,param_1);
    if (iStack_20 != 0) {
      if (*(int *)(iStack_20 + 0x144) == 0x1028) {
        func_0x00dbfd90(piVar12,0xa004,"Queueing onto static source %u",param_1);
        func_0x00e730b2(piVar14);
        func_0x00dbbf30();
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      iVar3 = piVar12[0x48];
      uVar9 = *(uint *)(iStack_20 + 0x158);
      uVar11 = *(int *)(iStack_20 + 0x15c) + uVar9;
      piStack_24 = (int *)0x0;
      if (uVar9 != uVar11) {
        uStack_38 = *(int *)(iStack_20 + 0x154) - 1;
        do {
          piStack_24 = *(int **)(*(int *)(*(int *)(iStack_20 + 0x150) + (uVar9 & uStack_38) * 4) +
                                0x20);
          if (piStack_24 != (int *)0x0) break;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
      piVar6 = piStack_24;
      unaff_ESI = iVar3 + 0x1a4b0;
      uStack_48 = 0;
      iStack_4c = unaff_ESI;
      iStack_28 = iVar3;
      iVar4 = func_0x00e7307f(unaff_ESI);
      if (iVar4 != 0) goto LAB_00dda463;
      iVar3 = *(int *)(iVar3 + 0x1a4dc);
      if (iVar3 != 0x7fffffff) {
        uStack_48 = 1;
        iStack_30 = 0;
        uStack_8._0_1_ = 3;
        piStack_2c = (int *)0x0;
        uStack_34 = *(uint *)(iStack_20 + 0x15c);
        while (iStack_30 < param_2) {
          piVar12 = (int *)0x0;
          iVar3 = *(int *)(param_3 + iStack_30 * 4);
          if (iVar3 != 0) {
            uVar9 = iVar3 - 1;
            uStack_38 = uVar9 & 0x3f;
            if (uVar9 >> 6 <
                (uint)(*(int *)(iStack_28 + 0x1a4e4) - *(int *)(iStack_28 + 0x1a4e0) >> 4)) {
              puStack_3c = (uint *)((uVar9 >> 6) * 0x10 + *(int *)(iStack_28 + 0x1a4e0));
              uVar9 = 1 << (uVar9 & 0x1f);
              uVar11 = 0;
              if (0x1f < uStack_38) {
                uVar11 = uVar9;
              }
              uVar9 = uVar9 ^ uVar11;
              if (0x3f < uStack_38) {
                uVar11 = uVar9;
              }
              if (((uVar9 & *puStack_3c) == 0 && (uVar11 & puStack_3c[1]) == 0) &&
                 (piVar12 = (int *)(uStack_38 * 0x68 + puStack_3c[2]), piVar12 != (int *)0x0)) {
                if (piVar12[4] == 0) {
                  iVar3 = piVar12[0x18];
                  pcVar15 = "Queueing buffer %u with no format";
                }
                else if (*piVar12 == 0) {
                  if ((piVar12[0x12] == 0) || ((piVar12[0x12] & 4U) != 0)) goto LAB_00dda105;
                  iVar3 = piVar12[0x18];
                  pcVar15 = "Queueing non-persistently mapped buffer %u";
                }
                else {
                  iVar3 = piVar12[0x18];
                  pcVar15 = "Queueing callback buffer %u";
                }
                func_0x00dbfd90(piStack_1c,0xa004,pcVar15,iVar3);
                goto LAB_00dda26f;
              }
            }
            func_0x00dbfd90(piStack_1c,0xa001,"Queueing invalid buffer ID %u",
                            *(undefined4 *)(param_3 + iStack_30 * 4));
LAB_00dda26f:
            iVar3 = iStack_20;
            piStack_40 = *(int **)(iStack_20 + 0x14c);
            for (uVar9 = *(int *)(iStack_20 + 0x158) + uStack_34;
                uVar11 = *(uint *)(iStack_20 + 0x15c), uVar9 != *(int *)(iStack_20 + 0x158) + uVar11
                ; uVar9 = uVar9 + 1) {
              if (piStack_40 == (int *)0x0) {
                iVar4 = 0;
              }
              else {
                iVar4 = *piStack_40;
              }
              iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 4) + (*(int *)(iVar4 + 8) - 1U & uVar9) * 4
                                       ) + 0x20);
              if (iVar4 != 0) {
                piVar6 = (int *)(iVar4 + 0x5c);
                LOCK();
                *piVar6 = *piVar6 + -1;
                UNLOCK();
              }
            }
            while (uVar11 < uStack_34) {
              if (*(uint *)(iVar3 + 0x154) <= uVar11 + 1) {
                func_0x00dd4170(1);
              }
              *(uint *)(iVar3 + 0x158) = *(uint *)(iVar3 + 0x158) & *(int *)(iVar3 + 0x154) - 1U;
              puStack_3c = (uint *)(*(int *)(iVar3 + 0x15c) + *(int *)(iVar3 + 0x158));
              piStack_40 = (int *)((*(int *)(iVar3 + 0x154) - 1U & (uint)puStack_3c) * 4);
              if (*(int *)((int)piStack_40 + *(int *)(iVar3 + 0x150)) == 0) {
                iVar4 = func_0x00ddbb30(4,0x24);
                if (iVar4 != 0) {
                  *(int *)((int)piStack_40 + *(int *)(iVar3 + 0x150)) = iVar4;
                  goto LAB_00dda326;
                }
                goto LAB_00dda475;
              }
LAB_00dda326:
              puVar13 = *(undefined4 **)
                         (*(int *)(iVar3 + 0x150) +
                         (*(int *)(iVar3 + 0x154) - 1U & (uint)puStack_3c) * 4);
              *puVar13 = 0;
              puVar13[1] = 0;
              puVar13[2] = 0;
              puVar13[3] = 0;
              puVar13[4] = 0;
              puVar13[5] = 0;
              puVar13[6] = 0;
              puVar13[7] = 0;
              puVar13[8] = 0;
              *(int *)(iVar3 + 0x15c) = *(int *)(iVar3 + 0x15c) + 1;
              uVar11 = *(uint *)(iVar3 + 0x15c);
            }
            while (uStack_34 < uVar11) {
              uVar11 = uVar11 - 1;
              *(uint *)(iVar3 + 0x15c) = uVar11;
              if (uVar11 == 0) {
                *(undefined4 *)(iVar3 + 0x158) = 0;
              }
            }
            func_0x00e730b2(iStack_28 + 0x1a4b0);
            func_0x00e730b2(piVar14);
            if (piStack_1c == (int *)0x0) goto LAB_00dd9eaf;
            LOCK();
            iVar3 = *piStack_1c;
            *piStack_1c = *piStack_1c + -1;
            UNLOCK();
            piVar6 = piStack_1c;
            goto LAB_00dd9f32;
          }
LAB_00dda105:
          func_0x00dcc5a0();
          uStack_38 = *(int *)(iStack_20 + 0x154) - 1;
          uVar9 = *(int *)(iStack_20 + 0x158) + *(int *)(iStack_20 + 0x15c) + -1 & uStack_38;
          if (piStack_2c == (int *)0x0) {
            piVar10 = *(int **)(*(int *)(iStack_20 + 0x150) + uVar9 * 4);
          }
          else {
            piVar10 = *(int **)(*(int *)(iStack_20 + 0x150) + uVar9 * 4);
            *piStack_2c = (int)piVar10;
            piVar6 = piStack_24;
          }
          piStack_2c = piVar10;
          if (piVar12 == (int *)0x0) {
LAB_00dda3c6:
            iStack_30 = iStack_30 + 1;
          }
          else {
            piVar10[3] = piVar12[7];
            piVar10[4] = piVar12[6];
            piVar10[6] = piVar12[6];
            piVar10[7] = piVar12[2];
            piVar10[8] = (int)piVar12;
            LOCK();
            piVar12[0x17] = piVar12[0x17] + 1;
            UNLOCK();
            if (piVar6 != (int *)0x0) {
              cStack_15 = (char)piVar6[5];
              piStack_40 = (int *)CONCAT31(piStack_40._1_3_,(char)piVar12[5]);
              bVar8 = *(char *)((int)piStack_24 + 0x15) != *(char *)((int)piVar12 + 0x15) ||
                      cStack_15 != (char)piVar12[5];
              puStack_3c = (uint *)(uint)bVar8;
              bVar8 = piStack_24[4] != piVar12[4] || bVar8;
              if ((cStack_15 == '\a') || (cStack_15 == '\b')) {
                bVar8 = bVar8 || (*(char *)((int)piStack_24 + 0x21) !=
                                  *(char *)((int)piVar12 + 0x21) ||
                                 (char)piStack_24[8] != (char)piVar12[8]);
              }
              if (piStack_24[9] != piVar12[9]) {
                bVar8 = true;
              }
              piVar6 = piStack_24;
              if (bVar8) {
                uVar1 = *(undefined1 *)((int)piVar12 + 0x15);
                iVar3 = piVar12[4];
                piStack_2c = piStack_1c;
                uVar7 = (undefined3)((uint)piStack_1c >> 8);
                puStack_3c = (uint *)CONCAT31(uVar7,(char)piStack_24[5]);
                uStack_38 = CONCAT31(uVar7,*(undefined1 *)((int)piStack_24 + 0x15));
                iStack_30 = piStack_24[4];
                uVar5 = func_0x00ddbc30(piStack_40);
                uVar5 = func_0x00ddbcd0(uVar1,uVar5);
                uVar5 = func_0x00ddbc30(puStack_3c,iVar3,uVar5);
                uVar5 = func_0x00ddbcd0(uStack_38,uVar5);
                func_0x00dbfd90(piStack_2c,0xa004,
                                "Queueing buffer with mismatched format\n  Expected: %uhz, %s, %s ; Got: %uhz, %s, %s\n"
                                ,iStack_30,uVar5);
                goto LAB_00dda26f;
              }
              goto LAB_00dda3c6;
            }
            iStack_30 = iStack_30 + 1;
            piVar6 = piVar12;
            piStack_24 = piVar12;
          }
        }
        if (iStack_28 + 0x1a4b0 == 0) goto LAB_00dda48b;
        func_0x00e730b2(iStack_28 + 0x1a4b0);
        *(undefined4 *)(iStack_20 + 0x144) = 0x1029;
        if (uStack_34 != 0) {
          piVar6 = *(int **)(iStack_20 + 0x14c);
          uVar11 = *(int *)(iStack_20 + 0x158) + uStack_34;
          uVar9 = uVar11 - 1;
          if (piVar6 == (int *)0x0) {
            puVar13 = *(undefined4 **)(_DAT_00000004 + (_DAT_00000008 - 1U & uVar9) * 4);
            iVar3 = 0;
          }
          else {
            puVar13 = *(undefined4 **)
                       (*(int *)(*piVar6 + 4) + (*(int *)(*piVar6 + 8) - 1U & uVar9) * 4);
            iVar3 = *piVar6;
          }
          *puVar13 = *(undefined4 *)(*(int *)(iVar3 + 4) + (*(int *)(iVar3 + 8) - 1U & uVar11) * 4);
        }
        goto LAB_00dd9f18;
      }
      goto LAB_00dda46a;
    }
    func_0x00dbfd90(piVar12,0xa001,"Invalid source ID %u",param_1);
LAB_00dd9f18:
    func_0x00e730b2(piVar14);
    if (piStack_1c == (int *)0x0) goto LAB_00dd9eaf;
    LOCK();
    iVar3 = *piStack_1c;
    *piStack_1c = *piStack_1c + -1;
    UNLOCK();
    piVar6 = piStack_1c;
LAB_00dd9f32:
    if ((iVar3 != 1) || (piVar6 == (int *)0x0)) goto LAB_00dd9eaf;
    func_0x00ddc830();
  }
  func_0x00ddbb20(piVar6);
LAB_00dd9eaf:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dda44c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x54,&DAT_0125c4dc);
  func_0x00585aa0(1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dda4a0(void)

{
  FUN_00dda4b0(1,&stack0x00000004);
  return;
}



void FUN_00dda4b0(uint param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int *unaff_FS_OFFSET;
  uint uStack_78;
  int aiStack_68 [8];
  int *piStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int *piStack_38;
  uint uStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6be0d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_78 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_78;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_1c != (int *)0x0) {
    if ((int)param_1 < 0) {
      func_0x00dbfd90(piStack_1c,0xa003,"Rewinding %d sources",param_1);
    }
    else if (0 < (int)param_1) {
      piStack_48 = (int *)0x0;
      iStack_44 = 0;
      uStack_40 = 0;
      uStack_8._0_1_ = 2;
      if (param_1 < 9) {
        piVar8 = aiStack_68 + param_1;
        piVar7 = aiStack_68;
      }
      else {
        func_0x00dcc7b0(param_1,&uStack_15);
        piVar8 = piStack_48 + (iStack_44 - (int)piStack_48 >> 2);
        piVar7 = piStack_48;
      }
      piVar3 = piStack_1c;
      piVar9 = piStack_1c + 0x7c;
      piStack_38 = piVar9;
      piStack_2c = piVar8;
      piStack_28 = piVar8;
      piStack_20 = piVar7;
      iVar4 = func_0x00e7307f(piVar9);
      if (iVar4 != 0) {
        iVar4 = func_0x00e7304a(5);
LAB_00dda81e:
        piVar3[0x87] = iVar4 + -1;
        func_0x00e7304a(6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = piVar3[0x87];
      if (iVar4 == 0x7fffffff) goto LAB_00dda81e;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      for (; piVar7 != piVar8; piVar7 = piVar7 + 1) {
        uVar5 = *param_2 - 1;
        uStack_34 = uVar5 & 0x3f;
        if ((uint)(piStack_1c[0x79] - piStack_1c[0x78] >> 4) <= uVar5 >> 6) {
LAB_00dda631:
          *piVar7 = 0;
LAB_00dda637:
          func_0x00dbfd90(piStack_1c,0xa001,"Invalid source ID %u",*param_2);
          goto LAB_00dda651;
        }
        puVar10 = (uint *)((uVar5 >> 6) * 0x10 + piStack_1c[0x78]);
        uVar5 = 1 << (uVar5 & 0x1f);
        uVar6 = 0;
        if (0x1f < uStack_34) {
          uVar6 = uVar5;
        }
        uVar5 = uVar5 ^ uVar6;
        if (0x3f < uStack_34) {
          uVar6 = uVar5;
        }
        if ((uVar5 & *puVar10) != 0 || (uVar6 & puVar10[1]) != 0) goto LAB_00dda631;
        iVar4 = uStack_34 * 0x990 + puVar10[2];
        *piVar7 = iVar4;
        if (iVar4 == 0) goto LAB_00dda637;
        param_2 = param_2 + 1;
        piVar8 = piStack_28;
      }
      piStack_28 = (int *)0x0;
      piVar8 = (int *)0x0;
      for (; piVar7 = piStack_1c, piStack_20 != piStack_2c; piStack_20 = piStack_20 + 1) {
        iVar4 = *piStack_20;
        if (((uint)((piStack_1c[0x35] << 2) >> 2) <= *(uint *)(iVar4 + 0x164)) ||
           (uStack_34 = *(uint *)(piStack_1c[0x34] + 4 + *(uint *)(iVar4 + 0x164) * 4),
           *(int *)(uStack_34 + 0x134) != *(int *)(iVar4 + 0x168))) {
          *(undefined4 *)(iVar4 + 0x164) = 0xffffffff;
          uStack_34 = 0;
        }
        if (*(int *)(iVar4 + 0x148) != 0x1011) {
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)piStack_1c[0xb];
            if (piVar8 == (int *)piStack_1c[0xc]) {
              piStack_28 = piVar8;
              func_0x00e0a7a0();
              piVar8 = (int *)piVar7[0xb];
            }
            LOCK();
            iVar1 = piVar8[4];
            piVar8[4] = 0;
            UNLOCK();
            piVar7[0xb] = iVar1;
            piStack_28 = piVar8;
          }
          else {
            piStack_30 = piStack_1c;
            iStack_24 = piStack_1c[0xb];
            if (iStack_24 == piStack_1c[0xc]) {
              func_0x00e0a7a0();
              iStack_24 = piStack_30[0xb];
            }
            LOCK();
            iVar1 = *(int *)(iStack_24 + 0x10);
            *(int *)(iStack_24 + 0x10) = 0;
            UNLOCK();
            piStack_30[0xb] = iVar1;
            piVar8[4] = iStack_24;
            piVar8 = (int *)piVar8[4];
          }
          if (uStack_34 != 0) {
            *(undefined1 *)(uStack_34 + 0x13c) = 1;
          }
          piVar8[1] = uStack_34;
          piVar8[2] = *(int *)(iVar4 + 0x168);
          piVar8[3] = 0;
          *(undefined4 *)(iVar4 + 0x148) = 0x1011;
        }
        *(undefined8 *)(iVar4 + 0x138) = 0;
        *(undefined4 *)(iVar4 + 0x140) = 0;
        *(undefined4 *)(iVar4 + 0x164) = 0xffffffff;
      }
      if (piStack_28 != (int *)0x0) {
        func_0x00dd15c0(piStack_1c,piStack_28);
      }
LAB_00dda651:
      func_0x00e730b2(piVar9);
      if (piStack_48 != (int *)0x0) {
        func_0x00ddbb20(piStack_48);
        piStack_48 = (int *)0x0;
        iStack_44 = 0;
        uStack_40 = 0;
      }
    }
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
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dda812(void)

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



void FUN_00dda830(void)

{
  FUN_00dda840(1,&stack0x00000004);
  return;
}



void FUN_00dda840(uint param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  int *unaff_FS_OFFSET;
  uint uStack_78;
  int aiStack_68 [8];
  int *piStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int *piStack_38;
  uint uStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6be4d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_78 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_78;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_1c != (int *)0x0) {
    if ((int)param_1 < 0) {
      func_0x00dbfd90(piStack_1c,0xa003,"Stopping %d sources",param_1);
    }
    else if (0 < (int)param_1) {
      piStack_48 = (int *)0x0;
      iStack_44 = 0;
      uStack_40 = 0;
      uStack_8._0_1_ = 2;
      if (param_1 < 9) {
        piVar10 = aiStack_68 + param_1;
        piVar8 = aiStack_68;
      }
      else {
        func_0x00dcc7b0(param_1,&uStack_15);
        piVar10 = piStack_48 + (iStack_44 - (int)piStack_48 >> 2);
        piVar8 = piStack_48;
      }
      piVar3 = piStack_1c;
      piVar9 = piStack_1c + 0x7c;
      piStack_38 = piVar9;
      piStack_2c = piVar10;
      piStack_28 = piVar10;
      piStack_24 = piVar8;
      iVar4 = func_0x00e7307f(piVar9);
      if (iVar4 != 0) {
        iVar4 = func_0x00e7304a(5);
LAB_00ddaba2:
        piVar3[0x87] = iVar4 + -1;
        func_0x00e7304a(6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = piVar3[0x87];
      if (iVar4 == 0x7fffffff) goto LAB_00ddaba2;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      for (; piVar8 != piVar10; piVar8 = piVar8 + 1) {
        uVar5 = *param_2 - 1;
        uStack_34 = uVar5 & 0x3f;
        if ((uint)(piStack_1c[0x79] - piStack_1c[0x78] >> 4) <= uVar5 >> 6) {
LAB_00dda9c1:
          *piVar8 = 0;
LAB_00dda9c7:
          func_0x00dbfd90(piStack_1c,0xa001,"Invalid source ID %u",*param_2);
          goto LAB_00dda9e1;
        }
        puVar11 = (uint *)((uVar5 >> 6) * 0x10 + piStack_1c[0x78]);
        uVar5 = 1 << (uVar5 & 0x1f);
        uVar6 = 0;
        if (0x1f < uStack_34) {
          uVar6 = uVar5;
        }
        uVar5 = uVar5 ^ uVar6;
        if (0x3f < uStack_34) {
          uVar6 = uVar5;
        }
        if ((uVar5 & *puVar11) != 0 || (uVar6 & puVar11[1]) != 0) goto LAB_00dda9c1;
        iVar4 = uStack_34 * 0x990 + puVar11[2];
        *piVar8 = iVar4;
        if (iVar4 == 0) goto LAB_00dda9c7;
        param_2 = param_2 + 1;
        piVar10 = piStack_28;
      }
      iVar7 = 0;
      iStack_20 = 0;
      iVar4 = 0;
      for (; piVar10 = piStack_1c, piStack_24 != piStack_2c; piStack_24 = piStack_24 + 1) {
        iVar1 = *piStack_24;
        uStack_34 = piStack_1c[0x34];
        if (((*(uint *)(iVar1 + 0x164) < (uint)((piStack_1c[0x35] << 2) >> 2)) &&
            (uStack_34 = *(uint *)(uStack_34 + 4 + *(int *)(iVar1 + 0x164) * 4), iVar7 = iStack_20,
            *(int *)(uStack_34 + 0x134) == *(int *)(iVar1 + 0x168))) && (uStack_34 != 0)) {
          if (iVar4 == 0) {
            iVar4 = piStack_1c[0xb];
            if (iVar4 == piStack_1c[0xc]) {
              iStack_20 = iVar4;
              func_0x00e0a7a0();
              iVar4 = piVar10[0xb];
            }
            LOCK();
            iVar7 = *(int *)(iVar4 + 0x10);
            *(int *)(iVar4 + 0x10) = 0;
            UNLOCK();
            piVar10[0xb] = iVar7;
            iStack_20 = iVar4;
          }
          else {
            piStack_30 = piStack_1c;
            piStack_28 = (int *)piStack_1c[0xb];
            if (piStack_28 == (int *)piStack_1c[0xc]) {
              func_0x00e0a7a0();
              piStack_28 = (int *)piStack_30[0xb];
            }
            LOCK();
            iVar7 = piStack_28[4];
            piStack_28[4] = 0;
            UNLOCK();
            piStack_30[0xb] = iVar7;
            *(int **)(iVar4 + 0x10) = piStack_28;
            iVar4 = *(int *)(iVar4 + 0x10);
          }
          *(undefined1 *)(uStack_34 + 0x13c) = 1;
          *(uint *)(iVar4 + 4) = uStack_34;
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 0x168);
          *(undefined4 *)(iVar4 + 0xc) = 1;
          *(undefined4 *)(iVar1 + 0x148) = 0x1014;
          iVar7 = iStack_20;
        }
        *(undefined8 *)(iVar1 + 0x138) = 0;
        *(undefined4 *)(iVar1 + 0x140) = 0;
        *(undefined4 *)(iVar1 + 0x164) = 0xffffffff;
      }
      if (iVar7 != 0) {
        func_0x00dd15c0(piStack_1c,iVar7);
      }
LAB_00dda9e1:
      func_0x00e730b2(piVar9);
      if (piStack_48 != (int *)0x0) {
        func_0x00ddbb20(piStack_48);
        piStack_48 = (int *)0x0;
        iStack_44 = 0;
        uStack_40 = 0;
      }
    }
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
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00ddab96(void)

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



void FUN_00ddabb0(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  uint uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6be85;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar1 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00ddac3f;
  if ((int)param_2 < 0) {
    func_0x00dbfd90(piStack_18,0xa003,"Unqueueing %d buffers",param_2);
LAB_00ddac1b:
    if (piStack_18 == (int *)0x0) goto LAB_00ddac3f;
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00ddac3f;
    func_0x00ddc830();
  }
  else {
    if ((int)param_2 < 1) goto LAB_00ddac1b;
    piVar10 = piStack_18 + 0x7c;
    iVar3 = func_0x00e7307f(piVar10);
    piVar9 = piStack_18;
    if (iVar3 != 0) {
      iVar3 = func_0x00e7304a(5);
LAB_00ddae66:
      piVar1[0x87] = iVar3 + -1;
      func_0x00e7304a(6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = piVar1[0x87];
    if (iVar3 == 0x7fffffff) goto LAB_00ddae66;
    uStack_8._0_1_ = 2;
    iVar3 = func_0x00dd1560(piStack_18,param_1);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x144) == 0x1029) {
        if (*(char *)(iVar3 + 0x69) == '\0') {
          uStack_1c = 0;
          uVar5 = 0;
          if (*(int *)(iVar3 + 0x148) != 0x1011) {
            iVar4 = func_0x00dcfbc0(iVar3,piVar9);
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(iVar4 + 0x148);
            }
            uVar7 = *(uint *)(iVar3 + 0x158);
            uVar8 = *(int *)(iVar3 + 0x15c) + uVar7;
            piVar9 = piStack_18;
            if (uVar7 == uVar8) {
              uVar5 = 0;
            }
            else {
              do {
                uVar5 = uStack_1c;
                if (*(int *)(*(int *)(iVar3 + 0x150) + (*(int *)(iVar3 + 0x154) - 1U & uVar7) * 4)
                    == iVar4) break;
                uVar5 = uStack_1c + 1;
                uVar7 = uVar7 + 1;
                uStack_1c = uVar5;
              } while (uVar7 != uVar8);
            }
          }
          if (uVar5 < param_2) {
            puVar6 = &DAT_0112e1b4;
            if (param_2 != 1) {
              puVar6 = &DAT_01141e74;
            }
            func_0x00dbfd90(piVar9,0xa003,"Unqueueing %d buffer%s (only %u processed)",param_2,
                            puVar6,uVar5);
          }
          else {
            do {
              iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x150) +
                                       (*(int *)(iVar3 + 0x154) - 1U & *(uint *)(iVar3 + 0x158)) * 4
                                       ) + 0x20);
              if (iVar4 == 0) {
                *param_3 = 0;
              }
              else {
                *param_3 = *(undefined4 *)(iVar4 + 0x60);
                LOCK();
                *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + -1;
                UNLOCK();
              }
              piVar1 = (int *)(iVar3 + 0x15c);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                *(undefined4 *)(iVar3 + 0x158) = 0;
              }
              else {
                *(int *)(iVar3 + 0x158) = *(int *)(iVar3 + 0x158) + 1;
              }
              param_2 = param_2 - 1;
              param_3 = param_3 + 1;
            } while (param_2 != 0);
          }
        }
        else {
          func_0x00dbfd90(piVar9,0xa003,"Unqueueing from looping source %u",param_1);
        }
      }
      else {
        func_0x00dbfd90(piVar9,0xa003,"Unqueueing from a non-streaming source %u",param_1);
      }
      func_0x00e730b2(piVar10);
      func_0x00dbbf30();
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    func_0x00dbfd90(piVar9,0xa001,"Invalid source ID %u",param_1);
    func_0x00e730b2(piVar10);
    if (piStack_18 == (int *)0x0) goto LAB_00ddac3f;
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00ddac3f;
    func_0x00ddc830();
  }
  func_0x00ddbb20(piStack_18);
LAB_00ddac3f:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00ddae5a(void)

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



void FUN_00ddae80(undefined4 param_1,undefined4 param_2,double param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_38;
  float fStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6becd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00ddafb9:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ddafd7;
    unaff_EDI = piStack_18 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        iVar4 = func_0x00dd1560(piStack_18,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          fStack_1c = (float)param_3;
          FUN_00dd1650(iVar4,piStack_18,param_2,&fStack_1c,&piStack_18);
        }
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
        goto LAB_00ddafb9;
      }
      goto LAB_00ddafe9;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ddafd7:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ddafe9:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00ddafcb(void)

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



void FUN_00ddb000(undefined4 param_1,undefined4 param_2,int param_3)

{
  double *pdVar1;
  code *pcVar2;
  int iVar3;
  double *pdVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  double *extraout_ECX;
  int *piVar10;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_54;
  int *piStack_34;
  float afStack_30 [6];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bf0d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_54;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_54;
  func_0x00dc77d0(&piStack_34);
  piVar6 = piStack_34;
  uStack_8._0_1_ = 1;
  if (piStack_34 == (int *)0x0) {
LAB_00ddb10e:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  piVar10 = piStack_34 + 0x4a;
  iVar8 = func_0x00e7307f(piVar10);
  piVar7 = piStack_34;
  if (iVar8 == 0) {
    iVar8 = piVar6[0x55];
    if (iVar8 == 0x7fffffff) goto LAB_00ddb1bc;
    unaff_EDI = piStack_34 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar8 = func_0x00e7307f(unaff_EDI);
    if (iVar8 == 0) {
      iVar8 = piVar7[0x87];
      if (iVar8 != 0x7fffffff) {
        uStack_8._0_1_ = 3;
        iVar8 = func_0x00dd1560(piStack_34,param_1);
        if (iVar8 == 0) {
          func_0x00dbfd90(piStack_34,0xa001,"Invalid source ID %u",param_1);
        }
        else if (param_3 == 0) {
          func_0x00dbfd90(piStack_34,0xa003,"NULL pointer");
        }
        else {
          iVar9 = func_0x00dcee90(param_2);
          if (iVar9 != 0) {
            pfVar5 = afStack_30;
            afStack_30[0] = (float)*extraout_ECX;
            pdVar4 = extraout_ECX;
            iVar3 = iVar9;
            while (pfVar5 = pfVar5 + 1, iVar3 = iVar3 + -1, iVar3 != 0) {
              pdVar1 = pdVar4 + 1;
              pdVar4 = pdVar4 + 1;
              *pfVar5 = (float)*pdVar1;
            }
          }
          FUN_00dd1650(iVar8,piStack_34,param_2,afStack_30,afStack_30 + iVar9);
        }
        func_0x00e730b2(unaff_EDI);
        func_0x00e730b2(piVar10);
        if (piStack_34 != (int *)0x0) {
          LOCK();
          iVar8 = *piStack_34;
          *piStack_34 = *piStack_34 + -1;
          UNLOCK();
          if ((iVar8 == 1) && (piStack_34 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_34);
          }
        }
        goto LAB_00ddb10e;
      }
      goto LAB_00ddb1ce;
    }
  }
  else {
    iVar8 = func_0x00e7304a(5);
LAB_00ddb1bc:
    piVar6[0x55] = iVar8 + -1;
    func_0x00e7304a(6);
  }
  iVar8 = func_0x00e7304a(5);
LAB_00ddb1ce:
  unaff_EDI[0xb] = iVar8 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00ddb1b0(void)

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



void FUN_00ddb1e0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bf5d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00ddb30b:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ddb329;
    unaff_EDI = piStack_18 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        iVar4 = func_0x00dd1560(piStack_18,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          FUN_00dd1650(iVar4,piStack_18,param_2,&stack0x0000000c,&stack0x00000010);
        }
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
        goto LAB_00ddb30b;
      }
      goto LAB_00ddb33b;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ddb329:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ddb33b:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00ddb31d(void)

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



void FUN_00ddb350(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  uint uStack_38;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bf9d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00ddb45b:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ddb4c0;
    unaff_EDI = piStack_18 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        iVar4 = func_0x00dd1560(piStack_18,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        }
        else if (param_3 == 0) {
          func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
        }
        else {
          uVar6 = func_0x00dcefd0(param_2);
          FUN_00dd1650(iVar4,piStack_18,(int)((ulonglong)uVar6 >> 0x20),param_3,
                       param_3 + (int)uVar6 * 4);
        }
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
        goto LAB_00ddb45b;
      }
      goto LAB_00ddb4d2;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ddb4c0:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ddb4d2:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00ddb4b4(void)

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



void FUN_00ddb4e0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6bfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00ddb60b:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ddb629;
    unaff_EDI = piStack_18 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        iVar4 = func_0x00dd1560(piStack_18,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          FUN_00dd2740(iVar4,piStack_18,param_2,&stack0x0000000c,&stack0x00000010);
        }
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
        goto LAB_00ddb60b;
      }
      goto LAB_00ddb63b;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ddb629:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ddb63b:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00ddb61d(void)

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



void FUN_00ddb650(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c01d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00ddb77b:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ddb799;
    unaff_EDI = piStack_18 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        iVar4 = func_0x00dd1560(piStack_18,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        }
        else {
          FUN_00dd2310(iVar4,piStack_18,param_2,&stack0x0000000c,&stack0x00000014);
        }
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
        goto LAB_00ddb77b;
      }
      goto LAB_00ddb7ab;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ddb799:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ddb7ab:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00ddb78d(void)

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



void FUN_00ddb7c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  uint uStack_38;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c05d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00ddb8cb:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ddb930;
    unaff_EDI = piStack_18 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        iVar4 = func_0x00dd1560(piStack_18,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        }
        else if (param_3 == 0) {
          func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
        }
        else {
          uVar6 = func_0x00dd12a0(param_2);
          FUN_00dd2310(iVar4,piStack_18,(int)((ulonglong)uVar6 >> 0x20),param_3,
                       param_3 + (int)uVar6 * 8);
        }
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
        goto LAB_00ddb8cb;
      }
      goto LAB_00ddb942;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ddb930:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ddb942:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00ddb924(void)

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



void FUN_00ddb950(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  uint uStack_38;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c09d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00ddba5b:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  piVar3 = piStack_18;
  if (iVar4 == 0) {
    iVar4 = piVar2[0x55];
    if (iVar4 == 0x7fffffff) goto LAB_00ddbac0;
    unaff_EDI = piStack_18 + 0x7c;
    uStack_8._0_1_ = 2;
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 == 0) {
      iVar4 = piVar3[0x87];
      if (iVar4 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        iVar4 = func_0x00dd1560(piStack_18,param_1);
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa001,"Invalid source ID %u",param_1);
        }
        else if (param_3 == 0) {
          func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
        }
        else {
          uVar6 = func_0x00dd13d0(param_2);
          FUN_00dd2740(iVar4,piStack_18,(int)((ulonglong)uVar6 >> 0x20),param_3,
                       param_3 + (int)uVar6 * 4);
        }
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
        goto LAB_00ddba5b;
      }
      goto LAB_00ddbad2;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
LAB_00ddbac0:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
  }
  iVar4 = func_0x00e7304a(5);
LAB_00ddbad2:
  unaff_EDI[0xb] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00ddbab4(void)

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



undefined4 * __thiscall FUN_00ddc600(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = ALCcontext::ContextException::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00ddc660(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_A849FB7C::EaxGetException::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00ddc6c0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_A849FB7C::EaxSetException::vftable;
  return param_1;
}



void __fastcall FUN_00ddc740(int *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_1 != 0) {
    func_0x00de9e70(*param_1,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * FUN_00ddccc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uStack_54;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_34;
  undefined4 uStack_2c;
  int *piStack_24;
  uint uStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c155;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_54;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar6 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    piVar7 = piStack_18 + 0x4a;
    piStack_1c = piVar7;
    iVar5 = func_0x00e7307f(piVar7);
    piVar4 = piStack_18;
    if (iVar5 != 0) goto LAB_00ddcf89;
    iVar5 = piVar6[0x55];
    if (iVar5 == 0x7fffffff) goto LAB_00ddcf90;
    uStack_8._0_1_ = 2;
    func_0x00e186b0(auStack_44,1,param_1,param_2,param_3,param_4,param_5);
    func_0x00dde330();
    iStack_34 = iStack_34 + -1;
    uVar9 = SBORROW4(iStack_34,3);
    uVar8 = iStack_34 == 3;
    switch(iStack_34) {
    case 0:
      if (iStack_40 == 4) {
        switch(uStack_2c) {
        case 1:
          uVar9 = SBORROW4(uStack_20,0x1c);
          uVar8 = uStack_20 == 0x1c;
          if (uStack_20 < 0x1c) goto LAB_00ddcfbe;
          iVar5 = piVar4[0xbd];
          iVar2 = piVar4[0xbe];
          iVar3 = piVar4[0xbf];
          *piStack_24 = piVar4[0xbc];
          piStack_24[1] = iVar5;
          piStack_24[2] = iVar2;
          piStack_24[3] = iVar3;
          *(undefined8 *)(piStack_24 + 4) = *(undefined8 *)(piVar4 + 0xc0);
          piStack_24[6] = piVar4[0xc2];
          break;
        case 2:
          uVar9 = SBORROW4(uStack_20,0x10);
          uVar8 = uStack_20 == 0x10;
          if (uStack_20 < 0x10) goto LAB_00ddcfc3;
          iVar5 = piVar4[0xbd];
          iVar2 = piVar4[0xbe];
          iVar3 = piVar4[0xbf];
          *piStack_24 = piVar4[0xbc];
          piStack_24[1] = iVar5;
          piStack_24[2] = iVar2;
          piStack_24[3] = iVar3;
          break;
        case 3:
          uVar9 = SBORROW4(uStack_20,4);
          uVar8 = uStack_20 == 4;
          if (uStack_20 < 4) goto LAB_00ddcfc8;
          *piStack_24 = piVar4[0xc0];
          break;
        case 4:
          uVar9 = SBORROW4(uStack_20,4);
          uVar8 = uStack_20 == 4;
          if (uStack_20 < 4) goto LAB_00ddcfcd;
          *piStack_24 = piVar4[0xc1];
          break;
        case 5:
          uVar9 = SBORROW4(uStack_20,4);
          uVar8 = uStack_20 == 4;
          if (uStack_20 < 4) goto LAB_00ddcfd2;
          *piStack_24 = piVar4[0xc2];
          break;
        default:
LAB_00ddceec:
          func_0x00dde2a0(auStack_44);
        }
        break;
      }
      uVar9 = SBORROW4(iStack_40 + -4,1);
      uVar8 = iStack_40 + -4 == 1;
      if (!(bool)uVar8) goto code_r0x00ddcf9b;
      switch(uStack_2c) {
      case 1:
        uVar9 = SBORROW4(uStack_20,0x20);
        uVar8 = uStack_20 == 0x20;
        if (0x1f < uStack_20) {
          iVar5 = piVar4[0xcb];
          iVar2 = piVar4[0xcc];
          iVar3 = piVar4[0xcd];
          *piStack_24 = piVar4[0xca];
          piStack_24[1] = iVar5;
          piStack_24[2] = iVar2;
          piStack_24[3] = iVar3;
          iVar5 = piVar4[0xcf];
          iVar2 = piVar4[0xd0];
          iVar3 = piVar4[0xd1];
          piStack_24[4] = piVar4[0xce];
          piStack_24[5] = iVar5;
          piStack_24[6] = iVar2;
          piStack_24[7] = iVar3;
          break;
        }
        goto code_r0x00ddcfa0;
      case 2:
        uVar9 = SBORROW4(uStack_20,0x10);
        uVar8 = uStack_20 == 0x10;
        if (0xf < uStack_20) {
          iVar5 = piVar4[0xcb];
          iVar2 = piVar4[0xcc];
          iVar3 = piVar4[0xcd];
          *piStack_24 = piVar4[0xca];
          piStack_24[1] = iVar5;
          piStack_24[2] = iVar2;
          piStack_24[3] = iVar3;
          break;
        }
        goto code_r0x00ddcfa5;
      case 3:
        uVar9 = SBORROW4(uStack_20,4);
        uVar8 = uStack_20 == 4;
        if (3 < uStack_20) {
          *piStack_24 = piVar4[0xce];
          break;
        }
        goto code_r0x00ddcfaa;
      case 4:
        uVar9 = SBORROW4(uStack_20,4);
        uVar8 = uStack_20 == 4;
        if (3 < uStack_20) {
          *piStack_24 = piVar4[0xcf];
          break;
        }
        goto LAB_00ddcfaf;
      case 5:
        uVar9 = SBORROW4(uStack_20,4);
        uVar8 = uStack_20 == 4;
        if (uStack_20 < 4) goto LAB_00ddcfb4;
        *piStack_24 = piVar4[0xd0];
        break;
      default:
        goto LAB_00ddceec;
      case 9:
        uVar9 = SBORROW4(uStack_20,4);
        uVar8 = uStack_20 == 4;
        if (uStack_20 < 4) goto LAB_00ddcfb9;
        *piStack_24 = piVar4[0xd1];
      }
      break;
    case 1:
    case 3:
      func_0x00ddde80(auStack_44);
      break;
    case 2:
      func_0x00dddfe0(auStack_44);
      break;
    default:
      goto LAB_00ddcfd7;
    }
    func_0x00e730b2(piVar7);
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
    *unaff_FS_OFFSET = iStack_10;
    return (int *)0x0;
  }
  func_0x00dde230("No current context.");
  piVar7 = (int *)0x0;
LAB_00ddcf89:
  iVar5 = func_0x00e7304a(5);
LAB_00ddcf90:
  uVar9 = SBORROW4(iVar5,1);
  uVar8 = iVar5 + -1 == 0;
  piVar7[0xb] = iVar5 + -1;
  func_0x00e7304a(6);
code_r0x00ddcf9b:
  func_0x00dde290();
code_r0x00ddcfa0:
  func_0x00e18720();
code_r0x00ddcfa5:
  func_0x00e18720();
code_r0x00ddcfaa:
  func_0x00e18720();
LAB_00ddcfaf:
  while( true ) {
    func_0x00e18720();
LAB_00ddcfb4:
    func_0x00e18720();
LAB_00ddcfb9:
    func_0x00e18720();
LAB_00ddcfbe:
    func_0x00e18720();
LAB_00ddcfc3:
    func_0x00e18720();
LAB_00ddcfc8:
    func_0x00e18720();
LAB_00ddcfcd:
    func_0x00e18720();
LAB_00ddcfd2:
    func_0x00e18720();
LAB_00ddcfd7:
    piVar6 = (int *)func_0x00dde280();
    if (!(bool)uVar8) break;
    if (!(bool)uVar9) {
      return piVar6;
    }
    uVar9 = SCARRY4((int)piVar6,*piVar6);
    uVar8 = (int)piVar6 + *piVar6 == 0;
  }
  pcVar1 = (code *)swi(4);
  if ((bool)uVar9 == true) {
    piVar6 = (int *)(*pcVar1)();
  }
  return piVar6;
}



undefined1 * Catch_All_00ddcf55(void)

{
  FUN_00e18da0(&DAT_010d2da4);
  return &LAB_00ddcf68;
}



undefined4
FUN_00ddd030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c195;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
    func_0x00dde250("No current context.");
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piStack_18 + 0x4a;
    iVar3 = func_0x00e7307f(piVar5);
    if (iVar3 == 0) {
      iVar3 = piVar2[0x55];
      if (iVar3 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        uVar4 = func_0x00dde090(param_1,param_2,param_3,param_4,param_5);
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
        return uVar4;
      }
      goto LAB_00ddd141;
    }
  }
  iVar3 = func_0x00e7304a(5);
LAB_00ddd141:
  piVar5[0xb] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



undefined1 * Catch_All_00ddd106(void)

{
  FUN_00e18da0(&DAT_010d2dac);
  return &LAB_00ddd119;
}



void FUN_00ddf9e0(undefined4 param_1,void *param_2,undefined4 param_3,undefined4 param_4,
                 void *param_5,int param_6)

{
  int iVar1;
  
  iVar1 = param_6 - (int)param_5 >> 2;
  if (iVar1 != 0) {
    memcpy(param_5,param_2,iVar1 << 2);
  }
  return;
}



undefined4 __thiscall FUN_00de0730(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x4e10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00de0770(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x5c10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00de07b0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x3c10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00de07f0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x4810);
  }
  return param_1;
}



undefined4 __thiscall FUN_00de0830(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x30c0);
  }
  return param_1;
}



undefined4 __thiscall FUN_00de0870(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x30a0);
  }
  return param_1;
}



void FUN_00de3db0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_00dc37d0(0,param_1);
  return;
}



void FUN_00de3dd0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_00dc3630(0,param_1);
  return;
}



undefined4 FUN_00de3df0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6c3ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 != (int *)0x0) {
    if (param_1 == (char *)0x0) {
      func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
    }
    else {
      pcVar5 = param_1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pcVar4 = (char *)piStack_18[0x99];
      while ((pcVar4 != (char *)0x0 && (*pcVar4 != '\0'))) {
        iVar3 = func_0x00e0af50(pcVar4,param_1,(int)pcVar5 - (int)(param_1 + 1));
        if ((iVar3 == 0) &&
           ((pcVar4[(int)pcVar5 - (int)(param_1 + 1)] == '\0' ||
            (iVar3 = func_0x008ab082((int)pcVar4[(int)pcVar5 - (int)(param_1 + 1)]), iVar3 != 0))))
        {
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
        pcVar4 = (char *)func_0x008ab0c6(pcVar4,0x20);
        if (pcVar4 == (char *)0x0) break;
        do {
          pcVar1 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
          iVar3 = func_0x008ab082((int)*pcVar1);
        } while (iVar3 != 0);
      }
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
