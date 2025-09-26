      free(*(void **)(unaff_EBP + -0x68));
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    iStack_8._0_1_ = 2;
    if (*(void **)(unaff_EBP + -0x70) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x70));
    }
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    iStack_8._0_1_ = 1;
    if (*(void **)(unaff_EBP + -0x78) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x78));
    }
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (*(void **)(unaff_EBP + -0x80) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x80));
    }
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    iStack_8 = 0xffffffff;
    func_0x00e6ffe4();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f46a3b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x4c);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f46a43(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if (iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    free(*(void **)(iVar1 + 0x10));
    free(*(void **)(iVar1 + 0x14));
  }
  return;
}



void Unwind_00f46a80(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  if (iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    free(*(void **)(iVar1 + 0x10));
    free(*(void **)(iVar1 + 0x14));
  }
  return;
}



void Unwind_00f46ac0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x4c) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f46ac8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f46ad0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x4c) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f46ad8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f46b10(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x38);
  return;
}



void Unwind_00f46b50(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x1c) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f46b80(void)

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



void Unwind_00f46b88(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x84);
  return;
}



void Unwind_00f46bc0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x5c);
  return;
}



void Unwind_00f46c00(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x24);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + 0x2c) - iVar1 >> 2);
    *(int *)(unaff_EBP + 0x24) = 0;
    *(undefined4 *)(unaff_EBP + 0x28) = 0;
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
  }
  return;
}



void Unwind_00f46c08(void)

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



void Unwind_00f46c13(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 4);
  if (0xf < *(uint *)(unaff_EBP + 0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x18));
  }
  *(undefined4 *)(unaff_EBP + 0x14) = 0;
  *(undefined4 *)(unaff_EBP + 0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f46c1b(void)

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



void Unwind_00f46c26(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x34),0xb50);
  return;
}



void Unwind_00f46c38(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x34);
  *puVar1 = rx::FunctionsGL::vftable;
  piVar2 = puVar1 + 0x2cf;
  if (*piVar2 != 0) {
    func_0x004e7c10(*piVar2,puVar1[0x2d0],piVar2);
    func_0x004c7ff0(*piVar2,(puVar1[0x2d1] - *piVar2 >> 3) * -0x55555555);
    *piVar2 = 0;
    puVar1[0x2d0] = 0;
    puVar1[0x2d1] = 0;
  }
  return;
}



void Unwind_00f46c40(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + 0x20) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + 0x20);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f46c48(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x34),0x1c18);
  return;
}



void Unwind_00f46c5a(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + 0x34) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + 0x34);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f46c90(void)

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



void Unwind_00f46c98(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x90);
  return;
}



void Unwind_00f46caa(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x48);
  return;
}



void Unwind_00f46ce0(void)

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



void Unwind_00f46ce8(void)

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



void Unwind_00f46d20(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xb4))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xc0);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xb4) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xb4);
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



void Unwind_00f46d70(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f46db0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x50) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f46db8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f46df0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + 0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + 0x14) = *(uint *)(unaff_EBP + 0x14) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + 8);
    func_0x009afc20(piVar1,*(undefined4 *)(*piVar1 + 4));
    func_0x008ab812(*piVar1,0xbc);
    return;
  }
  return;
}



void Unwind_00f46e09(void)

{
  return;
}



void Unwind_00f46e50(void)

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



void Unwind_00f46e80(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x1c) - iVar1 & 0xfffffff0;
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
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f46eb0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46ebb(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46ec6(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46ed1(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x100);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x150) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x150) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x150) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x150) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f10(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f1b(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0xa8),0xb8);
  return;
}



void Unwind_00f46f30(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)(unaff_EBP + -0x214);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x1c4);
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)puVar1) = *(int *)(*piVar2 + 4) + -0x50;
  func_0x009bc600(uVar3);
  *(undefined ***)(*(int *)(*piVar2 + 4) + -0x50 + (int)puVar1) = std::basic_ostream<>::vftable;
  *(int *)(*(int *)(*piVar2 + 4) + -0x54 + (int)puVar1) = *(int *)(*piVar2 + 4) + -8;
  uStack_8 = 0;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f3b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x68);
  if (7 < *(uint *)(unaff_EBP + -0x54)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x54));
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f46f43(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f4e(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f59(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f64(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f6f(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f7a(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46f85(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f46f8d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xb4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xb4) = *(uint *)(unaff_EBP + -0xb4) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f46fac(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xb4) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xb4) = *(uint *)(unaff_EBP + -0xb4) & 0xfffffffb;
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



void Unwind_00f46fcb(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46fd6(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46fe1(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46fec(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x2c) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f46ff4(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46fff(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4700a(void)

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
  
  if ((*(uint *)(unaff_EBP + -0xb4) & 8) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0xb4) = *(uint *)(unaff_EBP + -0xb4) & 0xfffffff7;
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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0x2b0))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -700);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0x2b0) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0x2b0);
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



void Unwind_00f4702c(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47037(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f4703f(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x25c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2ac) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2ac) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x2ac) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2ac) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4704a(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x14c) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14c) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47090(void)

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



void Unwind_00f4709b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x30);
  if (0xf < *(uint *)(unaff_EBP + 0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x44));
  }
  *(undefined4 *)(unaff_EBP + 0x40) = 0;
  *(undefined4 *)(unaff_EBP + 0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f470e0(void)

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
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xcc))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xd8);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xcc) != 4) {
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
    pcVar8 = *(code **)(unaff_EBP + -0xcc);
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



void Unwind_00f470fc(void)

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



void Unwind_00f47150(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4715b(void)

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



void Unwind_00f47163(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x38),0x1c);
  }
  return;
}



void Unwind_00f471a0(void)

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



void Unwind_00f471ab(void)

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



