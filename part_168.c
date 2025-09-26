  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  iVar1 = *(int *)(iVar2 + 0x650);
  *(undefined ***)(iVar2 + 0x64c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x650) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x650) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x650));
  }
  return;
}



void Unwind_00f4f740(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  iVar1 = *(int *)(iVar2 + 0x660);
  *(undefined ***)(iVar2 + 0x65c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x660) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x660) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x660));
  }
  return;
}



void Unwind_00f4f7b0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2dc);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x2d4) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_00956e42;
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x2dc) = 0;
    *(undefined4 *)(unaff_EBP + -0x2d8) = 0;
    *(undefined4 *)(unaff_EBP + -0x2d4) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + -0x2e8);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x2e0) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_00956e42;
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x2e8) = 0;
    *(undefined4 *)(unaff_EBP + -0x2e4) = 0;
    *(undefined4 *)(unaff_EBP + -0x2e0) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + -0x2f4);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x2ec) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_00956e42:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x2f4) = 0;
    *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
    *(undefined4 *)(unaff_EBP + -0x2ec) = 0;
  }
  return;
}



void Unwind_00f4f7f0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x28);
  while (iVar2 != 0) {
    *(int *)(unaff_EBP + -0x28) = iVar2 + -1;
    *(undefined4 *)(unaff_EBP + -0x128 + (iVar2 + -1) * 4) = 0;
    iVar2 = *(int *)(unaff_EBP + -0x28);
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f4f7fb(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x1c4))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x1d0);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x1c4) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x1c4);
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



void Unwind_00f4f840(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x14);
  }
  return;
}



void Unwind_00f4f890(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x84);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x7c) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  return;
}



void Unwind_00f4f89b(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x54) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x54) = *(uint *)(unaff_EBP + -0x54) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x198))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0x1a4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x198) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x198);
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



void Unwind_00f4f8f0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x28) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f4f920(void)

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
  *puVar3 = rx::FramebufferAttachmentObjectImpl::vftable;
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



void Unwind_00f4f928(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 0x34) = angle::ObserverInterface::vftable;
  return;
}



void Unwind_00f4f960(void)

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
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar3 = rx::FramebufferAttachmentObjectImpl::vftable;
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



void Unwind_00f4f968(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x14) + 0x34) = angle::ObserverInterface::vftable;
  return;
}



void Unwind_00f4f973(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = rx::TextureD3D::vftable;
  puVar1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180(uVar2);
  func_0x00953200();
  func_0x00a5c060();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f97b(void)

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
  func_0x008ab4ad(iVar1 + 0x5c,4,0x10,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f9b0(void)

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
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar3 = rx::FramebufferAttachmentObjectImpl::vftable;
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



void Unwind_00f4f9b8(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x14) + 0x34) = angle::ObserverInterface::vftable;
  return;
}



void Unwind_00f4f9c3(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = rx::TextureD3D::vftable;
  puVar1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180(uVar2);
  func_0x00953200();
  func_0x00a5c060();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4f9cb(void)

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
  func_0x008ab4ad(iVar1 + 0x58,4,0x10,FUN_0046c770,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fa00(void)

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
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x18);
  *puVar3 = rx::FramebufferAttachmentObjectImpl::vftable;
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



void Unwind_00f4fa08(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x18) + 0x34) = angle::ObserverInterface::vftable;
  return;
}



void Unwind_00f4fa13(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = rx::TextureD3D::vftable;
  puVar1[0xd] = rx::TextureD3D::vftable;
  FUN_00953180(uVar2);
  func_0x00953200();
  func_0x00a5c060();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fa1b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x58,0x40,6,FUN_00a408c0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fab0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fae0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fb10(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fb40(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fb70(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fba0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x18),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fbd0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x24),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fc00(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*(undefined4 *)(unaff_EBP + -0x14),uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fc30(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  func_0x00a4b220(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x28);
  return;
}



void Unwind_00f4fc3b(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xc);
  func_0x00a4b220(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x28);
  return;
}



void Unwind_00f4fc46(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0x1c);
  *(undefined ***)(iVar2 + 0x18) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x1c) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x1c));
  }
  return;
}



void Unwind_00f4fc51(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0x2c);
  *(undefined ***)(iVar2 + 0x28) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  if (iVar1 != 0) {
    func_0x00a32010(iVar1);
  }
  if (*(int *)(iVar2 + 0x2c) != 0) {
    func_0x00a32010(*(int *)(iVar2 + 0x2c));
  }
  return;
}



void Unwind_00f4fc5c(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0x3c);
  *(undefined ***)(iVar2 + 0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  if (iVar1 != 0) {
    func_0x00a32010(iVar1);
  }
  if (*(int *)(iVar2 + 0x3c) != 0) {
    func_0x00a32010(*(int *)(iVar2 + 0x3c));
  }
  return;
}



