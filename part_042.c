  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  int *piVar14;
  undefined *puVar15;
  int *piVar16;
  
  cVar7 = *(char *)(param_1 + 0x189);
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
  if (cVar7 == '\0') {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x184) + 0x10);
    puVar9 = (undefined4 *)puVar2[1];
    cVar1 = *(char *)((int)puVar9 + 0xd);
    while (cVar1 == '\0') {
      if ((uint)puVar9[4] < param_3) {
        puVar8 = (undefined4 *)puVar9[2];
        puVar9 = puVar2;
      }
      else {
        puVar8 = (undefined4 *)*puVar9;
      }
      puVar2 = puVar9;
      puVar9 = puVar8;
      cVar1 = *(char *)((int)puVar8 + 0xd);
    }
    if ((*(char *)((int)puVar2 + 0xd) != '\0') || (param_3 < (uint)puVar2[4])) {
      uVar6 = 0;
      goto LAB_00b32648;
    }
  }
  uVar6 = 1;
LAB_00b32648:
  *(undefined1 *)(param_1 + 0x189) = uVar6;
  uVar11 = *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) + -1;
  uVar3 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0xe8) + (uVar11 >> 2 & *(int *)(param_1 + 0xec) - 1U) * 4) +
           (uVar11 & 3) * 4);
  if ((*(int *)(param_1 + 0x6c) == 0x8b48) &&
     (uVar11 = func_0x00b2c380(uVar3,param_3), (char)uVar11 != '\0')) {
    *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
    *(char *)(param_1 + 0x189) = cVar7;
    return uVar11 & 0xffffff00;
  }
  uVar11 = param_3;
  cVar7 = func_0x00b7e6d0(param_3);
  pcVar13 = "LOOP";
  if (cVar7 == '\0') {
    pcVar13 = "";
  }
  puVar15 = &DAT_0101fa28;
  if (*(int *)(param_3 + 0x14) == 2) {
    func_0x0046a880(&DAT_0101fa28,1);
    pcVar10 = pcVar13;
    do {
      cVar7 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar7 != '\0');
    func_0x0046a880(pcVar13,(int)pcVar10 - (int)(pcVar13 + 1));
    puVar15 = &DAT_0101fa2c;
    uVar12 = 4;
  }
  else {
    func_0x0046a880(&DAT_0101fa28,1);
    pcVar10 = pcVar13;
    do {
      cVar7 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar7 != '\0');
    func_0x0046a880(pcVar13,(int)pcVar10 - (int)(pcVar13 + 1));
    func_0x0046a880(" for(",5);
    piVar16 = *(int **)(param_3 + 0x18);
    if (piVar16 != (int *)0x0) {
      pcVar5 = *(code **)(*piVar16 + 4);
      _guard_check_icall(param_1);
      (*pcVar5)();
    }
    func_0x0046a880(&DAT_0101fa3c,2);
    piVar14 = *(int **)(param_3 + 0x1c);
    if (piVar14 != (int *)0x0) {
      pcVar5 = *(code **)(*piVar14 + 4);
      _guard_check_icall(param_1);
      (*pcVar5)();
    }
    func_0x0046a880(&DAT_0101fa3c,2);
    piVar4 = *(int **)(param_3 + 0x20);
    if (piVar4 != (int *)0x0) {
      pcVar5 = *(code **)(*piVar4 + 4);
      _guard_check_icall(param_1,pcVar13,piVar14,puVar15,piVar16,uVar11,piVar4);
      (*pcVar5)();
    }
    puVar15 = &DAT_011a2310;
    uVar12 = 2;
  }
  func_0x0046a880(puVar15,uVar12);
  uVar12 = uVar3;
  func_0x00b2e760(uVar3,*(undefined4 *)(param_3 + 8));
  uVar6 = (undefined1)((uint)uVar12 >> 0x18);
  if (*(int *)(param_3 + 0x24) == 0) {
    func_0x0046a880(&DAT_0101f9e0,4);
  }
  else {
    FUN_00ade830(param_1);
  }
  func_0x00b2e760(uVar3,*(undefined4 *)(param_3 + 8));
  if (*(int *)(param_3 + 0x14) == 2) {
    func_0x00b2e760(uVar3,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 8));
    func_0x0046a880("while (",7);
    pcVar5 = *(code **)(**(int **)(param_3 + 0x1c) + 4);
    _guard_check_icall(param_1);
    (*pcVar5)();
    func_0x0046a880(&DAT_0101f8a4,3);
  }
  func_0x0046a880(&DAT_00ffb85c,2);
  *(undefined1 *)(param_1 + 0x189) = uVar6;
  uVar11 = *(int *)(param_1 + 0x18c) - 1;
  *(uint *)(param_1 + 0x18c) = uVar11;
  return uVar11 & 0xffffff00;
}



undefined4 __thiscall FUN_00b32870(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = func_0x00b90f00(*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_1 + 0x1dc));
    func_0x00aeba20(uVar1);
    func_0x0046a880("switch (",8);
    return 1;
  }
  if (param_2 == 1) {
    func_0x0046a880(&DAT_01002298,2);
    return 1;
  }
  if (param_2 == 2) {
    func_0x0046a880(&DAT_0112e1b4,0);
  }
  return 1;
}



undefined4 __thiscall FUN_00b32910(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) + -1;
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0xe8) + (uVar2 >> 2 & *(int *)(param_1 + 0xec) - 1U) * 4) +
           (uVar2 & 3) * 4);
  if (param_2 == 2) {
    func_0x0046a880(&DAT_0113c6d8,1);
    func_0x00aebb40(uVar1);
  }
  return 1;
}



void __thiscall FUN_00b32970(int param_1,int *param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  char ****ppppcVar11;
  char *pcVar12;
  uint uVar13;
  char ****ppppcVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  int aiStack_cc [7];
  undefined4 uStack_b0;
  undefined1 auStack_ac [72];
  int iStack_64;
  undefined *puStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined1 auStack_54 [4];
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  byte *apbStack_44 [2];
  int iStack_3c;
  undefined1 auStack_38 [24];
  char ***apppcStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  uStack_5c = 0xffffffff;
  puStack_60 = &DAT_00f6422d;
  iStack_64 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&iStack_58;
  *unaff_FS_OFFSET = (int)&iStack_64;
  piStack_48 = param_2;
  iStack_3c = param_2[6];
  uVar13 = *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf0) + -1;
  iStack_4c = *(int *)(*(int *)(*(int *)(param_1 + 0xe8) +
                               (*(int *)(param_1 + 0xec) - 1U & uVar13 >> 2) * 4) + (uVar13 & 3) * 4
                      );
  cVar3 = func_0x00b2a1b0(param_2,uStack_8);
  if (cVar3 != '\0') {
    pcVar2 = *(code **)(*param_2 + 0x7c);
    _guard_check_icall();
    piVar4 = (int *)(*pcVar2)();
    if (*piVar4 == 0x5d) {
      cVar3 = func_0x00b2de30(piStack_48);
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 0x1e5) = 1;
        func_0x0046a880(&DAT_0101e4b8,3);
      }
    }
  }
  func_0x00aee9d0(apbStack_44);
  pbVar9 = &DAT_0112e1b4;
  if (apbStack_44[0] != (byte *)0x0) {
    pbVar9 = apbStack_44[0];
  }
  pcVar5 = "gl_DepthRange";
  do {
    bVar1 = *pbVar9;
    bVar15 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00b32a62:
      uVar13 = -(uint)bVar15 | 1;
      goto LAB_00b32a67;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar15 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b32a62;
    pbVar9 = pbVar9 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  uVar13 = 0;
LAB_00b32a67:
  if (uVar13 == 0) {
    *(undefined1 *)(param_1 + 0x140) = 1;
    func_0x00b660c0(apbStack_44);
    goto LAB_00b32fc8;
  }
  piStack_48 = *(int **)(iStack_3c + 0x10);
  if (*piStack_48 == 6) {
    if (piStack_48[2] == 6) {
      iStack_58 = *(int *)(iStack_3c + 8);
      piVar4 = piStack_48 + 5;
      piVar8 = aiStack_cc;
      for (iVar10 = 0x1a; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar8 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar8 = piVar8 + 1;
      }
      piVar4 = (int *)func_0x00b29b60(&iStack_58);
      *piVar4 = iStack_3c;
      uVar6 = func_0x00b81750(auStack_54,uStack_b0);
      func_0x00b660c0(uVar6);
      func_0x0046a880(&DAT_0112e444,2);
      func_0x00af6e40(auStack_ac);
    }
    else {
      func_0x00b82ee0(apppcStack_20,iStack_3c);
      uStack_5c = 0;
      ppppcVar14 = apppcStack_20;
      if (0xf < uStack_c) {
        ppppcVar14 = (char ****)apppcStack_20[0];
      }
      ppppcVar11 = ppppcVar14;
      do {
        cVar3 = *(char *)ppppcVar11;
        ppppcVar11 = (char ****)((int)ppppcVar11 + 1);
      } while (cVar3 != '\0');
      func_0x0046a880(ppppcVar14,(int)ppppcVar11 - (int)((int)ppppcVar14 + 1));
      func_0x0046a880(&DAT_0112e444,2);
      ppppcVar14 = apppcStack_20;
      if (0xf < uStack_c) {
        ppppcVar14 = (char ****)apppcStack_20[0];
      }
      ppppcVar11 = ppppcVar14;
      do {
        cVar3 = *(char *)ppppcVar11;
        ppppcVar11 = (char ****)((int)ppppcVar11 + 1);
      } while (cVar3 != '\0');
      func_0x0046a880(ppppcVar14,(int)ppppcVar11 - (int)((int)ppppcVar14 + 1));
      func_0x0046a880("_offset",7);
    }
    goto LAB_00b32fc8;
  }
  iVar10 = piStack_48[2];
  if (piStack_48[0x24] != 0) {
    func_0x00b8d210(piStack_48[0x24]);
  }
  if (iVar10 == 6) {
    iStack_58 = piStack_48[0x23];
    if (iStack_58 == 0) {
      iStack_50 = *(int *)(iStack_3c + 8);
      piVar4 = (int *)func_0x00b29b60(&iStack_50);
      *piVar4 = iStack_3c;
      iVar10 = iStack_3c;
    }
    else {
      iStack_4c = *(int *)(iStack_58 + 8);
      iStack_50 = param_1 + 0x100;
      iVar7 = func_0x00b2bd40(&iStack_4c);
      iVar10 = iStack_3c;
      if (iVar7 == 0) {
        iStack_4c = iStack_3c;
        if (*piStack_48 != 0x5e) {
          iStack_4c = 0;
        }
        func_0x00ad78b0();
        piVar4 = (int *)func_0x00ad7620(8);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iStack_58;
          piVar4[1] = iStack_4c;
        }
        piStack_48 = *(int **)(iStack_58 + 8);
        piVar8 = (int *)func_0x00b29aa0(&piStack_48);
        *piVar8 = (int)piVar4;
      }
    }
    pcVar5 = (char *)func_0x00b82ee0(apppcStack_20,iVar10);
    uStack_5c = 1;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    pcVar12 = pcVar5;
    do {
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    func_0x0046a880(pcVar5,(int)pcVar12 - (int)(pcVar5 + 1));
    goto LAB_00b32fc8;
  }
  if (iVar10 == 7) goto LAB_00b32fc8;
  if ((iVar10 == 3) || (iVar10 == 9)) {
    iStack_50 = *(int *)(iStack_3c + 8);
    piVar4 = (int *)func_0x00b29b60(&iStack_50);
    *piVar4 = iStack_3c;
    uVar6 = func_0x00b82c20(apppcStack_20,apbStack_44);
    uStack_5c = 2;
LAB_00b32fc0:
    func_0x00b29a70(uVar6);
  }
  else {
    cVar3 = func_0x00b26a80(iVar10);
    iVar7 = iStack_3c;
    if (cVar3 != '\0') {
      iStack_50 = *(int *)(iStack_3c + 8);
      piVar4 = (int *)func_0x00b29b60(&iStack_50);
      *piVar4 = iVar7;
      uVar6 = func_0x00b82ee0(apppcStack_20,iVar7);
      uStack_5c = 3;
      func_0x00b29a70(uVar6);
      if ((*(byte *)(iVar7 + 0xf) & 0xf) == 2) {
        cVar3 = func_0x00aec040("ViewID_OVR");
        if (cVar3 != '\0') {
          *(undefined1 *)(param_1 + 0x148) = 1;
        }
      }
      goto LAB_00b32fc8;
    }
    if (iVar10 == 10) {
      iStack_50 = *(int *)(iStack_3c + 8);
      piVar4 = (int *)func_0x00b29b60(&iStack_50);
      *piVar4 = iVar7;
      func_0x0046a880(&DAT_0101f424,4);
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x22) {
      *(undefined1 *)(param_1 + 0x13c) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x23) {
      *(undefined1 *)(param_1 + 0x13d) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x1b) {
      func_0x0046a880("gl_Color[0]",0xb);
      *(undefined1 *)(param_1 + 0x13e) = 1;
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x1c) {
      func_0x0046a880("gl_Color",8);
      *(undefined1 *)(param_1 + 0x13f) = 1;
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x1e) {
      func_0x0046a880("gl_SecondaryColor[0]",0x14);
      *(undefined1 *)(param_1 + 0x155) = 1;
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x1f) {
      func_0x0046a880("gl_SecondaryColor",0x11);
      *(undefined1 *)(param_1 + 0x155) = 1;
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x17) {
      *(undefined1 *)(param_1 + 0x141) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x19) {
      *(undefined1 *)(param_1 + 0x142) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x18) {
      *(undefined1 *)(param_1 + 0x143) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x1a) {
      *(undefined1 *)(param_1 + 0x144) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x15) {
      *(undefined1 *)(param_1 + 0x145) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x12) {
      *(undefined1 *)(param_1 + 0x146) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    if (iVar10 == 0x13) {
      *(undefined1 *)(param_1 + 0x149) = 1;
      func_0x00b660c0(apbStack_44);
      goto LAB_00b32fc8;
    }
    cVar3 = func_0x00aec040("gl_FragDepthEXT");
    if (cVar3 == '\0') {
      cVar3 = func_0x00aec040("gl_FragDepth");
      if (cVar3 == '\0') {
        if (iVar10 == 0x3c) {
          *(undefined1 *)(param_1 + 0x14b) = 1;
          func_0x00b660c0(apbStack_44);
          goto LAB_00b32fc8;
        }
        if (iVar10 == 0x3e) {
          *(undefined1 *)(param_1 + 0x14c) = 1;
          func_0x00b660c0(apbStack_44);
          goto LAB_00b32fc8;
        }
        if (iVar10 == 0x3f) {
          *(undefined1 *)(param_1 + 0x14d) = 1;
          func_0x00b660c0(apbStack_44);
          goto LAB_00b32fc8;
        }
        if (iVar10 == 0x40) {
          *(undefined1 *)(param_1 + 0x14e) = 1;
          func_0x00b660c0(apbStack_44);
          goto LAB_00b32fc8;
        }
        if (iVar10 == 0x41) {
          *(undefined1 *)(param_1 + 0x14f) = 1;
          func_0x00b660c0(apbStack_44);
          goto LAB_00b32fc8;
        }
        uVar6 = func_0x00b82ee0(auStack_38,iStack_3c);
        uStack_5c = 4;
        goto LAB_00b32fc0;
      }
    }
    *(undefined1 *)(param_1 + 0x14a) = 1;
    func_0x0046a880("gl_Depth",8);
  }
LAB_00b32fc8:
  *unaff_FS_OFFSET = iStack_64;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00b32ff0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) + -1;
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0xe8) + (uVar2 >> 2 & *(int *)(param_1 + 0xec) - 1U) * 4) +
           (uVar2 & 3) * 4);
  switch(*(undefined2 *)(param_3 + 0xb8)) {
  case 8:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f5f8,2);
      return 1;
    }
    break;
  case 9:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f5fc,2);
      return 1;
    }
    break;
  case 10:
  case 0x8e:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f600,2);
      return 1;
    }
    break;
  case 0xb:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f604,2);
      return 1;
    }
    break;
  case 0xc:
    if (param_2 == 0) {
LAB_00b330e7:
      func_0x0046a880(&DAT_011434e0,1);
      return 1;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 1;
      }
      func_0x0046a880(&DAT_0101f608,3);
      return 1;
    }
    goto LAB_00b33063;
  case 0xd:
    if (param_2 == 0) goto LAB_00b330e7;
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 1;
      }
      func_0x0046a880(&DAT_0101f60c,3);
      return 1;
    }
    goto LAB_00b33063;
  case 0xe:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f610,3);
      return 1;
    }
    break;
  case 0xf:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f614,3);
      return 1;
    }
    break;
  case 0x10:
    func_0x00b80b30(*(undefined4 *)(param_3 + 0xbc));
    return 0;
  default:
    goto LAB_00b33057;
  case 0x3e:
    if (param_2 == 0) {
      func_0x0046a880("radians(",8);
      return 1;
    }
    break;
  case 0x3f:
    if (param_2 == 0) {
      func_0x0046a880("degrees(",8);
      return 1;
    }
    break;
  case 0x40:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f630,4);
      return 1;
    }
    break;
  case 0x41:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f638,4);
      return 1;
    }
    break;
  case 0x42:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f640,4);
      return 1;
    }
    break;
  case 0x43:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f648,5);
      return 1;
    }
    break;
  case 0x44:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f650,5);
      return 1;
    }
    break;
  case 0x45:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f658,5);
      return 1;
    }
    break;
  case 0x46:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f660,5);
      return 1;
    }
    break;
  case 0x47:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f668,5);
      return 1;
    }
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x58:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x85:
    func_0x00b33b10(uVar1,param_2,*(undefined4 *)(param_3 + 0xc4));
    return 1;
  case 0x4d:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f670,4);
      return 1;
    }
    break;
  case 0x4e:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f678,4);
      return 1;
    }
    break;
  case 0x4f:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f680,5);
      return 1;
    }
    break;
  case 0x50:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f688,5);
      return 1;
    }
    break;
  case 0x51:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f690,5);
      return 1;
    }
    break;
  case 0x52:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f698,6);
      return 1;
    }
    break;
  case 0x53:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6a0,4);
      return 1;
    }
    break;
  case 0x54:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6a8,5);
      return 1;
    }
    break;
  case 0x55:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6b0,6);
      return 1;
    }
    break;
  case 0x56:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6b8,6);
      return 1;
    }
    break;
  case 0x57:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6c0,6);
      return 1;
    }
    break;
  case 0x59:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6c8,5);
      return 1;
    }
    break;
  case 0x5a:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6d0,5);
      return 1;
    }
    break;
  case 99:
    if (*(char *)(param_3 + 0xc0) != '\0') {
      func_0x00b33b10(uVar1,param_2,*(undefined4 *)(param_3 + 0xc4));
      *(undefined1 *)(param_1 + 0x153) = 1;
      return 1;
    }
    if (param_2 != 0) {
      if (param_2 != 1) {
        if (param_2 == 2) {
          func_0x0046a880(&DAT_0112e458,1);
        }
        *(undefined1 *)(param_1 + 0x153) = 1;
        return 1;
      }
      func_0x0046a880(&DAT_0112e1b4,0);
      *(undefined1 *)(param_1 + 0x153) = 1;
      return 1;
    }
    func_0x0046a880(&DAT_0101f6d8,6);
    *(undefined1 *)(param_1 + 0x153) = 1;
    return 1;
  case 100:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6e0,6);
      return 1;
    }
    break;
  case 0x65:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6e8,6);
      return 1;
    }
    break;
  case 0x66:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6f0,7);
      return 1;
    }
    break;
  case 0x67:
  case 0x68:
    if (param_2 == 0) {
      func_0x0046a880("asfloat(",8);
      return 1;
    }
    break;
  case 0x78:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f6f8,7);
      return 1;
    }
    break;
  case 0x7c:
    if (param_2 == 0) {
      func_0x0046a880("normalize(",10);
      return 1;
    }
    break;
  case 0x83:
    if (param_2 == 0) {
      func_0x0046a880("transpose(",10);
      return 1;
    }
    break;
  case 0x84:
    if (param_2 == 0) {
      func_0x0046a880("determinant(transpose(",0x16);
      return 1;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 1;
      }
      func_0x0046a880(&DAT_0101f5a4,2);
      return 1;
    }
    goto LAB_00b33063;
  case 0x8c:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f730,4);
      return 1;
    }
    break;
  case 0x8d:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f490,4);
      return 1;
    }
    break;
  case 0x91:
    if (param_2 == 0) {
      func_0x0046a880("reversebits(",0xc);
      return 1;
    }
    break;
  case 0x92:
    if (param_2 == 0) {
      func_0x0046a880("countbits(",10);
      return 1;
    }
    break;
  case 0x93:
    if (param_2 == 0) {
      func_0x0046a880("firstbitlow(",0xc);
      return 1;
    }
    break;
  case 0x94:
    if (param_2 == 0) {
      func_0x0046a880("firstbithigh(",0xd);
      return 1;
    }
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      func_0x0046a880(&DAT_0112e458,1);
      return 1;
    }
LAB_00b33057:
    return 1;
  }
LAB_00b33063:
  func_0x0046a880(&DAT_0112e1b4,0);
  return 1;
}