void Unwind_00f471f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (7 < (uint)puVar1[5]) {
      func_0x005895e0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f47230(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((unaff_EBP[1] & 2U) != 0) {
    unaff_EBP[1] = unaff_EBP[1] & 0xfffffffd;
    puVar2 = (undefined4 *)(*unaff_EBP + 0x50);
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



void Unwind_00f4724c(void)

{
  int *piVar1;
  undefined4 *unaff_EBP;
  
  piVar1 = (int *)*unaff_EBP;
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00f47257(void)

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



void Unwind_00f47262(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0xc);
  if (0xf < *(uint *)(unaff_EBP + 0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x20));
  }
  *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  *(undefined4 *)(unaff_EBP + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f472a0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((unaff_EBP[1] & 2U) != 0) {
    unaff_EBP[1] = unaff_EBP[1] & 0xfffffffd;
    puVar2 = (undefined4 *)(*unaff_EBP + 0x50);
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



void Unwind_00f472bc(void)

{
  int *piVar1;
  undefined4 *unaff_EBP;
  
  piVar1 = (int *)*unaff_EBP;
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00f472c7(void)

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



void Unwind_00f472d2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 8);
  if (0xf < *(uint *)(unaff_EBP + 0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x1c));
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47310(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47318(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f47323(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x30);
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x44));
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f47350(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 8);
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x1c));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f4735b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f47366(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x38);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x40) - iVar1 >> 2);
    *(int *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  return;
}



void Unwind_00f47371(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  piVar4 = (int *)(iVar1 + 0x48);
  iVar5 = *piVar4;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar1 + 0x4c);
    for (; iVar5 != iVar6; iVar5 = iVar5 + 0xb4) {
      FUN_009c38e0();
    }
    iVar5 = *piVar4;
    uVar3 = ((*(int *)(iVar1 + 0x50) - iVar5) / 0xb4) * 0xb4;
    iVar6 = iVar5;
    if (0xfff < uVar3) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar3);
    *piVar4 = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
  return;
}



void Unwind_00f4737c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x54);
  if (0xf < *(uint *)(iVar1 + 0x68)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x68));
  }
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f473b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffe;
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



void Unwind_00f473c9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f47410(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47418(void)

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



void Unwind_00f47420(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  if (0xf < *(uint *)(unaff_EBP + -0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47460(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  uVar6 = *(uint *)(iVar2 + 0x88);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x74);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0xf;
  *(undefined1 *)(iVar2 + 0x74) = 0;
  uVar6 = *(uint *)(iVar2 + 0x70);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x5c);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0xf;
  *(undefined1 *)(iVar2 + 0x5c) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(iVar2 + 0x40);
  if (iVar1 != 0) {
    uVar6 = *(int *)(iVar2 + 0x48) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar6);
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  uVar6 = *(uint *)(iVar2 + 0x3c);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x28);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0xf;
  *(undefined1 *)(iVar2 + 0x28) = 0;
  uVar6 = *(uint *)(iVar2 + 0x24);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x10);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0xf;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  return;
}



void Unwind_00f4746b(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = gl::ActiveVariable::vftable;
  return;
}



void Unwind_00f474a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar2 = gl::ShaderVariableBuffer::vftable;
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
  *puVar2 = gl::ActiveVariable::vftable;
  return;
}



void Unwind_00f474a8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x30));
  }
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f474e0(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  uVar6 = *(uint *)(iVar2 + 0x88);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x74);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0xf;
  *(undefined1 *)(iVar2 + 0x74) = 0;
  uVar6 = *(uint *)(iVar2 + 0x70);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x5c);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0xf;
  *(undefined1 *)(iVar2 + 0x5c) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(iVar2 + 0x40);
  if (iVar1 != 0) {
    uVar6 = *(int *)(iVar2 + 0x48) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar6);
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  uVar6 = *(uint *)(iVar2 + 0x3c);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x28);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0xf;
  *(undefined1 *)(iVar2 + 0x28) = 0;
  uVar6 = *(uint *)(iVar2 + 0x24);
  if (0xf < uVar6) {
    iVar1 = *(int *)(iVar2 + 0x10);
    uVar5 = uVar6 + 1;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0xf;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  return;
}



void Unwind_00f474eb(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = gl::ActiveVariable::vftable;
  return;
}



void Unwind_00f474f3(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xd8);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0xe0) - iVar1 >> 2);
    *(int *)(iVar2 + 0xd8) = 0;
    *(undefined4 *)(iVar2 + 0xdc) = 0;
    *(undefined4 *)(iVar2 + 0xe0) = 0;
  }
  return;
}



void Unwind_00f47530(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = gl::ActiveVariable::vftable;
  return;
}



void Unwind_00f47560(void)

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



void Unwind_00f4756b(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x28));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47573(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x30) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f475a0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc0) + 4);
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



void Unwind_00f475d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x130);
  if (0xf < *(uint *)(unaff_EBP + -0x11c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x11c));
  }
  *(undefined4 *)(unaff_EBP + -0x120) = 0;
  *(undefined4 *)(unaff_EBP + -0x11c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47610(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c);
  }
  return;
}



void Unwind_00f47618(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c);
  }
  return;
}



void Unwind_00f47650(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
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



// WARNING: Possible PIC construction at 0x009c9856: Changing call to branch
// WARNING: Removing unreachable block (ram,0x009c985b)

void Unwind_00f47680(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + 0x6c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + 0x58);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + 0x68) = 0;
  *(undefined4 *)(unaff_EBP + 0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x58) = 0;
  uVar1 = *(uint *)(unaff_EBP + 0x54);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + 0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + 0x50) = 0;
  *(undefined4 *)(unaff_EBP + 0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x40) = 0;
  return;
}



