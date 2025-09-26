      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0xdc);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f512c8(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x28) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x184))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -400);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x184) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x184);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51340(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51348(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xd8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xe4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xd8) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0xd8);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51364(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xd8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xe4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xd8) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0xd8);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51380(void)

{
  func_0x008ab391(&DAT_013de470);
  return;
}



void Unwind_00f513c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f513c8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x140) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(unaff_EBP + -0x138);
  *(undefined4 *)(unaff_EBP + -0x140) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0;
  *(undefined4 *)(unaff_EBP + -0x138) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x138);
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
  return;
}



void Unwind_00f513d3(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  uint *unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 4) == 0) {
    return;
  }
  *unaff_EBP = *unaff_EBP & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < (int)unaff_EBP[-0x43])) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x46);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (unaff_EBP[-0x43] != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = (code *)unaff_EBP[-0x43];
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f513ef(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  uint *unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 8) == 0) {
    return;
  }
  *unaff_EBP = *unaff_EBP & 0xfffffff7;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < (int)unaff_EBP[-0x43])) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x46);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (unaff_EBP[-0x43] != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = (code *)unaff_EBP[-0x43];
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f5140b(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  uint *unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 0x10) == 0) {
    return;
  }
  *unaff_EBP = *unaff_EBP & 0xffffffef;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < (int)unaff_EBP[-0x43])) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x46);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (unaff_EBP[-0x43] != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = (code *)unaff_EBP[-0x43];
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51427(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  uint *unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 1) == 0) {
    return;
  }
  *unaff_EBP = *unaff_EBP & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < (int)unaff_EBP[-0x43])) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x46);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (unaff_EBP[-0x43] != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = (code *)unaff_EBP[-0x43];
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51443(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  uint *unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 2) == 0) {
    return;
  }
  *unaff_EBP = *unaff_EBP & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < (int)unaff_EBP[-0x43])) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x46);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (unaff_EBP[-0x43] != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = (code *)unaff_EBP[-0x43];
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f5145f(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  uint *unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 0x20) == 0) {
    return;
  }
  *unaff_EBP = *unaff_EBP & 0xffffffdf;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < (int)unaff_EBP[-0x43])) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x46);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (unaff_EBP[-0x43] != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = (code *)unaff_EBP[-0x43];
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f5147b(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  uint *unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*unaff_EBP & 0x40) == 0) {
    return;
  }
  *unaff_EBP = *unaff_EBP & 0xffffffbf;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < (int)unaff_EBP[-0x43])) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x46);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (unaff_EBP[-0x43] != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = (code *)unaff_EBP[-0x43];
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51497(void)

{
  func_0x008ab391(&DAT_013de460);
  return;
}



void Unwind_00f514e0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + 4) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + 4) = *(uint *)(unaff_EBP + 4) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xd8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xe4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xd8) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0xd8);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51530(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x70);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51538(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x11c))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x128);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x11c) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x11c);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51554(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x11c))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x128);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x11c) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x11c);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f51570(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x11c))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x128);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x11c) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x11c);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f5158c(void)

{
  func_0x008ab391(&DAT_013de468);
  return;
}



void Unwind_00f515d0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xd,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51600(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar3 = angle::Subject::vftable;
  puVar5 = (undefined4 *)puVar3[9];
  puVar1 = puVar5 + puVar3[10];
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  puVar3[10] = 0;
  puVar3[10] = 0;
  if ((undefined4 *)puVar3[9] != puVar3 + 1) {
    func_0x008ab37e((undefined4 *)puVar3[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51608(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar4 = rx::TextureStorage::vftable;
  uVar5 = puVar4[0x12];
  if (0xf < uVar5) {
    iVar3 = puVar4[0xd];
    uStack_8 = uVar5 + 1;
    puStack_c = (undefined *)iVar3;
    if (0xfff < uStack_8) {
      puStack_c = *(undefined **)(iVar3 + -4);
      uStack_8 = uVar5 + 0x24;
      if (0x1f < (iVar3 - (int)puStack_c) - 4U) {
        uStack_8 = 0xa67338;
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_10 = 0xa67316;
    func_0x008ab812();
  }
  puVar4[0x11] = 0;
  puVar4[0x12] = 0xf;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = angle::Subject::vftable;
  puVar6 = (undefined4 *)puVar4[9];
  puVar1 = puVar6 + puVar4[10];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar6 + 4);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  puVar4[10] = 0;
  puVar4[10] = 0;
  if ((undefined4 *)puVar4[9] != puVar4 + 1) {
    func_0x008ab37e((undefined4 *)puVar4[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51610(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x168) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x170);
  *(undefined4 *)(iVar4 + 0x168) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x16c) = 0;
  *(undefined4 *)(iVar4 + 0x170) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x170);
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
  return;
}



void Unwind_00f5161e(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 400);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x28);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = rx::TextureStorage11_2DMultisample::vftable;
      if ((undefined4 *)puVar2[0x167] != (undefined4 *)0x0) {
        pcVar3 = (code *)**(undefined4 **)puVar2[0x167];
        _guard_check_icall(1);
        (*pcVar3)();
      }
      func_0x00a2c410();
      func_0x00a67190();
      func_0x008ab812(puVar2,0x5a8);
    }
    func_0x008ab812(iVar1,0x2c);
  }
  return;
}



void Unwind_00f5162c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x19c);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  return;
}