void __thiscall FUN_00b34f80(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  byte *pbVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int *piStack_d4;
  int aiStack_d0 [3];
  undefined1 auStack_c4 [4];
  int iStack_c0;
  int *piStack_bc;
  char cStack_b5;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  
  uStack_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_00f644c9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x60) != '\0') || (*(ushort *)(param_3 + 0xb8) < 0x3e))
  goto LAB_00b35337;
  puVar8 = (undefined4 *)func_0x00aee9d0(auStack_c4,uStack_14);
  pbVar14 = &DAT_0112e1b4;
  if ((byte *)*puVar8 != (byte *)0x0) {
    pbVar14 = (byte *)*puVar8;
  }
  pcVar9 = "texelFetchOffset";
  do {
    bVar1 = *pbVar14;
    bVar15 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_00b35017:
      uVar10 = -(uint)bVar15 | 1;
      goto LAB_00b3501c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar14[1];
    bVar15 = bVar1 < ((byte *)pcVar9)[1];
    if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00b35017;
    pbVar14 = pbVar14 + 2;
    pcVar9 = (char *)((byte *)pcVar9 + 2);
  } while (bVar1 != 0);
  uVar10 = 0;
LAB_00b3501c:
  if (uVar10 != 0) goto LAB_00b35337;
  pcVar2 = *(code **)(*(int *)(param_3 + 0xbc) + 8);
  _guard_check_icall();
  piStack_bc = (int *)(*pcVar2)();
  if ((uint)(piStack_bc[1] - *piStack_bc >> 2) < 2) goto LAB_00b35354;
  pcVar2 = *(code **)(**(int **)(*piStack_bc + 4) + 0xc);
  _guard_check_icall();
  piVar11 = (int *)(*pcVar2)();
  pcVar2 = *(code **)(*piVar11 + 0x7c);
  _guard_check_icall();
  iVar12 = (*pcVar2)();
  if (*(char *)(iVar12 + 0x7c) == '\x03') {
    if ((uint)(piStack_bc[1] - *piStack_bc >> 2) < 4) goto LAB_00b35354;
    pcVar2 = *(code **)(**(int **)(*piStack_bc + 0xc) + 0xc);
    _guard_check_icall();
    piVar11 = (int *)(*pcVar2)();
    pcVar2 = *(code **)(*piVar11 + 0x7c);
    _guard_check_icall();
    iVar12 = (*pcVar2)();
    cStack_b5 = '\x01';
    if (*(char *)(iVar12 + 0x7c) != '\x02') goto LAB_00b350d2;
  }
  else {
LAB_00b350d2:
    cStack_b5 = '\0';
  }
  piVar11 = piStack_bc;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  if (piStack_bc[1] - *piStack_bc >> 2 != 0) {
    func_0x00ade4a0(*piStack_bc);
    iVar12 = *piVar11;
    if (1 < (uint)(piVar11[1] - iVar12 >> 2)) {
      pcVar2 = *(code **)(**(int **)(iVar12 + 4) + 0xc);
      _guard_check_icall();
      piStack_d4 = (int *)(*pcVar2)();
      if (cStack_b5 == '\0') {
        if ((uint)(piStack_bc[1] - *piStack_bc >> 2) < 4) goto LAB_00b35354;
        pcVar2 = *(code **)(**(int **)(*piStack_bc + 0xc) + 0xc);
        _guard_check_icall();
        iVar12 = (*pcVar2)();
        piVar11 = piStack_d4;
      }
      else {
        aiStack_d0[0] = 0;
        aiStack_d0[1] = 0;
        aiStack_d0[2] = 0;
        uStack_8 = 1;
        if ((uint)(piStack_bc[1] - *piStack_bc >> 2) < 4) goto LAB_00b35354;
        pcVar2 = *(code **)(**(int **)(*piStack_bc + 0xc) + 0xc);
        _guard_check_icall();
        iStack_c0 = (*pcVar2)();
        func_0x00ade4a0(&iStack_c0);
        uVar13 = func_0x00ad8a90(3,1,1);
        iStack_c0 = func_0x00b76a40(uVar13);
        func_0x00ade4a0(&iStack_c0);
        piVar11 = piStack_d4;
        pcVar2 = *(code **)(*piStack_d4 + 0x7c);
        _guard_check_icall(aiStack_d0);
        uVar13 = (*pcVar2)();
        iVar12 = func_0x00ae1980(uVar13);
        iVar3 = piVar11[2];
        iVar4 = piVar11[3];
        iVar5 = piVar11[4];
        uStack_8 = 0;
        *(int *)(iVar12 + 4) = piVar11[1];
        *(int *)(iVar12 + 8) = iVar3;
        *(int *)(iVar12 + 0xc) = iVar4;
        *(int *)(iVar12 + 0x10) = iVar5;
        if (aiStack_d0[0] != 0) {
          aiStack_d0[0] = 0;
          aiStack_d0[1] = 0;
          aiStack_d0[2] = 0;
        }
      }
      func_0x00ad78b0();
      iStack_c0 = func_0x00ad7620(0xc4);
      uStack_8 = 2;
      if (iStack_c0 == 0) {
        iStack_c0 = 0;
      }
      else {
        iStack_c0 = func_0x00ae02d0(0x11,piVar11,iVar12);
      }
      iVar12 = piVar11[2];
      iVar3 = piVar11[3];
      iVar4 = piVar11[4];
      uStack_8 = 0;
      *(int *)(iStack_c0 + 4) = piVar11[1];
      *(int *)(iStack_c0 + 8) = iVar12;
      *(int *)(iStack_c0 + 0xc) = iVar3;
      *(int *)(iStack_c0 + 0x10) = iVar4;
      func_0x00ade4a0(&iStack_c0);
      if (2 < (uint)(piStack_bc[1] - *piStack_bc >> 2)) {
        func_0x00ade4a0(*piStack_bc + 8);
        iVar12 = func_0x00b75fc0("texelFetch",&uStack_e0,*(undefined4 *)(param_1 + 0x58),
                                 *(undefined4 *)(param_1 + 0x5c));
        uVar13 = *(undefined4 *)(param_3 + 8);
        uVar6 = *(undefined4 *)(param_3 + 0xc);
        uVar7 = *(undefined4 *)(param_3 + 0x10);
        *(undefined4 *)(iVar12 + 4) = *(undefined4 *)(param_3 + 4);
        *(undefined4 *)(iVar12 + 8) = uVar13;
        *(undefined4 *)(iVar12 + 0xc) = uVar6;
        *(undefined4 *)(iVar12 + 0x10) = uVar7;
        func_0x00ade720(iVar12,1);
        *(undefined1 *)(param_1 + 0x60) = 1;
LAB_00b35337:
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
    }
  }
LAB_00b35354:
  func_0x0046e490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 __thiscall FUN_00b356c0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64587;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((short)param_3[0x2e] == 0x2e) {
    pcVar1 = *(code **)(*(int *)param_3[0x2f] + 0x7c);
    _guard_check_icall(uVar3);
    iVar4 = (*pcVar1)();
    if (*(int *)(iVar4 + 0x84) != 0) {
      cVar2 = func_0x00b26780(param_3[0x2f]);
      if (cVar2 != '\0') {
        iVar4 = func_0x00b766d0(*(undefined4 *)(param_1 + 0x20),&DAT_012b3928);
        uVar5 = func_0x00b76a40(*(undefined4 *)(iVar4 + 0x10));
        uVar5 = func_0x00b76550(iVar4,uVar5);
        pcVar1 = *(code **)(*param_3 + 0x7c);
        _guard_check_icall();
        iVar6 = (*pcVar1)();
        uVar7 = func_0x00b761c0(*(undefined4 *)
                                 (*(int *)(iVar6 + 0x80) + -4 + *(int *)(iVar6 + 0x84) * 4));
        piVar8 = (int *)func_0x00b76660(iVar4);
        func_0x00ad78b0();
        iVar4 = func_0x00ad7620(0xc4);
        uStack_8 = 0;
        if (iVar4 == 0) {
          uStack_20 = 0;
        }
        else {
          pcVar1 = *(code **)(*piVar8 + 0x58);
          _guard_check_icall();
          uVar9 = (*pcVar1)();
          uStack_20 = func_0x00ae02d0(0x18,uVar9,uVar7);
        }
        uStack_8 = 0xffffffff;
        func_0x00ad78b0();
        iVar4 = func_0x00ad7620(200);
        uStack_8 = 1;
        if (iVar4 == 0) {
          uStack_1c = 0;
        }
        else {
          pcVar1 = *(code **)(*piVar8 + 0x58);
          _guard_check_icall();
          uVar7 = (*pcVar1)();
          uStack_1c = func_0x00ae1270(0xe,uVar7,0);
        }
        uStack_8 = 0xffffffff;
        func_0x00ad78b0();
        puVar10 = (undefined4 *)func_0x00ad7620(0x28);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar10[3] = 0;
          puVar10[1] = 0;
          puVar10[4] = 0;
          puVar10[2] = 0;
          puVar10[5] = sh::TIntermAggregateBase::vftable;
          *puVar10 = sh::TIntermBlock::vftable;
          puVar10[5] = sh::TIntermBlock::vftable;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[8] = 0;
          *(undefined1 *)(puVar10 + 9) = 0;
        }
        func_0x00ad78b0();
        iVar4 = func_0x00ad7620(0xc4);
        uStack_8 = 2;
        if (iVar4 == 0) {
          uStack_18 = 0;
        }
        else {
          pcVar1 = *(code **)(*piVar8 + 0x58);
          _guard_check_icall();
          uVar7 = (*pcVar1)();
          uStack_18 = func_0x00ae02d0(0x2a,param_3[0x2f],uVar7);
        }
        uStack_8 = 0xffffffff;
        func_0x00ad78b0();
        iVar4 = func_0x00ad7620(0xc4);
        uStack_8 = 3;
        if (iVar4 == 0) {
          uVar7 = 0;
        }
        else {
          pcVar1 = *(code **)(*piVar8 + 0x58);
          _guard_check_icall();
          uVar7 = (*pcVar1)();
          uVar7 = func_0x00ae02d0(0x2a,param_3[0x30],uVar7);
        }
        uStack_8 = 0xffffffff;
        func_0x00ad78b0();
        iVar4 = func_0x00ad7620(0xc4);
        uStack_8 = 4;
        if (iVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = func_0x00ae02d0(0x2e,uStack_18,uVar7);
        }
        uStack_8 = 0xffffffff;
        func_0x00ae5dc0(uVar7);
        func_0x00ad78b0();
        iVar4 = func_0x00ad7620(0x28);
        uStack_8 = 5;
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar7 = func_0x00b77150(puVar10);
          uVar5 = func_0x00ae0bb0(0,uVar5,uStack_20,uStack_1c,uVar7);
        }
        uStack_8 = 0xffffffff;
        func_0x00ade720(uVar5,1);
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 FUN_00b35a80(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f645d6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(short *)(param_2 + 0xb8) == 0x2e) &&
     (cVar2 = func_0x00b26780(*(undefined4 *)(param_2 + 0xbc),uVar3), cVar2 != '\0')) {
    pcVar1 = *(code **)(**(int **)(param_2 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar4 = (*pcVar1)();
    iVar4 = *(int *)(iVar4 + 0x90);
    if (iVar4 != 0) {
      func_0x00ad78b0();
      puStack_1c = (undefined4 *)func_0x00ad7620(0x28);
      if (puStack_1c == (undefined4 *)0x0) {
        puStack_1c = (undefined4 *)0x0;
      }
      else {
        puStack_1c[3] = 0;
        puStack_1c[1] = 0;
        puStack_1c[4] = 0;
        puStack_1c[2] = 0;
        puStack_1c[5] = sh::TIntermAggregateBase::vftable;
        *puStack_1c = sh::TIntermBlock::vftable;
        puStack_1c[5] = sh::TIntermBlock::vftable;
        puStack_1c[6] = 0;
        puStack_1c[7] = 0;
        puStack_1c[8] = 0;
        *(undefined1 *)(puStack_1c + 9) = 0;
      }
      iStack_14 = 0;
      if (0 < (int)((*(int **)(iVar4 + 0x10))[1] - **(int **)(iVar4 + 0x10) & 0xfffffffcU)) {
        do {
          func_0x00ad78b0();
          iVar5 = func_0x00ad7620(0xc4);
          uStack_8 = 0;
          if (iVar5 == 0) {
            uStack_18 = 0;
          }
          else {
            uVar6 = func_0x00b761c0(iStack_14);
            pcVar1 = *(code **)(**(int **)(param_2 + 0xbc) + 0x58);
            _guard_check_icall();
            uVar7 = (*pcVar1)();
            uStack_18 = func_0x00ae02d0(0x2c,uVar7,uVar6);
          }
          uStack_8 = 0xffffffff;
          func_0x00ad78b0();
          iVar5 = func_0x00ad7620(0xc4);
          uStack_8 = 1;
          if (iVar5 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = func_0x00b761c0(iStack_14);
            pcVar1 = *(code **)(**(int **)(param_2 + 0xc0) + 0x58);
            _guard_check_icall();
            uVar7 = (*pcVar1)();
            uVar6 = func_0x00ae02d0(0x2c,uVar7,uVar6);
          }
          uStack_8 = 0xffffffff;
          func_0x00ad78b0();
          iVar5 = func_0x00ad7620(0xc4);
          uStack_8 = 2;
          if (iVar5 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = func_0x00ae02d0(0x2e,uStack_18,uVar6);
          }
          uStack_8 = 0xffffffff;
          func_0x00ae5dc0(uVar6);
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < (*(int **)(iVar4 + 0x10))[1] - **(int **)(iVar4 + 0x10) >> 2);
      }
      func_0x00ade720(puStack_1c,1);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall FUN_00b35dc0(undefined4 param_1,byte param_2)

{
  func_0x00b0ceb0();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,100);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b360d0(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar3 = param_3;
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f646b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 == 0) {
    pcVar1 = *(code **)(*param_3 + 0x7c);
    _guard_check_icall(uVar4);
    iVar5 = (*pcVar1)();
    if ((*(int *)(iVar5 + 0x84) != 0) && ((short)piVar3[0x2e] == 1)) {
      uVar6 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
      if (uVar6 < 2) {
        piStack_14 = (int *)0x0;
      }
      else {
        piStack_14 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar6 * 4);
      }
      pcVar1 = *(code **)(*piStack_14 + 0x1c);
      _guard_check_icall(uVar4);
      uStack_18 = (*pcVar1)();
      if (uStack_18 != 0) {
        uStack_28 = 0;
        iStack_24 = 0;
        iStack_20 = 0;
        iStack_8 = 0;
        piStack_14 = (int *)0x0;
        func_0x00ad78b0();
        piStack_1c = (int *)func_0x00ad7620(0xa0);
        iStack_8._0_1_ = 1;
        if (piStack_1c == (int *)0x0) {
          uVar7 = 0;
        }
        else {
          pcVar1 = *(code **)(*piVar3 + 0x7c);
          _guard_check_icall();
          uVar7 = (*pcVar1)();
          uVar7 = func_0x00ad8850(uVar7);
        }
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        uVar7 = func_0x00b76ff0(*(undefined4 *)(param_1 + 0x20),uVar7,0,&piStack_14);
        piStack_1c = piStack_14;
        func_0x00ade4a0(&piStack_1c);
        uVar7 = func_0x00b76660(uVar7);
        piStack_1c = (int *)func_0x00b35ec0(piVar3,uVar7);
        func_0x00ade4a0(&piStack_1c);
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 != *(int **)(param_1 + 0x1c)) {
          piVar2[1] = (int)piVar3;
          *piVar2 = uStack_18 + 0x14;
          piVar2[2] = uStack_28;
          piVar2[3] = iStack_24;
          piVar2[4] = iStack_20;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
          *unaff_FS_OFFSET = iStack_10;
          return 0;
        }
        func_0x00b10da0(piVar2,&uStack_18,&param_3,&uStack_28);
      }
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



uint FUN_00b362a0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(short *)(param_2 + 0xb8) == 0x2e) {
    pcVar1 = *(code **)(**(int **)(param_2 + 0xbc) + 0x7c);
    _guard_check_icall();
    uVar2 = (*pcVar1)();
    if (*(int *)(uVar2 + 0x84) != 0) {
      pcVar1 = *(code **)(**(int **)(param_2 + 0xc0) + 0x18);
      _guard_check_icall();
      uVar2 = (*pcVar1)();
      if ((uVar2 != 0) && (*(short *)(uVar2 + 0xb8) == 1)) {
        uVar3 = func_0x00b35ec0(uVar2,*(undefined4 *)(param_2 + 0xbc));
        uVar2 = func_0x00ade720(uVar3,1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  return in_EAX & 0xffffff00;
}



uint __thiscall FUN_00b36330(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  uVar6 = param_3;
  puStack_c = &DAT_00f64703;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar9 = *(uint *)(param_1 + 0x58);
  uStack_2c = uVar9;
  if ((uVar9 != 0) && (*(short *)(param_3 + 0x14) == 4)) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    piStack_18 = *(int **)(param_3 + 0x18);
    iStack_8 = 0;
    puStack_14 = (undefined4 *)(*(int *)(*(int *)(uVar9 + 0x14) + 0x18) + 8);
    func_0x00ad78b0(uVar7);
    puStack_20 = (undefined4 *)func_0x00ad7620(0x1c);
    iStack_8._0_1_ = 1;
    if (puStack_20 == (undefined4 *)0x0) {
      puStack_14 = (undefined4 *)0x0;
    }
    else {
      uStack_1c = *puStack_14;
      puVar8 = (undefined4 *)func_0x00b35d00(&uStack_1c);
      puStack_14 = (undefined4 *)func_0x00ae10c0(*puVar8);
    }
    iStack_8._0_1_ = 0;
    func_0x00ad78b0();
    puStack_20 = (undefined4 *)func_0x00ad7620(0xc4);
    iStack_8._0_1_ = 2;
    if (puStack_20 == (undefined4 *)0x0) {
      puStack_20 = (undefined4 *)0x0;
    }
    else {
      puStack_20 = (undefined4 *)func_0x00ae02d0(0x2e,puStack_14,piStack_18);
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    uVar3 = *(undefined4 *)((int)piStack_18 + 8);
    uVar4 = *(undefined4 *)((int)piStack_18 + 0xc);
    uVar5 = *(undefined4 *)((int)piStack_18 + 0x10);
    puStack_20[1] = *(undefined4 *)((int)piStack_18 + 4);
    puStack_20[2] = uVar3;
    puStack_20[3] = uVar4;
    puStack_20[4] = uVar5;
    func_0x00ade4a0(&puStack_20);
    func_0x00ad78b0();
    puStack_20 = (undefined4 *)func_0x00ad7620(0x1c);
    if (puStack_20 == (undefined4 *)0x0) {
      puStack_20 = (undefined4 *)0x0;
    }
    else {
      puStack_20[3] = 0;
      puStack_20[1] = 0;
      puStack_20[4] = 0;
      puStack_20[2] = 0;
      *puStack_20 = sh::TIntermBranch::vftable;
      *(undefined2 *)(puStack_20 + 5) = 4;
      puStack_20[6] = 0;
    }
    uVar3 = *(undefined4 *)(uVar6 + 8);
    uVar4 = *(undefined4 *)(uVar6 + 0xc);
    uVar5 = *(undefined4 *)(uVar6 + 0x10);
    puStack_20[1] = *(undefined4 *)(uVar6 + 4);
    puStack_20[2] = uVar3;
    puStack_20[3] = uVar4;
    puStack_20[4] = uVar5;
    func_0x00ade4a0(&puStack_20);
    uVar9 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar9 < 2) {
      piStack_18 = (int *)0x0;
    }
    else {
      piStack_18 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar9 * 4);
    }
    pcVar1 = *(code **)(*piStack_18 + 0x1c);
    _guard_check_icall();
    puStack_20 = (undefined4 *)(*pcVar1)();
    puVar2 = *(uint **)(param_1 + 0x18);
    if (puVar2 == *(uint **)(param_1 + 0x1c)) {
      uStack_2c = func_0x00b10da0(puVar2,&puStack_20,&param_3,&uStack_2c);
    }
    else {
      *puVar2 = -(uint)(puStack_20 != (undefined4 *)0x0) & (uint)(puStack_20 + 5);
      puVar2[1] = param_3;
      puVar2[2] = uStack_2c;
      puVar2[3] = uStack_28;
      puVar2[4] = uStack_24;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_2c & 0xffffff00;
}



undefined4 __thiscall FUN_00b36530(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(**(int **)(param_3 + 0x14) + 0x7c);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((*(int *)(iVar2 + 0x84) != 0) && (param_2 == 0)) {
    *(int *)(param_1 + 0x58) = param_3;
    return 1;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return 1;
}



void FUN_00b36580(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64751;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall(uVar4);
  iVar5 = (*pcVar1)();
  iVar7 = iStack_14;
  if (*(int *)(iVar5 + 0x84) != 0) {
    piStack_20 = (int *)(param_1[6] + 8);
    iStack_1c = *piStack_20;
    func_0x0092d560(auStack_30,&iStack_1c);
    if (((*(char *)(iStack_28 + 0xd) != '\0') || (*piStack_20 < *(int *)(iStack_28 + 0x10))) ||
       (iStack_28 == *(int *)(iVar7 + 0x5c))) {
      func_0x00ad78b0();
      iStack_1c = func_0x00ad7620(0xa0);
      uStack_8 = 0;
      if (iStack_1c == 0) {
        iVar7 = 0;
      }
      else {
        pcVar1 = *(code **)(*param_1 + 0x7c);
        _guard_check_icall();
        uVar6 = (*pcVar1)();
        iVar7 = func_0x00ad8850(uVar6);
      }
      uStack_8 = 0xffffffff;
      *(undefined4 *)(iVar7 + 8) = 0xf;
      func_0x00ad78b0();
      iStack_24 = func_0x00ad7620(0x18);
      uStack_8 = 1;
      if (iStack_24 == 0) {
        iStack_1c = 0;
      }
      else {
        iStack_1c = func_0x00aee0e0(*(undefined4 *)(iStack_14 + 0x20),&PTR_s_angle_return_0101fd9c,
                                    iVar7,2,0);
      }
      uStack_8 = 0xffffffff;
      func_0x00ad78b0();
      iStack_24 = func_0x00ad7620(0x2c);
      uStack_8 = 2;
      if (iStack_24 == 0) {
        uStack_18 = 0;
      }
      else {
        uStack_18 = CONCAT31(uStack_18._1_3_,*(undefined1 *)(param_1[6] + 0xf)) & 0xffffff0f;
        uVar6 = func_0x00aee9d0(auStack_2c);
        uStack_18 = func_0x00aedf50(*(undefined4 *)(iStack_14 + 0x20),uVar6,uStack_18,&DAT_012b39c8,
                                    0);
      }
      iVar7 = param_1[6];
      uVar4 = 0;
      uStack_8 = 0xffffffff;
      if (*(int *)(iVar7 + 0x24) != 0) {
        do {
          func_0x00aee150(*(undefined4 *)(*(int *)(iVar7 + 0x14) + uVar4 * 4));
          iVar7 = param_1[6];
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(iVar7 + 0x24));
      }
      uVar4 = uStack_18;
      func_0x00aee150(iStack_1c);
      iStack_24 = *piStack_20;
      piVar8 = (int *)func_0x00b35d00(&iStack_24);
      *piVar8 = iStack_1c;
      piVar8[1] = uVar4;
    }
    func_0x00ad78b0();
    iStack_24 = func_0x00ad7620(0x1c);
    uStack_8 = 3;
    if (iStack_24 == 0) {
      iVar7 = 0;
    }
    else {
      iStack_1c = *piStack_20;
      iVar7 = func_0x00b35d00(&iStack_1c);
      iVar7 = func_0x00ae0a00(*(undefined4 *)(iVar7 + 4));
    }
    iVar5 = param_1[2];
    iVar2 = param_1[3];
    iVar3 = param_1[4];
    uStack_8 = 0xffffffff;
    *(int *)(iVar7 + 4) = param_1[1];
    *(int *)(iVar7 + 8) = iVar5;
    *(int *)(iVar7 + 0xc) = iVar2;
    *(int *)(iVar7 + 0x10) = iVar3;
    func_0x00ade720(iVar7,1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b36850(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int aiStack_b4 [31];
  byte bStack_38;
  byte bStack_37;
  int iStack_30;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64783;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((param_2 == 0) && (1 < *(int *)(param_1 + 0x58))) &&
     (cVar6 = FUN_00aea620(uStack_14), cVar6 != '\0')) {
    piVar1 = (int *)param_3[0x30];
    pcVar2 = *(code **)(*piVar1 + 0x7c);
    _guard_check_icall();
    uVar7 = (*pcVar2)();
    func_0x00ad8850(uVar7);
    if (((((bStack_38 == 1) && (bStack_37 == 1)) && ((iStack_24 == 0 && (iStack_30 == 0)))) ||
        ((((1 < bStack_38 && (bStack_37 == 1)) || ((1 < bStack_38 && (1 < bStack_37)))) &&
         (iStack_30 == 0)))) && (0x2a < aiStack_b4[0] - 8U)) {
      func_0x00ad78b0();
      iVar8 = func_0x00ad7620(0xc4);
      uStack_8 = 0;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        uVar7 = func_0x00b76a40(aiStack_b4);
        iVar8 = func_0x00ae02d0(0x11,piVar1,uVar7);
      }
      uStack_8 = 0xffffffff;
      iVar3 = piVar1[2];
      iVar4 = piVar1[3];
      iVar5 = piVar1[4];
      *(int *)(iVar8 + 4) = piVar1[1];
      *(int *)(iVar8 + 8) = iVar3;
      *(int *)(iVar8 + 0xc) = iVar4;
      *(int *)(iVar8 + 0x10) = iVar5;
      pcVar2 = *(code **)(*param_3 + 100);
      _guard_check_icall(piVar1,iVar8);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00b369b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 == 0) * 2 + -1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



undefined4 __thiscall FUN_00b36a80(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f647e9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x58) != '\0') {
LAB_00b36d4c:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if ((short)param_3[0x2e] == 0x4c) {
    pcVar1 = *(code **)(param_3[0x2f] + 8);
    _guard_check_icall(uVar4);
    piVar5 = (int *)(*pcVar1)();
    if ((uint)(piVar5[1] - *piVar5 >> 2) < 2) {
      func_0x0046e490();
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    pcVar1 = *(code **)(**(int **)(*piVar5 + 4) + 0x10);
    _guard_check_icall(uVar4);
    piVar5 = (int *)(*pcVar1)();
    if (piVar5 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar5 + 0x7c);
      _guard_check_icall(uVar4);
      iVar6 = (*pcVar1)();
      if (*(char *)(iVar6 + 0x7c) == '\x01') {
        pcVar1 = *(code **)(*piVar5 + 0x74);
        _guard_check_icall();
        (*pcVar1)();
        fVar11 = (float10)func_0x00b656b0();
        puStack_14 = (undefined4 *)(float)fVar11;
        if (((-5.0 <= (float)puStack_14) && ((float)puStack_14 <= 9.0)) &&
           (fVar11 = (float10)func_0x00e879b3(puStack_14),
           ABS((float)puStack_14 - (float)fVar11) <= 0.0001)) {
          uVar4 = (uint)fVar11;
          iVar6 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
          if (1 < iVar6) {
            puVar7 = (undefined4 *)func_0x00b13650(0);
            pcVar1 = *(code **)(*(int *)*puVar7 + 0xc);
            _guard_check_icall();
            uVar8 = (*pcVar1)();
            uStack_18 = 0;
            uVar8 = func_0x00b76e80(*(undefined4 *)(param_1 + 0x20),uVar8,0,&uStack_18);
            func_0x00ade110(uStack_18);
            iVar9 = func_0x00b76660(uVar8);
            puStack_14 = (undefined4 *)(iVar6 + -1);
            do {
              func_0x00ad78b0();
              iVar6 = func_0x00ad7620(0xc4);
              uStack_8 = 0;
              if (iVar6 == 0) {
                iVar9 = 0;
              }
              else {
                uVar10 = func_0x00b76660(uVar8);
                iVar9 = func_0x00ae02d0(0x13,iVar9,uVar10);
              }
              puStack_14 = (undefined4 *)((int)puStack_14 + -1);
              uStack_8 = 0xffffffff;
              iVar6 = param_3[2];
              iVar2 = param_3[3];
              iVar3 = param_3[4];
              *(int *)(iVar9 + 4) = param_3[1];
              *(int *)(iVar9 + 8) = iVar6;
              *(int *)(iVar9 + 0xc) = iVar2;
              *(int *)(iVar9 + 0x10) = iVar3;
            } while (puStack_14 != (undefined4 *)0x0);
            puVar7 = (undefined4 *)0x0;
            if ((int)uVar4 < 0) {
              func_0x00ad78b0();
              iVar6 = func_0x00ad7620(8);
              uStack_8 = 1;
              if (iVar6 == 0) {
                puStack_14 = (undefined4 *)0x0;
              }
              else {
                puStack_14 = (undefined4 *)FUN_0046f300();
              }
              uStack_8 = 0xffffffff;
              *puStack_14 = 0x3f800000;
              puStack_14[1] = 1;
              func_0x00ad78b0();
              puVar7 = (undefined4 *)func_0x00ad7620(0xbc);
              uStack_8 = 2;
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                pcVar1 = *(code **)(*param_3 + 0x7c);
                _guard_check_icall();
                uVar8 = (*pcVar1)();
                func_0x00ae0980(uVar8);
                *puVar7 = sh::TIntermConstantUnion::vftable;
                puVar7[0x2e] = puStack_14;
              }
              uStack_8 = 0xffffffff;
              func_0x00ad78b0();
              iVar6 = func_0x00ad7620(0xc4);
              uStack_8 = 4;
              if (iVar6 == 0) {
                iVar9 = 0;
                puVar7 = puStack_14;
              }
              else {
                iVar9 = func_0x00ae02d0(0x14,puVar7,iVar9);
                puVar7 = puStack_14;
              }
            }
            puStack_14 = puVar7;
            uStack_8 = 0xffffffff;
            func_0x00ade720(iVar9,1);
            *(undefined1 *)(param_1 + 0x58) = 1;
            goto LAB_00b36d4c;
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall FUN_00b36db0(undefined4 param_1,byte param_2)

{
  func_0x00993430();
  func_0x00993430();
  func_0x00993430();
  func_0x00993430();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x78);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b37500(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iStack_4;
  
  iStack_4 = param_1;
  if (*(short *)(param_3 + 0xb8) == 0x2a) {
    if (param_2 == 0) {
      pcVar1 = *(code **)(**(int **)(param_3 + 0xbc) + 0x7c);
      _guard_check_icall();
      piVar7 = (int *)(*pcVar1)();
      if (*piVar7 == 0x5e) {
        iVar3 = piVar7[0x23];
        cVar2 = func_0x00b36e00(iVar3);
        if (cVar2 != '\0') {
          iStack_4 = *(int *)(iVar3 + 8);
          iVar5 = func_0x00b2bd80(&iStack_4);
          if (iVar5 == 0) {
            iStack_4 = *(int *)(iVar3 + 8);
            piVar8 = (int *)func_0x00b29aa0(&iStack_4);
            *piVar8 = iVar3;
            iVar3 = func_0x00b2bd40(&stack0xfffffff8);
            if (iVar3 == 0) {
              if (piVar7[0x21] == 0) {
                uVar10 = 1;
              }
              else {
                uVar10 = *(undefined4 *)(piVar7[0x20] + -4 + piVar7[0x21] * 4);
              }
              puVar9 = (undefined4 *)func_0x00b29aa0(&stack0xfffffff4);
              *puVar9 = uVar10;
            }
            return 0;
          }
        }
        if (*(int *)(iVar3 + 0x34) == 3) {
          cVar2 = func_0x00b36f80(iVar3);
          if (cVar2 != '\0') {
            iStack_4 = *(int *)(iVar3 + 8);
            iVar5 = func_0x00b2bd80(&iStack_4);
            if (iVar5 == 0) {
              piVar7 = (int *)func_0x00b29aa0(&stack0xfffffff8);
              *piVar7 = iVar3;
            }
          }
        }
      }
    }
  }
  else if ((*(short *)(param_3 + 0xb8) == 0x2d) && (param_2 == 1)) {
    pcVar1 = *(code **)(**(int **)(param_3 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(iVar3 + 0x8c);
    cVar2 = func_0x00b36e00(iVar3);
    if (cVar2 != '\0') {
      uVar4 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
      if (uVar4 < 2) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar4 * 4);
      }
      pcVar1 = *(code **)(*piVar7 + 0x30);
      _guard_check_icall();
      iVar5 = (*pcVar1)();
      if ((iVar5 == 0) || ((*(short *)(iVar5 + 0xb8) != 0x2a && (*(short *)(iVar5 + 0xb8) != 0x2b)))
         ) {
        iVar5 = *(int *)(iVar3 + 8);
        iStack_4 = iVar5;
        iVar6 = func_0x00b2bd80(&iStack_4);
        if (iVar6 == 0) {
          iStack_4 = iVar5;
          piVar7 = (int *)func_0x00b29aa0(&iStack_4);
          *piVar7 = iVar3;
          return 0;
        }
      }
    }
    if (*(int *)(iVar3 + 0x34) == 3) {
      cVar2 = func_0x00b36f80(iVar3);
      if (cVar2 != '\0') {
        piVar7 = (int *)func_0x00ade090(0);
        pcVar1 = *(code **)(*piVar7 + 0x30);
        _guard_check_icall();
        iVar5 = (*pcVar1)();
        if ((iVar5 != 0) &&
           ((*(short *)(iVar5 + 0xb8) == 0x2a || (*(short *)(iVar5 + 0xb8) == 0x2b)))) {
          iVar5 = func_0x00b2bd80(&stack0xfffffff8);
          if (iVar5 == 0) {
            piVar7 = (int *)func_0x00b29aa0(&stack0xfffffff4);
            *piVar7 = iVar3;
            return 1;
          }
        }
      }
    }
  }
  return 1;
}



void __thiscall FUN_00b37770(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int iStack_10;
  undefined1 auStack_c [12];
  
  piVar9 = *(int **)(*(int *)(param_2 + 0x18) + 0x10);
  if ((piVar9[2] == 6) && (iVar1 = piVar9[0x23], iVar1 != 0)) {
    cVar3 = func_0x00b36e00(iVar1);
    if (cVar3 != '\0') {
      iVar7 = *(int *)(iVar1 + 8);
      iStack_10 = iVar7;
      iVar4 = func_0x0092d560(auStack_c,&iStack_10);
      if ((*(char *)(*(int *)(iVar4 + 8) + 0xd) != '\0') ||
         (iVar7 < *(int *)(*(int *)(iVar4 + 8) + 0x10))) {
        piVar5 = (int *)func_0x00b29aa0(&stack0xffffffe8);
        *piVar5 = iVar1;
      }
      if (*piVar9 == 0x5e) {
        iVar7 = func_0x00b2bd40(&stack0xffffffe8);
        if (iVar7 == 0) {
          if (piVar9[0x21] == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = *(undefined4 *)(piVar9[0x20] + -4 + piVar9[0x21] * 4);
          }
          iStack_10 = *(int *)(iVar1 + 8);
          puVar8 = (undefined4 *)func_0x00b29aa0(&iStack_10);
          *puVar8 = uVar10;
        }
      }
      else {
        uVar6 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
        if (uVar6 < 2) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar6 * 4);
        }
        pcVar2 = *(code **)(*piVar5 + 0x30);
        _guard_check_icall();
        iVar7 = (*pcVar2)();
        if ((iVar7 == 0) ||
           ((*(short *)(iVar7 + 0xb8) != 0x2a && (*(short *)(iVar7 + 0xb8) != 0x2b)))) {
          iVar7 = *(int *)(iVar1 + 8);
          iVar4 = func_0x00b2bd80(&stack0xffffffe8);
          if (iVar4 == 0) {
            iStack_10 = iVar7;
            piVar5 = (int *)func_0x00b29aa0(&iStack_10);
            *piVar5 = iVar1;
          }
        }
        else {
          iVar7 = *(int *)(iVar1 + 8);
          iVar4 = func_0x00b2bd40(&stack0xffffffe8);
          if (iVar4 == 0) {
            iStack_10 = iVar7;
            puVar8 = (undefined4 *)func_0x00b29aa0(&iStack_10);
            *puVar8 = 1;
          }
        }
      }
    }
    if (((*(int *)(iVar1 + 0x34) == 3) && (cVar3 = func_0x00b36f80(iVar1), cVar3 != '\0')) &&
       (*piVar9 != 0x5e)) {
      piVar9 = (int *)func_0x00ade090(0);
      pcVar2 = *(code **)(*piVar9 + 0x30);
      _guard_check_icall();
      iVar7 = (*pcVar2)();
      if (((iVar7 != 0) &&
          ((*(short *)(iVar7 + 0xb8) == 0x2a || (*(short *)(iVar7 + 0xb8) == 0x2b)))) &&
         (iVar7 = func_0x00b2bd80(&stack0xffffffec), iVar7 == 0)) {
        piVar9 = (int *)func_0x00b29aa0(&stack0xffffffe8);
        *piVar9 = iVar1;
      }
    }
  }
  return;
}



int __thiscall FUN_00b37980(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x68);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b37ba0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f648db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((ushort)((short)param_3[0x2e] - 0xfdU) < 8) {
    pcVar1 = *(code **)(param_3[0x2f] + 8);
    _guard_check_icall(uVar3);
    puVar4 = (undefined4 *)(*pcVar1)();
    pcVar1 = *(code **)(**(int **)*puVar4 + 0xc);
    _guard_check_icall();
    uVar5 = (*pcVar1)();
    cVar2 = func_0x00b26780(uVar5);
    if (cVar2 != '\0') {
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  uVar8 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar8 < 2) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar8 * 4);
  }
  if ((((short)param_3[0x2e] == 0x103) || ((short)param_3[0x2e] == 0x104)) && (piVar9 != (int *)0x0)
     ) {
    pcVar1 = *(code **)(*piVar9 + 0x1c);
    _guard_check_icall(uVar3);
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) goto LAB_00b37c84;
  }
  else {
LAB_00b37c84:
    if (7 < (ushort)((short)param_3[0x2e] - 0xfdU)) goto LAB_00b37def;
    pcVar1 = *(code **)(*piVar9 + 0x1c);
    _guard_check_icall(uVar3);
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) goto LAB_00b37def;
    pcVar1 = *(code **)(*piVar9 + 0x30);
    _guard_check_icall(uVar3);
    iVar6 = (*pcVar1)();
    if ((iVar6 != 0) && (*(short *)(iVar6 + 0xb8) == 0x2e)) goto LAB_00b37def;
  }
  pcVar1 = *(code **)(*param_3 + 0x7c);
  _guard_check_icall(uVar3);
  uVar5 = (*pcVar1)();
  uVar5 = func_0x00b37a70(uVar5);
  func_0x00ad78b0();
  iVar6 = func_0x00ad7620(0xc4);
  uStack_8 = 0;
  if (iVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = func_0x00b76660(uVar5);
    uVar7 = func_0x00ae02d0(0x2e,uVar7,param_3);
  }
  uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  uStack_8 = 0xffffffff;
  if (uVar3 < 2) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar3 * 4);
  }
  pcVar1 = *(code **)(*piVar9 + 0x30);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  if ((iVar6 == 0) || (*(short *)(iVar6 + 0xb8) != 0x2f)) {
    pcVar1 = *(code **)(*piVar9 + 0x1c);
    _guard_check_icall();
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x58);
      func_0x00ad78b0();
      iVar6 = func_0x00ad7620(0x1c);
      uStack_8 = 1;
      if (iVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x00ae10c0(uVar5);
      }
      uStack_8 = 0xffffffff;
      uVar7 = func_0x00ae1790(uVar7,uVar5,uVar10);
    }
    uVar10 = 1;
  }
  else {
    func_0x00ade110(uVar7);
    uVar10 = 1;
    uVar7 = func_0x00b76660(uVar5,1);
  }
  func_0x00ade720(uVar7,uVar10);
LAB_00b37def:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall FUN_00b37e10(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f616ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60)) {
    uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar3 < 2) {
      piStack_14 = (int *)0x0;
    }
    else {
      piStack_14 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar3 * 4);
    }
    pcVar1 = *(code **)(*piStack_14 + 0x14);
    _guard_check_icall(uVar2);
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_8 = 0;
      func_0x00ade250(param_3,0,(int *)(param_1 + 0x5c),&uStack_20);
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 != *(int *)(param_1 + 0x60)) {
        *(int *)(param_1 + 0x60) = iVar4;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 FUN_00b38250(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 != 2) {
    return 1;
  }
  iVar5 = 0;
  piVar6 = (int *)(param_2 + 0x14);
  pcVar1 = *(code **)(*piVar6 + 8);
  _guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  if (3 < (uint)(piVar2[1] - *piVar2)) {
    do {
      pcVar1 = *(code **)(*piVar6 + 8);
      _guard_check_icall();
      piVar2 = (int *)(*pcVar1)();
      pcVar1 = *(code **)(**(int **)(*piVar2 + iVar5 * 4) + 0x3c);
      _guard_check_icall();
      iVar3 = (*pcVar1)();
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) != 0)) {
        uVar4 = func_0x00b37f60(iVar3);
        pcVar1 = *(code **)(*piVar6 + 8);
        _guard_check_icall();
        piVar2 = (int *)(*pcVar1)();
        *(undefined4 *)(*piVar2 + iVar5 * 4) = uVar4;
      }
      iVar5 = iVar5 + 1;
      pcVar1 = *(code **)(*piVar6 + 8);
      _guard_check_icall();
      piVar2 = (int *)(*pcVar1)();
    } while (iVar5 != piVar2[1] - *piVar2 >> 2);
  }
  return 1;
}