void Unwind_00f4fc67(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0x4c);
  *(undefined ***)(iVar2 + 0x48) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (*(int *)(iVar2 + 0x4c) != 0) {
    func_0x00a31f80(*(int *)(iVar2 + 0x4c));
  }
  return;
}



void Unwind_00f4fc72(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0x5c);
  *(undefined ***)(iVar2 + 0x58) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (*(int *)(iVar2 + 0x5c) != 0) {
    func_0x00a31f80(*(int *)(iVar2 + 0x5c));
  }
  return;
}



void Unwind_00f4fc7d(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(iVar4 + 0x6c);
  *(undefined ***)(iVar4 + 0x68) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  if (piVar2 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar2 != 0) {
      if (piVar2[1] != 0) {
        piVar1 = (int *)(piVar2[1] + 0x10);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        func_0x009db1a0(0,0,5,uVar5);
      }
      pcVar3 = *(code **)(*(int *)*piVar2 + 8);
      _guard_check_icall((int *)*piVar2);
      (*pcVar3)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar2,8);
  }
  piVar2 = *(int **)(iVar4 + 0x6c);
  if (piVar2 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar2 != 0) {
      if (piVar2[1] != 0) {
        LOCK();
        piVar1 = (int *)(piVar2[1] + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        func_0x009db1a0(0,0,5,uVar5);
      }
      pcVar3 = *(code **)(*(int *)*piVar2 + 8);
      _guard_check_icall((int *)*piVar2);
      (*pcVar3)();
    }
    func_0x008ab812(piVar2,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fc88(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x78) = rx::d3d11::LazyResource<6>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x80);
  *(undefined ***)(iVar3 + 0x7c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x80);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
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



void Unwind_00f4fc93(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0xa0) = rx::d3d11::LazyResource<16>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0xa8);
  *(undefined ***)(iVar3 + 0xa4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0xa8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0xa8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f4fca1(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0xc0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 200);
  *(undefined ***)(iVar3 + 0xc4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 200) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 200);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f4fcaf(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0xe0) = rx::d3d11::LazyResource<6>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0xe8);
  *(undefined ***)(iVar3 + 0xe4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0xe8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
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



void Unwind_00f4fcbd(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x108) = rx::d3d11::LazyResource<16>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x110);
  *(undefined ***)(iVar3 + 0x10c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x110) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x110);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f4fccb(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x128) = rx::d3d11::LazyResource<5>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x130);
  *(undefined ***)(iVar3 + 300) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x130) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x130);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
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



void Unwind_00f4fcd9(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x148) = rx::d3d11::LazyResource<0>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x150);
  *(undefined ***)(iVar3 + 0x14c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x150) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x150);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0,*piVar1,uVar4);
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



void Unwind_00f4fce7(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0x26c);
  *(undefined ***)(iVar2 + 0x268) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x26c) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x26c) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x26c));
  }
  return;
}



void Unwind_00f4fcf5(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x278) = rx::d3d11::LazyResource<16>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x280);
  *(undefined ***)(iVar3 + 0x27c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x280) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x280);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f4fd03(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x298) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x2a0);
  *(undefined ***)(iVar3 + 0x29c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x2a0) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x2a0);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f4fd11(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x2b8) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x2c0);
  *(undefined ***)(iVar3 + 700) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x2c0) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x2c0);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f4fd1f(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined ***)(iVar3 + 0x2d8) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x2e0);
  *(undefined ***)(iVar3 + 0x2dc) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x2e0) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x2e0);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f4fd2d(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x2fc);
  *(undefined ***)(iVar3 + 0x2f8) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x2fc) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x2fc);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar4);
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



void Unwind_00f4fd3b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar4 + 0x308) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x310);
  *(undefined4 *)(iVar4 + 0x308) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x30c) = 0;
  *(undefined4 *)(iVar4 + 0x310) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x310);
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



void Unwind_00f4fd49(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x334);
  *(undefined ***)(iVar3 + 0x330) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x334) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x334);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
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



void Unwind_00f4fd57(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar4 + 0x340) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x348);
  *(undefined4 *)(iVar4 + 0x340) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x344) = 0;
  *(undefined4 *)(iVar4 + 0x348) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x348);
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



void Unwind_00f4fda0(void)

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
        func_0x00a32410(7,*piVar1,uVar3);
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
        func_0x00a32410(7,*piVar1,uVar3);
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



void Unwind_00f4fda8(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x48);
  *(undefined ***)(unaff_EBP + -0x4c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x48);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar3);
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



void Unwind_00f4fdb0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x28);
  }
  return;
}



void Unwind_00f4fdb8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x28);
  }
  return;
}



void Unwind_00f4fdf0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -0x40) = rx::Resource11Base<>::vftable;
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