void Unwind_00f5163a(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x1a4);
  func_0x00a658e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x38);
  return;
}



void Unwind_00f51648(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x1ac);
  func_0x00a65930(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x38);
  return;
}



void Unwind_00f51656(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x1b4,0x14,0x10,FUN_009de630,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51664(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x2f4,0x14,0x10,FUN_009de630,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f516a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f516a8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar4 + 0x574) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x57c);
  *(undefined4 *)(iVar4 + 0x574) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x57c) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x57c);
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
  return;
}



void Unwind_00f516b6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x59c,4,0x10,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f516c4(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar4 + 0x5e0) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x5e8);
  *(undefined4 *)(iVar4 + 0x5e0) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x5e4) = 0;
  *(undefined4 *)(iVar4 + 0x5e8) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x5e8);
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
  return;
}



void Unwind_00f516d2(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0x608);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f516e0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar4 + 0x610) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x618);
  *(undefined4 *)(iVar4 + 0x610) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x614) = 0;
  *(undefined4 *)(iVar4 + 0x618) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x618);
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
  return;
}



void Unwind_00f516ee(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x638,0x10,0x10,thunk_FUN_009de130,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51720(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x4c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51728(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x4c);
  *(undefined4 *)(iVar4 + 0x574) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x57c);
  *(undefined4 *)(iVar4 + 0x574) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x57c) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x57c);
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
  return;
}



void Unwind_00f51736(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x59c,4,0x10,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51744(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x4c);
  *(undefined4 *)(iVar4 + 0x5e0) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x5e8);
  *(undefined4 *)(iVar4 + 0x5e0) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x5e4) = 0;
  *(undefined4 *)(iVar4 + 0x5e8) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x5e8);
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
  return;
}



void Unwind_00f51752(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x4c) + 0x608);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f51760(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x4c);
  *(undefined4 *)(iVar4 + 0x610) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x618);
  *(undefined4 *)(iVar4 + 0x610) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x614) = 0;
  *(undefined4 *)(iVar4 + 0x618) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x618);
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
  return;
}



void Unwind_00f5176e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x638,0x10,0x10,thunk_FUN_009de130,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f517b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f517b8(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x574);
  func_0x00a65980(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f517c6(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x57c) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x584);
  *(undefined4 *)(iVar4 + 0x57c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x580) = 0;
  *(undefined4 *)(iVar4 + 0x584) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x584);
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
  return;
}



void Unwind_00f517d4(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x5a4) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x5ac);
  *(undefined4 *)(iVar4 + 0x5a4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x5a8) = 0;
  *(undefined4 *)(iVar4 + 0x5ac) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x5ac);
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
  return;
}



void Unwind_00f517e2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x5cc,0x10,0x10,thunk_FUN_009de130,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f517f0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x6cc);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x009ccd00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x20);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x20);
  return;
}



void Unwind_00f51820(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51828(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x574) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x57c);
  *(undefined4 *)(iVar4 + 0x574) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x57c) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x57c);
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
  return;
}



void Unwind_00f51836(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x59c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f51870(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51878(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x574) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x57c);
  *(undefined4 *)(iVar4 + 0x574) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x57c) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x57c);
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
  return;
}



void Unwind_00f51886(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x59c);
  func_0x00a65980(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f518c0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f518c8(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x574);
  func_0x00a65880(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x1c);
  return;
}



void Unwind_00f518d6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x57c,4,0x10,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f518e4(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar4 + 0x5bc) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x5c4);
  *(undefined4 *)(iVar4 + 0x5bc) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x5c0) = 0;
  *(undefined4 *)(iVar4 + 0x5c4) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x5c4);
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
  return;
}