undefined4 __thiscall FUN_00b38310(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    pcVar1 = *(code **)(**(int **)(param_3 + 0x14) + 0x7c);
    _guard_check_icall();
    uVar2 = (*pcVar1)();
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00b387e8)
// WARNING: Removing unreachable block (ram,0x00b38735)

undefined4 __thiscall FUN_00b38450(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar10 = param_3;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x58) != '\0') {
LAB_00b38820:
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    iStack_18 = param_1;
    if ((ushort)((short)param_3[0x2e] - 0xfdU) < 8) {
      pcVar1 = *(code **)(param_3[0x2f] + 8);
      _guard_check_icall(uVar4);
      puVar5 = (undefined4 *)(*pcVar1)();
      pcVar1 = *(code **)(**(int **)*puVar5 + 0xc);
      _guard_check_icall();
      uVar6 = (*pcVar1)();
      cVar3 = func_0x00b26780(uVar6);
      if (cVar3 != '\0') goto LAB_00b38533;
    }
    piStack_1c = piVar10 + 0x2f;
    pcVar1 = *(code **)(piVar10[0x2f] + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar1)();
    puVar2 = (undefined4 *)puVar5[1];
    for (puVar5 = (undefined4 *)*puVar5; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      piStack_20 = (int *)*puVar5;
      pcVar1 = *(code **)(*piStack_20 + 0xc);
      _guard_check_icall(uVar4);
      uVar6 = (*pcVar1)();
      cVar3 = func_0x00b26780(uVar6);
      iVar12 = iStack_18;
      if (cVar3 != '\0') {
        iStack_3c = 0;
        iStack_38 = 0;
        iStack_34 = 0;
        *(undefined1 *)(iStack_18 + 0x58) = 1;
        uStack_8 = 1;
        pcVar1 = *(code **)(*piStack_1c + 8);
        _guard_check_icall();
        piStack_24 = (int *)(*pcVar1)();
        piVar10 = param_3;
        piVar11 = (int *)0x0;
        piStack_20 = (int *)0x0;
        iVar7 = FUN_00ae9a60();
        if (iVar7 != 0) {
          do {
            piStack_2c = (int *)((int)piVar11 * 4);
            pcVar1 = *(code **)(**(int **)((int)piStack_2c + *piStack_24) + 0xc);
            _guard_check_icall();
            piVar11 = (int *)(*pcVar1)();
            piStack_14 = piVar11;
            cVar3 = func_0x00b26780(piVar11);
            if (cVar3 != '\0') {
              uVar6 = func_0x00b76e80(*(undefined4 *)(iStack_18 + 0x20),piVar11,0,&piStack_28);
              piStack_1c = piStack_28;
              func_0x00ade4a0(&piStack_1c);
              piVar8 = (int *)func_0x00b76660(uVar6);
              piStack_1c = piVar8;
              if ((piVar10[0x34] != 0) &&
                 ((iVar12 = *(int *)(*(int *)(*(int *)(*(int *)(piVar10[0x34] + 0x14) +
                                                      (int)piStack_2c) + 0x10) + 8), iVar12 == 0x10
                  || (iVar12 == 0xf)))) {
                func_0x00ad78b0();
                piStack_30 = (int *)func_0x00ad7620(0xc4);
                uStack_8._0_1_ = 2;
                if (piStack_30 == (int *)0x0) {
                  piStack_2c = (int *)0x0;
                }
                else {
                  pcVar1 = *(code **)(*piVar8 + 0x58);
                  _guard_check_icall();
                  uVar6 = (*pcVar1)();
                  pcVar1 = *(code **)(*piStack_14 + 0x58);
                  _guard_check_icall();
                  uVar9 = (*pcVar1)();
                  piStack_2c = (int *)func_0x00ae02d0(0x2e,uVar9,uVar6);
                  piVar8 = piStack_1c;
                  piVar11 = piStack_14;
                }
                uStack_8 = CONCAT31(uStack_8._1_3_,1);
                func_0x00ade4a0(&piStack_2c);
              }
              pcVar1 = *(code **)(*piVar10 + 100);
              _guard_check_icall(piVar11,piVar8);
              (*pcVar1)();
            }
            piVar11 = (int *)((int)piStack_20 + 1);
            piStack_20 = piVar11;
            piVar8 = (int *)FUN_00ae9a60();
            iVar12 = iStack_18;
          } while (piVar11 < piVar8);
        }
        uVar4 = *(int *)(iVar12 + 0x40) - *(int *)(iVar12 + 0x3c) >> 2;
        if (uVar4 < 2) {
          piStack_20 = (int *)0x0;
        }
        else {
          piStack_20 = *(int **)(*(int *)(iVar12 + 0x3c) + -8 + uVar4 * 4);
        }
        pcVar1 = *(code **)(*piStack_20 + 0x1c);
        _guard_check_icall();
        piStack_20 = (int *)(*pcVar1)();
        if (piStack_20 != (int *)0x0) {
          piStack_30 = piVar10;
          func_0x00ade4a0();
          piVar11 = *(int **)(iVar12 + 0x18);
          if (piVar11 == *(int **)(iVar12 + 0x1c)) {
            func_0x00b10da0(piVar11,&piStack_20,&param_3,&iStack_3c);
            *unaff_FS_OFFSET = iStack_10;
            return 0;
          }
          piVar11[1] = (int)piVar10;
          *piVar11 = (int)(piStack_20 + 5);
          piVar11[2] = iStack_3c;
          piVar11[3] = iStack_38;
          piVar11[4] = iStack_34;
          *(int *)(iVar12 + 0x18) = *(int *)(iVar12 + 0x18) + 0x14;
          *unaff_FS_OFFSET = iStack_10;
          return 0;
        }
        uVar6 = func_0x00b76e80(*(undefined4 *)(iVar12 + 0x20),piVar10,0,&piStack_30);
        piStack_2c = piStack_30;
        func_0x00ade4a0(&piStack_2c);
        piVar10 = (int *)func_0x00b76660(uVar6);
        func_0x00ade380(&iStack_3c);
        pcVar1 = *(code **)(*piVar10 + 0x58);
        _guard_check_icall(1);
        uVar6 = (*pcVar1)();
        func_0x00ade720(uVar6);
        goto LAB_00b38820;
      }
    }
  }