void Unwind_00f4fe20(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(unaff_EBP + -0x54);
  *(undefined4 *)(unaff_EBP + -0x5c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
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



void Unwind_00f4fe80(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fe8b(void)

{
  func_0x008ab391(&DAT_013de440);
  return;
}



void Unwind_00f4fef0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *puVar5;
  int iStack_10;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar5 = rx::BufferD3D::vftable;
  if ((undefined4 *)puVar5[0x12] != (undefined4 *)0x0) {
    iStack_10 = 1;
    pcVar2 = (code *)**(undefined4 **)puVar5[0x12];
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar5[0x12] = 0;
  func_0x00b459d0();
  *puVar5 = rx::BufferImpl::vftable;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = angle::Subject::vftable;
  puVar4 = (undefined4 *)puVar5[9];
  puVar1 = puVar4 + puVar5[10];
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar4 + 4);
    _guard_check_icall(uVar3,unaff_EDI,unaff_ESI,unaff_EBX,puVar5,(int *)*puVar4);
    (*pcVar2)();
  }
  puVar5[10] = 0;
  puVar5[10] = 0;
  if ((undefined4 *)puVar5[9] != puVar5 + 1) {
    func_0x008ab37e((undefined4 *)puVar5[9]);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4fef8(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xfc);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x00992520(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x1c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x1c);
  return;
}



void Unwind_00f4ff30(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::Buffer11::BufferStorage::vftable;
  return;
}



void Unwind_00f4ff38(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x18);
  *(undefined ***)(iVar2 + 0x14) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x18));
  }
  return;
}



void Unwind_00f4ff43(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x28);
  func_0x00a508c0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x24);
  return;
}



void Unwind_00f4ff70(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x28);
  }
  return;
}



void Unwind_00f4ff78(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x28);
  }
  return;
}



void Unwind_00f4ffb0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x24);
  }
  return;
}



void Unwind_00f4ffb8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x24);
  }
  return;
}



void Unwind_00f4fff0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x74);
  return;
}



void Unwind_00f4ffff(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::Buffer11::BufferStorage::vftable;
  return;
}



void Unwind_00f50007(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x14) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x1c);
  *(undefined4 *)(iVar4 + 0x14) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x1c);
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



void Unwind_00f50012(void)

{
  void *_Memory;
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  _Memory = *(void **)(iVar1 + 0x40);
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  return;
}



void Unwind_00f5001d(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x44);
  if (iVar1 != 0) {
    func_0x008ab812(iVar1,0x28);
  }
  return;
}



void Unwind_00f50028(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x34);
  return;
}



void Unwind_00f50037(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::Buffer11::BufferStorage::vftable;
  return;
}



void Unwind_00f5003f(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x38);
  return;
}



void Unwind_00f5004e(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x48);
  return;
}



void Unwind_00f5005d(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x14);
  piVar1 = puVar4 + 10;
  *puVar4 = rx::Buffer11::NativeStorage::vftable;
  iVar3 = *piVar1;
  func_0x00a508c0(piVar1,*(undefined4 *)(iVar3 + 4));
  *(int *)(iVar3 + 4) = iVar3;
  piVar2 = puVar4 + 0xc;
  *(int *)iVar3 = iVar3;
  *(int *)(iVar3 + 8) = iVar3;
  puVar4[0xb] = 0;
  iVar3 = *piVar2;
  func_0x00a50870(piVar2,*(undefined4 *)(iVar3 + 4));
  *(int *)(iVar3 + 4) = iVar3;
  *(int *)iVar3 = iVar3;
  *(int *)(iVar3 + 8) = iVar3;
  puVar4[0xd] = 0;
  func_0x00a50870(piVar2,*(undefined4 *)(*piVar2 + 4));
  func_0x008ab812(*piVar2,0x28);
  func_0x00a508c0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x24);
  FUN_00a31c20();
  *puVar4 = rx::Buffer11::BufferStorage::vftable;
  return;
}



void Unwind_00f50065(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x38);
  return;
}



void Unwind_00f500a0(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x3c) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x3c));
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f500e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x1c);
  }
  return;
}



void Unwind_00f500e8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x38);
  return;
}



void Unwind_00f50120(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x34);
  return;
}



void Unwind_00f5012f(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::Buffer11::BufferStorage::vftable;
  return;
}



void Unwind_00f50160(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x28);
  }
  return;
}



void Unwind_00f50168(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x2c),0x28);
  }
  return;
}



void Unwind_00f501a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x24);
  }
  return;
}



void Unwind_00f501a8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x24);
  }
  return;
}



void Unwind_00f501e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x40),0x20);
  }
  return;
}



void Unwind_00f501e8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0x48);
  return;
}