void Unwind_00f518f2(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar4 + 0x5e4) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x5ec);
  *(undefined4 *)(iVar4 + 0x5e4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x5e8) = 0;
  *(undefined4 *)(iVar4 + 0x5ec) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x5ec);
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
  return;
}



void Unwind_00f51900(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x60c,0x10,0x10,thunk_FUN_009de130,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51930(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51938(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x574) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x57c);
  *(undefined4 *)(iVar4 + 0x574) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x57c) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x57c);
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
  return;
}



void Unwind_00f51970(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51978(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(iVar4 + 0x574) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x57c);
  *(undefined4 *)(iVar4 + 0x574) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x57c) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x57c);
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
  return;
}



void Unwind_00f51986(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x59c,0x40,6,FUN_00a408c0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51994(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(iVar4 + 0x71c) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x724);
  *(undefined4 *)(iVar4 + 0x71c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x720) = 0;
  *(undefined4 *)(iVar4 + 0x724) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x724);
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
  return;
}



void Unwind_00f519a2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x744,4,6,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f519b0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(iVar4 + 0x760) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x768);
  *(undefined4 *)(iVar4 + 0x760) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x764) = 0;
  *(undefined4 *)(iVar4 + 0x768) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x768);
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
  return;
}



void Unwind_00f519be(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x788,0x10,0x10,thunk_FUN_009de130,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f519f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f519f8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x57c) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x584);
  *(undefined4 *)(iVar4 + 0x57c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x580) = 0;
  *(undefined4 *)(iVar4 + 0x584) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x584);
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
  return;
}



void Unwind_00f51a06(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  
  piVar4 = *(int **)(unaff_EBP + -0x14);
  if (piVar4 == (int *)0x0) {
    return;
  }
  puVar7 = (undefined4 *)*piVar4;
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)piVar4[1];
    for (; puVar7 != puVar1; puVar7 = puVar7 + 4) {
      pcVar2 = *(code **)*puVar7;
      _guard_check_icall(0);
      (*pcVar2)();
    }
    iVar3 = *piVar4;
    uVar6 = piVar4[2] - iVar3 & 0xfffffff0;
    iVar5 = iVar3;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
  }
  return;
}



void Unwind_00f51a0e(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  for (puVar3 = *(undefined4 **)(unaff_EBP + -0x24); puVar3 != puVar1; puVar3 = puVar3 + 4) {
    pcVar2 = *(code **)*puVar3;
    _guard_check_icall(0);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f51a16(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 *puVar8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  piVar7 = (int *)(iVar4 + 0x5a4);
  puVar8 = (undefined4 *)*piVar7;
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(iVar4 + 0x5a8);
    for (; puVar8 != puVar1; puVar8 = puVar8 + 4) {
      pcVar2 = *(code **)*puVar8;
      _guard_check_icall(0);
      (*pcVar2)();
    }
    iVar3 = *piVar7;
    uVar6 = *(int *)(iVar4 + 0x5ac) - iVar3 & 0xfffffff0;
    iVar5 = iVar3;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *piVar7 = 0;
    *(undefined4 *)(iVar4 + 0x5a8) = 0;
    *(undefined4 *)(iVar4 + 0x5ac) = 0;
  }
  return;
}



void Unwind_00f51a50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x74);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f51aa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + 0x67;
  *puVar3 = rx::TextureStorage11::vftable;
  iVar2 = *piVar1;
  func_0x00a659e0(piVar1,*(undefined4 *)(iVar2 + 4),uVar4);
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  puVar3[0x68] = 0;
  uStack_8 = 0;
  func_0x008ab4ad(puVar3 + 0x10d,0x14,0x10,FUN_009de630);
  uStack_8 = 1;
  func_0x008ab4ad(puVar3 + 0xbd,0x14,0x10,FUN_009de630);
  uStack_8 = 2;
  func_0x008ab4ad(puVar3 + 0x6d,0x14,0x10,FUN_009de630);
  func_0x00a65930(puVar3 + 0x6b,*(undefined4 *)(puVar3[0x6b] + 4));
  func_0x008ab812(puVar3[0x6b],0x38);
  func_0x00a658e0(puVar3 + 0x69,*(undefined4 *)(puVar3[0x69] + 4));
  func_0x008ab812(puVar3[0x69],0x38);
  func_0x00a659e0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  func_0x00a670d0();
  func_0x00a2c410();
  func_0x00a672e0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51a58(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x74);
  *(undefined4 *)(iVar4 + 0x574) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x57c);
  *(undefined4 *)(iVar4 + 0x574) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x578) = 0;
  *(undefined4 *)(iVar4 + 0x57c) = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(iVar4 + 0x57c);
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
  return;
}