LAB_00b38533:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



// WARNING: Switch with 1 destination removed at 0x00b38a8f : 25 cases all go to same destination

undefined1 * __thiscall FUN_00b38840(int param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [148];
  undefined *puStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined *puStack_5c;
  undefined4 *puStack_58;
  int *piStack_54;
  undefined *puStack_50;
  undefined *puStack_4c;
  undefined4 *puStack_48;
  int *piStack_44;
  undefined4 *puStack_40;
  uint uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int *piStack_1c;
  int *piStack_18;
  char cStack_12;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f649e1;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != 1) {
LAB_00b38b96:
    *unaff_FS_OFFSET = iStack_10;
    return (undefined1 *)0x1;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return auStack_100;
  }
  puStack_40 = *(undefined4 **)(param_3 + 0xc0);
  piStack_44 = (int *)0xb3889e;
  cStack_11 = func_0x00b26780();
  piStack_44 = *(int **)(param_3 + 0xbc);
  puStack_48 = (undefined4 *)0xb388ac;
  cStack_12 = func_0x00b26780();
  if ((cStack_12 == '\0') && (cStack_11 == '\0')) goto LAB_00b38b96;
  switch((uint)*(ushort *)(param_3 + 0xb8)) {
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
    *(undefined1 *)(param_1 + 0x58) = 1;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    puStack_40 = &uStack_2c;
    iStack_8 = 0;
    piStack_44 = *(int **)(param_3 + 0xc0);
    puStack_48 = (undefined4 *)&UNK_00b38915;
    piVar3 = (int *)func_0x00b38400();
    puStack_48 = &uStack_2c;
    piStack_1c = piVar3;
    if (cStack_12 == '\0') {
      puStack_4c = &UNK_00b38a24;
      func_0x00ade380();
      puStack_4c = &UNK_00b38a29;
      func_0x00ad78b0();
      puStack_4c = (undefined *)0xc4;
      puStack_50 = &UNK_00b38a35;
      iStack_20 = func_0x00ad7620();
      iStack_8._0_1_ = 3;
      if (iStack_20 == 0) goto code_r0x00b38a72;
      pcVar2 = *(code **)(*piVar3 + 0x58);
      puStack_60 = &UNK_00b38a4d;
      _guard_check_icall();
      puStack_60 = &UNK_00b38a52;
      puStack_60 = (undefined *)(*pcVar2)();
      uStack_68 = (uint)*(ushort *)(param_3 + 0xb8);
      uStack_64 = *(undefined4 *)(param_3 + 0xbc);
      puStack_6c = &UNK_00b38a69;
      uStack_64 = func_0x00ae02d0();
      iStack_8 = (uint)iStack_8._1_3_ << 8;
    }
    else {
      pcVar2 = *(code **)(**(int **)(param_3 + 0xbc) + 0x58);
      puStack_4c = &UNK_00b3893b;
      _guard_check_icall();
      puStack_4c = &UNK_00b3893f;
      puStack_4c = (undefined *)(*pcVar2)();
      puStack_50 = &UNK_00b38947;
      piVar3 = (int *)func_0x00b38400();
      puStack_50 = &UNK_00b38951;
      piStack_18 = piVar3;
      func_0x00ad78b0();
      puStack_50 = (undefined *)0xc4;
      piStack_54 = (int *)&UNK_00b3895d;
      iStack_20 = func_0x00ad7620();
      iStack_8._0_1_ = 1;
      if (iStack_20 == 0) {
        iStack_20 = 0;
      }
      else {
        pcVar2 = *(code **)(*piStack_1c + 0x58);
        piStack_54 = (int *)&UNK_00b38978;
        _guard_check_icall();
        piStack_54 = (int *)&UNK_00b3897c;
        uVar4 = (*pcVar2)();
        pcVar2 = *(code **)(*piStack_18 + 0x58);
        piStack_54 = (int *)&UNK_00b3898e;
        _guard_check_icall();
        piStack_54 = (int *)&UNK_00b38993;
        puStack_58 = (undefined4 *)(*pcVar2)();
        puStack_5c = (undefined *)(uint)*(ushort *)(param_3 + 0xb8);
        puStack_60 = &UNK_00b389a8;
        piStack_54 = (int *)uVar4;
        iStack_20 = func_0x00ae02d0();
        piVar3 = piStack_18;
      }
      piStack_54 = &iStack_20;
      iStack_8._0_1_ = 0;
      puStack_58 = (undefined4 *)&UNK_00b389c2;
      func_0x00ade4a0();
      puStack_58 = &uStack_2c;
      puStack_5c = &UNK_00b389cd;
      func_0x00ade380();
      puStack_5c = &UNK_00b389d2;
      func_0x00ad78b0();
      puStack_5c = (undefined *)0xc4;
      puStack_60 = &UNK_00b389de;
      iStack_20 = func_0x00ad7620();
      iStack_8._0_1_ = 2;
      if (iStack_20 == 0) {
code_r0x00b38a72:
        uStack_64 = 0;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
      }
      else {
        pcVar2 = *(code **)(*piVar3 + 0x58);
        puStack_60 = &UNK_00b389fc;
        _guard_check_icall();
        puStack_60 = &UNK_00b38a01;
        puStack_60 = (undefined *)(*pcVar2)();
        uStack_64 = *(undefined4 *)(param_3 + 0xbc);
        uStack_68 = 0x2e;
        puStack_6c = &UNK_00b38a14;
        uStack_64 = func_0x00ae02d0();
        iStack_8 = (uint)iStack_8._1_3_ << 8;
      }
    }
    break;
  default:
    if ((0x18 < *(ushort *)(param_3 + 0xb8) - 0x11) || ((cStack_12 == '\0' && (cStack_11 == '\0'))))
    goto LAB_00b38b7b;
    *(undefined1 *)(param_1 + 0x58) = 1;
    piVar3 = *(int **)(param_3 + 0xc0);
    piStack_18 = *(int **)(param_3 + 0xbc);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    iStack_8 = 4;
    if (cStack_11 != '\0') {
      puStack_40 = &uStack_2c;
      puStack_48 = (undefined4 *)&UNK_00b38ae4;
      piStack_44 = piVar3;
      piStack_1c = piVar3;
      piVar3 = (int *)func_0x00b38400();
    }
    piStack_1c = piVar3;
    if (cStack_12 != '\0') {
      puStack_40 = &uStack_2c;
      piStack_44 = *(int **)(param_3 + 0xbc);
      puStack_48 = (undefined4 *)&UNK_00b38b01;
      piStack_18 = (int *)func_0x00b38400();
    }
    puStack_40 = &uStack_2c;
    piStack_44 = (int *)&UNK_00b38b0f;
    func_0x00ade380();
    piStack_44 = (int *)&UNK_00b38b14;
    func_0x00ad78b0();
    piStack_44 = (int *)0xc4;
    puStack_48 = (undefined4 *)&UNK_00b38b20;
    iStack_20 = func_0x00ad7620();
    iStack_8._0_1_ = 5;
    if (iStack_20 == 0) {
      uStack_64 = 0;
    }
    else {
      pcVar2 = *(code **)(*piVar3 + 0x58);
      puStack_60 = &UNK_00b38b38;
      _guard_check_icall();
      puStack_60 = &UNK_00b38b3d;
      uVar4 = (*pcVar2)();
      pcVar2 = *(code **)(*piStack_18 + 0x58);
      puStack_60 = &UNK_00b38b4f;
      _guard_check_icall();
      puStack_60 = &UNK_00b38b54;
      uStack_64 = (*pcVar2)();
      uStack_68 = (uint)*(ushort *)(param_3 + 0xb8);
      puStack_6c = &UNK_00b38b69;
      puStack_60 = (undefined *)uVar4;
      uStack_64 = func_0x00ae02d0();
    }
    iStack_8 = CONCAT31(iStack_8._1_3_,4);
  }
  puStack_60 = (undefined *)0x1;
  uStack_68 = 0xb38b7b;
  func_0x00ade720();
LAB_00b38b7b:
  cVar1 = *(char *)(param_1 + 0x58);
  *unaff_FS_OFFSET = iStack_10;
  return (undefined1 *)(uint)(cVar1 == '\0');
}



undefined4 __thiscall FUN_00b38be0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  uint uStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64a2b;
  uStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (uint)&uStack_10;
  if (*(char *)(param_1 + 0x58) == '\0') {
    iStack_18 = param_1;
    cVar3 = func_0x00b26780(param_3[0x2f],uVar4);
    if ((cVar3 == '\0') || ((short)param_3[0x2e] == 0x10)) {
      *unaff_FS_OFFSET = uStack_10;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
    switch((short)param_3[0x2e]) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      iStack_8 = 0;
      piVar7 = (int *)func_0x00b38400(param_3[0x2f],&uStack_2c);
      piStack_14 = piVar7;
      func_0x00ad78b0();
      iStack_1c = func_0x00ad7620(200);
      iStack_8._0_1_ = 1;
      if (iStack_1c == 0) {
        uVar8 = 0;
      }
      else {
        pcVar1 = *(code **)(*piVar7 + 0x58);
        _guard_check_icall();
        uVar8 = (*pcVar1)();
        uVar8 = func_0x00ae1270((short)param_3[0x2e],uVar8,0);
        piVar7 = piStack_14;
      }
      iStack_8._0_1_ = 0;
      piVar5 = (int *)func_0x00b38400(uVar8,&uStack_2c);
      piStack_20 = piVar5;
      func_0x00ad78b0();
      iStack_1c = func_0x00ad7620(0xc4);
      iStack_8._0_1_ = 2;
      if (iStack_1c == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        pcVar1 = *(code **)(*piVar7 + 0x58);
        _guard_check_icall();
        uVar8 = (*pcVar1)();
        pcVar1 = *(code **)(*(int *)param_3[0x2f] + 0x58);
        _guard_check_icall();
        uVar6 = (*pcVar1)();
        piVar7 = (int *)func_0x00ae02d0(0x2e,uVar6,uVar8);
        piVar5 = piStack_20;
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      piStack_20 = piVar7;
      func_0x00ade4a0(&piStack_20);
      func_0x00ade380(&uStack_2c);
      pcVar1 = *(code **)(*piVar5 + 0x58);
      _guard_check_icall(1);
      uVar8 = (*pcVar1)();
      func_0x00ade720(uVar8);
      break;
    default:
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      iStack_8 = 3;
      piVar7 = (int *)func_0x00b38400(param_3[0x2f],&uStack_2c);
      func_0x00ade380(&uStack_2c);
      pcVar1 = *(code **)(*param_3 + 100);
      pcVar2 = *(code **)(*piVar7 + 0x58);
      _guard_check_icall();
      uVar8 = (*pcVar2)();
      _guard_check_icall(param_3[0x2f],uVar8);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = uStack_10;
  return 0;
}



undefined4 __thiscall FUN_00b38ee0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64a94;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x58) != '\0') {
LAB_00b3910a:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if (*(short *)(param_3 + 0xb8) == 8) {
    piVar1 = *(int **)(param_3 + 0xbc);
    pcVar2 = *(code **)(*piVar1 + 0x7c);
    _guard_check_icall(uVar5);
    piVar6 = (int *)(*pcVar2)();
    if (((((char)piVar6[0x1f] == '\x01') && (*(char *)((int)piVar6 + 0x7d) == '\x01')) &&
        (piVar6[0x24] == 0)) && ((piVar6[0x21] == 0 && ((*piVar6 == 3 || (*piVar6 == 4)))))) {
      func_0x00ad78b0();
      iVar7 = func_0x00ad7620(200);
      uStack_8 = 0;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = func_0x00ae1270(0xb,piVar1,0);
      }
      iVar8 = piVar1[2];
      iVar3 = piVar1[3];
      iVar4 = piVar1[4];
      uStack_8 = 0xffffffff;
      *(int *)(iVar7 + 4) = piVar1[1];
      *(int *)(iVar7 + 8) = iVar8;
      *(int *)(iVar7 + 0xc) = iVar3;
      *(int *)(iVar7 + 0x10) = iVar4;
      func_0x00ad78b0();
      iVar8 = func_0x00ad7620(8);
      uStack_8 = 1;
      if (iVar8 == 0) {
        puStack_14 = (undefined4 *)0x0;
      }
      else {
        puStack_14 = (undefined4 *)FUN_0046f300();
      }
      uStack_8 = 0xffffffff;
      pcVar2 = *(code **)(*piVar1 + 0x7c);
      _guard_check_icall();
      piVar6 = (int *)(*pcVar2)();
      uVar10 = 3;
      iVar8 = *piVar6;
      *puStack_14 = 1;
      if (iVar8 != 3) {
        uVar10 = 4;
      }
      puStack_14[1] = uVar10;
      func_0x00ad78b0();
      iVar8 = func_0x00ad7620(0xa0);
      uStack_8 = 2;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        pcVar2 = *(code **)(*piVar1 + 0x7c);
        _guard_check_icall();
        uVar10 = (*pcVar2)();
        iVar8 = func_0x00ad8850(uVar10);
      }
      uStack_8 = 0xffffffff;
      *(undefined4 *)(iVar8 + 8) = 2;
      func_0x00ad78b0();
      puVar9 = (undefined4 *)func_0x00ad7620(0xbc);
      uStack_8 = 3;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        func_0x00ae0980(iVar8);
        *puVar9 = sh::TIntermConstantUnion::vftable;
        puVar9[0x2e] = puStack_14;
      }
      iVar8 = piVar1[2];
      iVar3 = piVar1[3];
      iVar4 = piVar1[4];
      uStack_8 = 0xffffffff;
      puVar9[1] = piVar1[1];
      puVar9[2] = iVar8;
      puVar9[3] = iVar3;
      puVar9[4] = iVar4;
      func_0x00ad78b0();
      iVar8 = func_0x00ad7620(0xc4);
      uStack_8 = 5;
      if (iVar8 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = func_0x00ae02d0(0x11,iVar7,puVar9);
      }
      iVar8 = piVar1[2];
      iVar3 = piVar1[3];
      iVar4 = piVar1[4];
      uStack_8 = 0xffffffff;
      *(int *)(iVar7 + 4) = piVar1[1];
      *(int *)(iVar7 + 8) = iVar8;
      *(int *)(iVar7 + 0xc) = iVar3;
      *(int *)(iVar7 + 0x10) = iVar4;
      func_0x00ade720(iVar7,1);
      *(undefined1 *)(param_1 + 0x58) = 1;
      goto LAB_00b3910a;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