void Unwind_00f501f7(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x30);
  piVar1 = puVar4 + 10;
  *puVar4 = rx::Buffer11::NativeStorage::vftable;
  iVar3 = *piVar1;
  func_0x00a508c0(piVar1,*(undefined4 *)(iVar3 + 4));
  *(int *)(iVar3 + 4) = iVar3;
  piVar2 = puVar4 + 0xc;
  *(int *)iVar3 = iVar3;
  *(int *)(iVar3 + 8) = iVar3;
  puVar4[0xb] = 0;
  iVar3 = *piVar2;
  func_0x00a50870(piVar2,*(undefined4 *)(iVar3 + 4));
  *(int *)(iVar3 + 4) = iVar3;
  *(int *)iVar3 = iVar3;
  *(int *)(iVar3 + 8) = iVar3;
  puVar4[0xd] = 0;
  func_0x00a50870(piVar2,*(undefined4 *)(*piVar2 + 4));
  func_0x008ab812(*piVar2,0x28);
  func_0x00a508c0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x24);
  FUN_00a31c20();
  *puVar4 = rx::Buffer11::BufferStorage::vftable;
  return;
}



void Unwind_00f501ff(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x50);
  *(undefined ***)(unaff_EBP + -0x54) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    func_0x00a31ec0(*(int *)(unaff_EBP + -0x50));
  }
  return;
}



void Unwind_00f50240(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  *(undefined ***)(unaff_EBP + -0x50) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x00a31ec0(*(int *)(unaff_EBP + -0x4c));
  }
  return;
}



void Unwind_00f50280(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  *(undefined ***)(iVar2 + 8) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    func_0x00a31f80(*(int *)(iVar2 + 0xc));
  }
  return;
}



void Unwind_00f5028b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x1c);
  *(undefined ***)(iVar2 + 0x18) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (*(int *)(iVar2 + 0x1c) != 0) {
    func_0x00a31f80(*(int *)(iVar2 + 0x1c));
  }
  return;
}



void Unwind_00f50296(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f4f770;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x388,0x20,8,FUN_00a4b990,uVar2);
  uStack_8 = 1;
  func_0x008ab4ad(iVar1 + 0x288,0x20,8,FUN_00a4b990);
  uStack_8 = 2;
  func_0x008ab4ad(iVar1 + 0x188,0x20,8,FUN_00a4b990);
  *(undefined ***)(iVar1 + 0x168) = rx::d3d11::LazyResource<7>::vftable;
  func_0x009ddf70();
  *(undefined ***)(iVar1 + 0x148) = rx::d3d11::LazyResource<5>::vftable;
  func_0x009dde90();
  *(undefined ***)(iVar1 + 0x128) = rx::d3d11::LazyResource<16>::vftable;
  func_0x009de550();
  *(undefined ***)(iVar1 + 0x108) = rx::d3d11::LazyResource<16>::vftable;
  func_0x009de550();
  *(undefined ***)(iVar1 + 0xe8) = rx::d3d11::LazyResource<7>::vftable;
  func_0x009ddf70();
  *(undefined ***)(iVar1 + 200) = rx::d3d11::LazyResource<16>::vftable;
  func_0x009de550();
  func_0x00a2c260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f502a4(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x48c);
  *(undefined ***)(iVar2 + 0x488) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x48c) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x48c) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x48c));
  }
  return;
}



void Unwind_00f502e0(void)

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
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)puVar3[1];
  *puVar3 = rx::Resource11Base<>::vftable;
  puVar3[1] = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = (int *)puVar3[1];
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
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



void Unwind_00f502e8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x10) = rx::d3d11::LazyResource<16>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x18);
  *(undefined ***)(iVar3 + 0x14) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x18);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f502f3(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x30) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x38);
  *(undefined ***)(iVar3 + 0x34) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x38);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f502fe(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x50) = rx::d3d11::LazyResource<16>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x58);
  *(undefined ***)(iVar3 + 0x54) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x58);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f50309(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x70) = rx::d3d11::LazyResource<16>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x78);
  *(undefined ***)(iVar3 + 0x74) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x78);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f50314(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x90) = rx::d3d11::LazyResource<5>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x98);
  *(undefined ***)(iVar3 + 0x94) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x98) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x98);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
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