void FUN_00f51aa0(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f51ac0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x1c);
  }
  return;
}



void Unwind_00f51af0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20);
  }
  return;
}



void Unwind_00f51b20(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined ***)(unaff_EBP + -0x20) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51b50(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x24) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51b80(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x24);
  *(undefined ***)(unaff_EBP + -0x28) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x24);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51bb0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x24) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51be0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x24) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar1 != 0) {
    func_0x00a320a0(iVar1);
  }
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x00a320a0(*(int *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f51c10(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  *(undefined ***)(unaff_EBP + -0x28) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    func_0x00a320a0(iVar1);
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x00a320a0(*(int *)(unaff_EBP + -0x24));
  }
  return;
}



void Unwind_00f51c40(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -100);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x5c) - iVar1 >> 2);
    *(int *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  return;
}



void Unwind_00f51c80(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x38);
  *(undefined ***)(unaff_EBP + -0x40) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x38);
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
  return;
}



void Unwind_00f51c88(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x4c);
  *(undefined ***)(unaff_EBP + -0x54) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x4c);
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
  return;
}



void Unwind_00f51c90(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x38);
  }
  return;
}



void Unwind_00f51c98(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x38);
  }
  return;
}



void Unwind_00f51cd0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x3c);
  *(undefined ***)(unaff_EBP + -0x44) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x3c);
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
  return;
}



void Unwind_00f51cd8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x50);
  *(undefined ***)(unaff_EBP + -0x58) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x50);
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
  return;
}



void Unwind_00f51ce0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x30);
  }
  return;
}



void Unwind_00f51ce8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x30);
  }
  return;
}



void Unwind_00f51d20(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x38);
  *(undefined ***)(unaff_EBP + -0x40) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x38);
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
  return;
}



void Unwind_00f51d28(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x4c);
  *(undefined ***)(unaff_EBP + -0x54) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x4c);
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
  return;
}



void Unwind_00f51d30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x38);
  }
  return;
}



void Unwind_00f51d38(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x38);
  }
  return;
}



void Unwind_00f51d70(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = rx::TextureStorage11_2DMultisample::vftable;
    if ((undefined4 *)puVar1[0x167] != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)puVar1[0x167];
      _guard_check_icall(1);
      (*pcVar2)();
    }
    func_0x00a2c410();
    func_0x00a67190();
    func_0x008ab812(puVar1,0x5a8);
  }
  return;
}



void Unwind_00f51d78(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x2c);
  return;
}



void Unwind_00f51db0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x30);
  *(undefined ***)(unaff_EBP + 0x2c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + 0x30);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51db8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x44),0x94);
  return;
}



uint Unwind_00f51dca(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + 0x50) & 1;
  if (uVar7 != 0) {
    *(uint *)(unaff_EBP + 0x50) = *(uint *)(unaff_EBP + 0x50) & 0xfffffffe;
    piVar5 = *(int **)(unaff_EBP + -0x44);
    *(undefined ***)(unaff_EBP + -0x4c) = rx::Resource11Base<>::vftable;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        puVar1 = (uint *)(piVar5 + 2);
        uVar3 = *puVar1;
        uVar7 = *puVar1;
        *puVar1 = uVar3 - 1;
        UNLOCK();
        if (uVar3 - 1 == 0) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    piVar5 = *(int **)(unaff_EBP + -0x44);
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        uVar7 = (*pcVar6)();
        LOCK();
        piVar2 = piVar5 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    return uVar7;
  }
  return 0;
}



uint Unwind_00f51de3(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + 0x50) & 2;
  if (uVar7 != 0) {
    *(uint *)(unaff_EBP + 0x50) = *(uint *)(unaff_EBP + 0x50) & 0xfffffffd;
    piVar5 = *(int **)(unaff_EBP + -0x30);
    *(undefined ***)(unaff_EBP + -0x38) = rx::Resource11Base<>::vftable;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        puVar1 = (uint *)(piVar5 + 2);
        uVar3 = *puVar1;
        uVar7 = *puVar1;
        *puVar1 = uVar3 - 1;
        UNLOCK();
        if (uVar3 - 1 == 0) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    piVar5 = *(int **)(unaff_EBP + -0x30);
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        uVar7 = (*pcVar6)();
        LOCK();
        piVar2 = piVar5 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    return uVar7;
  }
  return 0;
}



void Unwind_00f51dfc(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x30);
  *(undefined ***)(unaff_EBP + 0x2c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + 0x30);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51e04(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x44),0x94);
  return;
}