// WARNING: Possible PIC construction at 0x009c9856: Changing call to branch
// WARNING: Removing unreachable block (ram,0x009c985b)

void Unwind_00f476c0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + 0x6c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + 0x58);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + 0x68) = 0;
  *(undefined4 *)(unaff_EBP + 0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x58) = 0;
  uVar1 = *(uint *)(unaff_EBP + 0x54);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + 0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + 0x50) = 0;
  *(undefined4 *)(unaff_EBP + 0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x40) = 0;
  return;
}



// WARNING: Possible PIC construction at 0x009c9856: Changing call to branch
// WARNING: Removing unreachable block (ram,0x009c985b)

void Unwind_00f476c8(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + 0x6c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + 0x58);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + 0x68) = 0;
  *(undefined4 *)(unaff_EBP + 0x6c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x58) = 0;
  uVar1 = *(uint *)(unaff_EBP + 0x54);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + 0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + 0x50) = 0;
  *(undefined4 *)(unaff_EBP + 0x54) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x40) = 0;
  return;
}



void Unwind_00f47700(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x28,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47750(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x80);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x6c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x7c) = 0;
  *(undefined4 *)(unaff_EBP + 0x80) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x6c) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x68);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x54);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 100) = 0;
  *(undefined4 *)(unaff_EBP + 0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x54) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0x38);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x40) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
    *(undefined4 *)(unaff_EBP + 0x3c) = 0;
    *(undefined4 *)(unaff_EBP + 0x40) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0x34);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x20);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + 0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x1c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + 8) = 0;
  return;
}



void Unwind_00f47758(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x134);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x120);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x130) = 0;
  *(undefined4 *)(unaff_EBP + 0x134) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x120) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x11c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x108);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x118) = 0;
  *(undefined4 *)(unaff_EBP + 0x11c) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x108) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0xec);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0xf4) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0xec) = 0;
    *(undefined4 *)(unaff_EBP + 0xf0) = 0;
    *(undefined4 *)(unaff_EBP + 0xf4) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0xe8);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0xd4);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0xe4) = 0;
  *(undefined4 *)(unaff_EBP + 0xe8) = 0xf;
  *(undefined1 *)(unaff_EBP + 0xd4) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0xd0);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0xbc);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0xcc) = 0;
  *(undefined4 *)(unaff_EBP + 0xd0) = 0xf;
  *(undefined1 *)(unaff_EBP + 0xbc) = 0;
  return;
}



void Unwind_00f477a0(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
  piVar2 = *(int **)(unaff_EBP + 8);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    uVar4 = ((piVar2[2] - iVar1) / 0xc) * 0xc;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return;
}



void Unwind_00f47800(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(unaff_EBP + 0xb4,8,6,FUN_007d5e80,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4780b(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + 0x80);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x6c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x7c) = 0;
  *(undefined4 *)(unaff_EBP + 0x80) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x6c) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x68);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x54);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 100) = 0;
  *(undefined4 *)(unaff_EBP + 0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x54) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + 0x38);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + 0x40) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
    *(undefined4 *)(unaff_EBP + 0x3c) = 0;
    *(undefined4 *)(unaff_EBP + 0x40) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + 0x34);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 0x20);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x30) = 0;
  *(undefined4 *)(unaff_EBP + 0x34) = 0xf;
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  uVar5 = *(uint *)(unaff_EBP + 0x1c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + 8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)(unaff_EBP + 8) = 0;
  return;
}



void Unwind_00f47850(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0xcc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0xc4) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0xcc) = 0;
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  }
  return;
}



void Unwind_00f4785b(void)

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



void Unwind_00f47863(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -100);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x78);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x78) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x7c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x90);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  return;
}



void Unwind_00f4786e(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x2c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x44);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x58);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f478b0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x4c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x60);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x60) = 0;
  uVar1 = *(uint *)(unaff_EBP + -100);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x78);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x78) = 0;
  return;
}



void Unwind_00f478b8(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x14);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x28);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x2c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f478c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x98);
  if (0xf < *(uint *)(unaff_EBP + -0x84)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x84));
  }
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f478cb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x98);
  if (0xf < *(uint *)(unaff_EBP + -0x84)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x84));
  }
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47910(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x14);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x28);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x2c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f47918(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x4c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x60);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_009c9949;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x60) = 0;
  uVar1 = *(uint *)(unaff_EBP + -100);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x78);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_009c9949:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x78) = 0;
  return;
}



void Unwind_00f47950(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x50);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x48) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  return;
}



void Unwind_00f47980(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe0) + 4);
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



void Unwind_00f4798b(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x2c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x2c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47993(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x14) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f479c0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x2c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f479d9(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x2c),0xb0);
  return;
}



void Unwind_00f479eb(void)

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



void Unwind_00f479f3(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x2c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47a0c(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x2c),0xb0);
  return;
}



void Unwind_00f47a50(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x009cc9c0(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                    *(undefined4 *)(unaff_EBP + -0x34));
    iVar1 = *(int *)(unaff_EBP + -0x30);
    uVar4 = *(int *)(unaff_EBP + -0x2c) * 0x1c;
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



void Unwind_00f47a80(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    func_0x009cc9c0(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                    *(undefined4 *)(unaff_EBP + -0x3c));
    iVar1 = *(int *)(unaff_EBP + -0x38);
    uVar4 = *(int *)(unaff_EBP + -0x34) * 0x1c;
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



void Unwind_00f47ab0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x2c);
  }
  return;
}



void Unwind_00f47ab8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x009cea80();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x2c);
  }
  return;
}



void Unwind_00f47af0(void)