void Unwind_00f50322(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0xb0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0xb8);
  *(undefined ***)(iVar3 + 0xb4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0xb8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0xb8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50330(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0xd0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0xd8);
  *(undefined ***)(iVar3 + 0xd4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0xd8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0xd8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f5033e(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0xf0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0xf8);
  *(undefined ***)(iVar3 + 0xf4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0xf8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0xf8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f5034c(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x110) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x118);
  *(undefined ***)(iVar3 + 0x114) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x118) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x118);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f5035a(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x130) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x138);
  *(undefined ***)(iVar3 + 0x134) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x138) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x138);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50368(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x150) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x158);
  *(undefined ***)(iVar3 + 0x154) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x158) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x158);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50376(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x170) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x178);
  *(undefined ***)(iVar3 + 0x174) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x178) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x178);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50384(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 400) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x198);
  *(undefined ***)(iVar3 + 0x194) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x198) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x198);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50392(void)

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
  func_0x008ab4ad(iVar1 + 0xd0,0x20,8,FUN_00a4b990,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f503a0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x1d0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x1d8);
  *(undefined ***)(iVar3 + 0x1d4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x1d8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x1d8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f503ae(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x1f0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x1f8);
  *(undefined ***)(iVar3 + 500) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x1f8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x1f8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f503bc(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x210) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x218);
  *(undefined ***)(iVar3 + 0x214) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x218) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x218);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f503ca(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x230) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x238);
  *(undefined ***)(iVar3 + 0x234) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x238) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x238);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f503d8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x250) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 600);
  *(undefined ***)(iVar3 + 0x254) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 600) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 600);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f503e6(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x270) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x278);
  *(undefined ***)(iVar3 + 0x274) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x278) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x278);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f503f4(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x290) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x298);
  *(undefined ***)(iVar3 + 0x294) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x298) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x298);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50402(void)

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
  func_0x008ab4ad(iVar1 + 0x1d0,0x20,8,FUN_00a4b990,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50410(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x2d0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x2d8);
  *(undefined ***)(iVar3 + 0x2d4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x2d8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x2d8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f5041e(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x2f0) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x2f8);
  *(undefined ***)(iVar3 + 0x2f4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x2f8) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x2f8);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f5042c(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x310) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x318);
  *(undefined ***)(iVar3 + 0x314) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x318) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x318);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f5043a(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x330) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x338);
  *(undefined ***)(iVar3 + 0x334) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x338) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x338);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50448(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x350) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x358);
  *(undefined ***)(iVar3 + 0x354) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x358) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x358);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50456(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x370) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x378);
  *(undefined ***)(iVar3 + 0x374) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x378) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x378);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50464(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(iVar3 + 0x390) = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x398);
  *(undefined ***)(iVar3 + 0x394) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x398) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x398);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f504a0(void)

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
  
  if ((*(uint *)(unaff_EBP + -300) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -300) = *(uint *)(unaff_EBP + -300) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xac))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xb8);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xac) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xac);
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



void Unwind_00f50500(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50508(void)

{
  func_0x008ab391(&DAT_013de44c);
  return;
}



void Unwind_00f50550(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar1 = rx::ContextD3D::vftable;
  puVar1[9] = rx::d3d::Context::vftable;
  *puVar1 = rx::GLImplFactory::vftable;
  return;
}



void Unwind_00f50558(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 0x28) = rx::MultisampleTextureInitializer::vftable;
  return;
}



void Unwind_00f50563(void)

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
  func_0x008ab4ad(iVar1 + 0x30,0x58,4,FUN_008c2480,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50590(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x11c);
  return;
}



void Unwind_00f505d0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),8);
  return;
}



void Unwind_00f505df(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),8);
  return;
}



void Unwind_00f50610(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0xc);
  return;
}



void Unwind_00f50650(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x530);
  return;
}



void Unwind_00f50690(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x40);
  return;
}



void Unwind_00f506d0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x18);
  return;
}



void Unwind_00f50710(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x9c);
  return;
}



void Unwind_00f50722(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x1d8);
  return;
}



void Unwind_00f50734(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x98);
  return;
}



void Unwind_00f50746(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0xd8);
  return;
}



void Unwind_00f50758(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x58);
  return;
}



void Unwind_00f50767(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x58);
  return;
}



void Unwind_00f50776(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x5c);
  return;
}



void Unwind_00f50785(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x5c);
  return;
}



void Unwind_00f507c0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x88);
  return;
}



void Unwind_00f50800(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf4) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf4) + 4);
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



void Unwind_00f5080b(void)

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



void Unwind_00f50850(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x88) != 0) {
    if (*(char *)(unaff_EBP + -0x84) != '\0') {
      func_0x00986d20(0,uVar1);
    }
    if (*(char *)(unaff_EBP + -0x83) != '\0') {
      func_0x00986cd0(0);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50890(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    if (*(char *)(unaff_EBP + -0x48) != '\0') {
      func_0x00986d20(0,uVar1);
    }
    if (*(char *)(unaff_EBP + -0x47) != '\0') {
      func_0x00986cd0(0);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f508d0(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (piVar1 != (int *)0x0) {
    pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f508d8(void)

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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xe4))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xf0);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xe4) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xe4);
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



void Unwind_00f508f4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x28);
    if (0xf < *(uint *)(unaff_EBP + -0x14)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f50940(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    pcVar2 = (code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f50948(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xe8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xf4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xe8) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xe8);
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



void Unwind_00f50964(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x28);
    if (0xf < *(uint *)(unaff_EBP + -0x14)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f5097d(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x30) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffb;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xe8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xf4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xe8) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xe8);
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



void Unwind_00f50999(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x28);
    if (0xf < *(uint *)(unaff_EBP + -0x14)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f509b2(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x10) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffef;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xe8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xf4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xe8) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xe8);
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