void Unwind_00f51e16(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)unaff_EBP[1];
  *unaff_EBP = rx::Resource11Base<>::vftable;
  unaff_EBP[1] = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = (int *)unaff_EBP[1];
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51e1e(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x44),0x94);
  return;
}



void Unwind_00f51e60(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x44);
  *(undefined ***)(unaff_EBP + -0x4c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x44);
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
  return;
}



void Unwind_00f51e68(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x58);
  *(undefined ***)(unaff_EBP + -0x60) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x58);
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
  return;
}



void Unwind_00f51e70(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x34);
  *(undefined ***)(unaff_EBP + -0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x34);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51e78(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x94);
  return;
}



void Unwind_00f51e8a(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x34);
  *(undefined ***)(unaff_EBP + -0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x34);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51e92(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x94);
  return;
}



void Unwind_00f51ed0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  *(undefined ***)(unaff_EBP + -0x30) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51ed8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x94);
  return;
}



void Unwind_00f51eea(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  *(undefined ***)(unaff_EBP + -0x40) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51ef2(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x94);
  return;
}



void Unwind_00f51f30(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined ***)(unaff_EBP + -0x20) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
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
  return;
}



void Unwind_00f51f38(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  *(undefined ***)(unaff_EBP + -0x34) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x2c);
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
  return;
}



void Unwind_00f51f40(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x18);
  *(undefined ***)(unaff_EBP + 0x14) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + 0x18);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51f48(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x2c),0x94);
  return;
}



void Unwind_00f51f5a(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x18);
  *(undefined ***)(unaff_EBP + 0x14) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + 0x18);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51f62(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x2c),0x94);
  return;
}



void Unwind_00f51fa0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x38);
  *(undefined ***)(unaff_EBP + -0x3c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51fa8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x94);
  return;
}



void Unwind_00f51fba(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x38);
  *(undefined ***)(unaff_EBP + -0x3c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51fc2(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x94);
  return;
}



void Unwind_00f52000(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  *(undefined ***)(unaff_EBP + 0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x3c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52008(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x34),0x94);
  return;
}



uint Unwind_00f5201a(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + 0x58) & 1;
  if (uVar7 != 0) {
    *(uint *)(unaff_EBP + 0x58) = *(uint *)(unaff_EBP + 0x58) & 0xfffffffe;
    piVar5 = *(int **)(unaff_EBP + 0xc);
    *(undefined ***)(unaff_EBP + 4) = rx::Resource11Base<>::vftable;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        puVar1 = (uint *)(piVar5 + 2);
        uVar3 = *puVar1;
        uVar7 = *puVar1;
        *puVar1 = uVar3 - 1;
        UNLOCK();
        if (uVar3 - 1 == 0) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    piVar5 = *(int **)(unaff_EBP + 0xc);
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        uVar7 = (*pcVar6)();
        LOCK();
        piVar2 = piVar5 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    return uVar7;
  }
  return 0;
}



uint Unwind_00f52033(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + 0x58) & 2;
  if (uVar7 != 0) {
    *(uint *)(unaff_EBP + 0x58) = *(uint *)(unaff_EBP + 0x58) & 0xfffffffd;
    piVar5 = *(int **)(unaff_EBP + -0x40);
    *(undefined ***)(unaff_EBP + -0x48) = rx::Resource11Base<>::vftable;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        puVar1 = (uint *)(piVar5 + 2);
        uVar3 = *puVar1;
        uVar7 = *puVar1;
        *puVar1 = uVar3 - 1;
        UNLOCK();
        if (uVar3 - 1 == 0) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    piVar5 = *(int **)(unaff_EBP + -0x40);
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar3 = *puVar1;
      uVar7 = *puVar1;
      *puVar1 = uVar3 - 1;
      UNLOCK();
      if (uVar3 - 1 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        uVar7 = (*pcVar6)();
        LOCK();
        piVar2 = piVar5 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          uVar7 = (*pcVar6)();
        }
      }
    }
    return uVar7;
  }
  return 0;
}



void Unwind_00f5204c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  *(undefined ***)(unaff_EBP + -0x34) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x2c);
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
  return;
}



void Unwind_00f52054(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined ***)(unaff_EBP + -0x20) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
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
  return;
}



void Unwind_00f5205c(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  *(undefined ***)(unaff_EBP + 0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x3c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52064(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x34),0x94);
  return;
}



void Unwind_00f52076(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  *(undefined ***)(unaff_EBP + 0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x3c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f5207e(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x34),0x94);
  return;
}