{
  int unaff_EBP;
  
  func_0x009cc9c0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                  *(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f47b20(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47b28(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed272d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x1c),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xf;
    *(undefined1 *)puVar3 = 0;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47b60(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f1ee5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00775520(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47b90(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(uVar1,0xc,6,FUN_0096c3e0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47b98(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x48,0xc,6,FUN_0096c3e0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47ba3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x90,0xc,6,FUN_0096c3e0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47bb1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0xd8,0xc,6,FUN_0096c360,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47bbf(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  for (iVar2 = *(int *)(unaff_EBP + -0x50); iVar2 != iVar1; iVar2 = iVar2 + 0x6c) {
    func_0x009c3800();
  }
  return;
}



void Unwind_00f47bf0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(uVar1,0xc,6,FUN_0096c3e0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47bf8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x48,0xc,6,FUN_0096c3e0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47c03(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x90,0xc,6,FUN_0096c3e0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47c11(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0xd8,0xc,6,FUN_0096c360,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47c1f(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  for (iVar2 = *(int *)(unaff_EBP + -0x4c); iVar2 != iVar1; iVar2 = iVar2 + 0x6c) {
    func_0x009c3800();
  }
  return;
}



void Unwind_00f47c50(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 8);
  if (0xf < *(uint *)(unaff_EBP + 0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x1c));
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47c58(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f47c90(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47c98(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f1f3ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x2c,uVar1,unaff_EBP + -0x18,unaff_EBP + -0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47cd0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47d10(void)

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



void Unwind_00f47d50(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x18) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47d69(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0xb0);
  return;
}



void Unwind_00f47d7b(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x18) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47d94(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0xb0);
  return;
}



void Unwind_00f47dd0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  func_0x0097c1d0(puVar1,*puVar1);
  func_0x008ab812(*puVar1,0x24);
  return;
}



void Unwind_00f47dd8(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x38) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f47de0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x38) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  func_0x0097c1d0((undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x48));
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0x24);
  return;
}



void Unwind_00f47de8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x009cea80();
    func_0x008ab812(puVar1,0x2c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*(int *)(unaff_EBP + 0x14),0x2c);
  return;
}



void Unwind_00f47df0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + 0x24) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0x24) = 0;
  }
  return;
}



void Unwind_00f47df8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  if (iVar1 != 0) {
    uVar6 = *(int *)(unaff_EBP + 0x24) - iVar1 & 0xfffffffc;
    iVar5 = iVar1;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0x24) = 0;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 0x14);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x009cea80(unaff_ESI);
    func_0x008ab812(puVar2,0x2c);
    puVar2 = puVar3;
  }
  func_0x008ab812(*(int *)(unaff_EBP + 0x14),0x2c);
  return;
}



void Unwind_00f47e00(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x40);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + 0x48) - iVar1 & 0xfffffff8;
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
    *(int *)(unaff_EBP + 0x40) = 0;
    *(undefined4 *)(unaff_EBP + 0x44) = 0;
    *(undefined4 *)(unaff_EBP + 0x48) = 0;
  }
  return;
}



void Unwind_00f47e08(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x34);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + 0x3c) - iVar1 & 0xfffffff8;
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
    *(int *)(unaff_EBP + 0x34) = 0;
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
    *(undefined4 *)(unaff_EBP + 0x3c) = 0;
  }
  return;
}



void Unwind_00f47e10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x28);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar3 = (undefined4 *)*puVar2;
    if (0xf < (uint)puVar2[7]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar2[7],uVar4);
    }
    puVar2[6] = 0;
    puVar2[7] = 0xf;
    *(undefined1 *)puVar1 = 0;
    func_0x008ab812(puVar2,0x20);
    puVar2 = puVar3;
  }
  func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47e18(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x18) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f47e20(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x18) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  func_0x004862a0((undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x28));
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x28),0x20);
  return;
}



void Unwind_00f47e28(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + 0x4c) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + 0x4c) = *(uint *)(unaff_EBP + 0x4c) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + 0x60) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + 0x60) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47e41(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x60),0xb0);
  return;
}



void Unwind_00f47e53(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + 0x4c) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + 0x4c) = *(uint *)(unaff_EBP + 0x4c) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + 0x60) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + 0x60) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47e6c(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x60),0xb0);
  return;
}



void Unwind_00f47e7e(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + 0x4c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + 0x4c) = *(uint *)(unaff_EBP + 0x4c) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + 0x60) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + 0x60) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47e97(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + 0x60),0xb0);
  return;
}



void Unwind_00f47ed0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x34);
  func_0x00961680(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  return;
}



void Unwind_00f47ed8(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
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
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x20) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47ef1(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x28),0xb0);
  return;
}



void Unwind_00f47f03(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x1c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47f1c(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x28),0xb0);
  return;
}



void Unwind_00f47f50(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x24) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f47f58(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x18) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f47f60(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x14) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47f68(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x10) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47f70(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x10) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47fa0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x38) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f47fa8(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f47fb3(void)

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



void Unwind_00f47ff0(void)

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



void Unwind_00f47ff8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x58),0x30);
  }
  return;
}



void Unwind_00f48000(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x58),0x30);
  }
  return;
}



void Unwind_00f48040(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x30);
  }
  return;
}



void Unwind_00f48048(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x30);
  }
  return;
}



void Unwind_00f48050(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
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
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x1c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f48069(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0xb0);
  return;
}



void Unwind_00f480a0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x34) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f480a8(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xcc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xcc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xcc) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xcc) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f480b3(void)

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



void Unwind_00f480f0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x24);
  func_0x00961680(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  return;
}



void Unwind_00f480f8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x30);
  }
  return;
}



void Unwind_00f48100(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x30);
  }
  return;
}



void Unwind_00f48130(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x104);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0xfc) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x104) = 0;
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
    *(undefined4 *)(unaff_EBP + -0xfc) = 0;
  }
  return;
}