void Unwind_00f509ce(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x28);
    if (0xf < *(uint *)(unaff_EBP + -0x14)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f50a20(void)

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
  *puVar3 = rx::FramebufferAttachmentObjectImpl::vftable;
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



void Unwind_00f50a28(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar1 + 0x54) = 0;
  if (*(int *)(iVar1 + 0x50) != iVar1 + 0x40) {
    func_0x008ab37e(*(int *)(iVar1 + 0x50));
  }
  return;
}



void Unwind_00f50a33(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x60) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x68);
  *(undefined4 *)(iVar4 + 0x60) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 100) = 0;
  *(undefined4 *)(iVar4 + 0x68) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x68);
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



void Unwind_00f50a60(void)

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



void Unwind_00f50a68(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x28);
  *(undefined ***)(unaff_EBP + 0x20) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x24) = 0;
  *(undefined4 *)(unaff_EBP + 0x28) = 0;
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
  piVar2 = *(int **)(unaff_EBP + 0x28);
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



void Unwind_00f50a70(void)

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
  piVar1 = *(int **)(unaff_EBP + 0x54);
  *(undefined ***)(unaff_EBP + 0x50) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x54) = 0;
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
  piVar1 = *(int **)(unaff_EBP + 0x54);
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



void Unwind_00f50a78(void)

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



void Unwind_00f50a80(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x34),0x94);
  return;
}



void Unwind_00f50ac0(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar2 = rx::FramebufferD3D::vftable;
  FUN_008e8b00();
  iVar1 = puVar2[4];
  if (iVar1 != 0) {
    uVar5 = puVar2[6] - iVar1 & 0xfffffffc;
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
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
  }
  *puVar2 = rx::FramebufferImpl::vftable;
  return;
}



void Unwind_00f50af0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::ImageD3D::vftable;
  return;
}



void Unwind_00f50af8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x20) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x28);
  *(undefined4 *)(iVar4 + 0x20) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(undefined4 *)(iVar4 + 0x28) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x28);
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



void Unwind_00f50b50(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 4);
  if (iVar2 != 0) {
    piVar3 = *(int **)(*(int *)(iVar1 + 0x18) + 0x1fd0);
    pcVar4 = *(code **)(*piVar3 + 0x3c);
    _guard_check_icall(piVar3,iVar2,*(undefined4 *)(iVar1 + 0x48),uVar5);
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50b58(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x30);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 4);
  if (iVar2 != 0) {
    piVar3 = *(int **)(*(int *)(iVar1 + 0x18) + 0x1fd0);
    pcVar4 = *(code **)(*piVar3 + 0x3c);
    _guard_check_icall(piVar3,iVar2,*(undefined4 *)(iVar1 + 0x48),uVar5);
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50b90(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x10);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 4);
  if (iVar2 != 0) {
    piVar3 = *(int **)(*(int *)(iVar1 + 0x18) + 0x1fd0);
    pcVar4 = *(code **)(*piVar3 + 0x3c);
    _guard_check_icall(piVar3,iVar2,*(undefined4 *)(iVar1 + 0x48),uVar5);
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50b98(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 4);
  if (iVar2 != 0) {
    piVar3 = *(int **)(*(int *)(iVar1 + 0x18) + 0x1fd0);
    pcVar4 = *(code **)(*piVar3 + 0x3c);
    _guard_check_icall(piVar3,iVar2,*(undefined4 *)(iVar1 + 0x48),uVar5);
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50bd0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x34) = rx::Resource11Base<>::vftable;
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



void Unwind_00f50bd8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x44);
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
  piVar2 = *(int **)(unaff_EBP + 0x3c);
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



void Unwind_00f50c10(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x68);
  *(undefined ***)(unaff_EBP + -0x6c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xe,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x68);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xe,*piVar1,uVar3);
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



void Unwind_00f50c50(void)

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



void Unwind_00f50c80(void)

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



void Unwind_00f50cb0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::IndexBuffer::vftable;
  return;
}



void Unwind_00f50d10(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
  func_0x00a5f940(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x24);
  return;
}



void Unwind_00f50d1b(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x14);
  *(undefined ***)(iVar3 + 0x10) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f50d26(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x24);
  *(undefined ***)(iVar3 + 0x20) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x24);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
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



void Unwind_00f50d31(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x34);
  *(undefined ***)(iVar2 + 0x30) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x34) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x34));
  }
  return;
}