void Unwind_00f520e0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    uStack_8 = 0;
    if (puVar1[1] != 0) {
      if (puVar1[2] != 0) {
        func_0x00a32410(*puVar1,puVar1[1],uVar3);
        puVar1[2] = 0;
      }
      pcVar2 = *(code **)(*(int *)puVar1[1] + 8);
      _guard_check_icall((int *)puVar1[1]);
      (*pcVar2)();
      puVar1[1] = 0;
    }
    func_0x008ab812(puVar1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52110(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uStack_8 = 0;
    if (puVar1[1] != 0) {
      if (puVar1[2] != 0) {
        func_0x00a32410(*puVar1,puVar1[1],uVar3);
        puVar1[2] = 0;
      }
      pcVar2 = *(code **)(*(int *)puVar1[1] + 8);
      _guard_check_icall((int *)puVar1[1]);
      (*pcVar2)();
      puVar1[1] = 0;
    }
    func_0x008ab812(puVar1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52140(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x20);
  }
  return;
}



void Unwind_00f52170(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x3c);
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x44);
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
  return;
}



void Unwind_00f521b0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::VertexBuffer::vftable;
  return;
}



void Unwind_00f521e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar1 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar1 = std::ios_base::vftable;
    func_0x00e706cb(puVar1,uVar2,puVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f521f9(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd4) + 4) + -0x18 + unaff_EBP + -0xbc) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0xd4) + 4);
  *(int *)(iVar1 + -0x1c + unaff_EBP + -0xbc) = iVar1 + -0x18;
  return;
}



void Unwind_00f52204(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd4) + 4) + -0x20 + unaff_EBP + -0xb4) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd4) + 4);
  *(int *)(iVar2 + -0x24 + unaff_EBP + -0xb4) = iVar2 + -0x20;
  iVar2 = unaff_EBP + -0xbc;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc4) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xc4) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd4) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0xd4) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f5220f(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd4) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd4) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f5221a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x24);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f52260(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::NativeWindowD3D::vftable;
  return;
}



void Unwind_00f522b0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x53) != '\0') {
    pcVar1 = *(code **)(unaff_EBP + -0x58);
    _guard_check_icall(uVar2);
    (*pcVar1)();
  }
  if (*(HMODULE *)(unaff_EBP + -0x4c) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(unaff_EBP + -0x4c));
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  if (*(HMODULE *)(unaff_EBP + -0x50) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(unaff_EBP + -0x50));
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f522b8(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x40);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x40) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f522f0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x37) != '\0') {
    pcVar1 = *(code **)(unaff_EBP + -0x3c);
    _guard_check_icall(uVar2);
    (*pcVar1)();
  }
  if (*(HMODULE *)(unaff_EBP + -0x30) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  if (*(HMODULE *)(unaff_EBP + -0x34) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(unaff_EBP + -0x34));
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52330(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x60);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x60) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52338(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x54);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x54) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52340(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x5c) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52348(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -100);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -100) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52350(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x50);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x50) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52390(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x20) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f523d0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x00a76c80(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                    *(undefined4 *)(unaff_EBP + -0x2c));
    iVar1 = *(int *)(unaff_EBP + -0x28);
    uVar4 = *(int *)(unaff_EBP + -0x24) * 0x1c;
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
  }
  return;
}



void Unwind_00f52400(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f45930;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(iVar4 + 0x10);
  *(undefined ***)(iVar4 + 8) = rx::VertexBufferInterface::vftable;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x18);
      _guard_check_icall(1,uVar5);
      (*pcVar3)();
    }
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f5240b(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar2 = *(int *)(unaff_EBP + -0x24);
  piVar5 = (int *)(iVar2 + 0x20);
  if (*piVar5 != 0) {
    func_0x00a76c80(*piVar5,*(undefined4 *)(iVar2 + 0x24),piVar5);
    iVar1 = *piVar5;
    uVar4 = ((*(int *)(iVar2 + 0x28) - iVar1) / 0x1c) * 0x1c;
    iVar6 = iVar1;
    if (0xfff < uVar4) {
      iVar6 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar4);
    *piVar5 = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  return;
}



void Unwind_00f52440(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar3 = (int *)FUN_004b5b20(uVar2);
  pcVar1 = *(code **)(*piVar3 + 0x14);
  _guard_check_icall();
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52480(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar3 = (int *)FUN_004b5b20(uVar2);
  pcVar1 = *(code **)(*piVar3 + 0x14);
  _guard_check_icall();
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f524b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar1 = rx::ContextD3D::vftable;
  puVar1[9] = rx::d3d::Context::vftable;
  *puVar1 = rx::GLImplFactory::vftable;
  return;
}



void Unwind_00f524b8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x2c,0x58,4,FUN_008c2480,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f524f0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x9c);
  return;
}