void Unwind_00f4813b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -200);
  if (0xf < *(uint *)(unaff_EBP + -0xb4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb4));
  }
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48146(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb0);
  if (0xf < *(uint *)(unaff_EBP + -0x9c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9c));
  }
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48151(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x11c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x11c);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f4815c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48164(void)

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



void Unwind_00f4816c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xe0);
  if (0xf < *(uint *)(unaff_EBP + -0xcc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xcc));
  }
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48177(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xe0);
  if (0xf < *(uint *)(unaff_EBP + -0xcc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xcc));
  }
  *(undefined4 *)(unaff_EBP + -0xd0) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48182(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  uVar5 = *(uint *)(unaff_EBP + -0x50);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -100);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_0097443f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)(unaff_EBP + -100) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x68);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x7c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_0097443f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x98) = gl::ShaderVariableBuffer::vftable;
  iVar1 = *(int *)(unaff_EBP + -0x88);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x80) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66(unaff_ESI);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x98) = gl::ActiveVariable::vftable;
  return;
}



void Unwind_00f4818d(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0xf8);
  *puVar2 = gl::ShaderVariableBuffer::vftable;
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
  *puVar2 = gl::ActiveVariable::vftable;
  return;
}



void Unwind_00f48198(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0xf8);
  puVar2 = (undefined4 *)(iVar1 + 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x30));
  }
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f481e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int iVar7;
  
  piVar1 = (int *)(unaff_EBP + -0x24);
  puVar6 = (undefined4 *)*piVar1;
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(unaff_EBP + -0x20);
    for (; puVar6 != puVar2; puVar6 = puVar6 + 0x3a) {
      pcVar3 = *(code **)*puVar6;
      _guard_check_icall(0);
      (*pcVar3)();
    }
    iVar4 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x1c) - iVar4) / 0xe8) * 0xe8;
    iVar7 = iVar4;
    if (0xfff < uVar5) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar4 - iVar7) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f481e8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int iVar7;
  
  piVar1 = (int *)(unaff_EBP + -0x54);
  puVar6 = (undefined4 *)*piVar1;
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(unaff_EBP + -0x50);
    for (; puVar6 != puVar2; puVar6 = puVar6 + 0x3a) {
      pcVar3 = *(code **)*puVar6;
      _guard_check_icall(0);
      (*pcVar3)();
    }
    iVar4 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x4c) - iVar4) / 0xe8) * 0xe8;
    iVar7 = iVar4;
    if (0xfff < uVar5) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar4 - iVar7) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f481f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int iVar7;
  
  piVar1 = (int *)(unaff_EBP + -0x48);
  puVar6 = (undefined4 *)*piVar1;
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(unaff_EBP + -0x44);
    for (; puVar6 != puVar2; puVar6 = puVar6 + 0x3a) {
      pcVar3 = *(code **)*puVar6;
      _guard_check_icall(0);
      (*pcVar3)();
    }
    iVar4 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x40) - iVar4) / 0xe8) * 0xe8;
    iVar7 = iVar4;
    if (0xfff < uVar5) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar4 - iVar7) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  return;
}



void Unwind_00f481f8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  int iVar7;
  
  piVar1 = (int *)(unaff_EBP + -0x3c);
  puVar6 = (undefined4 *)*piVar1;
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(unaff_EBP + -0x38);
    for (; puVar6 != puVar2; puVar6 = puVar6 + 0x3a) {
      pcVar3 = *(code **)*puVar6;
      _guard_check_icall(0);
      (*pcVar3)();
    }
    iVar4 = *piVar1;
    uVar5 = ((*(int *)(unaff_EBP + -0x34) - iVar4) / 0xe8) * 0xe8;
    iVar7 = iVar4;
    if (0xfff < uVar5) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar4 - iVar7) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar5);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f48200(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  if (*piVar1 != 0) {
    func_0x009cc9c0(*piVar1,*(undefined4 *)(unaff_EBP + -0x2c),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x28) - iVar2) / 0x1c) * 0x1c;
    iVar5 = iVar2;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f48230(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48238(void)

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



void Unwind_00f48240(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar1 = *(int *)(unaff_EBP + -0x98);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x90) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0xe8) = sh::VariableNameVisitor::vftable;
  iVar1 = *(int *)(unaff_EBP + -0xcc);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0xc4) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66(unaff_ESI);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *(undefined4 *)(unaff_EBP + -0xe8) = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f48280(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + 0x50);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x008ace00(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x14);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x14);
  return;
}



void Unwind_00f48288(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + 0x24),0x14);
  }
  return;
}



void Unwind_00f48290(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + 0x1c),0x14);
  }
  return;
}



void Unwind_00f48298(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x38) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + 0x38),0x14);
  }
  return;
}



void Unwind_00f482a0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + 0x40) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + 0x40) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f482a8(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + 0x40) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + 0x40) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f482b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x38) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + 0x38),0x14);
  }
  return;
}



void Unwind_00f482e0(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x48) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f482e8(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x40) = sh::BlockLayoutEncoder::vftable;
  return;
}



void Unwind_00f482f0(void)

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



void Unwind_00f482f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x4c),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48300(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f1f3ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x4c),0x2c,uVar1,unaff_EBP + -0x50,unaff_EBP + -0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48340(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x54);
  return;
}



void Unwind_00f4834f(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar2 = sh::BlockEncoderVisitor::vftable;
  *puVar2 = sh::VariableNameVisitor::vftable;
  iVar1 = puVar2[7];
  if (iVar1 != 0) {
    uVar5 = puVar2[9] - iVar1 & 0xfffffffc;
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
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
  }
  FUN_004c7ec0();
  FUN_004c7ec0();
  *puVar2 = sh::ShaderVariableVisitor::vftable;
  return;
}