void Unwind_00f50d3c(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x78);
  *(undefined ***)(iVar2 + 0x74) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (*(int *)(iVar2 + 0x78) != 0) {
    func_0x00a31f80(*(int *)(iVar2 + 0x78));
  }
  return;
}



void Unwind_00f50d70(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x44);
  *(undefined ***)(unaff_EBP + -0x48) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar3);
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



void Unwind_00f50d78(void)

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
        func_0x00a32410(7,*piVar1,uVar3);
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
        func_0x00a32410(7,*piVar1,uVar3);
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



void Unwind_00f50d80(void)

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
        func_0x00a32410(7,*piVar1,uVar3);
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
        func_0x00a32410(7,*piVar1,uVar3);
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



void Unwind_00f50db0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar1 = rx::RenderTarget11::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f50de0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  *puVar1 = rx::RenderTarget11::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f50de8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(iVar4 + 0x24) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x2c);
  *(undefined4 *)(iVar4 + 0x24) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x2c);
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



void Unwind_00f50df3(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x50);
  *(undefined ***)(iVar3 + 0x4c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x50);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
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



void Unwind_00f50dfe(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x60);
  *(undefined ***)(iVar3 + 0x5c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x60);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar4);
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



void Unwind_00f50e09(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = *(int **)(iVar4 + 0x74);
  *(undefined ***)(iVar4 + 0x6c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x70) = 0;
  *(undefined4 *)(iVar4 + 0x74) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x74);
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



void Unwind_00f50e14(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = *(int **)(iVar4 + 0x88);
  *(undefined ***)(iVar4 + 0x80) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x88);
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



void Unwind_00f50e50(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  *puVar1 = rx::RenderTarget11::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f50e58(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(iVar4 + 0x24) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x2c);
  *(undefined4 *)(iVar4 + 0x24) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x2c);
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



void Unwind_00f50e63(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x50);
  *(undefined ***)(iVar3 + 0x4c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x50);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
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



void Unwind_00f50e6e(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x60);
  *(undefined ***)(iVar3 + 0x5c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x60);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar4);
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



void Unwind_00f50e79(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = *(int **)(iVar4 + 0x74);
  *(undefined ***)(iVar4 + 0x6c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x70) = 0;
  *(undefined4 *)(iVar4 + 0x74) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x74);
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



void Unwind_00f50e84(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = *(int **)(iVar4 + 0x88);
  *(undefined ***)(iVar4 + 0x80) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x88);
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



void Unwind_00f50ec0(void)

{
  void *_Memory;
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  _Memory = *(void **)(iVar1 + 8);
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}



void Unwind_00f50ef0(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar2 = rx::ShaderExecutableD3D::vftable;
  uVar6 = puVar2[9];
  if (0xf < uVar6) {
    iVar1 = puVar2[4];
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_00a61112;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  puVar2[8] = 0;
  puVar2[9] = 0xf;
  *(undefined1 *)(puVar2 + 4) = 0;
  iVar1 = puVar2[1];
  if (iVar1 != 0) {
    uVar6 = puVar2[3] - iVar1;
    iVar4 = iVar1;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_00a61112:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar6);
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  return;
}



void Unwind_00f50ef8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x2c);
  *(undefined ***)(iVar3 + 0x28) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x2c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f50f03(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x3c);
  *(undefined ***)(iVar3 + 0x38) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x3c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f50f0e(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x4c);
  *(undefined ***)(iVar3 + 0x48) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x4c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
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



void Unwind_00f50f19(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x5c);
  *(undefined ***)(iVar3 + 0x58) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x5c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(5,*piVar1,uVar4);
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



void Unwind_00f50f50(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar1 = rx::UniformStorageD3D::vftable;
  if ((void *)puVar1[2] != (void *)0x0) {
    free((void *)puVar1[2]);
    puVar1[2] = 0;
  }
  return;
}



void Unwind_00f50f80(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50f8b(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50f96(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xf4);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x144) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x144) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x144) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x144) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50fa1(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50fac(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f50ff0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f50ff8(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xb8))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xc4);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xb8) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xb8);
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



void Unwind_00f51040(void)

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



void Unwind_00f51048(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xbc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xbc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51080(void)

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



void Unwind_00f51088(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x44) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x4c);
  *(undefined4 *)(iVar4 + 0x44) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x4c);
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



void Unwind_00f51093(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x70);
  *(undefined ***)(iVar3 + 0x6c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x70);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
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



void Unwind_00f5109e(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  piVar2 = *(int **)(iVar4 + 0x84);
  *(undefined ***)(iVar4 + 0x7c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x80) = 0;
  *(undefined4 *)(iVar4 + 0x84) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x84);
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