void Unwind_00f52502(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x1d8);
  return;
}



void Unwind_00f52514(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x58);
  return;
}



void Unwind_00f52550(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf0) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f5255b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f525a0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x10);
  return;
}



void Unwind_00f525af(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x10) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x10);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f525e0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x78);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x78) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52620(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x20) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52628(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x10) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52660(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -100);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -100) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f526a0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x20) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f526a8(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x10) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f526e0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x34);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x34) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f526e8(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x38);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x38) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52720(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x14) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52728(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x10) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52760(void)

{
  int unaff_EBP;
  
  func_0x008c07a0(unaff_EBP + -0x40);
  return;
}



void Unwind_00f527a0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    func_0x008c07a0(*(int *)(unaff_EBP + 8) + 8);
    return;
  }
  return;
}



void Unwind_00f527b9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x14);
  }
  return;
}



void Unwind_00f527c1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x14);
  }
  return;
}



void Unwind_00f527f0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x68);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x68) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f527f8(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x6c);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x6c) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52830(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x4c);
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x54);
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
  return;
}



void Unwind_00f52870(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x44);
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x4c);
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
  return;
}



void Unwind_00f528b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
  *puVar1 = rx::RenderTarget9::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f528f0(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar3 = rx::SwapChainD3D::vftable;
  piVar1 = (int *)puVar3[4];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar4);
    (*pcVar2)();
    puVar3[4] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f528f8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3c);
  *puVar1 = rx::RenderTarget9::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f52903(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x4c);
  *puVar1 = rx::RenderTarget9::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f52930(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffd;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x50);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar2 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar2 = std::ios_base::vftable;
    func_0x00e706cb(puVar2,uVar1,puVar2);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f5294c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x30);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00f52957(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecd183;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -200) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -200) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -200) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -200) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52962(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f529a0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x108))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x114);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x108) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x108);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f529bc(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x108))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x114);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x108) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x108);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f529d8(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x1b0))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x1bc);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x1b0) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0x1b0);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f52a30(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar3 = angle::Subject::vftable;
  puVar5 = (undefined4 *)puVar3[9];
  puVar1 = puVar5 + puVar3[10];
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  puVar3[10] = 0;
  puVar3[10] = 0;
  if ((undefined4 *)puVar3[9] != puVar3 + 1) {
    func_0x008ab37e((undefined4 *)puVar3[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52a38(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar4 = rx::TextureStorage::vftable;
  uVar5 = puVar4[0x12];
  if (0xf < uVar5) {
    iVar3 = puVar4[0xd];
    uStack_8 = uVar5 + 1;
    puStack_c = (undefined *)iVar3;
    if (0xfff < uStack_8) {
      puStack_c = *(undefined **)(iVar3 + -4);
      uStack_8 = uVar5 + 0x24;
      if (0x1f < (iVar3 - (int)puStack_c) - 4U) {
        uStack_8 = 0xa67338;
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_10 = 0xa67316;
    func_0x008ab812();
  }
  puVar4[0x11] = 0;
  puVar4[0x12] = 0xf;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = angle::Subject::vftable;
  puVar6 = (undefined4 *)puVar4[9];
  puVar1 = puVar6 + puVar4[10];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar6 + 4);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  puVar4[10] = 0;
  puVar4[10] = 0;
  if ((undefined4 *)puVar4[9] != puVar4 + 1) {
    func_0x008ab37e((undefined4 *)puVar4[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52a70(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar4 = rx::TextureStorage9::vftable;
  *puVar4 = rx::TextureStorage::vftable;
  uVar5 = puVar4[0x12];
  if (0xf < uVar5) {
    iVar3 = puVar4[0xd];
    uStack_8 = uVar5 + 1;
    puStack_c = (undefined *)iVar3;
    if (0xfff < uStack_8) {
      puStack_c = *(undefined **)(iVar3 + -4);
      uStack_8 = uVar5 + 0x24;
      if (0x1f < (iVar3 - (int)puStack_c) - 4U) {
        uStack_8 = 0xa67338;
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_10 = 0xa67316;
    func_0x008ab812();
  }
  puVar4[0x11] = 0;
  puVar4[0x12] = 0xf;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = angle::Subject::vftable;
  puVar6 = (undefined4 *)puVar4[9];
  puVar1 = puVar6 + puVar4[10];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar6 + 4);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  puVar4[10] = 0;
  puVar4[10] = 0;
  if ((undefined4 *)puVar4[9] != puVar4 + 1) {
    func_0x008ab37e((undefined4 *)puVar4[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52a78(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x74);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x7c) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(int *)(iVar2 + 0x74) = 0;
    *(undefined4 *)(iVar2 + 0x78) = 0;
    *(undefined4 *)(iVar2 + 0x7c) = 0;
  }
  return;
}



void Unwind_00f52ab0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x3c);
  *puVar4 = rx::TextureStorage9::vftable;
  *puVar4 = rx::TextureStorage::vftable;
  uVar5 = puVar4[0x12];
  if (0xf < uVar5) {
    iVar3 = puVar4[0xd];
    uStack_8 = uVar5 + 1;
    puStack_c = (undefined *)iVar3;
    if (0xfff < uStack_8) {
      puStack_c = *(undefined **)(iVar3 + -4);
      uStack_8 = uVar5 + 0x24;
      if (0x1f < (iVar3 - (int)puStack_c) - 4U) {
        uStack_8 = 0xa67338;
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_10 = 0xa67316;
    func_0x008ab812();
  }
  puVar4[0x11] = 0;
  puVar4[0x12] = 0xf;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = angle::Subject::vftable;
  puVar6 = (undefined4 *)puVar4[9];
  puVar1 = puVar6 + puVar4[10];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar6 + 4);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  puVar4[10] = 0;
  puVar4[10] = 0;
  if ((undefined4 *)puVar4[9] != puVar4 + 1) {
    func_0x008ab37e((undefined4 *)puVar4[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52ab8(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  iVar1 = *(int *)(iVar2 + 0x74);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x7c) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(int *)(iVar2 + 0x74) = 0;
    *(undefined4 *)(iVar2 + 0x78) = 0;
    *(undefined4 *)(iVar2 + 0x7c) = 0;
  }
  return;
}



void Unwind_00f52af0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
  *puVar4 = rx::TextureStorage9::vftable;
  *puVar4 = rx::TextureStorage::vftable;
  uVar5 = puVar4[0x12];
  if (0xf < uVar5) {
    iVar3 = puVar4[0xd];
    uStack_8 = uVar5 + 1;
    puStack_c = (undefined *)iVar3;
    if (0xfff < uStack_8) {
      puStack_c = *(undefined **)(iVar3 + -4);
      uStack_8 = uVar5 + 0x24;
      if (0x1f < (iVar3 - (int)puStack_c) - 4U) {
        uStack_8 = 0xa67338;
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_10 = 0xa67316;
    func_0x008ab812();
  }
  puVar4[0x11] = 0;
  puVar4[0x12] = 0xf;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = angle::Subject::vftable;
  puVar6 = (undefined4 *)puVar4[9];
  puVar1 = puVar6 + puVar4[10];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar6 + 4);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  puVar4[10] = 0;
  puVar4[10] = 0;
  if ((undefined4 *)puVar4[9] != puVar4 + 1) {
    func_0x008ab37e((undefined4 *)puVar4[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52b20(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar4 = rx::TextureStorage9::vftable;
  *puVar4 = rx::TextureStorage::vftable;
  uVar5 = puVar4[0x12];
  if (0xf < uVar5) {
    iVar3 = puVar4[0xd];
    uStack_8 = uVar5 + 1;
    puStack_c = (undefined *)iVar3;
    if (0xfff < uStack_8) {
      puStack_c = *(undefined **)(iVar3 + -4);
      uStack_8 = uVar5 + 0x24;
      if (0x1f < (iVar3 - (int)puStack_c) - 4U) {
        uStack_8 = 0xa67338;
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iStack_10 = 0xa67316;
    func_0x008ab812();
  }
  puVar4[0x11] = 0;
  puVar4[0x12] = 0xf;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = angle::Subject::vftable;
  puVar6 = (undefined4 *)puVar4[9];
  puVar1 = puVar6 + puVar4[10];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar6 + 4);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  puVar4[10] = 0;
  puVar4[10] = 0;
  if ((undefined4 *)puVar4[9] != puVar4 + 1) {
    func_0x008ab37e((undefined4 *)puVar4[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52b50(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x14) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52b58(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x10) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52b90(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x14) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52b98(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x10) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52bd0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x10) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52c00(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x14) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52c08(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x10) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f52c40(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x24),0x2c);
  return;
}



void Unwind_00f52c80(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x2c);
  return;
}



void Unwind_00f52cc0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar3 = *(int **)(unaff_EBP + 8);
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x00992640(piVar3,piVar4[2]);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x24);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x24);
  return;
}



void Unwind_00f52d00(void)

{
  func_0x008ab391(&DAT_013de540);
  return;
}



void Unwind_00f52d0c(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x14);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