void Unwind_00f48380(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x38);
  return;
}



void Unwind_00f483c0(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x58);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x008ace00(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x14);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x14);
  return;
}



void Unwind_00f483c8(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar1 = *(int *)(unaff_EBP + -0x74);
  if (iVar1 != 0) {
    uVar3 = ((*(int *)(unaff_EBP + -0x6c) - iVar1) / 0xc) * 0xc;
    iVar4 = iVar1;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
    *(int *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  return;
}



void Unwind_00f483d0(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x50);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x009ccd00(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f483d8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x5c),0x20);
  }
  return;
}



void Unwind_00f483e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x5c),0x20);
  }
  return;
}



void Unwind_00f483e8(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x84);
  if (iVar1 != 0) {
    uVar3 = *(int *)(unaff_EBP + -0x80) * 0xc;
    iVar4 = iVar1;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  return;
}



void Unwind_00f48420(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x10) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f48439(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0xb0);
  return;
}



void Unwind_00f48470(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00f25ecd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x007d9ca0(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48478(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48480(void)

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



void Unwind_00f48488(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x78) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x78);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f48490(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x70) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x70),0x28,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48498(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2751d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x70) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x70),0x28,uVar1,unaff_EBP + -0x74,unaff_EBP + -0x74);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f484d0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0xf8);
  func_0x009ccd40((undefined4 *)(unaff_EBP + -0xf0),*(undefined4 *)(*(int *)(unaff_EBP + -0xf0) + 4)
                 );
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0xf0),0x3c);
  func_0x00775520(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f484db(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -100);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x88));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  return;
}



void Unwind_00f484e6(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x38));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f484ee(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0xe4);
  func_0x009ccd40((undefined4 *)(unaff_EBP + -0xdc),*(undefined4 *)(*(int *)(unaff_EBP + -0xdc) + 4)
                 );
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0xdc),0x3c);
  func_0x00775520(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f484f9(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x8c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0xb0));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  }
  return;
}



void Unwind_00f48504(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x60));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f4850c(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0xc0);
  cVar2 = *(char *)((int)*(int **)(*piVar1 + 4) + 0xd);
  piVar4 = *(int **)(*piVar1 + 4);
  while (cVar2 == '\0') {
    func_0x009924e0(piVar1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar3;
    cVar2 = *(char *)((int)piVar3 + 0xd);
  }
  func_0x008ab812(*piVar1,0x18);
  return;
}



void Unwind_00f48517(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x108) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x108),0x18);
  }
  return;
}



void Unwind_00f48560(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  func_0x00961680(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  return;
}



void Unwind_00f48568(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x34),0x30);
  }
  return;
}



void Unwind_00f48570(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x34),0x30);
  }
  return;
}



void Unwind_00f485a0(void)

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



void Unwind_00f485a8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x54),0x30);
  }
  return;
}



void Unwind_00f485b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x54),0x30);
  }
  return;
}



void Unwind_00f485f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0xe8);
  if (0xf < *(uint *)(unaff_EBP + 0xfc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0xfc));
  }
  *(undefined4 *)(unaff_EBP + 0xf8) = 0;
  *(undefined4 *)(unaff_EBP + 0xfc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f485fb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x100);
  if (0xf < *(uint *)(unaff_EBP + 0x114)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x114));
  }
  *(undefined4 *)(unaff_EBP + 0x110) = 0;
  *(undefined4 *)(unaff_EBP + 0x114) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48606(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_EBP;
  undefined4 unaff_ESI;
  
  *unaff_EBP = gl::LinkedUniform::vftable;
  iVar1 = unaff_EBP[0x36];
  if (iVar1 != 0) {
    uVar5 = unaff_EBP[0x38] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar5);
    unaff_EBP[0x36] = 0;
    unaff_EBP[0x37] = 0;
    unaff_EBP[0x38] = 0;
  }
  *unaff_EBP = gl::ActiveVariable::vftable;
  uVar5 = unaff_EBP[0x22];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[0x1d];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4,unaff_ESI);
  }
  unaff_EBP[0x21] = 0;
  unaff_EBP[0x22] = 0xf;
  *(undefined1 *)(unaff_EBP + 0x1d) = 0;
  uVar5 = unaff_EBP[0x1c];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[0x17];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4,unaff_ESI);
  }
  unaff_EBP[0x1b] = 0;
  unaff_EBP[0x1c] = 0xf;
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  func_0x0096d4e0();
  iVar1 = unaff_EBP[0x10];
  if (iVar1 != 0) {
    uVar5 = unaff_EBP[0x12] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    unaff_EBP[0x10] = 0;
    unaff_EBP[0x11] = 0;
    unaff_EBP[0x12] = 0;
  }
  uVar5 = unaff_EBP[0xf];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[10];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  unaff_EBP[0xe] = 0;
  unaff_EBP[0xf] = 0xf;
  *(undefined1 *)(unaff_EBP + 10) = 0;
  uVar5 = unaff_EBP[9];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[4];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  unaff_EBP[8] = 0;
  unaff_EBP[9] = 0xf;
  *(undefined1 *)(unaff_EBP + 4) = 0;
  return;
}