uint __thiscall FUN_00b393b0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f616ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar4 < 2) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar4 * 4);
  }
  pcVar1 = *(code **)(*piVar6 + 0x1c);
  _guard_check_icall(uVar3);
  uStack_20 = (*pcVar1)();
  piVar6 = param_3;
  if (uStack_20 != 0) {
    pcVar1 = *(code **)(*param_3 + 0x7c);
    uStack_14 = uStack_20;
    _guard_check_icall(uVar3);
    uStack_20 = (*pcVar1)();
    if (*(int *)(uStack_20 + 0x84) != 0) {
      uStack_20 = func_0x00aea8d0();
      if ((char)uStack_20 != '\0') {
        uStack_20 = 0;
        iStack_1c = 0;
        iStack_18 = 0;
        uStack_8 = 0;
        pcVar1 = *(code **)(piVar6[0x2f] + 8);
        _guard_check_icall(&uStack_20);
        uVar5 = (*pcVar1)();
        func_0x00b391c0(uVar5);
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 == *(int **)(param_1 + 0x1c)) {
          uStack_20 = func_0x00b10da0(piVar2,&uStack_14,&param_3,&uStack_20);
        }
        else {
          *piVar2 = uStack_14 + 0x14;
          piVar2[1] = (int)piVar6;
          piVar2[2] = uStack_20;
          piVar2[3] = iStack_1c;
          piVar2[4] = iStack_18;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_20 & 0xffffff00;
}



uint FUN_00b39570(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  int *piStack_20;
  undefined4 *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64ad8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar9 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall(uVar9);
  iVar10 = (*pcVar1)();
  pcVar1 = *(code **)(**(int **)(*(int *)(iVar10 + 4) + -4) + 0x30);
  _guard_check_icall();
  uStack_14 = (*pcVar1)();
  uVar11 = uStack_14;
  if ((uStack_14 != 0) && (*(short *)(uStack_14 + 0xb8) == 0x2f)) {
    piVar13 = *(int **)(uStack_14 + 0xc0);
    pcVar1 = *(code **)(*piVar13 + 0x7c);
    piStack_20 = piVar13;
    _guard_check_icall(uVar9);
    uVar11 = (*pcVar1)();
    if (*(int *)(uVar11 + 0x84) != 0) {
      pcVar1 = *(code **)(*piVar13 + 0x6c);
      _guard_check_icall();
      uVar11 = (*pcVar1)();
      if ((char)uVar11 == '\0') {
        uStack_14 = *(int *)(uStack_14 + 0xbc);
        uVar11 = *(int *)(uStack_18 + 0x40) - *(int *)(uStack_18 + 0x3c) >> 2;
        if (uVar11 < 2) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = *(int **)(*(int *)(uStack_18 + 0x3c) + -8 + uVar11 * 4);
        }
        pcVar1 = *(code **)(*piVar13 + 0x1c);
        _guard_check_icall();
        iVar10 = (*pcVar1)();
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        iStack_8 = 0;
        iStack_24 = iVar10;
        func_0x00ad78b0();
        puStack_1c = (undefined4 *)func_0x00ad7620(0x24);
        if (puStack_1c == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puStack_1c[3] = 0;
          puStack_1c[1] = 0;
          puStack_1c[4] = 0;
          puStack_1c[2] = 0;
          puStack_1c[5] = sh::TIntermAggregateBase::vftable;
          *puStack_1c = sh::TIntermDeclaration::vftable;
          puStack_1c[5] = sh::TIntermDeclaration::vftable;
          puStack_1c[6] = 0;
          puStack_1c[7] = 0;
          puStack_1c[8] = 0;
          puVar12 = puStack_1c;
        }
        func_0x00ae5da0(uStack_14);
        uVar3 = *(undefined4 *)(uStack_14 + 8);
        uVar4 = *(undefined4 *)(uStack_14 + 0xc);
        uVar5 = *(undefined4 *)(uStack_14 + 0x10);
        puVar12[1] = *(undefined4 *)(uStack_14 + 4);
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        puVar12[4] = uVar5;
        puStack_1c = puVar12;
        func_0x00ade4a0(&puStack_1c);
        func_0x00ad78b0();
        puStack_1c = (undefined4 *)func_0x00ad7620(0xc4);
        iStack_8._0_1_ = 1;
        if (puStack_1c == (undefined4 *)0x0) {
          piStack_20 = (int *)0x0;
        }
        else {
          piStack_20 = (int *)func_0x00ae02d0(0x2e,uStack_14,piStack_20);
        }
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        iVar6 = *(int *)(uStack_14 + 8);
        iVar7 = *(int *)(uStack_14 + 0xc);
        iVar8 = *(int *)(uStack_14 + 0x10);
        piStack_20[1] = *(int *)(uStack_14 + 4);
        piStack_20[2] = iVar6;
        piStack_20[3] = iVar7;
        piStack_20[4] = iVar8;
        func_0x00ade4a0(&piStack_20);
        puVar2 = *(uint **)(uStack_18 + 0x18);
        if (puVar2 == *(uint **)(uStack_18 + 0x1c)) {
          uVar11 = func_0x00b13350(puVar2,&iStack_24,&param_2,&uStack_30);
        }
        else {
          puVar2[1] = param_2;
          *puVar2 = -(uint)(iVar10 != 0) & iVar10 + 0x14U;
          puVar2[2] = uStack_30;
          puVar2[3] = uStack_2c;
          puVar2[4] = uStack_28;
          *(int *)(uStack_18 + 0x18) = *(int *)(uStack_18 + 0x18) + 0x14;
          uVar11 = uStack_18;
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar11 & 0xffffff00;
}



undefined4 __thiscall FUN_00b39870(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    return 0;
  }
  uVar2 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar2 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar2 * 4);
  }
  cVar1 = func_0x00b77d90(param_3,uVar3);
  if (cVar1 == '\0') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar3 = func_0x00aeba30();
  uVar3 = func_0x00b76e80(*(undefined4 *)(param_1 + 0x20),uVar3,0,&stack0xfffffff4);
  func_0x00ade110(unaff_ESI);
  uVar3 = func_0x00b76660(uVar3,1);
  func_0x00ade720(uVar3);
  return 0;
}



undefined4 __thiscall FUN_00b39900(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *unaff_FS_OFFSET;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64b58;
  uStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (uint)&uStack_10;
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar3 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar3 * 4);
    }
    cVar1 = func_0x00b77fb0(param_3,uVar4,uVar2);
    if (cVar1 == '\0') {
      *unaff_FS_OFFSET = uStack_10;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    iStack_8 = 0;
    func_0x00ad78b0();
    iStack_14 = func_0x00ad7620(0xc4);
    iStack_8._0_1_ = 1;
    if (iStack_14 == 0) {
      iStack_14 = 0;
    }
    else {
      iStack_14 = func_0x00ae02d0(*(undefined2 *)(param_3 + 0xb8),*(undefined4 *)(param_3 + 0xbc),
                                  *(undefined4 *)(param_3 + 0xc0));
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x00ade4a0(&iStack_14);
    uVar4 = func_0x00b76e80(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_3 + 0xbc),0,
                            &iStack_18);
    iStack_14 = iStack_18;
    func_0x00ade4a0(&iStack_14);
    func_0x00ade380(&uStack_24);
    uVar4 = func_0x00b76660(uVar4,1);
    func_0x00ade720(uVar4);
  }
  *unaff_FS_OFFSET = uStack_10;
  return 0;
}



undefined4 __thiscall FUN_00b39b00(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *unaff_FS_OFFSET;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  uint uStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64bb6;
  uStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (uint)&uStack_10;
  if (*(char *)(param_1 + 0x58) != '\0') {
LAB_00b39ccb:
    *unaff_FS_OFFSET = uStack_10;
    return 0;
  }
  if (param_2 == 0) {
    uVar4 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar4 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar4 * 4);
    }
    iStack_14 = param_1;
    cVar2 = func_0x00b77fb0(param_3,uVar5,uVar3);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x58) = 1;
      if (*(ushort *)(param_3 + 0xb8) == 0x22) {
        puStack_28 = (undefined4 *)0x0;
        puStack_24 = (undefined4 *)0x0;
        puStack_20 = (undefined4 *)0x0;
        iStack_8 = 0;
        puStack_18 = (undefined4 *)func_0x00b766d0(*(undefined4 *)(param_1 + 0x20),&DAT_012b3a68);
        puStack_1c = (undefined4 *)func_0x00b76550(puStack_18,*(undefined4 *)(param_3 + 0xbc));
        func_0x00ade4a0(&puStack_1c);
        func_0x00ad78b0();
        puStack_1c = (undefined4 *)func_0x00ad7620(0x28);
        if (puStack_1c == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puStack_1c[3] = 0;
          puStack_1c[1] = 0;
          puStack_1c[4] = 0;
          puStack_1c[2] = 0;
          puStack_1c[5] = sh::TIntermAggregateBase::vftable;
          *puStack_1c = sh::TIntermBlock::vftable;
          puStack_1c[5] = sh::TIntermBlock::vftable;
          puStack_1c[6] = 0;
          puStack_1c[7] = 0;
          puStack_1c[8] = 0;
          *(undefined1 *)(puStack_1c + 9) = 0;
          puVar6 = puStack_1c;
        }
        pcVar1 = *(code **)(puVar6[5] + 8);
        _guard_check_icall();
        (*pcVar1)();
        puVar7 = puStack_18;
        puStack_1c = (undefined4 *)func_0x00b763d0(puStack_18,*(undefined4 *)(param_3 + 0xc0));
        func_0x00ade4a0(&puStack_1c);
        func_0x00ad78b0();
        puStack_1c = (undefined4 *)func_0x00ad7620(200);
        iStack_8._0_1_ = 1;
        if (puStack_1c == (undefined4 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = func_0x00b76660(puVar7);
          uVar5 = func_0x00ae1270(10,uVar5,0);
        }
        iStack_8._0_1_ = 0;
        func_0x00ad78b0();
        puStack_1c = (undefined4 *)func_0x00ad7620(0x20);
        iStack_8._0_1_ = 2;
        if (puStack_1c == (undefined4 *)0x0) {
          puStack_1c = (undefined4 *)0x0;
          iStack_8 = (uint)iStack_8._1_3_ << 8;
        }
        else {
          puStack_1c = (undefined4 *)func_0x00ae0af0(uVar5,puVar6,0);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
        }
      }
      else {
        puStack_28 = (undefined4 *)(*(ushort *)(param_3 + 0xb8) - 0x24);
        if (puStack_28 != (undefined4 *)0x0) goto LAB_00b39e3b;
        iStack_8 = 3;
        puStack_24 = puStack_28;
        puStack_20 = puStack_28;
        puStack_1c = (undefined4 *)func_0x00b766d0(*(undefined4 *)(param_1 + 0x20),&DAT_012b3a68);
        puStack_18 = (undefined4 *)func_0x00b76550(puStack_1c,*(undefined4 *)(param_3 + 0xbc));
        func_0x00ade4a0(&puStack_18);
        func_0x00ad78b0();
        puStack_18 = (undefined4 *)func_0x00ad7620(0x28);
        if (puStack_18 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puStack_18[3] = 0;
          puStack_18[1] = 0;
          puStack_18[4] = 0;
          puStack_18[2] = 0;
          puStack_18[5] = sh::TIntermAggregateBase::vftable;
          *puStack_18 = sh::TIntermBlock::vftable;
          puStack_18[5] = sh::TIntermBlock::vftable;
          puStack_18[6] = 0;
          puStack_18[7] = 0;
          puStack_18[8] = 0;
          *(undefined1 *)(puStack_18 + 9) = 0;
          puVar6 = puStack_18;
        }
        pcVar1 = *(code **)(puVar6[5] + 8);
        _guard_check_icall();
        (*pcVar1)();
        puVar7 = puStack_1c;
        puStack_1c = (undefined4 *)func_0x00b763d0(puStack_1c,*(undefined4 *)(param_3 + 0xc0));
        func_0x00ade4a0(&puStack_1c);
        func_0x00ad78b0();
        puStack_1c = (undefined4 *)func_0x00ad7620(0x20);
        iStack_8._0_1_ = 4;
        if (puStack_1c == (undefined4 *)0x0) {
          puStack_1c = (undefined4 *)0x0;
        }
        else {
          uVar5 = func_0x00b76660(puVar7);
          puStack_1c = (undefined4 *)func_0x00ae0af0(uVar5,puVar6,0);
        }
        iStack_8 = CONCAT31(iStack_8._1_3_,3);
      }
      func_0x00ade4a0(&puStack_1c);
      func_0x00ade380(&puStack_28);
      uVar5 = func_0x00b76660(puVar7,1);
      func_0x00ade720(uVar5);
      goto LAB_00b39ccb;
    }
  }
LAB_00b39e3b:
  *unaff_FS_OFFSET = uStack_10;
  return 1;
}



undefined4 __thiscall FUN_00b39e60(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *unaff_FS_OFFSET;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64c03;
  uStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (uint)&uStack_10;
  if (*(char *)(param_1 + 0x58) != '\0') {
LAB_00b3a0fa:
    *unaff_FS_OFFSET = uStack_10;
    return 0;
  }
  if (param_2 == 0) {
    iStack_28 = param_1;
    cVar3 = func_0x00b78170(param_3,uVar4);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x58) = 1;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      iStack_8 = 0;
      puStack_14 = (undefined4 *)0x0;
      func_0x00ad78b0();
      iStack_20 = func_0x00ad7620(0xa0);
      iStack_8._0_1_ = 1;
      if (iStack_20 == 0) {
        uVar5 = 0;
      }
      else {
        pcVar1 = *(code **)(*param_3 + 0x7c);
        _guard_check_icall();
        uVar5 = (*pcVar1)();
        uVar5 = func_0x00ad8850(uVar5);
      }
      iStack_8._0_1_ = 0;
      uVar5 = func_0x00b76ff0(*(undefined4 *)(param_1 + 0x20),uVar5,0,&puStack_14);
      puStack_1c = puStack_14;
      iStack_20 = uVar5;
      func_0x00ade4a0(&puStack_1c);
      func_0x00ad78b0();
      puStack_1c = (undefined4 *)func_0x00ad7620(0x28);
      if (puStack_1c == (undefined4 *)0x0) {
        puStack_1c = (undefined4 *)0x0;
      }
      else {
        puStack_1c[3] = 0;
        puStack_1c[1] = 0;
        puStack_1c[4] = 0;
        puStack_1c[2] = 0;
        puStack_1c[5] = sh::TIntermAggregateBase::vftable;
        *puStack_1c = sh::TIntermBlock::vftable;
        puStack_1c[5] = sh::TIntermBlock::vftable;
        puStack_1c[6] = 0;
        puStack_1c[7] = 0;
        puStack_1c[8] = 0;
        *(undefined1 *)(puStack_1c + 9) = 0;
      }
      puVar2 = puStack_1c;
      puVar6 = (undefined4 *)func_0x00b763d0(uVar5,param_3[0x2f]);
      pcVar1 = *(code **)(puVar2[5] + 8);
      _guard_check_icall();
      (*pcVar1)();
      puStack_18 = puVar6;
      func_0x00ade4a0(&puStack_18);
      func_0x00ad78b0();
      puStack_18 = (undefined4 *)func_0x00ad7620(0x28);
      if (puStack_18 == (undefined4 *)0x0) {
        puStack_18 = (undefined4 *)0x0;
      }
      else {
        puStack_18[3] = 0;
        puStack_18[1] = 0;
        puStack_18[4] = 0;
        puStack_18[2] = 0;
        puStack_18[5] = sh::TIntermAggregateBase::vftable;
        *puStack_18 = sh::TIntermBlock::vftable;
        puStack_18[5] = sh::TIntermBlock::vftable;
        puStack_18[6] = 0;
        puStack_18[7] = 0;
        puStack_18[8] = 0;
        *(undefined1 *)(puStack_18 + 9) = 0;
      }
      puVar2 = puStack_18;
      iVar7 = func_0x00b763d0(iStack_20,param_3[0x30]);
      pcVar1 = *(code **)(puVar2[5] + 8);
      _guard_check_icall();
      (*pcVar1)();
      iStack_24 = iVar7;
      func_0x00ade4a0(&iStack_24);
      func_0x00ad78b0();
      iStack_24 = func_0x00ad7620(0x20);
      iStack_8._0_1_ = 2;
      if (iStack_24 == 0) {
        iStack_24 = 0;
      }
      else {
        pcVar1 = *(code **)(*(int *)param_3[0x2e] + 0xc);
        _guard_check_icall();
        uVar5 = (*pcVar1)();
        iStack_24 = func_0x00ae0af0(uVar5,puStack_1c,puStack_18);
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x00ade4a0(&iStack_24);
      func_0x00ade380(&uStack_34);
      uVar5 = func_0x00b76660(iStack_20);
      func_0x00ade720(uVar5,1);
      goto LAB_00b3a0fa;
    }
  }
  *unaff_FS_OFFSET = uStack_10;
  return 1;
}



undefined4 FUN_00b3a1b0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  uint *puStack_38;
  int iStack_34;
  uint *puStack_30;
  int *piStack_2c;
  uint uStack_28;
  uint *puStack_24;
  code *pcStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f64c40;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_40 = (uint *)0x0;
  puStack_3c = (uint *)0x0;
  puStack_38 = (uint *)0x0;
  iStack_8 = 0;
  pcVar8 = *(code **)(*(int *)(*(int *)(param_2 + 0x18) + 0x14) + 8);
  _guard_check_icall(uVar2);
  puVar3 = (undefined4 *)(*pcVar8)();
  puVar1 = (undefined4 *)puVar3[1];
  for (puVar3 = (undefined4 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    puStack_24 = (uint *)*puVar3;
    pcStack_20 = *(code **)(*puStack_24 + 0x28);
    _guard_check_icall(uVar2);
    puStack_24 = (uint *)(*pcStack_20)();
    if (puStack_24 != (uint *)0x0) {
      if (puStack_3c == puStack_38) {
        func_0x008c0640(puStack_3c,&puStack_24);
      }
      else {
        *puStack_3c = (uint)puStack_24;
        puStack_3c = puStack_3c + 1;
      }
    }
  }
  if (puStack_40 != puStack_3c) {
    func_0x00ad78b0();
    pcStack_20 = (code *)func_0x00ad7620(0x28);
    if (pcStack_20 == (code *)0x0) {
      pcStack_20 = (code *)0x0;
    }
    else {
      *(undefined4 *)(pcStack_20 + 0xc) = 0;
      *(undefined4 *)(pcStack_20 + 4) = 0;
      *(undefined4 *)(pcStack_20 + 0x10) = 0;
      *(undefined4 *)(pcStack_20 + 8) = 0;
      *(undefined ***)(pcStack_20 + 0x14) = sh::TIntermAggregateBase::vftable;
      *(undefined ***)pcStack_20 = sh::TIntermBlock::vftable;
      *(undefined ***)(pcStack_20 + 0x14) = sh::TIntermBlock::vftable;
      *(undefined4 *)(pcStack_20 + 0x18) = 0;
      *(undefined4 *)(pcStack_20 + 0x1c) = 0;
      *(undefined4 *)(pcStack_20 + 0x20) = 0;
      pcStack_20[0x24] = (code)0x0;
    }
    puStack_24 = puStack_40;
    puStack_30 = puStack_3c;
    pcVar8 = pcStack_20;
    if (puStack_40 != puStack_3c) {
      do {
        uVar2 = *puStack_24;
        uStack_28 = uVar2;
        uStack_14 = uVar2;
        func_0x00ad78b0();
        piStack_2c = (int *)func_0x00ad7620(0x24);
        if (piStack_2c == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piStack_2c[3] = 0;
          piStack_2c[1] = 0;
          piStack_2c[4] = 0;
          piStack_2c[2] = 0;
          piStack_2c[5] = (int)sh::TIntermAggregateBase::vftable;
          *piStack_2c = (int)sh::TIntermDeclaration::vftable;
          piStack_2c[5] = (int)sh::TIntermDeclaration::vftable;
          piStack_2c[6] = 0;
          piStack_2c[7] = 0;
          piStack_2c[8] = 0;
          piVar7 = piStack_2c;
        }
        pcVar8 = *(code **)(*(int *)(uVar2 + 0x14) + 8);
        _guard_check_icall();
        piVar4 = (int *)(*pcVar8)();
        if (piVar4[1] - *piVar4 >> 2 == 0) goto LAB_00b3a597;
        piStack_1c = *(int **)*piVar4;
        pcVar8 = *(code **)(*piStack_1c + 0x48);
        _guard_check_icall();
        piStack_1c = (int *)(*pcVar8)();
        if (piStack_1c == (int *)0x0) {
          pcVar8 = *(code **)(*(int *)(uStack_14 + 0x14) + 8);
          _guard_check_icall();
          piVar4 = (int *)(*pcVar8)();
          if (piVar4[1] - *piVar4 >> 2 == 0) goto LAB_00b3a597;
          piStack_2c = *(int **)*piVar4;
          pcVar8 = *(code **)(*piStack_2c + 0x30);
          _guard_check_icall();
          piVar4 = (int *)(*pcVar8)();
          piStack_2c = piVar4;
          func_0x00ad78b0();
          iStack_34 = func_0x00ad7620(0xc4);
          iStack_8._0_1_ = 8;
          if (iStack_34 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = func_0x00ae02d0(0x2e,piVar4[0x2f],piVar4[0x30]);
          }
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          func_0x00ade790(*(undefined4 *)(param_2 + 0x18),uStack_14,uVar5,1);
          piStack_2c = (int *)piVar4[0x2f];
          pcVar8 = *(code **)(*piStack_2c + 0x58);
          _guard_check_icall();
          uVar5 = (*pcVar8)();
          func_0x00ae5da0(uVar5);
        }
        else {
          iStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          iStack_8._0_1_ = 3;
          puVar6 = *(uint **)(iStack_18 + 0x18);
          piStack_2c = *(int **)(param_2 + 0x18);
          if (puVar6 == *(uint **)(iStack_18 + 0x1c)) {
            func_0x00b13350(puVar6,&piStack_2c,&uStack_28,&iStack_4c);
          }
          else {
            uStack_44 = 0;
            uStack_48 = 0;
            iStack_4c = 0;
            *puVar6 = -(uint)(piStack_2c != (int *)0x0) & (uint)(piStack_2c + 5);
            puVar6[1] = uStack_14;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            *(int *)(iStack_18 + 0x18) = *(int *)(iStack_18 + 0x18) + 0x14;
          }
          pcVar8 = *(code **)(*piStack_1c + 0x58);
          _guard_check_icall();
          uVar5 = (*pcVar8)();
          func_0x00ae5da0(uVar5);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          if (iStack_4c != 0) {
            iStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
          }
        }
        pcVar8 = pcStack_20;
        func_0x00ae5dc0(piVar7);
        puStack_24 = puStack_24 + 1;
      } while (puStack_24 != puStack_30);
    }
    func_0x00ae5dc0(param_2);
    func_0x00ade720(pcVar8,0);
  }
  if (puStack_40 != (uint *)0x0) {
    uVar2 = (int)puStack_38 - (int)puStack_40 & 0xfffffffc;
    puVar6 = puStack_40;
    if (0xfff < uVar2) {
      puVar6 = (uint *)puStack_40[-1];
      uVar2 = uVar2 + 0x23;
      if (0x1f < (uint)((int)puStack_40 + (-4 - (int)puVar6))) {
        func_0x008aaf66();
LAB_00b3a597:
        func_0x0046e490();
        pcVar8 = (code *)swi(3);
        uVar5 = (*pcVar8)();
        return uVar5;
      }
    }
    func_0x008ab812(puVar6,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 * __thiscall FUN_00b3a680(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::BlockLayoutEncoder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



void __thiscall
FUN_00b3a760(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    param_2 = func_0x0093eb10(param_2);
  }
  if ((*param_3 != param_3[1]) && (iVar2 = func_0x0093ddd0(param_3), iVar2 != 0)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (iVar2 + -1) * param_5;
  }
  cVar1 = func_0x0093e360(param_2);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 8) != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
      return;
    }
    iVar2 = func_0x0093ee80(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar2;
    return;
  }
  iVar2 = func_0x0093e6f0(param_2,param_4);
  iVar3 = func_0x0093e6d0(param_2,param_4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar2 * 4 + -4 + iVar3;
  return;
}



void __fastcall FUN_00b3a800(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 + 4U < 4) || (uVar4 = iVar5 + 3, iVar5 == -4)) {
    uVar4 = 0;
    bVar2 = false;
    uVar3 = 0;
    bVar1 = false;
  }
  else {
    bVar2 = true;
    uVar3 = uVar4 % 4;
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = 0xffffffff;
  }
  if ((bVar2) && (uVar3 <= uVar4)) {
    iVar5 = uVar4 - uVar3;
    bVar1 = true;
  }
  else {
    iVar5 = 0;
    bVar1 = false;
  }
  if (bVar1) {
    *(int *)(param_1 + 4) = iVar5;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}



void __thiscall
FUN_00b3a810(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5,
            undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_4;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    param_2 = func_0x0093eb10(param_2);
  }
  iVar3 = 0;
  uStack_4 = 0;
  if (((*(int *)(param_1 + 8) != 0) || (cVar1 = func_0x0093e360(param_2), cVar1 != '\0')) ||
     (*param_3 != param_3[1])) {
    func_0x00a19190(4);
  }
  cVar1 = func_0x0093e360(param_2);
  if (cVar1 == '\0') {
    if (*param_3 == param_3[1]) {
      if ((*(int *)(param_1 + 8) == 0) &&
         (iVar2 = func_0x0093ee80(param_2), 4 < (*(uint *)(param_1 + 4) & 3) + iVar2)) {
        func_0x00a19190(4);
      }
    }
    else {
      iVar3 = 4;
    }
  }
  else {
    uStack_4 = 4;
    if (*param_3 != param_3[1]) {
      iVar3 = func_0x0093e6f0(param_2,param_4);
      iVar3 = iVar3 << 2;
    }
  }
  *param_6 = uStack_4;
  *param_5 = iVar3;
  return;
}