void Unwind_00f510a9(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x94) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x9c);
  *(undefined4 *)(iVar4 + 0x94) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x98) = 0;
  *(undefined4 *)(iVar4 + 0x9c) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x9c);
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



void Unwind_00f510b7(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0xc0);
  *(undefined ***)(iVar3 + 0xbc) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0xc0) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0xc0);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar4);
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



void Unwind_00f510c5(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  piVar2 = *(int **)(iVar4 + 0xd4);
  *(undefined ***)(iVar4 + 0xcc) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0xd0) = 0;
  *(undefined4 *)(iVar4 + 0xd4) = 0;
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
  piVar2 = *(int **)(iVar4 + 0xd4);
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



void Unwind_00f510d3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0xe4) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0xec);
  *(undefined4 *)(iVar4 + 0xe4) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0xe8) = 0;
  *(undefined4 *)(iVar4 + 0xec) = 0;
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
  piVar2 = *(int **)(iVar4 + 0xec);
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



void Unwind_00f510e1(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x10c) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x114);
  *(undefined4 *)(iVar4 + 0x10c) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x110) = 0;
  *(undefined4 *)(iVar4 + 0x114) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x114);
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



void Unwind_00f510ef(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x138);
  *(undefined ***)(iVar3 + 0x134) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x138) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x138);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(4,*piVar1,uVar4);
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



void Unwind_00f510fd(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  piVar2 = *(int **)(iVar4 + 0x14c);
  *(undefined ***)(iVar4 + 0x144) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x148) = 0;
  *(undefined4 *)(iVar4 + 0x14c) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x14c);
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



void Unwind_00f5110b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x15c);
  *(undefined ***)(iVar2 + 0x158) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x15c) = 0;
  if (iVar1 != 0) {
    func_0x00a31ec0(iVar1);
  }
  if (*(int *)(iVar2 + 0x15c) != 0) {
    func_0x00a31ec0(*(int *)(iVar2 + 0x15c));
  }
  return;
}



void Unwind_00f51119(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x16c);
  *(undefined ***)(iVar2 + 0x168) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x16c) = 0;
  if (iVar1 != 0) {
    func_0x00a32010(iVar1);
  }
  if (*(int *)(iVar2 + 0x16c) != 0) {
    func_0x00a32010(*(int *)(iVar2 + 0x16c));
  }
  return;
}



void Unwind_00f51127(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x17c);
  *(undefined ***)(iVar3 + 0x178) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x17c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x17c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(6,*piVar1,uVar4);
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



void Unwind_00f51135(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x18c);
  *(undefined ***)(iVar3 + 0x188) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x18c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x18c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0x10,*piVar1,uVar4);
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



void Unwind_00f51143(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0x19c);
  *(undefined ***)(iVar3 + 0x198) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x19c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x19c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar4);
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



void Unwind_00f51151(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x1ac);
  *(undefined ***)(iVar2 + 0x1a8) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar2 + 0x1ac) = 0;
  if (iVar1 != 0) {
    func_0x00a31f80(iVar1);
  }
  if (*(int *)(iVar2 + 0x1ac) != 0) {
    func_0x00a31f80(*(int *)(iVar2 + 0x1ac));
  }
  return;
}



void Unwind_00f5115f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1b8);
  *puVar1 = rx::RenderTarget11::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f5116d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1cc);
  *puVar1 = rx::RenderTarget11::vftable;
  *puVar1 = rx::FramebufferAttachmentRenderTarget::vftable;
  return;
}



void Unwind_00f511a0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *unaff_EBP;
  
  *unaff_EBP = rx::TextureHelper11::vftable;
  piVar2 = (int *)unaff_EBP[2];
  *unaff_EBP = rx::Resource11Base<>::vftable;
  unaff_EBP[1] = 0;
  unaff_EBP[2] = 0;
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
  piVar2 = (int *)unaff_EBP[2];
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



void Unwind_00f511a8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x30);
  *(undefined ***)(unaff_EBP + 0x28) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + 0x2c) = 0;
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
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
  piVar2 = *(int **)(unaff_EBP + 0x30);
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



void Unwind_00f511e0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x14c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x19c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x19c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x19c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x19c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f511eb(void)

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



void Unwind_00f511f3(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xac);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xfc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xfc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xfc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xfc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f511fe(void)

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



void Unwind_00f51240(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x24);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)puVar1[1] != '\0')) {
    func_0x009b90e0(*puVar1,0x45,(char *)puVar1[1],puVar1[2],0,0,0,0,0,0,0,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f51248(void)

{
  func_0x008ab391(&DAT_013de478);
  return;
}



void Unwind_00f51290(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x28) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xdc))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xe8);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xdc) != 4) {
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



void Unwind_00f512ac(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x28) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffd;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xdc))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xe8);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xdc) != 4) {
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