void Unwind_00f4860e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x14) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f48650(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0xf0);
  if (0xf < *(uint *)(unaff_EBP + 0x104)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x104));
  }
  *(undefined4 *)(unaff_EBP + 0x100) = 0;
  *(undefined4 *)(unaff_EBP + 0x104) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f4865b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0xd8);
  if (0xf < *(uint *)(unaff_EBP + 0xec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0xec));
  }
  *(undefined4 *)(unaff_EBP + 0xe8) = 0;
  *(undefined4 *)(unaff_EBP + 0xec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48666(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_EBP;
  
  *unaff_EBP = gl::ActiveVariable::vftable;
  uVar5 = unaff_EBP[0x22];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[0x1d];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  unaff_EBP[0x21] = 0;
  unaff_EBP[0x22] = 0xf;
  *(undefined1 *)(unaff_EBP + 0x1d) = 0;
  uVar5 = unaff_EBP[0x1c];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[0x17];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  unaff_EBP[0x1b] = 0;
  unaff_EBP[0x1c] = 0xf;
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  func_0x0096d4e0();
  iVar1 = unaff_EBP[0x10];
  if (iVar1 != 0) {
    uVar5 = unaff_EBP[0x12] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    unaff_EBP[0x10] = 0;
    unaff_EBP[0x11] = 0;
    unaff_EBP[0x12] = 0;
  }
  uVar5 = unaff_EBP[0xf];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[10];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  unaff_EBP[0xe] = 0;
  unaff_EBP[0xf] = 0xf;
  *(undefined1 *)(unaff_EBP + 10) = 0;
  uVar5 = unaff_EBP[9];
  if (0xf < uVar5) {
    iVar1 = unaff_EBP[4];
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  unaff_EBP[8] = 0;
  unaff_EBP[9] = 0xf;
  *(undefined1 *)(unaff_EBP + 4) = 0;
  return;
}



void Unwind_00f486a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f486a8(void)

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



void Unwind_00f486b0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -0x128) = gl::LinkedUniform::vftable;
  iVar1 = *(int *)(unaff_EBP + -0x50);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x48) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x128) = gl::ActiveVariable::vftable;
  uVar5 = *(uint *)(unaff_EBP + -0xa0);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xb4);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4,unaff_ESI);
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb4) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0xb8);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xcc);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4,unaff_ESI);
  }
  *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xcc) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + -0xe8);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xe0) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0xe8) = 0;
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0xec);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x100);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x100) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x104);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x118);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x108) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x118) = 0;
  return;
}



void Unwind_00f486f0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x14);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x28);
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
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f48730(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::BufferFactoryD3D::vftable;
  return;
}



void Unwind_00f48738(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xb4);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0xbc) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_00956e42;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
  }
  iVar1 = *(int *)(iVar2 + 0xa8);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0xb0) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) goto LAB_00956e42;
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
  }
  iVar1 = *(int *)(iVar2 + 0x9c);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0xa4) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_00956e42:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
    *(undefined4 *)(iVar2 + 0xa4) = 0;
  }
  return;
}



void Unwind_00f48743(void)

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
  func_0x008ab4ad(iVar1 + 0x380,0x10,0xee,FUN_00956e50,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48780(void)

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



void Unwind_00f487b0(void)

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



void Unwind_00f487e0(void)

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



void Unwind_00f48810(void)

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



void Unwind_00f48840(void)

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
        func_0x00a32410(0xe,*piVar1,uVar3);
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



void Unwind_00f48870(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x28),0x14);
  }
  return;
}



void Unwind_00f488a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x1c);
  piVar1 = puVar2 + 0x4d3;
  *puVar2 = rx::RendererD3D::vftable;
  func_0x009246b0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  func_0x00956e60();
  func_0x00956d30();
  *puVar2 = rx::BufferFactoryD3D::vftable;
  return;
}



void Unwind_00f488a8(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *(int *)(iVar2 + 0x1598);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x15a0) - iVar1 & 0xfffffffc;
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
    *(int *)(iVar2 + 0x1598) = 0;
    *(undefined4 *)(iVar2 + 0x159c) = 0;
    *(undefined4 *)(iVar2 + 0x15a0) = 0;
  }
  return;
}



void Unwind_00f488b6(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (*(char *)(iVar1 + 0x15ac) != '\0') {
    FreeLibrary(*(HMODULE *)(iVar1 + 0x15b0));
    *(undefined4 *)(iVar1 + 0x15b0) = 0;
    *(undefined4 *)(iVar1 + 0x15b4) = 0;
    *(undefined4 *)(iVar1 + 0x15b8) = 0;
    *(char *)(iVar1 + 0x15ac) = '\0';
  }
  return;
}



void Unwind_00f488c4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  *(undefined ***)(iVar3 + 0x15bc) = rx::RenderStateCache::vftable;
  *(undefined ***)(iVar3 + 0x1650) = angle::base::MRUCacheBase<>::vftable;
  func_0x00a35450();
  func_0x00a356d0();
  *(undefined ***)(iVar3 + 0x1620) = angle::base::MRUCacheBase<>::vftable;
  func_0x00a35330();
  func_0x00a35630();
  *(undefined ***)(iVar3 + 0x15f0) = angle::base::MRUCacheBase<>::vftable;
  func_0x00a353c0();
  func_0x00a35680();
  *(undefined ***)(iVar3 + 0x15c0) = angle::base::MRUCacheBase<>::vftable;
  func_0x00a352a0();
  puVar1 = *(undefined4 **)(iVar3 + 0x15c4);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x00a2c180(unaff_ESI);
    func_0x008ab812(puVar1,0x68);
    puVar1 = puVar2;
  }
  func_0x008ab812(*(int *)(iVar3 + 0x15c4),0x68);
  return;
}