void __fastcall FUN_00b3b740(int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  char *pcStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  int aiStack_20 [2];
  char *pcStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64e11;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de94c) &&
     (func_0x008ab40d(&DAT_013de94c,uVar3), DAT_013de94c == -1)) {
    uStack_8 = 0;
    uVar4 = func_0x0093d430("gpu.angle");
    DAT_013de948 = (char *)func_0x009b9170(uVar4);
    func_0x008ab3bc(&DAT_013de94c);
  }
  pcVar6 = DAT_013de948;
  puStack_3c = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de948 != '\0') {
    uVar4 = func_0x0093d430();
    aiStack_20[0] = param_1 + 0x28;
    pcStack_18 = "source";
    if (0xf < *(uint *)(param_1 + 0x3c)) {
      aiStack_20[0] = *(int *)aiStack_20[0];
    }
    uStack_11 = 7;
    func_0x009b90e0(uVar4,0x42,pcVar6,"TranslateTask::run",0,0,1,&pcStack_18,&uStack_11,aiStack_20,0
                   );
    pcVar6 = DAT_013de948;
    uStack_38 = func_0x0093d430();
    puStack_3c = &uStack_38;
    pcStack_34 = pcVar6;
    pcStack_30 = "TranslateTask::run";
  }
  pcVar6 = (char *)(param_1 + 0x28);
  iStack_2c = 0;
  puStack_28 = (undefined4 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (*(int *)(param_1 + 0x50) != 0) {
    pcStack_18 = (char *)(param_1 + 0x40);
    if (0xf < *(uint *)(param_1 + 0x54)) {
      pcStack_18 = *(char **)pcStack_18;
    }
    func_0x008c0640(0,&pcStack_18);
  }
  if (0xf < *(uint *)(param_1 + 0x3c)) {
    pcVar6 = *(char **)pcVar6;
  }
  pcStack_18 = pcVar6;
  if (puStack_28 == puStack_24) {
    func_0x008c0640(puStack_28,&pcStack_18);
  }
  else {
    *puStack_28 = pcVar6;
    puStack_28 = puStack_28 + 1;
  }
  uVar2 = func_0x009c5f50(*(undefined4 *)(param_1 + 4),iStack_2c,(int)puStack_28 - iStack_2c >> 2,
                          param_1 + 8);
  *(undefined1 *)(param_1 + 0x58) = uVar2;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (iStack_2c != 0) {
    uVar3 = ((int)puStack_24 - iStack_2c >> 2) * 4;
    iVar5 = iStack_2c;
    if (0xfff < uVar3) {
      iVar5 = *(int *)(iStack_2c + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iStack_2c - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar3);
    iStack_2c = 0;
    puStack_28 = (undefined4 *)0x0;
    puStack_24 = (undefined4 *)0x0;
  }
  uStack_8 = 3;
  if ((puStack_3c != (undefined4 *)0x0) && (*(char *)puStack_3c[1] != '\0')) {
    func_0x009b90e0(*puStack_3c,0x45,(char *)puStack_3c[1],puStack_3c[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00b3b990(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x70);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b3b9c0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  return param_1;
}



undefined4 * __fastcall FUN_00b3b9f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = param_1 + 0x1b;
  *param_1 = rx::ShaderD3D::vftable;
  func_0x007d9ca0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x28);
  func_0x00775520(param_1 + 0x17,*(undefined4 *)(param_1[0x17] + 4));
  func_0x008ab812(param_1[0x17],0x2c);
  func_0x007d9ca0(param_1 + 0x15,*(undefined4 *)(param_1[0x15] + 4));
  func_0x008ab812(param_1[0x15],0x28);
  func_0x009246b0(param_1 + 0x13,*(undefined4 *)(param_1[0x13] + 4));
  func_0x008ab812(param_1[0x13],0x2c);
  uVar8 = *(uint *)(param_1[0x11] + 4);
  func_0x00775520(param_1 + 0x11);
  func_0x008ab812(param_1[0x11],0x2c);
  func_0x00775520(param_1 + 0xf,*(undefined4 *)(param_1[0xf] + 4));
  func_0x008ab812(param_1[0xf],0x2c);
  uVar2 = param_1[0xe];
  if (0xf < uVar2) {
    iVar3 = param_1[9];
    uVar7 = uVar2 + 1;
    iVar5 = iVar3;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar7 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        puVar6 = (undefined4 *)(*pcVar4)();
        return puVar6;
      }
    }
    func_0x008ab812(iVar5,uVar7);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = rx::ShaderImpl::vftable;
  if ((uVar8 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b3bb10(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ShaderImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



int __thiscall FUN_00b3bb40(int param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  if (0xf < uVar1) {
    iVar4 = *(int *)(param_1 + 0x40);
    uVar5 = uVar1 + 1;
    iVar3 = iVar4;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar4 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar4 - iVar3) - 4U) goto LAB_00b3bbdf;
    }
    func_0x008ab812(iVar3,uVar5);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xf;
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (0xf < uVar1) {
    iVar4 = *(int *)(param_1 + 0x28);
    uVar5 = uVar1 + 1;
    iVar3 = iVar4;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar4 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar4 - iVar3) - 4U) {
LAB_00b3bbdf:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    func_0x008ab812(iVar3,uVar5);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x60);
  }
  return param_1;
}



int __thiscall FUN_00b3bbf0(int param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x54);
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
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(piVar2 != (int *)(param_1 + 0x28));
    (*pcVar3)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  func_0x009c6fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



void __thiscall FUN_00b3bc80(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __fastcall FUN_00b3bca0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  piVar3 = *(int **)(param_1 + 100);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x38));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = rx::WaitableCompileEvent::vftable;
  piVar3 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      iVar5 = piVar3[2] + -1;
      piVar3[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (0xf < uVar2) {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = uVar2 + 1;
    iVar6 = iVar5;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar7 = uVar2 + 0x24;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
        (*pcVar4)();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = angle::WaitableEvent::vftable;
  return;
}



void FUN_00b3bd20(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00b3ac60(*param_1,*param_2);
  return;
}



TypeDescriptor * FUN_00b3bd40(void)

{
  return &<>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00b3bd50(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,uint *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  int *unaff_FS_OFFSET;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined1 auStack_a8 [4];
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_94;
  int *piStack_90;
  undefined4 *puStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  undefined8 *puStack_80;
  code *pcStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  uint uStack_58;
  undefined **ppuStack_54;
  undefined4 *puStack_50;
  undefined ***pppuStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f64e97;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_8c = param_2;
  puStack_80 = (undefined8 *)param_2;
  piStack_78 = param_3;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_88 = param_4;
  uStack_1c = 0;
  uStack_18 = 0xf;
  pppuStack_2c = (undefined4 ****)0x0;
  puVar4 = param_1 + 9;
  param_1[8] = 0x8b45;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  param_1[0xd] = 0;
  iStack_8 = 0;
  if (0xf < (uint)param_1[0xe]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  piStack_84 = param_1;
  puStack_80 = (undefined8 *)func_0x009dbe40(uStack_14);
  piStack_74 = (int *)func_0x009dbef0();
  pcStack_7c = (code *)(param_1[1] + 0x44);
  cVar3 = FUN_00466fd0(piStack_78);
  if (cVar3 != '\0') {
    iVar5 = func_0x009dafe0(auStack_70);
    ppppuVar6 = (undefined4 ****)(iVar5 + 4);
    iStack_8._0_1_ = 1;
    if (&pppuStack_2c != ppppuVar6) {
      if (0xf < *(uint *)(iVar5 + 0x18)) {
        ppppuVar6 = (undefined4 ****)*ppppuVar6;
      }
      func_0x0046a660(ppppuVar6,*(undefined4 *)(iVar5 + 0x14));
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_58) {
      uVar8 = uStack_58 + 1;
      iVar5 = iStack_6c;
      if (0xfff < uVar8) {
        iVar5 = *(int *)(iStack_6c + -4);
        uVar8 = uStack_58 + 0x24;
        if (0x1f < (iStack_6c - iVar5) - 4U) {
          func_0x008aaf66();
          goto LAB_00b3c2d7;
        }
      }
      func_0x008ab812(iVar5,uVar8);
    }
    pcVar9 = pcStack_7c;
    if (0xf < *(uint *)((int)pcStack_7c + 0x14)) {
      pcVar9 = *(code **)pcStack_7c;
    }
    ppppuVar6 = &pppuStack_2c;
    if (0xf < uStack_18) {
      ppppuVar6 = (undefined4 ****)pppuStack_2c;
    }
    func_0x0093f650(ppppuVar6,pcVar9,*(undefined4 *)((int)pcStack_7c + 0x10));
    *param_5 = *param_5 | 0x44;
    param_5[1] = param_5[1];
  }
  if (*(char *)(puStack_80 + 0x12) != '\0') {
    *param_5 = *param_5 | 0x80000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(puStack_80 + 0x18) != '\0') {
    *param_5 = *param_5 | 0x200000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(puStack_80 + 0x1b) != '\0') {
    *param_5 = *param_5 | 0x400000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(puStack_80 + 0x24) != '\0') {
    *param_5 = *param_5 | 0x1000000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(puStack_80 + 0x27) != '\0') {
    *param_5 = *param_5 | 0x2000000;
    param_5[1] = param_5[1];
  }
  if ((*(char *)(puStack_80 + 0x36) != '\0') && (*(char *)(param_1[1] + 0x18) == '\0')) {
    param_5[1] = param_5[1] | 8;
    *param_5 = *param_5;
  }
  if (*(char *)(puStack_80 + 0x39) != '\0') {
    param_5[1] = param_5[1] | 0x100;
    *param_5 = *param_5;
  }
  if (*(char *)(puStack_80 + 0x3f) != '\0') {
    param_5[1] = param_5[1] | 0x4000;
    *param_5 = *param_5;
  }
  if ((*(char *)((int)piStack_74 + 0x49) != '\0') || (*(char *)((int)piStack_74 + 0x4a) != '\0')) {
    *param_5 = *param_5 | 0x40000000;
    param_5[1] = param_5[1];
  }
  if (*(char *)((int)piStack_74 + 0xc3) != '\0') {
    uVar8 = func_0x009dbf90();
    param_5[5] = uVar8;
    if ((char)piStack_74[0x31] != '\0') {
      param_5[6] = 5;
    }
  }
  func_0x008d1840(&piStack_94);
  iStack_8._0_1_ = 2;
  puStack_80 = (undefined8 *)FUN_005beae0();
  piVar7 = (int *)func_0x008ab47d(0x70);
  iStack_8._0_1_ = 3;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piStack_74 = piVar7 + 4;
    piVar7[0] = 0;
    piVar7[1] = 0;
    piVar7[2] = 0;
    piVar7[1] = 1;
    piVar7[2] = 1;
    *piVar7 = (int)std::_Ref_count_obj2<>::vftable;
    *piStack_74 = (int)rx::TranslateTaskD3D::vftable;
    piVar7[5] = (int)puStack_80;
    piStack_78 = piVar7;
    func_0x009c5ec0(param_5);
    func_0x00469da0(pcStack_7c);
    iStack_8._0_1_ = 4;
    func_0x00469da0(&pppuStack_2c);
    *(undefined1 *)(piVar7 + 0x1a) = 0;
    param_1 = piStack_84;
    piVar7 = piStack_78;
  }
  piVar11 = piVar7 + 4;
  piStack_84 = piStack_94;
  iStack_8._0_1_ = 5;
  pcStack_7c = *(code **)(*piStack_94 + 4);
  piStack_78 = piVar7 + 1;
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piStack_78 = *piStack_78 + 1;
    UNLOCK();
  }
  puVar10 = auStack_a8;
  piVar12 = piVar7;
  piStack_a0 = piVar11;
  piStack_9c = piVar7;
  _guard_check_icall(puVar10,piVar11,piVar7);
  piStack_84 = (int *)(*pcStack_7c)();
  iStack_8._0_1_ = 6;
  pcStack_7c = (code *)func_0x008ab47d(0x68);
  iStack_8 = CONCAT31(iStack_8._1_3_,7);
  if (pcStack_7c == (code *)0x0) {
    pcVar9 = (code *)(undefined8 *)0x0;
  }
  else {
    ppuStack_54 = std::_Func_impl_no_alloc<>::vftable;
    *(undefined8 *)pcStack_7c = 0;
    *(undefined4 *)((int)pcStack_7c + 8) = 0;
    *(undefined4 *)((int)pcStack_7c + 4) = 1;
    *(undefined4 *)((int)pcStack_7c + 8) = 1;
    *(undefined ***)pcStack_7c = std::_Ref_count_obj2<>::vftable;
    puStack_80 = (undefined8 *)((int)pcStack_7c + 0x10);
    pppuStack_30 = &ppuStack_54;
    iStack_8 = CONCAT31(iStack_8._1_3_,8);
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piStack_78 = *piStack_78 + 1;
      UNLOCK();
    }
    uVar1 = *piStack_84;
    uVar2 = piStack_84[1];
    *piStack_84 = 0;
    piStack_84[1] = 0;
    puStack_50 = param_1;
    func_0x00b3aac0(uVar1,uVar2,uStack_88,&ppuStack_54,piVar7 + 4,piVar7);
    pcVar9 = pcStack_7c;
    if (pppuStack_30 != (undefined ***)0x0) {
      pcVar9 = (code *)(*pppuStack_30)[4];
      _guard_check_icall(pppuStack_30 != &ppuStack_54);
      (*pcVar9)();
      pcVar9 = pcStack_7c;
    }
  }
  puStack_8c[1] = 0;
  *puStack_8c = (undefined8 *)((int)pcVar9 + 0x10);
  puStack_8c[1] = pcVar9;
  piStack_74 = piStack_a4;
  if (piStack_a4 != (int *)0x0) {
    LOCK();
    iVar5 = piStack_a4[1] + -1;
    piStack_a4[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar9 = *(code **)*piStack_a4;
      _guard_check_icall(puVar10,piVar11,piVar12);
      (*pcVar9)();
      LOCK();
      iVar5 = piStack_74[2] + -1;
      piStack_74[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar9 = *(code **)(*piStack_74 + 4);
        _guard_check_icall();
        (*pcVar9)();
      }
    }
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    iVar5 = piVar7[1] + -1;
    piVar7[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar9 = *(code **)*piVar7;
      _guard_check_icall();
      (*pcVar9)();
      LOCK();
      iVar5 = piVar7[2] + -1;
      piVar7[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar9 = *(code **)(*piVar7 + 4);
        _guard_check_icall();
        (*pcVar9)();
      }
    }
  }
  piStack_74 = piStack_90;
  if (piStack_90 != (int *)0x0) {
    LOCK();
    iVar5 = piStack_90[1] + -1;
    piStack_90[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar9 = *(code **)*piStack_90;
      _guard_check_icall();
      (*pcVar9)();
      LOCK();
      piVar7 = piStack_74 + 2;
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar9 = *(code **)(*piStack_74 + 4);
        _guard_check_icall();
        (*pcVar9)();
      }
    }
  }
  if (0xf < uStack_18) {
    uVar8 = uStack_18 + 1;
    ppppuVar6 = (undefined4 ****)pppuStack_2c;
    if (0xfff < uVar8) {
      ppppuVar6 = (undefined4 ****)pppuStack_2c[-1];
      uVar8 = uStack_18 + 0x24;
      if (0x1f < (uint)((int)pppuStack_2c + (-4 - (int)ppppuVar6))) {
LAB_00b3c2d7:
        func_0x008aaf66();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    func_0x008ab812(ppppuVar6,uVar8);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b3c310(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  uint auStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64eed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x34) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[5] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  else {
    uVar4 = func_0x0096cbb0(*(undefined1 *)(*(int *)(param_1 + 4) + 0x18),uStack_14);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 4;
    uStack_30 = 0xf;
    iStack_44 = 0x202f2f0a;
    uStack_40 = 0;
    piVar5 = (int *)(param_1 + 0x24);
    uStack_8 = 0;
    if (0xf < *(uint *)(param_1 + 0x38)) {
      piVar5 = (int *)*piVar5;
    }
    puVar6 = (uint *)func_0x005df0b0(0,piVar5,*(undefined4 *)(param_1 + 0x34));
    uStack_2c = *puVar6;
    uStack_28 = puVar6[1];
    uStack_24 = puVar6[2];
    uStack_20 = puVar6[3];
    uStack_1c = *(undefined8 *)(puVar6 + 4);
    puVar6[4] = 0;
    puVar6[5] = 0xf;
    *(undefined1 *)puVar6 = 0;
    uStack_8._0_1_ = 1;
    func_0x0046b5c0(auStack_5c,&uStack_2c,uVar4);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    puVar7 = (undefined4 *)func_0x0046a880(" SHADER END\n",0xc);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    uVar4 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *param_2 = *puVar7;
    param_2[1] = uVar4;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar7 + 4);
    puVar7[4] = 0;
    puVar7[5] = 0xf;
    *(undefined1 *)puVar7 = 0;
    if (0xf < uStack_48) {
      uVar8 = uStack_48 + 1;
      uVar9 = auStack_5c[0];
      if (0xfff < uVar8) {
        uVar9 = *(uint *)(auStack_5c[0] - 4);
        uVar8 = uStack_48 + 0x24;
        if (0x1f < (auStack_5c[0] - uVar9) - 4) goto LAB_00b3c532;
      }
      func_0x008ab812(uVar9,uVar8);
    }
    uStack_4c = 0;
    uStack_48 = 0xf;
    auStack_5c[0] = auStack_5c[0] & 0xffffff00;
    if (0xf < uStack_1c._4_4_) {
      uVar8 = uStack_1c._4_4_ + 1;
      uVar9 = uStack_2c;
      if (0xfff < uVar8) {
        uVar9 = *(uint *)(uStack_2c - 4);
        uVar8 = uStack_1c._4_4_ + 0x24;
        if (0x1f < (uStack_2c - uVar9) - 4) goto LAB_00b3c532;
      }
      func_0x008ab812(uVar9,uVar8);
    }
    uStack_1c = 0xf00000000;
    uStack_2c = uStack_2c & 0xffffff00;
    if (0xf < uStack_30) {
      uVar9 = uStack_30 + 1;
      iVar10 = iStack_44;
      if (0xfff < uVar9) {
        iVar10 = *(int *)(iStack_44 + -4);
        uVar9 = uStack_30 + 0x24;
        if (0x1f < (iStack_44 - iVar10) - 4U) {
LAB_00b3c532:
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(iVar10,uVar9);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_00b3c540(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x50) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x58));
}



void __thiscall FUN_00b3c710(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_2;
  uStack_4 = *(undefined4 *)(param_1 + 0x24);
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 8);
    _guard_check_icall(&uStack_4,&uStack_8);
    (*pcVar1)();
    return;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined1 * __fastcall FUN_00b3cc30(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x44] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xf;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8c] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xf;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xb0] = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd4] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xf;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf8] = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0xf;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x11c] = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0xf;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  param_1[0x140] = 0;
  param_1[0x144] = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0xf;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  param_1[0x164] = 0;
  return param_1;
}



void __fastcall FUN_00b3cf30(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x15c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x148);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0xf;
  *(undefined1 *)(param_1 + 0x148) = 0;
  uVar1 = *(uint *)(param_1 + 0x138);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x124);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0xf;
  *(undefined1 *)(param_1 + 0x124) = 0;
  uVar1 = *(uint *)(param_1 + 0x114);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x100);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0xf;
  *(undefined1 *)(param_1 + 0x100) = 0;
  uVar1 = *(uint *)(param_1 + 0xf0);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0xdc);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xf;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  uVar1 = *(uint *)(param_1 + 0xcc);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0xb8);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x94);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xf;
  *(undefined1 *)(param_1 + 0x94) = 0;
  uVar1 = *(uint *)(param_1 + 0x84);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x70);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xf;
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar1 = *(uint *)(param_1 + 0x60);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x4c);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x28);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00b3d24c;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 4);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00b3d24c:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



undefined4 * __thiscall FUN_00b449c0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *param_1 = rx::FramebufferD3D::vftable;
  FUN_008e8b00();
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    uVar5 = param_1[6] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined4 *)(*pcVar2)();
        return puVar4;
      }
    }
    func_0x008ab812(iVar3,uVar5);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = rx::FramebufferImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b44a40(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FramebufferImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



bool __thiscall
FUN_00b44c30(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  iVar2 = param_2 + 0x13c0;
  if (*(char *)(param_2 + 0x13bc) == '\0') {
    iVar2 = 0;
  }
  _guard_check_icall(param_2,param_3,param_4,iVar2,(byte)(param_5 >> 0xe) & 1,
                     (byte)(param_5 >> 8) & 1,(byte)(param_5 >> 10) & 1,param_6,
                     *(undefined4 *)(param_2 + 0x14e4));
  iVar2 = (*pcVar1)();
  return iVar2 == 1;
}



undefined8 * FUN_00b44cb0(undefined8 *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = func_0x0098dc50();
  if (cVar1 != '\0') {
    uVar2 = func_0x0098b280(0x8cdd,
                            "Framebuffer is incomplete: Separate depth and stencil buffers are unsupported."
                           );
    *param_1 = uVar2;
    return param_1;
  }
  if (*(char *)(param_2 + 0x1345) == '\0') {
    cVar1 = func_0x0098bf10();
    if (cVar1 == '\0') {
      uVar2 = func_0x0098b280(0x8cdd,
                              "Framebuffer is incomplete: Non-unique attachments are unsupported.");
      *param_1 = uVar2;
      return param_1;
    }
  }
  cVar1 = func_0x0098b290();
  if (cVar1 == '\0') {
    uVar2 = func_0x0098b280(0x8cdd,
                            "Framebuffer is incomplete: Mismatched attachment sizes are unsupported."
                           );
    *param_1 = uVar2;
    return param_1;
  }
  uVar2 = func_0x0098b270();
  *param_1 = uVar2;
  return param_1;
}



void __thiscall FUN_00b44d60(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 auStack_64 [100];
  
  func_0x00b44a70(auStack_64,param_2 + 8,param_3);
  pcVar1 = *(code **)(*param_1 + 0x48);
  _guard_check_icall(param_2,auStack_64);
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b44db0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  undefined1 auStack_64 [60];
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  
  func_0x00b44a70(auStack_64,param_2 + 8,0);
  uStack_1c = param_6;
  uStack_28 = 1;
  uStack_24 = param_5;
  uStack_20 = 1;
  pcVar1 = *(code **)(*param_1 + 0x48);
  _guard_check_icall(param_2,auStack_64);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b44e20(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  code *pcVar1;
  byte abStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_24;
  
  func_0x00b44a70(abStack_64,param_2 + 8,0);
  if (param_3 != 0x1800) {
    if (param_3 == 0x1801) {
      uStack_28 = 1;
      uStack_24 = *param_5;
    }
    goto LAB_00b44f3a;
  }
  if (param_4 == 0) {
    abStack_64[0] = abStack_64[0] | 1;
LAB_00b44e62:
    abStack_64[0] = abStack_64[0] & 0xfd;
    if (param_4 != 2) goto LAB_00b44edc;
    abStack_64[0] = abStack_64[0] | 4;
LAB_00b44e77:
    abStack_64[0] = abStack_64[0] & 0xf7;
    if (param_4 != 4) goto LAB_00b44ef1;
    abStack_64[0] = abStack_64[0] | 0x10;
LAB_00b44e8c:
    abStack_64[0] = abStack_64[0] & 0xdf;
    if (param_4 != 6) goto LAB_00b44f06;
    abStack_64[0] = abStack_64[0] | 0x40;
LAB_00b44ea1:
    abStack_64[0] = abStack_64[0] & 0x7f;
  }
  else {
    abStack_64[0] = abStack_64[0] & 0xfe;
    if (param_4 != 1) goto LAB_00b44e62;
    abStack_64[0] = abStack_64[0] | 2;
LAB_00b44edc:
    abStack_64[0] = abStack_64[0] & 0xfb;
    if (param_4 != 3) goto LAB_00b44e77;
    abStack_64[0] = abStack_64[0] | 8;
LAB_00b44ef1:
    abStack_64[0] = abStack_64[0] & 0xef;
    if (param_4 != 5) goto LAB_00b44e8c;
    abStack_64[0] = abStack_64[0] | 0x20;
LAB_00b44f06:
    abStack_64[0] = abStack_64[0] & 0xbf;
    if (param_4 != 7) goto LAB_00b44ea1;
    abStack_64[0] = abStack_64[0] | 0x80;
  }
  uStack_30 = 0x1406;
  uStack_60 = *param_5;
  uStack_5c = param_5[1];
  uStack_58 = param_5[2];
  uStack_54 = param_5[3];
LAB_00b44f3a:
  pcVar1 = *(code **)(*param_1 + 0x48);
  _guard_check_icall(param_2,abStack_64);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b44f60(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  code *pcVar1;
  byte abStack_64 [20];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  
  func_0x00b44a70(abStack_64,param_2 + 8,0);
  if (param_3 != 0x1800) {
    if (param_3 == 0x1802) {
      uStack_20 = 1;
      uStack_1c = *param_5;
    }
    goto LAB_00b45076;
  }
  if (param_4 == 0) {
    abStack_64[0] = abStack_64[0] | 1;
LAB_00b44fa2:
    abStack_64[0] = abStack_64[0] & 0xfd;
    if (param_4 != 2) goto LAB_00b4501c;
    abStack_64[0] = abStack_64[0] | 4;
LAB_00b44fb7:
    abStack_64[0] = abStack_64[0] & 0xf7;
    if (param_4 != 4) goto LAB_00b45031;
    abStack_64[0] = abStack_64[0] | 0x10;
LAB_00b44fcc:
    abStack_64[0] = abStack_64[0] & 0xdf;
    if (param_4 != 6) goto LAB_00b45046;
    abStack_64[0] = abStack_64[0] | 0x40;
LAB_00b44fe1:
    abStack_64[0] = abStack_64[0] & 0x7f;
  }
  else {
    abStack_64[0] = abStack_64[0] & 0xfe;
    if (param_4 != 1) goto LAB_00b44fa2;
    abStack_64[0] = abStack_64[0] | 2;
LAB_00b4501c:
    abStack_64[0] = abStack_64[0] & 0xfb;
    if (param_4 != 3) goto LAB_00b44fb7;
    abStack_64[0] = abStack_64[0] | 8;
LAB_00b45031:
    abStack_64[0] = abStack_64[0] & 0xef;
    if (param_4 != 5) goto LAB_00b44fcc;
    abStack_64[0] = abStack_64[0] | 0x20;
LAB_00b45046:
    abStack_64[0] = abStack_64[0] & 0xbf;
    if (param_4 != 7) goto LAB_00b44fe1;
    abStack_64[0] = abStack_64[0] | 0x80;
  }
  uStack_30 = 0x1404;
  uStack_50 = *param_5;
  uStack_4c = param_5[1];
  uStack_48 = param_5[2];
  uStack_44 = param_5[3];
LAB_00b45076:
  pcVar1 = *(code **)(*param_1 + 0x48);
  _guard_check_icall(param_2,abStack_64);
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b450a0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  code *pcVar1;
  byte abStack_64 [36];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  func_0x00b44a70(abStack_64,param_2 + 8,0);
  if (param_4 == 0) {
    abStack_64[0] = abStack_64[0] | 1;
LAB_00b450d7:
    abStack_64[0] = abStack_64[0] & 0xfd;
    if (param_4 != 2) goto LAB_00b4517f;
    abStack_64[0] = abStack_64[0] | 4;
LAB_00b450f0:
    abStack_64[0] = abStack_64[0] & 0xf7;
    if (param_4 != 4) goto LAB_00b45198;
    abStack_64[0] = abStack_64[0] | 0x10;
LAB_00b45109:
    abStack_64[0] = abStack_64[0] & 0xdf;
    if (param_4 != 6) goto LAB_00b451b1;
    abStack_64[0] = abStack_64[0] | 0x40;
  }
  else {
    abStack_64[0] = abStack_64[0] & 0xfe;
    if (param_4 != 1) goto LAB_00b450d7;
    abStack_64[0] = abStack_64[0] | 2;
LAB_00b4517f:
    abStack_64[0] = abStack_64[0] & 0xfb;
    if (param_4 != 3) goto LAB_00b450f0;
    abStack_64[0] = abStack_64[0] | 8;
LAB_00b45198:
    abStack_64[0] = abStack_64[0] & 0xef;
    if (param_4 != 5) goto LAB_00b45109;
    abStack_64[0] = abStack_64[0] | 0x20;
LAB_00b451b1:
    abStack_64[0] = abStack_64[0] & 0xbf;
    if (param_4 == 7) {
      abStack_64[0] = abStack_64[0] | 0x80;
      goto LAB_00b45129;
    }
  }
  abStack_64[0] = abStack_64[0] & 0x7f;
LAB_00b45129:
  uStack_30 = 0x1405;
  uStack_40 = *param_5;
  uStack_3c = param_5[1];
  uStack_38 = param_5[2];
  uStack_34 = param_5[3];
  pcVar1 = *(code **)(*param_1 + 0x48);
  _guard_check_icall(param_2,abStack_64);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b451d0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00968eb0(param_2,0,0);
  }
  return;
}



int FUN_00b45540(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_4 [4];
  
  iVar2 = func_0x0098d900();
  pcVar1 = *(code **)(**(int **)(iVar2 + 0x18) + 8);
  _guard_check_icall(auStack_4,*(undefined4 *)(iVar2 + 4));
  (*pcVar1)();
  return iVar2 + 8;
}



undefined4 __thiscall FUN_00b45580(int *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iStack_48;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_4;
  
  iStack_48 = param_4;
  iVar3 = func_0x0098da40();
  pcVar1 = *(code **)(**(int **)(iVar3 + 0x18) + 4);
  _guard_check_icall();
  (*pcVar1)();
  uStack_20 = uStack_34;
  uStack_2c = 0;
  uStack_28 = 0;
  iStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  cVar2 = func_0x00953b30(iStack_4,&uStack_2c);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = func_0x00946bf0(param_4,param_2);
  puVar8 = &stack0xffffffbc;
  piVar7 = param_2;
  cVar2 = func_0x0094abf0(param_2,*(undefined4 *)(iStack_4 + 8),*param_3,param_3[1],puVar8);
  if (cVar2 == '\0') {
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\FramebufferD3D.cpp"
                    ,"rx::FramebufferD3D::readPixels",0xe1);
    return 1;
  }
  puVar6 = &stack0xffffffac;
  iVar5 = 0;
  cVar2 = func_0x0094ad20(param_2,puVar8,0,param_3,0,puVar6);
  if (cVar2 == '\0') {
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\FramebufferD3D.cpp"
                    ,"rx::FramebufferD3D::readPixels",0xe5);
    return 1;
  }
  pcVar1 = *(code **)(*piVar7 + 0x4c);
  _guard_check_icall(uStack_34,&iStack_48,uStack_2c,param_2,iVar5,param_3,uStack_20,
                     puVar6 + iStack_1c +
                              (iStack_48 - *param_1) * *(int *)(iVar3 + 0x2c) + -param_1[1] * iVar5)
  ;
  uVar4 = (*pcVar1)();
  return uVar4;
}



undefined4 __thiscall FUN_00b45730(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    for (uVar2 = *param_4; uVar2 != 0; uVar2 = uVar2 & ~(1 << (uVar1 & 0x1f))) {
      uVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if ((uVar1 < 8) || (uVar1 == 0x14)) {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return 0;
}



undefined4 * __thiscall FUN_00b45a80(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::BufferD3D::vftable;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x12];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x12] = 0;
  func_0x00b459d0();
  *param_1 = rx::BufferImpl::vftable;
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b45ae0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::BufferImpl::vftable;
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00b45b10(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 auStack_10 [4];
  
  auStack_10[0] = 0;
  pcVar1 = *(code **)(*param_1 + 0x44);
  _guard_check_icall(param_2,auStack_10);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return 1;
  }
  puVar3 = (undefined8 *)
           func_0x0093de00(&stack0xffffffec,unaff_retaddr,unaff_EDI + param_2,param_3,param_4);
  *param_5 = *puVar3;
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar3 + 1);
  return 0;
}