void Unwind_00f488d2(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f43d10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_00a31c20(uVar4);
  FUN_00a31c20();
  uStack_8 = 0;
  func_0x008ab4ad(iVar2 + 0x1c64,0x10,6,FUN_00a31c20);
  iVar1 = *(int *)(iVar2 + 0x1c4c);
  uStack_8 = 0xffffffff;
  if (iVar1 != 0) {
    uVar4 = (*(int *)(iVar2 + 0x1c54) - iVar1 >> 2) * 4;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) goto LAB_00a38d69;
    }
    func_0x008ab812(iVar5,uVar4);
    *(undefined4 *)(iVar2 + 0x1c4c) = 0;
    *(undefined4 *)(iVar2 + 0x1c50) = 0;
    *(undefined4 *)(iVar2 + 0x1c54) = 0;
  }
  func_0x00b4d170();
  func_0x00a7ba90();
  func_0x00a77370();
  uStack_8 = 1;
  func_0x008ab4ad(iVar2 + 0x1b80,0xc,6,FUN_00a38a20);
  uStack_8 = 2;
  func_0x008ab4ad(iVar2 + 0x1b20,0x10,6,FUN_00579770);
  uStack_8 = 0xffffffff;
  func_0x009eaf00();
  iVar1 = *(int *)(iVar2 + 0x1a18);
  if (iVar1 != 0) {
    uVar4 = (*(int *)(iVar2 + 0x1a20) - iVar1 >> 2) * 4;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) goto LAB_00a38d69;
    }
    func_0x008ab812(iVar5,uVar4);
    *(undefined4 *)(iVar2 + 0x1a18) = 0;
    *(undefined4 *)(iVar2 + 0x1a1c) = 0;
    *(undefined4 *)(iVar2 + 0x1a20) = 0;
  }
  iVar1 = *(int *)(iVar2 + 0x1a0c);
  if (iVar1 != 0) {
    uVar4 = (*(int *)(iVar2 + 0x1a14) - iVar1 >> 2) * 4;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
LAB_00a38d69:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *(undefined4 *)(iVar2 + 0x1a0c) = 0;
    *(undefined4 *)(iVar2 + 0x1a10) = 0;
    *(undefined4 *)(iVar2 + 0x1a14) = 0;
  }
  func_0x008ddb80();
  func_0x008ddb80();
  uStack_8 = 3;
  func_0x008ab4ad(iVar2 + 0x198c,0x10,6,FUN_008e4320);
  func_0x008acf70();
  func_0x00a38a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f488e0(void)

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
  piVar1 = *(int **)(iVar3 + 0x1f6c);
  *(undefined ***)(iVar3 + 0x1f68) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar3 + 0x1f6c) = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(8,*piVar1,uVar4);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = *(int **)(iVar3 + 0x1f6c);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(8,*piVar1,uVar4);
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



void Unwind_00f488ee(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x1f78);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f488fc(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x1f88);
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar4;
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *piVar4 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4890a(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x1f8c);
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar4;
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *piVar4 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48918(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *(int *)(iVar2 + 0x218c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x2194) - iVar1 >> 2);
    *(int *)(iVar2 + 0x218c) = 0;
    *(undefined4 *)(iVar2 + 0x2190) = 0;
    *(undefined4 *)(iVar2 + 0x2194) = 0;
  }
  return;
}



void Unwind_00f48926(void)

{
  void *_Memory;
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  _Memory = *(void **)(iVar1 + 0x21a4);
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *(undefined4 *)(iVar1 + 0x21a4) = 0;
  }
  return;
}



void Unwind_00f48934(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x21a8);
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar4;
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *piVar4 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48942(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  for (iVar3 = iVar1 + 0x23c4; iVar3 != iVar1 + 0x2408; iVar3 = iVar3 + 4) {
  }
  for (iVar3 = iVar1 + 0x2408; iVar3 != iVar1 + 0x2490; iVar3 = iVar3 + 8) {
  }
  FUN_00969f30(uVar2);
  func_0x00952cf0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48950(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(iVar4 + 0x24a8) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(iVar4 + 0x24b0);
  *(undefined4 *)(iVar4 + 0x24a8) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(iVar4 + 0x24ac) = 0;
  *(undefined4 *)(iVar4 + 0x24b0) = 0;
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
  piVar2 = *(int **)(iVar4 + 0x24b0);
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



void FUN_00f48980(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f489c0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x24d0);
  return;
}



void Unwind_00f48a00(void)

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
        func_0x00a32410(0xf,*piVar1,uVar3);
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
        func_0x00a32410(0xf,*piVar1,uVar3);
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



void Unwind_00f48a30(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x118) = rx::TextureHelper11::vftable;
  piVar2 = *(int **)(unaff_EBP + -0x110);
  *(undefined4 *)(unaff_EBP + -0x118) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x114) = 0;
  *(undefined4 *)(unaff_EBP + -0x110) = 0;
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
  piVar2 = *(int **)(unaff_EBP + -0x110);
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



void Unwind_00f48a3b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xb0);
  *(undefined ***)(unaff_EBP + -0xb8) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
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
  piVar2 = *(int **)(unaff_EBP + -0xb0);
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



void Unwind_00f48a46(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x8c);
  *(undefined ***)(unaff_EBP + -0x90) = rx::Resource11Base<>::vftable;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
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
  piVar1 = *(int **)(unaff_EBP + -0x8c);
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



void Unwind_00f48a80(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x2c) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48a88(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x18);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x18) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48a90(void)

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



void Unwind_00f48ad0(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x30);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x30) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48ad8(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x28);
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    *(int *)(unaff_EBP + -0x28) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f48b10(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x164) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x164) + 4);
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



void Unwind_00f48b1b(void)

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



void Unwind_00f48b23(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f48b2b(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar1 = (int *)(unaff_EBP + -0x84);
  if (*piVar1 != 0) {
    func_0x009dc9f0(*piVar1,*(undefined4 *)(unaff_EBP + -0x80),piVar1);
    iVar2 = *piVar1;
    uVar4 = ((*(int *)(unaff_EBP + -0x7c) - iVar2) / 0x1c) * 0x1c;
    iVar5 = iVar2;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  return;
}



void Unwind_00f48b36(void)

{
  undefined4 *puVar1;