void __fastcall FUN_00b45d40(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6597b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_14 = param_1;
  if (param_1[0xf] == param_1[0x10]) {
    puStack_14 = (undefined4 *)func_0x008ab47d(0x1c,uVar2);
    uStack_8 = 0;
    if (puStack_14 == (undefined4 *)0x0) {
      puStack_14 = (undefined4 *)0x0;
    }
    else {
      puStack_14 = (undefined4 *)func_0x00b513a0(param_1[0xd]);
    }
    puVar4 = (undefined4 *)param_1[0x10];
    uStack_8 = 1;
    if (puVar4 == (undefined4 *)param_1[0x11]) {
      func_0x00b457b0(puVar4,&puStack_14);
      puVar4 = puStack_14;
    }
    else {
      *puVar4 = puStack_14;
      param_1[0x10] = param_1[0x10] + 4;
      puVar4 = (undefined4 *)0x0;
    }
    uStack_8 = 0xffffffff;
    if (puVar4 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar4;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  if (param_1[0x12] == 0) {
    puStack_14 = (undefined4 *)func_0x008ab47d(0x10,uVar2);
    uStack_8 = 2;
    if (puStack_14 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = func_0x00a5f0e0(param_1[0xd]);
    }
    param_1[0x12] = uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b45e30(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0xf] != param_1[0x10]) {
    func_0x00b45770(param_1[0xf],param_1[0x10],param_1 + 0xf);
    param_1[0x10] = param_1[0xf];
  }
  param_1[0x13] = 0;
  if (param_1[0x12] != 0) {
    iVar2 = func_0x00a5f200();
    if (iVar2 != 0) {
      if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
        pcVar1 = (code *)**(undefined4 **)param_1[0x12];
        _guard_check_icall(1);
        (*pcVar1)();
      }
      param_1[0x12] = 0;
    }
  }
  if (param_1[0x16] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x48);
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  param_1[0x15] = 0;
  return;
}



void FUN_00b477f0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_8;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        uStack_8 = param_3;
        iVar5 = param_8;
        iVar6 = param_5;
        do {
          uVar7 = 0;
          if (param_2 != 0) {
            do {
              uVar1 = *(uint *)(iVar6 + uVar7 * 4);
              uVar4 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar4 < 0x7f800001) {
                if (uVar4 < 0x47fff000) {
                  if (uVar4 < 0x38800000) {
                    iVar3 = 0x71 - (uVar4 >> 0x17);
                    if (iVar3 < 0x18) {
                      uVar4 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar3 & 0x1f);
                      iVar3 = (uVar4 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar4 = 0;
                      iVar3 = 0xfff;
                    }
                  }
                  else {
                    iVar3 = (uVar4 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar3 + uVar4 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              *(ushort *)(iVar5 + uVar7 * 2) = uVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 < param_2);
          }
          iVar6 = iVar6 + param_6;
          iVar5 = iVar5 + param_9;
          uStack_8 = uStack_8 + -1;
        } while (uStack_8 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b47930(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_c;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        uStack_c = param_3;
        iVar5 = param_8;
        iVar6 = param_5;
        do {
          uVar7 = 0;
          if (param_2 * 2 != 0) {
            do {
              uVar1 = *(uint *)(iVar6 + uVar7 * 4);
              uVar4 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar4 < 0x7f800001) {
                if (uVar4 < 0x47fff000) {
                  if (uVar4 < 0x38800000) {
                    iVar3 = 0x71 - (uVar4 >> 0x17);
                    if (iVar3 < 0x18) {
                      uVar4 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar3 & 0x1f);
                      iVar3 = (uVar4 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar4 = 0;
                      iVar3 = 0xfff;
                    }
                  }
                  else {
                    iVar3 = (uVar4 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar3 + uVar4 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              *(ushort *)(iVar5 + uVar7 * 2) = uVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 < (uint)(param_2 * 2));
          }
          iVar6 = iVar6 + param_6;
          iVar5 = iVar5 + param_9;
          uStack_c = uStack_c + -1;
        } while (uStack_c != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b47a80(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_c;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        uStack_c = param_3;
        iVar5 = param_8;
        iVar6 = param_5;
        do {
          uVar7 = 0;
          if (param_2 << 2 != 0) {
            do {
              uVar1 = *(uint *)(iVar6 + uVar7 * 4);
              uVar4 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar4 < 0x7f800001) {
                if (uVar4 < 0x47fff000) {
                  if (uVar4 < 0x38800000) {
                    iVar3 = 0x71 - (uVar4 >> 0x17);
                    if (iVar3 < 0x18) {
                      uVar4 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar3 & 0x1f);
                      iVar3 = (uVar4 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar4 = 0;
                      iVar3 = 0xfff;
                    }
                  }
                  else {
                    iVar3 = (uVar4 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar3 + uVar4 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              *(ushort *)(iVar5 + uVar7 * 2) = uVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 < (uint)(param_2 << 2));
          }
          iVar6 = iVar6 + param_6;
          iVar5 = iVar5 + param_9;
          uStack_c = uStack_c + -1;
        } while (uStack_c != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b47bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,4,4,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,5,4,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,5,5,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,6,5,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,6,6,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,8,5,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,8,6,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47d90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,8,8,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,10,5,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,10,6,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,10,8,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,10,10,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,0xc,10,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b47f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98d00(param_1,param_2,param_3,param_4,0xc,0xc,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void * FUN_00b47f50(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = (param_3 + 2U) / 3;
  pvVar4 = (void *)((param_4 + 2U) * -0x55555555);
  for (uVar1 = (param_4 + 2U) / 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 2U) / 3 << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b48000(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = (param_3 + 2U) / 3;
  pvVar4 = (void *)((param_4 + 2U) * -0x55555555);
  for (uVar1 = (param_4 + 2U) / 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 3U >> 2) << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b480b0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = param_3 + 3U >> 2;
  pvVar4 = (void *)((param_4 + 2U) * -0x55555555);
  for (uVar1 = (param_4 + 2U) / 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 3U >> 2) << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void FUN_00b48150(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,
                 int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *_Src;
  void *_Dst;
  
  uVar2 = param_3 + 3U >> 2;
  for (uVar1 = param_4 + 3U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      _Src = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,_Src,(param_2 + 3U >> 2) << 4);
        _Src = (void *)((int)_Src + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
  }
  return;
}



void * FUN_00b481f0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_2 + 4U) * -0x33333333);
  uVar1 = param_3 + 3U >> 2;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 4U) / 5 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48290(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = param_3 + 3U >> 2;
  pvVar4 = (void *)((param_2 + 4U) * -0x33333333);
  for (uVar1 = param_4 + 3U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 4U) / 5 << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b48330(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 4U) * -0x33333333);
  uVar1 = (param_3 + 4U) / 5;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 4U) / 5 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b483d0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = (param_3 + 4U) / 5;
  pvVar4 = (void *)((param_3 + 4U) * -0x33333333);
  for (uVar1 = param_4 + 3U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 4U) / 5 << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b48480(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = (param_3 + 4U) / 5;
  pvVar4 = (void *)((param_4 + 4U) * -0x33333333);
  for (uVar1 = (param_4 + 4U) / 5; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 4U) / 5 << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b48530(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 4U) * -0x33333333);
  uVar1 = (param_3 + 4U) / 5;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 5U) / 6 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b485d0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = (param_3 + 4U) / 5;
  pvVar4 = (void *)((param_4 + 4U) * -0x33333333);
  for (uVar1 = (param_4 + 4U) / 5; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 5U) / 6 << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b48680(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 5U) * -0x55555555);
  uVar1 = (param_3 + 5U) / 6;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 5U) / 6 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48720(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = (param_3 + 5U) / 6;
  pvVar4 = (void *)((param_4 + 4U) * -0x33333333);
  for (uVar1 = (param_4 + 4U) / 5; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 5U) / 6 << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b487d0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  uVar2 = (param_3 + 5U) / 6;
  pvVar4 = (void *)((param_4 + 5U) * -0x55555555);
  for (uVar1 = (param_4 + 5U) / 6; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar2 != 0) {
      uVar3 = uVar2;
      pvVar4 = param_5;
      _Dst = param_8;
      do {
        memcpy(_Dst,pvVar4,(param_2 + 5U) / 6 << 4);
        pvVar4 = (void *)((int)pvVar4 + param_6);
        _Dst = (void *)((int)_Dst + param_9);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_8 = (void *)((int)param_8 + param_10);
    param_5 = (void *)((int)param_5 + param_7);
    pvVar4 = param_5;
  }
  return pvVar4;
}



void * FUN_00b48880(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 4U) * -0x33333333);
  uVar1 = (param_3 + 4U) / 5;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 7U >> 3) << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48920(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 5U) * -0x55555555);
  uVar1 = (param_3 + 5U) / 6;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 7U >> 3) << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void FUN_00b489c0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,
                 int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  void *_Dst;
  
  uVar1 = param_3 + 7U >> 3;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        _Src = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,_Src,(param_2 + 7U >> 3) << 4);
          _Src = (void *)((int)_Src + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      param_5 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void * FUN_00b48a50(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 4U) * -0x33333333);
  uVar1 = (param_3 + 4U) / 5;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 9U) / 10 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48af0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 5U) * -0x55555555);
  uVar1 = (param_3 + 5U) / 6;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 9U) / 10 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48b90(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_2 + 9U) * -0x33333333);
  uVar1 = param_3 + 7U >> 3;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 9U) / 10 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48c30(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 9U) * -0x33333333);
  uVar1 = (param_3 + 9U) / 10;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 9U) / 10 << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48cd0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 9U) * -0x33333333);
  uVar1 = (param_3 + 9U) / 10;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 0xbU) / 0xc << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void * FUN_00b48d70(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6
                   ,int param_7,void *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  
  pvVar3 = (void *)((param_3 + 0xbU) * -0x55555555);
  uVar1 = (param_3 + 0xbU) / 0xc;
  if (param_4 != 0) {
    do {
      if (uVar1 != 0) {
        uVar2 = uVar1;
        pvVar3 = param_5;
        _Dst = param_8;
        do {
          memcpy(_Dst,pvVar3,(param_2 + 0xbU) / 0xc << 4);
          pvVar3 = (void *)((int)pvVar3 + param_6);
          _Dst = (void *)((int)_Dst + param_9);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_8 = (void *)((int)param_8 + param_10);
      pvVar3 = (void *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
      param_5 = pvVar3;
    } while (param_4 != 0);
  }
  return pvVar3;
}



void FUN_00b48e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,4,4,4,4,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b48e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,4,5,5,1,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b48e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,4,5,6,0,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b48ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,4,8,8,8,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b48f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,4,8,8,0,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b48f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,8,4,4,4,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b48f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,8,5,5,1,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b48fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,8,5,6,0,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b49010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,8,8,8,8,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b49050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b98ee0(param_1,param_2,param_3,param_4,8,8,8,0,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  return;
}



void FUN_00b49090(undefined4 param_1,int param_2,int param_3,int param_4,undefined2 *param_5,
                 int param_6,int param_7,undefined2 *param_8,int param_9,int param_10)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  if (param_4 != 0) {
    do {
      puVar3 = param_5;
      iVar4 = param_3;
      puVar6 = param_8;
      if (param_3 != 0) {
        do {
          puVar1 = puVar6;
          puVar2 = puVar3;
          iVar5 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
              *(undefined1 *)((int)puVar1 + 3) = 1;
              iVar5 = iVar5 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined2 *)((int)puVar2 + 3);
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + -1;
          puVar3 = (undefined2 *)((int)puVar3 + param_6);
          puVar6 = (undefined2 *)((int)puVar6 + param_9);
        } while (iVar4 != 0);
      }
      param_8 = (undefined2 *)((int)param_8 + param_10);
      param_5 = (undefined2 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b49120(undefined4 param_1,int param_2,int param_3,int param_4,undefined2 *param_5,
                 int param_6,int param_7,undefined2 *param_8,int param_9,int param_10)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  if (param_4 != 0) {
    do {
      puVar3 = param_5;
      iVar4 = param_3;
      puVar6 = param_8;
      if (param_3 != 0) {
        do {
          puVar1 = puVar6;
          puVar2 = puVar3;
          iVar5 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
              *(undefined1 *)((int)puVar1 + 3) = 0x7f;
              iVar5 = iVar5 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined2 *)((int)puVar2 + 3);
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + -1;
          puVar3 = (undefined2 *)((int)puVar3 + param_6);
          puVar6 = (undefined2 *)((int)puVar6 + param_9);
        } while (iVar4 != 0);
      }
      param_8 = (undefined2 *)((int)param_8 + param_10);
      param_5 = (undefined2 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b491b0(undefined4 param_1,int param_2,int param_3,int param_4,undefined2 *param_5,
                 int param_6,int param_7,undefined2 *param_8,int param_9,int param_10)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  if (param_4 != 0) {
    do {
      puVar3 = param_5;
      iVar4 = param_3;
      puVar6 = param_8;
      if (param_3 != 0) {
        do {
          puVar1 = puVar6;
          puVar2 = puVar3;
          iVar5 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
              *(undefined1 *)((int)puVar1 + 3) = 0xff;
              iVar5 = iVar5 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined2 *)((int)puVar2 + 3);
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + -1;
          puVar3 = (undefined2 *)((int)puVar3 + param_6);
          puVar6 = (undefined2 *)((int)puVar6 + param_9);
        } while (iVar4 != 0);
      }
      param_8 = (undefined2 *)((int)param_8 + param_10);
      param_5 = (undefined2 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b49240(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 int param_6,int param_7,undefined4 *param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_4;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        puVar3 = param_5;
        puVar5 = param_8;
        do {
          puVar1 = puVar5;
          puVar2 = puVar3;
          iVar4 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar2 + 1);
              *(undefined2 *)((int)puVar1 + 6) = 1;
              iVar4 = iVar4 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined4 *)((int)puVar2 + 6);
            } while (iVar4 != 0);
          }
          puVar3 = (undefined4 *)((int)puVar3 + param_6);
          puVar5 = (undefined4 *)((int)puVar5 + param_9);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = (undefined4 *)((int)param_8 + param_10);
      param_5 = (undefined4 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b492f0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 int param_6,int param_7,undefined4 *param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_4;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        puVar3 = param_5;
        puVar5 = param_8;
        do {
          puVar1 = puVar5;
          puVar2 = puVar3;
          iVar4 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar2 + 1);
              *(undefined2 *)((int)puVar1 + 6) = 0x7fff;
              iVar4 = iVar4 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined4 *)((int)puVar2 + 6);
            } while (iVar4 != 0);
          }
          puVar3 = (undefined4 *)((int)puVar3 + param_6);
          puVar5 = (undefined4 *)((int)puVar5 + param_9);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = (undefined4 *)((int)param_8 + param_10);
      param_5 = (undefined4 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b493a0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 int param_6,int param_7,undefined4 *param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_4;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        puVar3 = param_5;
        puVar5 = param_8;
        do {
          puVar1 = puVar5;
          puVar2 = puVar3;
          iVar4 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar2 + 1);
              *(undefined2 *)((int)puVar1 + 6) = 0xffff;
              iVar4 = iVar4 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined4 *)((int)puVar2 + 6);
            } while (iVar4 != 0);
          }
          puVar3 = (undefined4 *)((int)puVar3 + param_6);
          puVar5 = (undefined4 *)((int)puVar5 + param_9);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = (undefined4 *)((int)param_8 + param_10);
      param_5 = (undefined4 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b49450(undefined4 param_1,int param_2,int param_3,int param_4,undefined8 *param_5,
                 int param_6,int param_7,undefined8 *param_8,int param_9,int param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    do {
      puVar3 = param_5;
      iVar4 = param_3;
      puVar6 = param_8;
      if (param_3 != 0) {
        do {
          puVar1 = puVar6;
          puVar2 = puVar3;
          iVar5 = param_2;
          if (param_2 != 0) {
            do {
              *puVar1 = *puVar2;
              *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
              *(undefined4 *)((int)puVar1 + 0xc) = 1;
              iVar5 = iVar5 + -1;
              puVar1 = puVar1 + 2;
              puVar2 = (undefined8 *)((int)puVar2 + 0xc);
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + -1;
          puVar3 = (undefined8 *)((int)puVar3 + param_6);
          puVar6 = (undefined8 *)((int)puVar6 + param_9);
        } while (iVar4 != 0);
      }
      param_8 = (undefined8 *)((int)param_8 + param_10);
      param_5 = (undefined8 *)((int)param_5 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_00b494f0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,
                 size_t param_6,int param_7,void *param_8,size_t param_9,int param_10)

{
  size_t _Size;
  size_t _Size_00;
  int iVar1;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size = param_2 * 3;
  _Size_00 = _Size * param_3;
  if ((_Size_00 - param_7 == 0) && (_Size_00 - param_10 == 0)) {
    memcpy(param_8,param_5,_Size_00 * param_4);
    return;
  }
  if ((_Size == param_6) && (_Size == param_9)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size_00);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,_Size);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



void FUN_00b495f0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,
                 size_t param_6,int param_7,void *param_8,size_t param_9,int param_10)

{
  size_t _Size;
  size_t _Size_00;
  int iVar1;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size = param_2 * 6;
  _Size_00 = _Size * param_3;
  if ((_Size_00 - param_7 == 0) && (_Size_00 - param_10 == 0)) {
    memcpy(param_8,param_5,_Size_00 * param_4);
    return;
  }
  if ((_Size == param_6) && (_Size == param_9)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size_00);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,_Size);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



void FUN_00b496f0(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,
                 size_t param_6,int param_7,void *param_8,size_t param_9,int param_10)

{
  size_t _Size;
  int iVar1;
  size_t _Size_00;
  void *_Dst;
  void *_Src;
  void *pvStack_c;
  void *pvStack_8;
  int iStack_4;
  
  _Size_00 = param_2 * 0xc;
  _Size = _Size_00 * param_3;
  if ((_Size - param_7 == 0) && (_Size - param_10 == 0)) {
    memcpy(param_8,param_5,_Size * param_4);
    return;
  }
  if ((_Size_00 == param_6) && (_Size_00 == param_9)) {
    if (param_4 != 0) {
      do {
        memcpy(param_8,param_5,_Size);
        param_5 = (void *)((int)param_5 + param_7);
        param_8 = (void *)((int)param_8 + param_10);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    iStack_4 = param_4;
    if (param_4 != 0) {
      pvStack_8 = param_5;
      pvStack_c = param_8;
      do {
        iVar1 = param_3;
        _Dst = pvStack_c;
        _Src = pvStack_8;
        if (param_3 != 0) {
          do {
            memcpy(_Dst,_Src,_Size_00);
            iVar1 = iVar1 + -1;
            _Dst = (void *)((int)_Dst + param_9);
            _Src = (void *)((int)_Src + param_6);
          } while (iVar1 != 0);
        }
        pvStack_c = (void *)((int)pvStack_c + param_10);
        pvStack_8 = (void *)((int)pvStack_8 + param_7);
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  return;
}



void FUN_00b497f0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b45c0;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (param_2 != 0x8366) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b49830(undefined4 *param_1,int param_2)

{
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b49860(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b3f60;
  return;
}



void FUN_00b49890(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b498c0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b3ff0;
  return;
}



void FUN_00b498e0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85860;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b49910(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b4170;
  return;
}



void FUN_00b49930(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x1401) && ((param_2 == 0x140b || (param_2 == 0x8d61)))) {
    *param_1 = FUN_009b3f60;
    return;
  }
  *param_1 = _guard_check_icall;
  return;
}



void FUN_00b49960(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x1401) && (param_2 == 0x1406)) {
    *param_1 = FUN_009b3ff0;
    return;
  }
  *param_1 = _guard_check_icall;
  return;
}



void FUN_00b49990(undefined4 *param_1)

{
  *param_1 = _guard_check_icall;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



void FUN_00b499a0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x8368) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b499d0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b7500;
    return;
  }
  if (param_2 != 0x8363) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b72f0;
  return;
}



void FUN_00b49a10(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_00a85a60;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x8365) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b46c0;
  return;
}



void FUN_00b49a50(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b49a80(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00a85540;
  return;
}



void FUN_00b49aa0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95010;
  return;
}



void FUN_00b49ac0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b94fd0;
  return;
}



void FUN_00b49ae0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00a855d0;
  return;
}



void FUN_00b49b00(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95110;
  return;
}



void FUN_00b49b20(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b950d0;
  return;
}



void FUN_00b49b40(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95190;
  return;
}



void FUN_00b49b60(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95150;
  return;
}



void FUN_00b49b80(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95210;
  return;
}



void FUN_00b49ba0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b951d0;
  return;
}



void FUN_00b49bc0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95d10;
  return;
}



void FUN_00b49be0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47e90;
  return;
}



void FUN_00b49c00(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48c30;
  return;
}



void FUN_00b49c20(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47dd0;
  return;
}



void FUN_00b49c40(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48a50;
  return;
}



void FUN_00b49c60(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47e10;
  return;
}



void FUN_00b49c80(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48af0;
  return;
}



void FUN_00b49ca0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47e50;
  return;
}



void FUN_00b49cc0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48b90;
  return;
}



void FUN_00b49ce0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47ed0;
  return;
}



void FUN_00b49d00(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48cd0;
  return;
}



void FUN_00b49d20(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47f10;
  return;
}



void FUN_00b49d40(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48d70;
  return;
}



void FUN_00b49d60(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47f50;
  return;
}



void FUN_00b49d80(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48000;
  return;
}



void FUN_00b49da0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47bd0;
  return;
}



void FUN_00b49dc0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b480b0;
  return;
}



void FUN_00b49de0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48150;
  return;
}



void FUN_00b49e00(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47c10;
  return;
}



void FUN_00b49e20(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b481f0;
  return;
}



void FUN_00b49e40(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48290;
  return;
}



void FUN_00b49e60(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47c50;
  return;
}



void FUN_00b49e80(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48330;
  return;
}



void FUN_00b49ea0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b483d0;
  return;
}



void FUN_00b49ec0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48480;
  return;
}



void FUN_00b49ee0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47c90;
  return;
}



void FUN_00b49f00(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48530;
  return;
}



void FUN_00b49f20(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b485d0;
  return;
}



void FUN_00b49f40(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47cd0;
  return;
}



void FUN_00b49f60(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48680;
  return;
}



void FUN_00b49f80(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48720;
  return;
}



void FUN_00b49fa0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b487d0;
  return;
}



void FUN_00b49fc0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47d10;
  return;
}



void FUN_00b49fe0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48880;
  return;
}



void FUN_00b4a000(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47d50;
  return;
}



void FUN_00b4a020(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48920;
  return;
}



void FUN_00b4a040(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b47d90;
  return;
}



void FUN_00b4a060(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b489c0;
  return;
}



void FUN_00b4a080(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b94f90;
  return;
}



void FUN_00b4a0a0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b94f50;
  return;
}



void FUN_00b4a0c0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95090;
  return;
}



void FUN_00b4a0e0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95050;
  return;
}



void FUN_00b4a100(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b95d50;
  return;
}



void FUN_00b4a120(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x84fa) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5a60;
  return;
}



void FUN_00b4a140(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x84fa) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b4aa0;
  return;
}



void FUN_00b4a160(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x8dad) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b4cb0;
  return;
}



void FUN_00b4a180(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x8dad) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b4d90;
  return;
}



void FUN_00b4a1a0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1403) {
    *param_1 = FUN_00a85960;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b58c0;
  return;
}



void FUN_00b4a1e0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 0x1403) {
    *param_1 = FUN_009b8320;
    return;
  }
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b8510;
  return;
}



void FUN_00b4a210(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5a60;
  return;
}



void FUN_00b4a230(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b47b0;
  return;
}



void FUN_00b4a250(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 0x1405) {
    *param_1 = FUN_009b5330;
    return;
  }
  if (param_2 != 0x84fa) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b4aa0;
  return;
}



void FUN_00b4a290(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b4e60;
  return;
}



void FUN_00b4a2b0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5060;
  return;
}



void FUN_00b4a2d0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b8700;
  return;
}



void FUN_00b4a2f0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = _guard_check_icall;
  return;
}



void FUN_00b4bcc0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b54d0;
  return;
}



void FUN_00b4bcf0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5590;
  return;
}



void FUN_00b4bd10(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5810;
  return;
}



void FUN_00b4bd30(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4bd60(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5630;
  return;
}



void FUN_00b4bd80(undefined4 *param_1,int param_2)

{
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4bdb0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b56c0;
  return;
}



void FUN_00b4bde0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85b60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4be10(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5770;
  return;
}



void FUN_00b4be30(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x1401) && ((param_2 == 0x140b || (param_2 == 0x8d61)))) {
    *param_1 = FUN_009b56c0;
    return;
  }
  *param_1 = _guard_check_icall;
  return;
}



void FUN_00b4be60(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x1401) && (param_2 == 0x1406)) {
    *param_1 = FUN_009b5770;
    return;
  }
  *param_1 = _guard_check_icall;
  return;
}



void FUN_00b4be90(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x1401) && ((param_2 == 0x140b || (param_2 == 0x8d61)))) {
    *param_1 = FUN_009b54d0;
    return;
  }
  *param_1 = _guard_check_icall;
  return;
}



void FUN_00b4bec0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if ((param_2 != 0x1401) && (param_2 == 0x1406)) {
    *param_1 = FUN_009b5590;
    return;
  }
  *param_1 = _guard_check_icall;
  return;
}



void FUN_00b4bef0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48e90;
  return;
}



void FUN_00b4bf10(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48e50;
  return;
}



void FUN_00b4bf30(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48f10;
  return;
}



void FUN_00b4bf50(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48e10;
  return;
}



void FUN_00b4bf70(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48ed0;
  return;
}



void FUN_00b4bf90(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48fd0;
  return;
}



void FUN_00b4bfb0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48f90;
  return;
}



void FUN_00b4bfd0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49050;
  return;
}



void FUN_00b4bff0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b48f50;
  return;
}



void FUN_00b4c010(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49010;
  return;
}



void FUN_00b4c030(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  
  if (param_2 < 0x8c3c) {
    if (param_2 == 0x8c3b) {
      *param_1 = FUN_00a85a60;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    if (param_2 == 0x1406) {
      *param_1 = FUN_009b6970;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    bVar1 = param_2 == 0x140b;
  }
  else {
    bVar1 = param_2 == 0x8d61;
  }
  if (!bVar1) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_009b6540;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



void FUN_00b4c090(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1406) {
    *param_1 = FUN_00b477f0;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c0d0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1402) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c100(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1403) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c130(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1404) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c160(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c190(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1400) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85860;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c1c0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1406) {
    *param_1 = FUN_00b47930;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c200(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1402) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c230(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1403) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c260(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1404) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85b60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c290(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85b60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c2c0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1400) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c2f0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b6470;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (param_2 != 0x8368) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c330(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x8368) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b6110;
  return;
}



void FUN_00b4c350(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 0x1406) {
    *param_1 = FUN_009b7030;
    return;
  }
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00a85660;
  return;
}



void FUN_00b4c390(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1406) {
    *param_1 = FUN_009b6c90;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b495f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c3d0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1402) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49240;
  return;
}



void FUN_00b4c3f0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1402) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b495f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c420(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1403) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49240;
  return;
}



void FUN_00b4c440(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1403) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b495f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c470(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1403) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b493a0;
  return;
}



void FUN_00b4c490(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1402) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b492f0;
  return;
}



void FUN_00b4c4b0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00a85710;
  return;
}



void FUN_00b4c4d0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b496f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c500(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1404) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49450;
  return;
}



void FUN_00b4c520(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1404) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b496f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c550(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49450;
  return;
}



void FUN_00b4c570(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b496f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c5a0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b7500;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (param_2 != 0x8363) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c5e0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 0x1401) {
    *param_1 = FUN_00b491b0;
    return;
  }
  if (param_2 != 0x8363) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b5cc0;
  return;
}



void FUN_00b4c620(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b7810;
    return;
  }
  if (param_2 != 0x8034) {
    if (param_2 != 0x8368) {
      *param_1 = _guard_check_icall;
      return;
    }
    *param_1 = FUN_009b5ee0;
    return;
  }
  *param_1 = FUN_009b7380;
  return;
}



void FUN_00b4c660(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b7ec0;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (param_2 != 0x8034) {
    *(undefined1 *)(param_1 + 1) = 1;
    if (param_2 != 0x8368) {
      *param_1 = _guard_check_icall;
      return;
    }
    *param_1 = FUN_009b6240;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c6b0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_00a85a60;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x8034) {
    if (param_2 != 0x8368) {
      *param_1 = _guard_check_icall;
      return;
    }
    *param_1 = FUN_009b6470;
    return;
  }
  *param_1 = FUN_009b45c0;
  return;
}



void FUN_00b4c700(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1400) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49090;
  return;
}



void FUN_00b4c720(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1400) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b494f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c750(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49090;
  return;
}



void FUN_00b4c770(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00b494f0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c7a0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1400) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b49120;
  return;
}



void FUN_00b4c7c0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x1401) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_00b491b0;
  return;
}



void FUN_00b4c7e0(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  
  if (param_2 < 0x8c3f) {
    if (param_2 == 0x8c3e) {
      *param_1 = FUN_00a85a60;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    if (param_2 == 0x1406) {
      *param_1 = FUN_009b6f50;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    bVar1 = param_2 == 0x140b;
  }
  else {
    bVar1 = param_2 == 0x8d61;
  }
  if (!bVar1) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_009b6860;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



void FUN_00b4c840(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1406) {
    *param_1 = FUN_00b47a80;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if ((param_2 != 0x140b) && (param_2 != 0x8d61)) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85b60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c880(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1402) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85b60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c8b0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1403) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85b60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c8e0(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1406) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85c60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c910(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1404) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85c60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c940(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1405) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85c60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c970(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b7a40;
    return;
  }
  if (param_2 != 0x8033) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b7690;
  return;
}



void FUN_00b4c9b0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_009b80f0;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (param_2 != 0x8033) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85960;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void FUN_00b4c9f0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0x1401) {
    *param_1 = FUN_00a85a60;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 != 0x8033) {
    *param_1 = _guard_check_icall;
    return;
  }
  *param_1 = FUN_009b46c0;
  return;
}



void FUN_00b4ca30(undefined4 *param_1,int param_2)

{
  if (param_2 != 0x1400) {
    *param_1 = _guard_check_icall;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = FUN_00a85a60;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



undefined4 * FUN_00b4ca60(undefined4 *param_1)

{
  *param_1 = _guard_check_icall;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



undefined4 * __thiscall FUN_00b4d1b0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::base::MRUCacheBase<>::vftable;
  func_0x00b4d080();
  func_0x00b4cce0(param_1 + 1,param_1[1]);
  func_0x008ab812(param_1[1],0xa0);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b4e090(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::Query11::vftable;
  func_0x00a3b570(param_1,uVar2);
  func_0x00b4df70();
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    func_0x009de050();
    func_0x009de050();
    func_0x009de050();
    func_0x008ab812(iVar1,0x38);
  }
  *param_1 = rx::QueryImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00b4e140(int param_1)

{
  int unaff_retaddr;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
